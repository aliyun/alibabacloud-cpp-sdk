// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGLOBALSECURITYIPGROUPRELATIONRESPONSEBODYGLOBALSECURITYIPGROUPREL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGLOBALSECURITYIPGROUPRELATIONRESPONSEBODYGLOBALSECURITYIPGROUPREL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeGlobalSecurityIPGroupRelationResponseBodyGlobalSecurityIPGroupRel : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGlobalSecurityIPGroupRelationResponseBodyGlobalSecurityIPGroupRel& obj) { 
      DARABONBA_PTR_TO_JSON(GIpList, GIpList_);
      DARABONBA_PTR_TO_JSON(GlobalIgName, globalIgName_);
      DARABONBA_PTR_TO_JSON(GlobalSecurityGroupId, globalSecurityGroupId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGlobalSecurityIPGroupRelationResponseBodyGlobalSecurityIPGroupRel& obj) { 
      DARABONBA_PTR_FROM_JSON(GIpList, GIpList_);
      DARABONBA_PTR_FROM_JSON(GlobalIgName, globalIgName_);
      DARABONBA_PTR_FROM_JSON(GlobalSecurityGroupId, globalSecurityGroupId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DescribeGlobalSecurityIPGroupRelationResponseBodyGlobalSecurityIPGroupRel() = default ;
    DescribeGlobalSecurityIPGroupRelationResponseBodyGlobalSecurityIPGroupRel(const DescribeGlobalSecurityIPGroupRelationResponseBodyGlobalSecurityIPGroupRel &) = default ;
    DescribeGlobalSecurityIPGroupRelationResponseBodyGlobalSecurityIPGroupRel(DescribeGlobalSecurityIPGroupRelationResponseBodyGlobalSecurityIPGroupRel &&) = default ;
    DescribeGlobalSecurityIPGroupRelationResponseBodyGlobalSecurityIPGroupRel(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGlobalSecurityIPGroupRelationResponseBodyGlobalSecurityIPGroupRel() = default ;
    DescribeGlobalSecurityIPGroupRelationResponseBodyGlobalSecurityIPGroupRel& operator=(const DescribeGlobalSecurityIPGroupRelationResponseBodyGlobalSecurityIPGroupRel &) = default ;
    DescribeGlobalSecurityIPGroupRelationResponseBodyGlobalSecurityIPGroupRel& operator=(DescribeGlobalSecurityIPGroupRelationResponseBodyGlobalSecurityIPGroupRel &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->GIpList_ != nullptr
        && this->globalIgName_ != nullptr && this->globalSecurityGroupId_ != nullptr && this->regionId_ != nullptr; };
    // GIpList Field Functions 
    bool hasGIpList() const { return this->GIpList_ != nullptr;};
    void deleteGIpList() { this->GIpList_ = nullptr;};
    inline string GIpList() const { DARABONBA_PTR_GET_DEFAULT(GIpList_, "") };
    inline DescribeGlobalSecurityIPGroupRelationResponseBodyGlobalSecurityIPGroupRel& setGIpList(string GIpList) { DARABONBA_PTR_SET_VALUE(GIpList_, GIpList) };


    // globalIgName Field Functions 
    bool hasGlobalIgName() const { return this->globalIgName_ != nullptr;};
    void deleteGlobalIgName() { this->globalIgName_ = nullptr;};
    inline string globalIgName() const { DARABONBA_PTR_GET_DEFAULT(globalIgName_, "") };
    inline DescribeGlobalSecurityIPGroupRelationResponseBodyGlobalSecurityIPGroupRel& setGlobalIgName(string globalIgName) { DARABONBA_PTR_SET_VALUE(globalIgName_, globalIgName) };


    // globalSecurityGroupId Field Functions 
    bool hasGlobalSecurityGroupId() const { return this->globalSecurityGroupId_ != nullptr;};
    void deleteGlobalSecurityGroupId() { this->globalSecurityGroupId_ = nullptr;};
    inline string globalSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(globalSecurityGroupId_, "") };
    inline DescribeGlobalSecurityIPGroupRelationResponseBodyGlobalSecurityIPGroupRel& setGlobalSecurityGroupId(string globalSecurityGroupId) { DARABONBA_PTR_SET_VALUE(globalSecurityGroupId_, globalSecurityGroupId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeGlobalSecurityIPGroupRelationResponseBodyGlobalSecurityIPGroupRel& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The IP address in the global IP whitelist template.
    // 
    // >  Separate multiple IP addresses with commas (,). You can add up to 1,000 IP addresses or CIDR blocks to all IP whitelists.
    std::shared_ptr<string> GIpList_ = nullptr;
    // The name of the global IP whitelist template. The name must meet the following requirements:
    // 
    // *   The name can contain lowercase letters, digits, and underscores (_).
    // *   The name must start with a letter and end with a letter or a digit.
    // *   The name must be 2 to 120 characters in length.
    std::shared_ptr<string> globalIgName_ = nullptr;
    // The ID of the global IP whitelist template.
    std::shared_ptr<string> globalSecurityGroupId_ = nullptr;
    // The ID of the region.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
