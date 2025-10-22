// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETQUALITYRESULTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETQUALITYRESULTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class GetQualityResultRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetQualityResultRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ChannelType, channelType_);
      DARABONBA_PTR_TO_JSON(GroupIds, groupIds_);
      DARABONBA_PTR_TO_JSON(HitStatus, hitStatus_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ProjectIds, projectIds_);
      DARABONBA_PTR_TO_JSON(QualityRuleIds, qualityRuleIds_);
      DARABONBA_PTR_TO_JSON(TouchEndTime, touchEndTime_);
      DARABONBA_PTR_TO_JSON(TouchStartTime, touchStartTime_);
    };
    friend void from_json(const Darabonba::Json& j, GetQualityResultRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ChannelType, channelType_);
      DARABONBA_PTR_FROM_JSON(GroupIds, groupIds_);
      DARABONBA_PTR_FROM_JSON(HitStatus, hitStatus_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ProjectIds, projectIds_);
      DARABONBA_PTR_FROM_JSON(QualityRuleIds, qualityRuleIds_);
      DARABONBA_PTR_FROM_JSON(TouchEndTime, touchEndTime_);
      DARABONBA_PTR_FROM_JSON(TouchStartTime, touchStartTime_);
    };
    GetQualityResultRequest() = default ;
    GetQualityResultRequest(const GetQualityResultRequest &) = default ;
    GetQualityResultRequest(GetQualityResultRequest &&) = default ;
    GetQualityResultRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetQualityResultRequest() = default ;
    GetQualityResultRequest& operator=(const GetQualityResultRequest &) = default ;
    GetQualityResultRequest& operator=(GetQualityResultRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->channelType_ == nullptr
        && return this->groupIds_ == nullptr && return this->hitStatus_ == nullptr && return this->instanceId_ == nullptr && return this->pageNo_ == nullptr && return this->pageSize_ == nullptr
        && return this->projectIds_ == nullptr && return this->qualityRuleIds_ == nullptr && return this->touchEndTime_ == nullptr && return this->touchStartTime_ == nullptr; };
    // channelType Field Functions 
    bool hasChannelType() const { return this->channelType_ != nullptr;};
    void deleteChannelType() { this->channelType_ = nullptr;};
    inline string channelType() const { DARABONBA_PTR_GET_DEFAULT(channelType_, "") };
    inline GetQualityResultRequest& setChannelType(string channelType) { DARABONBA_PTR_SET_VALUE(channelType_, channelType) };


    // groupIds Field Functions 
    bool hasGroupIds() const { return this->groupIds_ != nullptr;};
    void deleteGroupIds() { this->groupIds_ = nullptr;};
    inline const vector<int64_t> & groupIds() const { DARABONBA_PTR_GET_CONST(groupIds_, vector<int64_t>) };
    inline vector<int64_t> groupIds() { DARABONBA_PTR_GET(groupIds_, vector<int64_t>) };
    inline GetQualityResultRequest& setGroupIds(const vector<int64_t> & groupIds) { DARABONBA_PTR_SET_VALUE(groupIds_, groupIds) };
    inline GetQualityResultRequest& setGroupIds(vector<int64_t> && groupIds) { DARABONBA_PTR_SET_RVALUE(groupIds_, groupIds) };


    // hitStatus Field Functions 
    bool hasHitStatus() const { return this->hitStatus_ != nullptr;};
    void deleteHitStatus() { this->hitStatus_ = nullptr;};
    inline int32_t hitStatus() const { DARABONBA_PTR_GET_DEFAULT(hitStatus_, 0) };
    inline GetQualityResultRequest& setHitStatus(int32_t hitStatus) { DARABONBA_PTR_SET_VALUE(hitStatus_, hitStatus) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetQualityResultRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t pageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline GetQualityResultRequest& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline GetQualityResultRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // projectIds Field Functions 
    bool hasProjectIds() const { return this->projectIds_ != nullptr;};
    void deleteProjectIds() { this->projectIds_ = nullptr;};
    inline const vector<int64_t> & projectIds() const { DARABONBA_PTR_GET_CONST(projectIds_, vector<int64_t>) };
    inline vector<int64_t> projectIds() { DARABONBA_PTR_GET(projectIds_, vector<int64_t>) };
    inline GetQualityResultRequest& setProjectIds(const vector<int64_t> & projectIds) { DARABONBA_PTR_SET_VALUE(projectIds_, projectIds) };
    inline GetQualityResultRequest& setProjectIds(vector<int64_t> && projectIds) { DARABONBA_PTR_SET_RVALUE(projectIds_, projectIds) };


    // qualityRuleIds Field Functions 
    bool hasQualityRuleIds() const { return this->qualityRuleIds_ != nullptr;};
    void deleteQualityRuleIds() { this->qualityRuleIds_ = nullptr;};
    inline const vector<int64_t> & qualityRuleIds() const { DARABONBA_PTR_GET_CONST(qualityRuleIds_, vector<int64_t>) };
    inline vector<int64_t> qualityRuleIds() { DARABONBA_PTR_GET(qualityRuleIds_, vector<int64_t>) };
    inline GetQualityResultRequest& setQualityRuleIds(const vector<int64_t> & qualityRuleIds) { DARABONBA_PTR_SET_VALUE(qualityRuleIds_, qualityRuleIds) };
    inline GetQualityResultRequest& setQualityRuleIds(vector<int64_t> && qualityRuleIds) { DARABONBA_PTR_SET_RVALUE(qualityRuleIds_, qualityRuleIds) };


    // touchEndTime Field Functions 
    bool hasTouchEndTime() const { return this->touchEndTime_ != nullptr;};
    void deleteTouchEndTime() { this->touchEndTime_ = nullptr;};
    inline string touchEndTime() const { DARABONBA_PTR_GET_DEFAULT(touchEndTime_, "") };
    inline GetQualityResultRequest& setTouchEndTime(string touchEndTime) { DARABONBA_PTR_SET_VALUE(touchEndTime_, touchEndTime) };


    // touchStartTime Field Functions 
    bool hasTouchStartTime() const { return this->touchStartTime_ != nullptr;};
    void deleteTouchStartTime() { this->touchStartTime_ = nullptr;};
    inline string touchStartTime() const { DARABONBA_PTR_GET_DEFAULT(touchStartTime_, "") };
    inline GetQualityResultRequest& setTouchStartTime(string touchStartTime) { DARABONBA_PTR_SET_VALUE(touchStartTime_, touchStartTime) };


  protected:
    std::shared_ptr<string> channelType_ = nullptr;
    std::shared_ptr<vector<int64_t>> groupIds_ = nullptr;
    std::shared_ptr<int32_t> hitStatus_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<int32_t> pageNo_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<vector<int64_t>> projectIds_ = nullptr;
    std::shared_ptr<vector<int64_t>> qualityRuleIds_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> touchEndTime_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> touchStartTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
