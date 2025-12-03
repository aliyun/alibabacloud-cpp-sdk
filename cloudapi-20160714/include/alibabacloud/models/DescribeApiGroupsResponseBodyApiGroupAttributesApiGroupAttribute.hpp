// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPIGROUPSRESPONSEBODYAPIGROUPATTRIBUTESAPIGROUPATTRIBUTE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPIGROUPSRESPONSEBODYAPIGROUPATTRIBUTESAPIGROUPATTRIBUTE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeApiGroupsResponseBodyApiGroupAttributesApiGroupAttributeTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeApiGroupsResponseBodyApiGroupAttributesApiGroupAttribute : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApiGroupsResponseBodyApiGroupAttributesApiGroupAttribute& obj) { 
      DARABONBA_PTR_TO_JSON(BasePath, basePath_);
      DARABONBA_PTR_TO_JSON(BillingStatus, billingStatus_);
      DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(HttpsPolicy, httpsPolicy_);
      DARABONBA_PTR_TO_JSON(IllegalStatus, illegalStatus_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SubDomain, subDomain_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(TrafficLimit, trafficLimit_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApiGroupsResponseBodyApiGroupAttributesApiGroupAttribute& obj) { 
      DARABONBA_PTR_FROM_JSON(BasePath, basePath_);
      DARABONBA_PTR_FROM_JSON(BillingStatus, billingStatus_);
      DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(HttpsPolicy, httpsPolicy_);
      DARABONBA_PTR_FROM_JSON(IllegalStatus, illegalStatus_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SubDomain, subDomain_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(TrafficLimit, trafficLimit_);
    };
    DescribeApiGroupsResponseBodyApiGroupAttributesApiGroupAttribute() = default ;
    DescribeApiGroupsResponseBodyApiGroupAttributesApiGroupAttribute(const DescribeApiGroupsResponseBodyApiGroupAttributesApiGroupAttribute &) = default ;
    DescribeApiGroupsResponseBodyApiGroupAttributesApiGroupAttribute(DescribeApiGroupsResponseBodyApiGroupAttributesApiGroupAttribute &&) = default ;
    DescribeApiGroupsResponseBodyApiGroupAttributesApiGroupAttribute(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApiGroupsResponseBodyApiGroupAttributesApiGroupAttribute() = default ;
    DescribeApiGroupsResponseBodyApiGroupAttributesApiGroupAttribute& operator=(const DescribeApiGroupsResponseBodyApiGroupAttributesApiGroupAttribute &) = default ;
    DescribeApiGroupsResponseBodyApiGroupAttributesApiGroupAttribute& operator=(DescribeApiGroupsResponseBodyApiGroupAttributesApiGroupAttribute &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->basePath_ == nullptr
        && return this->billingStatus_ == nullptr && return this->createdTime_ == nullptr && return this->description_ == nullptr && return this->groupId_ == nullptr && return this->groupName_ == nullptr
        && return this->httpsPolicy_ == nullptr && return this->illegalStatus_ == nullptr && return this->instanceId_ == nullptr && return this->instanceType_ == nullptr && return this->modifiedTime_ == nullptr
        && return this->regionId_ == nullptr && return this->subDomain_ == nullptr && return this->tags_ == nullptr && return this->trafficLimit_ == nullptr; };
    // basePath Field Functions 
    bool hasBasePath() const { return this->basePath_ != nullptr;};
    void deleteBasePath() { this->basePath_ = nullptr;};
    inline string basePath() const { DARABONBA_PTR_GET_DEFAULT(basePath_, "") };
    inline DescribeApiGroupsResponseBodyApiGroupAttributesApiGroupAttribute& setBasePath(string basePath) { DARABONBA_PTR_SET_VALUE(basePath_, basePath) };


    // billingStatus Field Functions 
    bool hasBillingStatus() const { return this->billingStatus_ != nullptr;};
    void deleteBillingStatus() { this->billingStatus_ = nullptr;};
    inline string billingStatus() const { DARABONBA_PTR_GET_DEFAULT(billingStatus_, "") };
    inline DescribeApiGroupsResponseBodyApiGroupAttributesApiGroupAttribute& setBillingStatus(string billingStatus) { DARABONBA_PTR_SET_VALUE(billingStatus_, billingStatus) };


    // createdTime Field Functions 
    bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
    void deleteCreatedTime() { this->createdTime_ = nullptr;};
    inline string createdTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, "") };
    inline DescribeApiGroupsResponseBodyApiGroupAttributesApiGroupAttribute& setCreatedTime(string createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeApiGroupsResponseBodyApiGroupAttributesApiGroupAttribute& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline DescribeApiGroupsResponseBodyApiGroupAttributesApiGroupAttribute& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline DescribeApiGroupsResponseBodyApiGroupAttributesApiGroupAttribute& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // httpsPolicy Field Functions 
    bool hasHttpsPolicy() const { return this->httpsPolicy_ != nullptr;};
    void deleteHttpsPolicy() { this->httpsPolicy_ = nullptr;};
    inline string httpsPolicy() const { DARABONBA_PTR_GET_DEFAULT(httpsPolicy_, "") };
    inline DescribeApiGroupsResponseBodyApiGroupAttributesApiGroupAttribute& setHttpsPolicy(string httpsPolicy) { DARABONBA_PTR_SET_VALUE(httpsPolicy_, httpsPolicy) };


    // illegalStatus Field Functions 
    bool hasIllegalStatus() const { return this->illegalStatus_ != nullptr;};
    void deleteIllegalStatus() { this->illegalStatus_ = nullptr;};
    inline string illegalStatus() const { DARABONBA_PTR_GET_DEFAULT(illegalStatus_, "") };
    inline DescribeApiGroupsResponseBodyApiGroupAttributesApiGroupAttribute& setIllegalStatus(string illegalStatus) { DARABONBA_PTR_SET_VALUE(illegalStatus_, illegalStatus) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeApiGroupsResponseBodyApiGroupAttributesApiGroupAttribute& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline DescribeApiGroupsResponseBodyApiGroupAttributesApiGroupAttribute& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // modifiedTime Field Functions 
    bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
    void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
    inline string modifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
    inline DescribeApiGroupsResponseBodyApiGroupAttributesApiGroupAttribute& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeApiGroupsResponseBodyApiGroupAttributesApiGroupAttribute& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // subDomain Field Functions 
    bool hasSubDomain() const { return this->subDomain_ != nullptr;};
    void deleteSubDomain() { this->subDomain_ = nullptr;};
    inline string subDomain() const { DARABONBA_PTR_GET_DEFAULT(subDomain_, "") };
    inline DescribeApiGroupsResponseBodyApiGroupAttributesApiGroupAttribute& setSubDomain(string subDomain) { DARABONBA_PTR_SET_VALUE(subDomain_, subDomain) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const Models::DescribeApiGroupsResponseBodyApiGroupAttributesApiGroupAttributeTags & tags() const { DARABONBA_PTR_GET_CONST(tags_, Models::DescribeApiGroupsResponseBodyApiGroupAttributesApiGroupAttributeTags) };
    inline Models::DescribeApiGroupsResponseBodyApiGroupAttributesApiGroupAttributeTags tags() { DARABONBA_PTR_GET(tags_, Models::DescribeApiGroupsResponseBodyApiGroupAttributesApiGroupAttributeTags) };
    inline DescribeApiGroupsResponseBodyApiGroupAttributesApiGroupAttribute& setTags(const Models::DescribeApiGroupsResponseBodyApiGroupAttributesApiGroupAttributeTags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeApiGroupsResponseBodyApiGroupAttributesApiGroupAttribute& setTags(Models::DescribeApiGroupsResponseBodyApiGroupAttributesApiGroupAttributeTags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // trafficLimit Field Functions 
    bool hasTrafficLimit() const { return this->trafficLimit_ != nullptr;};
    void deleteTrafficLimit() { this->trafficLimit_ = nullptr;};
    inline int32_t trafficLimit() const { DARABONBA_PTR_GET_DEFAULT(trafficLimit_, 0) };
    inline DescribeApiGroupsResponseBodyApiGroupAttributesApiGroupAttribute& setTrafficLimit(int32_t trafficLimit) { DARABONBA_PTR_SET_VALUE(trafficLimit_, trafficLimit) };


  protected:
    // The basepath.
    std::shared_ptr<string> basePath_ = nullptr;
    // The billing status of the API group. Valid values:
    // 
    // *   **NORMAL**: The instance is normal.
    // *   **LOCKED**: The API group is locked due to overdue payments.
    std::shared_ptr<string> billingStatus_ = nullptr;
    // The creation time (UTC) of the API group.
    std::shared_ptr<string> createdTime_ = nullptr;
    // Group Description
    std::shared_ptr<string> description_ = nullptr;
    // The ID of the API group. This ID is generated by the system and globally unique.
    std::shared_ptr<string> groupId_ = nullptr;
    // The name of the API group.
    std::shared_ptr<string> groupName_ = nullptr;
    // The HTTPS security policy
    std::shared_ptr<string> httpsPolicy_ = nullptr;
    // The validity status of the API group. Valid values:
    // 
    // *   **NORMAL**: The instance is normal.
    // *   **LOCKED**: The API group is locked because it is not valid.
    std::shared_ptr<string> illegalStatus_ = nullptr;
    // The ID of the instance.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The type of the instance.
    std::shared_ptr<string> instanceType_ = nullptr;
    // The last modification time (UTC) of the API group.
    std::shared_ptr<string> modifiedTime_ = nullptr;
    // The region to which the API group belongs.
    std::shared_ptr<string> regionId_ = nullptr;
    // The second-level domain name that corresponds to the API group and is used by the CNAME of the custom domain name.
    std::shared_ptr<string> subDomain_ = nullptr;
    // The list of tags.
    std::shared_ptr<Models::DescribeApiGroupsResponseBodyApiGroupAttributesApiGroupAttributeTags> tags_ = nullptr;
    // The upper QPS limit of the API group. The default value is 500. You can increase the upper limit by submitting an application.
    std::shared_ptr<int32_t> trafficLimit_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
