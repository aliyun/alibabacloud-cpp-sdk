// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETQUALITYRESULTRESPONSEBODYDATAQUALITYRESULTRESPONSELIST_HPP_
#define ALIBABACLOUD_MODELS_GETQUALITYRESULTRESPONSEBODYDATAQUALITYRESULTRESPONSELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class GetQualityResultResponseBodyDataQualityResultResponseList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetQualityResultResponseBodyDataQualityResultResponseList& obj) { 
      DARABONBA_PTR_TO_JSON(ChannelType, channelType_);
      DARABONBA_PTR_TO_JSON(ChannelTypeName, channelTypeName_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(HitDetail, hitDetail_);
      DARABONBA_PTR_TO_JSON(HitStatus, hitStatus_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(MemberName, memberName_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(ServicerId, servicerId_);
      DARABONBA_PTR_TO_JSON(ServicerName, servicerName_);
      DARABONBA_PTR_TO_JSON(TouchId, touchId_);
      DARABONBA_PTR_TO_JSON(TouchStartTime, touchStartTime_);
    };
    friend void from_json(const Darabonba::Json& j, GetQualityResultResponseBodyDataQualityResultResponseList& obj) { 
      DARABONBA_PTR_FROM_JSON(ChannelType, channelType_);
      DARABONBA_PTR_FROM_JSON(ChannelTypeName, channelTypeName_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(HitDetail, hitDetail_);
      DARABONBA_PTR_FROM_JSON(HitStatus, hitStatus_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(MemberName, memberName_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(ServicerId, servicerId_);
      DARABONBA_PTR_FROM_JSON(ServicerName, servicerName_);
      DARABONBA_PTR_FROM_JSON(TouchId, touchId_);
      DARABONBA_PTR_FROM_JSON(TouchStartTime, touchStartTime_);
    };
    GetQualityResultResponseBodyDataQualityResultResponseList() = default ;
    GetQualityResultResponseBodyDataQualityResultResponseList(const GetQualityResultResponseBodyDataQualityResultResponseList &) = default ;
    GetQualityResultResponseBodyDataQualityResultResponseList(GetQualityResultResponseBodyDataQualityResultResponseList &&) = default ;
    GetQualityResultResponseBodyDataQualityResultResponseList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetQualityResultResponseBodyDataQualityResultResponseList() = default ;
    GetQualityResultResponseBodyDataQualityResultResponseList& operator=(const GetQualityResultResponseBodyDataQualityResultResponseList &) = default ;
    GetQualityResultResponseBodyDataQualityResultResponseList& operator=(GetQualityResultResponseBodyDataQualityResultResponseList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->channelType_ != nullptr
        && this->channelTypeName_ != nullptr && this->groupId_ != nullptr && this->groupName_ != nullptr && this->hitDetail_ != nullptr && this->hitStatus_ != nullptr
        && this->instanceName_ != nullptr && this->memberName_ != nullptr && this->projectId_ != nullptr && this->projectName_ != nullptr && this->ruleId_ != nullptr
        && this->ruleName_ != nullptr && this->servicerId_ != nullptr && this->servicerName_ != nullptr && this->touchId_ != nullptr && this->touchStartTime_ != nullptr; };
    // channelType Field Functions 
    bool hasChannelType() const { return this->channelType_ != nullptr;};
    void deleteChannelType() { this->channelType_ = nullptr;};
    inline string channelType() const { DARABONBA_PTR_GET_DEFAULT(channelType_, "") };
    inline GetQualityResultResponseBodyDataQualityResultResponseList& setChannelType(string channelType) { DARABONBA_PTR_SET_VALUE(channelType_, channelType) };


    // channelTypeName Field Functions 
    bool hasChannelTypeName() const { return this->channelTypeName_ != nullptr;};
    void deleteChannelTypeName() { this->channelTypeName_ = nullptr;};
    inline string channelTypeName() const { DARABONBA_PTR_GET_DEFAULT(channelTypeName_, "") };
    inline GetQualityResultResponseBodyDataQualityResultResponseList& setChannelTypeName(string channelTypeName) { DARABONBA_PTR_SET_VALUE(channelTypeName_, channelTypeName) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline GetQualityResultResponseBodyDataQualityResultResponseList& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline GetQualityResultResponseBodyDataQualityResultResponseList& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // hitDetail Field Functions 
    bool hasHitDetail() const { return this->hitDetail_ != nullptr;};
    void deleteHitDetail() { this->hitDetail_ = nullptr;};
    inline string hitDetail() const { DARABONBA_PTR_GET_DEFAULT(hitDetail_, "") };
    inline GetQualityResultResponseBodyDataQualityResultResponseList& setHitDetail(string hitDetail) { DARABONBA_PTR_SET_VALUE(hitDetail_, hitDetail) };


    // hitStatus Field Functions 
    bool hasHitStatus() const { return this->hitStatus_ != nullptr;};
    void deleteHitStatus() { this->hitStatus_ = nullptr;};
    inline bool hitStatus() const { DARABONBA_PTR_GET_DEFAULT(hitStatus_, false) };
    inline GetQualityResultResponseBodyDataQualityResultResponseList& setHitStatus(bool hitStatus) { DARABONBA_PTR_SET_VALUE(hitStatus_, hitStatus) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline GetQualityResultResponseBodyDataQualityResultResponseList& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // memberName Field Functions 
    bool hasMemberName() const { return this->memberName_ != nullptr;};
    void deleteMemberName() { this->memberName_ = nullptr;};
    inline string memberName() const { DARABONBA_PTR_GET_DEFAULT(memberName_, "") };
    inline GetQualityResultResponseBodyDataQualityResultResponseList& setMemberName(string memberName) { DARABONBA_PTR_SET_VALUE(memberName_, memberName) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline string projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
    inline GetQualityResultResponseBodyDataQualityResultResponseList& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline GetQualityResultResponseBodyDataQualityResultResponseList& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline string ruleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
    inline GetQualityResultResponseBodyDataQualityResultResponseList& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline GetQualityResultResponseBodyDataQualityResultResponseList& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // servicerId Field Functions 
    bool hasServicerId() const { return this->servicerId_ != nullptr;};
    void deleteServicerId() { this->servicerId_ = nullptr;};
    inline string servicerId() const { DARABONBA_PTR_GET_DEFAULT(servicerId_, "") };
    inline GetQualityResultResponseBodyDataQualityResultResponseList& setServicerId(string servicerId) { DARABONBA_PTR_SET_VALUE(servicerId_, servicerId) };


    // servicerName Field Functions 
    bool hasServicerName() const { return this->servicerName_ != nullptr;};
    void deleteServicerName() { this->servicerName_ = nullptr;};
    inline string servicerName() const { DARABONBA_PTR_GET_DEFAULT(servicerName_, "") };
    inline GetQualityResultResponseBodyDataQualityResultResponseList& setServicerName(string servicerName) { DARABONBA_PTR_SET_VALUE(servicerName_, servicerName) };


    // touchId Field Functions 
    bool hasTouchId() const { return this->touchId_ != nullptr;};
    void deleteTouchId() { this->touchId_ = nullptr;};
    inline string touchId() const { DARABONBA_PTR_GET_DEFAULT(touchId_, "") };
    inline GetQualityResultResponseBodyDataQualityResultResponseList& setTouchId(string touchId) { DARABONBA_PTR_SET_VALUE(touchId_, touchId) };


    // touchStartTime Field Functions 
    bool hasTouchStartTime() const { return this->touchStartTime_ != nullptr;};
    void deleteTouchStartTime() { this->touchStartTime_ = nullptr;};
    inline string touchStartTime() const { DARABONBA_PTR_GET_DEFAULT(touchStartTime_, "") };
    inline GetQualityResultResponseBodyDataQualityResultResponseList& setTouchStartTime(string touchStartTime) { DARABONBA_PTR_SET_VALUE(touchStartTime_, touchStartTime) };


  protected:
    std::shared_ptr<string> channelType_ = nullptr;
    std::shared_ptr<string> channelTypeName_ = nullptr;
    std::shared_ptr<string> groupId_ = nullptr;
    std::shared_ptr<string> groupName_ = nullptr;
    std::shared_ptr<string> hitDetail_ = nullptr;
    std::shared_ptr<bool> hitStatus_ = nullptr;
    std::shared_ptr<string> instanceName_ = nullptr;
    std::shared_ptr<string> memberName_ = nullptr;
    std::shared_ptr<string> projectId_ = nullptr;
    std::shared_ptr<string> projectName_ = nullptr;
    std::shared_ptr<string> ruleId_ = nullptr;
    std::shared_ptr<string> ruleName_ = nullptr;
    std::shared_ptr<string> servicerId_ = nullptr;
    std::shared_ptr<string> servicerName_ = nullptr;
    std::shared_ptr<string> touchId_ = nullptr;
    std::shared_ptr<string> touchStartTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
