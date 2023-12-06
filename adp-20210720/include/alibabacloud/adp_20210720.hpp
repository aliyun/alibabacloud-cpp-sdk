// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_ADP20210720_H_
#define ALIBABACLOUD_ADP20210720_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Adp20210720 {
class Platform : public Darabonba::Model {
public:
  shared_ptr<string> architecture{};
  shared_ptr<string> os{};

  Platform() {}

  explicit Platform(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (architecture) {
      res["architecture"] = boost::any(*architecture);
    }
    if (os) {
      res["os"] = boost::any(*os);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("architecture") != m.end() && !m["architecture"].empty()) {
      architecture = make_shared<string>(boost::any_cast<string>(m["architecture"]));
    }
    if (m.find("os") != m.end() && !m["os"].empty()) {
      os = make_shared<string>(boost::any_cast<string>(m["os"]));
    }
  }


  virtual ~Platform() = default;
};
class ComponentVersion : public Darabonba::Model {
public:
  shared_ptr<string> appVersion{};
  shared_ptr<string> componentName{};
  shared_ptr<string> componentUID{};
  shared_ptr<string> description{};
  shared_ptr<string> documents{};
  shared_ptr<string> imagesMapping{};
  shared_ptr<string> namespace_{};
  shared_ptr<string> orchestrationType{};
  shared_ptr<string> orchestrationValues{};
  shared_ptr<string> packageURL{};
  shared_ptr<bool> parentComponent{};
  shared_ptr<vector<Platform>> platforms{};
  shared_ptr<string> readme{};
  shared_ptr<string> resources{};
  shared_ptr<string> source{};
  shared_ptr<string> uid{};
  shared_ptr<string> version{};

  ComponentVersion() {}

  explicit ComponentVersion(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appVersion) {
      res["appVersion"] = boost::any(*appVersion);
    }
    if (componentName) {
      res["componentName"] = boost::any(*componentName);
    }
    if (componentUID) {
      res["componentUID"] = boost::any(*componentUID);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (documents) {
      res["documents"] = boost::any(*documents);
    }
    if (imagesMapping) {
      res["imagesMapping"] = boost::any(*imagesMapping);
    }
    if (namespace_) {
      res["namespace"] = boost::any(*namespace_);
    }
    if (orchestrationType) {
      res["orchestrationType"] = boost::any(*orchestrationType);
    }
    if (orchestrationValues) {
      res["orchestrationValues"] = boost::any(*orchestrationValues);
    }
    if (packageURL) {
      res["packageURL"] = boost::any(*packageURL);
    }
    if (parentComponent) {
      res["parentComponent"] = boost::any(*parentComponent);
    }
    if (platforms) {
      vector<boost::any> temp1;
      for(auto item1:*platforms){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["platforms"] = boost::any(temp1);
    }
    if (readme) {
      res["readme"] = boost::any(*readme);
    }
    if (resources) {
      res["resources"] = boost::any(*resources);
    }
    if (source) {
      res["source"] = boost::any(*source);
    }
    if (uid) {
      res["uid"] = boost::any(*uid);
    }
    if (version) {
      res["version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("appVersion") != m.end() && !m["appVersion"].empty()) {
      appVersion = make_shared<string>(boost::any_cast<string>(m["appVersion"]));
    }
    if (m.find("componentName") != m.end() && !m["componentName"].empty()) {
      componentName = make_shared<string>(boost::any_cast<string>(m["componentName"]));
    }
    if (m.find("componentUID") != m.end() && !m["componentUID"].empty()) {
      componentUID = make_shared<string>(boost::any_cast<string>(m["componentUID"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("documents") != m.end() && !m["documents"].empty()) {
      documents = make_shared<string>(boost::any_cast<string>(m["documents"]));
    }
    if (m.find("imagesMapping") != m.end() && !m["imagesMapping"].empty()) {
      imagesMapping = make_shared<string>(boost::any_cast<string>(m["imagesMapping"]));
    }
    if (m.find("namespace") != m.end() && !m["namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["namespace"]));
    }
    if (m.find("orchestrationType") != m.end() && !m["orchestrationType"].empty()) {
      orchestrationType = make_shared<string>(boost::any_cast<string>(m["orchestrationType"]));
    }
    if (m.find("orchestrationValues") != m.end() && !m["orchestrationValues"].empty()) {
      orchestrationValues = make_shared<string>(boost::any_cast<string>(m["orchestrationValues"]));
    }
    if (m.find("packageURL") != m.end() && !m["packageURL"].empty()) {
      packageURL = make_shared<string>(boost::any_cast<string>(m["packageURL"]));
    }
    if (m.find("parentComponent") != m.end() && !m["parentComponent"].empty()) {
      parentComponent = make_shared<bool>(boost::any_cast<bool>(m["parentComponent"]));
    }
    if (m.find("platforms") != m.end() && !m["platforms"].empty()) {
      if (typeid(vector<boost::any>) == m["platforms"].type()) {
        vector<Platform> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["platforms"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Platform model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        platforms = make_shared<vector<Platform>>(expect1);
      }
    }
    if (m.find("readme") != m.end() && !m["readme"].empty()) {
      readme = make_shared<string>(boost::any_cast<string>(m["readme"]));
    }
    if (m.find("resources") != m.end() && !m["resources"].empty()) {
      resources = make_shared<string>(boost::any_cast<string>(m["resources"]));
    }
    if (m.find("source") != m.end() && !m["source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["source"]));
    }
    if (m.find("uid") != m.end() && !m["uid"].empty()) {
      uid = make_shared<string>(boost::any_cast<string>(m["uid"]));
    }
    if (m.find("version") != m.end() && !m["version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["version"]));
    }
  }


  virtual ~ComponentVersion() = default;
};
class Disk : public Darabonba::Model {
public:
  shared_ptr<long> capacity{};
  shared_ptr<string> fsType{};
  shared_ptr<string> mountPoint{};
  shared_ptr<string> name{};
  shared_ptr<long> remain{};
  shared_ptr<string> type{};

  Disk() {}

  explicit Disk(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (capacity) {
      res["capacity"] = boost::any(*capacity);
    }
    if (fsType) {
      res["fsType"] = boost::any(*fsType);
    }
    if (mountPoint) {
      res["mountPoint"] = boost::any(*mountPoint);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (remain) {
      res["remain"] = boost::any(*remain);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("capacity") != m.end() && !m["capacity"].empty()) {
      capacity = make_shared<long>(boost::any_cast<long>(m["capacity"]));
    }
    if (m.find("fsType") != m.end() && !m["fsType"].empty()) {
      fsType = make_shared<string>(boost::any_cast<string>(m["fsType"]));
    }
    if (m.find("mountPoint") != m.end() && !m["mountPoint"].empty()) {
      mountPoint = make_shared<string>(boost::any_cast<string>(m["mountPoint"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("remain") != m.end() && !m["remain"].empty()) {
      remain = make_shared<long>(boost::any_cast<long>(m["remain"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~Disk() = default;
};
class ExportPort : public Darabonba::Model {
public:
  shared_ptr<string> cidrIP{};
  shared_ptr<string> portRange{};
  shared_ptr<string> protocol{};
  shared_ptr<bool> unallowed{};

  ExportPort() {}

  explicit ExportPort(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cidrIP) {
      res["cidrIP"] = boost::any(*cidrIP);
    }
    if (portRange) {
      res["portRange"] = boost::any(*portRange);
    }
    if (protocol) {
      res["protocol"] = boost::any(*protocol);
    }
    if (unallowed) {
      res["unallowed"] = boost::any(*unallowed);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("cidrIP") != m.end() && !m["cidrIP"].empty()) {
      cidrIP = make_shared<string>(boost::any_cast<string>(m["cidrIP"]));
    }
    if (m.find("portRange") != m.end() && !m["portRange"].empty()) {
      portRange = make_shared<string>(boost::any_cast<string>(m["portRange"]));
    }
    if (m.find("protocol") != m.end() && !m["protocol"].empty()) {
      protocol = make_shared<string>(boost::any_cast<string>(m["protocol"]));
    }
    if (m.find("unallowed") != m.end() && !m["unallowed"].empty()) {
      unallowed = make_shared<bool>(boost::any_cast<bool>(m["unallowed"]));
    }
  }


  virtual ~ExportPort() = default;
};
class FoundationComponentReferenceDetail : public Darabonba::Model {
public:
  shared_ptr<string> appVersion{};
  shared_ptr<string> category{};
  shared_ptr<string> class_{};
  shared_ptr<string> componentDescription{};
  shared_ptr<string> componentName{};
  shared_ptr<string> componentReferenceUID{};
  shared_ptr<string> componentUID{};
  shared_ptr<string> componentVersionDescription{};
  shared_ptr<string> componentVersionUID{};
  shared_ptr<string> createdAt{};
  shared_ptr<string> documents{};
  shared_ptr<bool> enable{};
  shared_ptr<string> imagesMapping{};
  shared_ptr<string> namespace_{};
  shared_ptr<string> orchestrationType{};
  shared_ptr<string> orchestrationValues{};
  shared_ptr<bool> parentComponent{};
  shared_ptr<string> parentComponentVersionUID{};
  shared_ptr<long> priority{};
  shared_ptr<string> provider{};
  shared_ptr<bool> public_{};
  shared_ptr<string> readme{};
  shared_ptr<string> relationUID{};
  shared_ptr<string> releaseName{};
  shared_ptr<string> resources{};
  shared_ptr<long> sequence{};
  shared_ptr<bool> singleton{};
  shared_ptr<string> source{};
  shared_ptr<string> values{};
  shared_ptr<string> version{};

  FoundationComponentReferenceDetail() {}

  explicit FoundationComponentReferenceDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appVersion) {
      res["appVersion"] = boost::any(*appVersion);
    }
    if (category) {
      res["category"] = boost::any(*category);
    }
    if (class_) {
      res["class"] = boost::any(*class_);
    }
    if (componentDescription) {
      res["componentDescription"] = boost::any(*componentDescription);
    }
    if (componentName) {
      res["componentName"] = boost::any(*componentName);
    }
    if (componentReferenceUID) {
      res["componentReferenceUID"] = boost::any(*componentReferenceUID);
    }
    if (componentUID) {
      res["componentUID"] = boost::any(*componentUID);
    }
    if (componentVersionDescription) {
      res["componentVersionDescription"] = boost::any(*componentVersionDescription);
    }
    if (componentVersionUID) {
      res["componentVersionUID"] = boost::any(*componentVersionUID);
    }
    if (createdAt) {
      res["createdAt"] = boost::any(*createdAt);
    }
    if (documents) {
      res["documents"] = boost::any(*documents);
    }
    if (enable) {
      res["enable"] = boost::any(*enable);
    }
    if (imagesMapping) {
      res["imagesMapping"] = boost::any(*imagesMapping);
    }
    if (namespace_) {
      res["namespace"] = boost::any(*namespace_);
    }
    if (orchestrationType) {
      res["orchestrationType"] = boost::any(*orchestrationType);
    }
    if (orchestrationValues) {
      res["orchestrationValues"] = boost::any(*orchestrationValues);
    }
    if (parentComponent) {
      res["parentComponent"] = boost::any(*parentComponent);
    }
    if (parentComponentVersionUID) {
      res["parentComponentVersionUID"] = boost::any(*parentComponentVersionUID);
    }
    if (priority) {
      res["priority"] = boost::any(*priority);
    }
    if (provider) {
      res["provider"] = boost::any(*provider);
    }
    if (public_) {
      res["public"] = boost::any(*public_);
    }
    if (readme) {
      res["readme"] = boost::any(*readme);
    }
    if (relationUID) {
      res["relationUID"] = boost::any(*relationUID);
    }
    if (releaseName) {
      res["releaseName"] = boost::any(*releaseName);
    }
    if (resources) {
      res["resources"] = boost::any(*resources);
    }
    if (sequence) {
      res["sequence"] = boost::any(*sequence);
    }
    if (singleton) {
      res["singleton"] = boost::any(*singleton);
    }
    if (source) {
      res["source"] = boost::any(*source);
    }
    if (values) {
      res["values"] = boost::any(*values);
    }
    if (version) {
      res["version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("appVersion") != m.end() && !m["appVersion"].empty()) {
      appVersion = make_shared<string>(boost::any_cast<string>(m["appVersion"]));
    }
    if (m.find("category") != m.end() && !m["category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["category"]));
    }
    if (m.find("class") != m.end() && !m["class"].empty()) {
      class_ = make_shared<string>(boost::any_cast<string>(m["class"]));
    }
    if (m.find("componentDescription") != m.end() && !m["componentDescription"].empty()) {
      componentDescription = make_shared<string>(boost::any_cast<string>(m["componentDescription"]));
    }
    if (m.find("componentName") != m.end() && !m["componentName"].empty()) {
      componentName = make_shared<string>(boost::any_cast<string>(m["componentName"]));
    }
    if (m.find("componentReferenceUID") != m.end() && !m["componentReferenceUID"].empty()) {
      componentReferenceUID = make_shared<string>(boost::any_cast<string>(m["componentReferenceUID"]));
    }
    if (m.find("componentUID") != m.end() && !m["componentUID"].empty()) {
      componentUID = make_shared<string>(boost::any_cast<string>(m["componentUID"]));
    }
    if (m.find("componentVersionDescription") != m.end() && !m["componentVersionDescription"].empty()) {
      componentVersionDescription = make_shared<string>(boost::any_cast<string>(m["componentVersionDescription"]));
    }
    if (m.find("componentVersionUID") != m.end() && !m["componentVersionUID"].empty()) {
      componentVersionUID = make_shared<string>(boost::any_cast<string>(m["componentVersionUID"]));
    }
    if (m.find("createdAt") != m.end() && !m["createdAt"].empty()) {
      createdAt = make_shared<string>(boost::any_cast<string>(m["createdAt"]));
    }
    if (m.find("documents") != m.end() && !m["documents"].empty()) {
      documents = make_shared<string>(boost::any_cast<string>(m["documents"]));
    }
    if (m.find("enable") != m.end() && !m["enable"].empty()) {
      enable = make_shared<bool>(boost::any_cast<bool>(m["enable"]));
    }
    if (m.find("imagesMapping") != m.end() && !m["imagesMapping"].empty()) {
      imagesMapping = make_shared<string>(boost::any_cast<string>(m["imagesMapping"]));
    }
    if (m.find("namespace") != m.end() && !m["namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["namespace"]));
    }
    if (m.find("orchestrationType") != m.end() && !m["orchestrationType"].empty()) {
      orchestrationType = make_shared<string>(boost::any_cast<string>(m["orchestrationType"]));
    }
    if (m.find("orchestrationValues") != m.end() && !m["orchestrationValues"].empty()) {
      orchestrationValues = make_shared<string>(boost::any_cast<string>(m["orchestrationValues"]));
    }
    if (m.find("parentComponent") != m.end() && !m["parentComponent"].empty()) {
      parentComponent = make_shared<bool>(boost::any_cast<bool>(m["parentComponent"]));
    }
    if (m.find("parentComponentVersionUID") != m.end() && !m["parentComponentVersionUID"].empty()) {
      parentComponentVersionUID = make_shared<string>(boost::any_cast<string>(m["parentComponentVersionUID"]));
    }
    if (m.find("priority") != m.end() && !m["priority"].empty()) {
      priority = make_shared<long>(boost::any_cast<long>(m["priority"]));
    }
    if (m.find("provider") != m.end() && !m["provider"].empty()) {
      provider = make_shared<string>(boost::any_cast<string>(m["provider"]));
    }
    if (m.find("public") != m.end() && !m["public"].empty()) {
      public_ = make_shared<bool>(boost::any_cast<bool>(m["public"]));
    }
    if (m.find("readme") != m.end() && !m["readme"].empty()) {
      readme = make_shared<string>(boost::any_cast<string>(m["readme"]));
    }
    if (m.find("relationUID") != m.end() && !m["relationUID"].empty()) {
      relationUID = make_shared<string>(boost::any_cast<string>(m["relationUID"]));
    }
    if (m.find("releaseName") != m.end() && !m["releaseName"].empty()) {
      releaseName = make_shared<string>(boost::any_cast<string>(m["releaseName"]));
    }
    if (m.find("resources") != m.end() && !m["resources"].empty()) {
      resources = make_shared<string>(boost::any_cast<string>(m["resources"]));
    }
    if (m.find("sequence") != m.end() && !m["sequence"].empty()) {
      sequence = make_shared<long>(boost::any_cast<long>(m["sequence"]));
    }
    if (m.find("singleton") != m.end() && !m["singleton"].empty()) {
      singleton = make_shared<bool>(boost::any_cast<bool>(m["singleton"]));
    }
    if (m.find("source") != m.end() && !m["source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["source"]));
    }
    if (m.find("values") != m.end() && !m["values"].empty()) {
      values = make_shared<string>(boost::any_cast<string>(m["values"]));
    }
    if (m.find("version") != m.end() && !m["version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["version"]));
    }
  }


  virtual ~FoundationComponentReferenceDetail() = default;
};
class FoundationVersionClusterEnginesInfrastructureStatements : public Darabonba::Model {
public:
  shared_ptr<bool> default_{};
  shared_ptr<string> distroName{};
  shared_ptr<string> distroVersion{};
  shared_ptr<Platform> platform{};

  FoundationVersionClusterEnginesInfrastructureStatements() {}

  explicit FoundationVersionClusterEnginesInfrastructureStatements(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (default_) {
      res["default"] = boost::any(*default_);
    }
    if (distroName) {
      res["distroName"] = boost::any(*distroName);
    }
    if (distroVersion) {
      res["distroVersion"] = boost::any(*distroVersion);
    }
    if (platform) {
      res["platform"] = platform ? boost::any(platform->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("default") != m.end() && !m["default"].empty()) {
      default_ = make_shared<bool>(boost::any_cast<bool>(m["default"]));
    }
    if (m.find("distroName") != m.end() && !m["distroName"].empty()) {
      distroName = make_shared<string>(boost::any_cast<string>(m["distroName"]));
    }
    if (m.find("distroVersion") != m.end() && !m["distroVersion"].empty()) {
      distroVersion = make_shared<string>(boost::any_cast<string>(m["distroVersion"]));
    }
    if (m.find("platform") != m.end() && !m["platform"].empty()) {
      if (typeid(map<string, boost::any>) == m["platform"].type()) {
        Platform model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["platform"]));
        platform = make_shared<Platform>(model1);
      }
    }
  }


  virtual ~FoundationVersionClusterEnginesInfrastructureStatements() = default;
};
class FoundationVersionClusterEnginesNetworkList : public Darabonba::Model {
public:
  shared_ptr<vector<string>> ipFamilies{};
  shared_ptr<string> name{};

  FoundationVersionClusterEnginesNetworkList() {}

  explicit FoundationVersionClusterEnginesNetworkList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ipFamilies) {
      res["ipFamilies"] = boost::any(*ipFamilies);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ipFamilies") != m.end() && !m["ipFamilies"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ipFamilies"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ipFamilies"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      ipFamilies = make_shared<vector<string>>(toVec1);
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
  }


  virtual ~FoundationVersionClusterEnginesNetworkList() = default;
};
class FoundationVersionClusterEnginesPackageToolsInstallToolPackages : public Darabonba::Model {
public:
  shared_ptr<string> architecture{};
  shared_ptr<string> os{};
  shared_ptr<string> url{};

  FoundationVersionClusterEnginesPackageToolsInstallToolPackages() {}

  explicit FoundationVersionClusterEnginesPackageToolsInstallToolPackages(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (architecture) {
      res["architecture"] = boost::any(*architecture);
    }
    if (os) {
      res["os"] = boost::any(*os);
    }
    if (url) {
      res["url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("architecture") != m.end() && !m["architecture"].empty()) {
      architecture = make_shared<string>(boost::any_cast<string>(m["architecture"]));
    }
    if (m.find("os") != m.end() && !m["os"].empty()) {
      os = make_shared<string>(boost::any_cast<string>(m["os"]));
    }
    if (m.find("url") != m.end() && !m["url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["url"]));
    }
  }


  virtual ~FoundationVersionClusterEnginesPackageToolsInstallToolPackages() = default;
};
class FoundationVersionClusterEnginesPackageTools : public Darabonba::Model {
public:
  shared_ptr<string> image{};
  shared_ptr<vector<FoundationVersionClusterEnginesPackageToolsInstallToolPackages>> installToolPackages{};
  shared_ptr<string> name{};
  shared_ptr<string> packageFormat{};
  shared_ptr<string> type{};
  shared_ptr<string> version{};

  FoundationVersionClusterEnginesPackageTools() {}

  explicit FoundationVersionClusterEnginesPackageTools(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (image) {
      res["image"] = boost::any(*image);
    }
    if (installToolPackages) {
      vector<boost::any> temp1;
      for(auto item1:*installToolPackages){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["installToolPackages"] = boost::any(temp1);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (packageFormat) {
      res["packageFormat"] = boost::any(*packageFormat);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (version) {
      res["version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("image") != m.end() && !m["image"].empty()) {
      image = make_shared<string>(boost::any_cast<string>(m["image"]));
    }
    if (m.find("installToolPackages") != m.end() && !m["installToolPackages"].empty()) {
      if (typeid(vector<boost::any>) == m["installToolPackages"].type()) {
        vector<FoundationVersionClusterEnginesPackageToolsInstallToolPackages> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["installToolPackages"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            FoundationVersionClusterEnginesPackageToolsInstallToolPackages model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        installToolPackages = make_shared<vector<FoundationVersionClusterEnginesPackageToolsInstallToolPackages>>(expect1);
      }
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("packageFormat") != m.end() && !m["packageFormat"].empty()) {
      packageFormat = make_shared<string>(boost::any_cast<string>(m["packageFormat"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("version") != m.end() && !m["version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["version"]));
    }
  }


  virtual ~FoundationVersionClusterEnginesPackageTools() = default;
};
class FoundationVersionClusterEnginesPackages : public Darabonba::Model {
public:
  shared_ptr<string> architecture{};
  shared_ptr<string> os{};
  shared_ptr<vector<Platform>> platforms{};
  shared_ptr<string> url{};

  FoundationVersionClusterEnginesPackages() {}

  explicit FoundationVersionClusterEnginesPackages(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (architecture) {
      res["architecture"] = boost::any(*architecture);
    }
    if (os) {
      res["os"] = boost::any(*os);
    }
    if (platforms) {
      vector<boost::any> temp1;
      for(auto item1:*platforms){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["platforms"] = boost::any(temp1);
    }
    if (url) {
      res["url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("architecture") != m.end() && !m["architecture"].empty()) {
      architecture = make_shared<string>(boost::any_cast<string>(m["architecture"]));
    }
    if (m.find("os") != m.end() && !m["os"].empty()) {
      os = make_shared<string>(boost::any_cast<string>(m["os"]));
    }
    if (m.find("platforms") != m.end() && !m["platforms"].empty()) {
      if (typeid(vector<boost::any>) == m["platforms"].type()) {
        vector<Platform> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["platforms"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Platform model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        platforms = make_shared<vector<Platform>>(expect1);
      }
    }
    if (m.find("url") != m.end() && !m["url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["url"]));
    }
  }


  virtual ~FoundationVersionClusterEnginesPackages() = default;
};
class FoundationVersionClusterEngines : public Darabonba::Model {
public:
  shared_ptr<vector<FoundationVersionClusterEnginesInfrastructureStatements>> infrastructureStatements{};
  shared_ptr<vector<FoundationVersionClusterEnginesNetworkList>> networkList{};
  shared_ptr<vector<FoundationVersionClusterEnginesPackageTools>> packageTools{};
  shared_ptr<vector<FoundationVersionClusterEnginesPackages>> packages{};
  shared_ptr<string> type{};
  shared_ptr<string> version{};

  FoundationVersionClusterEngines() {}

  explicit FoundationVersionClusterEngines(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (infrastructureStatements) {
      vector<boost::any> temp1;
      for(auto item1:*infrastructureStatements){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["infrastructureStatements"] = boost::any(temp1);
    }
    if (networkList) {
      vector<boost::any> temp1;
      for(auto item1:*networkList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["networkList"] = boost::any(temp1);
    }
    if (packageTools) {
      vector<boost::any> temp1;
      for(auto item1:*packageTools){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["packageTools"] = boost::any(temp1);
    }
    if (packages) {
      vector<boost::any> temp1;
      for(auto item1:*packages){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["packages"] = boost::any(temp1);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (version) {
      res["version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("infrastructureStatements") != m.end() && !m["infrastructureStatements"].empty()) {
      if (typeid(vector<boost::any>) == m["infrastructureStatements"].type()) {
        vector<FoundationVersionClusterEnginesInfrastructureStatements> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["infrastructureStatements"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            FoundationVersionClusterEnginesInfrastructureStatements model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        infrastructureStatements = make_shared<vector<FoundationVersionClusterEnginesInfrastructureStatements>>(expect1);
      }
    }
    if (m.find("networkList") != m.end() && !m["networkList"].empty()) {
      if (typeid(vector<boost::any>) == m["networkList"].type()) {
        vector<FoundationVersionClusterEnginesNetworkList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["networkList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            FoundationVersionClusterEnginesNetworkList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        networkList = make_shared<vector<FoundationVersionClusterEnginesNetworkList>>(expect1);
      }
    }
    if (m.find("packageTools") != m.end() && !m["packageTools"].empty()) {
      if (typeid(vector<boost::any>) == m["packageTools"].type()) {
        vector<FoundationVersionClusterEnginesPackageTools> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["packageTools"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            FoundationVersionClusterEnginesPackageTools model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        packageTools = make_shared<vector<FoundationVersionClusterEnginesPackageTools>>(expect1);
      }
    }
    if (m.find("packages") != m.end() && !m["packages"].empty()) {
      if (typeid(vector<boost::any>) == m["packages"].type()) {
        vector<FoundationVersionClusterEnginesPackages> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["packages"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            FoundationVersionClusterEnginesPackages model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        packages = make_shared<vector<FoundationVersionClusterEnginesPackages>>(expect1);
      }
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("version") != m.end() && !m["version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["version"]));
    }
  }


  virtual ~FoundationVersionClusterEngines() = default;
};
class FoundationVersionDriverComponents : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> version{};

  FoundationVersionDriverComponents() {}

  explicit FoundationVersionDriverComponents(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (version) {
      res["version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("version") != m.end() && !m["version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["version"]));
    }
  }


  virtual ~FoundationVersionDriverComponents() = default;
};
class FoundationVersionDriver : public Darabonba::Model {
public:
  shared_ptr<vector<FoundationVersionDriverComponents>> components{};

  FoundationVersionDriver() {}

  explicit FoundationVersionDriver(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (components) {
      vector<boost::any> temp1;
      for(auto item1:*components){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["components"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("components") != m.end() && !m["components"].empty()) {
      if (typeid(vector<boost::any>) == m["components"].type()) {
        vector<FoundationVersionDriverComponents> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["components"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            FoundationVersionDriverComponents model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        components = make_shared<vector<FoundationVersionDriverComponents>>(expect1);
      }
    }
  }


  virtual ~FoundationVersionDriver() = default;
};
class FoundationVersionPackageTools : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> version{};

  FoundationVersionPackageTools() {}

  explicit FoundationVersionPackageTools(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (version) {
      res["version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("version") != m.end() && !m["version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["version"]));
    }
  }


  virtual ~FoundationVersionPackageTools() = default;
};
class FoundationVersionToolsSiteSurvey : public Darabonba::Model {
public:
  shared_ptr<string> clusterCheckerURL{};
  shared_ptr<string> clusterInfoBrief{};

  FoundationVersionToolsSiteSurvey() {}

  explicit FoundationVersionToolsSiteSurvey(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterCheckerURL) {
      res["clusterCheckerURL"] = boost::any(*clusterCheckerURL);
    }
    if (clusterInfoBrief) {
      res["clusterInfoBrief"] = boost::any(*clusterInfoBrief);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("clusterCheckerURL") != m.end() && !m["clusterCheckerURL"].empty()) {
      clusterCheckerURL = make_shared<string>(boost::any_cast<string>(m["clusterCheckerURL"]));
    }
    if (m.find("clusterInfoBrief") != m.end() && !m["clusterInfoBrief"].empty()) {
      clusterInfoBrief = make_shared<string>(boost::any_cast<string>(m["clusterInfoBrief"]));
    }
  }


  virtual ~FoundationVersionToolsSiteSurvey() = default;
};
class FoundationVersionTools : public Darabonba::Model {
public:
  shared_ptr<FoundationVersionToolsSiteSurvey> siteSurvey{};

  FoundationVersionTools() {}

  explicit FoundationVersionTools(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (siteSurvey) {
      res["siteSurvey"] = siteSurvey ? boost::any(siteSurvey->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("siteSurvey") != m.end() && !m["siteSurvey"].empty()) {
      if (typeid(map<string, boost::any>) == m["siteSurvey"].type()) {
        FoundationVersionToolsSiteSurvey model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["siteSurvey"]));
        siteSurvey = make_shared<FoundationVersionToolsSiteSurvey>(model1);
      }
    }
  }


  virtual ~FoundationVersionTools() = default;
};
class FoundationVersion : public Darabonba::Model {
public:
  shared_ptr<string> clusterConfigSchema{};
  shared_ptr<vector<FoundationVersionClusterEngines>> clusterEngines{};
  shared_ptr<string> defaultClusterConfig{};
  shared_ptr<string> description{};
  shared_ptr<string> documents{};
  shared_ptr<FoundationVersionDriver> driver{};
  shared_ptr<vector<string>> features{};
  shared_ptr<bool> isDefault{};
  shared_ptr<string> labels{};
  shared_ptr<string> name{};
  shared_ptr<vector<FoundationVersionPackageTools>> packageTools{};
  shared_ptr<vector<Platform>> platforms{};
  shared_ptr<string> specName{};
  shared_ptr<string> status{};
  shared_ptr<FoundationVersionTools> tools{};
  shared_ptr<string> type{};
  shared_ptr<string> uid{};
  shared_ptr<vector<string>> userWhiteList{};
  shared_ptr<string> version{};

  FoundationVersion() {}

  explicit FoundationVersion(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterConfigSchema) {
      res["clusterConfigSchema"] = boost::any(*clusterConfigSchema);
    }
    if (clusterEngines) {
      vector<boost::any> temp1;
      for(auto item1:*clusterEngines){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["clusterEngines"] = boost::any(temp1);
    }
    if (defaultClusterConfig) {
      res["defaultClusterConfig"] = boost::any(*defaultClusterConfig);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (documents) {
      res["documents"] = boost::any(*documents);
    }
    if (driver) {
      res["driver"] = driver ? boost::any(driver->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (features) {
      res["features"] = boost::any(*features);
    }
    if (isDefault) {
      res["isDefault"] = boost::any(*isDefault);
    }
    if (labels) {
      res["labels"] = boost::any(*labels);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (packageTools) {
      vector<boost::any> temp1;
      for(auto item1:*packageTools){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["packageTools"] = boost::any(temp1);
    }
    if (platforms) {
      vector<boost::any> temp1;
      for(auto item1:*platforms){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["platforms"] = boost::any(temp1);
    }
    if (specName) {
      res["specName"] = boost::any(*specName);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (tools) {
      res["tools"] = tools ? boost::any(tools->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (uid) {
      res["uid"] = boost::any(*uid);
    }
    if (userWhiteList) {
      res["userWhiteList"] = boost::any(*userWhiteList);
    }
    if (version) {
      res["version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("clusterConfigSchema") != m.end() && !m["clusterConfigSchema"].empty()) {
      clusterConfigSchema = make_shared<string>(boost::any_cast<string>(m["clusterConfigSchema"]));
    }
    if (m.find("clusterEngines") != m.end() && !m["clusterEngines"].empty()) {
      if (typeid(vector<boost::any>) == m["clusterEngines"].type()) {
        vector<FoundationVersionClusterEngines> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["clusterEngines"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            FoundationVersionClusterEngines model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        clusterEngines = make_shared<vector<FoundationVersionClusterEngines>>(expect1);
      }
    }
    if (m.find("defaultClusterConfig") != m.end() && !m["defaultClusterConfig"].empty()) {
      defaultClusterConfig = make_shared<string>(boost::any_cast<string>(m["defaultClusterConfig"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("documents") != m.end() && !m["documents"].empty()) {
      documents = make_shared<string>(boost::any_cast<string>(m["documents"]));
    }
    if (m.find("driver") != m.end() && !m["driver"].empty()) {
      if (typeid(map<string, boost::any>) == m["driver"].type()) {
        FoundationVersionDriver model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["driver"]));
        driver = make_shared<FoundationVersionDriver>(model1);
      }
    }
    if (m.find("features") != m.end() && !m["features"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["features"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["features"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      features = make_shared<vector<string>>(toVec1);
    }
    if (m.find("isDefault") != m.end() && !m["isDefault"].empty()) {
      isDefault = make_shared<bool>(boost::any_cast<bool>(m["isDefault"]));
    }
    if (m.find("labels") != m.end() && !m["labels"].empty()) {
      labels = make_shared<string>(boost::any_cast<string>(m["labels"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("packageTools") != m.end() && !m["packageTools"].empty()) {
      if (typeid(vector<boost::any>) == m["packageTools"].type()) {
        vector<FoundationVersionPackageTools> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["packageTools"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            FoundationVersionPackageTools model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        packageTools = make_shared<vector<FoundationVersionPackageTools>>(expect1);
      }
    }
    if (m.find("platforms") != m.end() && !m["platforms"].empty()) {
      if (typeid(vector<boost::any>) == m["platforms"].type()) {
        vector<Platform> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["platforms"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Platform model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        platforms = make_shared<vector<Platform>>(expect1);
      }
    }
    if (m.find("specName") != m.end() && !m["specName"].empty()) {
      specName = make_shared<string>(boost::any_cast<string>(m["specName"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("tools") != m.end() && !m["tools"].empty()) {
      if (typeid(map<string, boost::any>) == m["tools"].type()) {
        FoundationVersionTools model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["tools"]));
        tools = make_shared<FoundationVersionTools>(model1);
      }
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("uid") != m.end() && !m["uid"].empty()) {
      uid = make_shared<string>(boost::any_cast<string>(m["uid"]));
    }
    if (m.find("userWhiteList") != m.end() && !m["userWhiteList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["userWhiteList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["userWhiteList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      userWhiteList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("version") != m.end() && !m["version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["version"]));
    }
  }


  virtual ~FoundationVersion() = default;
};
class GetInstanceInfoResponseClusterTaints : public Darabonba::Model {
public:
  shared_ptr<string> effect{};
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  GetInstanceInfoResponseClusterTaints() {}

  explicit GetInstanceInfoResponseClusterTaints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (effect) {
      res["effect"] = boost::any(*effect);
    }
    if (key) {
      res["key"] = boost::any(*key);
    }
    if (value) {
      res["value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("effect") != m.end() && !m["effect"].empty()) {
      effect = make_shared<string>(boost::any_cast<string>(m["effect"]));
    }
    if (m.find("key") != m.end() && !m["key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["key"]));
    }
    if (m.find("value") != m.end() && !m["value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["value"]));
    }
  }


  virtual ~GetInstanceInfoResponseClusterTaints() = default;
};
class GetInstanceInfoResponseNetworkCards : public Darabonba::Model {
public:
  shared_ptr<string> ip{};
  shared_ptr<string> name{};

  GetInstanceInfoResponseNetworkCards() {}

  explicit GetInstanceInfoResponseNetworkCards(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ip) {
      res["ip"] = boost::any(*ip);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ip") != m.end() && !m["ip"].empty()) {
      ip = make_shared<string>(boost::any_cast<string>(m["ip"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
  }


  virtual ~GetInstanceInfoResponseNetworkCards() = default;
};
class GetInstanceInfoResponseTaints : public Darabonba::Model {
public:
  shared_ptr<string> effect{};
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  GetInstanceInfoResponseTaints() {}

  explicit GetInstanceInfoResponseTaints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (effect) {
      res["effect"] = boost::any(*effect);
    }
    if (key) {
      res["key"] = boost::any(*key);
    }
    if (value) {
      res["value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("effect") != m.end() && !m["effect"].empty()) {
      effect = make_shared<string>(boost::any_cast<string>(m["effect"]));
    }
    if (m.find("key") != m.end() && !m["key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["key"]));
    }
    if (m.find("value") != m.end() && !m["value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["value"]));
    }
  }


  virtual ~GetInstanceInfoResponseTaints() = default;
};
class GetInstanceInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> annotations{};
  shared_ptr<string> arch{};
  shared_ptr<map<string, string>> clusterLabels{};
  shared_ptr<vector<GetInstanceInfoResponseClusterTaints>> clusterTaints{};
  shared_ptr<string> cpu{};
  shared_ptr<vector<Disk>> dataDisk{};
  shared_ptr<string> hostName{};
  shared_ptr<string> identifier{};
  shared_ptr<string> imageID{};
  shared_ptr<string> instanceType{};
  shared_ptr<long> internetBandwidth{};
  shared_ptr<string> kernel{};
  shared_ptr<map<string, string>> labels{};
  shared_ptr<string> macAddress{};
  shared_ptr<string> memory{};
  shared_ptr<vector<GetInstanceInfoResponseNetworkCards>> networkCards{};
  shared_ptr<string> os{};
  shared_ptr<string> osVersion{};
  shared_ptr<string> privateIP{};
  shared_ptr<string> publicIP{};
  shared_ptr<string> rootPassword{};
  shared_ptr<vector<Disk>> systemDisk{};
  shared_ptr<string> systemInfo{};
  shared_ptr<vector<GetInstanceInfoResponseTaints>> taints{};
  shared_ptr<string> uid{};

  GetInstanceInfoResponse() {}

  explicit GetInstanceInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (annotations) {
      res["annotations"] = boost::any(*annotations);
    }
    if (arch) {
      res["arch"] = boost::any(*arch);
    }
    if (clusterLabels) {
      res["clusterLabels"] = boost::any(*clusterLabels);
    }
    if (clusterTaints) {
      vector<boost::any> temp1;
      for(auto item1:*clusterTaints){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["clusterTaints"] = boost::any(temp1);
    }
    if (cpu) {
      res["cpu"] = boost::any(*cpu);
    }
    if (dataDisk) {
      vector<boost::any> temp1;
      for(auto item1:*dataDisk){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["dataDisk"] = boost::any(temp1);
    }
    if (hostName) {
      res["hostName"] = boost::any(*hostName);
    }
    if (identifier) {
      res["identifier"] = boost::any(*identifier);
    }
    if (imageID) {
      res["imageID"] = boost::any(*imageID);
    }
    if (instanceType) {
      res["instanceType"] = boost::any(*instanceType);
    }
    if (internetBandwidth) {
      res["internetBandwidth"] = boost::any(*internetBandwidth);
    }
    if (kernel) {
      res["kernel"] = boost::any(*kernel);
    }
    if (labels) {
      res["labels"] = boost::any(*labels);
    }
    if (macAddress) {
      res["macAddress"] = boost::any(*macAddress);
    }
    if (memory) {
      res["memory"] = boost::any(*memory);
    }
    if (networkCards) {
      vector<boost::any> temp1;
      for(auto item1:*networkCards){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["networkCards"] = boost::any(temp1);
    }
    if (os) {
      res["os"] = boost::any(*os);
    }
    if (osVersion) {
      res["osVersion"] = boost::any(*osVersion);
    }
    if (privateIP) {
      res["privateIP"] = boost::any(*privateIP);
    }
    if (publicIP) {
      res["publicIP"] = boost::any(*publicIP);
    }
    if (rootPassword) {
      res["rootPassword"] = boost::any(*rootPassword);
    }
    if (systemDisk) {
      vector<boost::any> temp1;
      for(auto item1:*systemDisk){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["systemDisk"] = boost::any(temp1);
    }
    if (systemInfo) {
      res["systemInfo"] = boost::any(*systemInfo);
    }
    if (taints) {
      vector<boost::any> temp1;
      for(auto item1:*taints){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["taints"] = boost::any(temp1);
    }
    if (uid) {
      res["uid"] = boost::any(*uid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("annotations") != m.end() && !m["annotations"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["annotations"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      annotations = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("arch") != m.end() && !m["arch"].empty()) {
      arch = make_shared<string>(boost::any_cast<string>(m["arch"]));
    }
    if (m.find("clusterLabels") != m.end() && !m["clusterLabels"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["clusterLabels"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      clusterLabels = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("clusterTaints") != m.end() && !m["clusterTaints"].empty()) {
      if (typeid(vector<boost::any>) == m["clusterTaints"].type()) {
        vector<GetInstanceInfoResponseClusterTaints> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["clusterTaints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetInstanceInfoResponseClusterTaints model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        clusterTaints = make_shared<vector<GetInstanceInfoResponseClusterTaints>>(expect1);
      }
    }
    if (m.find("cpu") != m.end() && !m["cpu"].empty()) {
      cpu = make_shared<string>(boost::any_cast<string>(m["cpu"]));
    }
    if (m.find("dataDisk") != m.end() && !m["dataDisk"].empty()) {
      if (typeid(vector<boost::any>) == m["dataDisk"].type()) {
        vector<Disk> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["dataDisk"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Disk model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dataDisk = make_shared<vector<Disk>>(expect1);
      }
    }
    if (m.find("hostName") != m.end() && !m["hostName"].empty()) {
      hostName = make_shared<string>(boost::any_cast<string>(m["hostName"]));
    }
    if (m.find("identifier") != m.end() && !m["identifier"].empty()) {
      identifier = make_shared<string>(boost::any_cast<string>(m["identifier"]));
    }
    if (m.find("imageID") != m.end() && !m["imageID"].empty()) {
      imageID = make_shared<string>(boost::any_cast<string>(m["imageID"]));
    }
    if (m.find("instanceType") != m.end() && !m["instanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["instanceType"]));
    }
    if (m.find("internetBandwidth") != m.end() && !m["internetBandwidth"].empty()) {
      internetBandwidth = make_shared<long>(boost::any_cast<long>(m["internetBandwidth"]));
    }
    if (m.find("kernel") != m.end() && !m["kernel"].empty()) {
      kernel = make_shared<string>(boost::any_cast<string>(m["kernel"]));
    }
    if (m.find("labels") != m.end() && !m["labels"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["labels"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      labels = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("macAddress") != m.end() && !m["macAddress"].empty()) {
      macAddress = make_shared<string>(boost::any_cast<string>(m["macAddress"]));
    }
    if (m.find("memory") != m.end() && !m["memory"].empty()) {
      memory = make_shared<string>(boost::any_cast<string>(m["memory"]));
    }
    if (m.find("networkCards") != m.end() && !m["networkCards"].empty()) {
      if (typeid(vector<boost::any>) == m["networkCards"].type()) {
        vector<GetInstanceInfoResponseNetworkCards> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["networkCards"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetInstanceInfoResponseNetworkCards model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        networkCards = make_shared<vector<GetInstanceInfoResponseNetworkCards>>(expect1);
      }
    }
    if (m.find("os") != m.end() && !m["os"].empty()) {
      os = make_shared<string>(boost::any_cast<string>(m["os"]));
    }
    if (m.find("osVersion") != m.end() && !m["osVersion"].empty()) {
      osVersion = make_shared<string>(boost::any_cast<string>(m["osVersion"]));
    }
    if (m.find("privateIP") != m.end() && !m["privateIP"].empty()) {
      privateIP = make_shared<string>(boost::any_cast<string>(m["privateIP"]));
    }
    if (m.find("publicIP") != m.end() && !m["publicIP"].empty()) {
      publicIP = make_shared<string>(boost::any_cast<string>(m["publicIP"]));
    }
    if (m.find("rootPassword") != m.end() && !m["rootPassword"].empty()) {
      rootPassword = make_shared<string>(boost::any_cast<string>(m["rootPassword"]));
    }
    if (m.find("systemDisk") != m.end() && !m["systemDisk"].empty()) {
      if (typeid(vector<boost::any>) == m["systemDisk"].type()) {
        vector<Disk> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["systemDisk"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Disk model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        systemDisk = make_shared<vector<Disk>>(expect1);
      }
    }
    if (m.find("systemInfo") != m.end() && !m["systemInfo"].empty()) {
      systemInfo = make_shared<string>(boost::any_cast<string>(m["systemInfo"]));
    }
    if (m.find("taints") != m.end() && !m["taints"].empty()) {
      if (typeid(vector<boost::any>) == m["taints"].type()) {
        vector<GetInstanceInfoResponseTaints> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["taints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetInstanceInfoResponseTaints model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        taints = make_shared<vector<GetInstanceInfoResponseTaints>>(expect1);
      }
    }
    if (m.find("uid") != m.end() && !m["uid"].empty()) {
      uid = make_shared<string>(boost::any_cast<string>(m["uid"]));
    }
  }


  virtual ~GetInstanceInfoResponse() = default;
};
class GetPayAsYouGoPriceDataModuleList : public Darabonba::Model {
public:
  shared_ptr<string> config{};
  shared_ptr<string> moduleCode{};
  shared_ptr<string> priceType{};

  GetPayAsYouGoPriceDataModuleList() {}

  explicit GetPayAsYouGoPriceDataModuleList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (config) {
      res["Config"] = boost::any(*config);
    }
    if (moduleCode) {
      res["ModuleCode"] = boost::any(*moduleCode);
    }
    if (priceType) {
      res["PriceType"] = boost::any(*priceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Config") != m.end() && !m["Config"].empty()) {
      config = make_shared<string>(boost::any_cast<string>(m["Config"]));
    }
    if (m.find("ModuleCode") != m.end() && !m["ModuleCode"].empty()) {
      moduleCode = make_shared<string>(boost::any_cast<string>(m["ModuleCode"]));
    }
    if (m.find("PriceType") != m.end() && !m["PriceType"].empty()) {
      priceType = make_shared<string>(boost::any_cast<string>(m["PriceType"]));
    }
  }


  virtual ~GetPayAsYouGoPriceDataModuleList() = default;
};
class GetPayAsYouGoPriceData : public Darabonba::Model {
public:
  shared_ptr<vector<GetPayAsYouGoPriceDataModuleList>> moduleList{};
  shared_ptr<string> ownerId{};
  shared_ptr<string> productCode{};
  shared_ptr<string> productType{};
  shared_ptr<string> region{};
  shared_ptr<string> subscriptionType{};

  GetPayAsYouGoPriceData() {}

  explicit GetPayAsYouGoPriceData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (moduleList) {
      vector<boost::any> temp1;
      for(auto item1:*moduleList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ModuleList"] = boost::any(temp1);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (productType) {
      res["ProductType"] = boost::any(*productType);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (subscriptionType) {
      res["SubscriptionType"] = boost::any(*subscriptionType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ModuleList") != m.end() && !m["ModuleList"].empty()) {
      if (typeid(vector<boost::any>) == m["ModuleList"].type()) {
        vector<GetPayAsYouGoPriceDataModuleList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ModuleList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetPayAsYouGoPriceDataModuleList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        moduleList = make_shared<vector<GetPayAsYouGoPriceDataModuleList>>(expect1);
      }
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<string>(boost::any_cast<string>(m["OwnerId"]));
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("ProductType") != m.end() && !m["ProductType"].empty()) {
      productType = make_shared<string>(boost::any_cast<string>(m["ProductType"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("SubscriptionType") != m.end() && !m["SubscriptionType"].empty()) {
      subscriptionType = make_shared<string>(boost::any_cast<string>(m["SubscriptionType"]));
    }
  }


  virtual ~GetPayAsYouGoPriceData() = default;
};
class InstanceInfoClusterTaints : public Darabonba::Model {
public:
  shared_ptr<string> effect{};
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  InstanceInfoClusterTaints() {}

  explicit InstanceInfoClusterTaints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (effect) {
      res["effect"] = boost::any(*effect);
    }
    if (key) {
      res["key"] = boost::any(*key);
    }
    if (value) {
      res["value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("effect") != m.end() && !m["effect"].empty()) {
      effect = make_shared<string>(boost::any_cast<string>(m["effect"]));
    }
    if (m.find("key") != m.end() && !m["key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["key"]));
    }
    if (m.find("value") != m.end() && !m["value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["value"]));
    }
  }


  virtual ~InstanceInfoClusterTaints() = default;
};
class InstanceInfoNetworkCards : public Darabonba::Model {
public:
  shared_ptr<string> ip{};
  shared_ptr<string> name{};

  InstanceInfoNetworkCards() {}

  explicit InstanceInfoNetworkCards(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ip) {
      res["ip"] = boost::any(*ip);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ip") != m.end() && !m["ip"].empty()) {
      ip = make_shared<string>(boost::any_cast<string>(m["ip"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
  }


  virtual ~InstanceInfoNetworkCards() = default;
};
class InstanceInfoTaints : public Darabonba::Model {
public:
  shared_ptr<string> effect{};
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  InstanceInfoTaints() {}

  explicit InstanceInfoTaints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (effect) {
      res["effect"] = boost::any(*effect);
    }
    if (key) {
      res["key"] = boost::any(*key);
    }
    if (value) {
      res["value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("effect") != m.end() && !m["effect"].empty()) {
      effect = make_shared<string>(boost::any_cast<string>(m["effect"]));
    }
    if (m.find("key") != m.end() && !m["key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["key"]));
    }
    if (m.find("value") != m.end() && !m["value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["value"]));
    }
  }


  virtual ~InstanceInfoTaints() = default;
};
class InstanceInfo : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> annotations{};
  shared_ptr<string> arch{};
  shared_ptr<map<string, string>> clusterLabels{};
  shared_ptr<vector<InstanceInfoClusterTaints>> clusterTaints{};
  shared_ptr<string> clusterUID{};
  shared_ptr<string> cpu{};
  shared_ptr<string> createdAt{};
  shared_ptr<vector<Disk>> dataDisk{};
  shared_ptr<map<string, string>> diskConfigAnnotations{};
  shared_ptr<string> hostName{};
  shared_ptr<string> identifier{};
  shared_ptr<string> imageID{};
  shared_ptr<string> instanceType{};
  shared_ptr<long> internetBandwidth{};
  shared_ptr<string> kernel{};
  shared_ptr<map<string, string>> labels{};
  shared_ptr<string> macAddress{};
  shared_ptr<string> memory{};
  shared_ptr<vector<InstanceInfoNetworkCards>> networkCards{};
  shared_ptr<string> os{};
  shared_ptr<string> osVersion{};
  shared_ptr<string> privateIP{};
  shared_ptr<string> publicIP{};
  shared_ptr<string> rootPassword{};
  shared_ptr<vector<Disk>> systemDisk{};
  shared_ptr<string> systemInfo{};
  shared_ptr<vector<InstanceInfoTaints>> taints{};
  shared_ptr<string> uid{};

  InstanceInfo() {}

  explicit InstanceInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (annotations) {
      res["annotations"] = boost::any(*annotations);
    }
    if (arch) {
      res["arch"] = boost::any(*arch);
    }
    if (clusterLabels) {
      res["clusterLabels"] = boost::any(*clusterLabels);
    }
    if (clusterTaints) {
      vector<boost::any> temp1;
      for(auto item1:*clusterTaints){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["clusterTaints"] = boost::any(temp1);
    }
    if (clusterUID) {
      res["clusterUID"] = boost::any(*clusterUID);
    }
    if (cpu) {
      res["cpu"] = boost::any(*cpu);
    }
    if (createdAt) {
      res["createdAt"] = boost::any(*createdAt);
    }
    if (dataDisk) {
      vector<boost::any> temp1;
      for(auto item1:*dataDisk){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["dataDisk"] = boost::any(temp1);
    }
    if (diskConfigAnnotations) {
      res["diskConfigAnnotations"] = boost::any(*diskConfigAnnotations);
    }
    if (hostName) {
      res["hostName"] = boost::any(*hostName);
    }
    if (identifier) {
      res["identifier"] = boost::any(*identifier);
    }
    if (imageID) {
      res["imageID"] = boost::any(*imageID);
    }
    if (instanceType) {
      res["instanceType"] = boost::any(*instanceType);
    }
    if (internetBandwidth) {
      res["internetBandwidth"] = boost::any(*internetBandwidth);
    }
    if (kernel) {
      res["kernel"] = boost::any(*kernel);
    }
    if (labels) {
      res["labels"] = boost::any(*labels);
    }
    if (macAddress) {
      res["macAddress"] = boost::any(*macAddress);
    }
    if (memory) {
      res["memory"] = boost::any(*memory);
    }
    if (networkCards) {
      vector<boost::any> temp1;
      for(auto item1:*networkCards){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["networkCards"] = boost::any(temp1);
    }
    if (os) {
      res["os"] = boost::any(*os);
    }
    if (osVersion) {
      res["osVersion"] = boost::any(*osVersion);
    }
    if (privateIP) {
      res["privateIP"] = boost::any(*privateIP);
    }
    if (publicIP) {
      res["publicIP"] = boost::any(*publicIP);
    }
    if (rootPassword) {
      res["rootPassword"] = boost::any(*rootPassword);
    }
    if (systemDisk) {
      vector<boost::any> temp1;
      for(auto item1:*systemDisk){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["systemDisk"] = boost::any(temp1);
    }
    if (systemInfo) {
      res["systemInfo"] = boost::any(*systemInfo);
    }
    if (taints) {
      vector<boost::any> temp1;
      for(auto item1:*taints){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["taints"] = boost::any(temp1);
    }
    if (uid) {
      res["uid"] = boost::any(*uid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("annotations") != m.end() && !m["annotations"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["annotations"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      annotations = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("arch") != m.end() && !m["arch"].empty()) {
      arch = make_shared<string>(boost::any_cast<string>(m["arch"]));
    }
    if (m.find("clusterLabels") != m.end() && !m["clusterLabels"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["clusterLabels"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      clusterLabels = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("clusterTaints") != m.end() && !m["clusterTaints"].empty()) {
      if (typeid(vector<boost::any>) == m["clusterTaints"].type()) {
        vector<InstanceInfoClusterTaints> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["clusterTaints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            InstanceInfoClusterTaints model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        clusterTaints = make_shared<vector<InstanceInfoClusterTaints>>(expect1);
      }
    }
    if (m.find("clusterUID") != m.end() && !m["clusterUID"].empty()) {
      clusterUID = make_shared<string>(boost::any_cast<string>(m["clusterUID"]));
    }
    if (m.find("cpu") != m.end() && !m["cpu"].empty()) {
      cpu = make_shared<string>(boost::any_cast<string>(m["cpu"]));
    }
    if (m.find("createdAt") != m.end() && !m["createdAt"].empty()) {
      createdAt = make_shared<string>(boost::any_cast<string>(m["createdAt"]));
    }
    if (m.find("dataDisk") != m.end() && !m["dataDisk"].empty()) {
      if (typeid(vector<boost::any>) == m["dataDisk"].type()) {
        vector<Disk> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["dataDisk"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Disk model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dataDisk = make_shared<vector<Disk>>(expect1);
      }
    }
    if (m.find("diskConfigAnnotations") != m.end() && !m["diskConfigAnnotations"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["diskConfigAnnotations"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      diskConfigAnnotations = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("hostName") != m.end() && !m["hostName"].empty()) {
      hostName = make_shared<string>(boost::any_cast<string>(m["hostName"]));
    }
    if (m.find("identifier") != m.end() && !m["identifier"].empty()) {
      identifier = make_shared<string>(boost::any_cast<string>(m["identifier"]));
    }
    if (m.find("imageID") != m.end() && !m["imageID"].empty()) {
      imageID = make_shared<string>(boost::any_cast<string>(m["imageID"]));
    }
    if (m.find("instanceType") != m.end() && !m["instanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["instanceType"]));
    }
    if (m.find("internetBandwidth") != m.end() && !m["internetBandwidth"].empty()) {
      internetBandwidth = make_shared<long>(boost::any_cast<long>(m["internetBandwidth"]));
    }
    if (m.find("kernel") != m.end() && !m["kernel"].empty()) {
      kernel = make_shared<string>(boost::any_cast<string>(m["kernel"]));
    }
    if (m.find("labels") != m.end() && !m["labels"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["labels"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      labels = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("macAddress") != m.end() && !m["macAddress"].empty()) {
      macAddress = make_shared<string>(boost::any_cast<string>(m["macAddress"]));
    }
    if (m.find("memory") != m.end() && !m["memory"].empty()) {
      memory = make_shared<string>(boost::any_cast<string>(m["memory"]));
    }
    if (m.find("networkCards") != m.end() && !m["networkCards"].empty()) {
      if (typeid(vector<boost::any>) == m["networkCards"].type()) {
        vector<InstanceInfoNetworkCards> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["networkCards"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            InstanceInfoNetworkCards model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        networkCards = make_shared<vector<InstanceInfoNetworkCards>>(expect1);
      }
    }
    if (m.find("os") != m.end() && !m["os"].empty()) {
      os = make_shared<string>(boost::any_cast<string>(m["os"]));
    }
    if (m.find("osVersion") != m.end() && !m["osVersion"].empty()) {
      osVersion = make_shared<string>(boost::any_cast<string>(m["osVersion"]));
    }
    if (m.find("privateIP") != m.end() && !m["privateIP"].empty()) {
      privateIP = make_shared<string>(boost::any_cast<string>(m["privateIP"]));
    }
    if (m.find("publicIP") != m.end() && !m["publicIP"].empty()) {
      publicIP = make_shared<string>(boost::any_cast<string>(m["publicIP"]));
    }
    if (m.find("rootPassword") != m.end() && !m["rootPassword"].empty()) {
      rootPassword = make_shared<string>(boost::any_cast<string>(m["rootPassword"]));
    }
    if (m.find("systemDisk") != m.end() && !m["systemDisk"].empty()) {
      if (typeid(vector<boost::any>) == m["systemDisk"].type()) {
        vector<Disk> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["systemDisk"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Disk model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        systemDisk = make_shared<vector<Disk>>(expect1);
      }
    }
    if (m.find("systemInfo") != m.end() && !m["systemInfo"].empty()) {
      systemInfo = make_shared<string>(boost::any_cast<string>(m["systemInfo"]));
    }
    if (m.find("taints") != m.end() && !m["taints"].empty()) {
      if (typeid(vector<boost::any>) == m["taints"].type()) {
        vector<InstanceInfoTaints> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["taints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            InstanceInfoTaints model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        taints = make_shared<vector<InstanceInfoTaints>>(expect1);
      }
    }
    if (m.find("uid") != m.end() && !m["uid"].empty()) {
      uid = make_shared<string>(boost::any_cast<string>(m["uid"]));
    }
  }


  virtual ~InstanceInfo() = default;
};
class LabelSelectorMatchExpressions : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> operator_{};
  shared_ptr<vector<string>> values{};

  LabelSelectorMatchExpressions() {}

  explicit LabelSelectorMatchExpressions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["key"] = boost::any(*key);
    }
    if (operator_) {
      res["operator"] = boost::any(*operator_);
    }
    if (values) {
      res["values"] = boost::any(*values);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("key") != m.end() && !m["key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["key"]));
    }
    if (m.find("operator") != m.end() && !m["operator"].empty()) {
      operator_ = make_shared<string>(boost::any_cast<string>(m["operator"]));
    }
    if (m.find("values") != m.end() && !m["values"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["values"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["values"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      values = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~LabelSelectorMatchExpressions() = default;
};
class LabelSelector : public Darabonba::Model {
public:
  shared_ptr<vector<LabelSelectorMatchExpressions>> matchExpressions{};
  shared_ptr<map<string, string>> matchLabels{};

  LabelSelector() {}

  explicit LabelSelector(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (matchExpressions) {
      vector<boost::any> temp1;
      for(auto item1:*matchExpressions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["matchExpressions"] = boost::any(temp1);
    }
    if (matchLabels) {
      res["matchLabels"] = boost::any(*matchLabels);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("matchExpressions") != m.end() && !m["matchExpressions"].empty()) {
      if (typeid(vector<boost::any>) == m["matchExpressions"].type()) {
        vector<LabelSelectorMatchExpressions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["matchExpressions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            LabelSelectorMatchExpressions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        matchExpressions = make_shared<vector<LabelSelectorMatchExpressions>>(expect1);
      }
    }
    if (m.find("matchLabels") != m.end() && !m["matchLabels"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["matchLabels"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      matchLabels = make_shared<map<string, string>>(toMap1);
    }
  }


  virtual ~LabelSelector() = default;
};
class ProductComponentRelationDetailPolicyMultiCluster : public Darabonba::Model {
public:
  shared_ptr<vector<string>> targetClusters{};

  ProductComponentRelationDetailPolicyMultiCluster() {}

  explicit ProductComponentRelationDetailPolicyMultiCluster(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (targetClusters) {
      res["targetClusters"] = boost::any(*targetClusters);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("targetClusters") != m.end() && !m["targetClusters"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["targetClusters"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["targetClusters"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      targetClusters = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ProductComponentRelationDetailPolicyMultiCluster() = default;
};
class ProductComponentRelationDetailPolicy : public Darabonba::Model {
public:
  shared_ptr<ProductComponentRelationDetailPolicyMultiCluster> multiCluster{};

  ProductComponentRelationDetailPolicy() {}

  explicit ProductComponentRelationDetailPolicy(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (multiCluster) {
      res["multiCluster"] = multiCluster ? boost::any(multiCluster->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("multiCluster") != m.end() && !m["multiCluster"].empty()) {
      if (typeid(map<string, boost::any>) == m["multiCluster"].type()) {
        ProductComponentRelationDetailPolicyMultiCluster model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["multiCluster"]));
        multiCluster = make_shared<ProductComponentRelationDetailPolicyMultiCluster>(model1);
      }
    }
  }


  virtual ~ProductComponentRelationDetailPolicy() = default;
};
class ProductComponentRelationDetail : public Darabonba::Model {
public:
  shared_ptr<string> appVersion{};
  shared_ptr<string> category{};
  shared_ptr<string> class_{};
  shared_ptr<string> componentName{};
  shared_ptr<string> componentOrchestrationValues{};
  shared_ptr<string> componentUID{};
  shared_ptr<string> componentVersionSpecUID{};
  shared_ptr<string> componentVersionSpecValues{};
  shared_ptr<string> componentVersionUID{};
  shared_ptr<string> createdAt{};
  shared_ptr<string> description{};
  shared_ptr<string> documents{};
  shared_ptr<bool> enable{};
  shared_ptr<string> imagesMapping{};
  shared_ptr<string> namespace_{};
  shared_ptr<string> orchestrationType{};
  shared_ptr<bool> parentComponent{};
  shared_ptr<string> parentComponentVersionRelationUID{};
  shared_ptr<string> parentComponentVersionUID{};
  shared_ptr<ProductComponentRelationDetailPolicy> policy{};
  shared_ptr<long> priority{};
  shared_ptr<string> productVersionUID{};
  shared_ptr<string> provider{};
  shared_ptr<bool> public_{};
  shared_ptr<string> readme{};
  shared_ptr<string> relationUID{};
  shared_ptr<string> releaseName{};
  shared_ptr<string> resources{};
  shared_ptr<long> sequence{};
  shared_ptr<bool> singleton{};
  shared_ptr<string> source{};
  shared_ptr<string> version{};

  ProductComponentRelationDetail() {}

  explicit ProductComponentRelationDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appVersion) {
      res["appVersion"] = boost::any(*appVersion);
    }
    if (category) {
      res["category"] = boost::any(*category);
    }
    if (class_) {
      res["class"] = boost::any(*class_);
    }
    if (componentName) {
      res["componentName"] = boost::any(*componentName);
    }
    if (componentOrchestrationValues) {
      res["componentOrchestrationValues"] = boost::any(*componentOrchestrationValues);
    }
    if (componentUID) {
      res["componentUID"] = boost::any(*componentUID);
    }
    if (componentVersionSpecUID) {
      res["componentVersionSpecUID"] = boost::any(*componentVersionSpecUID);
    }
    if (componentVersionSpecValues) {
      res["componentVersionSpecValues"] = boost::any(*componentVersionSpecValues);
    }
    if (componentVersionUID) {
      res["componentVersionUID"] = boost::any(*componentVersionUID);
    }
    if (createdAt) {
      res["createdAt"] = boost::any(*createdAt);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (documents) {
      res["documents"] = boost::any(*documents);
    }
    if (enable) {
      res["enable"] = boost::any(*enable);
    }
    if (imagesMapping) {
      res["imagesMapping"] = boost::any(*imagesMapping);
    }
    if (namespace_) {
      res["namespace"] = boost::any(*namespace_);
    }
    if (orchestrationType) {
      res["orchestrationType"] = boost::any(*orchestrationType);
    }
    if (parentComponent) {
      res["parentComponent"] = boost::any(*parentComponent);
    }
    if (parentComponentVersionRelationUID) {
      res["parentComponentVersionRelationUID"] = boost::any(*parentComponentVersionRelationUID);
    }
    if (parentComponentVersionUID) {
      res["parentComponentVersionUID"] = boost::any(*parentComponentVersionUID);
    }
    if (policy) {
      res["policy"] = policy ? boost::any(policy->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (priority) {
      res["priority"] = boost::any(*priority);
    }
    if (productVersionUID) {
      res["productVersionUID"] = boost::any(*productVersionUID);
    }
    if (provider) {
      res["provider"] = boost::any(*provider);
    }
    if (public_) {
      res["public"] = boost::any(*public_);
    }
    if (readme) {
      res["readme"] = boost::any(*readme);
    }
    if (relationUID) {
      res["relationUID"] = boost::any(*relationUID);
    }
    if (releaseName) {
      res["releaseName"] = boost::any(*releaseName);
    }
    if (resources) {
      res["resources"] = boost::any(*resources);
    }
    if (sequence) {
      res["sequence"] = boost::any(*sequence);
    }
    if (singleton) {
      res["singleton"] = boost::any(*singleton);
    }
    if (source) {
      res["source"] = boost::any(*source);
    }
    if (version) {
      res["version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("appVersion") != m.end() && !m["appVersion"].empty()) {
      appVersion = make_shared<string>(boost::any_cast<string>(m["appVersion"]));
    }
    if (m.find("category") != m.end() && !m["category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["category"]));
    }
    if (m.find("class") != m.end() && !m["class"].empty()) {
      class_ = make_shared<string>(boost::any_cast<string>(m["class"]));
    }
    if (m.find("componentName") != m.end() && !m["componentName"].empty()) {
      componentName = make_shared<string>(boost::any_cast<string>(m["componentName"]));
    }
    if (m.find("componentOrchestrationValues") != m.end() && !m["componentOrchestrationValues"].empty()) {
      componentOrchestrationValues = make_shared<string>(boost::any_cast<string>(m["componentOrchestrationValues"]));
    }
    if (m.find("componentUID") != m.end() && !m["componentUID"].empty()) {
      componentUID = make_shared<string>(boost::any_cast<string>(m["componentUID"]));
    }
    if (m.find("componentVersionSpecUID") != m.end() && !m["componentVersionSpecUID"].empty()) {
      componentVersionSpecUID = make_shared<string>(boost::any_cast<string>(m["componentVersionSpecUID"]));
    }
    if (m.find("componentVersionSpecValues") != m.end() && !m["componentVersionSpecValues"].empty()) {
      componentVersionSpecValues = make_shared<string>(boost::any_cast<string>(m["componentVersionSpecValues"]));
    }
    if (m.find("componentVersionUID") != m.end() && !m["componentVersionUID"].empty()) {
      componentVersionUID = make_shared<string>(boost::any_cast<string>(m["componentVersionUID"]));
    }
    if (m.find("createdAt") != m.end() && !m["createdAt"].empty()) {
      createdAt = make_shared<string>(boost::any_cast<string>(m["createdAt"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("documents") != m.end() && !m["documents"].empty()) {
      documents = make_shared<string>(boost::any_cast<string>(m["documents"]));
    }
    if (m.find("enable") != m.end() && !m["enable"].empty()) {
      enable = make_shared<bool>(boost::any_cast<bool>(m["enable"]));
    }
    if (m.find("imagesMapping") != m.end() && !m["imagesMapping"].empty()) {
      imagesMapping = make_shared<string>(boost::any_cast<string>(m["imagesMapping"]));
    }
    if (m.find("namespace") != m.end() && !m["namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["namespace"]));
    }
    if (m.find("orchestrationType") != m.end() && !m["orchestrationType"].empty()) {
      orchestrationType = make_shared<string>(boost::any_cast<string>(m["orchestrationType"]));
    }
    if (m.find("parentComponent") != m.end() && !m["parentComponent"].empty()) {
      parentComponent = make_shared<bool>(boost::any_cast<bool>(m["parentComponent"]));
    }
    if (m.find("parentComponentVersionRelationUID") != m.end() && !m["parentComponentVersionRelationUID"].empty()) {
      parentComponentVersionRelationUID = make_shared<string>(boost::any_cast<string>(m["parentComponentVersionRelationUID"]));
    }
    if (m.find("parentComponentVersionUID") != m.end() && !m["parentComponentVersionUID"].empty()) {
      parentComponentVersionUID = make_shared<string>(boost::any_cast<string>(m["parentComponentVersionUID"]));
    }
    if (m.find("policy") != m.end() && !m["policy"].empty()) {
      if (typeid(map<string, boost::any>) == m["policy"].type()) {
        ProductComponentRelationDetailPolicy model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["policy"]));
        policy = make_shared<ProductComponentRelationDetailPolicy>(model1);
      }
    }
    if (m.find("priority") != m.end() && !m["priority"].empty()) {
      priority = make_shared<long>(boost::any_cast<long>(m["priority"]));
    }
    if (m.find("productVersionUID") != m.end() && !m["productVersionUID"].empty()) {
      productVersionUID = make_shared<string>(boost::any_cast<string>(m["productVersionUID"]));
    }
    if (m.find("provider") != m.end() && !m["provider"].empty()) {
      provider = make_shared<string>(boost::any_cast<string>(m["provider"]));
    }
    if (m.find("public") != m.end() && !m["public"].empty()) {
      public_ = make_shared<bool>(boost::any_cast<bool>(m["public"]));
    }
    if (m.find("readme") != m.end() && !m["readme"].empty()) {
      readme = make_shared<string>(boost::any_cast<string>(m["readme"]));
    }
    if (m.find("relationUID") != m.end() && !m["relationUID"].empty()) {
      relationUID = make_shared<string>(boost::any_cast<string>(m["relationUID"]));
    }
    if (m.find("releaseName") != m.end() && !m["releaseName"].empty()) {
      releaseName = make_shared<string>(boost::any_cast<string>(m["releaseName"]));
    }
    if (m.find("resources") != m.end() && !m["resources"].empty()) {
      resources = make_shared<string>(boost::any_cast<string>(m["resources"]));
    }
    if (m.find("sequence") != m.end() && !m["sequence"].empty()) {
      sequence = make_shared<long>(boost::any_cast<long>(m["sequence"]));
    }
    if (m.find("singleton") != m.end() && !m["singleton"].empty()) {
      singleton = make_shared<bool>(boost::any_cast<bool>(m["singleton"]));
    }
    if (m.find("source") != m.end() && !m["source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["source"]));
    }
    if (m.find("version") != m.end() && !m["version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["version"]));
    }
  }


  virtual ~ProductComponentRelationDetail() = default;
};
class ResourceCpu : public Darabonba::Model {
public:
  shared_ptr<long> required{};

  ResourceCpu() {}

  explicit ResourceCpu(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (required) {
      res["required"] = boost::any(*required);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("required") != m.end() && !m["required"].empty()) {
      required = make_shared<long>(boost::any_cast<long>(m["required"]));
    }
  }


  virtual ~ResourceCpu() = default;
};
class ResourceImage : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> nameRegex{};

  ResourceImage() {}

  explicit ResourceImage(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (nameRegex) {
      res["nameRegex"] = boost::any(*nameRegex);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["id"]));
    }
    if (m.find("nameRegex") != m.end() && !m["nameRegex"].empty()) {
      nameRegex = make_shared<string>(boost::any_cast<string>(m["nameRegex"]));
    }
  }


  virtual ~ResourceImage() = default;
};
class ResourceMemory : public Darabonba::Model {
public:
  shared_ptr<long> required{};

  ResourceMemory() {}

  explicit ResourceMemory(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (required) {
      res["required"] = boost::any(*required);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("required") != m.end() && !m["required"].empty()) {
      required = make_shared<long>(boost::any_cast<long>(m["required"]));
    }
  }


  virtual ~ResourceMemory() = default;
};
class ResourcePublicIP : public Darabonba::Model {
public:
  shared_ptr<long> bandwidth{};
  shared_ptr<long> required{};

  ResourcePublicIP() {}

  explicit ResourcePublicIP(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bandwidth) {
      res["bandwidth"] = boost::any(*bandwidth);
    }
    if (required) {
      res["required"] = boost::any(*required);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("bandwidth") != m.end() && !m["bandwidth"].empty()) {
      bandwidth = make_shared<long>(boost::any_cast<long>(m["bandwidth"]));
    }
    if (m.find("required") != m.end() && !m["required"].empty()) {
      required = make_shared<long>(boost::any_cast<long>(m["required"]));
    }
  }


  virtual ~ResourcePublicIP() = default;
};
class ResourceStorage : public Darabonba::Model {
public:
  shared_ptr<long> required{};

  ResourceStorage() {}

  explicit ResourceStorage(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (required) {
      res["required"] = boost::any(*required);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("required") != m.end() && !m["required"].empty()) {
      required = make_shared<long>(boost::any_cast<long>(m["required"]));
    }
  }


  virtual ~ResourceStorage() = default;
};
class Resource : public Darabonba::Model {
public:
  shared_ptr<ResourceCpu> cpu{};
  shared_ptr<string> hostname{};
  shared_ptr<string> identifier{};
  shared_ptr<ResourceImage> image{};
  shared_ptr<string> instanceType{};
  shared_ptr<ResourceMemory> memory{};
  shared_ptr<vector<ExportPort>> ports{};
  shared_ptr<ResourcePublicIP> publicIP{};
  shared_ptr<long> replica{};
  shared_ptr<vector<ResourceStorage>> storage{};

  Resource() {}

  explicit Resource(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cpu) {
      res["cpu"] = cpu ? boost::any(cpu->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (hostname) {
      res["hostname"] = boost::any(*hostname);
    }
    if (identifier) {
      res["identifier"] = boost::any(*identifier);
    }
    if (image) {
      res["image"] = image ? boost::any(image->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (instanceType) {
      res["instanceType"] = boost::any(*instanceType);
    }
    if (memory) {
      res["memory"] = memory ? boost::any(memory->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (ports) {
      vector<boost::any> temp1;
      for(auto item1:*ports){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ports"] = boost::any(temp1);
    }
    if (publicIP) {
      res["publicIP"] = publicIP ? boost::any(publicIP->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (replica) {
      res["replica"] = boost::any(*replica);
    }
    if (storage) {
      vector<boost::any> temp1;
      for(auto item1:*storage){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["storage"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("cpu") != m.end() && !m["cpu"].empty()) {
      if (typeid(map<string, boost::any>) == m["cpu"].type()) {
        ResourceCpu model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["cpu"]));
        cpu = make_shared<ResourceCpu>(model1);
      }
    }
    if (m.find("hostname") != m.end() && !m["hostname"].empty()) {
      hostname = make_shared<string>(boost::any_cast<string>(m["hostname"]));
    }
    if (m.find("identifier") != m.end() && !m["identifier"].empty()) {
      identifier = make_shared<string>(boost::any_cast<string>(m["identifier"]));
    }
    if (m.find("image") != m.end() && !m["image"].empty()) {
      if (typeid(map<string, boost::any>) == m["image"].type()) {
        ResourceImage model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["image"]));
        image = make_shared<ResourceImage>(model1);
      }
    }
    if (m.find("instanceType") != m.end() && !m["instanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["instanceType"]));
    }
    if (m.find("memory") != m.end() && !m["memory"].empty()) {
      if (typeid(map<string, boost::any>) == m["memory"].type()) {
        ResourceMemory model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["memory"]));
        memory = make_shared<ResourceMemory>(model1);
      }
    }
    if (m.find("ports") != m.end() && !m["ports"].empty()) {
      if (typeid(vector<boost::any>) == m["ports"].type()) {
        vector<ExportPort> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ports"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ExportPort model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ports = make_shared<vector<ExportPort>>(expect1);
      }
    }
    if (m.find("publicIP") != m.end() && !m["publicIP"].empty()) {
      if (typeid(map<string, boost::any>) == m["publicIP"].type()) {
        ResourcePublicIP model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["publicIP"]));
        publicIP = make_shared<ResourcePublicIP>(model1);
      }
    }
    if (m.find("replica") != m.end() && !m["replica"].empty()) {
      replica = make_shared<long>(boost::any_cast<long>(m["replica"]));
    }
    if (m.find("storage") != m.end() && !m["storage"].empty()) {
      if (typeid(vector<boost::any>) == m["storage"].type()) {
        vector<ResourceStorage> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["storage"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ResourceStorage model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        storage = make_shared<vector<ResourceStorage>>(expect1);
      }
    }
  }


  virtual ~Resource() = default;
};
class AddEnvironmentNodesRequestDataDisk : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<long> required{};

  AddEnvironmentNodesRequestDataDisk() {}

  explicit AddEnvironmentNodesRequestDataDisk(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (required) {
      res["required"] = boost::any(*required);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("required") != m.end() && !m["required"].empty()) {
      required = make_shared<long>(boost::any_cast<long>(m["required"]));
    }
  }


  virtual ~AddEnvironmentNodesRequestDataDisk() = default;
};
class AddEnvironmentNodesRequestSystemDisk : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<long> required{};

  AddEnvironmentNodesRequestSystemDisk() {}

  explicit AddEnvironmentNodesRequestSystemDisk(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (required) {
      res["required"] = boost::any(*required);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("required") != m.end() && !m["required"].empty()) {
      required = make_shared<long>(boost::any_cast<long>(m["required"]));
    }
  }


  virtual ~AddEnvironmentNodesRequestSystemDisk() = default;
};
class AddEnvironmentNodesRequestTaints : public Darabonba::Model {
public:
  shared_ptr<string> effect{};
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  AddEnvironmentNodesRequestTaints() {}

  explicit AddEnvironmentNodesRequestTaints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (effect) {
      res["effect"] = boost::any(*effect);
    }
    if (key) {
      res["key"] = boost::any(*key);
    }
    if (value) {
      res["value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("effect") != m.end() && !m["effect"].empty()) {
      effect = make_shared<string>(boost::any_cast<string>(m["effect"]));
    }
    if (m.find("key") != m.end() && !m["key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["key"]));
    }
    if (m.find("value") != m.end() && !m["value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["value"]));
    }
  }


  virtual ~AddEnvironmentNodesRequestTaints() = default;
};
class AddEnvironmentNodesRequest : public Darabonba::Model {
public:
  shared_ptr<string> applicationDisk{};
  shared_ptr<long> cpu{};
  shared_ptr<vector<AddEnvironmentNodesRequestDataDisk>> dataDisk{};
  shared_ptr<string> etcdDisk{};
  shared_ptr<string> hostName{};
  shared_ptr<map<string, boost::any>> labels{};
  shared_ptr<vector<string>> masterPrivateIPs{};
  shared_ptr<long> memory{};
  shared_ptr<string> os{};
  shared_ptr<string> rootPassword{};
  shared_ptr<vector<AddEnvironmentNodesRequestSystemDisk>> systemDisk{};
  shared_ptr<vector<AddEnvironmentNodesRequestTaints>> taints{};
  shared_ptr<string> tridentSystemDisk{};
  shared_ptr<long> tridentSystemSizeDisk{};
  shared_ptr<vector<string>> workerPrivateIPs{};

  AddEnvironmentNodesRequest() {}

  explicit AddEnvironmentNodesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationDisk) {
      res["applicationDisk"] = boost::any(*applicationDisk);
    }
    if (cpu) {
      res["cpu"] = boost::any(*cpu);
    }
    if (dataDisk) {
      vector<boost::any> temp1;
      for(auto item1:*dataDisk){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["dataDisk"] = boost::any(temp1);
    }
    if (etcdDisk) {
      res["etcdDisk"] = boost::any(*etcdDisk);
    }
    if (hostName) {
      res["hostName"] = boost::any(*hostName);
    }
    if (labels) {
      res["labels"] = boost::any(*labels);
    }
    if (masterPrivateIPs) {
      res["masterPrivateIPs"] = boost::any(*masterPrivateIPs);
    }
    if (memory) {
      res["memory"] = boost::any(*memory);
    }
    if (os) {
      res["os"] = boost::any(*os);
    }
    if (rootPassword) {
      res["rootPassword"] = boost::any(*rootPassword);
    }
    if (systemDisk) {
      vector<boost::any> temp1;
      for(auto item1:*systemDisk){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["systemDisk"] = boost::any(temp1);
    }
    if (taints) {
      vector<boost::any> temp1;
      for(auto item1:*taints){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["taints"] = boost::any(temp1);
    }
    if (tridentSystemDisk) {
      res["tridentSystemDisk"] = boost::any(*tridentSystemDisk);
    }
    if (tridentSystemSizeDisk) {
      res["tridentSystemSizeDisk"] = boost::any(*tridentSystemSizeDisk);
    }
    if (workerPrivateIPs) {
      res["workerPrivateIPs"] = boost::any(*workerPrivateIPs);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("applicationDisk") != m.end() && !m["applicationDisk"].empty()) {
      applicationDisk = make_shared<string>(boost::any_cast<string>(m["applicationDisk"]));
    }
    if (m.find("cpu") != m.end() && !m["cpu"].empty()) {
      cpu = make_shared<long>(boost::any_cast<long>(m["cpu"]));
    }
    if (m.find("dataDisk") != m.end() && !m["dataDisk"].empty()) {
      if (typeid(vector<boost::any>) == m["dataDisk"].type()) {
        vector<AddEnvironmentNodesRequestDataDisk> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["dataDisk"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            AddEnvironmentNodesRequestDataDisk model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dataDisk = make_shared<vector<AddEnvironmentNodesRequestDataDisk>>(expect1);
      }
    }
    if (m.find("etcdDisk") != m.end() && !m["etcdDisk"].empty()) {
      etcdDisk = make_shared<string>(boost::any_cast<string>(m["etcdDisk"]));
    }
    if (m.find("hostName") != m.end() && !m["hostName"].empty()) {
      hostName = make_shared<string>(boost::any_cast<string>(m["hostName"]));
    }
    if (m.find("labels") != m.end() && !m["labels"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["labels"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      labels = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("masterPrivateIPs") != m.end() && !m["masterPrivateIPs"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["masterPrivateIPs"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["masterPrivateIPs"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      masterPrivateIPs = make_shared<vector<string>>(toVec1);
    }
    if (m.find("memory") != m.end() && !m["memory"].empty()) {
      memory = make_shared<long>(boost::any_cast<long>(m["memory"]));
    }
    if (m.find("os") != m.end() && !m["os"].empty()) {
      os = make_shared<string>(boost::any_cast<string>(m["os"]));
    }
    if (m.find("rootPassword") != m.end() && !m["rootPassword"].empty()) {
      rootPassword = make_shared<string>(boost::any_cast<string>(m["rootPassword"]));
    }
    if (m.find("systemDisk") != m.end() && !m["systemDisk"].empty()) {
      if (typeid(vector<boost::any>) == m["systemDisk"].type()) {
        vector<AddEnvironmentNodesRequestSystemDisk> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["systemDisk"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            AddEnvironmentNodesRequestSystemDisk model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        systemDisk = make_shared<vector<AddEnvironmentNodesRequestSystemDisk>>(expect1);
      }
    }
    if (m.find("taints") != m.end() && !m["taints"].empty()) {
      if (typeid(vector<boost::any>) == m["taints"].type()) {
        vector<AddEnvironmentNodesRequestTaints> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["taints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            AddEnvironmentNodesRequestTaints model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        taints = make_shared<vector<AddEnvironmentNodesRequestTaints>>(expect1);
      }
    }
    if (m.find("tridentSystemDisk") != m.end() && !m["tridentSystemDisk"].empty()) {
      tridentSystemDisk = make_shared<string>(boost::any_cast<string>(m["tridentSystemDisk"]));
    }
    if (m.find("tridentSystemSizeDisk") != m.end() && !m["tridentSystemSizeDisk"].empty()) {
      tridentSystemSizeDisk = make_shared<long>(boost::any_cast<long>(m["tridentSystemSizeDisk"]));
    }
    if (m.find("workerPrivateIPs") != m.end() && !m["workerPrivateIPs"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["workerPrivateIPs"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["workerPrivateIPs"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      workerPrivateIPs = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~AddEnvironmentNodesRequest() = default;
};
class AddEnvironmentNodesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> msg{};

  AddEnvironmentNodesResponseBody() {}

  explicit AddEnvironmentNodesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (msg) {
      res["msg"] = boost::any(*msg);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("msg") != m.end() && !m["msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["msg"]));
    }
  }


  virtual ~AddEnvironmentNodesResponseBody() = default;
};
class AddEnvironmentNodesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AddEnvironmentNodesResponseBody> body{};

  AddEnvironmentNodesResponse() {}

  explicit AddEnvironmentNodesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AddEnvironmentNodesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddEnvironmentNodesResponseBody>(model1);
      }
    }
  }


  virtual ~AddEnvironmentNodesResponse() = default;
};
class AddEnvironmentProductVersionsRequestProductVersionInfoList : public Darabonba::Model {
public:
  shared_ptr<string> namespace_{};
  shared_ptr<string> productVersionUID{};
  shared_ptr<string> specUID{};

  AddEnvironmentProductVersionsRequestProductVersionInfoList() {}

  explicit AddEnvironmentProductVersionsRequestProductVersionInfoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (namespace_) {
      res["namespace"] = boost::any(*namespace_);
    }
    if (productVersionUID) {
      res["productVersionUID"] = boost::any(*productVersionUID);
    }
    if (specUID) {
      res["specUID"] = boost::any(*specUID);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("namespace") != m.end() && !m["namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["namespace"]));
    }
    if (m.find("productVersionUID") != m.end() && !m["productVersionUID"].empty()) {
      productVersionUID = make_shared<string>(boost::any_cast<string>(m["productVersionUID"]));
    }
    if (m.find("specUID") != m.end() && !m["specUID"].empty()) {
      specUID = make_shared<string>(boost::any_cast<string>(m["specUID"]));
    }
  }


  virtual ~AddEnvironmentProductVersionsRequestProductVersionInfoList() = default;
};
class AddEnvironmentProductVersionsRequest : public Darabonba::Model {
public:
  shared_ptr<vector<AddEnvironmentProductVersionsRequestProductVersionInfoList>> productVersionInfoList{};
  shared_ptr<vector<string>> productVersionUIDList{};

  AddEnvironmentProductVersionsRequest() {}

  explicit AddEnvironmentProductVersionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (productVersionInfoList) {
      vector<boost::any> temp1;
      for(auto item1:*productVersionInfoList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["productVersionInfoList"] = boost::any(temp1);
    }
    if (productVersionUIDList) {
      res["productVersionUIDList"] = boost::any(*productVersionUIDList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("productVersionInfoList") != m.end() && !m["productVersionInfoList"].empty()) {
      if (typeid(vector<boost::any>) == m["productVersionInfoList"].type()) {
        vector<AddEnvironmentProductVersionsRequestProductVersionInfoList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["productVersionInfoList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            AddEnvironmentProductVersionsRequestProductVersionInfoList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        productVersionInfoList = make_shared<vector<AddEnvironmentProductVersionsRequestProductVersionInfoList>>(expect1);
      }
    }
    if (m.find("productVersionUIDList") != m.end() && !m["productVersionUIDList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["productVersionUIDList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["productVersionUIDList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      productVersionUIDList = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~AddEnvironmentProductVersionsRequest() = default;
};
class AddEnvironmentProductVersionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> msg{};

  AddEnvironmentProductVersionsResponseBody() {}

  explicit AddEnvironmentProductVersionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (msg) {
      res["msg"] = boost::any(*msg);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("msg") != m.end() && !m["msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["msg"]));
    }
  }


  virtual ~AddEnvironmentProductVersionsResponseBody() = default;
};
class AddEnvironmentProductVersionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AddEnvironmentProductVersionsResponseBody> body{};

  AddEnvironmentProductVersionsResponse() {}

  explicit AddEnvironmentProductVersionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AddEnvironmentProductVersionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddEnvironmentProductVersionsResponseBody>(model1);
      }
    }
  }


  virtual ~AddEnvironmentProductVersionsResponse() = default;
};
class AddProductComponentVersionRequest : public Darabonba::Model {
public:
  shared_ptr<string> componentVersionSpecUID{};
  shared_ptr<string> componentVersionSpecValues{};
  shared_ptr<string> releaseName{};

  AddProductComponentVersionRequest() {}

  explicit AddProductComponentVersionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (componentVersionSpecUID) {
      res["componentVersionSpecUID"] = boost::any(*componentVersionSpecUID);
    }
    if (componentVersionSpecValues) {
      res["componentVersionSpecValues"] = boost::any(*componentVersionSpecValues);
    }
    if (releaseName) {
      res["releaseName"] = boost::any(*releaseName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("componentVersionSpecUID") != m.end() && !m["componentVersionSpecUID"].empty()) {
      componentVersionSpecUID = make_shared<string>(boost::any_cast<string>(m["componentVersionSpecUID"]));
    }
    if (m.find("componentVersionSpecValues") != m.end() && !m["componentVersionSpecValues"].empty()) {
      componentVersionSpecValues = make_shared<string>(boost::any_cast<string>(m["componentVersionSpecValues"]));
    }
    if (m.find("releaseName") != m.end() && !m["releaseName"].empty()) {
      releaseName = make_shared<string>(boost::any_cast<string>(m["releaseName"]));
    }
  }


  virtual ~AddProductComponentVersionRequest() = default;
};
class AddProductComponentVersionResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> uid{};

  AddProductComponentVersionResponseBodyData() {}

  explicit AddProductComponentVersionResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (uid) {
      res["uid"] = boost::any(*uid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("uid") != m.end() && !m["uid"].empty()) {
      uid = make_shared<string>(boost::any_cast<string>(m["uid"]));
    }
  }


  virtual ~AddProductComponentVersionResponseBodyData() = default;
};
class AddProductComponentVersionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<AddProductComponentVersionResponseBodyData> data{};
  shared_ptr<string> msg{};

  AddProductComponentVersionResponseBody() {}

  explicit AddProductComponentVersionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (msg) {
      res["msg"] = boost::any(*msg);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        AddProductComponentVersionResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<AddProductComponentVersionResponseBodyData>(model1);
      }
    }
    if (m.find("msg") != m.end() && !m["msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["msg"]));
    }
  }


  virtual ~AddProductComponentVersionResponseBody() = default;
};
class AddProductComponentVersionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AddProductComponentVersionResponseBody> body{};

  AddProductComponentVersionResponse() {}

  explicit AddProductComponentVersionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AddProductComponentVersionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddProductComponentVersionResponseBody>(model1);
      }
    }
  }


  virtual ~AddProductComponentVersionResponse() = default;
};
class AddProductVersionConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> componentReleaseName{};
  shared_ptr<string> componentVersionUID{};
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<string> parentComponentReleaseName{};
  shared_ptr<string> parentComponentVersionUID{};
  shared_ptr<string> scope{};
  shared_ptr<string> value{};
  shared_ptr<string> valueType{};

  AddProductVersionConfigRequest() {}

  explicit AddProductVersionConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (componentReleaseName) {
      res["componentReleaseName"] = boost::any(*componentReleaseName);
    }
    if (componentVersionUID) {
      res["componentVersionUID"] = boost::any(*componentVersionUID);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (parentComponentReleaseName) {
      res["parentComponentReleaseName"] = boost::any(*parentComponentReleaseName);
    }
    if (parentComponentVersionUID) {
      res["parentComponentVersionUID"] = boost::any(*parentComponentVersionUID);
    }
    if (scope) {
      res["scope"] = boost::any(*scope);
    }
    if (value) {
      res["value"] = boost::any(*value);
    }
    if (valueType) {
      res["valueType"] = boost::any(*valueType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("componentReleaseName") != m.end() && !m["componentReleaseName"].empty()) {
      componentReleaseName = make_shared<string>(boost::any_cast<string>(m["componentReleaseName"]));
    }
    if (m.find("componentVersionUID") != m.end() && !m["componentVersionUID"].empty()) {
      componentVersionUID = make_shared<string>(boost::any_cast<string>(m["componentVersionUID"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("parentComponentReleaseName") != m.end() && !m["parentComponentReleaseName"].empty()) {
      parentComponentReleaseName = make_shared<string>(boost::any_cast<string>(m["parentComponentReleaseName"]));
    }
    if (m.find("parentComponentVersionUID") != m.end() && !m["parentComponentVersionUID"].empty()) {
      parentComponentVersionUID = make_shared<string>(boost::any_cast<string>(m["parentComponentVersionUID"]));
    }
    if (m.find("scope") != m.end() && !m["scope"].empty()) {
      scope = make_shared<string>(boost::any_cast<string>(m["scope"]));
    }
    if (m.find("value") != m.end() && !m["value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["value"]));
    }
    if (m.find("valueType") != m.end() && !m["valueType"].empty()) {
      valueType = make_shared<string>(boost::any_cast<string>(m["valueType"]));
    }
  }


  virtual ~AddProductVersionConfigRequest() = default;
};
class AddProductVersionConfigResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> uid{};

  AddProductVersionConfigResponseBodyData() {}

  explicit AddProductVersionConfigResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (uid) {
      res["uid"] = boost::any(*uid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("uid") != m.end() && !m["uid"].empty()) {
      uid = make_shared<string>(boost::any_cast<string>(m["uid"]));
    }
  }


  virtual ~AddProductVersionConfigResponseBodyData() = default;
};
class AddProductVersionConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<AddProductVersionConfigResponseBodyData> data{};
  shared_ptr<string> msg{};
  shared_ptr<string> requestId{};

  AddProductVersionConfigResponseBody() {}

  explicit AddProductVersionConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (msg) {
      res["msg"] = boost::any(*msg);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        AddProductVersionConfigResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<AddProductVersionConfigResponseBodyData>(model1);
      }
    }
    if (m.find("msg") != m.end() && !m["msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["msg"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~AddProductVersionConfigResponseBody() = default;
};
class AddProductVersionConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AddProductVersionConfigResponseBody> body{};

  AddProductVersionConfigResponse() {}

  explicit AddProductVersionConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AddProductVersionConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddProductVersionConfigResponseBody>(model1);
      }
    }
  }


  virtual ~AddProductVersionConfigResponse() = default;
};
class AddResourceSnapshotRequest : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> clusterUID{};
  shared_ptr<string> productVersionUID{};

  AddResourceSnapshotRequest() {}

  explicit AddResourceSnapshotRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (clusterUID) {
      res["clusterUID"] = boost::any(*clusterUID);
    }
    if (productVersionUID) {
      res["productVersionUID"] = boost::any(*productVersionUID);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("clusterUID") != m.end() && !m["clusterUID"].empty()) {
      clusterUID = make_shared<string>(boost::any_cast<string>(m["clusterUID"]));
    }
    if (m.find("productVersionUID") != m.end() && !m["productVersionUID"].empty()) {
      productVersionUID = make_shared<string>(boost::any_cast<string>(m["productVersionUID"]));
    }
  }


  virtual ~AddResourceSnapshotRequest() = default;
};
class AddResourceSnapshotResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> msg{};

  AddResourceSnapshotResponseBody() {}

  explicit AddResourceSnapshotResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (msg) {
      res["msg"] = boost::any(*msg);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("msg") != m.end() && !m["msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["msg"]));
    }
  }


  virtual ~AddResourceSnapshotResponseBody() = default;
};
class AddResourceSnapshotResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AddResourceSnapshotResponseBody> body{};

  AddResourceSnapshotResponse() {}

  explicit AddResourceSnapshotResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AddResourceSnapshotResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddResourceSnapshotResponseBody>(model1);
      }
    }
  }


  virtual ~AddResourceSnapshotResponse() = default;
};
class BatchAddEnvironmentNodesRequest : public Darabonba::Model {
public:
  shared_ptr<vector<InstanceInfo>> instanceList{};
  shared_ptr<bool> overwrite{};

  BatchAddEnvironmentNodesRequest() {}

  explicit BatchAddEnvironmentNodesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceList) {
      vector<boost::any> temp1;
      for(auto item1:*instanceList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["instanceList"] = boost::any(temp1);
    }
    if (overwrite) {
      res["overwrite"] = boost::any(*overwrite);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("instanceList") != m.end() && !m["instanceList"].empty()) {
      if (typeid(vector<boost::any>) == m["instanceList"].type()) {
        vector<InstanceInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["instanceList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            InstanceInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        instanceList = make_shared<vector<InstanceInfo>>(expect1);
      }
    }
    if (m.find("overwrite") != m.end() && !m["overwrite"].empty()) {
      overwrite = make_shared<bool>(boost::any_cast<bool>(m["overwrite"]));
    }
  }


  virtual ~BatchAddEnvironmentNodesRequest() = default;
};
class BatchAddEnvironmentNodesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> msg{};

  BatchAddEnvironmentNodesResponseBody() {}

  explicit BatchAddEnvironmentNodesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (msg) {
      res["msg"] = boost::any(*msg);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("msg") != m.end() && !m["msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["msg"]));
    }
  }


  virtual ~BatchAddEnvironmentNodesResponseBody() = default;
};
class BatchAddEnvironmentNodesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<BatchAddEnvironmentNodesResponseBody> body{};

  BatchAddEnvironmentNodesResponse() {}

  explicit BatchAddEnvironmentNodesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        BatchAddEnvironmentNodesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<BatchAddEnvironmentNodesResponseBody>(model1);
      }
    }
  }


  virtual ~BatchAddEnvironmentNodesResponse() = default;
};
class BatchAddProductVersionConfigRequestProductVersionConfigList : public Darabonba::Model {
public:
  shared_ptr<string> componentReleaseName{};
  shared_ptr<string> componentVersionUID{};
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<string> parentComponentReleaseName{};
  shared_ptr<string> parentComponentVersionUID{};
  shared_ptr<string> scope{};
  shared_ptr<string> value{};
  shared_ptr<string> valueType{};

  BatchAddProductVersionConfigRequestProductVersionConfigList() {}

  explicit BatchAddProductVersionConfigRequestProductVersionConfigList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (componentReleaseName) {
      res["componentReleaseName"] = boost::any(*componentReleaseName);
    }
    if (componentVersionUID) {
      res["componentVersionUID"] = boost::any(*componentVersionUID);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (parentComponentReleaseName) {
      res["parentComponentReleaseName"] = boost::any(*parentComponentReleaseName);
    }
    if (parentComponentVersionUID) {
      res["parentComponentVersionUID"] = boost::any(*parentComponentVersionUID);
    }
    if (scope) {
      res["scope"] = boost::any(*scope);
    }
    if (value) {
      res["value"] = boost::any(*value);
    }
    if (valueType) {
      res["valueType"] = boost::any(*valueType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("componentReleaseName") != m.end() && !m["componentReleaseName"].empty()) {
      componentReleaseName = make_shared<string>(boost::any_cast<string>(m["componentReleaseName"]));
    }
    if (m.find("componentVersionUID") != m.end() && !m["componentVersionUID"].empty()) {
      componentVersionUID = make_shared<string>(boost::any_cast<string>(m["componentVersionUID"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("parentComponentReleaseName") != m.end() && !m["parentComponentReleaseName"].empty()) {
      parentComponentReleaseName = make_shared<string>(boost::any_cast<string>(m["parentComponentReleaseName"]));
    }
    if (m.find("parentComponentVersionUID") != m.end() && !m["parentComponentVersionUID"].empty()) {
      parentComponentVersionUID = make_shared<string>(boost::any_cast<string>(m["parentComponentVersionUID"]));
    }
    if (m.find("scope") != m.end() && !m["scope"].empty()) {
      scope = make_shared<string>(boost::any_cast<string>(m["scope"]));
    }
    if (m.find("value") != m.end() && !m["value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["value"]));
    }
    if (m.find("valueType") != m.end() && !m["valueType"].empty()) {
      valueType = make_shared<string>(boost::any_cast<string>(m["valueType"]));
    }
  }


  virtual ~BatchAddProductVersionConfigRequestProductVersionConfigList() = default;
};
class BatchAddProductVersionConfigRequest : public Darabonba::Model {
public:
  shared_ptr<vector<BatchAddProductVersionConfigRequestProductVersionConfigList>> productVersionConfigList{};

  BatchAddProductVersionConfigRequest() {}

  explicit BatchAddProductVersionConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (productVersionConfigList) {
      vector<boost::any> temp1;
      for(auto item1:*productVersionConfigList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["productVersionConfigList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("productVersionConfigList") != m.end() && !m["productVersionConfigList"].empty()) {
      if (typeid(vector<boost::any>) == m["productVersionConfigList"].type()) {
        vector<BatchAddProductVersionConfigRequestProductVersionConfigList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["productVersionConfigList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            BatchAddProductVersionConfigRequestProductVersionConfigList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        productVersionConfigList = make_shared<vector<BatchAddProductVersionConfigRequestProductVersionConfigList>>(expect1);
      }
    }
  }


  virtual ~BatchAddProductVersionConfigRequest() = default;
};
class BatchAddProductVersionConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> msg{};

  BatchAddProductVersionConfigResponseBody() {}

  explicit BatchAddProductVersionConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (msg) {
      res["msg"] = boost::any(*msg);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("msg") != m.end() && !m["msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["msg"]));
    }
  }


  virtual ~BatchAddProductVersionConfigResponseBody() = default;
};
class BatchAddProductVersionConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<BatchAddProductVersionConfigResponseBody> body{};

  BatchAddProductVersionConfigResponse() {}

  explicit BatchAddProductVersionConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        BatchAddProductVersionConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<BatchAddProductVersionConfigResponseBody>(model1);
      }
    }
  }


  virtual ~BatchAddProductVersionConfigResponse() = default;
};
class CreateDeliverableRequestFoundation : public Darabonba::Model {
public:
  shared_ptr<string> clusterConfig{};
  shared_ptr<string> foundationReferenceUID{};
  shared_ptr<string> foundationVersion{};
  shared_ptr<string> foundationVersionUID{};
  shared_ptr<bool> reusable{};

  CreateDeliverableRequestFoundation() {}

  explicit CreateDeliverableRequestFoundation(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterConfig) {
      res["clusterConfig"] = boost::any(*clusterConfig);
    }
    if (foundationReferenceUID) {
      res["foundationReferenceUID"] = boost::any(*foundationReferenceUID);
    }
    if (foundationVersion) {
      res["foundationVersion"] = boost::any(*foundationVersion);
    }
    if (foundationVersionUID) {
      res["foundationVersionUID"] = boost::any(*foundationVersionUID);
    }
    if (reusable) {
      res["reusable"] = boost::any(*reusable);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("clusterConfig") != m.end() && !m["clusterConfig"].empty()) {
      clusterConfig = make_shared<string>(boost::any_cast<string>(m["clusterConfig"]));
    }
    if (m.find("foundationReferenceUID") != m.end() && !m["foundationReferenceUID"].empty()) {
      foundationReferenceUID = make_shared<string>(boost::any_cast<string>(m["foundationReferenceUID"]));
    }
    if (m.find("foundationVersion") != m.end() && !m["foundationVersion"].empty()) {
      foundationVersion = make_shared<string>(boost::any_cast<string>(m["foundationVersion"]));
    }
    if (m.find("foundationVersionUID") != m.end() && !m["foundationVersionUID"].empty()) {
      foundationVersionUID = make_shared<string>(boost::any_cast<string>(m["foundationVersionUID"]));
    }
    if (m.find("reusable") != m.end() && !m["reusable"].empty()) {
      reusable = make_shared<bool>(boost::any_cast<bool>(m["reusable"]));
    }
  }


  virtual ~CreateDeliverableRequestFoundation() = default;
};
class CreateDeliverableRequestProducts : public Darabonba::Model {
public:
  shared_ptr<string> namespace_{};
  shared_ptr<string> productName{};
  shared_ptr<string> productType{};
  shared_ptr<string> productUID{};
  shared_ptr<string> productVersion{};
  shared_ptr<string> productVersionSpecName{};
  shared_ptr<string> productVersionSpecUID{};
  shared_ptr<string> productVersionUID{};

  CreateDeliverableRequestProducts() {}

  explicit CreateDeliverableRequestProducts(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (namespace_) {
      res["namespace"] = boost::any(*namespace_);
    }
    if (productName) {
      res["productName"] = boost::any(*productName);
    }
    if (productType) {
      res["productType"] = boost::any(*productType);
    }
    if (productUID) {
      res["productUID"] = boost::any(*productUID);
    }
    if (productVersion) {
      res["productVersion"] = boost::any(*productVersion);
    }
    if (productVersionSpecName) {
      res["productVersionSpecName"] = boost::any(*productVersionSpecName);
    }
    if (productVersionSpecUID) {
      res["productVersionSpecUID"] = boost::any(*productVersionSpecUID);
    }
    if (productVersionUID) {
      res["productVersionUID"] = boost::any(*productVersionUID);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("namespace") != m.end() && !m["namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["namespace"]));
    }
    if (m.find("productName") != m.end() && !m["productName"].empty()) {
      productName = make_shared<string>(boost::any_cast<string>(m["productName"]));
    }
    if (m.find("productType") != m.end() && !m["productType"].empty()) {
      productType = make_shared<string>(boost::any_cast<string>(m["productType"]));
    }
    if (m.find("productUID") != m.end() && !m["productUID"].empty()) {
      productUID = make_shared<string>(boost::any_cast<string>(m["productUID"]));
    }
    if (m.find("productVersion") != m.end() && !m["productVersion"].empty()) {
      productVersion = make_shared<string>(boost::any_cast<string>(m["productVersion"]));
    }
    if (m.find("productVersionSpecName") != m.end() && !m["productVersionSpecName"].empty()) {
      productVersionSpecName = make_shared<string>(boost::any_cast<string>(m["productVersionSpecName"]));
    }
    if (m.find("productVersionSpecUID") != m.end() && !m["productVersionSpecUID"].empty()) {
      productVersionSpecUID = make_shared<string>(boost::any_cast<string>(m["productVersionSpecUID"]));
    }
    if (m.find("productVersionUID") != m.end() && !m["productVersionUID"].empty()) {
      productVersionUID = make_shared<string>(boost::any_cast<string>(m["productVersionUID"]));
    }
  }


  virtual ~CreateDeliverableRequestProducts() = default;
};
class CreateDeliverableRequest : public Darabonba::Model {
public:
  shared_ptr<CreateDeliverableRequestFoundation> foundation{};
  shared_ptr<vector<CreateDeliverableRequestProducts>> products{};

  CreateDeliverableRequest() {}

  explicit CreateDeliverableRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (foundation) {
      res["foundation"] = foundation ? boost::any(foundation->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (products) {
      vector<boost::any> temp1;
      for(auto item1:*products){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["products"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("foundation") != m.end() && !m["foundation"].empty()) {
      if (typeid(map<string, boost::any>) == m["foundation"].type()) {
        CreateDeliverableRequestFoundation model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["foundation"]));
        foundation = make_shared<CreateDeliverableRequestFoundation>(model1);
      }
    }
    if (m.find("products") != m.end() && !m["products"].empty()) {
      if (typeid(vector<boost::any>) == m["products"].type()) {
        vector<CreateDeliverableRequestProducts> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["products"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateDeliverableRequestProducts model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        products = make_shared<vector<CreateDeliverableRequestProducts>>(expect1);
      }
    }
  }


  virtual ~CreateDeliverableRequest() = default;
};
class CreateDeliverableResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> uid{};

  CreateDeliverableResponseBodyData() {}

  explicit CreateDeliverableResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (uid) {
      res["uid"] = boost::any(*uid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("uid") != m.end() && !m["uid"].empty()) {
      uid = make_shared<string>(boost::any_cast<string>(m["uid"]));
    }
  }


  virtual ~CreateDeliverableResponseBodyData() = default;
};
class CreateDeliverableResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<CreateDeliverableResponseBodyData> data{};
  shared_ptr<string> msg{};

  CreateDeliverableResponseBody() {}

  explicit CreateDeliverableResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (msg) {
      res["msg"] = boost::any(*msg);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        CreateDeliverableResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<CreateDeliverableResponseBodyData>(model1);
      }
    }
    if (m.find("msg") != m.end() && !m["msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["msg"]));
    }
  }


  virtual ~CreateDeliverableResponseBody() = default;
};
class CreateDeliverableResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateDeliverableResponseBody> body{};

  CreateDeliverableResponse() {}

  explicit CreateDeliverableResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateDeliverableResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateDeliverableResponseBody>(model1);
      }
    }
  }


  virtual ~CreateDeliverableResponse() = default;
};
class CreateDeliveryInstanceRequestFoundation : public Darabonba::Model {
public:
  shared_ptr<string> clusterConfig{};
  shared_ptr<string> foundationReferenceUID{};
  shared_ptr<string> foundationVersion{};
  shared_ptr<string> foundationVersionUID{};
  shared_ptr<string> reusable{};

  CreateDeliveryInstanceRequestFoundation() {}

  explicit CreateDeliveryInstanceRequestFoundation(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterConfig) {
      res["clusterConfig"] = boost::any(*clusterConfig);
    }
    if (foundationReferenceUID) {
      res["foundationReferenceUID"] = boost::any(*foundationReferenceUID);
    }
    if (foundationVersion) {
      res["foundationVersion"] = boost::any(*foundationVersion);
    }
    if (foundationVersionUID) {
      res["foundationVersionUID"] = boost::any(*foundationVersionUID);
    }
    if (reusable) {
      res["reusable"] = boost::any(*reusable);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("clusterConfig") != m.end() && !m["clusterConfig"].empty()) {
      clusterConfig = make_shared<string>(boost::any_cast<string>(m["clusterConfig"]));
    }
    if (m.find("foundationReferenceUID") != m.end() && !m["foundationReferenceUID"].empty()) {
      foundationReferenceUID = make_shared<string>(boost::any_cast<string>(m["foundationReferenceUID"]));
    }
    if (m.find("foundationVersion") != m.end() && !m["foundationVersion"].empty()) {
      foundationVersion = make_shared<string>(boost::any_cast<string>(m["foundationVersion"]));
    }
    if (m.find("foundationVersionUID") != m.end() && !m["foundationVersionUID"].empty()) {
      foundationVersionUID = make_shared<string>(boost::any_cast<string>(m["foundationVersionUID"]));
    }
    if (m.find("reusable") != m.end() && !m["reusable"].empty()) {
      reusable = make_shared<string>(boost::any_cast<string>(m["reusable"]));
    }
  }


  virtual ~CreateDeliveryInstanceRequestFoundation() = default;
};
class CreateDeliveryInstanceRequestProducts : public Darabonba::Model {
public:
  shared_ptr<string> namespace_{};
  shared_ptr<string> order{};
  shared_ptr<string> productName{};
  shared_ptr<string> productType{};
  shared_ptr<string> productUID{};
  shared_ptr<string> productVersion{};
  shared_ptr<string> productVersionSpecName{};
  shared_ptr<string> productVersionSpecUID{};
  shared_ptr<string> productVersionUID{};

  CreateDeliveryInstanceRequestProducts() {}

  explicit CreateDeliveryInstanceRequestProducts(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (namespace_) {
      res["namespace"] = boost::any(*namespace_);
    }
    if (order) {
      res["order"] = boost::any(*order);
    }
    if (productName) {
      res["productName"] = boost::any(*productName);
    }
    if (productType) {
      res["productType"] = boost::any(*productType);
    }
    if (productUID) {
      res["productUID"] = boost::any(*productUID);
    }
    if (productVersion) {
      res["productVersion"] = boost::any(*productVersion);
    }
    if (productVersionSpecName) {
      res["productVersionSpecName"] = boost::any(*productVersionSpecName);
    }
    if (productVersionSpecUID) {
      res["productVersionSpecUID"] = boost::any(*productVersionSpecUID);
    }
    if (productVersionUID) {
      res["productVersionUID"] = boost::any(*productVersionUID);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("namespace") != m.end() && !m["namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["namespace"]));
    }
    if (m.find("order") != m.end() && !m["order"].empty()) {
      order = make_shared<string>(boost::any_cast<string>(m["order"]));
    }
    if (m.find("productName") != m.end() && !m["productName"].empty()) {
      productName = make_shared<string>(boost::any_cast<string>(m["productName"]));
    }
    if (m.find("productType") != m.end() && !m["productType"].empty()) {
      productType = make_shared<string>(boost::any_cast<string>(m["productType"]));
    }
    if (m.find("productUID") != m.end() && !m["productUID"].empty()) {
      productUID = make_shared<string>(boost::any_cast<string>(m["productUID"]));
    }
    if (m.find("productVersion") != m.end() && !m["productVersion"].empty()) {
      productVersion = make_shared<string>(boost::any_cast<string>(m["productVersion"]));
    }
    if (m.find("productVersionSpecName") != m.end() && !m["productVersionSpecName"].empty()) {
      productVersionSpecName = make_shared<string>(boost::any_cast<string>(m["productVersionSpecName"]));
    }
    if (m.find("productVersionSpecUID") != m.end() && !m["productVersionSpecUID"].empty()) {
      productVersionSpecUID = make_shared<string>(boost::any_cast<string>(m["productVersionSpecUID"]));
    }
    if (m.find("productVersionUID") != m.end() && !m["productVersionUID"].empty()) {
      productVersionUID = make_shared<string>(boost::any_cast<string>(m["productVersionUID"]));
    }
  }


  virtual ~CreateDeliveryInstanceRequestProducts() = default;
};
class CreateDeliveryInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterUID{};
  shared_ptr<string> deliverableConfigUID{};
  shared_ptr<string> deliverableUID{};
  shared_ptr<string> envUID{};
  shared_ptr<CreateDeliveryInstanceRequestFoundation> foundation{};
  shared_ptr<vector<CreateDeliveryInstanceRequestProducts>> products{};
  shared_ptr<string> templateUID{};

  CreateDeliveryInstanceRequest() {}

  explicit CreateDeliveryInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterUID) {
      res["clusterUID"] = boost::any(*clusterUID);
    }
    if (deliverableConfigUID) {
      res["deliverableConfigUID"] = boost::any(*deliverableConfigUID);
    }
    if (deliverableUID) {
      res["deliverableUID"] = boost::any(*deliverableUID);
    }
    if (envUID) {
      res["envUID"] = boost::any(*envUID);
    }
    if (foundation) {
      res["foundation"] = foundation ? boost::any(foundation->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (products) {
      vector<boost::any> temp1;
      for(auto item1:*products){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["products"] = boost::any(temp1);
    }
    if (templateUID) {
      res["templateUID"] = boost::any(*templateUID);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("clusterUID") != m.end() && !m["clusterUID"].empty()) {
      clusterUID = make_shared<string>(boost::any_cast<string>(m["clusterUID"]));
    }
    if (m.find("deliverableConfigUID") != m.end() && !m["deliverableConfigUID"].empty()) {
      deliverableConfigUID = make_shared<string>(boost::any_cast<string>(m["deliverableConfigUID"]));
    }
    if (m.find("deliverableUID") != m.end() && !m["deliverableUID"].empty()) {
      deliverableUID = make_shared<string>(boost::any_cast<string>(m["deliverableUID"]));
    }
    if (m.find("envUID") != m.end() && !m["envUID"].empty()) {
      envUID = make_shared<string>(boost::any_cast<string>(m["envUID"]));
    }
    if (m.find("foundation") != m.end() && !m["foundation"].empty()) {
      if (typeid(map<string, boost::any>) == m["foundation"].type()) {
        CreateDeliveryInstanceRequestFoundation model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["foundation"]));
        foundation = make_shared<CreateDeliveryInstanceRequestFoundation>(model1);
      }
    }
    if (m.find("products") != m.end() && !m["products"].empty()) {
      if (typeid(vector<boost::any>) == m["products"].type()) {
        vector<CreateDeliveryInstanceRequestProducts> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["products"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateDeliveryInstanceRequestProducts model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        products = make_shared<vector<CreateDeliveryInstanceRequestProducts>>(expect1);
      }
    }
    if (m.find("templateUID") != m.end() && !m["templateUID"].empty()) {
      templateUID = make_shared<string>(boost::any_cast<string>(m["templateUID"]));
    }
  }


  virtual ~CreateDeliveryInstanceRequest() = default;
};
class CreateDeliveryInstanceResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> uid{};

  CreateDeliveryInstanceResponseBodyData() {}

  explicit CreateDeliveryInstanceResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (uid) {
      res["uid"] = boost::any(*uid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("uid") != m.end() && !m["uid"].empty()) {
      uid = make_shared<string>(boost::any_cast<string>(m["uid"]));
    }
  }


  virtual ~CreateDeliveryInstanceResponseBodyData() = default;
};
class CreateDeliveryInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<CreateDeliveryInstanceResponseBodyData> data{};
  shared_ptr<string> msg{};

  CreateDeliveryInstanceResponseBody() {}

  explicit CreateDeliveryInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (msg) {
      res["msg"] = boost::any(*msg);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        CreateDeliveryInstanceResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<CreateDeliveryInstanceResponseBodyData>(model1);
      }
    }
    if (m.find("msg") != m.end() && !m["msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["msg"]));
    }
  }


  virtual ~CreateDeliveryInstanceResponseBody() = default;
};
class CreateDeliveryInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateDeliveryInstanceResponseBody> body{};

  CreateDeliveryInstanceResponse() {}

  explicit CreateDeliveryInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateDeliveryInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateDeliveryInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~CreateDeliveryInstanceResponse() = default;
};
class CreateDeliveryPackageRequest : public Darabonba::Model {
public:
  shared_ptr<string> deliverableUID{};
  shared_ptr<string> deliveryInstanceUID{};
  shared_ptr<string> originDeliverableUID{};
  shared_ptr<string> packageContentType{};
  shared_ptr<string> packageType{};
  shared_ptr<string> platform{};

  CreateDeliveryPackageRequest() {}

  explicit CreateDeliveryPackageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deliverableUID) {
      res["deliverableUID"] = boost::any(*deliverableUID);
    }
    if (deliveryInstanceUID) {
      res["deliveryInstanceUID"] = boost::any(*deliveryInstanceUID);
    }
    if (originDeliverableUID) {
      res["originDeliverableUID"] = boost::any(*originDeliverableUID);
    }
    if (packageContentType) {
      res["packageContentType"] = boost::any(*packageContentType);
    }
    if (packageType) {
      res["packageType"] = boost::any(*packageType);
    }
    if (platform) {
      res["platform"] = boost::any(*platform);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("deliverableUID") != m.end() && !m["deliverableUID"].empty()) {
      deliverableUID = make_shared<string>(boost::any_cast<string>(m["deliverableUID"]));
    }
    if (m.find("deliveryInstanceUID") != m.end() && !m["deliveryInstanceUID"].empty()) {
      deliveryInstanceUID = make_shared<string>(boost::any_cast<string>(m["deliveryInstanceUID"]));
    }
    if (m.find("originDeliverableUID") != m.end() && !m["originDeliverableUID"].empty()) {
      originDeliverableUID = make_shared<string>(boost::any_cast<string>(m["originDeliverableUID"]));
    }
    if (m.find("packageContentType") != m.end() && !m["packageContentType"].empty()) {
      packageContentType = make_shared<string>(boost::any_cast<string>(m["packageContentType"]));
    }
    if (m.find("packageType") != m.end() && !m["packageType"].empty()) {
      packageType = make_shared<string>(boost::any_cast<string>(m["packageType"]));
    }
    if (m.find("platform") != m.end() && !m["platform"].empty()) {
      platform = make_shared<string>(boost::any_cast<string>(m["platform"]));
    }
  }


  virtual ~CreateDeliveryPackageRequest() = default;
};
class CreateDeliveryPackageResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> uid{};

  CreateDeliveryPackageResponseBodyData() {}

  explicit CreateDeliveryPackageResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (uid) {
      res["uid"] = boost::any(*uid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("uid") != m.end() && !m["uid"].empty()) {
      uid = make_shared<string>(boost::any_cast<string>(m["uid"]));
    }
  }


  virtual ~CreateDeliveryPackageResponseBodyData() = default;
};
class CreateDeliveryPackageResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<CreateDeliveryPackageResponseBodyData> data{};
  shared_ptr<string> msg{};

  CreateDeliveryPackageResponseBody() {}

  explicit CreateDeliveryPackageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (msg) {
      res["msg"] = boost::any(*msg);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        CreateDeliveryPackageResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<CreateDeliveryPackageResponseBodyData>(model1);
      }
    }
    if (m.find("msg") != m.end() && !m["msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["msg"]));
    }
  }


  virtual ~CreateDeliveryPackageResponseBody() = default;
};
class CreateDeliveryPackageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateDeliveryPackageResponseBody> body{};

  CreateDeliveryPackageResponse() {}

  explicit CreateDeliveryPackageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateDeliveryPackageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateDeliveryPackageResponseBody>(model1);
      }
    }
  }


  virtual ~CreateDeliveryPackageResponse() = default;
};
class CreateEnvironmentHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> clientToken{};

  CreateEnvironmentHeaders() {}

  explicit CreateEnvironmentHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
  }


  virtual ~CreateEnvironmentHeaders() = default;
};
class CreateEnvironmentRequestPlatform : public Darabonba::Model {
public:
  shared_ptr<string> architecture{};
  shared_ptr<string> os{};

  CreateEnvironmentRequestPlatform() {}

  explicit CreateEnvironmentRequestPlatform(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (architecture) {
      res["architecture"] = boost::any(*architecture);
    }
    if (os) {
      res["os"] = boost::any(*os);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("architecture") != m.end() && !m["architecture"].empty()) {
      architecture = make_shared<string>(boost::any_cast<string>(m["architecture"]));
    }
    if (m.find("os") != m.end() && !m["os"].empty()) {
      os = make_shared<string>(boost::any_cast<string>(m["os"]));
    }
  }


  virtual ~CreateEnvironmentRequestPlatform() = default;
};
class CreateEnvironmentRequest : public Darabonba::Model {
public:
  shared_ptr<string> annotations{};
  shared_ptr<string> description{};
  shared_ptr<string> expiredAt{};
  shared_ptr<string> location{};
  shared_ptr<string> name{};
  shared_ptr<CreateEnvironmentRequestPlatform> platform{};
  shared_ptr<vector<Platform>> platformList{};
  shared_ptr<string> productVersionUID{};
  shared_ptr<string> type{};
  shared_ptr<string> vendorConfig{};
  shared_ptr<string> vendorType{};

  CreateEnvironmentRequest() {}

  explicit CreateEnvironmentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (annotations) {
      res["annotations"] = boost::any(*annotations);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (expiredAt) {
      res["expiredAt"] = boost::any(*expiredAt);
    }
    if (location) {
      res["location"] = boost::any(*location);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (platform) {
      res["platform"] = platform ? boost::any(platform->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (platformList) {
      vector<boost::any> temp1;
      for(auto item1:*platformList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["platformList"] = boost::any(temp1);
    }
    if (productVersionUID) {
      res["productVersionUID"] = boost::any(*productVersionUID);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (vendorConfig) {
      res["vendorConfig"] = boost::any(*vendorConfig);
    }
    if (vendorType) {
      res["vendorType"] = boost::any(*vendorType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("annotations") != m.end() && !m["annotations"].empty()) {
      annotations = make_shared<string>(boost::any_cast<string>(m["annotations"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("expiredAt") != m.end() && !m["expiredAt"].empty()) {
      expiredAt = make_shared<string>(boost::any_cast<string>(m["expiredAt"]));
    }
    if (m.find("location") != m.end() && !m["location"].empty()) {
      location = make_shared<string>(boost::any_cast<string>(m["location"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("platform") != m.end() && !m["platform"].empty()) {
      if (typeid(map<string, boost::any>) == m["platform"].type()) {
        CreateEnvironmentRequestPlatform model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["platform"]));
        platform = make_shared<CreateEnvironmentRequestPlatform>(model1);
      }
    }
    if (m.find("platformList") != m.end() && !m["platformList"].empty()) {
      if (typeid(vector<boost::any>) == m["platformList"].type()) {
        vector<Platform> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["platformList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Platform model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        platformList = make_shared<vector<Platform>>(expect1);
      }
    }
    if (m.find("productVersionUID") != m.end() && !m["productVersionUID"].empty()) {
      productVersionUID = make_shared<string>(boost::any_cast<string>(m["productVersionUID"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("vendorConfig") != m.end() && !m["vendorConfig"].empty()) {
      vendorConfig = make_shared<string>(boost::any_cast<string>(m["vendorConfig"]));
    }
    if (m.find("vendorType") != m.end() && !m["vendorType"].empty()) {
      vendorType = make_shared<string>(boost::any_cast<string>(m["vendorType"]));
    }
  }


  virtual ~CreateEnvironmentRequest() = default;
};
class CreateEnvironmentResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> environmentUID{};
  shared_ptr<string> vendorConfig{};

  CreateEnvironmentResponseBodyData() {}

  explicit CreateEnvironmentResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (environmentUID) {
      res["environmentUID"] = boost::any(*environmentUID);
    }
    if (vendorConfig) {
      res["vendorConfig"] = boost::any(*vendorConfig);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("environmentUID") != m.end() && !m["environmentUID"].empty()) {
      environmentUID = make_shared<string>(boost::any_cast<string>(m["environmentUID"]));
    }
    if (m.find("vendorConfig") != m.end() && !m["vendorConfig"].empty()) {
      vendorConfig = make_shared<string>(boost::any_cast<string>(m["vendorConfig"]));
    }
  }


  virtual ~CreateEnvironmentResponseBodyData() = default;
};
class CreateEnvironmentResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<CreateEnvironmentResponseBodyData> data{};
  shared_ptr<string> msg{};

  CreateEnvironmentResponseBody() {}

  explicit CreateEnvironmentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (msg) {
      res["msg"] = boost::any(*msg);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        CreateEnvironmentResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<CreateEnvironmentResponseBodyData>(model1);
      }
    }
    if (m.find("msg") != m.end() && !m["msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["msg"]));
    }
  }


  virtual ~CreateEnvironmentResponseBody() = default;
};
class CreateEnvironmentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateEnvironmentResponseBody> body{};

  CreateEnvironmentResponse() {}

  explicit CreateEnvironmentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateEnvironmentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateEnvironmentResponseBody>(model1);
      }
    }
  }


  virtual ~CreateEnvironmentResponse() = default;
};
class CreateEnvironmentLicenseRequestLicenseQuotaClusterQuota : public Darabonba::Model {
public:
  shared_ptr<long> cpuCoreLimit{};

  CreateEnvironmentLicenseRequestLicenseQuotaClusterQuota() {}

  explicit CreateEnvironmentLicenseRequestLicenseQuotaClusterQuota(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cpuCoreLimit) {
      res["cpuCoreLimit"] = boost::any(*cpuCoreLimit);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("cpuCoreLimit") != m.end() && !m["cpuCoreLimit"].empty()) {
      cpuCoreLimit = make_shared<long>(boost::any_cast<long>(m["cpuCoreLimit"]));
    }
  }


  virtual ~CreateEnvironmentLicenseRequestLicenseQuotaClusterQuota() = default;
};
class CreateEnvironmentLicenseRequestLicenseQuotaCustomQuotas : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  CreateEnvironmentLicenseRequestLicenseQuotaCustomQuotas() {}

  explicit CreateEnvironmentLicenseRequestLicenseQuotaCustomQuotas(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (key) {
      res["key"] = boost::any(*key);
    }
    if (value) {
      res["value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("key") != m.end() && !m["key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["key"]));
    }
    if (m.find("value") != m.end() && !m["value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["value"]));
    }
  }


  virtual ~CreateEnvironmentLicenseRequestLicenseQuotaCustomQuotas() = default;
};
class CreateEnvironmentLicenseRequestLicenseQuota : public Darabonba::Model {
public:
  shared_ptr<CreateEnvironmentLicenseRequestLicenseQuotaClusterQuota> clusterQuota{};
  shared_ptr<vector<CreateEnvironmentLicenseRequestLicenseQuotaCustomQuotas>> customQuotas{};

  CreateEnvironmentLicenseRequestLicenseQuota() {}

  explicit CreateEnvironmentLicenseRequestLicenseQuota(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterQuota) {
      res["clusterQuota"] = clusterQuota ? boost::any(clusterQuota->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (customQuotas) {
      vector<boost::any> temp1;
      for(auto item1:*customQuotas){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["customQuotas"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("clusterQuota") != m.end() && !m["clusterQuota"].empty()) {
      if (typeid(map<string, boost::any>) == m["clusterQuota"].type()) {
        CreateEnvironmentLicenseRequestLicenseQuotaClusterQuota model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["clusterQuota"]));
        clusterQuota = make_shared<CreateEnvironmentLicenseRequestLicenseQuotaClusterQuota>(model1);
      }
    }
    if (m.find("customQuotas") != m.end() && !m["customQuotas"].empty()) {
      if (typeid(vector<boost::any>) == m["customQuotas"].type()) {
        vector<CreateEnvironmentLicenseRequestLicenseQuotaCustomQuotas> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["customQuotas"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateEnvironmentLicenseRequestLicenseQuotaCustomQuotas model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        customQuotas = make_shared<vector<CreateEnvironmentLicenseRequestLicenseQuotaCustomQuotas>>(expect1);
      }
    }
  }


  virtual ~CreateEnvironmentLicenseRequestLicenseQuota() = default;
};
class CreateEnvironmentLicenseRequest : public Darabonba::Model {
public:
  shared_ptr<string> companyName{};
  shared_ptr<string> contact{};
  shared_ptr<string> description{};
  shared_ptr<string> expireTime{};
  shared_ptr<CreateEnvironmentLicenseRequestLicenseQuota> licenseQuota{};
  shared_ptr<string> machineFingerprint{};
  shared_ptr<string> name{};
  shared_ptr<string> productVersionUID{};
  shared_ptr<string> scenario{};
  shared_ptr<string> scope{};
  shared_ptr<string> type{};

  CreateEnvironmentLicenseRequest() {}

  explicit CreateEnvironmentLicenseRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (companyName) {
      res["companyName"] = boost::any(*companyName);
    }
    if (contact) {
      res["contact"] = boost::any(*contact);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (expireTime) {
      res["expireTime"] = boost::any(*expireTime);
    }
    if (licenseQuota) {
      res["licenseQuota"] = licenseQuota ? boost::any(licenseQuota->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (machineFingerprint) {
      res["machineFingerprint"] = boost::any(*machineFingerprint);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (productVersionUID) {
      res["productVersionUID"] = boost::any(*productVersionUID);
    }
    if (scenario) {
      res["scenario"] = boost::any(*scenario);
    }
    if (scope) {
      res["scope"] = boost::any(*scope);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("companyName") != m.end() && !m["companyName"].empty()) {
      companyName = make_shared<string>(boost::any_cast<string>(m["companyName"]));
    }
    if (m.find("contact") != m.end() && !m["contact"].empty()) {
      contact = make_shared<string>(boost::any_cast<string>(m["contact"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("expireTime") != m.end() && !m["expireTime"].empty()) {
      expireTime = make_shared<string>(boost::any_cast<string>(m["expireTime"]));
    }
    if (m.find("licenseQuota") != m.end() && !m["licenseQuota"].empty()) {
      if (typeid(map<string, boost::any>) == m["licenseQuota"].type()) {
        CreateEnvironmentLicenseRequestLicenseQuota model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["licenseQuota"]));
        licenseQuota = make_shared<CreateEnvironmentLicenseRequestLicenseQuota>(model1);
      }
    }
    if (m.find("machineFingerprint") != m.end() && !m["machineFingerprint"].empty()) {
      machineFingerprint = make_shared<string>(boost::any_cast<string>(m["machineFingerprint"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("productVersionUID") != m.end() && !m["productVersionUID"].empty()) {
      productVersionUID = make_shared<string>(boost::any_cast<string>(m["productVersionUID"]));
    }
    if (m.find("scenario") != m.end() && !m["scenario"].empty()) {
      scenario = make_shared<string>(boost::any_cast<string>(m["scenario"]));
    }
    if (m.find("scope") != m.end() && !m["scope"].empty()) {
      scope = make_shared<string>(boost::any_cast<string>(m["scope"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~CreateEnvironmentLicenseRequest() = default;
};
class CreateEnvironmentLicenseResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> uid{};

  CreateEnvironmentLicenseResponseBodyData() {}

  explicit CreateEnvironmentLicenseResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (uid) {
      res["uid"] = boost::any(*uid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("uid") != m.end() && !m["uid"].empty()) {
      uid = make_shared<string>(boost::any_cast<string>(m["uid"]));
    }
  }


  virtual ~CreateEnvironmentLicenseResponseBodyData() = default;
};
class CreateEnvironmentLicenseResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<CreateEnvironmentLicenseResponseBodyData> data{};
  shared_ptr<string> msg{};

  CreateEnvironmentLicenseResponseBody() {}

  explicit CreateEnvironmentLicenseResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (msg) {
      res["msg"] = boost::any(*msg);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        CreateEnvironmentLicenseResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<CreateEnvironmentLicenseResponseBodyData>(model1);
      }
    }
    if (m.find("msg") != m.end() && !m["msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["msg"]));
    }
  }


  virtual ~CreateEnvironmentLicenseResponseBody() = default;
};
class CreateEnvironmentLicenseResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateEnvironmentLicenseResponseBody> body{};

  CreateEnvironmentLicenseResponse() {}

  explicit CreateEnvironmentLicenseResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateEnvironmentLicenseResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateEnvironmentLicenseResponseBody>(model1);
      }
    }
  }


  virtual ~CreateEnvironmentLicenseResponse() = default;
};
class CreateFoundationReferenceRequestComponentConfigs : public Darabonba::Model {
public:
  shared_ptr<string> componentVersionUID{};
  shared_ptr<string> orchestrationValues{};

  CreateFoundationReferenceRequestComponentConfigs() {}

  explicit CreateFoundationReferenceRequestComponentConfigs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (componentVersionUID) {
      res["componentVersionUID"] = boost::any(*componentVersionUID);
    }
    if (orchestrationValues) {
      res["orchestrationValues"] = boost::any(*orchestrationValues);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("componentVersionUID") != m.end() && !m["componentVersionUID"].empty()) {
      componentVersionUID = make_shared<string>(boost::any_cast<string>(m["componentVersionUID"]));
    }
    if (m.find("orchestrationValues") != m.end() && !m["orchestrationValues"].empty()) {
      orchestrationValues = make_shared<string>(boost::any_cast<string>(m["orchestrationValues"]));
    }
  }


  virtual ~CreateFoundationReferenceRequestComponentConfigs() = default;
};
class CreateFoundationReferenceRequestFoundationReferenceConfigs : public Darabonba::Model {
public:
  shared_ptr<string> componentReleaseName{};
  shared_ptr<string> configType{};
  shared_ptr<string> name{};
  shared_ptr<string> value{};

  CreateFoundationReferenceRequestFoundationReferenceConfigs() {}

  explicit CreateFoundationReferenceRequestFoundationReferenceConfigs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (componentReleaseName) {
      res["componentReleaseName"] = boost::any(*componentReleaseName);
    }
    if (configType) {
      res["configType"] = boost::any(*configType);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (value) {
      res["value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("componentReleaseName") != m.end() && !m["componentReleaseName"].empty()) {
      componentReleaseName = make_shared<string>(boost::any_cast<string>(m["componentReleaseName"]));
    }
    if (m.find("configType") != m.end() && !m["configType"].empty()) {
      configType = make_shared<string>(boost::any_cast<string>(m["configType"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("value") != m.end() && !m["value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["value"]));
    }
  }


  virtual ~CreateFoundationReferenceRequestFoundationReferenceConfigs() = default;
};
class CreateFoundationReferenceRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterConfig{};
  shared_ptr<vector<CreateFoundationReferenceRequestComponentConfigs>> componentConfigs{};
  shared_ptr<vector<CreateFoundationReferenceRequestFoundationReferenceConfigs>> foundationReferenceConfigs{};
  shared_ptr<string> foundationVersionUID{};
  shared_ptr<string> originFoundationReferenceUID{};

  CreateFoundationReferenceRequest() {}

  explicit CreateFoundationReferenceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterConfig) {
      res["clusterConfig"] = boost::any(*clusterConfig);
    }
    if (componentConfigs) {
      vector<boost::any> temp1;
      for(auto item1:*componentConfigs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["componentConfigs"] = boost::any(temp1);
    }
    if (foundationReferenceConfigs) {
      vector<boost::any> temp1;
      for(auto item1:*foundationReferenceConfigs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["foundationReferenceConfigs"] = boost::any(temp1);
    }
    if (foundationVersionUID) {
      res["foundationVersionUID"] = boost::any(*foundationVersionUID);
    }
    if (originFoundationReferenceUID) {
      res["originFoundationReferenceUID"] = boost::any(*originFoundationReferenceUID);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("clusterConfig") != m.end() && !m["clusterConfig"].empty()) {
      clusterConfig = make_shared<string>(boost::any_cast<string>(m["clusterConfig"]));
    }
    if (m.find("componentConfigs") != m.end() && !m["componentConfigs"].empty()) {
      if (typeid(vector<boost::any>) == m["componentConfigs"].type()) {
        vector<CreateFoundationReferenceRequestComponentConfigs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["componentConfigs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateFoundationReferenceRequestComponentConfigs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        componentConfigs = make_shared<vector<CreateFoundationReferenceRequestComponentConfigs>>(expect1);
      }
    }
    if (m.find("foundationReferenceConfigs") != m.end() && !m["foundationReferenceConfigs"].empty()) {
      if (typeid(vector<boost::any>) == m["foundationReferenceConfigs"].type()) {
        vector<CreateFoundationReferenceRequestFoundationReferenceConfigs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["foundationReferenceConfigs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateFoundationReferenceRequestFoundationReferenceConfigs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        foundationReferenceConfigs = make_shared<vector<CreateFoundationReferenceRequestFoundationReferenceConfigs>>(expect1);
      }
    }
    if (m.find("foundationVersionUID") != m.end() && !m["foundationVersionUID"].empty()) {
      foundationVersionUID = make_shared<string>(boost::any_cast<string>(m["foundationVersionUID"]));
    }
    if (m.find("originFoundationReferenceUID") != m.end() && !m["originFoundationReferenceUID"].empty()) {
      originFoundationReferenceUID = make_shared<string>(boost::any_cast<string>(m["originFoundationReferenceUID"]));
    }
  }


  virtual ~CreateFoundationReferenceRequest() = default;
};
class CreateFoundationReferenceResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> uid{};

  CreateFoundationReferenceResponseBodyData() {}

  explicit CreateFoundationReferenceResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (uid) {
      res["uid"] = boost::any(*uid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("uid") != m.end() && !m["uid"].empty()) {
      uid = make_shared<string>(boost::any_cast<string>(m["uid"]));
    }
  }


  virtual ~CreateFoundationReferenceResponseBodyData() = default;
};
class CreateFoundationReferenceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<CreateFoundationReferenceResponseBodyData> data{};
  shared_ptr<string> msg{};

  CreateFoundationReferenceResponseBody() {}

  explicit CreateFoundationReferenceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (msg) {
      res["msg"] = boost::any(*msg);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        CreateFoundationReferenceResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<CreateFoundationReferenceResponseBodyData>(model1);
      }
    }
    if (m.find("msg") != m.end() && !m["msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["msg"]));
    }
  }


  virtual ~CreateFoundationReferenceResponseBody() = default;
};
class CreateFoundationReferenceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateFoundationReferenceResponseBody> body{};

  CreateFoundationReferenceResponse() {}

  explicit CreateFoundationReferenceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateFoundationReferenceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateFoundationReferenceResponseBody>(model1);
      }
    }
  }


  virtual ~CreateFoundationReferenceResponse() = default;
};
class CreateProductHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> clientToken{};

  CreateProductHeaders() {}

  explicit CreateProductHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
  }


  virtual ~CreateProductHeaders() = default;
};
class CreateProductRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> categories{};
  shared_ptr<string> description{};
  shared_ptr<string> displayName{};
  shared_ptr<string> foundationVersionUID{};
  shared_ptr<string> productName{};
  shared_ptr<string> vendor{};
  shared_ptr<bool> withoutProductVersion{};

  CreateProductRequest() {}

  explicit CreateProductRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (categories) {
      res["categories"] = boost::any(*categories);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (displayName) {
      res["displayName"] = boost::any(*displayName);
    }
    if (foundationVersionUID) {
      res["foundationVersionUID"] = boost::any(*foundationVersionUID);
    }
    if (productName) {
      res["productName"] = boost::any(*productName);
    }
    if (vendor) {
      res["vendor"] = boost::any(*vendor);
    }
    if (withoutProductVersion) {
      res["withoutProductVersion"] = boost::any(*withoutProductVersion);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("categories") != m.end() && !m["categories"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["categories"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["categories"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      categories = make_shared<vector<string>>(toVec1);
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("displayName") != m.end() && !m["displayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["displayName"]));
    }
    if (m.find("foundationVersionUID") != m.end() && !m["foundationVersionUID"].empty()) {
      foundationVersionUID = make_shared<string>(boost::any_cast<string>(m["foundationVersionUID"]));
    }
    if (m.find("productName") != m.end() && !m["productName"].empty()) {
      productName = make_shared<string>(boost::any_cast<string>(m["productName"]));
    }
    if (m.find("vendor") != m.end() && !m["vendor"].empty()) {
      vendor = make_shared<string>(boost::any_cast<string>(m["vendor"]));
    }
    if (m.find("withoutProductVersion") != m.end() && !m["withoutProductVersion"].empty()) {
      withoutProductVersion = make_shared<bool>(boost::any_cast<bool>(m["withoutProductVersion"]));
    }
  }


  virtual ~CreateProductRequest() = default;
};
class CreateProductResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> uid{};

  CreateProductResponseBodyData() {}

  explicit CreateProductResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (uid) {
      res["uid"] = boost::any(*uid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("uid") != m.end() && !m["uid"].empty()) {
      uid = make_shared<string>(boost::any_cast<string>(m["uid"]));
    }
  }


  virtual ~CreateProductResponseBodyData() = default;
};
class CreateProductResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<CreateProductResponseBodyData> data{};
  shared_ptr<string> msg{};

  CreateProductResponseBody() {}

  explicit CreateProductResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (msg) {
      res["msg"] = boost::any(*msg);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        CreateProductResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<CreateProductResponseBodyData>(model1);
      }
    }
    if (m.find("msg") != m.end() && !m["msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["msg"]));
    }
  }


  virtual ~CreateProductResponseBody() = default;
};
class CreateProductResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateProductResponseBody> body{};

  CreateProductResponse() {}

  explicit CreateProductResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateProductResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateProductResponseBody>(model1);
      }
    }
  }


  virtual ~CreateProductResponse() = default;
};
class CreateProductDeploymentRequest : public Darabonba::Model {
public:
  shared_ptr<string> environmentUID{};
  shared_ptr<string> namespace_{};
  shared_ptr<string> oldProductVersionUID{};
  shared_ptr<string> packageConfig{};
  shared_ptr<string> packageUID{};
  shared_ptr<string> productVersionUID{};
  shared_ptr<long> timeout{};

  CreateProductDeploymentRequest() {}

  explicit CreateProductDeploymentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (environmentUID) {
      res["environmentUID"] = boost::any(*environmentUID);
    }
    if (namespace_) {
      res["namespace"] = boost::any(*namespace_);
    }
    if (oldProductVersionUID) {
      res["oldProductVersionUID"] = boost::any(*oldProductVersionUID);
    }
    if (packageConfig) {
      res["packageConfig"] = boost::any(*packageConfig);
    }
    if (packageUID) {
      res["packageUID"] = boost::any(*packageUID);
    }
    if (productVersionUID) {
      res["productVersionUID"] = boost::any(*productVersionUID);
    }
    if (timeout) {
      res["timeout"] = boost::any(*timeout);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("environmentUID") != m.end() && !m["environmentUID"].empty()) {
      environmentUID = make_shared<string>(boost::any_cast<string>(m["environmentUID"]));
    }
    if (m.find("namespace") != m.end() && !m["namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["namespace"]));
    }
    if (m.find("oldProductVersionUID") != m.end() && !m["oldProductVersionUID"].empty()) {
      oldProductVersionUID = make_shared<string>(boost::any_cast<string>(m["oldProductVersionUID"]));
    }
    if (m.find("packageConfig") != m.end() && !m["packageConfig"].empty()) {
      packageConfig = make_shared<string>(boost::any_cast<string>(m["packageConfig"]));
    }
    if (m.find("packageUID") != m.end() && !m["packageUID"].empty()) {
      packageUID = make_shared<string>(boost::any_cast<string>(m["packageUID"]));
    }
    if (m.find("productVersionUID") != m.end() && !m["productVersionUID"].empty()) {
      productVersionUID = make_shared<string>(boost::any_cast<string>(m["productVersionUID"]));
    }
    if (m.find("timeout") != m.end() && !m["timeout"].empty()) {
      timeout = make_shared<long>(boost::any_cast<long>(m["timeout"]));
    }
  }


  virtual ~CreateProductDeploymentRequest() = default;
};
class CreateProductDeploymentResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> uid{};

  CreateProductDeploymentResponseBodyData() {}

  explicit CreateProductDeploymentResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (uid) {
      res["uid"] = boost::any(*uid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("uid") != m.end() && !m["uid"].empty()) {
      uid = make_shared<string>(boost::any_cast<string>(m["uid"]));
    }
  }


  virtual ~CreateProductDeploymentResponseBodyData() = default;
};
class CreateProductDeploymentResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<CreateProductDeploymentResponseBodyData> data{};
  shared_ptr<string> msg{};

  CreateProductDeploymentResponseBody() {}

  explicit CreateProductDeploymentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (msg) {
      res["msg"] = boost::any(*msg);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        CreateProductDeploymentResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<CreateProductDeploymentResponseBodyData>(model1);
      }
    }
    if (m.find("msg") != m.end() && !m["msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["msg"]));
    }
  }


  virtual ~CreateProductDeploymentResponseBody() = default;
};
class CreateProductDeploymentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateProductDeploymentResponseBody> body{};

  CreateProductDeploymentResponse() {}

  explicit CreateProductDeploymentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateProductDeploymentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateProductDeploymentResponseBody>(model1);
      }
    }
  }


  virtual ~CreateProductDeploymentResponse() = default;
};
class CreateProductVersionRequest : public Darabonba::Model {
public:
  shared_ptr<string> baseProductVersionUID{};
  shared_ptr<string> version{};
  shared_ptr<bool> withoutBaseProductVersion{};

  CreateProductVersionRequest() {}

  explicit CreateProductVersionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (baseProductVersionUID) {
      res["baseProductVersionUID"] = boost::any(*baseProductVersionUID);
    }
    if (version) {
      res["version"] = boost::any(*version);
    }
    if (withoutBaseProductVersion) {
      res["withoutBaseProductVersion"] = boost::any(*withoutBaseProductVersion);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("baseProductVersionUID") != m.end() && !m["baseProductVersionUID"].empty()) {
      baseProductVersionUID = make_shared<string>(boost::any_cast<string>(m["baseProductVersionUID"]));
    }
    if (m.find("version") != m.end() && !m["version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["version"]));
    }
    if (m.find("withoutBaseProductVersion") != m.end() && !m["withoutBaseProductVersion"].empty()) {
      withoutBaseProductVersion = make_shared<bool>(boost::any_cast<bool>(m["withoutBaseProductVersion"]));
    }
  }


  virtual ~CreateProductVersionRequest() = default;
};
class CreateProductVersionResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> uid{};

  CreateProductVersionResponseBodyData() {}

  explicit CreateProductVersionResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (uid) {
      res["uid"] = boost::any(*uid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("uid") != m.end() && !m["uid"].empty()) {
      uid = make_shared<string>(boost::any_cast<string>(m["uid"]));
    }
  }


  virtual ~CreateProductVersionResponseBodyData() = default;
};
class CreateProductVersionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<CreateProductVersionResponseBodyData> data{};
  shared_ptr<string> msg{};

  CreateProductVersionResponseBody() {}

  explicit CreateProductVersionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (msg) {
      res["msg"] = boost::any(*msg);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        CreateProductVersionResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<CreateProductVersionResponseBodyData>(model1);
      }
    }
    if (m.find("msg") != m.end() && !m["msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["msg"]));
    }
  }


  virtual ~CreateProductVersionResponseBody() = default;
};
class CreateProductVersionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateProductVersionResponseBody> body{};

  CreateProductVersionResponse() {}

  explicit CreateProductVersionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateProductVersionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateProductVersionResponseBody>(model1);
      }
    }
  }


  virtual ~CreateProductVersionResponse() = default;
};
class CreateProductVersionPackageHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> clientToken{};

  CreateProductVersionPackageHeaders() {}

  explicit CreateProductVersionPackageHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
  }


  virtual ~CreateProductVersionPackageHeaders() = default;
};
class CreateProductVersionPackageRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterEngineType{};
  shared_ptr<string> foundationReferenceUID{};
  shared_ptr<string> oldFoundationReferenceUID{};
  shared_ptr<string> oldProductVersionUID{};
  shared_ptr<string> packageContentType{};
  shared_ptr<string> packageToolType{};
  shared_ptr<string> packageType{};
  shared_ptr<string> platform{};

  CreateProductVersionPackageRequest() {}

  explicit CreateProductVersionPackageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterEngineType) {
      res["clusterEngineType"] = boost::any(*clusterEngineType);
    }
    if (foundationReferenceUID) {
      res["foundationReferenceUID"] = boost::any(*foundationReferenceUID);
    }
    if (oldFoundationReferenceUID) {
      res["oldFoundationReferenceUID"] = boost::any(*oldFoundationReferenceUID);
    }
    if (oldProductVersionUID) {
      res["oldProductVersionUID"] = boost::any(*oldProductVersionUID);
    }
    if (packageContentType) {
      res["packageContentType"] = boost::any(*packageContentType);
    }
    if (packageToolType) {
      res["packageToolType"] = boost::any(*packageToolType);
    }
    if (packageType) {
      res["packageType"] = boost::any(*packageType);
    }
    if (platform) {
      res["platform"] = boost::any(*platform);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("clusterEngineType") != m.end() && !m["clusterEngineType"].empty()) {
      clusterEngineType = make_shared<string>(boost::any_cast<string>(m["clusterEngineType"]));
    }
    if (m.find("foundationReferenceUID") != m.end() && !m["foundationReferenceUID"].empty()) {
      foundationReferenceUID = make_shared<string>(boost::any_cast<string>(m["foundationReferenceUID"]));
    }
    if (m.find("oldFoundationReferenceUID") != m.end() && !m["oldFoundationReferenceUID"].empty()) {
      oldFoundationReferenceUID = make_shared<string>(boost::any_cast<string>(m["oldFoundationReferenceUID"]));
    }
    if (m.find("oldProductVersionUID") != m.end() && !m["oldProductVersionUID"].empty()) {
      oldProductVersionUID = make_shared<string>(boost::any_cast<string>(m["oldProductVersionUID"]));
    }
    if (m.find("packageContentType") != m.end() && !m["packageContentType"].empty()) {
      packageContentType = make_shared<string>(boost::any_cast<string>(m["packageContentType"]));
    }
    if (m.find("packageToolType") != m.end() && !m["packageToolType"].empty()) {
      packageToolType = make_shared<string>(boost::any_cast<string>(m["packageToolType"]));
    }
    if (m.find("packageType") != m.end() && !m["packageType"].empty()) {
      packageType = make_shared<string>(boost::any_cast<string>(m["packageType"]));
    }
    if (m.find("platform") != m.end() && !m["platform"].empty()) {
      platform = make_shared<string>(boost::any_cast<string>(m["platform"]));
    }
  }


  virtual ~CreateProductVersionPackageRequest() = default;
};
class CreateProductVersionPackageResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> uid{};

  CreateProductVersionPackageResponseBodyData() {}

  explicit CreateProductVersionPackageResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (uid) {
      res["uid"] = boost::any(*uid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("uid") != m.end() && !m["uid"].empty()) {
      uid = make_shared<string>(boost::any_cast<string>(m["uid"]));
    }
  }


  virtual ~CreateProductVersionPackageResponseBodyData() = default;
};
class CreateProductVersionPackageResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<CreateProductVersionPackageResponseBodyData> data{};
  shared_ptr<string> msg{};

  CreateProductVersionPackageResponseBody() {}

  explicit CreateProductVersionPackageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (msg) {
      res["msg"] = boost::any(*msg);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        CreateProductVersionPackageResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<CreateProductVersionPackageResponseBodyData>(model1);
      }
    }
    if (m.find("msg") != m.end() && !m["msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["msg"]));
    }
  }


  virtual ~CreateProductVersionPackageResponseBody() = default;
};
class CreateProductVersionPackageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateProductVersionPackageResponseBody> body{};

  CreateProductVersionPackageResponse() {}

  explicit CreateProductVersionPackageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateProductVersionPackageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateProductVersionPackageResponseBody>(model1);
      }
    }
  }


  virtual ~CreateProductVersionPackageResponse() = default;
};
class DeleteEnvironmentResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> msg{};

  DeleteEnvironmentResponseBody() {}

  explicit DeleteEnvironmentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (msg) {
      res["msg"] = boost::any(*msg);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("msg") != m.end() && !m["msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["msg"]));
    }
  }


  virtual ~DeleteEnvironmentResponseBody() = default;
};
class DeleteEnvironmentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteEnvironmentResponseBody> body{};

  DeleteEnvironmentResponse() {}

  explicit DeleteEnvironmentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteEnvironmentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteEnvironmentResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteEnvironmentResponse() = default;
};
class DeleteEnvironmentLicenseResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> msg{};
  shared_ptr<string> requestId{};

  DeleteEnvironmentLicenseResponseBody() {}

  explicit DeleteEnvironmentLicenseResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (msg) {
      res["msg"] = boost::any(*msg);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("msg") != m.end() && !m["msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["msg"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~DeleteEnvironmentLicenseResponseBody() = default;
};
class DeleteEnvironmentLicenseResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteEnvironmentLicenseResponseBody> body{};

  DeleteEnvironmentLicenseResponse() {}

  explicit DeleteEnvironmentLicenseResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteEnvironmentLicenseResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteEnvironmentLicenseResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteEnvironmentLicenseResponse() = default;
};
class DeleteEnvironmentNodeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> msg{};

  DeleteEnvironmentNodeResponseBody() {}

  explicit DeleteEnvironmentNodeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (msg) {
      res["msg"] = boost::any(*msg);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("msg") != m.end() && !m["msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["msg"]));
    }
  }


  virtual ~DeleteEnvironmentNodeResponseBody() = default;
};
class DeleteEnvironmentNodeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteEnvironmentNodeResponseBody> body{};

  DeleteEnvironmentNodeResponse() {}

  explicit DeleteEnvironmentNodeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteEnvironmentNodeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteEnvironmentNodeResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteEnvironmentNodeResponse() = default;
};
class DeleteEnvironmentProductVersionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> msg{};

  DeleteEnvironmentProductVersionResponseBody() {}

  explicit DeleteEnvironmentProductVersionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (msg) {
      res["msg"] = boost::any(*msg);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("msg") != m.end() && !m["msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["msg"]));
    }
  }


  virtual ~DeleteEnvironmentProductVersionResponseBody() = default;
};
class DeleteEnvironmentProductVersionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteEnvironmentProductVersionResponseBody> body{};

  DeleteEnvironmentProductVersionResponse() {}

  explicit DeleteEnvironmentProductVersionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteEnvironmentProductVersionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteEnvironmentProductVersionResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteEnvironmentProductVersionResponse() = default;
};
class DeleteProductResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> msg{};

  DeleteProductResponseBody() {}

  explicit DeleteProductResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (msg) {
      res["msg"] = boost::any(*msg);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("msg") != m.end() && !m["msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["msg"]));
    }
  }


  virtual ~DeleteProductResponseBody() = default;
};
class DeleteProductResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteProductResponseBody> body{};

  DeleteProductResponse() {}

  explicit DeleteProductResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteProductResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteProductResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteProductResponse() = default;
};
class DeleteProductComponentVersionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> msg{};

  DeleteProductComponentVersionResponseBody() {}

  explicit DeleteProductComponentVersionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (msg) {
      res["msg"] = boost::any(*msg);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("msg") != m.end() && !m["msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["msg"]));
    }
  }


  virtual ~DeleteProductComponentVersionResponseBody() = default;
};
class DeleteProductComponentVersionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteProductComponentVersionResponseBody> body{};

  DeleteProductComponentVersionResponse() {}

  explicit DeleteProductComponentVersionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteProductComponentVersionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteProductComponentVersionResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteProductComponentVersionResponse() = default;
};
class DeleteProductInstanceConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> environmentUID{};
  shared_ptr<string> productVersionUID{};

  DeleteProductInstanceConfigRequest() {}

  explicit DeleteProductInstanceConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (environmentUID) {
      res["environmentUID"] = boost::any(*environmentUID);
    }
    if (productVersionUID) {
      res["productVersionUID"] = boost::any(*productVersionUID);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("environmentUID") != m.end() && !m["environmentUID"].empty()) {
      environmentUID = make_shared<string>(boost::any_cast<string>(m["environmentUID"]));
    }
    if (m.find("productVersionUID") != m.end() && !m["productVersionUID"].empty()) {
      productVersionUID = make_shared<string>(boost::any_cast<string>(m["productVersionUID"]));
    }
  }


  virtual ~DeleteProductInstanceConfigRequest() = default;
};
class DeleteProductInstanceConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> msg{};

  DeleteProductInstanceConfigResponseBody() {}

  explicit DeleteProductInstanceConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (msg) {
      res["msg"] = boost::any(*msg);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("msg") != m.end() && !m["msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["msg"]));
    }
  }


  virtual ~DeleteProductInstanceConfigResponseBody() = default;
};
class DeleteProductInstanceConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteProductInstanceConfigResponseBody> body{};

  DeleteProductInstanceConfigResponse() {}

  explicit DeleteProductInstanceConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteProductInstanceConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteProductInstanceConfigResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteProductInstanceConfigResponse() = default;
};
class DeleteProductVersionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> msg{};
  shared_ptr<string> requestId{};

  DeleteProductVersionResponseBody() {}

  explicit DeleteProductVersionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (msg) {
      res["msg"] = boost::any(*msg);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("msg") != m.end() && !m["msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["msg"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~DeleteProductVersionResponseBody() = default;
};
class DeleteProductVersionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteProductVersionResponseBody> body{};

  DeleteProductVersionResponse() {}

  explicit DeleteProductVersionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteProductVersionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteProductVersionResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteProductVersionResponse() = default;
};
class DeleteProductVersionConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> msg{};
  shared_ptr<string> requestId{};

  DeleteProductVersionConfigResponseBody() {}

  explicit DeleteProductVersionConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (msg) {
      res["msg"] = boost::any(*msg);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("msg") != m.end() && !m["msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["msg"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~DeleteProductVersionConfigResponseBody() = default;
};
class DeleteProductVersionConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteProductVersionConfigResponseBody> body{};

  DeleteProductVersionConfigResponse() {}

  explicit DeleteProductVersionConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteProductVersionConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteProductVersionConfigResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteProductVersionConfigResponse() = default;
};
class GenerateProductInstanceDeploymentConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> environmentUID{};
  shared_ptr<string> packageContentType{};
  shared_ptr<string> packageUID{};
  shared_ptr<string> productVersionUID{};
  shared_ptr<vector<string>> productVersionUIDList{};

  GenerateProductInstanceDeploymentConfigRequest() {}

  explicit GenerateProductInstanceDeploymentConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (environmentUID) {
      res["environmentUID"] = boost::any(*environmentUID);
    }
    if (packageContentType) {
      res["packageContentType"] = boost::any(*packageContentType);
    }
    if (packageUID) {
      res["packageUID"] = boost::any(*packageUID);
    }
    if (productVersionUID) {
      res["productVersionUID"] = boost::any(*productVersionUID);
    }
    if (productVersionUIDList) {
      res["productVersionUIDList"] = boost::any(*productVersionUIDList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("environmentUID") != m.end() && !m["environmentUID"].empty()) {
      environmentUID = make_shared<string>(boost::any_cast<string>(m["environmentUID"]));
    }
    if (m.find("packageContentType") != m.end() && !m["packageContentType"].empty()) {
      packageContentType = make_shared<string>(boost::any_cast<string>(m["packageContentType"]));
    }
    if (m.find("packageUID") != m.end() && !m["packageUID"].empty()) {
      packageUID = make_shared<string>(boost::any_cast<string>(m["packageUID"]));
    }
    if (m.find("productVersionUID") != m.end() && !m["productVersionUID"].empty()) {
      productVersionUID = make_shared<string>(boost::any_cast<string>(m["productVersionUID"]));
    }
    if (m.find("productVersionUIDList") != m.end() && !m["productVersionUIDList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["productVersionUIDList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["productVersionUIDList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      productVersionUIDList = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~GenerateProductInstanceDeploymentConfigRequest() = default;
};
class GenerateProductInstanceDeploymentConfigResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> packageConfig{};

  GenerateProductInstanceDeploymentConfigResponseBodyData() {}

  explicit GenerateProductInstanceDeploymentConfigResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (packageConfig) {
      res["packageConfig"] = boost::any(*packageConfig);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("packageConfig") != m.end() && !m["packageConfig"].empty()) {
      packageConfig = make_shared<string>(boost::any_cast<string>(m["packageConfig"]));
    }
  }


  virtual ~GenerateProductInstanceDeploymentConfigResponseBodyData() = default;
};
class GenerateProductInstanceDeploymentConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GenerateProductInstanceDeploymentConfigResponseBodyData> data{};
  shared_ptr<string> msg{};

  GenerateProductInstanceDeploymentConfigResponseBody() {}

  explicit GenerateProductInstanceDeploymentConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (msg) {
      res["msg"] = boost::any(*msg);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        GenerateProductInstanceDeploymentConfigResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<GenerateProductInstanceDeploymentConfigResponseBodyData>(model1);
      }
    }
    if (m.find("msg") != m.end() && !m["msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["msg"]));
    }
  }


  virtual ~GenerateProductInstanceDeploymentConfigResponseBody() = default;
};
class GenerateProductInstanceDeploymentConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GenerateProductInstanceDeploymentConfigResponseBody> body{};

  GenerateProductInstanceDeploymentConfigResponse() {}

  explicit GenerateProductInstanceDeploymentConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GenerateProductInstanceDeploymentConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GenerateProductInstanceDeploymentConfigResponseBody>(model1);
      }
    }
  }


  virtual ~GenerateProductInstanceDeploymentConfigResponse() = default;
};
class GetComponentResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> category{};
  shared_ptr<string> description{};
  shared_ptr<string> documents{};
  shared_ptr<string> name{};
  shared_ptr<bool> public_{};
  shared_ptr<bool> singleton{};
  shared_ptr<string> source{};
  shared_ptr<string> uid{};

  GetComponentResponseBodyData() {}

  explicit GetComponentResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (category) {
      res["category"] = boost::any(*category);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (documents) {
      res["documents"] = boost::any(*documents);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (public_) {
      res["public"] = boost::any(*public_);
    }
    if (singleton) {
      res["singleton"] = boost::any(*singleton);
    }
    if (source) {
      res["source"] = boost::any(*source);
    }
    if (uid) {
      res["uid"] = boost::any(*uid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("category") != m.end() && !m["category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["category"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("documents") != m.end() && !m["documents"].empty()) {
      documents = make_shared<string>(boost::any_cast<string>(m["documents"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("public") != m.end() && !m["public"].empty()) {
      public_ = make_shared<bool>(boost::any_cast<bool>(m["public"]));
    }
    if (m.find("singleton") != m.end() && !m["singleton"].empty()) {
      singleton = make_shared<bool>(boost::any_cast<bool>(m["singleton"]));
    }
    if (m.find("source") != m.end() && !m["source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["source"]));
    }
    if (m.find("uid") != m.end() && !m["uid"].empty()) {
      uid = make_shared<string>(boost::any_cast<string>(m["uid"]));
    }
  }


  virtual ~GetComponentResponseBodyData() = default;
};
class GetComponentResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetComponentResponseBodyData> data{};
  shared_ptr<string> msg{};

  GetComponentResponseBody() {}

  explicit GetComponentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (msg) {
      res["msg"] = boost::any(*msg);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        GetComponentResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<GetComponentResponseBodyData>(model1);
      }
    }
    if (m.find("msg") != m.end() && !m["msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["msg"]));
    }
  }


  virtual ~GetComponentResponseBody() = default;
};
class GetComponentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetComponentResponseBody> body{};

  GetComponentResponse() {}

  explicit GetComponentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetComponentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetComponentResponseBody>(model1);
      }
    }
  }


  virtual ~GetComponentResponse() = default;
};
class GetComponentVersionRequest : public Darabonba::Model {
public:
  shared_ptr<bool> withoutChartContent{};

  GetComponentVersionRequest() {}

  explicit GetComponentVersionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (withoutChartContent) {
      res["withoutChartContent"] = boost::any(*withoutChartContent);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("withoutChartContent") != m.end() && !m["withoutChartContent"].empty()) {
      withoutChartContent = make_shared<bool>(boost::any_cast<bool>(m["withoutChartContent"]));
    }
  }


  virtual ~GetComponentVersionRequest() = default;
};
class GetComponentVersionResponseBodyDataResources : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> limits{};
  shared_ptr<map<string, boost::any>> requests{};

  GetComponentVersionResponseBodyDataResources() {}

  explicit GetComponentVersionResponseBodyDataResources(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (limits) {
      res["limits"] = boost::any(*limits);
    }
    if (requests) {
      res["requests"] = boost::any(*requests);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("limits") != m.end() && !m["limits"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["limits"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      limits = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("requests") != m.end() && !m["requests"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["requests"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      requests = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~GetComponentVersionResponseBodyDataResources() = default;
};
class GetComponentVersionResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> componentName{};
  shared_ptr<string> componentUID{};
  shared_ptr<string> description{};
  shared_ptr<string> documents{};
  shared_ptr<string> orchestrationValues{};
  shared_ptr<string> packageURL{};
  shared_ptr<bool> parentComponent{};
  shared_ptr<string> productComponentVersionUID{};
  shared_ptr<string> provider{};
  shared_ptr<string> readme{};
  shared_ptr<GetComponentVersionResponseBodyDataResources> resources{};
  shared_ptr<string> uid{};
  shared_ptr<string> version{};

  GetComponentVersionResponseBodyData() {}

  explicit GetComponentVersionResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (componentName) {
      res["componentName"] = boost::any(*componentName);
    }
    if (componentUID) {
      res["componentUID"] = boost::any(*componentUID);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (documents) {
      res["documents"] = boost::any(*documents);
    }
    if (orchestrationValues) {
      res["orchestrationValues"] = boost::any(*orchestrationValues);
    }
    if (packageURL) {
      res["packageURL"] = boost::any(*packageURL);
    }
    if (parentComponent) {
      res["parentComponent"] = boost::any(*parentComponent);
    }
    if (productComponentVersionUID) {
      res["productComponentVersionUID"] = boost::any(*productComponentVersionUID);
    }
    if (provider) {
      res["provider"] = boost::any(*provider);
    }
    if (readme) {
      res["readme"] = boost::any(*readme);
    }
    if (resources) {
      res["resources"] = resources ? boost::any(resources->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (uid) {
      res["uid"] = boost::any(*uid);
    }
    if (version) {
      res["version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("componentName") != m.end() && !m["componentName"].empty()) {
      componentName = make_shared<string>(boost::any_cast<string>(m["componentName"]));
    }
    if (m.find("componentUID") != m.end() && !m["componentUID"].empty()) {
      componentUID = make_shared<string>(boost::any_cast<string>(m["componentUID"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("documents") != m.end() && !m["documents"].empty()) {
      documents = make_shared<string>(boost::any_cast<string>(m["documents"]));
    }
    if (m.find("orchestrationValues") != m.end() && !m["orchestrationValues"].empty()) {
      orchestrationValues = make_shared<string>(boost::any_cast<string>(m["orchestrationValues"]));
    }
    if (m.find("packageURL") != m.end() && !m["packageURL"].empty()) {
      packageURL = make_shared<string>(boost::any_cast<string>(m["packageURL"]));
    }
    if (m.find("parentComponent") != m.end() && !m["parentComponent"].empty()) {
      parentComponent = make_shared<bool>(boost::any_cast<bool>(m["parentComponent"]));
    }
    if (m.find("productComponentVersionUID") != m.end() && !m["productComponentVersionUID"].empty()) {
      productComponentVersionUID = make_shared<string>(boost::any_cast<string>(m["productComponentVersionUID"]));
    }
    if (m.find("provider") != m.end() && !m["provider"].empty()) {
      provider = make_shared<string>(boost::any_cast<string>(m["provider"]));
    }
    if (m.find("readme") != m.end() && !m["readme"].empty()) {
      readme = make_shared<string>(boost::any_cast<string>(m["readme"]));
    }
    if (m.find("resources") != m.end() && !m["resources"].empty()) {
      if (typeid(map<string, boost::any>) == m["resources"].type()) {
        GetComponentVersionResponseBodyDataResources model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["resources"]));
        resources = make_shared<GetComponentVersionResponseBodyDataResources>(model1);
      }
    }
    if (m.find("uid") != m.end() && !m["uid"].empty()) {
      uid = make_shared<string>(boost::any_cast<string>(m["uid"]));
    }
    if (m.find("version") != m.end() && !m["version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["version"]));
    }
  }


  virtual ~GetComponentVersionResponseBodyData() = default;
};
class GetComponentVersionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<GetComponentVersionResponseBodyData>> data{};
  shared_ptr<string> msg{};

  GetComponentVersionResponseBody() {}

  explicit GetComponentVersionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["data"] = boost::any(temp1);
    }
    if (msg) {
      res["msg"] = boost::any(*msg);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(vector<boost::any>) == m["data"].type()) {
        vector<GetComponentVersionResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetComponentVersionResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<GetComponentVersionResponseBodyData>>(expect1);
      }
    }
    if (m.find("msg") != m.end() && !m["msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["msg"]));
    }
  }


  virtual ~GetComponentVersionResponseBody() = default;
};
class GetComponentVersionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetComponentVersionResponseBody> body{};

  GetComponentVersionResponse() {}

  explicit GetComponentVersionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetComponentVersionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetComponentVersionResponseBody>(model1);
      }
    }
  }


  virtual ~GetComponentVersionResponse() = default;
};
class GetDeliverableResponseBodyDataFoundation : public Darabonba::Model {
public:
  shared_ptr<string> clusterConfig{};
  shared_ptr<string> foundationReferenceUID{};
  shared_ptr<string> foundationVersion{};
  shared_ptr<string> foundationVersionUID{};

  GetDeliverableResponseBodyDataFoundation() {}

  explicit GetDeliverableResponseBodyDataFoundation(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterConfig) {
      res["clusterConfig"] = boost::any(*clusterConfig);
    }
    if (foundationReferenceUID) {
      res["foundationReferenceUID"] = boost::any(*foundationReferenceUID);
    }
    if (foundationVersion) {
      res["foundationVersion"] = boost::any(*foundationVersion);
    }
    if (foundationVersionUID) {
      res["foundationVersionUID"] = boost::any(*foundationVersionUID);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("clusterConfig") != m.end() && !m["clusterConfig"].empty()) {
      clusterConfig = make_shared<string>(boost::any_cast<string>(m["clusterConfig"]));
    }
    if (m.find("foundationReferenceUID") != m.end() && !m["foundationReferenceUID"].empty()) {
      foundationReferenceUID = make_shared<string>(boost::any_cast<string>(m["foundationReferenceUID"]));
    }
    if (m.find("foundationVersion") != m.end() && !m["foundationVersion"].empty()) {
      foundationVersion = make_shared<string>(boost::any_cast<string>(m["foundationVersion"]));
    }
    if (m.find("foundationVersionUID") != m.end() && !m["foundationVersionUID"].empty()) {
      foundationVersionUID = make_shared<string>(boost::any_cast<string>(m["foundationVersionUID"]));
    }
  }


  virtual ~GetDeliverableResponseBodyDataFoundation() = default;
};
class GetDeliverableResponseBodyDataProducts : public Darabonba::Model {
public:
  shared_ptr<string> namespace_{};
  shared_ptr<string> productName{};
  shared_ptr<string> productType{};
  shared_ptr<string> productUID{};
  shared_ptr<string> productVersion{};
  shared_ptr<string> productVersionSpecName{};
  shared_ptr<string> productVersionSpecUID{};
  shared_ptr<string> productVersionUID{};

  GetDeliverableResponseBodyDataProducts() {}

  explicit GetDeliverableResponseBodyDataProducts(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (namespace_) {
      res["namespace"] = boost::any(*namespace_);
    }
    if (productName) {
      res["productName"] = boost::any(*productName);
    }
    if (productType) {
      res["productType"] = boost::any(*productType);
    }
    if (productUID) {
      res["productUID"] = boost::any(*productUID);
    }
    if (productVersion) {
      res["productVersion"] = boost::any(*productVersion);
    }
    if (productVersionSpecName) {
      res["productVersionSpecName"] = boost::any(*productVersionSpecName);
    }
    if (productVersionSpecUID) {
      res["productVersionSpecUID"] = boost::any(*productVersionSpecUID);
    }
    if (productVersionUID) {
      res["productVersionUID"] = boost::any(*productVersionUID);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("namespace") != m.end() && !m["namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["namespace"]));
    }
    if (m.find("productName") != m.end() && !m["productName"].empty()) {
      productName = make_shared<string>(boost::any_cast<string>(m["productName"]));
    }
    if (m.find("productType") != m.end() && !m["productType"].empty()) {
      productType = make_shared<string>(boost::any_cast<string>(m["productType"]));
    }
    if (m.find("productUID") != m.end() && !m["productUID"].empty()) {
      productUID = make_shared<string>(boost::any_cast<string>(m["productUID"]));
    }
    if (m.find("productVersion") != m.end() && !m["productVersion"].empty()) {
      productVersion = make_shared<string>(boost::any_cast<string>(m["productVersion"]));
    }
    if (m.find("productVersionSpecName") != m.end() && !m["productVersionSpecName"].empty()) {
      productVersionSpecName = make_shared<string>(boost::any_cast<string>(m["productVersionSpecName"]));
    }
    if (m.find("productVersionSpecUID") != m.end() && !m["productVersionSpecUID"].empty()) {
      productVersionSpecUID = make_shared<string>(boost::any_cast<string>(m["productVersionSpecUID"]));
    }
    if (m.find("productVersionUID") != m.end() && !m["productVersionUID"].empty()) {
      productVersionUID = make_shared<string>(boost::any_cast<string>(m["productVersionUID"]));
    }
  }


  virtual ~GetDeliverableResponseBodyDataProducts() = default;
};
class GetDeliverableResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<GetDeliverableResponseBodyDataFoundation> foundation{};
  shared_ptr<vector<GetDeliverableResponseBodyDataProducts>> products{};
  shared_ptr<string> uid{};

  GetDeliverableResponseBodyData() {}

  explicit GetDeliverableResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (foundation) {
      res["foundation"] = foundation ? boost::any(foundation->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (products) {
      vector<boost::any> temp1;
      for(auto item1:*products){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["products"] = boost::any(temp1);
    }
    if (uid) {
      res["uid"] = boost::any(*uid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("foundation") != m.end() && !m["foundation"].empty()) {
      if (typeid(map<string, boost::any>) == m["foundation"].type()) {
        GetDeliverableResponseBodyDataFoundation model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["foundation"]));
        foundation = make_shared<GetDeliverableResponseBodyDataFoundation>(model1);
      }
    }
    if (m.find("products") != m.end() && !m["products"].empty()) {
      if (typeid(vector<boost::any>) == m["products"].type()) {
        vector<GetDeliverableResponseBodyDataProducts> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["products"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetDeliverableResponseBodyDataProducts model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        products = make_shared<vector<GetDeliverableResponseBodyDataProducts>>(expect1);
      }
    }
    if (m.find("uid") != m.end() && !m["uid"].empty()) {
      uid = make_shared<string>(boost::any_cast<string>(m["uid"]));
    }
  }


  virtual ~GetDeliverableResponseBodyData() = default;
};
class GetDeliverableResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetDeliverableResponseBodyData> data{};
  shared_ptr<string> msg{};

  GetDeliverableResponseBody() {}

  explicit GetDeliverableResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (msg) {
      res["msg"] = boost::any(*msg);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        GetDeliverableResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<GetDeliverableResponseBodyData>(model1);
      }
    }
    if (m.find("msg") != m.end() && !m["msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["msg"]));
    }
  }


  virtual ~GetDeliverableResponseBody() = default;
};
class GetDeliverableResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetDeliverableResponseBody> body{};

  GetDeliverableResponse() {}

  explicit GetDeliverableResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetDeliverableResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetDeliverableResponseBody>(model1);
      }
    }
  }


  virtual ~GetDeliverableResponse() = default;
};
class GetDeliveryPackageResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> deliverableUID{};
  shared_ptr<string> originDeliverableUID{};
  shared_ptr<string> packageContentType{};
  shared_ptr<string> packageSize{};
  shared_ptr<string> packageStatus{};
  shared_ptr<string> packageType{};
  shared_ptr<string> packageUID{};
  shared_ptr<string> packageURL{};
  shared_ptr<string> platform{};

  GetDeliveryPackageResponseBodyData() {}

  explicit GetDeliveryPackageResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deliverableUID) {
      res["deliverableUID"] = boost::any(*deliverableUID);
    }
    if (originDeliverableUID) {
      res["originDeliverableUID"] = boost::any(*originDeliverableUID);
    }
    if (packageContentType) {
      res["packageContentType"] = boost::any(*packageContentType);
    }
    if (packageSize) {
      res["packageSize"] = boost::any(*packageSize);
    }
    if (packageStatus) {
      res["packageStatus"] = boost::any(*packageStatus);
    }
    if (packageType) {
      res["packageType"] = boost::any(*packageType);
    }
    if (packageUID) {
      res["packageUID"] = boost::any(*packageUID);
    }
    if (packageURL) {
      res["packageURL"] = boost::any(*packageURL);
    }
    if (platform) {
      res["platform"] = boost::any(*platform);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("deliverableUID") != m.end() && !m["deliverableUID"].empty()) {
      deliverableUID = make_shared<string>(boost::any_cast<string>(m["deliverableUID"]));
    }
    if (m.find("originDeliverableUID") != m.end() && !m["originDeliverableUID"].empty()) {
      originDeliverableUID = make_shared<string>(boost::any_cast<string>(m["originDeliverableUID"]));
    }
    if (m.find("packageContentType") != m.end() && !m["packageContentType"].empty()) {
      packageContentType = make_shared<string>(boost::any_cast<string>(m["packageContentType"]));
    }
    if (m.find("packageSize") != m.end() && !m["packageSize"].empty()) {
      packageSize = make_shared<string>(boost::any_cast<string>(m["packageSize"]));
    }
    if (m.find("packageStatus") != m.end() && !m["packageStatus"].empty()) {
      packageStatus = make_shared<string>(boost::any_cast<string>(m["packageStatus"]));
    }
    if (m.find("packageType") != m.end() && !m["packageType"].empty()) {
      packageType = make_shared<string>(boost::any_cast<string>(m["packageType"]));
    }
    if (m.find("packageUID") != m.end() && !m["packageUID"].empty()) {
      packageUID = make_shared<string>(boost::any_cast<string>(m["packageUID"]));
    }
    if (m.find("packageURL") != m.end() && !m["packageURL"].empty()) {
      packageURL = make_shared<string>(boost::any_cast<string>(m["packageURL"]));
    }
    if (m.find("platform") != m.end() && !m["platform"].empty()) {
      platform = make_shared<string>(boost::any_cast<string>(m["platform"]));
    }
  }


  virtual ~GetDeliveryPackageResponseBodyData() = default;
};
class GetDeliveryPackageResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetDeliveryPackageResponseBodyData> data{};
  shared_ptr<string> msg{};

  GetDeliveryPackageResponseBody() {}

  explicit GetDeliveryPackageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (msg) {
      res["msg"] = boost::any(*msg);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        GetDeliveryPackageResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<GetDeliveryPackageResponseBodyData>(model1);
      }
    }
    if (m.find("msg") != m.end() && !m["msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["msg"]));
    }
  }


  virtual ~GetDeliveryPackageResponseBody() = default;
};
class GetDeliveryPackageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetDeliveryPackageResponseBody> body{};

  GetDeliveryPackageResponse() {}

  explicit GetDeliveryPackageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetDeliveryPackageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetDeliveryPackageResponseBody>(model1);
      }
    }
  }


  virtual ~GetDeliveryPackageResponse() = default;
};
class GetEnvironmentRequestOptions : public Darabonba::Model {
public:
  shared_ptr<bool> withSiteSurveyReport{};

  GetEnvironmentRequestOptions() {}

  explicit GetEnvironmentRequestOptions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (withSiteSurveyReport) {
      res["withSiteSurveyReport"] = boost::any(*withSiteSurveyReport);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("withSiteSurveyReport") != m.end() && !m["withSiteSurveyReport"].empty()) {
      withSiteSurveyReport = make_shared<bool>(boost::any_cast<bool>(m["withSiteSurveyReport"]));
    }
  }


  virtual ~GetEnvironmentRequestOptions() = default;
};
class GetEnvironmentRequest : public Darabonba::Model {
public:
  shared_ptr<GetEnvironmentRequestOptions> options{};

  GetEnvironmentRequest() {}

  explicit GetEnvironmentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (options) {
      res["options"] = options ? boost::any(options->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("options") != m.end() && !m["options"].empty()) {
      if (typeid(map<string, boost::any>) == m["options"].type()) {
        GetEnvironmentRequestOptions model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["options"]));
        options = make_shared<GetEnvironmentRequestOptions>(model1);
      }
    }
  }


  virtual ~GetEnvironmentRequest() = default;
};
class GetEnvironmentShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> optionsShrink{};

  GetEnvironmentShrinkRequest() {}

  explicit GetEnvironmentShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (optionsShrink) {
      res["options"] = boost::any(*optionsShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("options") != m.end() && !m["options"].empty()) {
      optionsShrink = make_shared<string>(boost::any_cast<string>(m["options"]));
    }
  }


  virtual ~GetEnvironmentShrinkRequest() = default;
};
class GetEnvironmentResponseBodyDataAdvancedConfigs : public Darabonba::Model {
public:
  shared_ptr<bool> enableDeploySimulation{};
  shared_ptr<bool> enableSiteSurvey{};

  GetEnvironmentResponseBodyDataAdvancedConfigs() {}

  explicit GetEnvironmentResponseBodyDataAdvancedConfigs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enableDeploySimulation) {
      res["enableDeploySimulation"] = boost::any(*enableDeploySimulation);
    }
    if (enableSiteSurvey) {
      res["enableSiteSurvey"] = boost::any(*enableSiteSurvey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("enableDeploySimulation") != m.end() && !m["enableDeploySimulation"].empty()) {
      enableDeploySimulation = make_shared<bool>(boost::any_cast<bool>(m["enableDeploySimulation"]));
    }
    if (m.find("enableSiteSurvey") != m.end() && !m["enableSiteSurvey"].empty()) {
      enableSiteSurvey = make_shared<bool>(boost::any_cast<bool>(m["enableSiteSurvey"]));
    }
  }


  virtual ~GetEnvironmentResponseBodyDataAdvancedConfigs() = default;
};
class GetEnvironmentResponseBodyDataPlatform : public Darabonba::Model {
public:
  shared_ptr<string> architecture{};
  shared_ptr<string> os{};

  GetEnvironmentResponseBodyDataPlatform() {}

  explicit GetEnvironmentResponseBodyDataPlatform(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (architecture) {
      res["architecture"] = boost::any(*architecture);
    }
    if (os) {
      res["os"] = boost::any(*os);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("architecture") != m.end() && !m["architecture"].empty()) {
      architecture = make_shared<string>(boost::any_cast<string>(m["architecture"]));
    }
    if (m.find("os") != m.end() && !m["os"].empty()) {
      os = make_shared<string>(boost::any_cast<string>(m["os"]));
    }
  }


  virtual ~GetEnvironmentResponseBodyDataPlatform() = default;
};
class GetEnvironmentResponseBodyDataSiteSurveyReportCheckListFailedList : public Darabonba::Model {
public:
  shared_ptr<string> ip{};
  shared_ptr<map<string, boost::any>> reason{};

  GetEnvironmentResponseBodyDataSiteSurveyReportCheckListFailedList() {}

  explicit GetEnvironmentResponseBodyDataSiteSurveyReportCheckListFailedList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ip) {
      res["ip"] = boost::any(*ip);
    }
    if (reason) {
      res["reason"] = boost::any(*reason);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ip") != m.end() && !m["ip"].empty()) {
      ip = make_shared<string>(boost::any_cast<string>(m["ip"]));
    }
    if (m.find("reason") != m.end() && !m["reason"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["reason"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      reason = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~GetEnvironmentResponseBodyDataSiteSurveyReportCheckListFailedList() = default;
};
class GetEnvironmentResponseBodyDataSiteSurveyReportCheckList : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> description{};
  shared_ptr<vector<GetEnvironmentResponseBodyDataSiteSurveyReportCheckListFailedList>> failedList{};
  shared_ptr<string> level{};
  shared_ptr<string> name{};
  shared_ptr<string> status{};

  GetEnvironmentResponseBodyDataSiteSurveyReportCheckList() {}

  explicit GetEnvironmentResponseBodyDataSiteSurveyReportCheckList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (failedList) {
      vector<boost::any> temp1;
      for(auto item1:*failedList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["failedList"] = boost::any(temp1);
    }
    if (level) {
      res["level"] = boost::any(*level);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("description") != m.end() && !m["description"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["description"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      description = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("failedList") != m.end() && !m["failedList"].empty()) {
      if (typeid(vector<boost::any>) == m["failedList"].type()) {
        vector<GetEnvironmentResponseBodyDataSiteSurveyReportCheckListFailedList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["failedList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetEnvironmentResponseBodyDataSiteSurveyReportCheckListFailedList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        failedList = make_shared<vector<GetEnvironmentResponseBodyDataSiteSurveyReportCheckListFailedList>>(expect1);
      }
    }
    if (m.find("level") != m.end() && !m["level"].empty()) {
      level = make_shared<string>(boost::any_cast<string>(m["level"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
  }


  virtual ~GetEnvironmentResponseBodyDataSiteSurveyReportCheckList() = default;
};
class GetEnvironmentResponseBodyDataSiteSurveyReport : public Darabonba::Model {
public:
  shared_ptr<vector<GetEnvironmentResponseBodyDataSiteSurveyReportCheckList>> checkList{};
  shared_ptr<string> result{};

  GetEnvironmentResponseBodyDataSiteSurveyReport() {}

  explicit GetEnvironmentResponseBodyDataSiteSurveyReport(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (checkList) {
      vector<boost::any> temp1;
      for(auto item1:*checkList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["checkList"] = boost::any(temp1);
    }
    if (result) {
      res["result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("checkList") != m.end() && !m["checkList"].empty()) {
      if (typeid(vector<boost::any>) == m["checkList"].type()) {
        vector<GetEnvironmentResponseBodyDataSiteSurveyReportCheckList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["checkList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetEnvironmentResponseBodyDataSiteSurveyReportCheckList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        checkList = make_shared<vector<GetEnvironmentResponseBodyDataSiteSurveyReportCheckList>>(expect1);
      }
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      result = make_shared<string>(boost::any_cast<string>(m["result"]));
    }
  }


  virtual ~GetEnvironmentResponseBodyDataSiteSurveyReport() = default;
};
class GetEnvironmentResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<GetEnvironmentResponseBodyDataAdvancedConfigs> advancedConfigs{};
  shared_ptr<string> clusterId{};
  shared_ptr<string> clusterUID{};
  shared_ptr<string> createdAt{};
  shared_ptr<string> description{};
  shared_ptr<string> expiredAt{};
  shared_ptr<string> foundationType{};
  shared_ptr<string> foundationVersion{};
  shared_ptr<string> foundationVersionUID{};
  shared_ptr<vector<InstanceInfo>> instanceList{};
  shared_ptr<string> instanceStatus{};
  shared_ptr<string> location{};
  shared_ptr<string> name{};
  shared_ptr<string> oldProductVersion{};
  shared_ptr<string> oldProductVersionUID{};
  shared_ptr<GetEnvironmentResponseBodyDataPlatform> platform{};
  shared_ptr<vector<Platform>> platformList{};
  shared_ptr<string> platformStatus{};
  shared_ptr<string> productName{};
  shared_ptr<string> productVersion{};
  shared_ptr<GetEnvironmentResponseBodyDataSiteSurveyReport> siteSurveyReport{};
  shared_ptr<string> uid{};
  shared_ptr<string> vendorConfig{};
  shared_ptr<string> vendorType{};

  GetEnvironmentResponseBodyData() {}

  explicit GetEnvironmentResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (advancedConfigs) {
      res["advancedConfigs"] = advancedConfigs ? boost::any(advancedConfigs->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (clusterId) {
      res["clusterId"] = boost::any(*clusterId);
    }
    if (clusterUID) {
      res["clusterUID"] = boost::any(*clusterUID);
    }
    if (createdAt) {
      res["createdAt"] = boost::any(*createdAt);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (expiredAt) {
      res["expiredAt"] = boost::any(*expiredAt);
    }
    if (foundationType) {
      res["foundationType"] = boost::any(*foundationType);
    }
    if (foundationVersion) {
      res["foundationVersion"] = boost::any(*foundationVersion);
    }
    if (foundationVersionUID) {
      res["foundationVersionUID"] = boost::any(*foundationVersionUID);
    }
    if (instanceList) {
      vector<boost::any> temp1;
      for(auto item1:*instanceList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["instanceList"] = boost::any(temp1);
    }
    if (instanceStatus) {
      res["instanceStatus"] = boost::any(*instanceStatus);
    }
    if (location) {
      res["location"] = boost::any(*location);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (oldProductVersion) {
      res["oldProductVersion"] = boost::any(*oldProductVersion);
    }
    if (oldProductVersionUID) {
      res["oldProductVersionUID"] = boost::any(*oldProductVersionUID);
    }
    if (platform) {
      res["platform"] = platform ? boost::any(platform->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (platformList) {
      vector<boost::any> temp1;
      for(auto item1:*platformList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["platformList"] = boost::any(temp1);
    }
    if (platformStatus) {
      res["platformStatus"] = boost::any(*platformStatus);
    }
    if (productName) {
      res["productName"] = boost::any(*productName);
    }
    if (productVersion) {
      res["productVersion"] = boost::any(*productVersion);
    }
    if (siteSurveyReport) {
      res["siteSurveyReport"] = siteSurveyReport ? boost::any(siteSurveyReport->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (uid) {
      res["uid"] = boost::any(*uid);
    }
    if (vendorConfig) {
      res["vendorConfig"] = boost::any(*vendorConfig);
    }
    if (vendorType) {
      res["vendorType"] = boost::any(*vendorType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("advancedConfigs") != m.end() && !m["advancedConfigs"].empty()) {
      if (typeid(map<string, boost::any>) == m["advancedConfigs"].type()) {
        GetEnvironmentResponseBodyDataAdvancedConfigs model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["advancedConfigs"]));
        advancedConfigs = make_shared<GetEnvironmentResponseBodyDataAdvancedConfigs>(model1);
      }
    }
    if (m.find("clusterId") != m.end() && !m["clusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["clusterId"]));
    }
    if (m.find("clusterUID") != m.end() && !m["clusterUID"].empty()) {
      clusterUID = make_shared<string>(boost::any_cast<string>(m["clusterUID"]));
    }
    if (m.find("createdAt") != m.end() && !m["createdAt"].empty()) {
      createdAt = make_shared<string>(boost::any_cast<string>(m["createdAt"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("expiredAt") != m.end() && !m["expiredAt"].empty()) {
      expiredAt = make_shared<string>(boost::any_cast<string>(m["expiredAt"]));
    }
    if (m.find("foundationType") != m.end() && !m["foundationType"].empty()) {
      foundationType = make_shared<string>(boost::any_cast<string>(m["foundationType"]));
    }
    if (m.find("foundationVersion") != m.end() && !m["foundationVersion"].empty()) {
      foundationVersion = make_shared<string>(boost::any_cast<string>(m["foundationVersion"]));
    }
    if (m.find("foundationVersionUID") != m.end() && !m["foundationVersionUID"].empty()) {
      foundationVersionUID = make_shared<string>(boost::any_cast<string>(m["foundationVersionUID"]));
    }
    if (m.find("instanceList") != m.end() && !m["instanceList"].empty()) {
      if (typeid(vector<boost::any>) == m["instanceList"].type()) {
        vector<InstanceInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["instanceList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            InstanceInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        instanceList = make_shared<vector<InstanceInfo>>(expect1);
      }
    }
    if (m.find("instanceStatus") != m.end() && !m["instanceStatus"].empty()) {
      instanceStatus = make_shared<string>(boost::any_cast<string>(m["instanceStatus"]));
    }
    if (m.find("location") != m.end() && !m["location"].empty()) {
      location = make_shared<string>(boost::any_cast<string>(m["location"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("oldProductVersion") != m.end() && !m["oldProductVersion"].empty()) {
      oldProductVersion = make_shared<string>(boost::any_cast<string>(m["oldProductVersion"]));
    }
    if (m.find("oldProductVersionUID") != m.end() && !m["oldProductVersionUID"].empty()) {
      oldProductVersionUID = make_shared<string>(boost::any_cast<string>(m["oldProductVersionUID"]));
    }
    if (m.find("platform") != m.end() && !m["platform"].empty()) {
      if (typeid(map<string, boost::any>) == m["platform"].type()) {
        GetEnvironmentResponseBodyDataPlatform model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["platform"]));
        platform = make_shared<GetEnvironmentResponseBodyDataPlatform>(model1);
      }
    }
    if (m.find("platformList") != m.end() && !m["platformList"].empty()) {
      if (typeid(vector<boost::any>) == m["platformList"].type()) {
        vector<Platform> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["platformList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Platform model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        platformList = make_shared<vector<Platform>>(expect1);
      }
    }
    if (m.find("platformStatus") != m.end() && !m["platformStatus"].empty()) {
      platformStatus = make_shared<string>(boost::any_cast<string>(m["platformStatus"]));
    }
    if (m.find("productName") != m.end() && !m["productName"].empty()) {
      productName = make_shared<string>(boost::any_cast<string>(m["productName"]));
    }
    if (m.find("productVersion") != m.end() && !m["productVersion"].empty()) {
      productVersion = make_shared<string>(boost::any_cast<string>(m["productVersion"]));
    }
    if (m.find("siteSurveyReport") != m.end() && !m["siteSurveyReport"].empty()) {
      if (typeid(map<string, boost::any>) == m["siteSurveyReport"].type()) {
        GetEnvironmentResponseBodyDataSiteSurveyReport model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["siteSurveyReport"]));
        siteSurveyReport = make_shared<GetEnvironmentResponseBodyDataSiteSurveyReport>(model1);
      }
    }
    if (m.find("uid") != m.end() && !m["uid"].empty()) {
      uid = make_shared<string>(boost::any_cast<string>(m["uid"]));
    }
    if (m.find("vendorConfig") != m.end() && !m["vendorConfig"].empty()) {
      vendorConfig = make_shared<string>(boost::any_cast<string>(m["vendorConfig"]));
    }
    if (m.find("vendorType") != m.end() && !m["vendorType"].empty()) {
      vendorType = make_shared<string>(boost::any_cast<string>(m["vendorType"]));
    }
  }


  virtual ~GetEnvironmentResponseBodyData() = default;
};
class GetEnvironmentResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetEnvironmentResponseBodyData> data{};
  shared_ptr<string> msg{};

  GetEnvironmentResponseBody() {}

  explicit GetEnvironmentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (msg) {
      res["msg"] = boost::any(*msg);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        GetEnvironmentResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<GetEnvironmentResponseBodyData>(model1);
      }
    }
    if (m.find("msg") != m.end() && !m["msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["msg"]));
    }
  }


  virtual ~GetEnvironmentResponseBody() = default;
};
class GetEnvironmentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetEnvironmentResponseBody> body{};

  GetEnvironmentResponse() {}

  explicit GetEnvironmentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetEnvironmentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetEnvironmentResponseBody>(model1);
      }
    }
  }


  virtual ~GetEnvironmentResponse() = default;
};
class GetEnvironmentDeliveryInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterUID{};
  shared_ptr<string> envUID{};

  GetEnvironmentDeliveryInstanceRequest() {}

  explicit GetEnvironmentDeliveryInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterUID) {
      res["clusterUID"] = boost::any(*clusterUID);
    }
    if (envUID) {
      res["envUID"] = boost::any(*envUID);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("clusterUID") != m.end() && !m["clusterUID"].empty()) {
      clusterUID = make_shared<string>(boost::any_cast<string>(m["clusterUID"]));
    }
    if (m.find("envUID") != m.end() && !m["envUID"].empty()) {
      envUID = make_shared<string>(boost::any_cast<string>(m["envUID"]));
    }
  }


  virtual ~GetEnvironmentDeliveryInstanceRequest() = default;
};
class GetEnvironmentDeliveryInstanceResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> clusterUID{};
  shared_ptr<string> deliverableConfigUID{};
  shared_ptr<string> deliverableUID{};
  shared_ptr<string> envUID{};
  shared_ptr<string> uid{};

  GetEnvironmentDeliveryInstanceResponseBodyData() {}

  explicit GetEnvironmentDeliveryInstanceResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterUID) {
      res["clusterUID"] = boost::any(*clusterUID);
    }
    if (deliverableConfigUID) {
      res["deliverableConfigUID"] = boost::any(*deliverableConfigUID);
    }
    if (deliverableUID) {
      res["deliverableUID"] = boost::any(*deliverableUID);
    }
    if (envUID) {
      res["envUID"] = boost::any(*envUID);
    }
    if (uid) {
      res["uid"] = boost::any(*uid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("clusterUID") != m.end() && !m["clusterUID"].empty()) {
      clusterUID = make_shared<string>(boost::any_cast<string>(m["clusterUID"]));
    }
    if (m.find("deliverableConfigUID") != m.end() && !m["deliverableConfigUID"].empty()) {
      deliverableConfigUID = make_shared<string>(boost::any_cast<string>(m["deliverableConfigUID"]));
    }
    if (m.find("deliverableUID") != m.end() && !m["deliverableUID"].empty()) {
      deliverableUID = make_shared<string>(boost::any_cast<string>(m["deliverableUID"]));
    }
    if (m.find("envUID") != m.end() && !m["envUID"].empty()) {
      envUID = make_shared<string>(boost::any_cast<string>(m["envUID"]));
    }
    if (m.find("uid") != m.end() && !m["uid"].empty()) {
      uid = make_shared<string>(boost::any_cast<string>(m["uid"]));
    }
  }


  virtual ~GetEnvironmentDeliveryInstanceResponseBodyData() = default;
};
class GetEnvironmentDeliveryInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetEnvironmentDeliveryInstanceResponseBodyData> data{};
  shared_ptr<string> msg{};

  GetEnvironmentDeliveryInstanceResponseBody() {}

  explicit GetEnvironmentDeliveryInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (msg) {
      res["msg"] = boost::any(*msg);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        GetEnvironmentDeliveryInstanceResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<GetEnvironmentDeliveryInstanceResponseBodyData>(model1);
      }
    }
    if (m.find("msg") != m.end() && !m["msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["msg"]));
    }
  }


  virtual ~GetEnvironmentDeliveryInstanceResponseBody() = default;
};
class GetEnvironmentDeliveryInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetEnvironmentDeliveryInstanceResponseBody> body{};

  GetEnvironmentDeliveryInstanceResponse() {}

  explicit GetEnvironmentDeliveryInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetEnvironmentDeliveryInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetEnvironmentDeliveryInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~GetEnvironmentDeliveryInstanceResponse() = default;
};
class GetEnvironmentLicenseRequestOptions : public Darabonba::Model {
public:
  shared_ptr<bool> withSecretYAML{};

  GetEnvironmentLicenseRequestOptions() {}

  explicit GetEnvironmentLicenseRequestOptions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (withSecretYAML) {
      res["withSecretYAML"] = boost::any(*withSecretYAML);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("withSecretYAML") != m.end() && !m["withSecretYAML"].empty()) {
      withSecretYAML = make_shared<bool>(boost::any_cast<bool>(m["withSecretYAML"]));
    }
  }


  virtual ~GetEnvironmentLicenseRequestOptions() = default;
};
class GetEnvironmentLicenseRequest : public Darabonba::Model {
public:
  shared_ptr<GetEnvironmentLicenseRequestOptions> options{};

  GetEnvironmentLicenseRequest() {}

  explicit GetEnvironmentLicenseRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (options) {
      res["options"] = options ? boost::any(options->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("options") != m.end() && !m["options"].empty()) {
      if (typeid(map<string, boost::any>) == m["options"].type()) {
        GetEnvironmentLicenseRequestOptions model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["options"]));
        options = make_shared<GetEnvironmentLicenseRequestOptions>(model1);
      }
    }
  }


  virtual ~GetEnvironmentLicenseRequest() = default;
};
class GetEnvironmentLicenseShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> optionsShrink{};

  GetEnvironmentLicenseShrinkRequest() {}

  explicit GetEnvironmentLicenseShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (optionsShrink) {
      res["options"] = boost::any(*optionsShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("options") != m.end() && !m["options"].empty()) {
      optionsShrink = make_shared<string>(boost::any_cast<string>(m["options"]));
    }
  }


  virtual ~GetEnvironmentLicenseShrinkRequest() = default;
};
class GetEnvironmentLicenseResponseBodyDataLicenseQuotaClusterQuota : public Darabonba::Model {
public:
  shared_ptr<long> cpuCoreLimit{};

  GetEnvironmentLicenseResponseBodyDataLicenseQuotaClusterQuota() {}

  explicit GetEnvironmentLicenseResponseBodyDataLicenseQuotaClusterQuota(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cpuCoreLimit) {
      res["cpuCoreLimit"] = boost::any(*cpuCoreLimit);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("cpuCoreLimit") != m.end() && !m["cpuCoreLimit"].empty()) {
      cpuCoreLimit = make_shared<long>(boost::any_cast<long>(m["cpuCoreLimit"]));
    }
  }


  virtual ~GetEnvironmentLicenseResponseBodyDataLicenseQuotaClusterQuota() = default;
};
class GetEnvironmentLicenseResponseBodyDataLicenseQuotaComponentQuotas : public Darabonba::Model {
public:
  shared_ptr<string> componentName{};
  shared_ptr<string> componentSource{};
  shared_ptr<long> instanceLimit{};

  GetEnvironmentLicenseResponseBodyDataLicenseQuotaComponentQuotas() {}

  explicit GetEnvironmentLicenseResponseBodyDataLicenseQuotaComponentQuotas(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (componentName) {
      res["componentName"] = boost::any(*componentName);
    }
    if (componentSource) {
      res["componentSource"] = boost::any(*componentSource);
    }
    if (instanceLimit) {
      res["instanceLimit"] = boost::any(*instanceLimit);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("componentName") != m.end() && !m["componentName"].empty()) {
      componentName = make_shared<string>(boost::any_cast<string>(m["componentName"]));
    }
    if (m.find("componentSource") != m.end() && !m["componentSource"].empty()) {
      componentSource = make_shared<string>(boost::any_cast<string>(m["componentSource"]));
    }
    if (m.find("instanceLimit") != m.end() && !m["instanceLimit"].empty()) {
      instanceLimit = make_shared<long>(boost::any_cast<long>(m["instanceLimit"]));
    }
  }


  virtual ~GetEnvironmentLicenseResponseBodyDataLicenseQuotaComponentQuotas() = default;
};
class GetEnvironmentLicenseResponseBodyDataLicenseQuotaCustomQuotas : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  GetEnvironmentLicenseResponseBodyDataLicenseQuotaCustomQuotas() {}

  explicit GetEnvironmentLicenseResponseBodyDataLicenseQuotaCustomQuotas(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (key) {
      res["key"] = boost::any(*key);
    }
    if (value) {
      res["value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("key") != m.end() && !m["key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["key"]));
    }
    if (m.find("value") != m.end() && !m["value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["value"]));
    }
  }


  virtual ~GetEnvironmentLicenseResponseBodyDataLicenseQuotaCustomQuotas() = default;
};
class GetEnvironmentLicenseResponseBodyDataLicenseQuota : public Darabonba::Model {
public:
  shared_ptr<GetEnvironmentLicenseResponseBodyDataLicenseQuotaClusterQuota> clusterQuota{};
  shared_ptr<vector<GetEnvironmentLicenseResponseBodyDataLicenseQuotaComponentQuotas>> componentQuotas{};
  shared_ptr<vector<GetEnvironmentLicenseResponseBodyDataLicenseQuotaCustomQuotas>> customQuotas{};

  GetEnvironmentLicenseResponseBodyDataLicenseQuota() {}

  explicit GetEnvironmentLicenseResponseBodyDataLicenseQuota(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterQuota) {
      res["clusterQuota"] = clusterQuota ? boost::any(clusterQuota->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (componentQuotas) {
      vector<boost::any> temp1;
      for(auto item1:*componentQuotas){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["componentQuotas"] = boost::any(temp1);
    }
    if (customQuotas) {
      vector<boost::any> temp1;
      for(auto item1:*customQuotas){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["customQuotas"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("clusterQuota") != m.end() && !m["clusterQuota"].empty()) {
      if (typeid(map<string, boost::any>) == m["clusterQuota"].type()) {
        GetEnvironmentLicenseResponseBodyDataLicenseQuotaClusterQuota model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["clusterQuota"]));
        clusterQuota = make_shared<GetEnvironmentLicenseResponseBodyDataLicenseQuotaClusterQuota>(model1);
      }
    }
    if (m.find("componentQuotas") != m.end() && !m["componentQuotas"].empty()) {
      if (typeid(vector<boost::any>) == m["componentQuotas"].type()) {
        vector<GetEnvironmentLicenseResponseBodyDataLicenseQuotaComponentQuotas> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["componentQuotas"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetEnvironmentLicenseResponseBodyDataLicenseQuotaComponentQuotas model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        componentQuotas = make_shared<vector<GetEnvironmentLicenseResponseBodyDataLicenseQuotaComponentQuotas>>(expect1);
      }
    }
    if (m.find("customQuotas") != m.end() && !m["customQuotas"].empty()) {
      if (typeid(vector<boost::any>) == m["customQuotas"].type()) {
        vector<GetEnvironmentLicenseResponseBodyDataLicenseQuotaCustomQuotas> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["customQuotas"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetEnvironmentLicenseResponseBodyDataLicenseQuotaCustomQuotas model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        customQuotas = make_shared<vector<GetEnvironmentLicenseResponseBodyDataLicenseQuotaCustomQuotas>>(expect1);
      }
    }
  }


  virtual ~GetEnvironmentLicenseResponseBodyDataLicenseQuota() = default;
};
class GetEnvironmentLicenseResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> expireTime{};
  shared_ptr<string> licenseKey{};
  shared_ptr<GetEnvironmentLicenseResponseBodyDataLicenseQuota> licenseQuota{};
  shared_ptr<string> productVersionUID{};
  shared_ptr<string> rejectReason{};
  shared_ptr<string> scope{};
  shared_ptr<string> secretYAML{};
  shared_ptr<string> status{};
  shared_ptr<string> type{};
  shared_ptr<string> uid{};

  GetEnvironmentLicenseResponseBodyData() {}

  explicit GetEnvironmentLicenseResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (expireTime) {
      res["expireTime"] = boost::any(*expireTime);
    }
    if (licenseKey) {
      res["licenseKey"] = boost::any(*licenseKey);
    }
    if (licenseQuota) {
      res["licenseQuota"] = licenseQuota ? boost::any(licenseQuota->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (productVersionUID) {
      res["productVersionUID"] = boost::any(*productVersionUID);
    }
    if (rejectReason) {
      res["rejectReason"] = boost::any(*rejectReason);
    }
    if (scope) {
      res["scope"] = boost::any(*scope);
    }
    if (secretYAML) {
      res["secretYAML"] = boost::any(*secretYAML);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (uid) {
      res["uid"] = boost::any(*uid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("expireTime") != m.end() && !m["expireTime"].empty()) {
      expireTime = make_shared<string>(boost::any_cast<string>(m["expireTime"]));
    }
    if (m.find("licenseKey") != m.end() && !m["licenseKey"].empty()) {
      licenseKey = make_shared<string>(boost::any_cast<string>(m["licenseKey"]));
    }
    if (m.find("licenseQuota") != m.end() && !m["licenseQuota"].empty()) {
      if (typeid(map<string, boost::any>) == m["licenseQuota"].type()) {
        GetEnvironmentLicenseResponseBodyDataLicenseQuota model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["licenseQuota"]));
        licenseQuota = make_shared<GetEnvironmentLicenseResponseBodyDataLicenseQuota>(model1);
      }
    }
    if (m.find("productVersionUID") != m.end() && !m["productVersionUID"].empty()) {
      productVersionUID = make_shared<string>(boost::any_cast<string>(m["productVersionUID"]));
    }
    if (m.find("rejectReason") != m.end() && !m["rejectReason"].empty()) {
      rejectReason = make_shared<string>(boost::any_cast<string>(m["rejectReason"]));
    }
    if (m.find("scope") != m.end() && !m["scope"].empty()) {
      scope = make_shared<string>(boost::any_cast<string>(m["scope"]));
    }
    if (m.find("secretYAML") != m.end() && !m["secretYAML"].empty()) {
      secretYAML = make_shared<string>(boost::any_cast<string>(m["secretYAML"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("uid") != m.end() && !m["uid"].empty()) {
      uid = make_shared<string>(boost::any_cast<string>(m["uid"]));
    }
  }


  virtual ~GetEnvironmentLicenseResponseBodyData() = default;
};
class GetEnvironmentLicenseResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetEnvironmentLicenseResponseBodyData> data{};
  shared_ptr<string> msg{};

  GetEnvironmentLicenseResponseBody() {}

  explicit GetEnvironmentLicenseResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (msg) {
      res["msg"] = boost::any(*msg);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        GetEnvironmentLicenseResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<GetEnvironmentLicenseResponseBodyData>(model1);
      }
    }
    if (m.find("msg") != m.end() && !m["msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["msg"]));
    }
  }


  virtual ~GetEnvironmentLicenseResponseBody() = default;
};
class GetEnvironmentLicenseResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetEnvironmentLicenseResponseBody> body{};

  GetEnvironmentLicenseResponse() {}

  explicit GetEnvironmentLicenseResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetEnvironmentLicenseResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetEnvironmentLicenseResponseBody>(model1);
      }
    }
  }


  virtual ~GetEnvironmentLicenseResponse() = default;
};
class GetEnvironmentNodeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<InstanceInfo> data{};
  shared_ptr<string> msg{};

  GetEnvironmentNodeResponseBody() {}

  explicit GetEnvironmentNodeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (msg) {
      res["msg"] = boost::any(*msg);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        InstanceInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<InstanceInfo>(model1);
      }
    }
    if (m.find("msg") != m.end() && !m["msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["msg"]));
    }
  }


  virtual ~GetEnvironmentNodeResponseBody() = default;
};
class GetEnvironmentNodeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetEnvironmentNodeResponseBody> body{};

  GetEnvironmentNodeResponse() {}

  explicit GetEnvironmentNodeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetEnvironmentNodeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetEnvironmentNodeResponseBody>(model1);
      }
    }
  }


  virtual ~GetEnvironmentNodeResponse() = default;
};
class GetFoundationComponentReferenceResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<FoundationComponentReferenceDetail>> list{};

  GetFoundationComponentReferenceResponseBodyData() {}

  explicit GetFoundationComponentReferenceResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (list) {
      vector<boost::any> temp1;
      for(auto item1:*list){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["list"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("list") != m.end() && !m["list"].empty()) {
      if (typeid(vector<boost::any>) == m["list"].type()) {
        vector<FoundationComponentReferenceDetail> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["list"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            FoundationComponentReferenceDetail model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        list = make_shared<vector<FoundationComponentReferenceDetail>>(expect1);
      }
    }
  }


  virtual ~GetFoundationComponentReferenceResponseBodyData() = default;
};
class GetFoundationComponentReferenceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetFoundationComponentReferenceResponseBodyData> data{};
  shared_ptr<string> msg{};

  GetFoundationComponentReferenceResponseBody() {}

  explicit GetFoundationComponentReferenceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (msg) {
      res["msg"] = boost::any(*msg);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        GetFoundationComponentReferenceResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<GetFoundationComponentReferenceResponseBodyData>(model1);
      }
    }
    if (m.find("msg") != m.end() && !m["msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["msg"]));
    }
  }


  virtual ~GetFoundationComponentReferenceResponseBody() = default;
};
class GetFoundationComponentReferenceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetFoundationComponentReferenceResponseBody> body{};

  GetFoundationComponentReferenceResponse() {}

  explicit GetFoundationComponentReferenceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetFoundationComponentReferenceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetFoundationComponentReferenceResponseBody>(model1);
      }
    }
  }


  virtual ~GetFoundationComponentReferenceResponse() = default;
};
class GetFoundationReferenceResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> clusterConfig{};
  shared_ptr<string> foundationVersionUID{};
  shared_ptr<string> uid{};

  GetFoundationReferenceResponseBodyData() {}

  explicit GetFoundationReferenceResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterConfig) {
      res["clusterConfig"] = boost::any(*clusterConfig);
    }
    if (foundationVersionUID) {
      res["foundationVersionUID"] = boost::any(*foundationVersionUID);
    }
    if (uid) {
      res["uid"] = boost::any(*uid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("clusterConfig") != m.end() && !m["clusterConfig"].empty()) {
      clusterConfig = make_shared<string>(boost::any_cast<string>(m["clusterConfig"]));
    }
    if (m.find("foundationVersionUID") != m.end() && !m["foundationVersionUID"].empty()) {
      foundationVersionUID = make_shared<string>(boost::any_cast<string>(m["foundationVersionUID"]));
    }
    if (m.find("uid") != m.end() && !m["uid"].empty()) {
      uid = make_shared<string>(boost::any_cast<string>(m["uid"]));
    }
  }


  virtual ~GetFoundationReferenceResponseBodyData() = default;
};
class GetFoundationReferenceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetFoundationReferenceResponseBodyData> data{};
  shared_ptr<string> msg{};

  GetFoundationReferenceResponseBody() {}

  explicit GetFoundationReferenceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (msg) {
      res["msg"] = boost::any(*msg);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        GetFoundationReferenceResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<GetFoundationReferenceResponseBodyData>(model1);
      }
    }
    if (m.find("msg") != m.end() && !m["msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["msg"]));
    }
  }


  virtual ~GetFoundationReferenceResponseBody() = default;
};
class GetFoundationReferenceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetFoundationReferenceResponseBody> body{};

  GetFoundationReferenceResponse() {}

  explicit GetFoundationReferenceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetFoundationReferenceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetFoundationReferenceResponseBody>(model1);
      }
    }
  }


  virtual ~GetFoundationReferenceResponse() = default;
};
class GetFoundationVersionResponseBodyDataSiteSurveyTool : public Darabonba::Model {
public:
  shared_ptr<string> clusterCheckerURL{};
  shared_ptr<string> clusterInfoBrief{};

  GetFoundationVersionResponseBodyDataSiteSurveyTool() {}

  explicit GetFoundationVersionResponseBodyDataSiteSurveyTool(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterCheckerURL) {
      res["clusterCheckerURL"] = boost::any(*clusterCheckerURL);
    }
    if (clusterInfoBrief) {
      res["clusterInfoBrief"] = boost::any(*clusterInfoBrief);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("clusterCheckerURL") != m.end() && !m["clusterCheckerURL"].empty()) {
      clusterCheckerURL = make_shared<string>(boost::any_cast<string>(m["clusterCheckerURL"]));
    }
    if (m.find("clusterInfoBrief") != m.end() && !m["clusterInfoBrief"].empty()) {
      clusterInfoBrief = make_shared<string>(boost::any_cast<string>(m["clusterInfoBrief"]));
    }
  }


  virtual ~GetFoundationVersionResponseBodyDataSiteSurveyTool() = default;
};
class GetFoundationVersionResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<vector<string>> features{};
  shared_ptr<bool> isDefault{};
  shared_ptr<string> labels{};
  shared_ptr<string> name{};
  shared_ptr<vector<Platform>> platforms{};
  shared_ptr<GetFoundationVersionResponseBodyDataSiteSurveyTool> siteSurveyTool{};
  shared_ptr<string> specName{};
  shared_ptr<string> status{};
  shared_ptr<string> type{};
  shared_ptr<string> uid{};
  shared_ptr<string> version{};

  GetFoundationVersionResponseBodyData() {}

  explicit GetFoundationVersionResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (features) {
      res["features"] = boost::any(*features);
    }
    if (isDefault) {
      res["isDefault"] = boost::any(*isDefault);
    }
    if (labels) {
      res["labels"] = boost::any(*labels);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (platforms) {
      vector<boost::any> temp1;
      for(auto item1:*platforms){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["platforms"] = boost::any(temp1);
    }
    if (siteSurveyTool) {
      res["siteSurveyTool"] = siteSurveyTool ? boost::any(siteSurveyTool->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (specName) {
      res["specName"] = boost::any(*specName);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (uid) {
      res["uid"] = boost::any(*uid);
    }
    if (version) {
      res["version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("features") != m.end() && !m["features"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["features"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["features"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      features = make_shared<vector<string>>(toVec1);
    }
    if (m.find("isDefault") != m.end() && !m["isDefault"].empty()) {
      isDefault = make_shared<bool>(boost::any_cast<bool>(m["isDefault"]));
    }
    if (m.find("labels") != m.end() && !m["labels"].empty()) {
      labels = make_shared<string>(boost::any_cast<string>(m["labels"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("platforms") != m.end() && !m["platforms"].empty()) {
      if (typeid(vector<boost::any>) == m["platforms"].type()) {
        vector<Platform> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["platforms"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Platform model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        platforms = make_shared<vector<Platform>>(expect1);
      }
    }
    if (m.find("siteSurveyTool") != m.end() && !m["siteSurveyTool"].empty()) {
      if (typeid(map<string, boost::any>) == m["siteSurveyTool"].type()) {
        GetFoundationVersionResponseBodyDataSiteSurveyTool model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["siteSurveyTool"]));
        siteSurveyTool = make_shared<GetFoundationVersionResponseBodyDataSiteSurveyTool>(model1);
      }
    }
    if (m.find("specName") != m.end() && !m["specName"].empty()) {
      specName = make_shared<string>(boost::any_cast<string>(m["specName"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("uid") != m.end() && !m["uid"].empty()) {
      uid = make_shared<string>(boost::any_cast<string>(m["uid"]));
    }
    if (m.find("version") != m.end() && !m["version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["version"]));
    }
  }


  virtual ~GetFoundationVersionResponseBodyData() = default;
};
class GetFoundationVersionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetFoundationVersionResponseBodyData> data{};
  shared_ptr<string> msg{};

  GetFoundationVersionResponseBody() {}

  explicit GetFoundationVersionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (msg) {
      res["msg"] = boost::any(*msg);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        GetFoundationVersionResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<GetFoundationVersionResponseBodyData>(model1);
      }
    }
    if (m.find("msg") != m.end() && !m["msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["msg"]));
    }
  }


  virtual ~GetFoundationVersionResponseBody() = default;
};
class GetFoundationVersionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetFoundationVersionResponseBody> body{};

  GetFoundationVersionResponse() {}

  explicit GetFoundationVersionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetFoundationVersionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetFoundationVersionResponseBody>(model1);
      }
    }
  }


  virtual ~GetFoundationVersionResponse() = default;
};
class GetProductRequest : public Darabonba::Model {
public:
  shared_ptr<bool> withIconURL{};

  GetProductRequest() {}

  explicit GetProductRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (withIconURL) {
      res["withIconURL"] = boost::any(*withIconURL);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("withIconURL") != m.end() && !m["withIconURL"].empty()) {
      withIconURL = make_shared<bool>(boost::any_cast<bool>(m["withIconURL"]));
    }
  }


  virtual ~GetProductRequest() = default;
};
class GetProductResponseBodyDataIcons : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<string> url{};

  GetProductResponseBodyDataIcons() {}

  explicit GetProductResponseBodyDataIcons(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (url) {
      res["url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("url") != m.end() && !m["url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["url"]));
    }
  }


  virtual ~GetProductResponseBodyDataIcons() = default;
};
class GetProductResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<string>> categories{};
  shared_ptr<string> description{};
  shared_ptr<string> displayName{};
  shared_ptr<vector<GetProductResponseBodyDataIcons>> icons{};
  shared_ptr<string> name{};
  shared_ptr<string> uid{};
  shared_ptr<string> vendor{};

  GetProductResponseBodyData() {}

  explicit GetProductResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (categories) {
      res["categories"] = boost::any(*categories);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (displayName) {
      res["displayName"] = boost::any(*displayName);
    }
    if (icons) {
      vector<boost::any> temp1;
      for(auto item1:*icons){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["icons"] = boost::any(temp1);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (uid) {
      res["uid"] = boost::any(*uid);
    }
    if (vendor) {
      res["vendor"] = boost::any(*vendor);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("categories") != m.end() && !m["categories"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["categories"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["categories"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      categories = make_shared<vector<string>>(toVec1);
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("displayName") != m.end() && !m["displayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["displayName"]));
    }
    if (m.find("icons") != m.end() && !m["icons"].empty()) {
      if (typeid(vector<boost::any>) == m["icons"].type()) {
        vector<GetProductResponseBodyDataIcons> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["icons"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetProductResponseBodyDataIcons model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        icons = make_shared<vector<GetProductResponseBodyDataIcons>>(expect1);
      }
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("uid") != m.end() && !m["uid"].empty()) {
      uid = make_shared<string>(boost::any_cast<string>(m["uid"]));
    }
    if (m.find("vendor") != m.end() && !m["vendor"].empty()) {
      vendor = make_shared<string>(boost::any_cast<string>(m["vendor"]));
    }
  }


  virtual ~GetProductResponseBodyData() = default;
};
class GetProductResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetProductResponseBodyData> data{};
  shared_ptr<string> msg{};

  GetProductResponseBody() {}

  explicit GetProductResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (msg) {
      res["msg"] = boost::any(*msg);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        GetProductResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<GetProductResponseBodyData>(model1);
      }
    }
    if (m.find("msg") != m.end() && !m["msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["msg"]));
    }
  }


  virtual ~GetProductResponseBody() = default;
};
class GetProductResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetProductResponseBody> body{};

  GetProductResponse() {}

  explicit GetProductResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetProductResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetProductResponseBody>(model1);
      }
    }
  }


  virtual ~GetProductResponse() = default;
};
class GetProductComponentVersionResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> appVersion{};
  shared_ptr<string> category{};
  shared_ptr<string> componentDescription{};
  shared_ptr<string> componentName{};
  shared_ptr<string> componentUID{};
  shared_ptr<string> componentVersionDescription{};
  shared_ptr<string> componentVersionUID{};
  shared_ptr<bool> enable{};
  shared_ptr<string> namespace_{};
  shared_ptr<string> orchestrationValues{};
  shared_ptr<bool> parentComponent{};
  shared_ptr<string> parentComponentVersionRelationUID{};
  shared_ptr<string> parentComponentVersionUID{};
  shared_ptr<string> productVersionUID{};
  shared_ptr<string> relationUID{};
  shared_ptr<string> releaseName{};
  shared_ptr<string> resources{};
  shared_ptr<long> sequence{};
  shared_ptr<string> source{};
  shared_ptr<string> values{};
  shared_ptr<string> version{};

  GetProductComponentVersionResponseBodyData() {}

  explicit GetProductComponentVersionResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appVersion) {
      res["appVersion"] = boost::any(*appVersion);
    }
    if (category) {
      res["category"] = boost::any(*category);
    }
    if (componentDescription) {
      res["componentDescription"] = boost::any(*componentDescription);
    }
    if (componentName) {
      res["componentName"] = boost::any(*componentName);
    }
    if (componentUID) {
      res["componentUID"] = boost::any(*componentUID);
    }
    if (componentVersionDescription) {
      res["componentVersionDescription"] = boost::any(*componentVersionDescription);
    }
    if (componentVersionUID) {
      res["componentVersionUID"] = boost::any(*componentVersionUID);
    }
    if (enable) {
      res["enable"] = boost::any(*enable);
    }
    if (namespace_) {
      res["namespace"] = boost::any(*namespace_);
    }
    if (orchestrationValues) {
      res["orchestrationValues"] = boost::any(*orchestrationValues);
    }
    if (parentComponent) {
      res["parentComponent"] = boost::any(*parentComponent);
    }
    if (parentComponentVersionRelationUID) {
      res["parentComponentVersionRelationUID"] = boost::any(*parentComponentVersionRelationUID);
    }
    if (parentComponentVersionUID) {
      res["parentComponentVersionUID"] = boost::any(*parentComponentVersionUID);
    }
    if (productVersionUID) {
      res["productVersionUID"] = boost::any(*productVersionUID);
    }
    if (relationUID) {
      res["relationUID"] = boost::any(*relationUID);
    }
    if (releaseName) {
      res["releaseName"] = boost::any(*releaseName);
    }
    if (resources) {
      res["resources"] = boost::any(*resources);
    }
    if (sequence) {
      res["sequence"] = boost::any(*sequence);
    }
    if (source) {
      res["source"] = boost::any(*source);
    }
    if (values) {
      res["values"] = boost::any(*values);
    }
    if (version) {
      res["version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("appVersion") != m.end() && !m["appVersion"].empty()) {
      appVersion = make_shared<string>(boost::any_cast<string>(m["appVersion"]));
    }
    if (m.find("category") != m.end() && !m["category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["category"]));
    }
    if (m.find("componentDescription") != m.end() && !m["componentDescription"].empty()) {
      componentDescription = make_shared<string>(boost::any_cast<string>(m["componentDescription"]));
    }
    if (m.find("componentName") != m.end() && !m["componentName"].empty()) {
      componentName = make_shared<string>(boost::any_cast<string>(m["componentName"]));
    }
    if (m.find("componentUID") != m.end() && !m["componentUID"].empty()) {
      componentUID = make_shared<string>(boost::any_cast<string>(m["componentUID"]));
    }
    if (m.find("componentVersionDescription") != m.end() && !m["componentVersionDescription"].empty()) {
      componentVersionDescription = make_shared<string>(boost::any_cast<string>(m["componentVersionDescription"]));
    }
    if (m.find("componentVersionUID") != m.end() && !m["componentVersionUID"].empty()) {
      componentVersionUID = make_shared<string>(boost::any_cast<string>(m["componentVersionUID"]));
    }
    if (m.find("enable") != m.end() && !m["enable"].empty()) {
      enable = make_shared<bool>(boost::any_cast<bool>(m["enable"]));
    }
    if (m.find("namespace") != m.end() && !m["namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["namespace"]));
    }
    if (m.find("orchestrationValues") != m.end() && !m["orchestrationValues"].empty()) {
      orchestrationValues = make_shared<string>(boost::any_cast<string>(m["orchestrationValues"]));
    }
    if (m.find("parentComponent") != m.end() && !m["parentComponent"].empty()) {
      parentComponent = make_shared<bool>(boost::any_cast<bool>(m["parentComponent"]));
    }
    if (m.find("parentComponentVersionRelationUID") != m.end() && !m["parentComponentVersionRelationUID"].empty()) {
      parentComponentVersionRelationUID = make_shared<string>(boost::any_cast<string>(m["parentComponentVersionRelationUID"]));
    }
    if (m.find("parentComponentVersionUID") != m.end() && !m["parentComponentVersionUID"].empty()) {
      parentComponentVersionUID = make_shared<string>(boost::any_cast<string>(m["parentComponentVersionUID"]));
    }
    if (m.find("productVersionUID") != m.end() && !m["productVersionUID"].empty()) {
      productVersionUID = make_shared<string>(boost::any_cast<string>(m["productVersionUID"]));
    }
    if (m.find("relationUID") != m.end() && !m["relationUID"].empty()) {
      relationUID = make_shared<string>(boost::any_cast<string>(m["relationUID"]));
    }
    if (m.find("releaseName") != m.end() && !m["releaseName"].empty()) {
      releaseName = make_shared<string>(boost::any_cast<string>(m["releaseName"]));
    }
    if (m.find("resources") != m.end() && !m["resources"].empty()) {
      resources = make_shared<string>(boost::any_cast<string>(m["resources"]));
    }
    if (m.find("sequence") != m.end() && !m["sequence"].empty()) {
      sequence = make_shared<long>(boost::any_cast<long>(m["sequence"]));
    }
    if (m.find("source") != m.end() && !m["source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["source"]));
    }
    if (m.find("values") != m.end() && !m["values"].empty()) {
      values = make_shared<string>(boost::any_cast<string>(m["values"]));
    }
    if (m.find("version") != m.end() && !m["version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["version"]));
    }
  }


  virtual ~GetProductComponentVersionResponseBodyData() = default;
};
class GetProductComponentVersionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<GetProductComponentVersionResponseBodyData>> data{};
  shared_ptr<string> msg{};

  GetProductComponentVersionResponseBody() {}

  explicit GetProductComponentVersionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["data"] = boost::any(temp1);
    }
    if (msg) {
      res["msg"] = boost::any(*msg);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(vector<boost::any>) == m["data"].type()) {
        vector<GetProductComponentVersionResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetProductComponentVersionResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<GetProductComponentVersionResponseBodyData>>(expect1);
      }
    }
    if (m.find("msg") != m.end() && !m["msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["msg"]));
    }
  }


  virtual ~GetProductComponentVersionResponseBody() = default;
};
class GetProductComponentVersionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetProductComponentVersionResponseBody> body{};

  GetProductComponentVersionResponse() {}

  explicit GetProductComponentVersionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetProductComponentVersionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetProductComponentVersionResponseBody>(model1);
      }
    }
  }


  virtual ~GetProductComponentVersionResponse() = default;
};
class GetProductDeploymentRequest : public Darabonba::Model {
public:
  shared_ptr<string> environmentUID{};
  shared_ptr<string> productVersionUID{};
  shared_ptr<bool> withParamConfig{};

  GetProductDeploymentRequest() {}

  explicit GetProductDeploymentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (environmentUID) {
      res["environmentUID"] = boost::any(*environmentUID);
    }
    if (productVersionUID) {
      res["productVersionUID"] = boost::any(*productVersionUID);
    }
    if (withParamConfig) {
      res["withParamConfig"] = boost::any(*withParamConfig);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("environmentUID") != m.end() && !m["environmentUID"].empty()) {
      environmentUID = make_shared<string>(boost::any_cast<string>(m["environmentUID"]));
    }
    if (m.find("productVersionUID") != m.end() && !m["productVersionUID"].empty()) {
      productVersionUID = make_shared<string>(boost::any_cast<string>(m["productVersionUID"]));
    }
    if (m.find("withParamConfig") != m.end() && !m["withParamConfig"].empty()) {
      withParamConfig = make_shared<bool>(boost::any_cast<bool>(m["withParamConfig"]));
    }
  }


  virtual ~GetProductDeploymentRequest() = default;
};
class GetProductDeploymentResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> envParams{};
  shared_ptr<string> envUID{};
  shared_ptr<string> status{};
  shared_ptr<string> uid{};

  GetProductDeploymentResponseBodyData() {}

  explicit GetProductDeploymentResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (envParams) {
      res["envParams"] = boost::any(*envParams);
    }
    if (envUID) {
      res["envUID"] = boost::any(*envUID);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (uid) {
      res["uid"] = boost::any(*uid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("envParams") != m.end() && !m["envParams"].empty()) {
      envParams = make_shared<string>(boost::any_cast<string>(m["envParams"]));
    }
    if (m.find("envUID") != m.end() && !m["envUID"].empty()) {
      envUID = make_shared<string>(boost::any_cast<string>(m["envUID"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("uid") != m.end() && !m["uid"].empty()) {
      uid = make_shared<string>(boost::any_cast<string>(m["uid"]));
    }
  }


  virtual ~GetProductDeploymentResponseBodyData() = default;
};
class GetProductDeploymentResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetProductDeploymentResponseBodyData> data{};
  shared_ptr<string> msg{};

  GetProductDeploymentResponseBody() {}

  explicit GetProductDeploymentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (msg) {
      res["msg"] = boost::any(*msg);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        GetProductDeploymentResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<GetProductDeploymentResponseBodyData>(model1);
      }
    }
    if (m.find("msg") != m.end() && !m["msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["msg"]));
    }
  }


  virtual ~GetProductDeploymentResponseBody() = default;
};
class GetProductDeploymentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetProductDeploymentResponseBody> body{};

  GetProductDeploymentResponse() {}

  explicit GetProductDeploymentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetProductDeploymentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetProductDeploymentResponseBody>(model1);
      }
    }
  }


  virtual ~GetProductDeploymentResponse() = default;
};
class GetProductVersionRequest : public Darabonba::Model {
public:
  shared_ptr<bool> withDocumentationURL{};
  shared_ptr<bool> withExtendResourceURL{};

  GetProductVersionRequest() {}

  explicit GetProductVersionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (withDocumentationURL) {
      res["withDocumentationURL"] = boost::any(*withDocumentationURL);
    }
    if (withExtendResourceURL) {
      res["withExtendResourceURL"] = boost::any(*withExtendResourceURL);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("withDocumentationURL") != m.end() && !m["withDocumentationURL"].empty()) {
      withDocumentationURL = make_shared<bool>(boost::any_cast<bool>(m["withDocumentationURL"]));
    }
    if (m.find("withExtendResourceURL") != m.end() && !m["withExtendResourceURL"].empty()) {
      withExtendResourceURL = make_shared<bool>(boost::any_cast<bool>(m["withExtendResourceURL"]));
    }
  }


  virtual ~GetProductVersionRequest() = default;
};
class GetProductVersionResponseBodyDataDocumentations : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<string> url{};

  GetProductVersionResponseBodyDataDocumentations() {}

  explicit GetProductVersionResponseBodyDataDocumentations(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (url) {
      res["url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("url") != m.end() && !m["url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["url"]));
    }
  }


  virtual ~GetProductVersionResponseBodyDataDocumentations() = default;
};
class GetProductVersionResponseBodyDataExtendedResources : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<string> url{};

  GetProductVersionResponseBodyDataExtendedResources() {}

  explicit GetProductVersionResponseBodyDataExtendedResources(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (url) {
      res["url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("url") != m.end() && !m["url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["url"]));
    }
  }


  virtual ~GetProductVersionResponseBodyDataExtendedResources() = default;
};
class GetProductVersionResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<bool> continuousIntegration{};
  shared_ptr<string> description{};
  shared_ptr<vector<GetProductVersionResponseBodyDataDocumentations>> documentations{};
  shared_ptr<vector<GetProductVersionResponseBodyDataExtendedResources>> extendedResources{};
  shared_ptr<string> foundationVersionUID{};
  shared_ptr<string> packageURL{};
  shared_ptr<vector<Platform>> platforms{};
  shared_ptr<string> productName{};
  shared_ptr<string> productUID{};
  shared_ptr<string> provider{};
  shared_ptr<long> timeout{};
  shared_ptr<string> uid{};
  shared_ptr<string> version{};

  GetProductVersionResponseBodyData() {}

  explicit GetProductVersionResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (continuousIntegration) {
      res["continuousIntegration"] = boost::any(*continuousIntegration);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (documentations) {
      vector<boost::any> temp1;
      for(auto item1:*documentations){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["documentations"] = boost::any(temp1);
    }
    if (extendedResources) {
      vector<boost::any> temp1;
      for(auto item1:*extendedResources){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["extendedResources"] = boost::any(temp1);
    }
    if (foundationVersionUID) {
      res["foundationVersionUID"] = boost::any(*foundationVersionUID);
    }
    if (packageURL) {
      res["packageURL"] = boost::any(*packageURL);
    }
    if (platforms) {
      vector<boost::any> temp1;
      for(auto item1:*platforms){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["platforms"] = boost::any(temp1);
    }
    if (productName) {
      res["productName"] = boost::any(*productName);
    }
    if (productUID) {
      res["productUID"] = boost::any(*productUID);
    }
    if (provider) {
      res["provider"] = boost::any(*provider);
    }
    if (timeout) {
      res["timeout"] = boost::any(*timeout);
    }
    if (uid) {
      res["uid"] = boost::any(*uid);
    }
    if (version) {
      res["version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("continuousIntegration") != m.end() && !m["continuousIntegration"].empty()) {
      continuousIntegration = make_shared<bool>(boost::any_cast<bool>(m["continuousIntegration"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("documentations") != m.end() && !m["documentations"].empty()) {
      if (typeid(vector<boost::any>) == m["documentations"].type()) {
        vector<GetProductVersionResponseBodyDataDocumentations> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["documentations"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetProductVersionResponseBodyDataDocumentations model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        documentations = make_shared<vector<GetProductVersionResponseBodyDataDocumentations>>(expect1);
      }
    }
    if (m.find("extendedResources") != m.end() && !m["extendedResources"].empty()) {
      if (typeid(vector<boost::any>) == m["extendedResources"].type()) {
        vector<GetProductVersionResponseBodyDataExtendedResources> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["extendedResources"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetProductVersionResponseBodyDataExtendedResources model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        extendedResources = make_shared<vector<GetProductVersionResponseBodyDataExtendedResources>>(expect1);
      }
    }
    if (m.find("foundationVersionUID") != m.end() && !m["foundationVersionUID"].empty()) {
      foundationVersionUID = make_shared<string>(boost::any_cast<string>(m["foundationVersionUID"]));
    }
    if (m.find("packageURL") != m.end() && !m["packageURL"].empty()) {
      packageURL = make_shared<string>(boost::any_cast<string>(m["packageURL"]));
    }
    if (m.find("platforms") != m.end() && !m["platforms"].empty()) {
      if (typeid(vector<boost::any>) == m["platforms"].type()) {
        vector<Platform> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["platforms"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Platform model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        platforms = make_shared<vector<Platform>>(expect1);
      }
    }
    if (m.find("productName") != m.end() && !m["productName"].empty()) {
      productName = make_shared<string>(boost::any_cast<string>(m["productName"]));
    }
    if (m.find("productUID") != m.end() && !m["productUID"].empty()) {
      productUID = make_shared<string>(boost::any_cast<string>(m["productUID"]));
    }
    if (m.find("provider") != m.end() && !m["provider"].empty()) {
      provider = make_shared<string>(boost::any_cast<string>(m["provider"]));
    }
    if (m.find("timeout") != m.end() && !m["timeout"].empty()) {
      timeout = make_shared<long>(boost::any_cast<long>(m["timeout"]));
    }
    if (m.find("uid") != m.end() && !m["uid"].empty()) {
      uid = make_shared<string>(boost::any_cast<string>(m["uid"]));
    }
    if (m.find("version") != m.end() && !m["version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["version"]));
    }
  }


  virtual ~GetProductVersionResponseBodyData() = default;
};
class GetProductVersionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetProductVersionResponseBodyData> data{};
  shared_ptr<string> msg{};

  GetProductVersionResponseBody() {}

  explicit GetProductVersionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (msg) {
      res["msg"] = boost::any(*msg);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        GetProductVersionResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<GetProductVersionResponseBodyData>(model1);
      }
    }
    if (m.find("msg") != m.end() && !m["msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["msg"]));
    }
  }


  virtual ~GetProductVersionResponseBody() = default;
};
class GetProductVersionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetProductVersionResponseBody> body{};

  GetProductVersionResponse() {}

  explicit GetProductVersionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetProductVersionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetProductVersionResponseBody>(model1);
      }
    }
  }


  virtual ~GetProductVersionResponse() = default;
};
class GetProductVersionDifferencesRequest : public Darabonba::Model {
public:
  shared_ptr<string> preVersionUID{};

  GetProductVersionDifferencesRequest() {}

  explicit GetProductVersionDifferencesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (preVersionUID) {
      res["preVersionUID"] = boost::any(*preVersionUID);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("preVersionUID") != m.end() && !m["preVersionUID"].empty()) {
      preVersionUID = make_shared<string>(boost::any_cast<string>(m["preVersionUID"]));
    }
  }


  virtual ~GetProductVersionDifferencesRequest() = default;
};
class GetProductVersionDifferencesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> componentName{};
  shared_ptr<string> difference{};
  shared_ptr<string> message{};
  shared_ptr<string> preVersion{};
  shared_ptr<string> releaseName{};
  shared_ptr<bool> upgradeFlag{};
  shared_ptr<string> version{};

  GetProductVersionDifferencesResponseBodyData() {}

  explicit GetProductVersionDifferencesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (componentName) {
      res["componentName"] = boost::any(*componentName);
    }
    if (difference) {
      res["difference"] = boost::any(*difference);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (preVersion) {
      res["preVersion"] = boost::any(*preVersion);
    }
    if (releaseName) {
      res["releaseName"] = boost::any(*releaseName);
    }
    if (upgradeFlag) {
      res["upgradeFlag"] = boost::any(*upgradeFlag);
    }
    if (version) {
      res["version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("componentName") != m.end() && !m["componentName"].empty()) {
      componentName = make_shared<string>(boost::any_cast<string>(m["componentName"]));
    }
    if (m.find("difference") != m.end() && !m["difference"].empty()) {
      difference = make_shared<string>(boost::any_cast<string>(m["difference"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("preVersion") != m.end() && !m["preVersion"].empty()) {
      preVersion = make_shared<string>(boost::any_cast<string>(m["preVersion"]));
    }
    if (m.find("releaseName") != m.end() && !m["releaseName"].empty()) {
      releaseName = make_shared<string>(boost::any_cast<string>(m["releaseName"]));
    }
    if (m.find("upgradeFlag") != m.end() && !m["upgradeFlag"].empty()) {
      upgradeFlag = make_shared<bool>(boost::any_cast<bool>(m["upgradeFlag"]));
    }
    if (m.find("version") != m.end() && !m["version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["version"]));
    }
  }


  virtual ~GetProductVersionDifferencesResponseBodyData() = default;
};
class GetProductVersionDifferencesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<GetProductVersionDifferencesResponseBodyData>> data{};
  shared_ptr<string> msg{};
  shared_ptr<string> requestId{};

  GetProductVersionDifferencesResponseBody() {}

  explicit GetProductVersionDifferencesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["data"] = boost::any(temp1);
    }
    if (msg) {
      res["msg"] = boost::any(*msg);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(vector<boost::any>) == m["data"].type()) {
        vector<GetProductVersionDifferencesResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetProductVersionDifferencesResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<GetProductVersionDifferencesResponseBodyData>>(expect1);
      }
    }
    if (m.find("msg") != m.end() && !m["msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["msg"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~GetProductVersionDifferencesResponseBody() = default;
};
class GetProductVersionDifferencesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetProductVersionDifferencesResponseBody> body{};

  GetProductVersionDifferencesResponse() {}

  explicit GetProductVersionDifferencesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetProductVersionDifferencesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetProductVersionDifferencesResponseBody>(model1);
      }
    }
  }


  virtual ~GetProductVersionDifferencesResponse() = default;
};
class GetProductVersionPackageRequest : public Darabonba::Model {
public:
  shared_ptr<string> foundationReferenceUID{};
  shared_ptr<string> oldFoundationReferenceUID{};
  shared_ptr<string> oldProductVersionUID{};
  shared_ptr<string> packageContentType{};
  shared_ptr<string> packageType{};
  shared_ptr<string> packageUID{};
  shared_ptr<string> platform{};
  shared_ptr<bool> withURL{};

  GetProductVersionPackageRequest() {}

  explicit GetProductVersionPackageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (foundationReferenceUID) {
      res["foundationReferenceUID"] = boost::any(*foundationReferenceUID);
    }
    if (oldFoundationReferenceUID) {
      res["oldFoundationReferenceUID"] = boost::any(*oldFoundationReferenceUID);
    }
    if (oldProductVersionUID) {
      res["oldProductVersionUID"] = boost::any(*oldProductVersionUID);
    }
    if (packageContentType) {
      res["packageContentType"] = boost::any(*packageContentType);
    }
    if (packageType) {
      res["packageType"] = boost::any(*packageType);
    }
    if (packageUID) {
      res["packageUID"] = boost::any(*packageUID);
    }
    if (platform) {
      res["platform"] = boost::any(*platform);
    }
    if (withURL) {
      res["withURL"] = boost::any(*withURL);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("foundationReferenceUID") != m.end() && !m["foundationReferenceUID"].empty()) {
      foundationReferenceUID = make_shared<string>(boost::any_cast<string>(m["foundationReferenceUID"]));
    }
    if (m.find("oldFoundationReferenceUID") != m.end() && !m["oldFoundationReferenceUID"].empty()) {
      oldFoundationReferenceUID = make_shared<string>(boost::any_cast<string>(m["oldFoundationReferenceUID"]));
    }
    if (m.find("oldProductVersionUID") != m.end() && !m["oldProductVersionUID"].empty()) {
      oldProductVersionUID = make_shared<string>(boost::any_cast<string>(m["oldProductVersionUID"]));
    }
    if (m.find("packageContentType") != m.end() && !m["packageContentType"].empty()) {
      packageContentType = make_shared<string>(boost::any_cast<string>(m["packageContentType"]));
    }
    if (m.find("packageType") != m.end() && !m["packageType"].empty()) {
      packageType = make_shared<string>(boost::any_cast<string>(m["packageType"]));
    }
    if (m.find("packageUID") != m.end() && !m["packageUID"].empty()) {
      packageUID = make_shared<string>(boost::any_cast<string>(m["packageUID"]));
    }
    if (m.find("platform") != m.end() && !m["platform"].empty()) {
      platform = make_shared<string>(boost::any_cast<string>(m["platform"]));
    }
    if (m.find("withURL") != m.end() && !m["withURL"].empty()) {
      withURL = make_shared<bool>(boost::any_cast<bool>(m["withURL"]));
    }
  }


  virtual ~GetProductVersionPackageRequest() = default;
};
class GetProductVersionPackageResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> packageContentType{};
  shared_ptr<string> packageSize{};
  shared_ptr<string> packageStatus{};
  shared_ptr<string> packageType{};
  shared_ptr<string> packageUID{};
  shared_ptr<string> packageURL{};
  shared_ptr<Platform> platform{};
  shared_ptr<vector<Platform>> platformList{};

  GetProductVersionPackageResponseBodyData() {}

  explicit GetProductVersionPackageResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (packageContentType) {
      res["packageContentType"] = boost::any(*packageContentType);
    }
    if (packageSize) {
      res["packageSize"] = boost::any(*packageSize);
    }
    if (packageStatus) {
      res["packageStatus"] = boost::any(*packageStatus);
    }
    if (packageType) {
      res["packageType"] = boost::any(*packageType);
    }
    if (packageUID) {
      res["packageUID"] = boost::any(*packageUID);
    }
    if (packageURL) {
      res["packageURL"] = boost::any(*packageURL);
    }
    if (platform) {
      res["platform"] = platform ? boost::any(platform->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (platformList) {
      vector<boost::any> temp1;
      for(auto item1:*platformList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["platformList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("packageContentType") != m.end() && !m["packageContentType"].empty()) {
      packageContentType = make_shared<string>(boost::any_cast<string>(m["packageContentType"]));
    }
    if (m.find("packageSize") != m.end() && !m["packageSize"].empty()) {
      packageSize = make_shared<string>(boost::any_cast<string>(m["packageSize"]));
    }
    if (m.find("packageStatus") != m.end() && !m["packageStatus"].empty()) {
      packageStatus = make_shared<string>(boost::any_cast<string>(m["packageStatus"]));
    }
    if (m.find("packageType") != m.end() && !m["packageType"].empty()) {
      packageType = make_shared<string>(boost::any_cast<string>(m["packageType"]));
    }
    if (m.find("packageUID") != m.end() && !m["packageUID"].empty()) {
      packageUID = make_shared<string>(boost::any_cast<string>(m["packageUID"]));
    }
    if (m.find("packageURL") != m.end() && !m["packageURL"].empty()) {
      packageURL = make_shared<string>(boost::any_cast<string>(m["packageURL"]));
    }
    if (m.find("platform") != m.end() && !m["platform"].empty()) {
      if (typeid(map<string, boost::any>) == m["platform"].type()) {
        Platform model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["platform"]));
        platform = make_shared<Platform>(model1);
      }
    }
    if (m.find("platformList") != m.end() && !m["platformList"].empty()) {
      if (typeid(vector<boost::any>) == m["platformList"].type()) {
        vector<Platform> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["platformList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Platform model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        platformList = make_shared<vector<Platform>>(expect1);
      }
    }
  }


  virtual ~GetProductVersionPackageResponseBodyData() = default;
};
class GetProductVersionPackageResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetProductVersionPackageResponseBodyData> data{};
  shared_ptr<string> msg{};

  GetProductVersionPackageResponseBody() {}

  explicit GetProductVersionPackageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (msg) {
      res["msg"] = boost::any(*msg);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        GetProductVersionPackageResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<GetProductVersionPackageResponseBodyData>(model1);
      }
    }
    if (m.find("msg") != m.end() && !m["msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["msg"]));
    }
  }


  virtual ~GetProductVersionPackageResponseBody() = default;
};
class GetProductVersionPackageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetProductVersionPackageResponseBody> body{};

  GetProductVersionPackageResponse() {}

  explicit GetProductVersionPackageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetProductVersionPackageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetProductVersionPackageResponseBody>(model1);
      }
    }
  }


  virtual ~GetProductVersionPackageResponse() = default;
};
class GetResourceSnapshotRequest : public Darabonba::Model {
public:
  shared_ptr<string> productVersionUID{};
  shared_ptr<string> uid{};

  GetResourceSnapshotRequest() {}

  explicit GetResourceSnapshotRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (productVersionUID) {
      res["productVersionUID"] = boost::any(*productVersionUID);
    }
    if (uid) {
      res["uid"] = boost::any(*uid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("productVersionUID") != m.end() && !m["productVersionUID"].empty()) {
      productVersionUID = make_shared<string>(boost::any_cast<string>(m["productVersionUID"]));
    }
    if (m.find("uid") != m.end() && !m["uid"].empty()) {
      uid = make_shared<string>(boost::any_cast<string>(m["uid"]));
    }
  }


  virtual ~GetResourceSnapshotRequest() = default;
};
class GetResourceSnapshotResponseBodyAdpInfoComponents : public Darabonba::Model {
public:
  shared_ptr<string> CPULimit{};
  shared_ptr<string> CPURequest{};
  shared_ptr<string> componentName{};
  shared_ptr<string> componentReleaseName{};
  shared_ptr<string> componentVersion{};
  shared_ptr<string> memoryLimit{};
  shared_ptr<string> memoryRequest{};
  shared_ptr<string> orchestrationValue{};
  shared_ptr<string> status{};
  shared_ptr<string> storageRequest{};

  GetResourceSnapshotResponseBodyAdpInfoComponents() {}

  explicit GetResourceSnapshotResponseBodyAdpInfoComponents(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (CPULimit) {
      res["CPULimit"] = boost::any(*CPULimit);
    }
    if (CPURequest) {
      res["CPURequest"] = boost::any(*CPURequest);
    }
    if (componentName) {
      res["componentName"] = boost::any(*componentName);
    }
    if (componentReleaseName) {
      res["componentReleaseName"] = boost::any(*componentReleaseName);
    }
    if (componentVersion) {
      res["componentVersion"] = boost::any(*componentVersion);
    }
    if (memoryLimit) {
      res["memoryLimit"] = boost::any(*memoryLimit);
    }
    if (memoryRequest) {
      res["memoryRequest"] = boost::any(*memoryRequest);
    }
    if (orchestrationValue) {
      res["orchestrationValue"] = boost::any(*orchestrationValue);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (storageRequest) {
      res["storageRequest"] = boost::any(*storageRequest);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CPULimit") != m.end() && !m["CPULimit"].empty()) {
      CPULimit = make_shared<string>(boost::any_cast<string>(m["CPULimit"]));
    }
    if (m.find("CPURequest") != m.end() && !m["CPURequest"].empty()) {
      CPURequest = make_shared<string>(boost::any_cast<string>(m["CPURequest"]));
    }
    if (m.find("componentName") != m.end() && !m["componentName"].empty()) {
      componentName = make_shared<string>(boost::any_cast<string>(m["componentName"]));
    }
    if (m.find("componentReleaseName") != m.end() && !m["componentReleaseName"].empty()) {
      componentReleaseName = make_shared<string>(boost::any_cast<string>(m["componentReleaseName"]));
    }
    if (m.find("componentVersion") != m.end() && !m["componentVersion"].empty()) {
      componentVersion = make_shared<string>(boost::any_cast<string>(m["componentVersion"]));
    }
    if (m.find("memoryLimit") != m.end() && !m["memoryLimit"].empty()) {
      memoryLimit = make_shared<string>(boost::any_cast<string>(m["memoryLimit"]));
    }
    if (m.find("memoryRequest") != m.end() && !m["memoryRequest"].empty()) {
      memoryRequest = make_shared<string>(boost::any_cast<string>(m["memoryRequest"]));
    }
    if (m.find("orchestrationValue") != m.end() && !m["orchestrationValue"].empty()) {
      orchestrationValue = make_shared<string>(boost::any_cast<string>(m["orchestrationValue"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("storageRequest") != m.end() && !m["storageRequest"].empty()) {
      storageRequest = make_shared<string>(boost::any_cast<string>(m["storageRequest"]));
    }
  }


  virtual ~GetResourceSnapshotResponseBodyAdpInfoComponents() = default;
};
class GetResourceSnapshotResponseBodyAdpInfo : public Darabonba::Model {
public:
  shared_ptr<string> CPURequest{};
  shared_ptr<long> componentNum{};
  shared_ptr<vector<GetResourceSnapshotResponseBodyAdpInfoComponents>> components{};
  shared_ptr<string> memoryRequest{};
  shared_ptr<long> podNum{};
  shared_ptr<string> storageRequest{};
  shared_ptr<long> workloadNum{};

  GetResourceSnapshotResponseBodyAdpInfo() {}

  explicit GetResourceSnapshotResponseBodyAdpInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (CPURequest) {
      res["CPURequest"] = boost::any(*CPURequest);
    }
    if (componentNum) {
      res["componentNum"] = boost::any(*componentNum);
    }
    if (components) {
      vector<boost::any> temp1;
      for(auto item1:*components){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["components"] = boost::any(temp1);
    }
    if (memoryRequest) {
      res["memoryRequest"] = boost::any(*memoryRequest);
    }
    if (podNum) {
      res["podNum"] = boost::any(*podNum);
    }
    if (storageRequest) {
      res["storageRequest"] = boost::any(*storageRequest);
    }
    if (workloadNum) {
      res["workloadNum"] = boost::any(*workloadNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CPURequest") != m.end() && !m["CPURequest"].empty()) {
      CPURequest = make_shared<string>(boost::any_cast<string>(m["CPURequest"]));
    }
    if (m.find("componentNum") != m.end() && !m["componentNum"].empty()) {
      componentNum = make_shared<long>(boost::any_cast<long>(m["componentNum"]));
    }
    if (m.find("components") != m.end() && !m["components"].empty()) {
      if (typeid(vector<boost::any>) == m["components"].type()) {
        vector<GetResourceSnapshotResponseBodyAdpInfoComponents> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["components"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetResourceSnapshotResponseBodyAdpInfoComponents model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        components = make_shared<vector<GetResourceSnapshotResponseBodyAdpInfoComponents>>(expect1);
      }
    }
    if (m.find("memoryRequest") != m.end() && !m["memoryRequest"].empty()) {
      memoryRequest = make_shared<string>(boost::any_cast<string>(m["memoryRequest"]));
    }
    if (m.find("podNum") != m.end() && !m["podNum"].empty()) {
      podNum = make_shared<long>(boost::any_cast<long>(m["podNum"]));
    }
    if (m.find("storageRequest") != m.end() && !m["storageRequest"].empty()) {
      storageRequest = make_shared<string>(boost::any_cast<string>(m["storageRequest"]));
    }
    if (m.find("workloadNum") != m.end() && !m["workloadNum"].empty()) {
      workloadNum = make_shared<long>(boost::any_cast<long>(m["workloadNum"]));
    }
  }


  virtual ~GetResourceSnapshotResponseBodyAdpInfo() = default;
};
class GetResourceSnapshotResponseBodyProductInfoComponents : public Darabonba::Model {
public:
  shared_ptr<string> CPULimit{};
  shared_ptr<string> CPURequest{};
  shared_ptr<string> componentName{};
  shared_ptr<string> componentReleaseName{};
  shared_ptr<string> componentVersion{};
  shared_ptr<string> memoryLimit{};
  shared_ptr<string> memoryRequest{};
  shared_ptr<string> orchestrationValue{};
  shared_ptr<string> status{};
  shared_ptr<string> storageRequest{};

  GetResourceSnapshotResponseBodyProductInfoComponents() {}

  explicit GetResourceSnapshotResponseBodyProductInfoComponents(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (CPULimit) {
      res["CPULimit"] = boost::any(*CPULimit);
    }
    if (CPURequest) {
      res["CPURequest"] = boost::any(*CPURequest);
    }
    if (componentName) {
      res["componentName"] = boost::any(*componentName);
    }
    if (componentReleaseName) {
      res["componentReleaseName"] = boost::any(*componentReleaseName);
    }
    if (componentVersion) {
      res["componentVersion"] = boost::any(*componentVersion);
    }
    if (memoryLimit) {
      res["memoryLimit"] = boost::any(*memoryLimit);
    }
    if (memoryRequest) {
      res["memoryRequest"] = boost::any(*memoryRequest);
    }
    if (orchestrationValue) {
      res["orchestrationValue"] = boost::any(*orchestrationValue);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (storageRequest) {
      res["storageRequest"] = boost::any(*storageRequest);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CPULimit") != m.end() && !m["CPULimit"].empty()) {
      CPULimit = make_shared<string>(boost::any_cast<string>(m["CPULimit"]));
    }
    if (m.find("CPURequest") != m.end() && !m["CPURequest"].empty()) {
      CPURequest = make_shared<string>(boost::any_cast<string>(m["CPURequest"]));
    }
    if (m.find("componentName") != m.end() && !m["componentName"].empty()) {
      componentName = make_shared<string>(boost::any_cast<string>(m["componentName"]));
    }
    if (m.find("componentReleaseName") != m.end() && !m["componentReleaseName"].empty()) {
      componentReleaseName = make_shared<string>(boost::any_cast<string>(m["componentReleaseName"]));
    }
    if (m.find("componentVersion") != m.end() && !m["componentVersion"].empty()) {
      componentVersion = make_shared<string>(boost::any_cast<string>(m["componentVersion"]));
    }
    if (m.find("memoryLimit") != m.end() && !m["memoryLimit"].empty()) {
      memoryLimit = make_shared<string>(boost::any_cast<string>(m["memoryLimit"]));
    }
    if (m.find("memoryRequest") != m.end() && !m["memoryRequest"].empty()) {
      memoryRequest = make_shared<string>(boost::any_cast<string>(m["memoryRequest"]));
    }
    if (m.find("orchestrationValue") != m.end() && !m["orchestrationValue"].empty()) {
      orchestrationValue = make_shared<string>(boost::any_cast<string>(m["orchestrationValue"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("storageRequest") != m.end() && !m["storageRequest"].empty()) {
      storageRequest = make_shared<string>(boost::any_cast<string>(m["storageRequest"]));
    }
  }


  virtual ~GetResourceSnapshotResponseBodyProductInfoComponents() = default;
};
class GetResourceSnapshotResponseBodyProductInfo : public Darabonba::Model {
public:
  shared_ptr<string> CPURequest{};
  shared_ptr<long> componentNum{};
  shared_ptr<vector<GetResourceSnapshotResponseBodyProductInfoComponents>> components{};
  shared_ptr<string> memoryRequest{};
  shared_ptr<long> podNum{};
  shared_ptr<string> storageRequest{};
  shared_ptr<long> workloadNum{};

  GetResourceSnapshotResponseBodyProductInfo() {}

  explicit GetResourceSnapshotResponseBodyProductInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (CPURequest) {
      res["CPURequest"] = boost::any(*CPURequest);
    }
    if (componentNum) {
      res["componentNum"] = boost::any(*componentNum);
    }
    if (components) {
      vector<boost::any> temp1;
      for(auto item1:*components){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["components"] = boost::any(temp1);
    }
    if (memoryRequest) {
      res["memoryRequest"] = boost::any(*memoryRequest);
    }
    if (podNum) {
      res["podNum"] = boost::any(*podNum);
    }
    if (storageRequest) {
      res["storageRequest"] = boost::any(*storageRequest);
    }
    if (workloadNum) {
      res["workloadNum"] = boost::any(*workloadNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CPURequest") != m.end() && !m["CPURequest"].empty()) {
      CPURequest = make_shared<string>(boost::any_cast<string>(m["CPURequest"]));
    }
    if (m.find("componentNum") != m.end() && !m["componentNum"].empty()) {
      componentNum = make_shared<long>(boost::any_cast<long>(m["componentNum"]));
    }
    if (m.find("components") != m.end() && !m["components"].empty()) {
      if (typeid(vector<boost::any>) == m["components"].type()) {
        vector<GetResourceSnapshotResponseBodyProductInfoComponents> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["components"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetResourceSnapshotResponseBodyProductInfoComponents model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        components = make_shared<vector<GetResourceSnapshotResponseBodyProductInfoComponents>>(expect1);
      }
    }
    if (m.find("memoryRequest") != m.end() && !m["memoryRequest"].empty()) {
      memoryRequest = make_shared<string>(boost::any_cast<string>(m["memoryRequest"]));
    }
    if (m.find("podNum") != m.end() && !m["podNum"].empty()) {
      podNum = make_shared<long>(boost::any_cast<long>(m["podNum"]));
    }
    if (m.find("storageRequest") != m.end() && !m["storageRequest"].empty()) {
      storageRequest = make_shared<string>(boost::any_cast<string>(m["storageRequest"]));
    }
    if (m.find("workloadNum") != m.end() && !m["workloadNum"].empty()) {
      workloadNum = make_shared<long>(boost::any_cast<long>(m["workloadNum"]));
    }
  }


  virtual ~GetResourceSnapshotResponseBodyProductInfo() = default;
};
class GetResourceSnapshotResponseBodySpecParamConfigs : public Darabonba::Model {
public:
  shared_ptr<string> componentName{};
  shared_ptr<string> componentReleaseName{};
  shared_ptr<string> componentSource{};
  shared_ptr<string> componentVersion{};
  shared_ptr<string> name{};
  shared_ptr<string> paramType{};
  shared_ptr<string> parentComponentName{};
  shared_ptr<string> parentComponentReleaseName{};
  shared_ptr<string> parentComponentVersion{};
  shared_ptr<string> value{};
  shared_ptr<string> valueType{};

  GetResourceSnapshotResponseBodySpecParamConfigs() {}

  explicit GetResourceSnapshotResponseBodySpecParamConfigs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (componentName) {
      res["componentName"] = boost::any(*componentName);
    }
    if (componentReleaseName) {
      res["componentReleaseName"] = boost::any(*componentReleaseName);
    }
    if (componentSource) {
      res["componentSource"] = boost::any(*componentSource);
    }
    if (componentVersion) {
      res["componentVersion"] = boost::any(*componentVersion);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (paramType) {
      res["paramType"] = boost::any(*paramType);
    }
    if (parentComponentName) {
      res["parentComponentName"] = boost::any(*parentComponentName);
    }
    if (parentComponentReleaseName) {
      res["parentComponentReleaseName"] = boost::any(*parentComponentReleaseName);
    }
    if (parentComponentVersion) {
      res["parentComponentVersion"] = boost::any(*parentComponentVersion);
    }
    if (value) {
      res["value"] = boost::any(*value);
    }
    if (valueType) {
      res["valueType"] = boost::any(*valueType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("componentName") != m.end() && !m["componentName"].empty()) {
      componentName = make_shared<string>(boost::any_cast<string>(m["componentName"]));
    }
    if (m.find("componentReleaseName") != m.end() && !m["componentReleaseName"].empty()) {
      componentReleaseName = make_shared<string>(boost::any_cast<string>(m["componentReleaseName"]));
    }
    if (m.find("componentSource") != m.end() && !m["componentSource"].empty()) {
      componentSource = make_shared<string>(boost::any_cast<string>(m["componentSource"]));
    }
    if (m.find("componentVersion") != m.end() && !m["componentVersion"].empty()) {
      componentVersion = make_shared<string>(boost::any_cast<string>(m["componentVersion"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("paramType") != m.end() && !m["paramType"].empty()) {
      paramType = make_shared<string>(boost::any_cast<string>(m["paramType"]));
    }
    if (m.find("parentComponentName") != m.end() && !m["parentComponentName"].empty()) {
      parentComponentName = make_shared<string>(boost::any_cast<string>(m["parentComponentName"]));
    }
    if (m.find("parentComponentReleaseName") != m.end() && !m["parentComponentReleaseName"].empty()) {
      parentComponentReleaseName = make_shared<string>(boost::any_cast<string>(m["parentComponentReleaseName"]));
    }
    if (m.find("parentComponentVersion") != m.end() && !m["parentComponentVersion"].empty()) {
      parentComponentVersion = make_shared<string>(boost::any_cast<string>(m["parentComponentVersion"]));
    }
    if (m.find("value") != m.end() && !m["value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["value"]));
    }
    if (m.find("valueType") != m.end() && !m["valueType"].empty()) {
      valueType = make_shared<string>(boost::any_cast<string>(m["valueType"]));
    }
  }


  virtual ~GetResourceSnapshotResponseBodySpecParamConfigs() = default;
};
class GetResourceSnapshotResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> CPULimit{};
  shared_ptr<string> CPURequest{};
  shared_ptr<GetResourceSnapshotResponseBodyAdpInfo> adpInfo{};
  shared_ptr<string> memoryLimit{};
  shared_ptr<string> memoryRequest{};
  shared_ptr<GetResourceSnapshotResponseBodyProductInfo> productInfo{};
  shared_ptr<vector<GetResourceSnapshotResponseBodySpecParamConfigs>> specParamConfigs{};
  shared_ptr<string> storageRequest{};

  GetResourceSnapshotResponseBody() {}

  explicit GetResourceSnapshotResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (CPULimit) {
      res["CPULimit"] = boost::any(*CPULimit);
    }
    if (CPURequest) {
      res["CPURequest"] = boost::any(*CPURequest);
    }
    if (adpInfo) {
      res["adpInfo"] = adpInfo ? boost::any(adpInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (memoryLimit) {
      res["memoryLimit"] = boost::any(*memoryLimit);
    }
    if (memoryRequest) {
      res["memoryRequest"] = boost::any(*memoryRequest);
    }
    if (productInfo) {
      res["productInfo"] = productInfo ? boost::any(productInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (specParamConfigs) {
      vector<boost::any> temp1;
      for(auto item1:*specParamConfigs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["specParamConfigs"] = boost::any(temp1);
    }
    if (storageRequest) {
      res["storageRequest"] = boost::any(*storageRequest);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CPULimit") != m.end() && !m["CPULimit"].empty()) {
      CPULimit = make_shared<string>(boost::any_cast<string>(m["CPULimit"]));
    }
    if (m.find("CPURequest") != m.end() && !m["CPURequest"].empty()) {
      CPURequest = make_shared<string>(boost::any_cast<string>(m["CPURequest"]));
    }
    if (m.find("adpInfo") != m.end() && !m["adpInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["adpInfo"].type()) {
        GetResourceSnapshotResponseBodyAdpInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["adpInfo"]));
        adpInfo = make_shared<GetResourceSnapshotResponseBodyAdpInfo>(model1);
      }
    }
    if (m.find("memoryLimit") != m.end() && !m["memoryLimit"].empty()) {
      memoryLimit = make_shared<string>(boost::any_cast<string>(m["memoryLimit"]));
    }
    if (m.find("memoryRequest") != m.end() && !m["memoryRequest"].empty()) {
      memoryRequest = make_shared<string>(boost::any_cast<string>(m["memoryRequest"]));
    }
    if (m.find("productInfo") != m.end() && !m["productInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["productInfo"].type()) {
        GetResourceSnapshotResponseBodyProductInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["productInfo"]));
        productInfo = make_shared<GetResourceSnapshotResponseBodyProductInfo>(model1);
      }
    }
    if (m.find("specParamConfigs") != m.end() && !m["specParamConfigs"].empty()) {
      if (typeid(vector<boost::any>) == m["specParamConfigs"].type()) {
        vector<GetResourceSnapshotResponseBodySpecParamConfigs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["specParamConfigs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetResourceSnapshotResponseBodySpecParamConfigs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        specParamConfigs = make_shared<vector<GetResourceSnapshotResponseBodySpecParamConfigs>>(expect1);
      }
    }
    if (m.find("storageRequest") != m.end() && !m["storageRequest"].empty()) {
      storageRequest = make_shared<string>(boost::any_cast<string>(m["storageRequest"]));
    }
  }


  virtual ~GetResourceSnapshotResponseBody() = default;
};
class GetResourceSnapshotResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetResourceSnapshotResponseBody> body{};

  GetResourceSnapshotResponse() {}

  explicit GetResourceSnapshotResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetResourceSnapshotResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetResourceSnapshotResponseBody>(model1);
      }
    }
  }


  virtual ~GetResourceSnapshotResponse() = default;
};
class GetWorkflowStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> workflowType{};
  shared_ptr<string> xuid{};

  GetWorkflowStatusRequest() {}

  explicit GetWorkflowStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (workflowType) {
      res["workflowType"] = boost::any(*workflowType);
    }
    if (xuid) {
      res["xuid"] = boost::any(*xuid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("workflowType") != m.end() && !m["workflowType"].empty()) {
      workflowType = make_shared<string>(boost::any_cast<string>(m["workflowType"]));
    }
    if (m.find("xuid") != m.end() && !m["xuid"].empty()) {
      xuid = make_shared<string>(boost::any_cast<string>(m["xuid"]));
    }
  }


  virtual ~GetWorkflowStatusRequest() = default;
};
class GetWorkflowStatusResponseBodyDataStepStatusWorkflowTasks : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> status{};

  GetWorkflowStatusResponseBodyDataStepStatusWorkflowTasks() {}

  explicit GetWorkflowStatusResponseBodyDataStepStatusWorkflowTasks(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
  }


  virtual ~GetWorkflowStatusResponseBodyDataStepStatusWorkflowTasks() = default;
};
class GetWorkflowStatusResponseBodyDataStepStatus : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> status{};
  shared_ptr<vector<GetWorkflowStatusResponseBodyDataStepStatusWorkflowTasks>> workflowTasks{};

  GetWorkflowStatusResponseBodyDataStepStatus() {}

  explicit GetWorkflowStatusResponseBodyDataStepStatus(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (workflowTasks) {
      vector<boost::any> temp1;
      for(auto item1:*workflowTasks){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["workflowTasks"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("workflowTasks") != m.end() && !m["workflowTasks"].empty()) {
      if (typeid(vector<boost::any>) == m["workflowTasks"].type()) {
        vector<GetWorkflowStatusResponseBodyDataStepStatusWorkflowTasks> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["workflowTasks"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetWorkflowStatusResponseBodyDataStepStatusWorkflowTasks model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        workflowTasks = make_shared<vector<GetWorkflowStatusResponseBodyDataStepStatusWorkflowTasks>>(expect1);
      }
    }
  }


  virtual ~GetWorkflowStatusResponseBodyDataStepStatus() = default;
};
class GetWorkflowStatusResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> status{};
  shared_ptr<vector<GetWorkflowStatusResponseBodyDataStepStatus>> stepStatus{};

  GetWorkflowStatusResponseBodyData() {}

  explicit GetWorkflowStatusResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (stepStatus) {
      vector<boost::any> temp1;
      for(auto item1:*stepStatus){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["stepStatus"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("stepStatus") != m.end() && !m["stepStatus"].empty()) {
      if (typeid(vector<boost::any>) == m["stepStatus"].type()) {
        vector<GetWorkflowStatusResponseBodyDataStepStatus> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["stepStatus"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetWorkflowStatusResponseBodyDataStepStatus model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        stepStatus = make_shared<vector<GetWorkflowStatusResponseBodyDataStepStatus>>(expect1);
      }
    }
  }


  virtual ~GetWorkflowStatusResponseBodyData() = default;
};
class GetWorkflowStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetWorkflowStatusResponseBodyData> data{};
  shared_ptr<string> msg{};

  GetWorkflowStatusResponseBody() {}

  explicit GetWorkflowStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (msg) {
      res["msg"] = boost::any(*msg);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        GetWorkflowStatusResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<GetWorkflowStatusResponseBodyData>(model1);
      }
    }
    if (m.find("msg") != m.end() && !m["msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["msg"]));
    }
  }


  virtual ~GetWorkflowStatusResponseBody() = default;
};
class GetWorkflowStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetWorkflowStatusResponseBody> body{};

  GetWorkflowStatusResponse() {}

  explicit GetWorkflowStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetWorkflowStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetWorkflowStatusResponseBody>(model1);
      }
    }
  }


  virtual ~GetWorkflowStatusResponse() = default;
};
class InitEnvironmentResourceRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessKeyID{};
  shared_ptr<string> accessKeySecret{};
  shared_ptr<string> securityToken{};

  InitEnvironmentResourceRequest() {}

  explicit InitEnvironmentResourceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessKeyID) {
      res["accessKeyID"] = boost::any(*accessKeyID);
    }
    if (accessKeySecret) {
      res["accessKeySecret"] = boost::any(*accessKeySecret);
    }
    if (securityToken) {
      res["securityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("accessKeyID") != m.end() && !m["accessKeyID"].empty()) {
      accessKeyID = make_shared<string>(boost::any_cast<string>(m["accessKeyID"]));
    }
    if (m.find("accessKeySecret") != m.end() && !m["accessKeySecret"].empty()) {
      accessKeySecret = make_shared<string>(boost::any_cast<string>(m["accessKeySecret"]));
    }
    if (m.find("securityToken") != m.end() && !m["securityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["securityToken"]));
    }
  }


  virtual ~InitEnvironmentResourceRequest() = default;
};
class InitEnvironmentResourceResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> status{};

  InitEnvironmentResourceResponseBodyData() {}

  explicit InitEnvironmentResourceResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
  }


  virtual ~InitEnvironmentResourceResponseBodyData() = default;
};
class InitEnvironmentResourceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<InitEnvironmentResourceResponseBodyData> data{};
  shared_ptr<string> msg{};

  InitEnvironmentResourceResponseBody() {}

  explicit InitEnvironmentResourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (msg) {
      res["msg"] = boost::any(*msg);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        InitEnvironmentResourceResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<InitEnvironmentResourceResponseBodyData>(model1);
      }
    }
    if (m.find("msg") != m.end() && !m["msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["msg"]));
    }
  }


  virtual ~InitEnvironmentResourceResponseBody() = default;
};
class InitEnvironmentResourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<InitEnvironmentResourceResponseBody> body{};

  InitEnvironmentResourceResponse() {}

  explicit InitEnvironmentResourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        InitEnvironmentResourceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<InitEnvironmentResourceResponseBody>(model1);
      }
    }
  }


  virtual ~InitEnvironmentResourceResponse() = default;
};
class ListComponentVersionsRequestPlatforms : public Darabonba::Model {
public:
  shared_ptr<string> architecture{};
  shared_ptr<string> os{};

  ListComponentVersionsRequestPlatforms() {}

  explicit ListComponentVersionsRequestPlatforms(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (architecture) {
      res["architecture"] = boost::any(*architecture);
    }
    if (os) {
      res["os"] = boost::any(*os);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("architecture") != m.end() && !m["architecture"].empty()) {
      architecture = make_shared<string>(boost::any_cast<string>(m["architecture"]));
    }
    if (m.find("os") != m.end() && !m["os"].empty()) {
      os = make_shared<string>(boost::any_cast<string>(m["os"]));
    }
  }


  virtual ~ListComponentVersionsRequestPlatforms() = default;
};
class ListComponentVersionsRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<vector<ListComponentVersionsRequestPlatforms>> platforms{};
  shared_ptr<string> version{};

  ListComponentVersionsRequest() {}

  explicit ListComponentVersionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNum) {
      res["pageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (platforms) {
      vector<boost::any> temp1;
      for(auto item1:*platforms){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["platforms"] = boost::any(temp1);
    }
    if (version) {
      res["version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("pageNum") != m.end() && !m["pageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["pageNum"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("platforms") != m.end() && !m["platforms"].empty()) {
      if (typeid(vector<boost::any>) == m["platforms"].type()) {
        vector<ListComponentVersionsRequestPlatforms> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["platforms"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListComponentVersionsRequestPlatforms model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        platforms = make_shared<vector<ListComponentVersionsRequestPlatforms>>(expect1);
      }
    }
    if (m.find("version") != m.end() && !m["version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["version"]));
    }
  }


  virtual ~ListComponentVersionsRequest() = default;
};
class ListComponentVersionsShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> platformsShrink{};
  shared_ptr<string> version{};

  ListComponentVersionsShrinkRequest() {}

  explicit ListComponentVersionsShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNum) {
      res["pageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (platformsShrink) {
      res["platforms"] = boost::any(*platformsShrink);
    }
    if (version) {
      res["version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("pageNum") != m.end() && !m["pageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["pageNum"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("platforms") != m.end() && !m["platforms"].empty()) {
      platformsShrink = make_shared<string>(boost::any_cast<string>(m["platforms"]));
    }
    if (m.find("version") != m.end() && !m["version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["version"]));
    }
  }


  virtual ~ListComponentVersionsShrinkRequest() = default;
};
class ListComponentVersionsResponseBodyDataList : public Darabonba::Model {
public:
  shared_ptr<string> appVersion{};
  shared_ptr<string> componentName{};
  shared_ptr<string> componentUID{};
  shared_ptr<string> description{};
  shared_ptr<string> documents{};
  shared_ptr<string> imagesMapping{};
  shared_ptr<string> orchestrationValues{};
  shared_ptr<string> packageURL{};
  shared_ptr<bool> parentComponent{};
  shared_ptr<string> readme{};
  shared_ptr<string> resources{};
  shared_ptr<string> uid{};
  shared_ptr<string> version{};

  ListComponentVersionsResponseBodyDataList() {}

  explicit ListComponentVersionsResponseBodyDataList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appVersion) {
      res["appVersion"] = boost::any(*appVersion);
    }
    if (componentName) {
      res["componentName"] = boost::any(*componentName);
    }
    if (componentUID) {
      res["componentUID"] = boost::any(*componentUID);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (documents) {
      res["documents"] = boost::any(*documents);
    }
    if (imagesMapping) {
      res["imagesMapping"] = boost::any(*imagesMapping);
    }
    if (orchestrationValues) {
      res["orchestrationValues"] = boost::any(*orchestrationValues);
    }
    if (packageURL) {
      res["packageURL"] = boost::any(*packageURL);
    }
    if (parentComponent) {
      res["parentComponent"] = boost::any(*parentComponent);
    }
    if (readme) {
      res["readme"] = boost::any(*readme);
    }
    if (resources) {
      res["resources"] = boost::any(*resources);
    }
    if (uid) {
      res["uid"] = boost::any(*uid);
    }
    if (version) {
      res["version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("appVersion") != m.end() && !m["appVersion"].empty()) {
      appVersion = make_shared<string>(boost::any_cast<string>(m["appVersion"]));
    }
    if (m.find("componentName") != m.end() && !m["componentName"].empty()) {
      componentName = make_shared<string>(boost::any_cast<string>(m["componentName"]));
    }
    if (m.find("componentUID") != m.end() && !m["componentUID"].empty()) {
      componentUID = make_shared<string>(boost::any_cast<string>(m["componentUID"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("documents") != m.end() && !m["documents"].empty()) {
      documents = make_shared<string>(boost::any_cast<string>(m["documents"]));
    }
    if (m.find("imagesMapping") != m.end() && !m["imagesMapping"].empty()) {
      imagesMapping = make_shared<string>(boost::any_cast<string>(m["imagesMapping"]));
    }
    if (m.find("orchestrationValues") != m.end() && !m["orchestrationValues"].empty()) {
      orchestrationValues = make_shared<string>(boost::any_cast<string>(m["orchestrationValues"]));
    }
    if (m.find("packageURL") != m.end() && !m["packageURL"].empty()) {
      packageURL = make_shared<string>(boost::any_cast<string>(m["packageURL"]));
    }
    if (m.find("parentComponent") != m.end() && !m["parentComponent"].empty()) {
      parentComponent = make_shared<bool>(boost::any_cast<bool>(m["parentComponent"]));
    }
    if (m.find("readme") != m.end() && !m["readme"].empty()) {
      readme = make_shared<string>(boost::any_cast<string>(m["readme"]));
    }
    if (m.find("resources") != m.end() && !m["resources"].empty()) {
      resources = make_shared<string>(boost::any_cast<string>(m["resources"]));
    }
    if (m.find("uid") != m.end() && !m["uid"].empty()) {
      uid = make_shared<string>(boost::any_cast<string>(m["uid"]));
    }
    if (m.find("version") != m.end() && !m["version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["version"]));
    }
  }


  virtual ~ListComponentVersionsResponseBodyDataList() = default;
};
class ListComponentVersionsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ListComponentVersionsResponseBodyDataList>> list{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> total{};

  ListComponentVersionsResponseBodyData() {}

  explicit ListComponentVersionsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (list) {
      vector<boost::any> temp1;
      for(auto item1:*list){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["list"] = boost::any(temp1);
    }
    if (pageNum) {
      res["pageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (total) {
      res["total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("list") != m.end() && !m["list"].empty()) {
      if (typeid(vector<boost::any>) == m["list"].type()) {
        vector<ListComponentVersionsResponseBodyDataList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["list"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListComponentVersionsResponseBodyDataList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        list = make_shared<vector<ListComponentVersionsResponseBodyDataList>>(expect1);
      }
    }
    if (m.find("pageNum") != m.end() && !m["pageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["pageNum"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("total") != m.end() && !m["total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["total"]));
    }
  }


  virtual ~ListComponentVersionsResponseBodyData() = default;
};
class ListComponentVersionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};
  shared_ptr<ListComponentVersionsResponseBodyData> data{};
  shared_ptr<string> msg{};

  ListComponentVersionsResponseBody() {}

  explicit ListComponentVersionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (msg) {
      res["msg"] = boost::any(*msg);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        ListComponentVersionsResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<ListComponentVersionsResponseBodyData>(model1);
      }
    }
    if (m.find("msg") != m.end() && !m["msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["msg"]));
    }
  }


  virtual ~ListComponentVersionsResponseBody() = default;
};
class ListComponentVersionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListComponentVersionsResponseBody> body{};

  ListComponentVersionsResponse() {}

  explicit ListComponentVersionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListComponentVersionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListComponentVersionsResponseBody>(model1);
      }
    }
  }


  virtual ~ListComponentVersionsResponse() = default;
};
class ListComponentsRequest : public Darabonba::Model {
public:
  shared_ptr<string> category{};
  shared_ptr<string> fuzzy{};
  shared_ptr<string> name{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<bool> public_{};

  ListComponentsRequest() {}

  explicit ListComponentsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (category) {
      res["category"] = boost::any(*category);
    }
    if (fuzzy) {
      res["fuzzy"] = boost::any(*fuzzy);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (pageNum) {
      res["pageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (public_) {
      res["public"] = boost::any(*public_);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("category") != m.end() && !m["category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["category"]));
    }
    if (m.find("fuzzy") != m.end() && !m["fuzzy"].empty()) {
      fuzzy = make_shared<string>(boost::any_cast<string>(m["fuzzy"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("pageNum") != m.end() && !m["pageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["pageNum"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("public") != m.end() && !m["public"].empty()) {
      public_ = make_shared<bool>(boost::any_cast<bool>(m["public"]));
    }
  }


  virtual ~ListComponentsRequest() = default;
};
class ListComponentsResponseBodyDataListAnnotations : public Darabonba::Model {
public:
  shared_ptr<string> annotations{};

  ListComponentsResponseBodyDataListAnnotations() {}

  explicit ListComponentsResponseBodyDataListAnnotations(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (annotations) {
      res["annotations"] = boost::any(*annotations);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("annotations") != m.end() && !m["annotations"].empty()) {
      annotations = make_shared<string>(boost::any_cast<string>(m["annotations"]));
    }
  }


  virtual ~ListComponentsResponseBodyDataListAnnotations() = default;
};
class ListComponentsResponseBodyDataList : public Darabonba::Model {
public:
  shared_ptr<ListComponentsResponseBodyDataListAnnotations> annotations{};
  shared_ptr<string> category{};
  shared_ptr<string> description{};
  shared_ptr<string> documents{};
  shared_ptr<string> name{};
  shared_ptr<string> provider{};
  shared_ptr<bool> public_{};
  shared_ptr<bool> singleton{};
  shared_ptr<string> source{};
  shared_ptr<string> uid{};

  ListComponentsResponseBodyDataList() {}

  explicit ListComponentsResponseBodyDataList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (annotations) {
      res["annotations"] = annotations ? boost::any(annotations->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (category) {
      res["category"] = boost::any(*category);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (documents) {
      res["documents"] = boost::any(*documents);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (provider) {
      res["provider"] = boost::any(*provider);
    }
    if (public_) {
      res["public"] = boost::any(*public_);
    }
    if (singleton) {
      res["singleton"] = boost::any(*singleton);
    }
    if (source) {
      res["source"] = boost::any(*source);
    }
    if (uid) {
      res["uid"] = boost::any(*uid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("annotations") != m.end() && !m["annotations"].empty()) {
      if (typeid(map<string, boost::any>) == m["annotations"].type()) {
        ListComponentsResponseBodyDataListAnnotations model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["annotations"]));
        annotations = make_shared<ListComponentsResponseBodyDataListAnnotations>(model1);
      }
    }
    if (m.find("category") != m.end() && !m["category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["category"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("documents") != m.end() && !m["documents"].empty()) {
      documents = make_shared<string>(boost::any_cast<string>(m["documents"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("provider") != m.end() && !m["provider"].empty()) {
      provider = make_shared<string>(boost::any_cast<string>(m["provider"]));
    }
    if (m.find("public") != m.end() && !m["public"].empty()) {
      public_ = make_shared<bool>(boost::any_cast<bool>(m["public"]));
    }
    if (m.find("singleton") != m.end() && !m["singleton"].empty()) {
      singleton = make_shared<bool>(boost::any_cast<bool>(m["singleton"]));
    }
    if (m.find("source") != m.end() && !m["source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["source"]));
    }
    if (m.find("uid") != m.end() && !m["uid"].empty()) {
      uid = make_shared<string>(boost::any_cast<string>(m["uid"]));
    }
  }


  virtual ~ListComponentsResponseBodyDataList() = default;
};
class ListComponentsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ListComponentsResponseBodyDataList>> list{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> total{};

  ListComponentsResponseBodyData() {}

  explicit ListComponentsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (list) {
      vector<boost::any> temp1;
      for(auto item1:*list){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["list"] = boost::any(temp1);
    }
    if (pageNum) {
      res["pageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (total) {
      res["total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("list") != m.end() && !m["list"].empty()) {
      if (typeid(vector<boost::any>) == m["list"].type()) {
        vector<ListComponentsResponseBodyDataList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["list"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListComponentsResponseBodyDataList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        list = make_shared<vector<ListComponentsResponseBodyDataList>>(expect1);
      }
    }
    if (m.find("pageNum") != m.end() && !m["pageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["pageNum"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("total") != m.end() && !m["total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["total"]));
    }
  }


  virtual ~ListComponentsResponseBodyData() = default;
};
class ListComponentsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<ListComponentsResponseBodyData> data{};
  shared_ptr<string> msg{};

  ListComponentsResponseBody() {}

  explicit ListComponentsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (msg) {
      res["msg"] = boost::any(*msg);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        ListComponentsResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<ListComponentsResponseBodyData>(model1);
      }
    }
    if (m.find("msg") != m.end() && !m["msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["msg"]));
    }
  }


  virtual ~ListComponentsResponseBody() = default;
};
class ListComponentsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListComponentsResponseBody> body{};

  ListComponentsResponse() {}

  explicit ListComponentsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListComponentsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListComponentsResponseBody>(model1);
      }
    }
  }


  virtual ~ListComponentsResponse() = default;
};
class ListDeliveryInstanceChangeRecordsResponseBodyDataEnvNodeInfo : public Darabonba::Model {
public:
  shared_ptr<string> capacity{};
  shared_ptr<string> cpu{};
  shared_ptr<string> identifier{};
  shared_ptr<map<string, boost::any>> label{};
  shared_ptr<string> memory{};
  shared_ptr<string> name{};
  shared_ptr<string> privateIP{};
  shared_ptr<map<string, boost::any>> taints{};

  ListDeliveryInstanceChangeRecordsResponseBodyDataEnvNodeInfo() {}

  explicit ListDeliveryInstanceChangeRecordsResponseBodyDataEnvNodeInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (capacity) {
      res["capacity"] = boost::any(*capacity);
    }
    if (cpu) {
      res["cpu"] = boost::any(*cpu);
    }
    if (identifier) {
      res["identifier"] = boost::any(*identifier);
    }
    if (label) {
      res["label"] = boost::any(*label);
    }
    if (memory) {
      res["memory"] = boost::any(*memory);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (privateIP) {
      res["privateIP"] = boost::any(*privateIP);
    }
    if (taints) {
      res["taints"] = boost::any(*taints);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("capacity") != m.end() && !m["capacity"].empty()) {
      capacity = make_shared<string>(boost::any_cast<string>(m["capacity"]));
    }
    if (m.find("cpu") != m.end() && !m["cpu"].empty()) {
      cpu = make_shared<string>(boost::any_cast<string>(m["cpu"]));
    }
    if (m.find("identifier") != m.end() && !m["identifier"].empty()) {
      identifier = make_shared<string>(boost::any_cast<string>(m["identifier"]));
    }
    if (m.find("label") != m.end() && !m["label"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["label"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      label = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("memory") != m.end() && !m["memory"].empty()) {
      memory = make_shared<string>(boost::any_cast<string>(m["memory"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("privateIP") != m.end() && !m["privateIP"].empty()) {
      privateIP = make_shared<string>(boost::any_cast<string>(m["privateIP"]));
    }
    if (m.find("taints") != m.end() && !m["taints"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["taints"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      taints = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~ListDeliveryInstanceChangeRecordsResponseBodyDataEnvNodeInfo() = default;
};
class ListDeliveryInstanceChangeRecordsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> deliverableUID{};
  shared_ptr<map<string, boost::any>> envChangeRecords{};
  shared_ptr<vector<ListDeliveryInstanceChangeRecordsResponseBodyDataEnvNodeInfo>> envNodeInfo{};
  shared_ptr<string> envPackageConfig{};
  shared_ptr<string> originDeliverableUID{};
  shared_ptr<string> uid{};

  ListDeliveryInstanceChangeRecordsResponseBodyData() {}

  explicit ListDeliveryInstanceChangeRecordsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deliverableUID) {
      res["deliverableUID"] = boost::any(*deliverableUID);
    }
    if (envChangeRecords) {
      res["envChangeRecords"] = boost::any(*envChangeRecords);
    }
    if (envNodeInfo) {
      vector<boost::any> temp1;
      for(auto item1:*envNodeInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["envNodeInfo"] = boost::any(temp1);
    }
    if (envPackageConfig) {
      res["envPackageConfig"] = boost::any(*envPackageConfig);
    }
    if (originDeliverableUID) {
      res["originDeliverableUID"] = boost::any(*originDeliverableUID);
    }
    if (uid) {
      res["uid"] = boost::any(*uid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("deliverableUID") != m.end() && !m["deliverableUID"].empty()) {
      deliverableUID = make_shared<string>(boost::any_cast<string>(m["deliverableUID"]));
    }
    if (m.find("envChangeRecords") != m.end() && !m["envChangeRecords"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["envChangeRecords"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      envChangeRecords = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("envNodeInfo") != m.end() && !m["envNodeInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["envNodeInfo"].type()) {
        vector<ListDeliveryInstanceChangeRecordsResponseBodyDataEnvNodeInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["envNodeInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListDeliveryInstanceChangeRecordsResponseBodyDataEnvNodeInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        envNodeInfo = make_shared<vector<ListDeliveryInstanceChangeRecordsResponseBodyDataEnvNodeInfo>>(expect1);
      }
    }
    if (m.find("envPackageConfig") != m.end() && !m["envPackageConfig"].empty()) {
      envPackageConfig = make_shared<string>(boost::any_cast<string>(m["envPackageConfig"]));
    }
    if (m.find("originDeliverableUID") != m.end() && !m["originDeliverableUID"].empty()) {
      originDeliverableUID = make_shared<string>(boost::any_cast<string>(m["originDeliverableUID"]));
    }
    if (m.find("uid") != m.end() && !m["uid"].empty()) {
      uid = make_shared<string>(boost::any_cast<string>(m["uid"]));
    }
  }


  virtual ~ListDeliveryInstanceChangeRecordsResponseBodyData() = default;
};
class ListDeliveryInstanceChangeRecordsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<ListDeliveryInstanceChangeRecordsResponseBodyData>> data{};
  shared_ptr<string> msg{};

  ListDeliveryInstanceChangeRecordsResponseBody() {}

  explicit ListDeliveryInstanceChangeRecordsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["data"] = boost::any(temp1);
    }
    if (msg) {
      res["msg"] = boost::any(*msg);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(vector<boost::any>) == m["data"].type()) {
        vector<ListDeliveryInstanceChangeRecordsResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListDeliveryInstanceChangeRecordsResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListDeliveryInstanceChangeRecordsResponseBodyData>>(expect1);
      }
    }
    if (m.find("msg") != m.end() && !m["msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["msg"]));
    }
  }


  virtual ~ListDeliveryInstanceChangeRecordsResponseBody() = default;
};
class ListDeliveryInstanceChangeRecordsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListDeliveryInstanceChangeRecordsResponseBody> body{};

  ListDeliveryInstanceChangeRecordsResponse() {}

  explicit ListDeliveryInstanceChangeRecordsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListDeliveryInstanceChangeRecordsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListDeliveryInstanceChangeRecordsResponseBody>(model1);
      }
    }
  }


  virtual ~ListDeliveryInstanceChangeRecordsResponse() = default;
};
class ListDeliveryPackageRequest : public Darabonba::Model {
public:
  shared_ptr<string> deliverableUID{};
  shared_ptr<string> platform{};

  ListDeliveryPackageRequest() {}

  explicit ListDeliveryPackageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deliverableUID) {
      res["deliverableUID"] = boost::any(*deliverableUID);
    }
    if (platform) {
      res["platform"] = boost::any(*platform);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("deliverableUID") != m.end() && !m["deliverableUID"].empty()) {
      deliverableUID = make_shared<string>(boost::any_cast<string>(m["deliverableUID"]));
    }
    if (m.find("platform") != m.end() && !m["platform"].empty()) {
      platform = make_shared<string>(boost::any_cast<string>(m["platform"]));
    }
  }


  virtual ~ListDeliveryPackageRequest() = default;
};
class ListDeliveryPackageResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> deliverableUID{};
  shared_ptr<string> originDeliverableUID{};
  shared_ptr<string> packageContentType{};
  shared_ptr<string> packageSize{};
  shared_ptr<string> packageStatus{};
  shared_ptr<string> packageType{};
  shared_ptr<string> packageUID{};
  shared_ptr<string> packageURL{};
  shared_ptr<string> platform{};

  ListDeliveryPackageResponseBodyData() {}

  explicit ListDeliveryPackageResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deliverableUID) {
      res["deliverableUID"] = boost::any(*deliverableUID);
    }
    if (originDeliverableUID) {
      res["originDeliverableUID"] = boost::any(*originDeliverableUID);
    }
    if (packageContentType) {
      res["packageContentType"] = boost::any(*packageContentType);
    }
    if (packageSize) {
      res["packageSize"] = boost::any(*packageSize);
    }
    if (packageStatus) {
      res["packageStatus"] = boost::any(*packageStatus);
    }
    if (packageType) {
      res["packageType"] = boost::any(*packageType);
    }
    if (packageUID) {
      res["packageUID"] = boost::any(*packageUID);
    }
    if (packageURL) {
      res["packageURL"] = boost::any(*packageURL);
    }
    if (platform) {
      res["platform"] = boost::any(*platform);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("deliverableUID") != m.end() && !m["deliverableUID"].empty()) {
      deliverableUID = make_shared<string>(boost::any_cast<string>(m["deliverableUID"]));
    }
    if (m.find("originDeliverableUID") != m.end() && !m["originDeliverableUID"].empty()) {
      originDeliverableUID = make_shared<string>(boost::any_cast<string>(m["originDeliverableUID"]));
    }
    if (m.find("packageContentType") != m.end() && !m["packageContentType"].empty()) {
      packageContentType = make_shared<string>(boost::any_cast<string>(m["packageContentType"]));
    }
    if (m.find("packageSize") != m.end() && !m["packageSize"].empty()) {
      packageSize = make_shared<string>(boost::any_cast<string>(m["packageSize"]));
    }
    if (m.find("packageStatus") != m.end() && !m["packageStatus"].empty()) {
      packageStatus = make_shared<string>(boost::any_cast<string>(m["packageStatus"]));
    }
    if (m.find("packageType") != m.end() && !m["packageType"].empty()) {
      packageType = make_shared<string>(boost::any_cast<string>(m["packageType"]));
    }
    if (m.find("packageUID") != m.end() && !m["packageUID"].empty()) {
      packageUID = make_shared<string>(boost::any_cast<string>(m["packageUID"]));
    }
    if (m.find("packageURL") != m.end() && !m["packageURL"].empty()) {
      packageURL = make_shared<string>(boost::any_cast<string>(m["packageURL"]));
    }
    if (m.find("platform") != m.end() && !m["platform"].empty()) {
      platform = make_shared<string>(boost::any_cast<string>(m["platform"]));
    }
  }


  virtual ~ListDeliveryPackageResponseBodyData() = default;
};
class ListDeliveryPackageResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<ListDeliveryPackageResponseBodyData>> data{};
  shared_ptr<string> msg{};

  ListDeliveryPackageResponseBody() {}

  explicit ListDeliveryPackageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["data"] = boost::any(temp1);
    }
    if (msg) {
      res["msg"] = boost::any(*msg);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(vector<boost::any>) == m["data"].type()) {
        vector<ListDeliveryPackageResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListDeliveryPackageResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListDeliveryPackageResponseBodyData>>(expect1);
      }
    }
    if (m.find("msg") != m.end() && !m["msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["msg"]));
    }
  }


  virtual ~ListDeliveryPackageResponseBody() = default;
};
class ListDeliveryPackageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListDeliveryPackageResponseBody> body{};

  ListDeliveryPackageResponse() {}

  explicit ListDeliveryPackageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListDeliveryPackageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListDeliveryPackageResponseBody>(model1);
      }
    }
  }


  virtual ~ListDeliveryPackageResponse() = default;
};
class ListEnvironmentLicensesRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> scope{};
  shared_ptr<string> type{};

  ListEnvironmentLicensesRequest() {}

  explicit ListEnvironmentLicensesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNum) {
      res["pageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (scope) {
      res["scope"] = boost::any(*scope);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("pageNum") != m.end() && !m["pageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["pageNum"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("scope") != m.end() && !m["scope"].empty()) {
      scope = make_shared<string>(boost::any_cast<string>(m["scope"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~ListEnvironmentLicensesRequest() = default;
};
class ListEnvironmentLicensesResponseBodyDataListLicenseQuotaClusterQuota : public Darabonba::Model {
public:
  shared_ptr<long> cpuCoreLimit{};

  ListEnvironmentLicensesResponseBodyDataListLicenseQuotaClusterQuota() {}

  explicit ListEnvironmentLicensesResponseBodyDataListLicenseQuotaClusterQuota(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cpuCoreLimit) {
      res["cpuCoreLimit"] = boost::any(*cpuCoreLimit);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("cpuCoreLimit") != m.end() && !m["cpuCoreLimit"].empty()) {
      cpuCoreLimit = make_shared<long>(boost::any_cast<long>(m["cpuCoreLimit"]));
    }
  }


  virtual ~ListEnvironmentLicensesResponseBodyDataListLicenseQuotaClusterQuota() = default;
};
class ListEnvironmentLicensesResponseBodyDataListLicenseQuotaComponentQuotas : public Darabonba::Model {
public:
  shared_ptr<string> componentName{};
  shared_ptr<string> componentSource{};
  shared_ptr<long> instanceLimit{};

  ListEnvironmentLicensesResponseBodyDataListLicenseQuotaComponentQuotas() {}

  explicit ListEnvironmentLicensesResponseBodyDataListLicenseQuotaComponentQuotas(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (componentName) {
      res["componentName"] = boost::any(*componentName);
    }
    if (componentSource) {
      res["componentSource"] = boost::any(*componentSource);
    }
    if (instanceLimit) {
      res["instanceLimit"] = boost::any(*instanceLimit);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("componentName") != m.end() && !m["componentName"].empty()) {
      componentName = make_shared<string>(boost::any_cast<string>(m["componentName"]));
    }
    if (m.find("componentSource") != m.end() && !m["componentSource"].empty()) {
      componentSource = make_shared<string>(boost::any_cast<string>(m["componentSource"]));
    }
    if (m.find("instanceLimit") != m.end() && !m["instanceLimit"].empty()) {
      instanceLimit = make_shared<long>(boost::any_cast<long>(m["instanceLimit"]));
    }
  }


  virtual ~ListEnvironmentLicensesResponseBodyDataListLicenseQuotaComponentQuotas() = default;
};
class ListEnvironmentLicensesResponseBodyDataListLicenseQuotaCustomQuotas : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  ListEnvironmentLicensesResponseBodyDataListLicenseQuotaCustomQuotas() {}

  explicit ListEnvironmentLicensesResponseBodyDataListLicenseQuotaCustomQuotas(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (key) {
      res["key"] = boost::any(*key);
    }
    if (value) {
      res["value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("key") != m.end() && !m["key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["key"]));
    }
    if (m.find("value") != m.end() && !m["value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["value"]));
    }
  }


  virtual ~ListEnvironmentLicensesResponseBodyDataListLicenseQuotaCustomQuotas() = default;
};
class ListEnvironmentLicensesResponseBodyDataListLicenseQuota : public Darabonba::Model {
public:
  shared_ptr<ListEnvironmentLicensesResponseBodyDataListLicenseQuotaClusterQuota> clusterQuota{};
  shared_ptr<vector<ListEnvironmentLicensesResponseBodyDataListLicenseQuotaComponentQuotas>> componentQuotas{};
  shared_ptr<vector<ListEnvironmentLicensesResponseBodyDataListLicenseQuotaCustomQuotas>> customQuotas{};

  ListEnvironmentLicensesResponseBodyDataListLicenseQuota() {}

  explicit ListEnvironmentLicensesResponseBodyDataListLicenseQuota(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterQuota) {
      res["clusterQuota"] = clusterQuota ? boost::any(clusterQuota->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (componentQuotas) {
      vector<boost::any> temp1;
      for(auto item1:*componentQuotas){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["componentQuotas"] = boost::any(temp1);
    }
    if (customQuotas) {
      vector<boost::any> temp1;
      for(auto item1:*customQuotas){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["customQuotas"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("clusterQuota") != m.end() && !m["clusterQuota"].empty()) {
      if (typeid(map<string, boost::any>) == m["clusterQuota"].type()) {
        ListEnvironmentLicensesResponseBodyDataListLicenseQuotaClusterQuota model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["clusterQuota"]));
        clusterQuota = make_shared<ListEnvironmentLicensesResponseBodyDataListLicenseQuotaClusterQuota>(model1);
      }
    }
    if (m.find("componentQuotas") != m.end() && !m["componentQuotas"].empty()) {
      if (typeid(vector<boost::any>) == m["componentQuotas"].type()) {
        vector<ListEnvironmentLicensesResponseBodyDataListLicenseQuotaComponentQuotas> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["componentQuotas"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListEnvironmentLicensesResponseBodyDataListLicenseQuotaComponentQuotas model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        componentQuotas = make_shared<vector<ListEnvironmentLicensesResponseBodyDataListLicenseQuotaComponentQuotas>>(expect1);
      }
    }
    if (m.find("customQuotas") != m.end() && !m["customQuotas"].empty()) {
      if (typeid(vector<boost::any>) == m["customQuotas"].type()) {
        vector<ListEnvironmentLicensesResponseBodyDataListLicenseQuotaCustomQuotas> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["customQuotas"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListEnvironmentLicensesResponseBodyDataListLicenseQuotaCustomQuotas model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        customQuotas = make_shared<vector<ListEnvironmentLicensesResponseBodyDataListLicenseQuotaCustomQuotas>>(expect1);
      }
    }
  }


  virtual ~ListEnvironmentLicensesResponseBodyDataListLicenseQuota() = default;
};
class ListEnvironmentLicensesResponseBodyDataList : public Darabonba::Model {
public:
  shared_ptr<string> expireTime{};
  shared_ptr<string> licenseKey{};
  shared_ptr<ListEnvironmentLicensesResponseBodyDataListLicenseQuota> licenseQuota{};
  shared_ptr<string> productVersionUID{};
  shared_ptr<string> rejectReason{};
  shared_ptr<string> scope{};
  shared_ptr<string> status{};
  shared_ptr<string> type{};
  shared_ptr<string> uid{};

  ListEnvironmentLicensesResponseBodyDataList() {}

  explicit ListEnvironmentLicensesResponseBodyDataList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (expireTime) {
      res["expireTime"] = boost::any(*expireTime);
    }
    if (licenseKey) {
      res["licenseKey"] = boost::any(*licenseKey);
    }
    if (licenseQuota) {
      res["licenseQuota"] = licenseQuota ? boost::any(licenseQuota->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (productVersionUID) {
      res["productVersionUID"] = boost::any(*productVersionUID);
    }
    if (rejectReason) {
      res["rejectReason"] = boost::any(*rejectReason);
    }
    if (scope) {
      res["scope"] = boost::any(*scope);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (uid) {
      res["uid"] = boost::any(*uid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("expireTime") != m.end() && !m["expireTime"].empty()) {
      expireTime = make_shared<string>(boost::any_cast<string>(m["expireTime"]));
    }
    if (m.find("licenseKey") != m.end() && !m["licenseKey"].empty()) {
      licenseKey = make_shared<string>(boost::any_cast<string>(m["licenseKey"]));
    }
    if (m.find("licenseQuota") != m.end() && !m["licenseQuota"].empty()) {
      if (typeid(map<string, boost::any>) == m["licenseQuota"].type()) {
        ListEnvironmentLicensesResponseBodyDataListLicenseQuota model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["licenseQuota"]));
        licenseQuota = make_shared<ListEnvironmentLicensesResponseBodyDataListLicenseQuota>(model1);
      }
    }
    if (m.find("productVersionUID") != m.end() && !m["productVersionUID"].empty()) {
      productVersionUID = make_shared<string>(boost::any_cast<string>(m["productVersionUID"]));
    }
    if (m.find("rejectReason") != m.end() && !m["rejectReason"].empty()) {
      rejectReason = make_shared<string>(boost::any_cast<string>(m["rejectReason"]));
    }
    if (m.find("scope") != m.end() && !m["scope"].empty()) {
      scope = make_shared<string>(boost::any_cast<string>(m["scope"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("uid") != m.end() && !m["uid"].empty()) {
      uid = make_shared<string>(boost::any_cast<string>(m["uid"]));
    }
  }


  virtual ~ListEnvironmentLicensesResponseBodyDataList() = default;
};
class ListEnvironmentLicensesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ListEnvironmentLicensesResponseBodyDataList>> list{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> total{};

  ListEnvironmentLicensesResponseBodyData() {}

  explicit ListEnvironmentLicensesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (list) {
      vector<boost::any> temp1;
      for(auto item1:*list){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["list"] = boost::any(temp1);
    }
    if (pageNum) {
      res["pageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (total) {
      res["total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("list") != m.end() && !m["list"].empty()) {
      if (typeid(vector<boost::any>) == m["list"].type()) {
        vector<ListEnvironmentLicensesResponseBodyDataList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["list"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListEnvironmentLicensesResponseBodyDataList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        list = make_shared<vector<ListEnvironmentLicensesResponseBodyDataList>>(expect1);
      }
    }
    if (m.find("pageNum") != m.end() && !m["pageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["pageNum"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("total") != m.end() && !m["total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["total"]));
    }
  }


  virtual ~ListEnvironmentLicensesResponseBodyData() = default;
};
class ListEnvironmentLicensesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<ListEnvironmentLicensesResponseBodyData> data{};
  shared_ptr<string> msg{};

  ListEnvironmentLicensesResponseBody() {}

  explicit ListEnvironmentLicensesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (msg) {
      res["msg"] = boost::any(*msg);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        ListEnvironmentLicensesResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<ListEnvironmentLicensesResponseBodyData>(model1);
      }
    }
    if (m.find("msg") != m.end() && !m["msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["msg"]));
    }
  }


  virtual ~ListEnvironmentLicensesResponseBody() = default;
};
class ListEnvironmentLicensesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListEnvironmentLicensesResponseBody> body{};

  ListEnvironmentLicensesResponse() {}

  explicit ListEnvironmentLicensesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListEnvironmentLicensesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListEnvironmentLicensesResponseBody>(model1);
      }
    }
  }


  virtual ~ListEnvironmentLicensesResponse() = default;
};
class ListEnvironmentNodesRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};

  ListEnvironmentNodesRequest() {}

  explicit ListEnvironmentNodesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNum) {
      res["pageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("pageNum") != m.end() && !m["pageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["pageNum"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
  }


  virtual ~ListEnvironmentNodesRequest() = default;
};
class ListEnvironmentNodesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<InstanceInfo>> list{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> total{};

  ListEnvironmentNodesResponseBodyData() {}

  explicit ListEnvironmentNodesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (list) {
      vector<boost::any> temp1;
      for(auto item1:*list){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["list"] = boost::any(temp1);
    }
    if (pageNum) {
      res["pageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (total) {
      res["total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("list") != m.end() && !m["list"].empty()) {
      if (typeid(vector<boost::any>) == m["list"].type()) {
        vector<InstanceInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["list"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            InstanceInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        list = make_shared<vector<InstanceInfo>>(expect1);
      }
    }
    if (m.find("pageNum") != m.end() && !m["pageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["pageNum"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("total") != m.end() && !m["total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["total"]));
    }
  }


  virtual ~ListEnvironmentNodesResponseBodyData() = default;
};
class ListEnvironmentNodesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<ListEnvironmentNodesResponseBodyData> data{};
  shared_ptr<string> msg{};

  ListEnvironmentNodesResponseBody() {}

  explicit ListEnvironmentNodesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (msg) {
      res["msg"] = boost::any(*msg);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        ListEnvironmentNodesResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<ListEnvironmentNodesResponseBodyData>(model1);
      }
    }
    if (m.find("msg") != m.end() && !m["msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["msg"]));
    }
  }


  virtual ~ListEnvironmentNodesResponseBody() = default;
};
class ListEnvironmentNodesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListEnvironmentNodesResponseBody> body{};

  ListEnvironmentNodesResponse() {}

  explicit ListEnvironmentNodesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListEnvironmentNodesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListEnvironmentNodesResponseBody>(model1);
      }
    }
  }


  virtual ~ListEnvironmentNodesResponse() = default;
};
class ListEnvironmentTunnelsResponseBodyDataListTunnelConfig : public Darabonba::Model {
public:
  shared_ptr<string> hostname{};
  shared_ptr<string> password{};
  shared_ptr<string> regionId{};
  shared_ptr<long> sshPort{};
  shared_ptr<string> username{};
  shared_ptr<string> vpcId{};

  ListEnvironmentTunnelsResponseBodyDataListTunnelConfig() {}

  explicit ListEnvironmentTunnelsResponseBodyDataListTunnelConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (hostname) {
      res["hostname"] = boost::any(*hostname);
    }
    if (password) {
      res["password"] = boost::any(*password);
    }
    if (regionId) {
      res["regionId"] = boost::any(*regionId);
    }
    if (sshPort) {
      res["sshPort"] = boost::any(*sshPort);
    }
    if (username) {
      res["username"] = boost::any(*username);
    }
    if (vpcId) {
      res["vpcId"] = boost::any(*vpcId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("hostname") != m.end() && !m["hostname"].empty()) {
      hostname = make_shared<string>(boost::any_cast<string>(m["hostname"]));
    }
    if (m.find("password") != m.end() && !m["password"].empty()) {
      password = make_shared<string>(boost::any_cast<string>(m["password"]));
    }
    if (m.find("regionId") != m.end() && !m["regionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["regionId"]));
    }
    if (m.find("sshPort") != m.end() && !m["sshPort"].empty()) {
      sshPort = make_shared<long>(boost::any_cast<long>(m["sshPort"]));
    }
    if (m.find("username") != m.end() && !m["username"].empty()) {
      username = make_shared<string>(boost::any_cast<string>(m["username"]));
    }
    if (m.find("vpcId") != m.end() && !m["vpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["vpcId"]));
    }
  }


  virtual ~ListEnvironmentTunnelsResponseBodyDataListTunnelConfig() = default;
};
class ListEnvironmentTunnelsResponseBodyDataList : public Darabonba::Model {
public:
  shared_ptr<ListEnvironmentTunnelsResponseBodyDataListTunnelConfig> tunnelConfig{};
  shared_ptr<string> tunnelType{};

  ListEnvironmentTunnelsResponseBodyDataList() {}

  explicit ListEnvironmentTunnelsResponseBodyDataList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tunnelConfig) {
      res["tunnelConfig"] = tunnelConfig ? boost::any(tunnelConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (tunnelType) {
      res["tunnelType"] = boost::any(*tunnelType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("tunnelConfig") != m.end() && !m["tunnelConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["tunnelConfig"].type()) {
        ListEnvironmentTunnelsResponseBodyDataListTunnelConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["tunnelConfig"]));
        tunnelConfig = make_shared<ListEnvironmentTunnelsResponseBodyDataListTunnelConfig>(model1);
      }
    }
    if (m.find("tunnelType") != m.end() && !m["tunnelType"].empty()) {
      tunnelType = make_shared<string>(boost::any_cast<string>(m["tunnelType"]));
    }
  }


  virtual ~ListEnvironmentTunnelsResponseBodyDataList() = default;
};
class ListEnvironmentTunnelsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ListEnvironmentTunnelsResponseBodyDataList>> list{};

  ListEnvironmentTunnelsResponseBodyData() {}

  explicit ListEnvironmentTunnelsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (list) {
      vector<boost::any> temp1;
      for(auto item1:*list){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["list"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("list") != m.end() && !m["list"].empty()) {
      if (typeid(vector<boost::any>) == m["list"].type()) {
        vector<ListEnvironmentTunnelsResponseBodyDataList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["list"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListEnvironmentTunnelsResponseBodyDataList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        list = make_shared<vector<ListEnvironmentTunnelsResponseBodyDataList>>(expect1);
      }
    }
  }


  virtual ~ListEnvironmentTunnelsResponseBodyData() = default;
};
class ListEnvironmentTunnelsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<ListEnvironmentTunnelsResponseBodyData> data{};
  shared_ptr<string> msg{};

  ListEnvironmentTunnelsResponseBody() {}

  explicit ListEnvironmentTunnelsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (msg) {
      res["msg"] = boost::any(*msg);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        ListEnvironmentTunnelsResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<ListEnvironmentTunnelsResponseBodyData>(model1);
      }
    }
    if (m.find("msg") != m.end() && !m["msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["msg"]));
    }
  }


  virtual ~ListEnvironmentTunnelsResponseBody() = default;
};
class ListEnvironmentTunnelsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListEnvironmentTunnelsResponseBody> body{};

  ListEnvironmentTunnelsResponse() {}

  explicit ListEnvironmentTunnelsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListEnvironmentTunnelsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListEnvironmentTunnelsResponseBody>(model1);
      }
    }
  }


  virtual ~ListEnvironmentTunnelsResponse() = default;
};
class ListEnvironmentsRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterUID{};
  shared_ptr<string> endpoint{};
  shared_ptr<string> foundationType{};
  shared_ptr<string> fuzzy{};
  shared_ptr<string> instanceStatus{};
  shared_ptr<string> name{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> type{};
  shared_ptr<string> vendorType{};

  ListEnvironmentsRequest() {}

  explicit ListEnvironmentsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterUID) {
      res["clusterUID"] = boost::any(*clusterUID);
    }
    if (endpoint) {
      res["endpoint"] = boost::any(*endpoint);
    }
    if (foundationType) {
      res["foundationType"] = boost::any(*foundationType);
    }
    if (fuzzy) {
      res["fuzzy"] = boost::any(*fuzzy);
    }
    if (instanceStatus) {
      res["instanceStatus"] = boost::any(*instanceStatus);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (pageNum) {
      res["pageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (vendorType) {
      res["vendorType"] = boost::any(*vendorType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("clusterUID") != m.end() && !m["clusterUID"].empty()) {
      clusterUID = make_shared<string>(boost::any_cast<string>(m["clusterUID"]));
    }
    if (m.find("endpoint") != m.end() && !m["endpoint"].empty()) {
      endpoint = make_shared<string>(boost::any_cast<string>(m["endpoint"]));
    }
    if (m.find("foundationType") != m.end() && !m["foundationType"].empty()) {
      foundationType = make_shared<string>(boost::any_cast<string>(m["foundationType"]));
    }
    if (m.find("fuzzy") != m.end() && !m["fuzzy"].empty()) {
      fuzzy = make_shared<string>(boost::any_cast<string>(m["fuzzy"]));
    }
    if (m.find("instanceStatus") != m.end() && !m["instanceStatus"].empty()) {
      instanceStatus = make_shared<string>(boost::any_cast<string>(m["instanceStatus"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("pageNum") != m.end() && !m["pageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["pageNum"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("vendorType") != m.end() && !m["vendorType"].empty()) {
      vendorType = make_shared<string>(boost::any_cast<string>(m["vendorType"]));
    }
  }


  virtual ~ListEnvironmentsRequest() = default;
};
class ListEnvironmentsResponseBodyDataListPlatform : public Darabonba::Model {
public:
  shared_ptr<string> architecture{};
  shared_ptr<string> os{};

  ListEnvironmentsResponseBodyDataListPlatform() {}

  explicit ListEnvironmentsResponseBodyDataListPlatform(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (architecture) {
      res["architecture"] = boost::any(*architecture);
    }
    if (os) {
      res["os"] = boost::any(*os);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("architecture") != m.end() && !m["architecture"].empty()) {
      architecture = make_shared<string>(boost::any_cast<string>(m["architecture"]));
    }
    if (m.find("os") != m.end() && !m["os"].empty()) {
      os = make_shared<string>(boost::any_cast<string>(m["os"]));
    }
  }


  virtual ~ListEnvironmentsResponseBodyDataListPlatform() = default;
};
class ListEnvironmentsResponseBodyDataList : public Darabonba::Model {
public:
  shared_ptr<string> createdAt{};
  shared_ptr<string> description{};
  shared_ptr<string> expireAt{};
  shared_ptr<string> instanceStatus{};
  shared_ptr<string> location{};
  shared_ptr<string> name{};
  shared_ptr<ListEnvironmentsResponseBodyDataListPlatform> platform{};
  shared_ptr<vector<Platform>> platformList{};
  shared_ptr<string> platformStatus{};
  shared_ptr<string> productName{};
  shared_ptr<string> productVersion{};
  shared_ptr<string> productVersionUID{};
  shared_ptr<string> uid{};
  shared_ptr<string> vendorType{};

  ListEnvironmentsResponseBodyDataList() {}

  explicit ListEnvironmentsResponseBodyDataList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createdAt) {
      res["createdAt"] = boost::any(*createdAt);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (expireAt) {
      res["expireAt"] = boost::any(*expireAt);
    }
    if (instanceStatus) {
      res["instanceStatus"] = boost::any(*instanceStatus);
    }
    if (location) {
      res["location"] = boost::any(*location);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (platform) {
      res["platform"] = platform ? boost::any(platform->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (platformList) {
      vector<boost::any> temp1;
      for(auto item1:*platformList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["platformList"] = boost::any(temp1);
    }
    if (platformStatus) {
      res["platformStatus"] = boost::any(*platformStatus);
    }
    if (productName) {
      res["productName"] = boost::any(*productName);
    }
    if (productVersion) {
      res["productVersion"] = boost::any(*productVersion);
    }
    if (productVersionUID) {
      res["productVersionUID"] = boost::any(*productVersionUID);
    }
    if (uid) {
      res["uid"] = boost::any(*uid);
    }
    if (vendorType) {
      res["vendorType"] = boost::any(*vendorType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("createdAt") != m.end() && !m["createdAt"].empty()) {
      createdAt = make_shared<string>(boost::any_cast<string>(m["createdAt"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("expireAt") != m.end() && !m["expireAt"].empty()) {
      expireAt = make_shared<string>(boost::any_cast<string>(m["expireAt"]));
    }
    if (m.find("instanceStatus") != m.end() && !m["instanceStatus"].empty()) {
      instanceStatus = make_shared<string>(boost::any_cast<string>(m["instanceStatus"]));
    }
    if (m.find("location") != m.end() && !m["location"].empty()) {
      location = make_shared<string>(boost::any_cast<string>(m["location"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("platform") != m.end() && !m["platform"].empty()) {
      if (typeid(map<string, boost::any>) == m["platform"].type()) {
        ListEnvironmentsResponseBodyDataListPlatform model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["platform"]));
        platform = make_shared<ListEnvironmentsResponseBodyDataListPlatform>(model1);
      }
    }
    if (m.find("platformList") != m.end() && !m["platformList"].empty()) {
      if (typeid(vector<boost::any>) == m["platformList"].type()) {
        vector<Platform> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["platformList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Platform model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        platformList = make_shared<vector<Platform>>(expect1);
      }
    }
    if (m.find("platformStatus") != m.end() && !m["platformStatus"].empty()) {
      platformStatus = make_shared<string>(boost::any_cast<string>(m["platformStatus"]));
    }
    if (m.find("productName") != m.end() && !m["productName"].empty()) {
      productName = make_shared<string>(boost::any_cast<string>(m["productName"]));
    }
    if (m.find("productVersion") != m.end() && !m["productVersion"].empty()) {
      productVersion = make_shared<string>(boost::any_cast<string>(m["productVersion"]));
    }
    if (m.find("productVersionUID") != m.end() && !m["productVersionUID"].empty()) {
      productVersionUID = make_shared<string>(boost::any_cast<string>(m["productVersionUID"]));
    }
    if (m.find("uid") != m.end() && !m["uid"].empty()) {
      uid = make_shared<string>(boost::any_cast<string>(m["uid"]));
    }
    if (m.find("vendorType") != m.end() && !m["vendorType"].empty()) {
      vendorType = make_shared<string>(boost::any_cast<string>(m["vendorType"]));
    }
  }


  virtual ~ListEnvironmentsResponseBodyDataList() = default;
};
class ListEnvironmentsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ListEnvironmentsResponseBodyDataList>> list{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> total{};

  ListEnvironmentsResponseBodyData() {}

  explicit ListEnvironmentsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (list) {
      vector<boost::any> temp1;
      for(auto item1:*list){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["list"] = boost::any(temp1);
    }
    if (pageNum) {
      res["pageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (total) {
      res["total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("list") != m.end() && !m["list"].empty()) {
      if (typeid(vector<boost::any>) == m["list"].type()) {
        vector<ListEnvironmentsResponseBodyDataList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["list"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListEnvironmentsResponseBodyDataList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        list = make_shared<vector<ListEnvironmentsResponseBodyDataList>>(expect1);
      }
    }
    if (m.find("pageNum") != m.end() && !m["pageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["pageNum"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("total") != m.end() && !m["total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["total"]));
    }
  }


  virtual ~ListEnvironmentsResponseBodyData() = default;
};
class ListEnvironmentsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<ListEnvironmentsResponseBodyData> data{};
  shared_ptr<string> msg{};

  ListEnvironmentsResponseBody() {}

  explicit ListEnvironmentsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (msg) {
      res["msg"] = boost::any(*msg);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        ListEnvironmentsResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<ListEnvironmentsResponseBodyData>(model1);
      }
    }
    if (m.find("msg") != m.end() && !m["msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["msg"]));
    }
  }


  virtual ~ListEnvironmentsResponseBody() = default;
};
class ListEnvironmentsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListEnvironmentsResponseBody> body{};

  ListEnvironmentsResponse() {}

  explicit ListEnvironmentsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListEnvironmentsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListEnvironmentsResponseBody>(model1);
      }
    }
  }


  virtual ~ListEnvironmentsResponse() = default;
};
class ListFoundationComponentVersionsRequest : public Darabonba::Model {
public:
  shared_ptr<bool> onlyEnabled{};
  shared_ptr<string> parentComponentRelationUID{};

  ListFoundationComponentVersionsRequest() {}

  explicit ListFoundationComponentVersionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (onlyEnabled) {
      res["onlyEnabled"] = boost::any(*onlyEnabled);
    }
    if (parentComponentRelationUID) {
      res["parentComponentRelationUID"] = boost::any(*parentComponentRelationUID);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("onlyEnabled") != m.end() && !m["onlyEnabled"].empty()) {
      onlyEnabled = make_shared<bool>(boost::any_cast<bool>(m["onlyEnabled"]));
    }
    if (m.find("parentComponentRelationUID") != m.end() && !m["parentComponentRelationUID"].empty()) {
      parentComponentRelationUID = make_shared<string>(boost::any_cast<string>(m["parentComponentRelationUID"]));
    }
  }


  virtual ~ListFoundationComponentVersionsRequest() = default;
};
class ListFoundationComponentVersionsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ComponentVersion>> list{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> total{};

  ListFoundationComponentVersionsResponseBodyData() {}

  explicit ListFoundationComponentVersionsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (list) {
      vector<boost::any> temp1;
      for(auto item1:*list){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["list"] = boost::any(temp1);
    }
    if (pageNum) {
      res["pageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (total) {
      res["total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("list") != m.end() && !m["list"].empty()) {
      if (typeid(vector<boost::any>) == m["list"].type()) {
        vector<ComponentVersion> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["list"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ComponentVersion model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        list = make_shared<vector<ComponentVersion>>(expect1);
      }
    }
    if (m.find("pageNum") != m.end() && !m["pageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["pageNum"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("total") != m.end() && !m["total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["total"]));
    }
  }


  virtual ~ListFoundationComponentVersionsResponseBodyData() = default;
};
class ListFoundationComponentVersionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<ListFoundationComponentVersionsResponseBodyData> data{};
  shared_ptr<string> msg{};

  ListFoundationComponentVersionsResponseBody() {}

  explicit ListFoundationComponentVersionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (msg) {
      res["msg"] = boost::any(*msg);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        ListFoundationComponentVersionsResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<ListFoundationComponentVersionsResponseBodyData>(model1);
      }
    }
    if (m.find("msg") != m.end() && !m["msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["msg"]));
    }
  }


  virtual ~ListFoundationComponentVersionsResponseBody() = default;
};
class ListFoundationComponentVersionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListFoundationComponentVersionsResponseBody> body{};

  ListFoundationComponentVersionsResponse() {}

  explicit ListFoundationComponentVersionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListFoundationComponentVersionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListFoundationComponentVersionsResponseBody>(model1);
      }
    }
  }


  virtual ~ListFoundationComponentVersionsResponse() = default;
};
class ListFoundationReferenceComponentsRequest : public Darabonba::Model {
public:
  shared_ptr<string> foundationReferenceUID{};
  shared_ptr<string> foundationVersionUID{};
  shared_ptr<bool> onlyEnabled{};
  shared_ptr<string> parentComponentReferenceUID{};
  shared_ptr<string> productVersionUID{};

  ListFoundationReferenceComponentsRequest() {}

  explicit ListFoundationReferenceComponentsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (foundationReferenceUID) {
      res["foundationReferenceUID"] = boost::any(*foundationReferenceUID);
    }
    if (foundationVersionUID) {
      res["foundationVersionUID"] = boost::any(*foundationVersionUID);
    }
    if (onlyEnabled) {
      res["onlyEnabled"] = boost::any(*onlyEnabled);
    }
    if (parentComponentReferenceUID) {
      res["parentComponentReferenceUID"] = boost::any(*parentComponentReferenceUID);
    }
    if (productVersionUID) {
      res["productVersionUID"] = boost::any(*productVersionUID);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("foundationReferenceUID") != m.end() && !m["foundationReferenceUID"].empty()) {
      foundationReferenceUID = make_shared<string>(boost::any_cast<string>(m["foundationReferenceUID"]));
    }
    if (m.find("foundationVersionUID") != m.end() && !m["foundationVersionUID"].empty()) {
      foundationVersionUID = make_shared<string>(boost::any_cast<string>(m["foundationVersionUID"]));
    }
    if (m.find("onlyEnabled") != m.end() && !m["onlyEnabled"].empty()) {
      onlyEnabled = make_shared<bool>(boost::any_cast<bool>(m["onlyEnabled"]));
    }
    if (m.find("parentComponentReferenceUID") != m.end() && !m["parentComponentReferenceUID"].empty()) {
      parentComponentReferenceUID = make_shared<string>(boost::any_cast<string>(m["parentComponentReferenceUID"]));
    }
    if (m.find("productVersionUID") != m.end() && !m["productVersionUID"].empty()) {
      productVersionUID = make_shared<string>(boost::any_cast<string>(m["productVersionUID"]));
    }
  }


  virtual ~ListFoundationReferenceComponentsRequest() = default;
};
class ListFoundationReferenceComponentsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<ProductComponentRelationDetail>> data{};
  shared_ptr<string> msg{};

  ListFoundationReferenceComponentsResponseBody() {}

  explicit ListFoundationReferenceComponentsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["data"] = boost::any(temp1);
    }
    if (msg) {
      res["msg"] = boost::any(*msg);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(vector<boost::any>) == m["data"].type()) {
        vector<ProductComponentRelationDetail> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ProductComponentRelationDetail model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ProductComponentRelationDetail>>(expect1);
      }
    }
    if (m.find("msg") != m.end() && !m["msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["msg"]));
    }
  }


  virtual ~ListFoundationReferenceComponentsResponseBody() = default;
};
class ListFoundationReferenceComponentsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListFoundationReferenceComponentsResponseBody> body{};

  ListFoundationReferenceComponentsResponse() {}

  explicit ListFoundationReferenceComponentsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListFoundationReferenceComponentsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListFoundationReferenceComponentsResponseBody>(model1);
      }
    }
  }


  virtual ~ListFoundationReferenceComponentsResponse() = default;
};
class ListFoundationVersionsRequest : public Darabonba::Model {
public:
  shared_ptr<bool> onlyDefault{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> sortDirect{};
  shared_ptr<string> sortKey{};
  shared_ptr<string> type{};
  shared_ptr<string> version{};

  ListFoundationVersionsRequest() {}

  explicit ListFoundationVersionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (onlyDefault) {
      res["onlyDefault"] = boost::any(*onlyDefault);
    }
    if (pageNum) {
      res["pageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (sortDirect) {
      res["sortDirect"] = boost::any(*sortDirect);
    }
    if (sortKey) {
      res["sortKey"] = boost::any(*sortKey);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (version) {
      res["version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("onlyDefault") != m.end() && !m["onlyDefault"].empty()) {
      onlyDefault = make_shared<bool>(boost::any_cast<bool>(m["onlyDefault"]));
    }
    if (m.find("pageNum") != m.end() && !m["pageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["pageNum"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("sortDirect") != m.end() && !m["sortDirect"].empty()) {
      sortDirect = make_shared<string>(boost::any_cast<string>(m["sortDirect"]));
    }
    if (m.find("sortKey") != m.end() && !m["sortKey"].empty()) {
      sortKey = make_shared<string>(boost::any_cast<string>(m["sortKey"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("version") != m.end() && !m["version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["version"]));
    }
  }


  virtual ~ListFoundationVersionsRequest() = default;
};
class ListFoundationVersionsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<FoundationVersion>> list{};

  ListFoundationVersionsResponseBodyData() {}

  explicit ListFoundationVersionsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (list) {
      vector<boost::any> temp1;
      for(auto item1:*list){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["list"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("list") != m.end() && !m["list"].empty()) {
      if (typeid(vector<boost::any>) == m["list"].type()) {
        vector<FoundationVersion> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["list"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            FoundationVersion model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        list = make_shared<vector<FoundationVersion>>(expect1);
      }
    }
  }


  virtual ~ListFoundationVersionsResponseBodyData() = default;
};
class ListFoundationVersionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<ListFoundationVersionsResponseBodyData> data{};
  shared_ptr<string> msg{};

  ListFoundationVersionsResponseBody() {}

  explicit ListFoundationVersionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (msg) {
      res["msg"] = boost::any(*msg);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        ListFoundationVersionsResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<ListFoundationVersionsResponseBodyData>(model1);
      }
    }
    if (m.find("msg") != m.end() && !m["msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["msg"]));
    }
  }


  virtual ~ListFoundationVersionsResponseBody() = default;
};
class ListFoundationVersionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListFoundationVersionsResponseBody> body{};

  ListFoundationVersionsResponse() {}

  explicit ListFoundationVersionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListFoundationVersionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListFoundationVersionsResponseBody>(model1);
      }
    }
  }


  virtual ~ListFoundationVersionsResponse() = default;
};
class ListProductComponentVersionsRequest : public Darabonba::Model {
public:
  shared_ptr<string> category{};
  shared_ptr<string> pageNum{};
  shared_ptr<string> pageSize{};
  shared_ptr<string> releaseName{};
  shared_ptr<string> sortDirect{};
  shared_ptr<string> sortKey{};

  ListProductComponentVersionsRequest() {}

  explicit ListProductComponentVersionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (category) {
      res["category"] = boost::any(*category);
    }
    if (pageNum) {
      res["pageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (releaseName) {
      res["releaseName"] = boost::any(*releaseName);
    }
    if (sortDirect) {
      res["sortDirect"] = boost::any(*sortDirect);
    }
    if (sortKey) {
      res["sortKey"] = boost::any(*sortKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("category") != m.end() && !m["category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["category"]));
    }
    if (m.find("pageNum") != m.end() && !m["pageNum"].empty()) {
      pageNum = make_shared<string>(boost::any_cast<string>(m["pageNum"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<string>(boost::any_cast<string>(m["pageSize"]));
    }
    if (m.find("releaseName") != m.end() && !m["releaseName"].empty()) {
      releaseName = make_shared<string>(boost::any_cast<string>(m["releaseName"]));
    }
    if (m.find("sortDirect") != m.end() && !m["sortDirect"].empty()) {
      sortDirect = make_shared<string>(boost::any_cast<string>(m["sortDirect"]));
    }
    if (m.find("sortKey") != m.end() && !m["sortKey"].empty()) {
      sortKey = make_shared<string>(boost::any_cast<string>(m["sortKey"]));
    }
  }


  virtual ~ListProductComponentVersionsRequest() = default;
};
class ListProductComponentVersionsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ProductComponentRelationDetail>> list{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> total{};

  ListProductComponentVersionsResponseBodyData() {}

  explicit ListProductComponentVersionsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (list) {
      vector<boost::any> temp1;
      for(auto item1:*list){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["list"] = boost::any(temp1);
    }
    if (pageNum) {
      res["pageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (total) {
      res["total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("list") != m.end() && !m["list"].empty()) {
      if (typeid(vector<boost::any>) == m["list"].type()) {
        vector<ProductComponentRelationDetail> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["list"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ProductComponentRelationDetail model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        list = make_shared<vector<ProductComponentRelationDetail>>(expect1);
      }
    }
    if (m.find("pageNum") != m.end() && !m["pageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["pageNum"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("total") != m.end() && !m["total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["total"]));
    }
  }


  virtual ~ListProductComponentVersionsResponseBodyData() = default;
};
class ListProductComponentVersionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<ListProductComponentVersionsResponseBodyData> data{};
  shared_ptr<string> msg{};

  ListProductComponentVersionsResponseBody() {}

  explicit ListProductComponentVersionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (msg) {
      res["msg"] = boost::any(*msg);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        ListProductComponentVersionsResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<ListProductComponentVersionsResponseBodyData>(model1);
      }
    }
    if (m.find("msg") != m.end() && !m["msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["msg"]));
    }
  }


  virtual ~ListProductComponentVersionsResponseBody() = default;
};
class ListProductComponentVersionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListProductComponentVersionsResponseBody> body{};

  ListProductComponentVersionsResponse() {}

  explicit ListProductComponentVersionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListProductComponentVersionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListProductComponentVersionsResponseBody>(model1);
      }
    }
  }


  virtual ~ListProductComponentVersionsResponse() = default;
};
class ListProductDeploymentsRequest : public Darabonba::Model {
public:
  shared_ptr<string> environmentUID{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> productVersionUID{};

  ListProductDeploymentsRequest() {}

  explicit ListProductDeploymentsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (environmentUID) {
      res["environmentUID"] = boost::any(*environmentUID);
    }
    if (pageNum) {
      res["pageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (productVersionUID) {
      res["productVersionUID"] = boost::any(*productVersionUID);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("environmentUID") != m.end() && !m["environmentUID"].empty()) {
      environmentUID = make_shared<string>(boost::any_cast<string>(m["environmentUID"]));
    }
    if (m.find("pageNum") != m.end() && !m["pageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["pageNum"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("productVersionUID") != m.end() && !m["productVersionUID"].empty()) {
      productVersionUID = make_shared<string>(boost::any_cast<string>(m["productVersionUID"]));
    }
  }


  virtual ~ListProductDeploymentsRequest() = default;
};
class ListProductDeploymentsResponseBodyDataList : public Darabonba::Model {
public:
  shared_ptr<string> envParams{};
  shared_ptr<string> envUID{};
  shared_ptr<string> oldProductVersion{};
  shared_ptr<string> packageContentType{};
  shared_ptr<string> packageInfoUID{};
  shared_ptr<string> packageType{};
  shared_ptr<string> productName{};
  shared_ptr<string> productVersion{};
  shared_ptr<string> status{};
  shared_ptr<string> uid{};

  ListProductDeploymentsResponseBodyDataList() {}

  explicit ListProductDeploymentsResponseBodyDataList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (envParams) {
      res["envParams"] = boost::any(*envParams);
    }
    if (envUID) {
      res["envUID"] = boost::any(*envUID);
    }
    if (oldProductVersion) {
      res["oldProductVersion"] = boost::any(*oldProductVersion);
    }
    if (packageContentType) {
      res["packageContentType"] = boost::any(*packageContentType);
    }
    if (packageInfoUID) {
      res["packageInfoUID"] = boost::any(*packageInfoUID);
    }
    if (packageType) {
      res["packageType"] = boost::any(*packageType);
    }
    if (productName) {
      res["productName"] = boost::any(*productName);
    }
    if (productVersion) {
      res["productVersion"] = boost::any(*productVersion);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (uid) {
      res["uid"] = boost::any(*uid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("envParams") != m.end() && !m["envParams"].empty()) {
      envParams = make_shared<string>(boost::any_cast<string>(m["envParams"]));
    }
    if (m.find("envUID") != m.end() && !m["envUID"].empty()) {
      envUID = make_shared<string>(boost::any_cast<string>(m["envUID"]));
    }
    if (m.find("oldProductVersion") != m.end() && !m["oldProductVersion"].empty()) {
      oldProductVersion = make_shared<string>(boost::any_cast<string>(m["oldProductVersion"]));
    }
    if (m.find("packageContentType") != m.end() && !m["packageContentType"].empty()) {
      packageContentType = make_shared<string>(boost::any_cast<string>(m["packageContentType"]));
    }
    if (m.find("packageInfoUID") != m.end() && !m["packageInfoUID"].empty()) {
      packageInfoUID = make_shared<string>(boost::any_cast<string>(m["packageInfoUID"]));
    }
    if (m.find("packageType") != m.end() && !m["packageType"].empty()) {
      packageType = make_shared<string>(boost::any_cast<string>(m["packageType"]));
    }
    if (m.find("productName") != m.end() && !m["productName"].empty()) {
      productName = make_shared<string>(boost::any_cast<string>(m["productName"]));
    }
    if (m.find("productVersion") != m.end() && !m["productVersion"].empty()) {
      productVersion = make_shared<string>(boost::any_cast<string>(m["productVersion"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("uid") != m.end() && !m["uid"].empty()) {
      uid = make_shared<string>(boost::any_cast<string>(m["uid"]));
    }
  }


  virtual ~ListProductDeploymentsResponseBodyDataList() = default;
};
class ListProductDeploymentsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ListProductDeploymentsResponseBodyDataList>> list{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> total{};

  ListProductDeploymentsResponseBodyData() {}

  explicit ListProductDeploymentsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (list) {
      vector<boost::any> temp1;
      for(auto item1:*list){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["list"] = boost::any(temp1);
    }
    if (pageNum) {
      res["pageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (total) {
      res["total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("list") != m.end() && !m["list"].empty()) {
      if (typeid(vector<boost::any>) == m["list"].type()) {
        vector<ListProductDeploymentsResponseBodyDataList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["list"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListProductDeploymentsResponseBodyDataList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        list = make_shared<vector<ListProductDeploymentsResponseBodyDataList>>(expect1);
      }
    }
    if (m.find("pageNum") != m.end() && !m["pageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["pageNum"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("total") != m.end() && !m["total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["total"]));
    }
  }


  virtual ~ListProductDeploymentsResponseBodyData() = default;
};
class ListProductDeploymentsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<ListProductDeploymentsResponseBodyData> data{};
  shared_ptr<string> msg{};

  ListProductDeploymentsResponseBody() {}

  explicit ListProductDeploymentsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (msg) {
      res["msg"] = boost::any(*msg);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        ListProductDeploymentsResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<ListProductDeploymentsResponseBodyData>(model1);
      }
    }
    if (m.find("msg") != m.end() && !m["msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["msg"]));
    }
  }


  virtual ~ListProductDeploymentsResponseBody() = default;
};
class ListProductDeploymentsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListProductDeploymentsResponseBody> body{};

  ListProductDeploymentsResponse() {}

  explicit ListProductDeploymentsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListProductDeploymentsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListProductDeploymentsResponseBody>(model1);
      }
    }
  }


  virtual ~ListProductDeploymentsResponse() = default;
};
class ListProductEnvironmentsRequestOptions : public Darabonba::Model {
public:
  shared_ptr<bool> filterWithSpecUID{};
  shared_ptr<string> specUID{};

  ListProductEnvironmentsRequestOptions() {}

  explicit ListProductEnvironmentsRequestOptions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (filterWithSpecUID) {
      res["filterWithSpecUID"] = boost::any(*filterWithSpecUID);
    }
    if (specUID) {
      res["specUID"] = boost::any(*specUID);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("filterWithSpecUID") != m.end() && !m["filterWithSpecUID"].empty()) {
      filterWithSpecUID = make_shared<bool>(boost::any_cast<bool>(m["filterWithSpecUID"]));
    }
    if (m.find("specUID") != m.end() && !m["specUID"].empty()) {
      specUID = make_shared<string>(boost::any_cast<string>(m["specUID"]));
    }
  }


  virtual ~ListProductEnvironmentsRequestOptions() = default;
};
class ListProductEnvironmentsRequestPlatforms : public Darabonba::Model {
public:
  shared_ptr<string> architecture{};
  shared_ptr<string> os{};

  ListProductEnvironmentsRequestPlatforms() {}

  explicit ListProductEnvironmentsRequestPlatforms(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (architecture) {
      res["architecture"] = boost::any(*architecture);
    }
    if (os) {
      res["os"] = boost::any(*os);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("architecture") != m.end() && !m["architecture"].empty()) {
      architecture = make_shared<string>(boost::any_cast<string>(m["architecture"]));
    }
    if (m.find("os") != m.end() && !m["os"].empty()) {
      os = make_shared<string>(boost::any_cast<string>(m["os"]));
    }
  }


  virtual ~ListProductEnvironmentsRequestPlatforms() = default;
};
class ListProductEnvironmentsRequest : public Darabonba::Model {
public:
  shared_ptr<string> compatibleProductVersionUID{};
  shared_ptr<string> envType{};
  shared_ptr<ListProductEnvironmentsRequestOptions> options{};
  shared_ptr<vector<ListProductEnvironmentsRequestPlatforms>> platforms{};
  shared_ptr<string> productVersionSpecUID{};
  shared_ptr<string> productVersionUID{};

  ListProductEnvironmentsRequest() {}

  explicit ListProductEnvironmentsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (compatibleProductVersionUID) {
      res["compatibleProductVersionUID"] = boost::any(*compatibleProductVersionUID);
    }
    if (envType) {
      res["envType"] = boost::any(*envType);
    }
    if (options) {
      res["options"] = options ? boost::any(options->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (platforms) {
      vector<boost::any> temp1;
      for(auto item1:*platforms){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["platforms"] = boost::any(temp1);
    }
    if (productVersionSpecUID) {
      res["productVersionSpecUID"] = boost::any(*productVersionSpecUID);
    }
    if (productVersionUID) {
      res["productVersionUID"] = boost::any(*productVersionUID);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("compatibleProductVersionUID") != m.end() && !m["compatibleProductVersionUID"].empty()) {
      compatibleProductVersionUID = make_shared<string>(boost::any_cast<string>(m["compatibleProductVersionUID"]));
    }
    if (m.find("envType") != m.end() && !m["envType"].empty()) {
      envType = make_shared<string>(boost::any_cast<string>(m["envType"]));
    }
    if (m.find("options") != m.end() && !m["options"].empty()) {
      if (typeid(map<string, boost::any>) == m["options"].type()) {
        ListProductEnvironmentsRequestOptions model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["options"]));
        options = make_shared<ListProductEnvironmentsRequestOptions>(model1);
      }
    }
    if (m.find("platforms") != m.end() && !m["platforms"].empty()) {
      if (typeid(vector<boost::any>) == m["platforms"].type()) {
        vector<ListProductEnvironmentsRequestPlatforms> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["platforms"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListProductEnvironmentsRequestPlatforms model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        platforms = make_shared<vector<ListProductEnvironmentsRequestPlatforms>>(expect1);
      }
    }
    if (m.find("productVersionSpecUID") != m.end() && !m["productVersionSpecUID"].empty()) {
      productVersionSpecUID = make_shared<string>(boost::any_cast<string>(m["productVersionSpecUID"]));
    }
    if (m.find("productVersionUID") != m.end() && !m["productVersionUID"].empty()) {
      productVersionUID = make_shared<string>(boost::any_cast<string>(m["productVersionUID"]));
    }
  }


  virtual ~ListProductEnvironmentsRequest() = default;
};
class ListProductEnvironmentsShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> compatibleProductVersionUID{};
  shared_ptr<string> envType{};
  shared_ptr<string> optionsShrink{};
  shared_ptr<string> platformsShrink{};
  shared_ptr<string> productVersionSpecUID{};
  shared_ptr<string> productVersionUID{};

  ListProductEnvironmentsShrinkRequest() {}

  explicit ListProductEnvironmentsShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (compatibleProductVersionUID) {
      res["compatibleProductVersionUID"] = boost::any(*compatibleProductVersionUID);
    }
    if (envType) {
      res["envType"] = boost::any(*envType);
    }
    if (optionsShrink) {
      res["options"] = boost::any(*optionsShrink);
    }
    if (platformsShrink) {
      res["platforms"] = boost::any(*platformsShrink);
    }
    if (productVersionSpecUID) {
      res["productVersionSpecUID"] = boost::any(*productVersionSpecUID);
    }
    if (productVersionUID) {
      res["productVersionUID"] = boost::any(*productVersionUID);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("compatibleProductVersionUID") != m.end() && !m["compatibleProductVersionUID"].empty()) {
      compatibleProductVersionUID = make_shared<string>(boost::any_cast<string>(m["compatibleProductVersionUID"]));
    }
    if (m.find("envType") != m.end() && !m["envType"].empty()) {
      envType = make_shared<string>(boost::any_cast<string>(m["envType"]));
    }
    if (m.find("options") != m.end() && !m["options"].empty()) {
      optionsShrink = make_shared<string>(boost::any_cast<string>(m["options"]));
    }
    if (m.find("platforms") != m.end() && !m["platforms"].empty()) {
      platformsShrink = make_shared<string>(boost::any_cast<string>(m["platforms"]));
    }
    if (m.find("productVersionSpecUID") != m.end() && !m["productVersionSpecUID"].empty()) {
      productVersionSpecUID = make_shared<string>(boost::any_cast<string>(m["productVersionSpecUID"]));
    }
    if (m.find("productVersionUID") != m.end() && !m["productVersionUID"].empty()) {
      productVersionUID = make_shared<string>(boost::any_cast<string>(m["productVersionUID"]));
    }
  }


  virtual ~ListProductEnvironmentsShrinkRequest() = default;
};
class ListProductEnvironmentsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> envName{};
  shared_ptr<string> envType{};
  shared_ptr<string> envUID{};
  shared_ptr<string> instanceStatus{};
  shared_ptr<string> oldProductVersion{};
  shared_ptr<string> oldProductVersionUID{};
  shared_ptr<string> platformStatus{};
  shared_ptr<string> productName{};
  shared_ptr<string> productUID{};
  shared_ptr<string> productVersion{};
  shared_ptr<string> productVersionUID{};
  shared_ptr<string> provider{};
  shared_ptr<string> uid{};
  shared_ptr<string> vendorConfig{};
  shared_ptr<string> vendorType{};

  ListProductEnvironmentsResponseBodyData() {}

  explicit ListProductEnvironmentsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (envName) {
      res["envName"] = boost::any(*envName);
    }
    if (envType) {
      res["envType"] = boost::any(*envType);
    }
    if (envUID) {
      res["envUID"] = boost::any(*envUID);
    }
    if (instanceStatus) {
      res["instanceStatus"] = boost::any(*instanceStatus);
    }
    if (oldProductVersion) {
      res["oldProductVersion"] = boost::any(*oldProductVersion);
    }
    if (oldProductVersionUID) {
      res["oldProductVersionUID"] = boost::any(*oldProductVersionUID);
    }
    if (platformStatus) {
      res["platformStatus"] = boost::any(*platformStatus);
    }
    if (productName) {
      res["productName"] = boost::any(*productName);
    }
    if (productUID) {
      res["productUID"] = boost::any(*productUID);
    }
    if (productVersion) {
      res["productVersion"] = boost::any(*productVersion);
    }
    if (productVersionUID) {
      res["productVersionUID"] = boost::any(*productVersionUID);
    }
    if (provider) {
      res["provider"] = boost::any(*provider);
    }
    if (uid) {
      res["uid"] = boost::any(*uid);
    }
    if (vendorConfig) {
      res["vendorConfig"] = boost::any(*vendorConfig);
    }
    if (vendorType) {
      res["vendorType"] = boost::any(*vendorType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("envName") != m.end() && !m["envName"].empty()) {
      envName = make_shared<string>(boost::any_cast<string>(m["envName"]));
    }
    if (m.find("envType") != m.end() && !m["envType"].empty()) {
      envType = make_shared<string>(boost::any_cast<string>(m["envType"]));
    }
    if (m.find("envUID") != m.end() && !m["envUID"].empty()) {
      envUID = make_shared<string>(boost::any_cast<string>(m["envUID"]));
    }
    if (m.find("instanceStatus") != m.end() && !m["instanceStatus"].empty()) {
      instanceStatus = make_shared<string>(boost::any_cast<string>(m["instanceStatus"]));
    }
    if (m.find("oldProductVersion") != m.end() && !m["oldProductVersion"].empty()) {
      oldProductVersion = make_shared<string>(boost::any_cast<string>(m["oldProductVersion"]));
    }
    if (m.find("oldProductVersionUID") != m.end() && !m["oldProductVersionUID"].empty()) {
      oldProductVersionUID = make_shared<string>(boost::any_cast<string>(m["oldProductVersionUID"]));
    }
    if (m.find("platformStatus") != m.end() && !m["platformStatus"].empty()) {
      platformStatus = make_shared<string>(boost::any_cast<string>(m["platformStatus"]));
    }
    if (m.find("productName") != m.end() && !m["productName"].empty()) {
      productName = make_shared<string>(boost::any_cast<string>(m["productName"]));
    }
    if (m.find("productUID") != m.end() && !m["productUID"].empty()) {
      productUID = make_shared<string>(boost::any_cast<string>(m["productUID"]));
    }
    if (m.find("productVersion") != m.end() && !m["productVersion"].empty()) {
      productVersion = make_shared<string>(boost::any_cast<string>(m["productVersion"]));
    }
    if (m.find("productVersionUID") != m.end() && !m["productVersionUID"].empty()) {
      productVersionUID = make_shared<string>(boost::any_cast<string>(m["productVersionUID"]));
    }
    if (m.find("provider") != m.end() && !m["provider"].empty()) {
      provider = make_shared<string>(boost::any_cast<string>(m["provider"]));
    }
    if (m.find("uid") != m.end() && !m["uid"].empty()) {
      uid = make_shared<string>(boost::any_cast<string>(m["uid"]));
    }
    if (m.find("vendorConfig") != m.end() && !m["vendorConfig"].empty()) {
      vendorConfig = make_shared<string>(boost::any_cast<string>(m["vendorConfig"]));
    }
    if (m.find("vendorType") != m.end() && !m["vendorType"].empty()) {
      vendorType = make_shared<string>(boost::any_cast<string>(m["vendorType"]));
    }
  }


  virtual ~ListProductEnvironmentsResponseBodyData() = default;
};
class ListProductEnvironmentsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<ListProductEnvironmentsResponseBodyData>> data{};
  shared_ptr<string> msg{};

  ListProductEnvironmentsResponseBody() {}

  explicit ListProductEnvironmentsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["data"] = boost::any(temp1);
    }
    if (msg) {
      res["msg"] = boost::any(*msg);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(vector<boost::any>) == m["data"].type()) {
        vector<ListProductEnvironmentsResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListProductEnvironmentsResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListProductEnvironmentsResponseBodyData>>(expect1);
      }
    }
    if (m.find("msg") != m.end() && !m["msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["msg"]));
    }
  }


  virtual ~ListProductEnvironmentsResponseBody() = default;
};
class ListProductEnvironmentsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListProductEnvironmentsResponseBody> body{};

  ListProductEnvironmentsResponse() {}

  explicit ListProductEnvironmentsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListProductEnvironmentsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListProductEnvironmentsResponseBody>(model1);
      }
    }
  }


  virtual ~ListProductEnvironmentsResponse() = default;
};
class ListProductFoundationReferencesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> foundationReferenceUID{};
  shared_ptr<string> foundationVersion{};
  shared_ptr<string> foundationVersionName{};
  shared_ptr<string> foundationVersionType{};
  shared_ptr<string> foundationVersionUID{};
  shared_ptr<string> productVersionUID{};

  ListProductFoundationReferencesResponseBodyData() {}

  explicit ListProductFoundationReferencesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (foundationReferenceUID) {
      res["foundationReferenceUID"] = boost::any(*foundationReferenceUID);
    }
    if (foundationVersion) {
      res["foundationVersion"] = boost::any(*foundationVersion);
    }
    if (foundationVersionName) {
      res["foundationVersionName"] = boost::any(*foundationVersionName);
    }
    if (foundationVersionType) {
      res["foundationVersionType"] = boost::any(*foundationVersionType);
    }
    if (foundationVersionUID) {
      res["foundationVersionUID"] = boost::any(*foundationVersionUID);
    }
    if (productVersionUID) {
      res["productVersionUID"] = boost::any(*productVersionUID);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("foundationReferenceUID") != m.end() && !m["foundationReferenceUID"].empty()) {
      foundationReferenceUID = make_shared<string>(boost::any_cast<string>(m["foundationReferenceUID"]));
    }
    if (m.find("foundationVersion") != m.end() && !m["foundationVersion"].empty()) {
      foundationVersion = make_shared<string>(boost::any_cast<string>(m["foundationVersion"]));
    }
    if (m.find("foundationVersionName") != m.end() && !m["foundationVersionName"].empty()) {
      foundationVersionName = make_shared<string>(boost::any_cast<string>(m["foundationVersionName"]));
    }
    if (m.find("foundationVersionType") != m.end() && !m["foundationVersionType"].empty()) {
      foundationVersionType = make_shared<string>(boost::any_cast<string>(m["foundationVersionType"]));
    }
    if (m.find("foundationVersionUID") != m.end() && !m["foundationVersionUID"].empty()) {
      foundationVersionUID = make_shared<string>(boost::any_cast<string>(m["foundationVersionUID"]));
    }
    if (m.find("productVersionUID") != m.end() && !m["productVersionUID"].empty()) {
      productVersionUID = make_shared<string>(boost::any_cast<string>(m["productVersionUID"]));
    }
  }


  virtual ~ListProductFoundationReferencesResponseBodyData() = default;
};
class ListProductFoundationReferencesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<ListProductFoundationReferencesResponseBodyData>> data{};
  shared_ptr<string> msg{};

  ListProductFoundationReferencesResponseBody() {}

  explicit ListProductFoundationReferencesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["data"] = boost::any(temp1);
    }
    if (msg) {
      res["msg"] = boost::any(*msg);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(vector<boost::any>) == m["data"].type()) {
        vector<ListProductFoundationReferencesResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListProductFoundationReferencesResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListProductFoundationReferencesResponseBodyData>>(expect1);
      }
    }
    if (m.find("msg") != m.end() && !m["msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["msg"]));
    }
  }


  virtual ~ListProductFoundationReferencesResponseBody() = default;
};
class ListProductFoundationReferencesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListProductFoundationReferencesResponseBody> body{};

  ListProductFoundationReferencesResponse() {}

  explicit ListProductFoundationReferencesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListProductFoundationReferencesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListProductFoundationReferencesResponseBody>(model1);
      }
    }
  }


  virtual ~ListProductFoundationReferencesResponse() = default;
};
class ListProductInstanceConfigsRequest : public Darabonba::Model {
public:
  shared_ptr<string> componentReleaseName{};
  shared_ptr<string> environmentUID{};
  shared_ptr<string> fuzzy{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> paramType{};
  shared_ptr<string> parameter{};
  shared_ptr<string> productVersionUID{};

  ListProductInstanceConfigsRequest() {}

  explicit ListProductInstanceConfigsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (componentReleaseName) {
      res["componentReleaseName"] = boost::any(*componentReleaseName);
    }
    if (environmentUID) {
      res["environmentUID"] = boost::any(*environmentUID);
    }
    if (fuzzy) {
      res["fuzzy"] = boost::any(*fuzzy);
    }
    if (pageNum) {
      res["pageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (paramType) {
      res["paramType"] = boost::any(*paramType);
    }
    if (parameter) {
      res["parameter"] = boost::any(*parameter);
    }
    if (productVersionUID) {
      res["productVersionUID"] = boost::any(*productVersionUID);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("componentReleaseName") != m.end() && !m["componentReleaseName"].empty()) {
      componentReleaseName = make_shared<string>(boost::any_cast<string>(m["componentReleaseName"]));
    }
    if (m.find("environmentUID") != m.end() && !m["environmentUID"].empty()) {
      environmentUID = make_shared<string>(boost::any_cast<string>(m["environmentUID"]));
    }
    if (m.find("fuzzy") != m.end() && !m["fuzzy"].empty()) {
      fuzzy = make_shared<string>(boost::any_cast<string>(m["fuzzy"]));
    }
    if (m.find("pageNum") != m.end() && !m["pageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["pageNum"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("paramType") != m.end() && !m["paramType"].empty()) {
      paramType = make_shared<string>(boost::any_cast<string>(m["paramType"]));
    }
    if (m.find("parameter") != m.end() && !m["parameter"].empty()) {
      parameter = make_shared<string>(boost::any_cast<string>(m["parameter"]));
    }
    if (m.find("productVersionUID") != m.end() && !m["productVersionUID"].empty()) {
      productVersionUID = make_shared<string>(boost::any_cast<string>(m["productVersionUID"]));
    }
  }


  virtual ~ListProductInstanceConfigsRequest() = default;
};
class ListProductInstanceConfigsResponseBodyDataList : public Darabonba::Model {
public:
  shared_ptr<string> componentName{};
  shared_ptr<string> componentReleaseName{};
  shared_ptr<string> componentUID{};
  shared_ptr<string> componentVersionUID{};
  shared_ptr<string> createdAt{};
  shared_ptr<string> description{};
  shared_ptr<string> envUID{};
  shared_ptr<string> name{};
  shared_ptr<string> parentComponentName{};
  shared_ptr<string> parentComponentReleaseName{};
  shared_ptr<string> parentComponentVersionUID{};
  shared_ptr<string> productName{};
  shared_ptr<string> productVersion{};
  shared_ptr<string> productVersionUID{};
  shared_ptr<string> uid{};
  shared_ptr<string> value{};
  shared_ptr<string> valueType{};
  shared_ptr<string> vendorType{};

  ListProductInstanceConfigsResponseBodyDataList() {}

  explicit ListProductInstanceConfigsResponseBodyDataList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (componentName) {
      res["componentName"] = boost::any(*componentName);
    }
    if (componentReleaseName) {
      res["componentReleaseName"] = boost::any(*componentReleaseName);
    }
    if (componentUID) {
      res["componentUID"] = boost::any(*componentUID);
    }
    if (componentVersionUID) {
      res["componentVersionUID"] = boost::any(*componentVersionUID);
    }
    if (createdAt) {
      res["createdAt"] = boost::any(*createdAt);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (envUID) {
      res["envUID"] = boost::any(*envUID);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (parentComponentName) {
      res["parentComponentName"] = boost::any(*parentComponentName);
    }
    if (parentComponentReleaseName) {
      res["parentComponentReleaseName"] = boost::any(*parentComponentReleaseName);
    }
    if (parentComponentVersionUID) {
      res["parentComponentVersionUID"] = boost::any(*parentComponentVersionUID);
    }
    if (productName) {
      res["productName"] = boost::any(*productName);
    }
    if (productVersion) {
      res["productVersion"] = boost::any(*productVersion);
    }
    if (productVersionUID) {
      res["productVersionUID"] = boost::any(*productVersionUID);
    }
    if (uid) {
      res["uid"] = boost::any(*uid);
    }
    if (value) {
      res["value"] = boost::any(*value);
    }
    if (valueType) {
      res["valueType"] = boost::any(*valueType);
    }
    if (vendorType) {
      res["vendorType"] = boost::any(*vendorType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("componentName") != m.end() && !m["componentName"].empty()) {
      componentName = make_shared<string>(boost::any_cast<string>(m["componentName"]));
    }
    if (m.find("componentReleaseName") != m.end() && !m["componentReleaseName"].empty()) {
      componentReleaseName = make_shared<string>(boost::any_cast<string>(m["componentReleaseName"]));
    }
    if (m.find("componentUID") != m.end() && !m["componentUID"].empty()) {
      componentUID = make_shared<string>(boost::any_cast<string>(m["componentUID"]));
    }
    if (m.find("componentVersionUID") != m.end() && !m["componentVersionUID"].empty()) {
      componentVersionUID = make_shared<string>(boost::any_cast<string>(m["componentVersionUID"]));
    }
    if (m.find("createdAt") != m.end() && !m["createdAt"].empty()) {
      createdAt = make_shared<string>(boost::any_cast<string>(m["createdAt"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("envUID") != m.end() && !m["envUID"].empty()) {
      envUID = make_shared<string>(boost::any_cast<string>(m["envUID"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("parentComponentName") != m.end() && !m["parentComponentName"].empty()) {
      parentComponentName = make_shared<string>(boost::any_cast<string>(m["parentComponentName"]));
    }
    if (m.find("parentComponentReleaseName") != m.end() && !m["parentComponentReleaseName"].empty()) {
      parentComponentReleaseName = make_shared<string>(boost::any_cast<string>(m["parentComponentReleaseName"]));
    }
    if (m.find("parentComponentVersionUID") != m.end() && !m["parentComponentVersionUID"].empty()) {
      parentComponentVersionUID = make_shared<string>(boost::any_cast<string>(m["parentComponentVersionUID"]));
    }
    if (m.find("productName") != m.end() && !m["productName"].empty()) {
      productName = make_shared<string>(boost::any_cast<string>(m["productName"]));
    }
    if (m.find("productVersion") != m.end() && !m["productVersion"].empty()) {
      productVersion = make_shared<string>(boost::any_cast<string>(m["productVersion"]));
    }
    if (m.find("productVersionUID") != m.end() && !m["productVersionUID"].empty()) {
      productVersionUID = make_shared<string>(boost::any_cast<string>(m["productVersionUID"]));
    }
    if (m.find("uid") != m.end() && !m["uid"].empty()) {
      uid = make_shared<string>(boost::any_cast<string>(m["uid"]));
    }
    if (m.find("value") != m.end() && !m["value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["value"]));
    }
    if (m.find("valueType") != m.end() && !m["valueType"].empty()) {
      valueType = make_shared<string>(boost::any_cast<string>(m["valueType"]));
    }
    if (m.find("vendorType") != m.end() && !m["vendorType"].empty()) {
      vendorType = make_shared<string>(boost::any_cast<string>(m["vendorType"]));
    }
  }


  virtual ~ListProductInstanceConfigsResponseBodyDataList() = default;
};
class ListProductInstanceConfigsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ListProductInstanceConfigsResponseBodyDataList>> list{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> total{};

  ListProductInstanceConfigsResponseBodyData() {}

  explicit ListProductInstanceConfigsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (list) {
      vector<boost::any> temp1;
      for(auto item1:*list){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["list"] = boost::any(temp1);
    }
    if (pageNum) {
      res["pageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (total) {
      res["total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("list") != m.end() && !m["list"].empty()) {
      if (typeid(vector<boost::any>) == m["list"].type()) {
        vector<ListProductInstanceConfigsResponseBodyDataList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["list"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListProductInstanceConfigsResponseBodyDataList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        list = make_shared<vector<ListProductInstanceConfigsResponseBodyDataList>>(expect1);
      }
    }
    if (m.find("pageNum") != m.end() && !m["pageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["pageNum"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("total") != m.end() && !m["total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["total"]));
    }
  }


  virtual ~ListProductInstanceConfigsResponseBodyData() = default;
};
class ListProductInstanceConfigsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<ListProductInstanceConfigsResponseBodyData> data{};
  shared_ptr<string> msg{};

  ListProductInstanceConfigsResponseBody() {}

  explicit ListProductInstanceConfigsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (msg) {
      res["msg"] = boost::any(*msg);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        ListProductInstanceConfigsResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<ListProductInstanceConfigsResponseBodyData>(model1);
      }
    }
    if (m.find("msg") != m.end() && !m["msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["msg"]));
    }
  }


  virtual ~ListProductInstanceConfigsResponseBody() = default;
};
class ListProductInstanceConfigsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListProductInstanceConfigsResponseBody> body{};

  ListProductInstanceConfigsResponse() {}

  explicit ListProductInstanceConfigsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListProductInstanceConfigsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListProductInstanceConfigsResponseBody>(model1);
      }
    }
  }


  virtual ~ListProductInstanceConfigsResponse() = default;
};
class ListProductInstancesRequestOptions : public Darabonba::Model {
public:
  shared_ptr<bool> filterWithSpecUID{};
  shared_ptr<string> specUID{};

  ListProductInstancesRequestOptions() {}

  explicit ListProductInstancesRequestOptions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (filterWithSpecUID) {
      res["filterWithSpecUID"] = boost::any(*filterWithSpecUID);
    }
    if (specUID) {
      res["specUID"] = boost::any(*specUID);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("filterWithSpecUID") != m.end() && !m["filterWithSpecUID"].empty()) {
      filterWithSpecUID = make_shared<bool>(boost::any_cast<bool>(m["filterWithSpecUID"]));
    }
    if (m.find("specUID") != m.end() && !m["specUID"].empty()) {
      specUID = make_shared<string>(boost::any_cast<string>(m["specUID"]));
    }
  }


  virtual ~ListProductInstancesRequestOptions() = default;
};
class ListProductInstancesRequest : public Darabonba::Model {
public:
  shared_ptr<string> envUID{};
  shared_ptr<ListProductInstancesRequestOptions> options{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> productVersionUID{};

  ListProductInstancesRequest() {}

  explicit ListProductInstancesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (envUID) {
      res["envUID"] = boost::any(*envUID);
    }
    if (options) {
      res["options"] = options ? boost::any(options->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (pageNum) {
      res["pageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (productVersionUID) {
      res["productVersionUID"] = boost::any(*productVersionUID);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("envUID") != m.end() && !m["envUID"].empty()) {
      envUID = make_shared<string>(boost::any_cast<string>(m["envUID"]));
    }
    if (m.find("options") != m.end() && !m["options"].empty()) {
      if (typeid(map<string, boost::any>) == m["options"].type()) {
        ListProductInstancesRequestOptions model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["options"]));
        options = make_shared<ListProductInstancesRequestOptions>(model1);
      }
    }
    if (m.find("pageNum") != m.end() && !m["pageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["pageNum"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("productVersionUID") != m.end() && !m["productVersionUID"].empty()) {
      productVersionUID = make_shared<string>(boost::any_cast<string>(m["productVersionUID"]));
    }
  }


  virtual ~ListProductInstancesRequest() = default;
};
class ListProductInstancesShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> envUID{};
  shared_ptr<string> optionsShrink{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> productVersionUID{};

  ListProductInstancesShrinkRequest() {}

  explicit ListProductInstancesShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (envUID) {
      res["envUID"] = boost::any(*envUID);
    }
    if (optionsShrink) {
      res["options"] = boost::any(*optionsShrink);
    }
    if (pageNum) {
      res["pageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (productVersionUID) {
      res["productVersionUID"] = boost::any(*productVersionUID);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("envUID") != m.end() && !m["envUID"].empty()) {
      envUID = make_shared<string>(boost::any_cast<string>(m["envUID"]));
    }
    if (m.find("options") != m.end() && !m["options"].empty()) {
      optionsShrink = make_shared<string>(boost::any_cast<string>(m["options"]));
    }
    if (m.find("pageNum") != m.end() && !m["pageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["pageNum"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("productVersionUID") != m.end() && !m["productVersionUID"].empty()) {
      productVersionUID = make_shared<string>(boost::any_cast<string>(m["productVersionUID"]));
    }
  }


  virtual ~ListProductInstancesShrinkRequest() = default;
};
class ListProductInstancesResponseBodyDataList : public Darabonba::Model {
public:
  shared_ptr<string> clusterUID{};
  shared_ptr<bool> continuousDeployment{};
  shared_ptr<string> namespace_{};
  shared_ptr<string> productName{};
  shared_ptr<string> productUID{};
  shared_ptr<string> productVersion{};
  shared_ptr<string> productVersionSpecUID{};
  shared_ptr<string> productVersionUID{};
  shared_ptr<string> status{};
  shared_ptr<long> timeout{};
  shared_ptr<string> uid{};

  ListProductInstancesResponseBodyDataList() {}

  explicit ListProductInstancesResponseBodyDataList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterUID) {
      res["clusterUID"] = boost::any(*clusterUID);
    }
    if (continuousDeployment) {
      res["continuousDeployment"] = boost::any(*continuousDeployment);
    }
    if (namespace_) {
      res["namespace"] = boost::any(*namespace_);
    }
    if (productName) {
      res["productName"] = boost::any(*productName);
    }
    if (productUID) {
      res["productUID"] = boost::any(*productUID);
    }
    if (productVersion) {
      res["productVersion"] = boost::any(*productVersion);
    }
    if (productVersionSpecUID) {
      res["productVersionSpecUID"] = boost::any(*productVersionSpecUID);
    }
    if (productVersionUID) {
      res["productVersionUID"] = boost::any(*productVersionUID);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (timeout) {
      res["timeout"] = boost::any(*timeout);
    }
    if (uid) {
      res["uid"] = boost::any(*uid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("clusterUID") != m.end() && !m["clusterUID"].empty()) {
      clusterUID = make_shared<string>(boost::any_cast<string>(m["clusterUID"]));
    }
    if (m.find("continuousDeployment") != m.end() && !m["continuousDeployment"].empty()) {
      continuousDeployment = make_shared<bool>(boost::any_cast<bool>(m["continuousDeployment"]));
    }
    if (m.find("namespace") != m.end() && !m["namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["namespace"]));
    }
    if (m.find("productName") != m.end() && !m["productName"].empty()) {
      productName = make_shared<string>(boost::any_cast<string>(m["productName"]));
    }
    if (m.find("productUID") != m.end() && !m["productUID"].empty()) {
      productUID = make_shared<string>(boost::any_cast<string>(m["productUID"]));
    }
    if (m.find("productVersion") != m.end() && !m["productVersion"].empty()) {
      productVersion = make_shared<string>(boost::any_cast<string>(m["productVersion"]));
    }
    if (m.find("productVersionSpecUID") != m.end() && !m["productVersionSpecUID"].empty()) {
      productVersionSpecUID = make_shared<string>(boost::any_cast<string>(m["productVersionSpecUID"]));
    }
    if (m.find("productVersionUID") != m.end() && !m["productVersionUID"].empty()) {
      productVersionUID = make_shared<string>(boost::any_cast<string>(m["productVersionUID"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("timeout") != m.end() && !m["timeout"].empty()) {
      timeout = make_shared<long>(boost::any_cast<long>(m["timeout"]));
    }
    if (m.find("uid") != m.end() && !m["uid"].empty()) {
      uid = make_shared<string>(boost::any_cast<string>(m["uid"]));
    }
  }


  virtual ~ListProductInstancesResponseBodyDataList() = default;
};
class ListProductInstancesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ListProductInstancesResponseBodyDataList>> list{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> total{};

  ListProductInstancesResponseBodyData() {}

  explicit ListProductInstancesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (list) {
      vector<boost::any> temp1;
      for(auto item1:*list){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["list"] = boost::any(temp1);
    }
    if (pageNum) {
      res["pageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (total) {
      res["total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("list") != m.end() && !m["list"].empty()) {
      if (typeid(vector<boost::any>) == m["list"].type()) {
        vector<ListProductInstancesResponseBodyDataList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["list"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListProductInstancesResponseBodyDataList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        list = make_shared<vector<ListProductInstancesResponseBodyDataList>>(expect1);
      }
    }
    if (m.find("pageNum") != m.end() && !m["pageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["pageNum"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("total") != m.end() && !m["total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["total"]));
    }
  }


  virtual ~ListProductInstancesResponseBodyData() = default;
};
class ListProductInstancesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<ListProductInstancesResponseBodyData> data{};
  shared_ptr<string> msg{};

  ListProductInstancesResponseBody() {}

  explicit ListProductInstancesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (msg) {
      res["msg"] = boost::any(*msg);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        ListProductInstancesResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<ListProductInstancesResponseBodyData>(model1);
      }
    }
    if (m.find("msg") != m.end() && !m["msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["msg"]));
    }
  }


  virtual ~ListProductInstancesResponseBody() = default;
};
class ListProductInstancesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListProductInstancesResponseBody> body{};

  ListProductInstancesResponse() {}

  explicit ListProductInstancesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListProductInstancesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListProductInstancesResponseBody>(model1);
      }
    }
  }


  virtual ~ListProductInstancesResponse() = default;
};
class ListProductVersionConfigsRequest : public Darabonba::Model {
public:
  shared_ptr<string> componentReleaseName{};
  shared_ptr<string> configType{};
  shared_ptr<string> fuzzy{};
  shared_ptr<string> pageNum{};
  shared_ptr<string> pageSize{};
  shared_ptr<string> parameter{};
  shared_ptr<string> scope{};

  ListProductVersionConfigsRequest() {}

  explicit ListProductVersionConfigsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (componentReleaseName) {
      res["componentReleaseName"] = boost::any(*componentReleaseName);
    }
    if (configType) {
      res["configType"] = boost::any(*configType);
    }
    if (fuzzy) {
      res["fuzzy"] = boost::any(*fuzzy);
    }
    if (pageNum) {
      res["pageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (parameter) {
      res["parameter"] = boost::any(*parameter);
    }
    if (scope) {
      res["scope"] = boost::any(*scope);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("componentReleaseName") != m.end() && !m["componentReleaseName"].empty()) {
      componentReleaseName = make_shared<string>(boost::any_cast<string>(m["componentReleaseName"]));
    }
    if (m.find("configType") != m.end() && !m["configType"].empty()) {
      configType = make_shared<string>(boost::any_cast<string>(m["configType"]));
    }
    if (m.find("fuzzy") != m.end() && !m["fuzzy"].empty()) {
      fuzzy = make_shared<string>(boost::any_cast<string>(m["fuzzy"]));
    }
    if (m.find("pageNum") != m.end() && !m["pageNum"].empty()) {
      pageNum = make_shared<string>(boost::any_cast<string>(m["pageNum"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<string>(boost::any_cast<string>(m["pageSize"]));
    }
    if (m.find("parameter") != m.end() && !m["parameter"].empty()) {
      parameter = make_shared<string>(boost::any_cast<string>(m["parameter"]));
    }
    if (m.find("scope") != m.end() && !m["scope"].empty()) {
      scope = make_shared<string>(boost::any_cast<string>(m["scope"]));
    }
  }


  virtual ~ListProductVersionConfigsRequest() = default;
};
class ListProductVersionConfigsResponseBodyDataList : public Darabonba::Model {
public:
  shared_ptr<string> componentName{};
  shared_ptr<string> componentReleaseName{};
  shared_ptr<string> componentVersionUID{};
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<string> parentComponentName{};
  shared_ptr<string> parentComponentReleaseName{};
  shared_ptr<string> parentComponentVersionUID{};
  shared_ptr<string> productVersionUID{};
  shared_ptr<string> scope{};
  shared_ptr<string> uid{};
  shared_ptr<string> value{};
  shared_ptr<string> valueType{};

  ListProductVersionConfigsResponseBodyDataList() {}

  explicit ListProductVersionConfigsResponseBodyDataList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (componentName) {
      res["componentName"] = boost::any(*componentName);
    }
    if (componentReleaseName) {
      res["componentReleaseName"] = boost::any(*componentReleaseName);
    }
    if (componentVersionUID) {
      res["componentVersionUID"] = boost::any(*componentVersionUID);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (parentComponentName) {
      res["parentComponentName"] = boost::any(*parentComponentName);
    }
    if (parentComponentReleaseName) {
      res["parentComponentReleaseName"] = boost::any(*parentComponentReleaseName);
    }
    if (parentComponentVersionUID) {
      res["parentComponentVersionUID"] = boost::any(*parentComponentVersionUID);
    }
    if (productVersionUID) {
      res["productVersionUID"] = boost::any(*productVersionUID);
    }
    if (scope) {
      res["scope"] = boost::any(*scope);
    }
    if (uid) {
      res["uid"] = boost::any(*uid);
    }
    if (value) {
      res["value"] = boost::any(*value);
    }
    if (valueType) {
      res["valueType"] = boost::any(*valueType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("componentName") != m.end() && !m["componentName"].empty()) {
      componentName = make_shared<string>(boost::any_cast<string>(m["componentName"]));
    }
    if (m.find("componentReleaseName") != m.end() && !m["componentReleaseName"].empty()) {
      componentReleaseName = make_shared<string>(boost::any_cast<string>(m["componentReleaseName"]));
    }
    if (m.find("componentVersionUID") != m.end() && !m["componentVersionUID"].empty()) {
      componentVersionUID = make_shared<string>(boost::any_cast<string>(m["componentVersionUID"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("parentComponentName") != m.end() && !m["parentComponentName"].empty()) {
      parentComponentName = make_shared<string>(boost::any_cast<string>(m["parentComponentName"]));
    }
    if (m.find("parentComponentReleaseName") != m.end() && !m["parentComponentReleaseName"].empty()) {
      parentComponentReleaseName = make_shared<string>(boost::any_cast<string>(m["parentComponentReleaseName"]));
    }
    if (m.find("parentComponentVersionUID") != m.end() && !m["parentComponentVersionUID"].empty()) {
      parentComponentVersionUID = make_shared<string>(boost::any_cast<string>(m["parentComponentVersionUID"]));
    }
    if (m.find("productVersionUID") != m.end() && !m["productVersionUID"].empty()) {
      productVersionUID = make_shared<string>(boost::any_cast<string>(m["productVersionUID"]));
    }
    if (m.find("scope") != m.end() && !m["scope"].empty()) {
      scope = make_shared<string>(boost::any_cast<string>(m["scope"]));
    }
    if (m.find("uid") != m.end() && !m["uid"].empty()) {
      uid = make_shared<string>(boost::any_cast<string>(m["uid"]));
    }
    if (m.find("value") != m.end() && !m["value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["value"]));
    }
    if (m.find("valueType") != m.end() && !m["valueType"].empty()) {
      valueType = make_shared<string>(boost::any_cast<string>(m["valueType"]));
    }
  }


  virtual ~ListProductVersionConfigsResponseBodyDataList() = default;
};
class ListProductVersionConfigsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ListProductVersionConfigsResponseBodyDataList>> list{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> total{};

  ListProductVersionConfigsResponseBodyData() {}

  explicit ListProductVersionConfigsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (list) {
      vector<boost::any> temp1;
      for(auto item1:*list){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["list"] = boost::any(temp1);
    }
    if (pageNum) {
      res["pageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (total) {
      res["total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("list") != m.end() && !m["list"].empty()) {
      if (typeid(vector<boost::any>) == m["list"].type()) {
        vector<ListProductVersionConfigsResponseBodyDataList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["list"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListProductVersionConfigsResponseBodyDataList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        list = make_shared<vector<ListProductVersionConfigsResponseBodyDataList>>(expect1);
      }
    }
    if (m.find("pageNum") != m.end() && !m["pageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["pageNum"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("total") != m.end() && !m["total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["total"]));
    }
  }


  virtual ~ListProductVersionConfigsResponseBodyData() = default;
};
class ListProductVersionConfigsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<ListProductVersionConfigsResponseBodyData> data{};
  shared_ptr<string> msg{};

  ListProductVersionConfigsResponseBody() {}

  explicit ListProductVersionConfigsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (msg) {
      res["msg"] = boost::any(*msg);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        ListProductVersionConfigsResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<ListProductVersionConfigsResponseBodyData>(model1);
      }
    }
    if (m.find("msg") != m.end() && !m["msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["msg"]));
    }
  }


  virtual ~ListProductVersionConfigsResponseBody() = default;
};
class ListProductVersionConfigsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListProductVersionConfigsResponseBody> body{};

  ListProductVersionConfigsResponse() {}

  explicit ListProductVersionConfigsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListProductVersionConfigsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListProductVersionConfigsResponseBody>(model1);
      }
    }
  }


  virtual ~ListProductVersionConfigsResponse() = default;
};
class ListProductVersionsRequestPlatforms : public Darabonba::Model {
public:
  shared_ptr<string> architecture{};
  shared_ptr<string> os{};

  ListProductVersionsRequestPlatforms() {}

  explicit ListProductVersionsRequestPlatforms(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (architecture) {
      res["architecture"] = boost::any(*architecture);
    }
    if (os) {
      res["os"] = boost::any(*os);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("architecture") != m.end() && !m["architecture"].empty()) {
      architecture = make_shared<string>(boost::any_cast<string>(m["architecture"]));
    }
    if (m.find("os") != m.end() && !m["os"].empty()) {
      os = make_shared<string>(boost::any_cast<string>(m["os"]));
    }
  }


  virtual ~ListProductVersionsRequestPlatforms() = default;
};
class ListProductVersionsRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  ListProductVersionsRequestTag() {}

  explicit ListProductVersionsRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["key"] = boost::any(*key);
    }
    if (value) {
      res["value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("key") != m.end() && !m["key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["key"]));
    }
    if (m.find("value") != m.end() && !m["value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["value"]));
    }
  }


  virtual ~ListProductVersionsRequestTag() = default;
};
class ListProductVersionsRequest : public Darabonba::Model {
public:
  shared_ptr<string> fuzzy{};
  shared_ptr<string> pageNum{};
  shared_ptr<string> pageSize{};
  shared_ptr<vector<ListProductVersionsRequestPlatforms>> platforms{};
  shared_ptr<string> productName{};
  shared_ptr<string> productUID{};
  shared_ptr<bool> released{};
  shared_ptr<vector<string>> supportedFoundationTypes{};
  shared_ptr<ListProductVersionsRequestTag> tag{};
  shared_ptr<string> version{};

  ListProductVersionsRequest() {}

  explicit ListProductVersionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fuzzy) {
      res["fuzzy"] = boost::any(*fuzzy);
    }
    if (pageNum) {
      res["pageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (platforms) {
      vector<boost::any> temp1;
      for(auto item1:*platforms){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["platforms"] = boost::any(temp1);
    }
    if (productName) {
      res["productName"] = boost::any(*productName);
    }
    if (productUID) {
      res["productUID"] = boost::any(*productUID);
    }
    if (released) {
      res["released"] = boost::any(*released);
    }
    if (supportedFoundationTypes) {
      res["supportedFoundationTypes"] = boost::any(*supportedFoundationTypes);
    }
    if (tag) {
      res["tag"] = tag ? boost::any(tag->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (version) {
      res["version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("fuzzy") != m.end() && !m["fuzzy"].empty()) {
      fuzzy = make_shared<string>(boost::any_cast<string>(m["fuzzy"]));
    }
    if (m.find("pageNum") != m.end() && !m["pageNum"].empty()) {
      pageNum = make_shared<string>(boost::any_cast<string>(m["pageNum"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<string>(boost::any_cast<string>(m["pageSize"]));
    }
    if (m.find("platforms") != m.end() && !m["platforms"].empty()) {
      if (typeid(vector<boost::any>) == m["platforms"].type()) {
        vector<ListProductVersionsRequestPlatforms> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["platforms"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListProductVersionsRequestPlatforms model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        platforms = make_shared<vector<ListProductVersionsRequestPlatforms>>(expect1);
      }
    }
    if (m.find("productName") != m.end() && !m["productName"].empty()) {
      productName = make_shared<string>(boost::any_cast<string>(m["productName"]));
    }
    if (m.find("productUID") != m.end() && !m["productUID"].empty()) {
      productUID = make_shared<string>(boost::any_cast<string>(m["productUID"]));
    }
    if (m.find("released") != m.end() && !m["released"].empty()) {
      released = make_shared<bool>(boost::any_cast<bool>(m["released"]));
    }
    if (m.find("supportedFoundationTypes") != m.end() && !m["supportedFoundationTypes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["supportedFoundationTypes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["supportedFoundationTypes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      supportedFoundationTypes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("tag") != m.end() && !m["tag"].empty()) {
      if (typeid(map<string, boost::any>) == m["tag"].type()) {
        ListProductVersionsRequestTag model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["tag"]));
        tag = make_shared<ListProductVersionsRequestTag>(model1);
      }
    }
    if (m.find("version") != m.end() && !m["version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["version"]));
    }
  }


  virtual ~ListProductVersionsRequest() = default;
};
class ListProductVersionsShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> fuzzy{};
  shared_ptr<string> pageNum{};
  shared_ptr<string> pageSize{};
  shared_ptr<string> platformsShrink{};
  shared_ptr<string> productName{};
  shared_ptr<string> productUID{};
  shared_ptr<bool> released{};
  shared_ptr<string> supportedFoundationTypesShrink{};
  shared_ptr<string> tagShrink{};
  shared_ptr<string> version{};

  ListProductVersionsShrinkRequest() {}

  explicit ListProductVersionsShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fuzzy) {
      res["fuzzy"] = boost::any(*fuzzy);
    }
    if (pageNum) {
      res["pageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (platformsShrink) {
      res["platforms"] = boost::any(*platformsShrink);
    }
    if (productName) {
      res["productName"] = boost::any(*productName);
    }
    if (productUID) {
      res["productUID"] = boost::any(*productUID);
    }
    if (released) {
      res["released"] = boost::any(*released);
    }
    if (supportedFoundationTypesShrink) {
      res["supportedFoundationTypes"] = boost::any(*supportedFoundationTypesShrink);
    }
    if (tagShrink) {
      res["tag"] = boost::any(*tagShrink);
    }
    if (version) {
      res["version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("fuzzy") != m.end() && !m["fuzzy"].empty()) {
      fuzzy = make_shared<string>(boost::any_cast<string>(m["fuzzy"]));
    }
    if (m.find("pageNum") != m.end() && !m["pageNum"].empty()) {
      pageNum = make_shared<string>(boost::any_cast<string>(m["pageNum"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<string>(boost::any_cast<string>(m["pageSize"]));
    }
    if (m.find("platforms") != m.end() && !m["platforms"].empty()) {
      platformsShrink = make_shared<string>(boost::any_cast<string>(m["platforms"]));
    }
    if (m.find("productName") != m.end() && !m["productName"].empty()) {
      productName = make_shared<string>(boost::any_cast<string>(m["productName"]));
    }
    if (m.find("productUID") != m.end() && !m["productUID"].empty()) {
      productUID = make_shared<string>(boost::any_cast<string>(m["productUID"]));
    }
    if (m.find("released") != m.end() && !m["released"].empty()) {
      released = make_shared<bool>(boost::any_cast<bool>(m["released"]));
    }
    if (m.find("supportedFoundationTypes") != m.end() && !m["supportedFoundationTypes"].empty()) {
      supportedFoundationTypesShrink = make_shared<string>(boost::any_cast<string>(m["supportedFoundationTypes"]));
    }
    if (m.find("tag") != m.end() && !m["tag"].empty()) {
      tagShrink = make_shared<string>(boost::any_cast<string>(m["tag"]));
    }
    if (m.find("version") != m.end() && !m["version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["version"]));
    }
  }


  virtual ~ListProductVersionsShrinkRequest() = default;
};
class ListProductVersionsResponseBodyDataListAnnotations : public Darabonba::Model {
public:
  shared_ptr<string> additionalProp1{};
  shared_ptr<string> additionalProp2{};
  shared_ptr<string> additionalProp3{};

  ListProductVersionsResponseBodyDataListAnnotations() {}

  explicit ListProductVersionsResponseBodyDataListAnnotations(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (additionalProp1) {
      res["additionalProp1"] = boost::any(*additionalProp1);
    }
    if (additionalProp2) {
      res["additionalProp2"] = boost::any(*additionalProp2);
    }
    if (additionalProp3) {
      res["additionalProp3"] = boost::any(*additionalProp3);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("additionalProp1") != m.end() && !m["additionalProp1"].empty()) {
      additionalProp1 = make_shared<string>(boost::any_cast<string>(m["additionalProp1"]));
    }
    if (m.find("additionalProp2") != m.end() && !m["additionalProp2"].empty()) {
      additionalProp2 = make_shared<string>(boost::any_cast<string>(m["additionalProp2"]));
    }
    if (m.find("additionalProp3") != m.end() && !m["additionalProp3"].empty()) {
      additionalProp3 = make_shared<string>(boost::any_cast<string>(m["additionalProp3"]));
    }
  }


  virtual ~ListProductVersionsResponseBodyDataListAnnotations() = default;
};
class ListProductVersionsResponseBodyDataListTags : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  ListProductVersionsResponseBodyDataListTags() {}

  explicit ListProductVersionsResponseBodyDataListTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["key"] = boost::any(*key);
    }
    if (value) {
      res["value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("key") != m.end() && !m["key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["key"]));
    }
    if (m.find("value") != m.end() && !m["value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["value"]));
    }
  }


  virtual ~ListProductVersionsResponseBodyDataListTags() = default;
};
class ListProductVersionsResponseBodyDataList : public Darabonba::Model {
public:
  shared_ptr<ListProductVersionsResponseBodyDataListAnnotations> annotations{};
  shared_ptr<string> description{};
  shared_ptr<string> packageURL{};
  shared_ptr<string> productName{};
  shared_ptr<string> productUID{};
  shared_ptr<string> provider{};
  shared_ptr<string> releasedAt{};
  shared_ptr<vector<ListProductVersionsResponseBodyDataListTags>> tags{};
  shared_ptr<string> uid{};
  shared_ptr<string> version{};

  ListProductVersionsResponseBodyDataList() {}

  explicit ListProductVersionsResponseBodyDataList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (annotations) {
      res["annotations"] = annotations ? boost::any(annotations->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (packageURL) {
      res["packageURL"] = boost::any(*packageURL);
    }
    if (productName) {
      res["productName"] = boost::any(*productName);
    }
    if (productUID) {
      res["productUID"] = boost::any(*productUID);
    }
    if (provider) {
      res["provider"] = boost::any(*provider);
    }
    if (releasedAt) {
      res["releasedAt"] = boost::any(*releasedAt);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["tags"] = boost::any(temp1);
    }
    if (uid) {
      res["uid"] = boost::any(*uid);
    }
    if (version) {
      res["version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("annotations") != m.end() && !m["annotations"].empty()) {
      if (typeid(map<string, boost::any>) == m["annotations"].type()) {
        ListProductVersionsResponseBodyDataListAnnotations model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["annotations"]));
        annotations = make_shared<ListProductVersionsResponseBodyDataListAnnotations>(model1);
      }
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("packageURL") != m.end() && !m["packageURL"].empty()) {
      packageURL = make_shared<string>(boost::any_cast<string>(m["packageURL"]));
    }
    if (m.find("productName") != m.end() && !m["productName"].empty()) {
      productName = make_shared<string>(boost::any_cast<string>(m["productName"]));
    }
    if (m.find("productUID") != m.end() && !m["productUID"].empty()) {
      productUID = make_shared<string>(boost::any_cast<string>(m["productUID"]));
    }
    if (m.find("provider") != m.end() && !m["provider"].empty()) {
      provider = make_shared<string>(boost::any_cast<string>(m["provider"]));
    }
    if (m.find("releasedAt") != m.end() && !m["releasedAt"].empty()) {
      releasedAt = make_shared<string>(boost::any_cast<string>(m["releasedAt"]));
    }
    if (m.find("tags") != m.end() && !m["tags"].empty()) {
      if (typeid(vector<boost::any>) == m["tags"].type()) {
        vector<ListProductVersionsResponseBodyDataListTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListProductVersionsResponseBodyDataListTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<ListProductVersionsResponseBodyDataListTags>>(expect1);
      }
    }
    if (m.find("uid") != m.end() && !m["uid"].empty()) {
      uid = make_shared<string>(boost::any_cast<string>(m["uid"]));
    }
    if (m.find("version") != m.end() && !m["version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["version"]));
    }
  }


  virtual ~ListProductVersionsResponseBodyDataList() = default;
};
class ListProductVersionsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ListProductVersionsResponseBodyDataList>> list{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> total{};

  ListProductVersionsResponseBodyData() {}

  explicit ListProductVersionsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (list) {
      vector<boost::any> temp1;
      for(auto item1:*list){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["list"] = boost::any(temp1);
    }
    if (pageNum) {
      res["pageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (total) {
      res["total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("list") != m.end() && !m["list"].empty()) {
      if (typeid(vector<boost::any>) == m["list"].type()) {
        vector<ListProductVersionsResponseBodyDataList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["list"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListProductVersionsResponseBodyDataList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        list = make_shared<vector<ListProductVersionsResponseBodyDataList>>(expect1);
      }
    }
    if (m.find("pageNum") != m.end() && !m["pageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["pageNum"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("total") != m.end() && !m["total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["total"]));
    }
  }


  virtual ~ListProductVersionsResponseBodyData() = default;
};
class ListProductVersionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<ListProductVersionsResponseBodyData> data{};
  shared_ptr<string> msg{};

  ListProductVersionsResponseBody() {}

  explicit ListProductVersionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (msg) {
      res["msg"] = boost::any(*msg);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        ListProductVersionsResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<ListProductVersionsResponseBodyData>(model1);
      }
    }
    if (m.find("msg") != m.end() && !m["msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["msg"]));
    }
  }


  virtual ~ListProductVersionsResponseBody() = default;
};
class ListProductVersionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListProductVersionsResponseBody> body{};

  ListProductVersionsResponse() {}

  explicit ListProductVersionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListProductVersionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListProductVersionsResponseBody>(model1);
      }
    }
  }


  virtual ~ListProductVersionsResponse() = default;
};
class ListProductsRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> fuzzy{};
  shared_ptr<string> name{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};

  ListProductsRequest() {}

  explicit ListProductsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (fuzzy) {
      res["fuzzy"] = boost::any(*fuzzy);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (pageNum) {
      res["pageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("fuzzy") != m.end() && !m["fuzzy"].empty()) {
      fuzzy = make_shared<string>(boost::any_cast<string>(m["fuzzy"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("pageNum") != m.end() && !m["pageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["pageNum"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
  }


  virtual ~ListProductsRequest() = default;
};
class ListProductsResponseBodyDataList : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<string> uid{};

  ListProductsResponseBodyDataList() {}

  explicit ListProductsResponseBodyDataList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (uid) {
      res["uid"] = boost::any(*uid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("uid") != m.end() && !m["uid"].empty()) {
      uid = make_shared<string>(boost::any_cast<string>(m["uid"]));
    }
  }


  virtual ~ListProductsResponseBodyDataList() = default;
};
class ListProductsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ListProductsResponseBodyDataList>> list{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> total{};

  ListProductsResponseBodyData() {}

  explicit ListProductsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (list) {
      vector<boost::any> temp1;
      for(auto item1:*list){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["list"] = boost::any(temp1);
    }
    if (pageNum) {
      res["pageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (total) {
      res["total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("list") != m.end() && !m["list"].empty()) {
      if (typeid(vector<boost::any>) == m["list"].type()) {
        vector<ListProductsResponseBodyDataList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["list"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListProductsResponseBodyDataList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        list = make_shared<vector<ListProductsResponseBodyDataList>>(expect1);
      }
    }
    if (m.find("pageNum") != m.end() && !m["pageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["pageNum"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("total") != m.end() && !m["total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["total"]));
    }
  }


  virtual ~ListProductsResponseBodyData() = default;
};
class ListProductsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<ListProductsResponseBodyData> data{};
  shared_ptr<string> msg{};

  ListProductsResponseBody() {}

  explicit ListProductsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (msg) {
      res["msg"] = boost::any(*msg);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        ListProductsResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<ListProductsResponseBodyData>(model1);
      }
    }
    if (m.find("msg") != m.end() && !m["msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["msg"]));
    }
  }


  virtual ~ListProductsResponseBody() = default;
};
class ListProductsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListProductsResponseBody> body{};

  ListProductsResponse() {}

  explicit ListProductsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListProductsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListProductsResponseBody>(model1);
      }
    }
  }


  virtual ~ListProductsResponse() = default;
};
class ListWorkflowTaskLogsRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> filterValues{};
  shared_ptr<string> orderType{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> workflowType{};
  shared_ptr<string> xuid{};

  ListWorkflowTaskLogsRequest() {}

  explicit ListWorkflowTaskLogsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (filterValues) {
      res["filterValues"] = boost::any(*filterValues);
    }
    if (orderType) {
      res["orderType"] = boost::any(*orderType);
    }
    if (pageNum) {
      res["pageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (workflowType) {
      res["workflowType"] = boost::any(*workflowType);
    }
    if (xuid) {
      res["xuid"] = boost::any(*xuid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("filterValues") != m.end() && !m["filterValues"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["filterValues"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["filterValues"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      filterValues = make_shared<vector<string>>(toVec1);
    }
    if (m.find("orderType") != m.end() && !m["orderType"].empty()) {
      orderType = make_shared<string>(boost::any_cast<string>(m["orderType"]));
    }
    if (m.find("pageNum") != m.end() && !m["pageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["pageNum"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("workflowType") != m.end() && !m["workflowType"].empty()) {
      workflowType = make_shared<string>(boost::any_cast<string>(m["workflowType"]));
    }
    if (m.find("xuid") != m.end() && !m["xuid"].empty()) {
      xuid = make_shared<string>(boost::any_cast<string>(m["xuid"]));
    }
  }


  virtual ~ListWorkflowTaskLogsRequest() = default;
};
class ListWorkflowTaskLogsShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> filterValuesShrink{};
  shared_ptr<string> orderType{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> workflowType{};
  shared_ptr<string> xuid{};

  ListWorkflowTaskLogsShrinkRequest() {}

  explicit ListWorkflowTaskLogsShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (filterValuesShrink) {
      res["filterValues"] = boost::any(*filterValuesShrink);
    }
    if (orderType) {
      res["orderType"] = boost::any(*orderType);
    }
    if (pageNum) {
      res["pageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (workflowType) {
      res["workflowType"] = boost::any(*workflowType);
    }
    if (xuid) {
      res["xuid"] = boost::any(*xuid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("filterValues") != m.end() && !m["filterValues"].empty()) {
      filterValuesShrink = make_shared<string>(boost::any_cast<string>(m["filterValues"]));
    }
    if (m.find("orderType") != m.end() && !m["orderType"].empty()) {
      orderType = make_shared<string>(boost::any_cast<string>(m["orderType"]));
    }
    if (m.find("pageNum") != m.end() && !m["pageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["pageNum"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("workflowType") != m.end() && !m["workflowType"].empty()) {
      workflowType = make_shared<string>(boost::any_cast<string>(m["workflowType"]));
    }
    if (m.find("xuid") != m.end() && !m["xuid"].empty()) {
      xuid = make_shared<string>(boost::any_cast<string>(m["xuid"]));
    }
  }


  virtual ~ListWorkflowTaskLogsShrinkRequest() = default;
};
class ListWorkflowTaskLogsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<string>> list{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> total{};

  ListWorkflowTaskLogsResponseBodyData() {}

  explicit ListWorkflowTaskLogsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (list) {
      res["list"] = boost::any(*list);
    }
    if (pageNum) {
      res["pageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (total) {
      res["total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("list") != m.end() && !m["list"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["list"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["list"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      list = make_shared<vector<string>>(toVec1);
    }
    if (m.find("pageNum") != m.end() && !m["pageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["pageNum"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("total") != m.end() && !m["total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["total"]));
    }
  }


  virtual ~ListWorkflowTaskLogsResponseBodyData() = default;
};
class ListWorkflowTaskLogsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<ListWorkflowTaskLogsResponseBodyData> data{};
  shared_ptr<string> msg{};

  ListWorkflowTaskLogsResponseBody() {}

  explicit ListWorkflowTaskLogsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (msg) {
      res["msg"] = boost::any(*msg);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        ListWorkflowTaskLogsResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<ListWorkflowTaskLogsResponseBodyData>(model1);
      }
    }
    if (m.find("msg") != m.end() && !m["msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["msg"]));
    }
  }


  virtual ~ListWorkflowTaskLogsResponseBody() = default;
};
class ListWorkflowTaskLogsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListWorkflowTaskLogsResponseBody> body{};

  ListWorkflowTaskLogsResponse() {}

  explicit ListWorkflowTaskLogsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListWorkflowTaskLogsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListWorkflowTaskLogsResponseBody>(model1);
      }
    }
  }


  virtual ~ListWorkflowTaskLogsResponse() = default;
};
class PutEnvironmentTunnelRequestTunnelConfig : public Darabonba::Model {
public:
  shared_ptr<string> hostname{};
  shared_ptr<string> password{};
  shared_ptr<string> regionId{};
  shared_ptr<long> sshPort{};
  shared_ptr<string> username{};
  shared_ptr<string> vpcId{};

  PutEnvironmentTunnelRequestTunnelConfig() {}

  explicit PutEnvironmentTunnelRequestTunnelConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (hostname) {
      res["hostname"] = boost::any(*hostname);
    }
    if (password) {
      res["password"] = boost::any(*password);
    }
    if (regionId) {
      res["regionId"] = boost::any(*regionId);
    }
    if (sshPort) {
      res["sshPort"] = boost::any(*sshPort);
    }
    if (username) {
      res["username"] = boost::any(*username);
    }
    if (vpcId) {
      res["vpcId"] = boost::any(*vpcId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("hostname") != m.end() && !m["hostname"].empty()) {
      hostname = make_shared<string>(boost::any_cast<string>(m["hostname"]));
    }
    if (m.find("password") != m.end() && !m["password"].empty()) {
      password = make_shared<string>(boost::any_cast<string>(m["password"]));
    }
    if (m.find("regionId") != m.end() && !m["regionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["regionId"]));
    }
    if (m.find("sshPort") != m.end() && !m["sshPort"].empty()) {
      sshPort = make_shared<long>(boost::any_cast<long>(m["sshPort"]));
    }
    if (m.find("username") != m.end() && !m["username"].empty()) {
      username = make_shared<string>(boost::any_cast<string>(m["username"]));
    }
    if (m.find("vpcId") != m.end() && !m["vpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["vpcId"]));
    }
  }


  virtual ~PutEnvironmentTunnelRequestTunnelConfig() = default;
};
class PutEnvironmentTunnelRequest : public Darabonba::Model {
public:
  shared_ptr<PutEnvironmentTunnelRequestTunnelConfig> tunnelConfig{};
  shared_ptr<string> tunnelType{};

  PutEnvironmentTunnelRequest() {}

  explicit PutEnvironmentTunnelRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tunnelConfig) {
      res["tunnelConfig"] = tunnelConfig ? boost::any(tunnelConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (tunnelType) {
      res["tunnelType"] = boost::any(*tunnelType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("tunnelConfig") != m.end() && !m["tunnelConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["tunnelConfig"].type()) {
        PutEnvironmentTunnelRequestTunnelConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["tunnelConfig"]));
        tunnelConfig = make_shared<PutEnvironmentTunnelRequestTunnelConfig>(model1);
      }
    }
    if (m.find("tunnelType") != m.end() && !m["tunnelType"].empty()) {
      tunnelType = make_shared<string>(boost::any_cast<string>(m["tunnelType"]));
    }
  }


  virtual ~PutEnvironmentTunnelRequest() = default;
};
class PutEnvironmentTunnelResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> uid{};

  PutEnvironmentTunnelResponseBodyData() {}

  explicit PutEnvironmentTunnelResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (uid) {
      res["uid"] = boost::any(*uid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("uid") != m.end() && !m["uid"].empty()) {
      uid = make_shared<string>(boost::any_cast<string>(m["uid"]));
    }
  }


  virtual ~PutEnvironmentTunnelResponseBodyData() = default;
};
class PutEnvironmentTunnelResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<PutEnvironmentTunnelResponseBodyData> data{};
  shared_ptr<string> msg{};

  PutEnvironmentTunnelResponseBody() {}

  explicit PutEnvironmentTunnelResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (msg) {
      res["msg"] = boost::any(*msg);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        PutEnvironmentTunnelResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<PutEnvironmentTunnelResponseBodyData>(model1);
      }
    }
    if (m.find("msg") != m.end() && !m["msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["msg"]));
    }
  }


  virtual ~PutEnvironmentTunnelResponseBody() = default;
};
class PutEnvironmentTunnelResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PutEnvironmentTunnelResponseBody> body{};

  PutEnvironmentTunnelResponse() {}

  explicit PutEnvironmentTunnelResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PutEnvironmentTunnelResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PutEnvironmentTunnelResponseBody>(model1);
      }
    }
  }


  virtual ~PutEnvironmentTunnelResponse() = default;
};
class PutProductInstanceConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> componentUID{};
  shared_ptr<string> componentVersionUID{};
  shared_ptr<string> configUID{};
  shared_ptr<string> description{};
  shared_ptr<string> environmentUID{};
  shared_ptr<string> name{};
  shared_ptr<string> parentComponentName{};
  shared_ptr<string> parentComponentVersionUID{};
  shared_ptr<string> productVersionUID{};
  shared_ptr<string> releaseName{};
  shared_ptr<vector<string>> scope{};
  shared_ptr<string> value{};
  shared_ptr<string> valueType{};

  PutProductInstanceConfigRequest() {}

  explicit PutProductInstanceConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (componentUID) {
      res["componentUID"] = boost::any(*componentUID);
    }
    if (componentVersionUID) {
      res["componentVersionUID"] = boost::any(*componentVersionUID);
    }
    if (configUID) {
      res["configUID"] = boost::any(*configUID);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (environmentUID) {
      res["environmentUID"] = boost::any(*environmentUID);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (parentComponentName) {
      res["parentComponentName"] = boost::any(*parentComponentName);
    }
    if (parentComponentVersionUID) {
      res["parentComponentVersionUID"] = boost::any(*parentComponentVersionUID);
    }
    if (productVersionUID) {
      res["productVersionUID"] = boost::any(*productVersionUID);
    }
    if (releaseName) {
      res["releaseName"] = boost::any(*releaseName);
    }
    if (scope) {
      res["scope"] = boost::any(*scope);
    }
    if (value) {
      res["value"] = boost::any(*value);
    }
    if (valueType) {
      res["valueType"] = boost::any(*valueType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("componentUID") != m.end() && !m["componentUID"].empty()) {
      componentUID = make_shared<string>(boost::any_cast<string>(m["componentUID"]));
    }
    if (m.find("componentVersionUID") != m.end() && !m["componentVersionUID"].empty()) {
      componentVersionUID = make_shared<string>(boost::any_cast<string>(m["componentVersionUID"]));
    }
    if (m.find("configUID") != m.end() && !m["configUID"].empty()) {
      configUID = make_shared<string>(boost::any_cast<string>(m["configUID"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("environmentUID") != m.end() && !m["environmentUID"].empty()) {
      environmentUID = make_shared<string>(boost::any_cast<string>(m["environmentUID"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("parentComponentName") != m.end() && !m["parentComponentName"].empty()) {
      parentComponentName = make_shared<string>(boost::any_cast<string>(m["parentComponentName"]));
    }
    if (m.find("parentComponentVersionUID") != m.end() && !m["parentComponentVersionUID"].empty()) {
      parentComponentVersionUID = make_shared<string>(boost::any_cast<string>(m["parentComponentVersionUID"]));
    }
    if (m.find("productVersionUID") != m.end() && !m["productVersionUID"].empty()) {
      productVersionUID = make_shared<string>(boost::any_cast<string>(m["productVersionUID"]));
    }
    if (m.find("releaseName") != m.end() && !m["releaseName"].empty()) {
      releaseName = make_shared<string>(boost::any_cast<string>(m["releaseName"]));
    }
    if (m.find("scope") != m.end() && !m["scope"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["scope"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["scope"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      scope = make_shared<vector<string>>(toVec1);
    }
    if (m.find("value") != m.end() && !m["value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["value"]));
    }
    if (m.find("valueType") != m.end() && !m["valueType"].empty()) {
      valueType = make_shared<string>(boost::any_cast<string>(m["valueType"]));
    }
  }


  virtual ~PutProductInstanceConfigRequest() = default;
};
class PutProductInstanceConfigResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> uid{};

  PutProductInstanceConfigResponseBodyData() {}

  explicit PutProductInstanceConfigResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (uid) {
      res["uid"] = boost::any(*uid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("uid") != m.end() && !m["uid"].empty()) {
      uid = make_shared<string>(boost::any_cast<string>(m["uid"]));
    }
  }


  virtual ~PutProductInstanceConfigResponseBodyData() = default;
};
class PutProductInstanceConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<PutProductInstanceConfigResponseBodyData> data{};
  shared_ptr<string> msg{};

  PutProductInstanceConfigResponseBody() {}

  explicit PutProductInstanceConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (msg) {
      res["msg"] = boost::any(*msg);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        PutProductInstanceConfigResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<PutProductInstanceConfigResponseBodyData>(model1);
      }
    }
    if (m.find("msg") != m.end() && !m["msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["msg"]));
    }
  }


  virtual ~PutProductInstanceConfigResponseBody() = default;
};
class PutProductInstanceConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PutProductInstanceConfigResponseBody> body{};

  PutProductInstanceConfigResponse() {}

  explicit PutProductInstanceConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PutProductInstanceConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PutProductInstanceConfigResponseBody>(model1);
      }
    }
  }


  virtual ~PutProductInstanceConfigResponse() = default;
};
class SetEnvironmentFoundationReferenceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> msg{};

  SetEnvironmentFoundationReferenceResponseBody() {}

  explicit SetEnvironmentFoundationReferenceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (msg) {
      res["msg"] = boost::any(*msg);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("msg") != m.end() && !m["msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["msg"]));
    }
  }


  virtual ~SetEnvironmentFoundationReferenceResponseBody() = default;
};
class SetEnvironmentFoundationReferenceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SetEnvironmentFoundationReferenceResponseBody> body{};

  SetEnvironmentFoundationReferenceResponse() {}

  explicit SetEnvironmentFoundationReferenceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SetEnvironmentFoundationReferenceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SetEnvironmentFoundationReferenceResponseBody>(model1);
      }
    }
  }


  virtual ~SetEnvironmentFoundationReferenceResponse() = default;
};
class UpdateDeliverableRequestFoundation : public Darabonba::Model {
public:
  shared_ptr<string> clusterConfig{};
  shared_ptr<string> foundationReferenceUID{};
  shared_ptr<string> foundationVersion{};
  shared_ptr<string> foundationVersionUID{};
  shared_ptr<bool> reusable{};

  UpdateDeliverableRequestFoundation() {}

  explicit UpdateDeliverableRequestFoundation(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterConfig) {
      res["clusterConfig"] = boost::any(*clusterConfig);
    }
    if (foundationReferenceUID) {
      res["foundationReferenceUID"] = boost::any(*foundationReferenceUID);
    }
    if (foundationVersion) {
      res["foundationVersion"] = boost::any(*foundationVersion);
    }
    if (foundationVersionUID) {
      res["foundationVersionUID"] = boost::any(*foundationVersionUID);
    }
    if (reusable) {
      res["reusable"] = boost::any(*reusable);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("clusterConfig") != m.end() && !m["clusterConfig"].empty()) {
      clusterConfig = make_shared<string>(boost::any_cast<string>(m["clusterConfig"]));
    }
    if (m.find("foundationReferenceUID") != m.end() && !m["foundationReferenceUID"].empty()) {
      foundationReferenceUID = make_shared<string>(boost::any_cast<string>(m["foundationReferenceUID"]));
    }
    if (m.find("foundationVersion") != m.end() && !m["foundationVersion"].empty()) {
      foundationVersion = make_shared<string>(boost::any_cast<string>(m["foundationVersion"]));
    }
    if (m.find("foundationVersionUID") != m.end() && !m["foundationVersionUID"].empty()) {
      foundationVersionUID = make_shared<string>(boost::any_cast<string>(m["foundationVersionUID"]));
    }
    if (m.find("reusable") != m.end() && !m["reusable"].empty()) {
      reusable = make_shared<bool>(boost::any_cast<bool>(m["reusable"]));
    }
  }


  virtual ~UpdateDeliverableRequestFoundation() = default;
};
class UpdateDeliverableRequestProducts : public Darabonba::Model {
public:
  shared_ptr<string> namespace_{};
  shared_ptr<string> productName{};
  shared_ptr<string> productType{};
  shared_ptr<string> productUID{};
  shared_ptr<string> productVersion{};
  shared_ptr<string> productVersionSpecName{};
  shared_ptr<string> productVersionSpecUID{};
  shared_ptr<string> productVersionUID{};

  UpdateDeliverableRequestProducts() {}

  explicit UpdateDeliverableRequestProducts(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (namespace_) {
      res["namespace"] = boost::any(*namespace_);
    }
    if (productName) {
      res["productName"] = boost::any(*productName);
    }
    if (productType) {
      res["productType"] = boost::any(*productType);
    }
    if (productUID) {
      res["productUID"] = boost::any(*productUID);
    }
    if (productVersion) {
      res["productVersion"] = boost::any(*productVersion);
    }
    if (productVersionSpecName) {
      res["productVersionSpecName"] = boost::any(*productVersionSpecName);
    }
    if (productVersionSpecUID) {
      res["productVersionSpecUID"] = boost::any(*productVersionSpecUID);
    }
    if (productVersionUID) {
      res["productVersionUID"] = boost::any(*productVersionUID);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("namespace") != m.end() && !m["namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["namespace"]));
    }
    if (m.find("productName") != m.end() && !m["productName"].empty()) {
      productName = make_shared<string>(boost::any_cast<string>(m["productName"]));
    }
    if (m.find("productType") != m.end() && !m["productType"].empty()) {
      productType = make_shared<string>(boost::any_cast<string>(m["productType"]));
    }
    if (m.find("productUID") != m.end() && !m["productUID"].empty()) {
      productUID = make_shared<string>(boost::any_cast<string>(m["productUID"]));
    }
    if (m.find("productVersion") != m.end() && !m["productVersion"].empty()) {
      productVersion = make_shared<string>(boost::any_cast<string>(m["productVersion"]));
    }
    if (m.find("productVersionSpecName") != m.end() && !m["productVersionSpecName"].empty()) {
      productVersionSpecName = make_shared<string>(boost::any_cast<string>(m["productVersionSpecName"]));
    }
    if (m.find("productVersionSpecUID") != m.end() && !m["productVersionSpecUID"].empty()) {
      productVersionSpecUID = make_shared<string>(boost::any_cast<string>(m["productVersionSpecUID"]));
    }
    if (m.find("productVersionUID") != m.end() && !m["productVersionUID"].empty()) {
      productVersionUID = make_shared<string>(boost::any_cast<string>(m["productVersionUID"]));
    }
  }


  virtual ~UpdateDeliverableRequestProducts() = default;
};
class UpdateDeliverableRequest : public Darabonba::Model {
public:
  shared_ptr<UpdateDeliverableRequestFoundation> foundation{};
  shared_ptr<vector<UpdateDeliverableRequestProducts>> products{};
  shared_ptr<string> status{};

  UpdateDeliverableRequest() {}

  explicit UpdateDeliverableRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (foundation) {
      res["foundation"] = foundation ? boost::any(foundation->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (products) {
      vector<boost::any> temp1;
      for(auto item1:*products){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["products"] = boost::any(temp1);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("foundation") != m.end() && !m["foundation"].empty()) {
      if (typeid(map<string, boost::any>) == m["foundation"].type()) {
        UpdateDeliverableRequestFoundation model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["foundation"]));
        foundation = make_shared<UpdateDeliverableRequestFoundation>(model1);
      }
    }
    if (m.find("products") != m.end() && !m["products"].empty()) {
      if (typeid(vector<boost::any>) == m["products"].type()) {
        vector<UpdateDeliverableRequestProducts> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["products"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateDeliverableRequestProducts model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        products = make_shared<vector<UpdateDeliverableRequestProducts>>(expect1);
      }
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
  }


  virtual ~UpdateDeliverableRequest() = default;
};
class UpdateDeliverableResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> msg{};

  UpdateDeliverableResponseBody() {}

  explicit UpdateDeliverableResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (msg) {
      res["msg"] = boost::any(*msg);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("msg") != m.end() && !m["msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["msg"]));
    }
  }


  virtual ~UpdateDeliverableResponseBody() = default;
};
class UpdateDeliverableResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateDeliverableResponseBody> body{};

  UpdateDeliverableResponse() {}

  explicit UpdateDeliverableResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateDeliverableResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateDeliverableResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateDeliverableResponse() = default;
};
class UpdateDeliveryInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> deliverableConfigUID{};
  shared_ptr<string> deliverableUID{};
  shared_ptr<string> desc{};

  UpdateDeliveryInstanceRequest() {}

  explicit UpdateDeliveryInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deliverableConfigUID) {
      res["deliverableConfigUID"] = boost::any(*deliverableConfigUID);
    }
    if (deliverableUID) {
      res["deliverableUID"] = boost::any(*deliverableUID);
    }
    if (desc) {
      res["desc"] = boost::any(*desc);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("deliverableConfigUID") != m.end() && !m["deliverableConfigUID"].empty()) {
      deliverableConfigUID = make_shared<string>(boost::any_cast<string>(m["deliverableConfigUID"]));
    }
    if (m.find("deliverableUID") != m.end() && !m["deliverableUID"].empty()) {
      deliverableUID = make_shared<string>(boost::any_cast<string>(m["deliverableUID"]));
    }
    if (m.find("desc") != m.end() && !m["desc"].empty()) {
      desc = make_shared<string>(boost::any_cast<string>(m["desc"]));
    }
  }


  virtual ~UpdateDeliveryInstanceRequest() = default;
};
class UpdateDeliveryInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> msg{};

  UpdateDeliveryInstanceResponseBody() {}

  explicit UpdateDeliveryInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (msg) {
      res["msg"] = boost::any(*msg);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("msg") != m.end() && !m["msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["msg"]));
    }
  }


  virtual ~UpdateDeliveryInstanceResponseBody() = default;
};
class UpdateDeliveryInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateDeliveryInstanceResponseBody> body{};

  UpdateDeliveryInstanceResponse() {}

  explicit UpdateDeliveryInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateDeliveryInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateDeliveryInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateDeliveryInstanceResponse() = default;
};
class UpdateEnvironmentRequestAdvancedConfigs : public Darabonba::Model {
public:
  shared_ptr<bool> enableDeploySimulation{};
  shared_ptr<bool> enableSiteSurvey{};

  UpdateEnvironmentRequestAdvancedConfigs() {}

  explicit UpdateEnvironmentRequestAdvancedConfigs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enableDeploySimulation) {
      res["enableDeploySimulation"] = boost::any(*enableDeploySimulation);
    }
    if (enableSiteSurvey) {
      res["enableSiteSurvey"] = boost::any(*enableSiteSurvey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("enableDeploySimulation") != m.end() && !m["enableDeploySimulation"].empty()) {
      enableDeploySimulation = make_shared<bool>(boost::any_cast<bool>(m["enableDeploySimulation"]));
    }
    if (m.find("enableSiteSurvey") != m.end() && !m["enableSiteSurvey"].empty()) {
      enableSiteSurvey = make_shared<bool>(boost::any_cast<bool>(m["enableSiteSurvey"]));
    }
  }


  virtual ~UpdateEnvironmentRequestAdvancedConfigs() = default;
};
class UpdateEnvironmentRequest : public Darabonba::Model {
public:
  shared_ptr<UpdateEnvironmentRequestAdvancedConfigs> advancedConfigs{};
  shared_ptr<string> description{};
  shared_ptr<string> location{};
  shared_ptr<string> vendorConfig{};

  UpdateEnvironmentRequest() {}

  explicit UpdateEnvironmentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (advancedConfigs) {
      res["advancedConfigs"] = advancedConfigs ? boost::any(advancedConfigs->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (location) {
      res["location"] = boost::any(*location);
    }
    if (vendorConfig) {
      res["vendorConfig"] = boost::any(*vendorConfig);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("advancedConfigs") != m.end() && !m["advancedConfigs"].empty()) {
      if (typeid(map<string, boost::any>) == m["advancedConfigs"].type()) {
        UpdateEnvironmentRequestAdvancedConfigs model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["advancedConfigs"]));
        advancedConfigs = make_shared<UpdateEnvironmentRequestAdvancedConfigs>(model1);
      }
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("location") != m.end() && !m["location"].empty()) {
      location = make_shared<string>(boost::any_cast<string>(m["location"]));
    }
    if (m.find("vendorConfig") != m.end() && !m["vendorConfig"].empty()) {
      vendorConfig = make_shared<string>(boost::any_cast<string>(m["vendorConfig"]));
    }
  }


  virtual ~UpdateEnvironmentRequest() = default;
};
class UpdateEnvironmentResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> msg{};

  UpdateEnvironmentResponseBody() {}

  explicit UpdateEnvironmentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (msg) {
      res["msg"] = boost::any(*msg);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("msg") != m.end() && !m["msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["msg"]));
    }
  }


  virtual ~UpdateEnvironmentResponseBody() = default;
};
class UpdateEnvironmentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateEnvironmentResponseBody> body{};

  UpdateEnvironmentResponse() {}

  explicit UpdateEnvironmentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateEnvironmentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateEnvironmentResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateEnvironmentResponse() = default;
};
class UpdateEnvironmentNodeRequestTaints : public Darabonba::Model {
public:
  shared_ptr<string> effect{};
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  UpdateEnvironmentNodeRequestTaints() {}

  explicit UpdateEnvironmentNodeRequestTaints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (effect) {
      res["effect"] = boost::any(*effect);
    }
    if (key) {
      res["key"] = boost::any(*key);
    }
    if (value) {
      res["value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("effect") != m.end() && !m["effect"].empty()) {
      effect = make_shared<string>(boost::any_cast<string>(m["effect"]));
    }
    if (m.find("key") != m.end() && !m["key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["key"]));
    }
    if (m.find("value") != m.end() && !m["value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["value"]));
    }
  }


  virtual ~UpdateEnvironmentNodeRequestTaints() = default;
};
class UpdateEnvironmentNodeRequest : public Darabonba::Model {
public:
  shared_ptr<string> applicationDisk{};
  shared_ptr<string> etcdDisk{};
  shared_ptr<map<string, boost::any>> labels{};
  shared_ptr<string> rootPassword{};
  shared_ptr<vector<UpdateEnvironmentNodeRequestTaints>> taints{};
  shared_ptr<string> tridentSystemDisk{};
  shared_ptr<long> tridentSystemSizeDisk{};

  UpdateEnvironmentNodeRequest() {}

  explicit UpdateEnvironmentNodeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationDisk) {
      res["applicationDisk"] = boost::any(*applicationDisk);
    }
    if (etcdDisk) {
      res["etcdDisk"] = boost::any(*etcdDisk);
    }
    if (labels) {
      res["labels"] = boost::any(*labels);
    }
    if (rootPassword) {
      res["rootPassword"] = boost::any(*rootPassword);
    }
    if (taints) {
      vector<boost::any> temp1;
      for(auto item1:*taints){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["taints"] = boost::any(temp1);
    }
    if (tridentSystemDisk) {
      res["tridentSystemDisk"] = boost::any(*tridentSystemDisk);
    }
    if (tridentSystemSizeDisk) {
      res["tridentSystemSizeDisk"] = boost::any(*tridentSystemSizeDisk);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("applicationDisk") != m.end() && !m["applicationDisk"].empty()) {
      applicationDisk = make_shared<string>(boost::any_cast<string>(m["applicationDisk"]));
    }
    if (m.find("etcdDisk") != m.end() && !m["etcdDisk"].empty()) {
      etcdDisk = make_shared<string>(boost::any_cast<string>(m["etcdDisk"]));
    }
    if (m.find("labels") != m.end() && !m["labels"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["labels"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      labels = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("rootPassword") != m.end() && !m["rootPassword"].empty()) {
      rootPassword = make_shared<string>(boost::any_cast<string>(m["rootPassword"]));
    }
    if (m.find("taints") != m.end() && !m["taints"].empty()) {
      if (typeid(vector<boost::any>) == m["taints"].type()) {
        vector<UpdateEnvironmentNodeRequestTaints> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["taints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateEnvironmentNodeRequestTaints model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        taints = make_shared<vector<UpdateEnvironmentNodeRequestTaints>>(expect1);
      }
    }
    if (m.find("tridentSystemDisk") != m.end() && !m["tridentSystemDisk"].empty()) {
      tridentSystemDisk = make_shared<string>(boost::any_cast<string>(m["tridentSystemDisk"]));
    }
    if (m.find("tridentSystemSizeDisk") != m.end() && !m["tridentSystemSizeDisk"].empty()) {
      tridentSystemSizeDisk = make_shared<long>(boost::any_cast<long>(m["tridentSystemSizeDisk"]));
    }
  }


  virtual ~UpdateEnvironmentNodeRequest() = default;
};
class UpdateEnvironmentNodeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> msg{};

  UpdateEnvironmentNodeResponseBody() {}

  explicit UpdateEnvironmentNodeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (msg) {
      res["msg"] = boost::any(*msg);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("msg") != m.end() && !m["msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["msg"]));
    }
  }


  virtual ~UpdateEnvironmentNodeResponseBody() = default;
};
class UpdateEnvironmentNodeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateEnvironmentNodeResponseBody> body{};

  UpdateEnvironmentNodeResponse() {}

  explicit UpdateEnvironmentNodeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateEnvironmentNodeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateEnvironmentNodeResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateEnvironmentNodeResponse() = default;
};
class UpdateEnvironmentProductVersionRequest : public Darabonba::Model {
public:
  shared_ptr<string> oldProductVersionSpecUID{};
  shared_ptr<string> oldProductVersionUID{};
  shared_ptr<string> productVersionSpecUID{};
  shared_ptr<string> productVersionUID{};

  UpdateEnvironmentProductVersionRequest() {}

  explicit UpdateEnvironmentProductVersionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (oldProductVersionSpecUID) {
      res["oldProductVersionSpecUID"] = boost::any(*oldProductVersionSpecUID);
    }
    if (oldProductVersionUID) {
      res["oldProductVersionUID"] = boost::any(*oldProductVersionUID);
    }
    if (productVersionSpecUID) {
      res["productVersionSpecUID"] = boost::any(*productVersionSpecUID);
    }
    if (productVersionUID) {
      res["productVersionUID"] = boost::any(*productVersionUID);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("oldProductVersionSpecUID") != m.end() && !m["oldProductVersionSpecUID"].empty()) {
      oldProductVersionSpecUID = make_shared<string>(boost::any_cast<string>(m["oldProductVersionSpecUID"]));
    }
    if (m.find("oldProductVersionUID") != m.end() && !m["oldProductVersionUID"].empty()) {
      oldProductVersionUID = make_shared<string>(boost::any_cast<string>(m["oldProductVersionUID"]));
    }
    if (m.find("productVersionSpecUID") != m.end() && !m["productVersionSpecUID"].empty()) {
      productVersionSpecUID = make_shared<string>(boost::any_cast<string>(m["productVersionSpecUID"]));
    }
    if (m.find("productVersionUID") != m.end() && !m["productVersionUID"].empty()) {
      productVersionUID = make_shared<string>(boost::any_cast<string>(m["productVersionUID"]));
    }
  }


  virtual ~UpdateEnvironmentProductVersionRequest() = default;
};
class UpdateEnvironmentProductVersionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> msg{};

  UpdateEnvironmentProductVersionResponseBody() {}

  explicit UpdateEnvironmentProductVersionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (msg) {
      res["msg"] = boost::any(*msg);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("msg") != m.end() && !m["msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["msg"]));
    }
  }


  virtual ~UpdateEnvironmentProductVersionResponseBody() = default;
};
class UpdateEnvironmentProductVersionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateEnvironmentProductVersionResponseBody> body{};

  UpdateEnvironmentProductVersionResponse() {}

  explicit UpdateEnvironmentProductVersionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateEnvironmentProductVersionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateEnvironmentProductVersionResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateEnvironmentProductVersionResponse() = default;
};
class UpdateFoundationComponentReferenceRequest : public Darabonba::Model {
public:
  shared_ptr<string> componentOrchestrationValues{};
  shared_ptr<bool> enable{};

  UpdateFoundationComponentReferenceRequest() {}

  explicit UpdateFoundationComponentReferenceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (componentOrchestrationValues) {
      res["componentOrchestrationValues"] = boost::any(*componentOrchestrationValues);
    }
    if (enable) {
      res["enable"] = boost::any(*enable);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("componentOrchestrationValues") != m.end() && !m["componentOrchestrationValues"].empty()) {
      componentOrchestrationValues = make_shared<string>(boost::any_cast<string>(m["componentOrchestrationValues"]));
    }
    if (m.find("enable") != m.end() && !m["enable"].empty()) {
      enable = make_shared<bool>(boost::any_cast<bool>(m["enable"]));
    }
  }


  virtual ~UpdateFoundationComponentReferenceRequest() = default;
};
class UpdateFoundationComponentReferenceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> msg{};

  UpdateFoundationComponentReferenceResponseBody() {}

  explicit UpdateFoundationComponentReferenceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (msg) {
      res["msg"] = boost::any(*msg);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("msg") != m.end() && !m["msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["msg"]));
    }
  }


  virtual ~UpdateFoundationComponentReferenceResponseBody() = default;
};
class UpdateFoundationComponentReferenceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateFoundationComponentReferenceResponseBody> body{};

  UpdateFoundationComponentReferenceResponse() {}

  explicit UpdateFoundationComponentReferenceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateFoundationComponentReferenceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateFoundationComponentReferenceResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateFoundationComponentReferenceResponse() = default;
};
class UpdateFoundationReferenceRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterConfig{};

  UpdateFoundationReferenceRequest() {}

  explicit UpdateFoundationReferenceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterConfig) {
      res["clusterConfig"] = boost::any(*clusterConfig);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("clusterConfig") != m.end() && !m["clusterConfig"].empty()) {
      clusterConfig = make_shared<string>(boost::any_cast<string>(m["clusterConfig"]));
    }
  }


  virtual ~UpdateFoundationReferenceRequest() = default;
};
class UpdateFoundationReferenceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> msg{};

  UpdateFoundationReferenceResponseBody() {}

  explicit UpdateFoundationReferenceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (msg) {
      res["msg"] = boost::any(*msg);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("msg") != m.end() && !m["msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["msg"]));
    }
  }


  virtual ~UpdateFoundationReferenceResponseBody() = default;
};
class UpdateFoundationReferenceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateFoundationReferenceResponseBody> body{};

  UpdateFoundationReferenceResponse() {}

  explicit UpdateFoundationReferenceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateFoundationReferenceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateFoundationReferenceResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateFoundationReferenceResponse() = default;
};
class UpdateProductRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> categories{};
  shared_ptr<string> description{};
  shared_ptr<string> displayName{};
  shared_ptr<string> vendor{};

  UpdateProductRequest() {}

  explicit UpdateProductRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (categories) {
      res["categories"] = boost::any(*categories);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (displayName) {
      res["displayName"] = boost::any(*displayName);
    }
    if (vendor) {
      res["vendor"] = boost::any(*vendor);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("categories") != m.end() && !m["categories"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["categories"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["categories"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      categories = make_shared<vector<string>>(toVec1);
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("displayName") != m.end() && !m["displayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["displayName"]));
    }
    if (m.find("vendor") != m.end() && !m["vendor"].empty()) {
      vendor = make_shared<string>(boost::any_cast<string>(m["vendor"]));
    }
  }


  virtual ~UpdateProductRequest() = default;
};
class UpdateProductResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> msg{};

  UpdateProductResponseBody() {}

  explicit UpdateProductResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (msg) {
      res["msg"] = boost::any(*msg);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("msg") != m.end() && !m["msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["msg"]));
    }
  }


  virtual ~UpdateProductResponseBody() = default;
};
class UpdateProductResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateProductResponseBody> body{};

  UpdateProductResponse() {}

  explicit UpdateProductResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateProductResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateProductResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateProductResponse() = default;
};
class UpdateProductComponentVersionRequestPolicyMultiCluster : public Darabonba::Model {
public:
  shared_ptr<bool> autoInstall{};
  shared_ptr<vector<string>> targetClusters{};

  UpdateProductComponentVersionRequestPolicyMultiCluster() {}

  explicit UpdateProductComponentVersionRequestPolicyMultiCluster(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoInstall) {
      res["autoInstall"] = boost::any(*autoInstall);
    }
    if (targetClusters) {
      res["targetClusters"] = boost::any(*targetClusters);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("autoInstall") != m.end() && !m["autoInstall"].empty()) {
      autoInstall = make_shared<bool>(boost::any_cast<bool>(m["autoInstall"]));
    }
    if (m.find("targetClusters") != m.end() && !m["targetClusters"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["targetClusters"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["targetClusters"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      targetClusters = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~UpdateProductComponentVersionRequestPolicyMultiCluster() = default;
};
class UpdateProductComponentVersionRequestPolicy : public Darabonba::Model {
public:
  shared_ptr<UpdateProductComponentVersionRequestPolicyMultiCluster> multiCluster{};

  UpdateProductComponentVersionRequestPolicy() {}

  explicit UpdateProductComponentVersionRequestPolicy(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (multiCluster) {
      res["multiCluster"] = multiCluster ? boost::any(multiCluster->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("multiCluster") != m.end() && !m["multiCluster"].empty()) {
      if (typeid(map<string, boost::any>) == m["multiCluster"].type()) {
        UpdateProductComponentVersionRequestPolicyMultiCluster model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["multiCluster"]));
        multiCluster = make_shared<UpdateProductComponentVersionRequestPolicyMultiCluster>(model1);
      }
    }
  }


  virtual ~UpdateProductComponentVersionRequestPolicy() = default;
};
class UpdateProductComponentVersionRequest : public Darabonba::Model {
public:
  shared_ptr<string> componentOrchestrationValues{};
  shared_ptr<string> componentSpecificationUid{};
  shared_ptr<string> componentSpecificationValues{};
  shared_ptr<bool> enable{};
  shared_ptr<string> newComponentVersionUID{};
  shared_ptr<UpdateProductComponentVersionRequestPolicy> policy{};
  shared_ptr<string> releaseName{};
  shared_ptr<bool> unsetComponentVersionSpec{};

  UpdateProductComponentVersionRequest() {}

  explicit UpdateProductComponentVersionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (componentOrchestrationValues) {
      res["componentOrchestrationValues"] = boost::any(*componentOrchestrationValues);
    }
    if (componentSpecificationUid) {
      res["componentSpecificationUid"] = boost::any(*componentSpecificationUid);
    }
    if (componentSpecificationValues) {
      res["componentSpecificationValues"] = boost::any(*componentSpecificationValues);
    }
    if (enable) {
      res["enable"] = boost::any(*enable);
    }
    if (newComponentVersionUID) {
      res["newComponentVersionUID"] = boost::any(*newComponentVersionUID);
    }
    if (policy) {
      res["policy"] = policy ? boost::any(policy->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (releaseName) {
      res["releaseName"] = boost::any(*releaseName);
    }
    if (unsetComponentVersionSpec) {
      res["unsetComponentVersionSpec"] = boost::any(*unsetComponentVersionSpec);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("componentOrchestrationValues") != m.end() && !m["componentOrchestrationValues"].empty()) {
      componentOrchestrationValues = make_shared<string>(boost::any_cast<string>(m["componentOrchestrationValues"]));
    }
    if (m.find("componentSpecificationUid") != m.end() && !m["componentSpecificationUid"].empty()) {
      componentSpecificationUid = make_shared<string>(boost::any_cast<string>(m["componentSpecificationUid"]));
    }
    if (m.find("componentSpecificationValues") != m.end() && !m["componentSpecificationValues"].empty()) {
      componentSpecificationValues = make_shared<string>(boost::any_cast<string>(m["componentSpecificationValues"]));
    }
    if (m.find("enable") != m.end() && !m["enable"].empty()) {
      enable = make_shared<bool>(boost::any_cast<bool>(m["enable"]));
    }
    if (m.find("newComponentVersionUID") != m.end() && !m["newComponentVersionUID"].empty()) {
      newComponentVersionUID = make_shared<string>(boost::any_cast<string>(m["newComponentVersionUID"]));
    }
    if (m.find("policy") != m.end() && !m["policy"].empty()) {
      if (typeid(map<string, boost::any>) == m["policy"].type()) {
        UpdateProductComponentVersionRequestPolicy model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["policy"]));
        policy = make_shared<UpdateProductComponentVersionRequestPolicy>(model1);
      }
    }
    if (m.find("releaseName") != m.end() && !m["releaseName"].empty()) {
      releaseName = make_shared<string>(boost::any_cast<string>(m["releaseName"]));
    }
    if (m.find("unsetComponentVersionSpec") != m.end() && !m["unsetComponentVersionSpec"].empty()) {
      unsetComponentVersionSpec = make_shared<bool>(boost::any_cast<bool>(m["unsetComponentVersionSpec"]));
    }
  }


  virtual ~UpdateProductComponentVersionRequest() = default;
};
class UpdateProductComponentVersionResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> relationUID{};

  UpdateProductComponentVersionResponseBodyData() {}

  explicit UpdateProductComponentVersionResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (relationUID) {
      res["relationUID"] = boost::any(*relationUID);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("relationUID") != m.end() && !m["relationUID"].empty()) {
      relationUID = make_shared<string>(boost::any_cast<string>(m["relationUID"]));
    }
  }


  virtual ~UpdateProductComponentVersionResponseBodyData() = default;
};
class UpdateProductComponentVersionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<UpdateProductComponentVersionResponseBodyData> data{};
  shared_ptr<string> msg{};

  UpdateProductComponentVersionResponseBody() {}

  explicit UpdateProductComponentVersionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (msg) {
      res["msg"] = boost::any(*msg);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        UpdateProductComponentVersionResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<UpdateProductComponentVersionResponseBodyData>(model1);
      }
    }
    if (m.find("msg") != m.end() && !m["msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["msg"]));
    }
  }


  virtual ~UpdateProductComponentVersionResponseBody() = default;
};
class UpdateProductComponentVersionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateProductComponentVersionResponseBody> body{};

  UpdateProductComponentVersionResponse() {}

  explicit UpdateProductComponentVersionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateProductComponentVersionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateProductComponentVersionResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateProductComponentVersionResponse() = default;
};
class UpdateProductFoundationVersionRequest : public Darabonba::Model {
public:
  shared_ptr<string> foundationVersionUID{};

  UpdateProductFoundationVersionRequest() {}

  explicit UpdateProductFoundationVersionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (foundationVersionUID) {
      res["foundationVersionUID"] = boost::any(*foundationVersionUID);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("foundationVersionUID") != m.end() && !m["foundationVersionUID"].empty()) {
      foundationVersionUID = make_shared<string>(boost::any_cast<string>(m["foundationVersionUID"]));
    }
  }


  virtual ~UpdateProductFoundationVersionRequest() = default;
};
class UpdateProductFoundationVersionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> msg{};

  UpdateProductFoundationVersionResponseBody() {}

  explicit UpdateProductFoundationVersionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (msg) {
      res["msg"] = boost::any(*msg);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("msg") != m.end() && !m["msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["msg"]));
    }
  }


  virtual ~UpdateProductFoundationVersionResponseBody() = default;
};
class UpdateProductFoundationVersionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateProductFoundationVersionResponseBody> body{};

  UpdateProductFoundationVersionResponse() {}

  explicit UpdateProductFoundationVersionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateProductFoundationVersionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateProductFoundationVersionResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateProductFoundationVersionResponse() = default;
};
class UpdateProductVersionRequest : public Darabonba::Model {
public:
  shared_ptr<string> action{};
  shared_ptr<bool> continuousIntegration{};
  shared_ptr<string> description{};
  shared_ptr<string> entry{};
  shared_ptr<long> timeout{};
  shared_ptr<string> version{};

  UpdateProductVersionRequest() {}

  explicit UpdateProductVersionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (action) {
      res["action"] = boost::any(*action);
    }
    if (continuousIntegration) {
      res["continuousIntegration"] = boost::any(*continuousIntegration);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (entry) {
      res["entry"] = boost::any(*entry);
    }
    if (timeout) {
      res["timeout"] = boost::any(*timeout);
    }
    if (version) {
      res["version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("action") != m.end() && !m["action"].empty()) {
      action = make_shared<string>(boost::any_cast<string>(m["action"]));
    }
    if (m.find("continuousIntegration") != m.end() && !m["continuousIntegration"].empty()) {
      continuousIntegration = make_shared<bool>(boost::any_cast<bool>(m["continuousIntegration"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("entry") != m.end() && !m["entry"].empty()) {
      entry = make_shared<string>(boost::any_cast<string>(m["entry"]));
    }
    if (m.find("timeout") != m.end() && !m["timeout"].empty()) {
      timeout = make_shared<long>(boost::any_cast<long>(m["timeout"]));
    }
    if (m.find("version") != m.end() && !m["version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["version"]));
    }
  }


  virtual ~UpdateProductVersionRequest() = default;
};
class UpdateProductVersionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> msg{};

  UpdateProductVersionResponseBody() {}

  explicit UpdateProductVersionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (msg) {
      res["msg"] = boost::any(*msg);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("msg") != m.end() && !m["msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["msg"]));
    }
  }


  virtual ~UpdateProductVersionResponseBody() = default;
};
class UpdateProductVersionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateProductVersionResponseBody> body{};

  UpdateProductVersionResponse() {}

  explicit UpdateProductVersionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateProductVersionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateProductVersionResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateProductVersionResponse() = default;
};
class UpdateProductVersionConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> componentVersionUID{};
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<string> parentComponentVersionUID{};
  shared_ptr<string> value{};
  shared_ptr<string> valueType{};

  UpdateProductVersionConfigRequest() {}

  explicit UpdateProductVersionConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (componentVersionUID) {
      res["componentVersionUID"] = boost::any(*componentVersionUID);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (parentComponentVersionUID) {
      res["parentComponentVersionUID"] = boost::any(*parentComponentVersionUID);
    }
    if (value) {
      res["value"] = boost::any(*value);
    }
    if (valueType) {
      res["valueType"] = boost::any(*valueType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("componentVersionUID") != m.end() && !m["componentVersionUID"].empty()) {
      componentVersionUID = make_shared<string>(boost::any_cast<string>(m["componentVersionUID"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("parentComponentVersionUID") != m.end() && !m["parentComponentVersionUID"].empty()) {
      parentComponentVersionUID = make_shared<string>(boost::any_cast<string>(m["parentComponentVersionUID"]));
    }
    if (m.find("value") != m.end() && !m["value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["value"]));
    }
    if (m.find("valueType") != m.end() && !m["valueType"].empty()) {
      valueType = make_shared<string>(boost::any_cast<string>(m["valueType"]));
    }
  }


  virtual ~UpdateProductVersionConfigRequest() = default;
};
class UpdateProductVersionConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> msg{};
  shared_ptr<string> requestId{};

  UpdateProductVersionConfigResponseBody() {}

  explicit UpdateProductVersionConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (msg) {
      res["msg"] = boost::any(*msg);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("msg") != m.end() && !m["msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["msg"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~UpdateProductVersionConfigResponseBody() = default;
};
class UpdateProductVersionConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateProductVersionConfigResponseBody> body{};

  UpdateProductVersionConfigResponse() {}

  explicit UpdateProductVersionConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateProductVersionConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateProductVersionConfigResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateProductVersionConfigResponse() = default;
};
class ValidateEnvironmentTunnelRequestTunnelConfig : public Darabonba::Model {
public:
  shared_ptr<string> hostname{};
  shared_ptr<string> password{};
  shared_ptr<string> regionId{};
  shared_ptr<long> sshPort{};
  shared_ptr<string> username{};
  shared_ptr<string> vpcId{};

  ValidateEnvironmentTunnelRequestTunnelConfig() {}

  explicit ValidateEnvironmentTunnelRequestTunnelConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (hostname) {
      res["hostname"] = boost::any(*hostname);
    }
    if (password) {
      res["password"] = boost::any(*password);
    }
    if (regionId) {
      res["regionId"] = boost::any(*regionId);
    }
    if (sshPort) {
      res["sshPort"] = boost::any(*sshPort);
    }
    if (username) {
      res["username"] = boost::any(*username);
    }
    if (vpcId) {
      res["vpcId"] = boost::any(*vpcId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("hostname") != m.end() && !m["hostname"].empty()) {
      hostname = make_shared<string>(boost::any_cast<string>(m["hostname"]));
    }
    if (m.find("password") != m.end() && !m["password"].empty()) {
      password = make_shared<string>(boost::any_cast<string>(m["password"]));
    }
    if (m.find("regionId") != m.end() && !m["regionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["regionId"]));
    }
    if (m.find("sshPort") != m.end() && !m["sshPort"].empty()) {
      sshPort = make_shared<long>(boost::any_cast<long>(m["sshPort"]));
    }
    if (m.find("username") != m.end() && !m["username"].empty()) {
      username = make_shared<string>(boost::any_cast<string>(m["username"]));
    }
    if (m.find("vpcId") != m.end() && !m["vpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["vpcId"]));
    }
  }


  virtual ~ValidateEnvironmentTunnelRequestTunnelConfig() = default;
};
class ValidateEnvironmentTunnelRequest : public Darabonba::Model {
public:
  shared_ptr<ValidateEnvironmentTunnelRequestTunnelConfig> tunnelConfig{};
  shared_ptr<string> tunnelType{};

  ValidateEnvironmentTunnelRequest() {}

  explicit ValidateEnvironmentTunnelRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tunnelConfig) {
      res["tunnelConfig"] = tunnelConfig ? boost::any(tunnelConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (tunnelType) {
      res["tunnelType"] = boost::any(*tunnelType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("tunnelConfig") != m.end() && !m["tunnelConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["tunnelConfig"].type()) {
        ValidateEnvironmentTunnelRequestTunnelConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["tunnelConfig"]));
        tunnelConfig = make_shared<ValidateEnvironmentTunnelRequestTunnelConfig>(model1);
      }
    }
    if (m.find("tunnelType") != m.end() && !m["tunnelType"].empty()) {
      tunnelType = make_shared<string>(boost::any_cast<string>(m["tunnelType"]));
    }
  }


  virtual ~ValidateEnvironmentTunnelRequest() = default;
};
class ValidateEnvironmentTunnelResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> msg{};

  ValidateEnvironmentTunnelResponseBody() {}

  explicit ValidateEnvironmentTunnelResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (msg) {
      res["msg"] = boost::any(*msg);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("msg") != m.end() && !m["msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["msg"]));
    }
  }


  virtual ~ValidateEnvironmentTunnelResponseBody() = default;
};
class ValidateEnvironmentTunnelResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ValidateEnvironmentTunnelResponseBody> body{};

  ValidateEnvironmentTunnelResponse() {}

  explicit ValidateEnvironmentTunnelResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ValidateEnvironmentTunnelResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ValidateEnvironmentTunnelResponseBody>(model1);
      }
    }
  }


  virtual ~ValidateEnvironmentTunnelResponse() = default;
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
  AddEnvironmentNodesResponse addEnvironmentNodesWithOptions(shared_ptr<string> uid,
                                                             shared_ptr<AddEnvironmentNodesRequest> request,
                                                             shared_ptr<map<string, string>> headers,
                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddEnvironmentNodesResponse addEnvironmentNodes(shared_ptr<string> uid, shared_ptr<AddEnvironmentNodesRequest> request);
  AddEnvironmentProductVersionsResponse addEnvironmentProductVersionsWithOptions(shared_ptr<string> uid,
                                                                                 shared_ptr<AddEnvironmentProductVersionsRequest> request,
                                                                                 shared_ptr<map<string, string>> headers,
                                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddEnvironmentProductVersionsResponse addEnvironmentProductVersions(shared_ptr<string> uid, shared_ptr<AddEnvironmentProductVersionsRequest> request);
  AddProductComponentVersionResponse addProductComponentVersionWithOptions(shared_ptr<string> uid,
                                                                           shared_ptr<string> componentVersionUID,
                                                                           shared_ptr<AddProductComponentVersionRequest> request,
                                                                           shared_ptr<map<string, string>> headers,
                                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddProductComponentVersionResponse addProductComponentVersion(shared_ptr<string> uid, shared_ptr<string> componentVersionUID, shared_ptr<AddProductComponentVersionRequest> request);
  AddProductVersionConfigResponse addProductVersionConfigWithOptions(shared_ptr<string> uid,
                                                                     shared_ptr<AddProductVersionConfigRequest> request,
                                                                     shared_ptr<map<string, string>> headers,
                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddProductVersionConfigResponse addProductVersionConfig(shared_ptr<string> uid, shared_ptr<AddProductVersionConfigRequest> request);
  AddResourceSnapshotResponse addResourceSnapshotWithOptions(shared_ptr<AddResourceSnapshotRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddResourceSnapshotResponse addResourceSnapshot(shared_ptr<AddResourceSnapshotRequest> request);
  BatchAddEnvironmentNodesResponse batchAddEnvironmentNodesWithOptions(shared_ptr<string> uid,
                                                                       shared_ptr<BatchAddEnvironmentNodesRequest> request,
                                                                       shared_ptr<map<string, string>> headers,
                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  BatchAddEnvironmentNodesResponse batchAddEnvironmentNodes(shared_ptr<string> uid, shared_ptr<BatchAddEnvironmentNodesRequest> request);
  BatchAddProductVersionConfigResponse batchAddProductVersionConfigWithOptions(shared_ptr<string> uid,
                                                                               shared_ptr<BatchAddProductVersionConfigRequest> request,
                                                                               shared_ptr<map<string, string>> headers,
                                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  BatchAddProductVersionConfigResponse batchAddProductVersionConfig(shared_ptr<string> uid, shared_ptr<BatchAddProductVersionConfigRequest> request);
  CreateDeliverableResponse createDeliverableWithOptions(shared_ptr<CreateDeliverableRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateDeliverableResponse createDeliverable(shared_ptr<CreateDeliverableRequest> request);
  CreateDeliveryInstanceResponse createDeliveryInstanceWithOptions(shared_ptr<CreateDeliveryInstanceRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateDeliveryInstanceResponse createDeliveryInstance(shared_ptr<CreateDeliveryInstanceRequest> request);
  CreateDeliveryPackageResponse createDeliveryPackageWithOptions(shared_ptr<CreateDeliveryPackageRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateDeliveryPackageResponse createDeliveryPackage(shared_ptr<CreateDeliveryPackageRequest> request);
  CreateEnvironmentResponse createEnvironmentWithOptions(shared_ptr<CreateEnvironmentRequest> request, shared_ptr<CreateEnvironmentHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateEnvironmentResponse createEnvironment(shared_ptr<CreateEnvironmentRequest> request);
  CreateEnvironmentLicenseResponse createEnvironmentLicenseWithOptions(shared_ptr<string> uid,
                                                                       shared_ptr<CreateEnvironmentLicenseRequest> request,
                                                                       shared_ptr<map<string, string>> headers,
                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateEnvironmentLicenseResponse createEnvironmentLicense(shared_ptr<string> uid, shared_ptr<CreateEnvironmentLicenseRequest> request);
  CreateFoundationReferenceResponse createFoundationReferenceWithOptions(shared_ptr<CreateFoundationReferenceRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateFoundationReferenceResponse createFoundationReference(shared_ptr<CreateFoundationReferenceRequest> request);
  CreateProductResponse createProductWithOptions(shared_ptr<CreateProductRequest> request, shared_ptr<CreateProductHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateProductResponse createProduct(shared_ptr<CreateProductRequest> request);
  CreateProductDeploymentResponse createProductDeploymentWithOptions(shared_ptr<CreateProductDeploymentRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateProductDeploymentResponse createProductDeployment(shared_ptr<CreateProductDeploymentRequest> request);
  CreateProductVersionResponse createProductVersionWithOptions(shared_ptr<string> uid,
                                                               shared_ptr<CreateProductVersionRequest> request,
                                                               shared_ptr<map<string, string>> headers,
                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateProductVersionResponse createProductVersion(shared_ptr<string> uid, shared_ptr<CreateProductVersionRequest> request);
  CreateProductVersionPackageResponse createProductVersionPackageWithOptions(shared_ptr<string> uid,
                                                                             shared_ptr<CreateProductVersionPackageRequest> request,
                                                                             shared_ptr<CreateProductVersionPackageHeaders> headers,
                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateProductVersionPackageResponse createProductVersionPackage(shared_ptr<string> uid, shared_ptr<CreateProductVersionPackageRequest> request);
  DeleteEnvironmentResponse deleteEnvironmentWithOptions(shared_ptr<string> uid, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteEnvironmentResponse deleteEnvironment(shared_ptr<string> uid);
  DeleteEnvironmentLicenseResponse deleteEnvironmentLicenseWithOptions(shared_ptr<string> uid,
                                                                       shared_ptr<string> licenseUID,
                                                                       shared_ptr<map<string, string>> headers,
                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteEnvironmentLicenseResponse deleteEnvironmentLicense(shared_ptr<string> uid, shared_ptr<string> licenseUID);
  DeleteEnvironmentNodeResponse deleteEnvironmentNodeWithOptions(shared_ptr<string> uid,
                                                                 shared_ptr<string> nodeUID,
                                                                 shared_ptr<map<string, string>> headers,
                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteEnvironmentNodeResponse deleteEnvironmentNode(shared_ptr<string> uid, shared_ptr<string> nodeUID);
  DeleteEnvironmentProductVersionResponse deleteEnvironmentProductVersionWithOptions(shared_ptr<string> uid,
                                                                                     shared_ptr<string> productVersionUID,
                                                                                     shared_ptr<map<string, string>> headers,
                                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteEnvironmentProductVersionResponse deleteEnvironmentProductVersion(shared_ptr<string> uid, shared_ptr<string> productVersionUID);
  DeleteProductResponse deleteProductWithOptions(shared_ptr<string> uid, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteProductResponse deleteProduct(shared_ptr<string> uid);
  DeleteProductComponentVersionResponse deleteProductComponentVersionWithOptions(shared_ptr<string> uid,
                                                                                 shared_ptr<string> relationUID,
                                                                                 shared_ptr<map<string, string>> headers,
                                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteProductComponentVersionResponse deleteProductComponentVersion(shared_ptr<string> uid, shared_ptr<string> relationUID);
  DeleteProductInstanceConfigResponse deleteProductInstanceConfigWithOptions(shared_ptr<string> configUID,
                                                                             shared_ptr<DeleteProductInstanceConfigRequest> request,
                                                                             shared_ptr<map<string, string>> headers,
                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteProductInstanceConfigResponse deleteProductInstanceConfig(shared_ptr<string> configUID, shared_ptr<DeleteProductInstanceConfigRequest> request);
  DeleteProductVersionResponse deleteProductVersionWithOptions(shared_ptr<string> uid, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteProductVersionResponse deleteProductVersion(shared_ptr<string> uid);
  DeleteProductVersionConfigResponse deleteProductVersionConfigWithOptions(shared_ptr<string> uid,
                                                                           shared_ptr<string> configUID,
                                                                           shared_ptr<map<string, string>> headers,
                                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteProductVersionConfigResponse deleteProductVersionConfig(shared_ptr<string> uid, shared_ptr<string> configUID);
  GenerateProductInstanceDeploymentConfigResponse generateProductInstanceDeploymentConfigWithOptions(shared_ptr<GenerateProductInstanceDeploymentConfigRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GenerateProductInstanceDeploymentConfigResponse generateProductInstanceDeploymentConfig(shared_ptr<GenerateProductInstanceDeploymentConfigRequest> request);
  GetComponentResponse getComponentWithOptions(shared_ptr<string> uid, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetComponentResponse getComponent(shared_ptr<string> uid);
  GetComponentVersionResponse getComponentVersionWithOptions(shared_ptr<string> uid,
                                                             shared_ptr<string> versionUID,
                                                             shared_ptr<GetComponentVersionRequest> request,
                                                             shared_ptr<map<string, string>> headers,
                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetComponentVersionResponse getComponentVersion(shared_ptr<string> uid, shared_ptr<string> versionUID, shared_ptr<GetComponentVersionRequest> request);
  GetDeliverableResponse getDeliverableWithOptions(shared_ptr<string> uid, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetDeliverableResponse getDeliverable(shared_ptr<string> uid);
  GetDeliveryPackageResponse getDeliveryPackageWithOptions(shared_ptr<string> uid, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetDeliveryPackageResponse getDeliveryPackage(shared_ptr<string> uid);
  GetEnvironmentResponse getEnvironmentWithOptions(shared_ptr<string> uid,
                                                   shared_ptr<GetEnvironmentRequest> tmpReq,
                                                   shared_ptr<map<string, string>> headers,
                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetEnvironmentResponse getEnvironment(shared_ptr<string> uid, shared_ptr<GetEnvironmentRequest> request);
  GetEnvironmentDeliveryInstanceResponse getEnvironmentDeliveryInstanceWithOptions(shared_ptr<GetEnvironmentDeliveryInstanceRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetEnvironmentDeliveryInstanceResponse getEnvironmentDeliveryInstance(shared_ptr<GetEnvironmentDeliveryInstanceRequest> request);
  GetEnvironmentLicenseResponse getEnvironmentLicenseWithOptions(shared_ptr<string> uid,
                                                                 shared_ptr<string> licenseUID,
                                                                 shared_ptr<GetEnvironmentLicenseRequest> tmpReq,
                                                                 shared_ptr<map<string, string>> headers,
                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetEnvironmentLicenseResponse getEnvironmentLicense(shared_ptr<string> uid, shared_ptr<string> licenseUID, shared_ptr<GetEnvironmentLicenseRequest> request);
  GetEnvironmentNodeResponse getEnvironmentNodeWithOptions(shared_ptr<string> uid,
                                                           shared_ptr<string> nodeUID,
                                                           shared_ptr<map<string, string>> headers,
                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetEnvironmentNodeResponse getEnvironmentNode(shared_ptr<string> uid, shared_ptr<string> nodeUID);
  GetFoundationComponentReferenceResponse getFoundationComponentReferenceWithOptions(shared_ptr<string> componentReferenceUID,
                                                                                     shared_ptr<string> uid,
                                                                                     shared_ptr<map<string, string>> headers,
                                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetFoundationComponentReferenceResponse getFoundationComponentReference(shared_ptr<string> componentReferenceUID, shared_ptr<string> uid);
  GetFoundationReferenceResponse getFoundationReferenceWithOptions(shared_ptr<string> uid, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetFoundationReferenceResponse getFoundationReference(shared_ptr<string> uid);
  GetFoundationVersionResponse getFoundationVersionWithOptions(shared_ptr<string> uid, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetFoundationVersionResponse getFoundationVersion(shared_ptr<string> uid);
  GetProductResponse getProductWithOptions(shared_ptr<string> uid,
                                           shared_ptr<GetProductRequest> request,
                                           shared_ptr<map<string, string>> headers,
                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetProductResponse getProduct(shared_ptr<string> uid, shared_ptr<GetProductRequest> request);
  GetProductComponentVersionResponse getProductComponentVersionWithOptions(shared_ptr<string> relationUID,
                                                                           shared_ptr<string> uid,
                                                                           shared_ptr<map<string, string>> headers,
                                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetProductComponentVersionResponse getProductComponentVersion(shared_ptr<string> relationUID, shared_ptr<string> uid);
  GetProductDeploymentResponse getProductDeploymentWithOptions(shared_ptr<string> deploymentUID,
                                                               shared_ptr<GetProductDeploymentRequest> request,
                                                               shared_ptr<map<string, string>> headers,
                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetProductDeploymentResponse getProductDeployment(shared_ptr<string> deploymentUID, shared_ptr<GetProductDeploymentRequest> request);
  GetProductVersionResponse getProductVersionWithOptions(shared_ptr<string> uid,
                                                         shared_ptr<GetProductVersionRequest> request,
                                                         shared_ptr<map<string, string>> headers,
                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetProductVersionResponse getProductVersion(shared_ptr<string> uid, shared_ptr<GetProductVersionRequest> request);
  GetProductVersionDifferencesResponse getProductVersionDifferencesWithOptions(shared_ptr<string> uid,
                                                                               shared_ptr<string> versionUID,
                                                                               shared_ptr<GetProductVersionDifferencesRequest> request,
                                                                               shared_ptr<map<string, string>> headers,
                                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetProductVersionDifferencesResponse getProductVersionDifferences(shared_ptr<string> uid, shared_ptr<string> versionUID, shared_ptr<GetProductVersionDifferencesRequest> request);
  GetProductVersionPackageResponse getProductVersionPackageWithOptions(shared_ptr<string> uid,
                                                                       shared_ptr<GetProductVersionPackageRequest> request,
                                                                       shared_ptr<map<string, string>> headers,
                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetProductVersionPackageResponse getProductVersionPackage(shared_ptr<string> uid, shared_ptr<GetProductVersionPackageRequest> request);
  GetResourceSnapshotResponse getResourceSnapshotWithOptions(shared_ptr<GetResourceSnapshotRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetResourceSnapshotResponse getResourceSnapshot(shared_ptr<GetResourceSnapshotRequest> request);
  GetWorkflowStatusResponse getWorkflowStatusWithOptions(shared_ptr<GetWorkflowStatusRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetWorkflowStatusResponse getWorkflowStatus(shared_ptr<GetWorkflowStatusRequest> request);
  InitEnvironmentResourceResponse initEnvironmentResourceWithOptions(shared_ptr<string> uid,
                                                                     shared_ptr<InitEnvironmentResourceRequest> request,
                                                                     shared_ptr<map<string, string>> headers,
                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  InitEnvironmentResourceResponse initEnvironmentResource(shared_ptr<string> uid, shared_ptr<InitEnvironmentResourceRequest> request);
  ListComponentVersionsResponse listComponentVersionsWithOptions(shared_ptr<string> uid,
                                                                 shared_ptr<ListComponentVersionsRequest> tmpReq,
                                                                 shared_ptr<map<string, string>> headers,
                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListComponentVersionsResponse listComponentVersions(shared_ptr<string> uid, shared_ptr<ListComponentVersionsRequest> request);
  ListComponentsResponse listComponentsWithOptions(shared_ptr<ListComponentsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListComponentsResponse listComponents(shared_ptr<ListComponentsRequest> request);
  ListDeliveryInstanceChangeRecordsResponse listDeliveryInstanceChangeRecordsWithOptions(shared_ptr<string> uid, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListDeliveryInstanceChangeRecordsResponse listDeliveryInstanceChangeRecords(shared_ptr<string> uid);
  ListDeliveryPackageResponse listDeliveryPackageWithOptions(shared_ptr<ListDeliveryPackageRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListDeliveryPackageResponse listDeliveryPackage(shared_ptr<ListDeliveryPackageRequest> request);
  ListEnvironmentLicensesResponse listEnvironmentLicensesWithOptions(shared_ptr<string> uid,
                                                                     shared_ptr<ListEnvironmentLicensesRequest> request,
                                                                     shared_ptr<map<string, string>> headers,
                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListEnvironmentLicensesResponse listEnvironmentLicenses(shared_ptr<string> uid, shared_ptr<ListEnvironmentLicensesRequest> request);
  ListEnvironmentNodesResponse listEnvironmentNodesWithOptions(shared_ptr<string> uid,
                                                               shared_ptr<ListEnvironmentNodesRequest> request,
                                                               shared_ptr<map<string, string>> headers,
                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListEnvironmentNodesResponse listEnvironmentNodes(shared_ptr<string> uid, shared_ptr<ListEnvironmentNodesRequest> request);
  ListEnvironmentTunnelsResponse listEnvironmentTunnelsWithOptions(shared_ptr<string> uid, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListEnvironmentTunnelsResponse listEnvironmentTunnels(shared_ptr<string> uid);
  ListEnvironmentsResponse listEnvironmentsWithOptions(shared_ptr<ListEnvironmentsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListEnvironmentsResponse listEnvironments(shared_ptr<ListEnvironmentsRequest> request);
  ListFoundationComponentVersionsResponse listFoundationComponentVersionsWithOptions(shared_ptr<string> uid,
                                                                                     shared_ptr<ListFoundationComponentVersionsRequest> request,
                                                                                     shared_ptr<map<string, string>> headers,
                                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListFoundationComponentVersionsResponse listFoundationComponentVersions(shared_ptr<string> uid, shared_ptr<ListFoundationComponentVersionsRequest> request);
  ListFoundationReferenceComponentsResponse listFoundationReferenceComponentsWithOptions(shared_ptr<ListFoundationReferenceComponentsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListFoundationReferenceComponentsResponse listFoundationReferenceComponents(shared_ptr<ListFoundationReferenceComponentsRequest> request);
  ListFoundationVersionsResponse listFoundationVersionsWithOptions(shared_ptr<ListFoundationVersionsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListFoundationVersionsResponse listFoundationVersions(shared_ptr<ListFoundationVersionsRequest> request);
  ListProductComponentVersionsResponse listProductComponentVersionsWithOptions(shared_ptr<string> uid,
                                                                               shared_ptr<ListProductComponentVersionsRequest> request,
                                                                               shared_ptr<map<string, string>> headers,
                                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListProductComponentVersionsResponse listProductComponentVersions(shared_ptr<string> uid, shared_ptr<ListProductComponentVersionsRequest> request);
  ListProductDeploymentsResponse listProductDeploymentsWithOptions(shared_ptr<ListProductDeploymentsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListProductDeploymentsResponse listProductDeployments(shared_ptr<ListProductDeploymentsRequest> request);
  ListProductEnvironmentsResponse listProductEnvironmentsWithOptions(shared_ptr<string> uid,
                                                                     shared_ptr<ListProductEnvironmentsRequest> tmpReq,
                                                                     shared_ptr<map<string, string>> headers,
                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListProductEnvironmentsResponse listProductEnvironments(shared_ptr<string> uid, shared_ptr<ListProductEnvironmentsRequest> request);
  ListProductFoundationReferencesResponse listProductFoundationReferencesWithOptions(shared_ptr<string> uid, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListProductFoundationReferencesResponse listProductFoundationReferences(shared_ptr<string> uid);
  ListProductInstanceConfigsResponse listProductInstanceConfigsWithOptions(shared_ptr<ListProductInstanceConfigsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListProductInstanceConfigsResponse listProductInstanceConfigs(shared_ptr<ListProductInstanceConfigsRequest> request);
  ListProductInstancesResponse listProductInstancesWithOptions(shared_ptr<ListProductInstancesRequest> tmpReq, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListProductInstancesResponse listProductInstances(shared_ptr<ListProductInstancesRequest> request);
  ListProductVersionConfigsResponse listProductVersionConfigsWithOptions(shared_ptr<string> uid,
                                                                         shared_ptr<ListProductVersionConfigsRequest> request,
                                                                         shared_ptr<map<string, string>> headers,
                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListProductVersionConfigsResponse listProductVersionConfigs(shared_ptr<string> uid, shared_ptr<ListProductVersionConfigsRequest> request);
  ListProductVersionsResponse listProductVersionsWithOptions(shared_ptr<ListProductVersionsRequest> tmpReq, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListProductVersionsResponse listProductVersions(shared_ptr<ListProductVersionsRequest> request);
  ListProductsResponse listProductsWithOptions(shared_ptr<ListProductsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListProductsResponse listProducts(shared_ptr<ListProductsRequest> request);
  ListWorkflowTaskLogsResponse listWorkflowTaskLogsWithOptions(shared_ptr<string> stepName,
                                                               shared_ptr<string> taskName,
                                                               shared_ptr<ListWorkflowTaskLogsRequest> tmpReq,
                                                               shared_ptr<map<string, string>> headers,
                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListWorkflowTaskLogsResponse listWorkflowTaskLogs(shared_ptr<string> stepName, shared_ptr<string> taskName, shared_ptr<ListWorkflowTaskLogsRequest> request);
  PutEnvironmentTunnelResponse putEnvironmentTunnelWithOptions(shared_ptr<string> uid,
                                                               shared_ptr<PutEnvironmentTunnelRequest> request,
                                                               shared_ptr<map<string, string>> headers,
                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PutEnvironmentTunnelResponse putEnvironmentTunnel(shared_ptr<string> uid, shared_ptr<PutEnvironmentTunnelRequest> request);
  PutProductInstanceConfigResponse putProductInstanceConfigWithOptions(shared_ptr<PutProductInstanceConfigRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PutProductInstanceConfigResponse putProductInstanceConfig(shared_ptr<PutProductInstanceConfigRequest> request);
  SetEnvironmentFoundationReferenceResponse setEnvironmentFoundationReferenceWithOptions(shared_ptr<string> uid,
                                                                                         shared_ptr<string> foundationReferenceUID,
                                                                                         shared_ptr<map<string, string>> headers,
                                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetEnvironmentFoundationReferenceResponse setEnvironmentFoundationReference(shared_ptr<string> uid, shared_ptr<string> foundationReferenceUID);
  UpdateDeliverableResponse updateDeliverableWithOptions(shared_ptr<string> uid,
                                                         shared_ptr<UpdateDeliverableRequest> request,
                                                         shared_ptr<map<string, string>> headers,
                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateDeliverableResponse updateDeliverable(shared_ptr<string> uid, shared_ptr<UpdateDeliverableRequest> request);
  UpdateDeliveryInstanceResponse updateDeliveryInstanceWithOptions(shared_ptr<string> uid,
                                                                   shared_ptr<UpdateDeliveryInstanceRequest> request,
                                                                   shared_ptr<map<string, string>> headers,
                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateDeliveryInstanceResponse updateDeliveryInstance(shared_ptr<string> uid, shared_ptr<UpdateDeliveryInstanceRequest> request);
  UpdateEnvironmentResponse updateEnvironmentWithOptions(shared_ptr<string> uid,
                                                         shared_ptr<UpdateEnvironmentRequest> request,
                                                         shared_ptr<map<string, string>> headers,
                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateEnvironmentResponse updateEnvironment(shared_ptr<string> uid, shared_ptr<UpdateEnvironmentRequest> request);
  UpdateEnvironmentNodeResponse updateEnvironmentNodeWithOptions(shared_ptr<string> uid,
                                                                 shared_ptr<string> nodeUID,
                                                                 shared_ptr<UpdateEnvironmentNodeRequest> request,
                                                                 shared_ptr<map<string, string>> headers,
                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateEnvironmentNodeResponse updateEnvironmentNode(shared_ptr<string> uid, shared_ptr<string> nodeUID, shared_ptr<UpdateEnvironmentNodeRequest> request);
  UpdateEnvironmentProductVersionResponse updateEnvironmentProductVersionWithOptions(shared_ptr<string> uid,
                                                                                     shared_ptr<UpdateEnvironmentProductVersionRequest> request,
                                                                                     shared_ptr<map<string, string>> headers,
                                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateEnvironmentProductVersionResponse updateEnvironmentProductVersion(shared_ptr<string> uid, shared_ptr<UpdateEnvironmentProductVersionRequest> request);
  UpdateFoundationComponentReferenceResponse updateFoundationComponentReferenceWithOptions(shared_ptr<string> uid,
                                                                                           shared_ptr<string> componentReferenceUID,
                                                                                           shared_ptr<UpdateFoundationComponentReferenceRequest> request,
                                                                                           shared_ptr<map<string, string>> headers,
                                                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateFoundationComponentReferenceResponse updateFoundationComponentReference(shared_ptr<string> uid, shared_ptr<string> componentReferenceUID, shared_ptr<UpdateFoundationComponentReferenceRequest> request);
  UpdateFoundationReferenceResponse updateFoundationReferenceWithOptions(shared_ptr<string> uid,
                                                                         shared_ptr<UpdateFoundationReferenceRequest> request,
                                                                         shared_ptr<map<string, string>> headers,
                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateFoundationReferenceResponse updateFoundationReference(shared_ptr<string> uid, shared_ptr<UpdateFoundationReferenceRequest> request);
  UpdateProductResponse updateProductWithOptions(shared_ptr<string> uid,
                                                 shared_ptr<UpdateProductRequest> request,
                                                 shared_ptr<map<string, string>> headers,
                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateProductResponse updateProduct(shared_ptr<string> uid, shared_ptr<UpdateProductRequest> request);
  UpdateProductComponentVersionResponse updateProductComponentVersionWithOptions(shared_ptr<string> uid,
                                                                                 shared_ptr<string> relationUID,
                                                                                 shared_ptr<UpdateProductComponentVersionRequest> request,
                                                                                 shared_ptr<map<string, string>> headers,
                                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateProductComponentVersionResponse updateProductComponentVersion(shared_ptr<string> uid, shared_ptr<string> relationUID, shared_ptr<UpdateProductComponentVersionRequest> request);
  UpdateProductFoundationVersionResponse updateProductFoundationVersionWithOptions(shared_ptr<string> uid,
                                                                                   shared_ptr<UpdateProductFoundationVersionRequest> request,
                                                                                   shared_ptr<map<string, string>> headers,
                                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateProductFoundationVersionResponse updateProductFoundationVersion(shared_ptr<string> uid, shared_ptr<UpdateProductFoundationVersionRequest> request);
  UpdateProductVersionResponse updateProductVersionWithOptions(shared_ptr<string> uid,
                                                               shared_ptr<UpdateProductVersionRequest> request,
                                                               shared_ptr<map<string, string>> headers,
                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateProductVersionResponse updateProductVersion(shared_ptr<string> uid, shared_ptr<UpdateProductVersionRequest> request);
  UpdateProductVersionConfigResponse updateProductVersionConfigWithOptions(shared_ptr<string> uid,
                                                                           shared_ptr<string> configUID,
                                                                           shared_ptr<UpdateProductVersionConfigRequest> request,
                                                                           shared_ptr<map<string, string>> headers,
                                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateProductVersionConfigResponse updateProductVersionConfig(shared_ptr<string> uid, shared_ptr<string> configUID, shared_ptr<UpdateProductVersionConfigRequest> request);
  ValidateEnvironmentTunnelResponse validateEnvironmentTunnelWithOptions(shared_ptr<string> uid,
                                                                         shared_ptr<ValidateEnvironmentTunnelRequest> request,
                                                                         shared_ptr<map<string, string>> headers,
                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ValidateEnvironmentTunnelResponse validateEnvironmentTunnel(shared_ptr<string> uid, shared_ptr<ValidateEnvironmentTunnelRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Adp20210720

#endif
