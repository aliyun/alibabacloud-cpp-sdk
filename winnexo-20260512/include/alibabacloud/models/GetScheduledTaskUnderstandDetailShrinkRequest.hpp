// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSCHEDULEDTASKUNDERSTANDDETAILSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSCHEDULEDTASKUNDERSTANDDETAILSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class GetScheduledTaskUnderstandDetailShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetScheduledTaskUnderstandDetailShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(collaborationGroupId, collaborationGroupId_);
      DARABONBA_PTR_TO_JSON(digitalEmployeeName, digitalEmployeeNameShrink_);
      DARABONBA_PTR_TO_JSON(segments, segmentsShrink_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(userInput, userInput_);
    };
    friend void from_json(const Darabonba::Json& j, GetScheduledTaskUnderstandDetailShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(collaborationGroupId, collaborationGroupId_);
      DARABONBA_PTR_FROM_JSON(digitalEmployeeName, digitalEmployeeNameShrink_);
      DARABONBA_PTR_FROM_JSON(segments, segmentsShrink_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(userInput, userInput_);
    };
    GetScheduledTaskUnderstandDetailShrinkRequest() = default ;
    GetScheduledTaskUnderstandDetailShrinkRequest(const GetScheduledTaskUnderstandDetailShrinkRequest &) = default ;
    GetScheduledTaskUnderstandDetailShrinkRequest(GetScheduledTaskUnderstandDetailShrinkRequest &&) = default ;
    GetScheduledTaskUnderstandDetailShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetScheduledTaskUnderstandDetailShrinkRequest() = default ;
    GetScheduledTaskUnderstandDetailShrinkRequest& operator=(const GetScheduledTaskUnderstandDetailShrinkRequest &) = default ;
    GetScheduledTaskUnderstandDetailShrinkRequest& operator=(GetScheduledTaskUnderstandDetailShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->collaborationGroupId_ == nullptr
        && this->digitalEmployeeNameShrink_ == nullptr && this->segmentsShrink_ == nullptr && this->tenantId_ == nullptr && this->userInput_ == nullptr; };
    // collaborationGroupId Field Functions 
    bool hasCollaborationGroupId() const { return this->collaborationGroupId_ != nullptr;};
    void deleteCollaborationGroupId() { this->collaborationGroupId_ = nullptr;};
    inline string getCollaborationGroupId() const { DARABONBA_PTR_GET_DEFAULT(collaborationGroupId_, "") };
    inline GetScheduledTaskUnderstandDetailShrinkRequest& setCollaborationGroupId(string collaborationGroupId) { DARABONBA_PTR_SET_VALUE(collaborationGroupId_, collaborationGroupId) };


    // digitalEmployeeNameShrink Field Functions 
    bool hasDigitalEmployeeNameShrink() const { return this->digitalEmployeeNameShrink_ != nullptr;};
    void deleteDigitalEmployeeNameShrink() { this->digitalEmployeeNameShrink_ = nullptr;};
    inline string getDigitalEmployeeNameShrink() const { DARABONBA_PTR_GET_DEFAULT(digitalEmployeeNameShrink_, "") };
    inline GetScheduledTaskUnderstandDetailShrinkRequest& setDigitalEmployeeNameShrink(string digitalEmployeeNameShrink) { DARABONBA_PTR_SET_VALUE(digitalEmployeeNameShrink_, digitalEmployeeNameShrink) };


    // segmentsShrink Field Functions 
    bool hasSegmentsShrink() const { return this->segmentsShrink_ != nullptr;};
    void deleteSegmentsShrink() { this->segmentsShrink_ = nullptr;};
    inline string getSegmentsShrink() const { DARABONBA_PTR_GET_DEFAULT(segmentsShrink_, "") };
    inline GetScheduledTaskUnderstandDetailShrinkRequest& setSegmentsShrink(string segmentsShrink) { DARABONBA_PTR_SET_VALUE(segmentsShrink_, segmentsShrink) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline GetScheduledTaskUnderstandDetailShrinkRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // userInput Field Functions 
    bool hasUserInput() const { return this->userInput_ != nullptr;};
    void deleteUserInput() { this->userInput_ = nullptr;};
    inline string getUserInput() const { DARABONBA_PTR_GET_DEFAULT(userInput_, "") };
    inline GetScheduledTaskUnderstandDetailShrinkRequest& setUserInput(string userInput) { DARABONBA_PTR_SET_VALUE(userInput_, userInput) };


  protected:
    // 所属协作群组 ID（如 cg_101）；群任务理解时传入（调用者需为有效群成员），候选技能额外并入群绑定技能
    shared_ptr<string> collaborationGroupId_ {};
    // 数字员工名称列表，用于过滤可用技能；必传（传空列表表示仅用租户 global 技能）
    // 
    // This parameter is required.
    shared_ptr<string> digitalEmployeeNameShrink_ {};
    shared_ptr<string> segmentsShrink_ {};
    // 租户ID，公共参数，缺省时使用调用方默认租户
    shared_ptr<string> tenantId_ {};
    // 自然语言任务描述
    // 
    // This parameter is required.
    shared_ptr<string> userInput_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
