// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYGOVERNANCEKUBERNETESCLUSTERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYGOVERNANCEKUBERNETESCLUSTERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class ModifyGovernanceKubernetesClusterRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyGovernanceKubernetesClusterRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(NamespaceInfos, namespaceInfos_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyGovernanceKubernetesClusterRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(NamespaceInfos, namespaceInfos_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ModifyGovernanceKubernetesClusterRequest() = default ;
    ModifyGovernanceKubernetesClusterRequest(const ModifyGovernanceKubernetesClusterRequest &) = default ;
    ModifyGovernanceKubernetesClusterRequest(ModifyGovernanceKubernetesClusterRequest &&) = default ;
    ModifyGovernanceKubernetesClusterRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyGovernanceKubernetesClusterRequest() = default ;
    ModifyGovernanceKubernetesClusterRequest& operator=(const ModifyGovernanceKubernetesClusterRequest &) = default ;
    ModifyGovernanceKubernetesClusterRequest& operator=(ModifyGovernanceKubernetesClusterRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class NamespaceInfos : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const NamespaceInfos& obj) { 
        DARABONBA_PTR_TO_JSON(MseNamespace, mseNamespace_);
        DARABONBA_PTR_TO_JSON(Name, name_);
      };
      friend void from_json(const Darabonba::Json& j, NamespaceInfos& obj) { 
        DARABONBA_PTR_FROM_JSON(MseNamespace, mseNamespace_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
      };
      NamespaceInfos() = default ;
      NamespaceInfos(const NamespaceInfos &) = default ;
      NamespaceInfos(NamespaceInfos &&) = default ;
      NamespaceInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~NamespaceInfos() = default ;
      NamespaceInfos& operator=(const NamespaceInfos &) = default ;
      NamespaceInfos& operator=(NamespaceInfos &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->mseNamespace_ == nullptr
        && this->name_ == nullptr; };
      // mseNamespace Field Functions 
      bool hasMseNamespace() const { return this->mseNamespace_ != nullptr;};
      void deleteMseNamespace() { this->mseNamespace_ = nullptr;};
      inline string getMseNamespace() const { DARABONBA_PTR_GET_DEFAULT(mseNamespace_, "") };
      inline NamespaceInfos& setMseNamespace(string mseNamespace) { DARABONBA_PTR_SET_VALUE(mseNamespace_, mseNamespace) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline NamespaceInfos& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    protected:
      // The microservice namespace. If you do not specify this parameter, Microservice Governance is not enabled for the namespace.
      shared_ptr<string> mseNamespace_ {};
      // The name of the Kubernetes namespace.
      shared_ptr<string> name_ {};
    };

    virtual bool empty() const override { return this->acceptLanguage_ == nullptr
        && this->clusterId_ == nullptr && this->namespaceInfos_ == nullptr && this->regionId_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string getAcceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline ModifyGovernanceKubernetesClusterRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline ModifyGovernanceKubernetesClusterRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // namespaceInfos Field Functions 
    bool hasNamespaceInfos() const { return this->namespaceInfos_ != nullptr;};
    void deleteNamespaceInfos() { this->namespaceInfos_ = nullptr;};
    inline const vector<ModifyGovernanceKubernetesClusterRequest::NamespaceInfos> & getNamespaceInfos() const { DARABONBA_PTR_GET_CONST(namespaceInfos_, vector<ModifyGovernanceKubernetesClusterRequest::NamespaceInfos>) };
    inline vector<ModifyGovernanceKubernetesClusterRequest::NamespaceInfos> getNamespaceInfos() { DARABONBA_PTR_GET(namespaceInfos_, vector<ModifyGovernanceKubernetesClusterRequest::NamespaceInfos>) };
    inline ModifyGovernanceKubernetesClusterRequest& setNamespaceInfos(const vector<ModifyGovernanceKubernetesClusterRequest::NamespaceInfos> & namespaceInfos) { DARABONBA_PTR_SET_VALUE(namespaceInfos_, namespaceInfos) };
    inline ModifyGovernanceKubernetesClusterRequest& setNamespaceInfos(vector<ModifyGovernanceKubernetesClusterRequest::NamespaceInfos> && namespaceInfos) { DARABONBA_PTR_SET_RVALUE(namespaceInfos_, namespaceInfos) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyGovernanceKubernetesClusterRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The language of the response. Valid values:
    // 
    // *   zh: Chinese
    // *   en: English
    shared_ptr<string> acceptLanguage_ {};
    // The ID of the instance.
    // 
    // This parameter is required.
    shared_ptr<string> clusterId_ {};
    // The information about the namespace for which Microservices Engine(MSE) Microservices Governance is enabled.
    shared_ptr<vector<ModifyGovernanceKubernetesClusterRequest::NamespaceInfos>> namespaceInfos_ {};
    // The ID of the region in which the instance resides. The region is supported by MSE.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
