// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEECISCALINGCONFIGURATIONREQUESTACRREGISTRYINFOS_HPP_
#define ALIBABACLOUD_MODELS_CREATEECISCALINGCONFIGURATIONREQUESTACRREGISTRYINFOS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class CreateEciScalingConfigurationRequestAcrRegistryInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateEciScalingConfigurationRequestAcrRegistryInfos& obj) { 
      DARABONBA_PTR_TO_JSON(Domains, domains_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateEciScalingConfigurationRequestAcrRegistryInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(Domains, domains_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    CreateEciScalingConfigurationRequestAcrRegistryInfos() = default ;
    CreateEciScalingConfigurationRequestAcrRegistryInfos(const CreateEciScalingConfigurationRequestAcrRegistryInfos &) = default ;
    CreateEciScalingConfigurationRequestAcrRegistryInfos(CreateEciScalingConfigurationRequestAcrRegistryInfos &&) = default ;
    CreateEciScalingConfigurationRequestAcrRegistryInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateEciScalingConfigurationRequestAcrRegistryInfos() = default ;
    CreateEciScalingConfigurationRequestAcrRegistryInfos& operator=(const CreateEciScalingConfigurationRequestAcrRegistryInfos &) = default ;
    CreateEciScalingConfigurationRequestAcrRegistryInfos& operator=(CreateEciScalingConfigurationRequestAcrRegistryInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->domains_ != nullptr
        && this->instanceId_ != nullptr && this->instanceName_ != nullptr && this->regionId_ != nullptr; };
    // domains Field Functions 
    bool hasDomains() const { return this->domains_ != nullptr;};
    void deleteDomains() { this->domains_ = nullptr;};
    inline const vector<string> & domains() const { DARABONBA_PTR_GET_CONST(domains_, vector<string>) };
    inline vector<string> domains() { DARABONBA_PTR_GET(domains_, vector<string>) };
    inline CreateEciScalingConfigurationRequestAcrRegistryInfos& setDomains(const vector<string> & domains) { DARABONBA_PTR_SET_VALUE(domains_, domains) };
    inline CreateEciScalingConfigurationRequestAcrRegistryInfos& setDomains(vector<string> && domains) { DARABONBA_PTR_SET_RVALUE(domains_, domains) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateEciScalingConfigurationRequestAcrRegistryInfos& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline CreateEciScalingConfigurationRequestAcrRegistryInfos& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateEciScalingConfigurationRequestAcrRegistryInfos& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The domain names of the Container Registry Enterprise Edition instances. By default, all domain names are displayed. Separate multiple domain names with commas (,).
    std::shared_ptr<vector<string>> domains_ = nullptr;
    // The ID of the Container Registry Enterprise Edition instance.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The name of the Container Registry Enterprise Edition instance.
    std::shared_ptr<string> instanceName_ = nullptr;
    // The region ID of the Container Registry Enterprise Edition instance.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
