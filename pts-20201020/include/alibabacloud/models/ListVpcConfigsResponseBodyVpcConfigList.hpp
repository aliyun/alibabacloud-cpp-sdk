// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVPCCONFIGSRESPONSEBODYVPCCONFIGLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTVPCCONFIGSRESPONSEBODYVPCCONFIGLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PTS20201020
{
namespace Models
{
  class ListVpcConfigsResponseBodyVpcConfigList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVpcConfigsResponseBodyVpcConfigList& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigDescription, configDescription_);
      DARABONBA_PTR_TO_JSON(ConfigId, configId_);
      DARABONBA_PTR_TO_JSON(ConfigName, configName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_TO_JSON(SortPriority, sortPriority_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(VpcCidr, vpcCidr_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, ListVpcConfigsResponseBodyVpcConfigList& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigDescription, configDescription_);
      DARABONBA_PTR_FROM_JSON(ConfigId, configId_);
      DARABONBA_PTR_FROM_JSON(ConfigName, configName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_FROM_JSON(SortPriority, sortPriority_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(VpcCidr, vpcCidr_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    ListVpcConfigsResponseBodyVpcConfigList() = default ;
    ListVpcConfigsResponseBodyVpcConfigList(const ListVpcConfigsResponseBodyVpcConfigList &) = default ;
    ListVpcConfigsResponseBodyVpcConfigList(ListVpcConfigsResponseBodyVpcConfigList &&) = default ;
    ListVpcConfigsResponseBodyVpcConfigList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVpcConfigsResponseBodyVpcConfigList() = default ;
    ListVpcConfigsResponseBodyVpcConfigList& operator=(const ListVpcConfigsResponseBodyVpcConfigList &) = default ;
    ListVpcConfigsResponseBodyVpcConfigList& operator=(ListVpcConfigsResponseBodyVpcConfigList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->configDescription_ == nullptr
        && return this->configId_ == nullptr && return this->configName_ == nullptr && return this->regionId_ == nullptr && return this->securityGroupId_ == nullptr && return this->sortPriority_ == nullptr
        && return this->vSwitchId_ == nullptr && return this->vpcCidr_ == nullptr && return this->vpcId_ == nullptr; };
    // configDescription Field Functions 
    bool hasConfigDescription() const { return this->configDescription_ != nullptr;};
    void deleteConfigDescription() { this->configDescription_ = nullptr;};
    inline string configDescription() const { DARABONBA_PTR_GET_DEFAULT(configDescription_, "") };
    inline ListVpcConfigsResponseBodyVpcConfigList& setConfigDescription(string configDescription) { DARABONBA_PTR_SET_VALUE(configDescription_, configDescription) };


    // configId Field Functions 
    bool hasConfigId() const { return this->configId_ != nullptr;};
    void deleteConfigId() { this->configId_ = nullptr;};
    inline string configId() const { DARABONBA_PTR_GET_DEFAULT(configId_, "") };
    inline ListVpcConfigsResponseBodyVpcConfigList& setConfigId(string configId) { DARABONBA_PTR_SET_VALUE(configId_, configId) };


    // configName Field Functions 
    bool hasConfigName() const { return this->configName_ != nullptr;};
    void deleteConfigName() { this->configName_ = nullptr;};
    inline string configName() const { DARABONBA_PTR_GET_DEFAULT(configName_, "") };
    inline ListVpcConfigsResponseBodyVpcConfigList& setConfigName(string configName) { DARABONBA_PTR_SET_VALUE(configName_, configName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListVpcConfigsResponseBodyVpcConfigList& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string securityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline ListVpcConfigsResponseBodyVpcConfigList& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


    // sortPriority Field Functions 
    bool hasSortPriority() const { return this->sortPriority_ != nullptr;};
    void deleteSortPriority() { this->sortPriority_ = nullptr;};
    inline int64_t sortPriority() const { DARABONBA_PTR_GET_DEFAULT(sortPriority_, 0L) };
    inline ListVpcConfigsResponseBodyVpcConfigList& setSortPriority(int64_t sortPriority) { DARABONBA_PTR_SET_VALUE(sortPriority_, sortPriority) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline ListVpcConfigsResponseBodyVpcConfigList& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vpcCidr Field Functions 
    bool hasVpcCidr() const { return this->vpcCidr_ != nullptr;};
    void deleteVpcCidr() { this->vpcCidr_ = nullptr;};
    inline string vpcCidr() const { DARABONBA_PTR_GET_DEFAULT(vpcCidr_, "") };
    inline ListVpcConfigsResponseBodyVpcConfigList& setVpcCidr(string vpcCidr) { DARABONBA_PTR_SET_VALUE(vpcCidr_, vpcCidr) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline ListVpcConfigsResponseBodyVpcConfigList& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    std::shared_ptr<string> configDescription_ = nullptr;
    std::shared_ptr<string> configId_ = nullptr;
    std::shared_ptr<string> configName_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> securityGroupId_ = nullptr;
    std::shared_ptr<int64_t> sortPriority_ = nullptr;
    std::shared_ptr<string> vSwitchId_ = nullptr;
    std::shared_ptr<string> vpcCidr_ = nullptr;
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PTS20201020
#endif
