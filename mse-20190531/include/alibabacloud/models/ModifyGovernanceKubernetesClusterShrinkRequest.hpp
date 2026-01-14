// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYGOVERNANCEKUBERNETESCLUSTERSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYGOVERNANCEKUBERNETESCLUSTERSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class ModifyGovernanceKubernetesClusterShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyGovernanceKubernetesClusterShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(NamespaceInfos, namespaceInfosShrink_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyGovernanceKubernetesClusterShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(NamespaceInfos, namespaceInfosShrink_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ModifyGovernanceKubernetesClusterShrinkRequest() = default ;
    ModifyGovernanceKubernetesClusterShrinkRequest(const ModifyGovernanceKubernetesClusterShrinkRequest &) = default ;
    ModifyGovernanceKubernetesClusterShrinkRequest(ModifyGovernanceKubernetesClusterShrinkRequest &&) = default ;
    ModifyGovernanceKubernetesClusterShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyGovernanceKubernetesClusterShrinkRequest() = default ;
    ModifyGovernanceKubernetesClusterShrinkRequest& operator=(const ModifyGovernanceKubernetesClusterShrinkRequest &) = default ;
    ModifyGovernanceKubernetesClusterShrinkRequest& operator=(ModifyGovernanceKubernetesClusterShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceptLanguage_ == nullptr
        && this->clusterId_ == nullptr && this->namespaceInfosShrink_ == nullptr && this->regionId_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string getAcceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline ModifyGovernanceKubernetesClusterShrinkRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline ModifyGovernanceKubernetesClusterShrinkRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // namespaceInfosShrink Field Functions 
    bool hasNamespaceInfosShrink() const { return this->namespaceInfosShrink_ != nullptr;};
    void deleteNamespaceInfosShrink() { this->namespaceInfosShrink_ = nullptr;};
    inline string getNamespaceInfosShrink() const { DARABONBA_PTR_GET_DEFAULT(namespaceInfosShrink_, "") };
    inline ModifyGovernanceKubernetesClusterShrinkRequest& setNamespaceInfosShrink(string namespaceInfosShrink) { DARABONBA_PTR_SET_VALUE(namespaceInfosShrink_, namespaceInfosShrink) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyGovernanceKubernetesClusterShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


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
    shared_ptr<string> namespaceInfosShrink_ {};
    // The ID of the region in which the instance resides. The region is supported by MSE.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
