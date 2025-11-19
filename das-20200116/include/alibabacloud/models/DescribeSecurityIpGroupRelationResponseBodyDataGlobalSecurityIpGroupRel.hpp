// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESECURITYIPGROUPRELATIONRESPONSEBODYDATAGLOBALSECURITYIPGROUPREL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESECURITYIPGROUPRELATIONRESPONSEBODYDATAGLOBALSECURITYIPGROUPREL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class DescribeSecurityIPGroupRelationResponseBodyDataGlobalSecurityIPGroupRel : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSecurityIPGroupRelationResponseBodyDataGlobalSecurityIPGroupRel& obj) { 
      DARABONBA_PTR_TO_JSON(GIpList, GIpList_);
      DARABONBA_PTR_TO_JSON(GlobalIgName, globalIgName_);
      DARABONBA_PTR_TO_JSON(GlobalSecurityGroupId, globalSecurityGroupId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSecurityIPGroupRelationResponseBodyDataGlobalSecurityIPGroupRel& obj) { 
      DARABONBA_PTR_FROM_JSON(GIpList, GIpList_);
      DARABONBA_PTR_FROM_JSON(GlobalIgName, globalIgName_);
      DARABONBA_PTR_FROM_JSON(GlobalSecurityGroupId, globalSecurityGroupId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DescribeSecurityIPGroupRelationResponseBodyDataGlobalSecurityIPGroupRel() = default ;
    DescribeSecurityIPGroupRelationResponseBodyDataGlobalSecurityIPGroupRel(const DescribeSecurityIPGroupRelationResponseBodyDataGlobalSecurityIPGroupRel &) = default ;
    DescribeSecurityIPGroupRelationResponseBodyDataGlobalSecurityIPGroupRel(DescribeSecurityIPGroupRelationResponseBodyDataGlobalSecurityIPGroupRel &&) = default ;
    DescribeSecurityIPGroupRelationResponseBodyDataGlobalSecurityIPGroupRel(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSecurityIPGroupRelationResponseBodyDataGlobalSecurityIPGroupRel() = default ;
    DescribeSecurityIPGroupRelationResponseBodyDataGlobalSecurityIPGroupRel& operator=(const DescribeSecurityIPGroupRelationResponseBodyDataGlobalSecurityIPGroupRel &) = default ;
    DescribeSecurityIPGroupRelationResponseBodyDataGlobalSecurityIPGroupRel& operator=(DescribeSecurityIPGroupRelationResponseBodyDataGlobalSecurityIPGroupRel &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->GIpList_ == nullptr
        && return this->globalIgName_ == nullptr && return this->globalSecurityGroupId_ == nullptr && return this->regionId_ == nullptr; };
    // GIpList Field Functions 
    bool hasGIpList() const { return this->GIpList_ != nullptr;};
    void deleteGIpList() { this->GIpList_ = nullptr;};
    inline string GIpList() const { DARABONBA_PTR_GET_DEFAULT(GIpList_, "") };
    inline DescribeSecurityIPGroupRelationResponseBodyDataGlobalSecurityIPGroupRel& setGIpList(string GIpList) { DARABONBA_PTR_SET_VALUE(GIpList_, GIpList) };


    // globalIgName Field Functions 
    bool hasGlobalIgName() const { return this->globalIgName_ != nullptr;};
    void deleteGlobalIgName() { this->globalIgName_ = nullptr;};
    inline string globalIgName() const { DARABONBA_PTR_GET_DEFAULT(globalIgName_, "") };
    inline DescribeSecurityIPGroupRelationResponseBodyDataGlobalSecurityIPGroupRel& setGlobalIgName(string globalIgName) { DARABONBA_PTR_SET_VALUE(globalIgName_, globalIgName) };


    // globalSecurityGroupId Field Functions 
    bool hasGlobalSecurityGroupId() const { return this->globalSecurityGroupId_ != nullptr;};
    void deleteGlobalSecurityGroupId() { this->globalSecurityGroupId_ = nullptr;};
    inline string globalSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(globalSecurityGroupId_, "") };
    inline DescribeSecurityIPGroupRelationResponseBodyDataGlobalSecurityIPGroupRel& setGlobalSecurityGroupId(string globalSecurityGroupId) { DARABONBA_PTR_SET_VALUE(globalSecurityGroupId_, globalSecurityGroupId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeSecurityIPGroupRelationResponseBodyDataGlobalSecurityIPGroupRel& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    std::shared_ptr<string> GIpList_ = nullptr;
    std::shared_ptr<string> globalIgName_ = nullptr;
    std::shared_ptr<string> globalSecurityGroupId_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
