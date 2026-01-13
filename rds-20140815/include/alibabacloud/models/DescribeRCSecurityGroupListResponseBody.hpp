// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERCSECURITYGROUPLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERCSECURITYGROUPLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeRCSecurityGroupListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRCSecurityGroupListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RCSecurityGroups, RCSecurityGroups_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRCSecurityGroupListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RCSecurityGroups, RCSecurityGroups_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeRCSecurityGroupListResponseBody() = default ;
    DescribeRCSecurityGroupListResponseBody(const DescribeRCSecurityGroupListResponseBody &) = default ;
    DescribeRCSecurityGroupListResponseBody(DescribeRCSecurityGroupListResponseBody &&) = default ;
    DescribeRCSecurityGroupListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRCSecurityGroupListResponseBody() = default ;
    DescribeRCSecurityGroupListResponseBody& operator=(const DescribeRCSecurityGroupListResponseBody &) = default ;
    DescribeRCSecurityGroupListResponseBody& operator=(DescribeRCSecurityGroupListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RCSecurityGroups : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RCSecurityGroups& obj) { 
        DARABONBA_PTR_TO_JSON(AvailableInstanceAmount, availableInstanceAmount_);
        DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(InstanceCount, instanceCount_);
        DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
        DARABONBA_PTR_TO_JSON(SecurityGroupType, securityGroupType_);
        DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      };
      friend void from_json(const Darabonba::Json& j, RCSecurityGroups& obj) { 
        DARABONBA_PTR_FROM_JSON(AvailableInstanceAmount, availableInstanceAmount_);
        DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(InstanceCount, instanceCount_);
        DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
        DARABONBA_PTR_FROM_JSON(SecurityGroupType, securityGroupType_);
        DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      };
      RCSecurityGroups() = default ;
      RCSecurityGroups(const RCSecurityGroups &) = default ;
      RCSecurityGroups(RCSecurityGroups &&) = default ;
      RCSecurityGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RCSecurityGroups() = default ;
      RCSecurityGroups& operator=(const RCSecurityGroups &) = default ;
      RCSecurityGroups& operator=(RCSecurityGroups &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->availableInstanceAmount_ == nullptr
        && this->creationTime_ == nullptr && this->description_ == nullptr && this->instanceCount_ == nullptr && this->securityGroupId_ == nullptr && this->securityGroupType_ == nullptr
        && this->vpcId_ == nullptr; };
      // availableInstanceAmount Field Functions 
      bool hasAvailableInstanceAmount() const { return this->availableInstanceAmount_ != nullptr;};
      void deleteAvailableInstanceAmount() { this->availableInstanceAmount_ = nullptr;};
      inline int32_t getAvailableInstanceAmount() const { DARABONBA_PTR_GET_DEFAULT(availableInstanceAmount_, 0) };
      inline RCSecurityGroups& setAvailableInstanceAmount(int32_t availableInstanceAmount) { DARABONBA_PTR_SET_VALUE(availableInstanceAmount_, availableInstanceAmount) };


      // creationTime Field Functions 
      bool hasCreationTime() const { return this->creationTime_ != nullptr;};
      void deleteCreationTime() { this->creationTime_ = nullptr;};
      inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
      inline RCSecurityGroups& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline RCSecurityGroups& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // instanceCount Field Functions 
      bool hasInstanceCount() const { return this->instanceCount_ != nullptr;};
      void deleteInstanceCount() { this->instanceCount_ = nullptr;};
      inline int32_t getInstanceCount() const { DARABONBA_PTR_GET_DEFAULT(instanceCount_, 0) };
      inline RCSecurityGroups& setInstanceCount(int32_t instanceCount) { DARABONBA_PTR_SET_VALUE(instanceCount_, instanceCount) };


      // securityGroupId Field Functions 
      bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
      void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
      inline string getSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
      inline RCSecurityGroups& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


      // securityGroupType Field Functions 
      bool hasSecurityGroupType() const { return this->securityGroupType_ != nullptr;};
      void deleteSecurityGroupType() { this->securityGroupType_ = nullptr;};
      inline string getSecurityGroupType() const { DARABONBA_PTR_GET_DEFAULT(securityGroupType_, "") };
      inline RCSecurityGroups& setSecurityGroupType(string securityGroupType) { DARABONBA_PTR_SET_VALUE(securityGroupType_, securityGroupType) };


      // vpcId Field Functions 
      bool hasVpcId() const { return this->vpcId_ != nullptr;};
      void deleteVpcId() { this->vpcId_ = nullptr;};
      inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
      inline RCSecurityGroups& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    protected:
      // The number of instances that can be added to the security group.
      shared_ptr<int32_t> availableInstanceAmount_ {};
      // The time when the security group was created. The time follows the ISO 8601 standard and is in the `yyyy-MM-ddThh:mmZ` format. The time is displayed in UTC.
      shared_ptr<string> creationTime_ {};
      // The description of the security group.
      shared_ptr<string> description_ {};
      // The number of instances that are added to the security group.
      // 
      // This parameter is required.
      shared_ptr<int32_t> instanceCount_ {};
      // The ID of the security group.
      shared_ptr<string> securityGroupId_ {};
      // The type of the security group. Valid values:
      // 
      // *   **normal**: a normal security group.
      // *   **enterprise**: an advanced security group.
      shared_ptr<string> securityGroupType_ {};
      // The ID of the VPC to which the security group belongs.
      shared_ptr<string> vpcId_ {};
    };

    virtual bool empty() const override { return this->RCSecurityGroups_ == nullptr
        && this->requestId_ == nullptr; };
    // RCSecurityGroups Field Functions 
    bool hasRCSecurityGroups() const { return this->RCSecurityGroups_ != nullptr;};
    void deleteRCSecurityGroups() { this->RCSecurityGroups_ = nullptr;};
    inline const vector<DescribeRCSecurityGroupListResponseBody::RCSecurityGroups> & getRCSecurityGroups() const { DARABONBA_PTR_GET_CONST(RCSecurityGroups_, vector<DescribeRCSecurityGroupListResponseBody::RCSecurityGroups>) };
    inline vector<DescribeRCSecurityGroupListResponseBody::RCSecurityGroups> getRCSecurityGroups() { DARABONBA_PTR_GET(RCSecurityGroups_, vector<DescribeRCSecurityGroupListResponseBody::RCSecurityGroups>) };
    inline DescribeRCSecurityGroupListResponseBody& setRCSecurityGroups(const vector<DescribeRCSecurityGroupListResponseBody::RCSecurityGroups> & rCSecurityGroups) { DARABONBA_PTR_SET_VALUE(RCSecurityGroups_, rCSecurityGroups) };
    inline DescribeRCSecurityGroupListResponseBody& setRCSecurityGroups(vector<DescribeRCSecurityGroupListResponseBody::RCSecurityGroups> && rCSecurityGroups) { DARABONBA_PTR_SET_RVALUE(RCSecurityGroups_, rCSecurityGroups) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRCSecurityGroupListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The basic information about the security groups.
    shared_ptr<vector<DescribeRCSecurityGroupListResponseBody::RCSecurityGroups>> RCSecurityGroups_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
