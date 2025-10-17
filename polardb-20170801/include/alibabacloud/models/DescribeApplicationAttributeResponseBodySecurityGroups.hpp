// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONATTRIBUTERESPONSEBODYSECURITYGROUPS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONATTRIBUTERESPONSEBODYSECURITYGROUPS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeApplicationAttributeResponseBodySecurityGroups : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApplicationAttributeResponseBodySecurityGroups& obj) { 
      DARABONBA_PTR_TO_JSON(NetType, netType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_TO_JSON(SecurityGroupName, securityGroupName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApplicationAttributeResponseBodySecurityGroups& obj) { 
      DARABONBA_PTR_FROM_JSON(NetType, netType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupName, securityGroupName_);
    };
    DescribeApplicationAttributeResponseBodySecurityGroups() = default ;
    DescribeApplicationAttributeResponseBodySecurityGroups(const DescribeApplicationAttributeResponseBodySecurityGroups &) = default ;
    DescribeApplicationAttributeResponseBodySecurityGroups(DescribeApplicationAttributeResponseBodySecurityGroups &&) = default ;
    DescribeApplicationAttributeResponseBodySecurityGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApplicationAttributeResponseBodySecurityGroups() = default ;
    DescribeApplicationAttributeResponseBodySecurityGroups& operator=(const DescribeApplicationAttributeResponseBodySecurityGroups &) = default ;
    DescribeApplicationAttributeResponseBodySecurityGroups& operator=(DescribeApplicationAttributeResponseBodySecurityGroups &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->netType_ == nullptr
        && return this->regionId_ == nullptr && return this->securityGroupId_ == nullptr && return this->securityGroupName_ == nullptr; };
    // netType Field Functions 
    bool hasNetType() const { return this->netType_ != nullptr;};
    void deleteNetType() { this->netType_ = nullptr;};
    inline string netType() const { DARABONBA_PTR_GET_DEFAULT(netType_, "") };
    inline DescribeApplicationAttributeResponseBodySecurityGroups& setNetType(string netType) { DARABONBA_PTR_SET_VALUE(netType_, netType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeApplicationAttributeResponseBodySecurityGroups& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string securityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline DescribeApplicationAttributeResponseBodySecurityGroups& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


    // securityGroupName Field Functions 
    bool hasSecurityGroupName() const { return this->securityGroupName_ != nullptr;};
    void deleteSecurityGroupName() { this->securityGroupName_ = nullptr;};
    inline string securityGroupName() const { DARABONBA_PTR_GET_DEFAULT(securityGroupName_, "") };
    inline DescribeApplicationAttributeResponseBodySecurityGroups& setSecurityGroupName(string securityGroupName) { DARABONBA_PTR_SET_VALUE(securityGroupName_, securityGroupName) };


  protected:
    std::shared_ptr<string> netType_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> securityGroupId_ = nullptr;
    std::shared_ptr<string> securityGroupName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
