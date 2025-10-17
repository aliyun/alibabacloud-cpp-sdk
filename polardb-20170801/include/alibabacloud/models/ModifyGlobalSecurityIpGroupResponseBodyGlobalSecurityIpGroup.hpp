// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYGLOBALSECURITYIPGROUPRESPONSEBODYGLOBALSECURITYIPGROUP_HPP_
#define ALIBABACLOUD_MODELS_MODIFYGLOBALSECURITYIPGROUPRESPONSEBODYGLOBALSECURITYIPGROUP_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class ModifyGlobalSecurityIPGroupResponseBodyGlobalSecurityIPGroup : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyGlobalSecurityIPGroupResponseBodyGlobalSecurityIPGroup& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstances, DBInstances_);
      DARABONBA_PTR_TO_JSON(GIpList, GIpList_);
      DARABONBA_PTR_TO_JSON(GlobalIgName, globalIgName_);
      DARABONBA_PTR_TO_JSON(GlobalSecurityGroupId, globalSecurityGroupId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyGlobalSecurityIPGroupResponseBodyGlobalSecurityIPGroup& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstances, DBInstances_);
      DARABONBA_PTR_FROM_JSON(GIpList, GIpList_);
      DARABONBA_PTR_FROM_JSON(GlobalIgName, globalIgName_);
      DARABONBA_PTR_FROM_JSON(GlobalSecurityGroupId, globalSecurityGroupId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ModifyGlobalSecurityIPGroupResponseBodyGlobalSecurityIPGroup() = default ;
    ModifyGlobalSecurityIPGroupResponseBodyGlobalSecurityIPGroup(const ModifyGlobalSecurityIPGroupResponseBodyGlobalSecurityIPGroup &) = default ;
    ModifyGlobalSecurityIPGroupResponseBodyGlobalSecurityIPGroup(ModifyGlobalSecurityIPGroupResponseBodyGlobalSecurityIPGroup &&) = default ;
    ModifyGlobalSecurityIPGroupResponseBodyGlobalSecurityIPGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyGlobalSecurityIPGroupResponseBodyGlobalSecurityIPGroup() = default ;
    ModifyGlobalSecurityIPGroupResponseBodyGlobalSecurityIPGroup& operator=(const ModifyGlobalSecurityIPGroupResponseBodyGlobalSecurityIPGroup &) = default ;
    ModifyGlobalSecurityIPGroupResponseBodyGlobalSecurityIPGroup& operator=(ModifyGlobalSecurityIPGroupResponseBodyGlobalSecurityIPGroup &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstances_ == nullptr
        && return this->GIpList_ == nullptr && return this->globalIgName_ == nullptr && return this->globalSecurityGroupId_ == nullptr && return this->regionId_ == nullptr; };
    // DBInstances Field Functions 
    bool hasDBInstances() const { return this->DBInstances_ != nullptr;};
    void deleteDBInstances() { this->DBInstances_ = nullptr;};
    inline const vector<string> & DBInstances() const { DARABONBA_PTR_GET_CONST(DBInstances_, vector<string>) };
    inline vector<string> DBInstances() { DARABONBA_PTR_GET(DBInstances_, vector<string>) };
    inline ModifyGlobalSecurityIPGroupResponseBodyGlobalSecurityIPGroup& setDBInstances(const vector<string> & DBInstances) { DARABONBA_PTR_SET_VALUE(DBInstances_, DBInstances) };
    inline ModifyGlobalSecurityIPGroupResponseBodyGlobalSecurityIPGroup& setDBInstances(vector<string> && DBInstances) { DARABONBA_PTR_SET_RVALUE(DBInstances_, DBInstances) };


    // GIpList Field Functions 
    bool hasGIpList() const { return this->GIpList_ != nullptr;};
    void deleteGIpList() { this->GIpList_ = nullptr;};
    inline string GIpList() const { DARABONBA_PTR_GET_DEFAULT(GIpList_, "") };
    inline ModifyGlobalSecurityIPGroupResponseBodyGlobalSecurityIPGroup& setGIpList(string GIpList) { DARABONBA_PTR_SET_VALUE(GIpList_, GIpList) };


    // globalIgName Field Functions 
    bool hasGlobalIgName() const { return this->globalIgName_ != nullptr;};
    void deleteGlobalIgName() { this->globalIgName_ = nullptr;};
    inline string globalIgName() const { DARABONBA_PTR_GET_DEFAULT(globalIgName_, "") };
    inline ModifyGlobalSecurityIPGroupResponseBodyGlobalSecurityIPGroup& setGlobalIgName(string globalIgName) { DARABONBA_PTR_SET_VALUE(globalIgName_, globalIgName) };


    // globalSecurityGroupId Field Functions 
    bool hasGlobalSecurityGroupId() const { return this->globalSecurityGroupId_ != nullptr;};
    void deleteGlobalSecurityGroupId() { this->globalSecurityGroupId_ = nullptr;};
    inline string globalSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(globalSecurityGroupId_, "") };
    inline ModifyGlobalSecurityIPGroupResponseBodyGlobalSecurityIPGroup& setGlobalSecurityGroupId(string globalSecurityGroupId) { DARABONBA_PTR_SET_VALUE(globalSecurityGroupId_, globalSecurityGroupId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyGlobalSecurityIPGroupResponseBodyGlobalSecurityIPGroup& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The clusters that are associated with the IP address whitelist template.
    std::shared_ptr<vector<string>> DBInstances_ = nullptr;
    // The IP address in the whitelist template.
    // 
    // >  Separate multiple IP addresses with commas (,). You can add up to 1,000 IP addresses or CIDR blocks to all IP whitelists.
    std::shared_ptr<string> GIpList_ = nullptr;
    // The name of the IP whitelist template. The name must meet the following requirements:
    // 
    // *   The name can contain lowercase letters, digits, and underscores (_).
    // *   The name must start with a letter and end with a letter or a digit.
    // *   The name must be 2 to 120 characters in length.
    std::shared_ptr<string> globalIgName_ = nullptr;
    // The ID of the IP whitelist template.
    std::shared_ptr<string> globalSecurityGroupId_ = nullptr;
    // The ID of the region.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
