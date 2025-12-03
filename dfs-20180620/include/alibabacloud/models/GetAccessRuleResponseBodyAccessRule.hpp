// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETACCESSRULERESPONSEBODYACCESSRULE_HPP_
#define ALIBABACLOUD_MODELS_GETACCESSRULERESPONSEBODYACCESSRULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DFS20180620
{
namespace Models
{
  class GetAccessRuleResponseBodyAccessRule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAccessRuleResponseBodyAccessRule& obj) { 
      DARABONBA_PTR_TO_JSON(AccessGroupId, accessGroupId_);
      DARABONBA_PTR_TO_JSON(AccessRuleId, accessRuleId_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(NetworkSegment, networkSegment_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(RWAccessType, RWAccessType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAccessRuleResponseBodyAccessRule& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessGroupId, accessGroupId_);
      DARABONBA_PTR_FROM_JSON(AccessRuleId, accessRuleId_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(NetworkSegment, networkSegment_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(RWAccessType, RWAccessType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    GetAccessRuleResponseBodyAccessRule() = default ;
    GetAccessRuleResponseBodyAccessRule(const GetAccessRuleResponseBodyAccessRule &) = default ;
    GetAccessRuleResponseBodyAccessRule(GetAccessRuleResponseBodyAccessRule &&) = default ;
    GetAccessRuleResponseBodyAccessRule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAccessRuleResponseBodyAccessRule() = default ;
    GetAccessRuleResponseBodyAccessRule& operator=(const GetAccessRuleResponseBodyAccessRule &) = default ;
    GetAccessRuleResponseBodyAccessRule& operator=(GetAccessRuleResponseBodyAccessRule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessGroupId_ == nullptr
        && return this->accessRuleId_ == nullptr && return this->createTime_ == nullptr && return this->description_ == nullptr && return this->networkSegment_ == nullptr && return this->priority_ == nullptr
        && return this->RWAccessType_ == nullptr && return this->regionId_ == nullptr; };
    // accessGroupId Field Functions 
    bool hasAccessGroupId() const { return this->accessGroupId_ != nullptr;};
    void deleteAccessGroupId() { this->accessGroupId_ = nullptr;};
    inline string accessGroupId() const { DARABONBA_PTR_GET_DEFAULT(accessGroupId_, "") };
    inline GetAccessRuleResponseBodyAccessRule& setAccessGroupId(string accessGroupId) { DARABONBA_PTR_SET_VALUE(accessGroupId_, accessGroupId) };


    // accessRuleId Field Functions 
    bool hasAccessRuleId() const { return this->accessRuleId_ != nullptr;};
    void deleteAccessRuleId() { this->accessRuleId_ = nullptr;};
    inline string accessRuleId() const { DARABONBA_PTR_GET_DEFAULT(accessRuleId_, "") };
    inline GetAccessRuleResponseBodyAccessRule& setAccessRuleId(string accessRuleId) { DARABONBA_PTR_SET_VALUE(accessRuleId_, accessRuleId) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetAccessRuleResponseBodyAccessRule& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetAccessRuleResponseBodyAccessRule& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // networkSegment Field Functions 
    bool hasNetworkSegment() const { return this->networkSegment_ != nullptr;};
    void deleteNetworkSegment() { this->networkSegment_ = nullptr;};
    inline string networkSegment() const { DARABONBA_PTR_GET_DEFAULT(networkSegment_, "") };
    inline GetAccessRuleResponseBodyAccessRule& setNetworkSegment(string networkSegment) { DARABONBA_PTR_SET_VALUE(networkSegment_, networkSegment) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline GetAccessRuleResponseBodyAccessRule& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // RWAccessType Field Functions 
    bool hasRWAccessType() const { return this->RWAccessType_ != nullptr;};
    void deleteRWAccessType() { this->RWAccessType_ = nullptr;};
    inline string RWAccessType() const { DARABONBA_PTR_GET_DEFAULT(RWAccessType_, "") };
    inline GetAccessRuleResponseBodyAccessRule& setRWAccessType(string RWAccessType) { DARABONBA_PTR_SET_VALUE(RWAccessType_, RWAccessType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetAccessRuleResponseBodyAccessRule& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    std::shared_ptr<string> accessGroupId_ = nullptr;
    std::shared_ptr<string> accessRuleId_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> networkSegment_ = nullptr;
    std::shared_ptr<int32_t> priority_ = nullptr;
    std::shared_ptr<string> RWAccessType_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DFS20180620
#endif
