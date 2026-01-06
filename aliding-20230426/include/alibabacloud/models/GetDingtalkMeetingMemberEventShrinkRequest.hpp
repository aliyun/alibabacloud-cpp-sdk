// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDINGTALKMEETINGMEMBEREVENTSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETDINGTALKMEETINGMEMBEREVENTSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetDingtalkMeetingMemberEventShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDingtalkMeetingMemberEventShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContextShrink_);
      DARABONBA_PTR_TO_JSON(beginTime, beginTime_);
      DARABONBA_PTR_TO_JSON(conferenceId, conferenceId_);
      DARABONBA_PTR_TO_JSON(endTime, endTime_);
      DARABONBA_PTR_TO_JSON(orgId, orgId_);
      DARABONBA_PTR_TO_JSON(workNo, workNo_);
    };
    friend void from_json(const Darabonba::Json& j, GetDingtalkMeetingMemberEventShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContextShrink_);
      DARABONBA_PTR_FROM_JSON(beginTime, beginTime_);
      DARABONBA_PTR_FROM_JSON(conferenceId, conferenceId_);
      DARABONBA_PTR_FROM_JSON(endTime, endTime_);
      DARABONBA_PTR_FROM_JSON(orgId, orgId_);
      DARABONBA_PTR_FROM_JSON(workNo, workNo_);
    };
    GetDingtalkMeetingMemberEventShrinkRequest() = default ;
    GetDingtalkMeetingMemberEventShrinkRequest(const GetDingtalkMeetingMemberEventShrinkRequest &) = default ;
    GetDingtalkMeetingMemberEventShrinkRequest(GetDingtalkMeetingMemberEventShrinkRequest &&) = default ;
    GetDingtalkMeetingMemberEventShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDingtalkMeetingMemberEventShrinkRequest() = default ;
    GetDingtalkMeetingMemberEventShrinkRequest& operator=(const GetDingtalkMeetingMemberEventShrinkRequest &) = default ;
    GetDingtalkMeetingMemberEventShrinkRequest& operator=(GetDingtalkMeetingMemberEventShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->tenantContextShrink_ == nullptr
        && this->beginTime_ == nullptr && this->conferenceId_ == nullptr && this->endTime_ == nullptr && this->orgId_ == nullptr && this->workNo_ == nullptr; };
    // tenantContextShrink Field Functions 
    bool hasTenantContextShrink() const { return this->tenantContextShrink_ != nullptr;};
    void deleteTenantContextShrink() { this->tenantContextShrink_ = nullptr;};
    inline string getTenantContextShrink() const { DARABONBA_PTR_GET_DEFAULT(tenantContextShrink_, "") };
    inline GetDingtalkMeetingMemberEventShrinkRequest& setTenantContextShrink(string tenantContextShrink) { DARABONBA_PTR_SET_VALUE(tenantContextShrink_, tenantContextShrink) };


    // beginTime Field Functions 
    bool hasBeginTime() const { return this->beginTime_ != nullptr;};
    void deleteBeginTime() { this->beginTime_ = nullptr;};
    inline int64_t getBeginTime() const { DARABONBA_PTR_GET_DEFAULT(beginTime_, 0L) };
    inline GetDingtalkMeetingMemberEventShrinkRequest& setBeginTime(int64_t beginTime) { DARABONBA_PTR_SET_VALUE(beginTime_, beginTime) };


    // conferenceId Field Functions 
    bool hasConferenceId() const { return this->conferenceId_ != nullptr;};
    void deleteConferenceId() { this->conferenceId_ = nullptr;};
    inline string getConferenceId() const { DARABONBA_PTR_GET_DEFAULT(conferenceId_, "") };
    inline GetDingtalkMeetingMemberEventShrinkRequest& setConferenceId(string conferenceId) { DARABONBA_PTR_SET_VALUE(conferenceId_, conferenceId) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline GetDingtalkMeetingMemberEventShrinkRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // orgId Field Functions 
    bool hasOrgId() const { return this->orgId_ != nullptr;};
    void deleteOrgId() { this->orgId_ = nullptr;};
    inline string getOrgId() const { DARABONBA_PTR_GET_DEFAULT(orgId_, "") };
    inline GetDingtalkMeetingMemberEventShrinkRequest& setOrgId(string orgId) { DARABONBA_PTR_SET_VALUE(orgId_, orgId) };


    // workNo Field Functions 
    bool hasWorkNo() const { return this->workNo_ != nullptr;};
    void deleteWorkNo() { this->workNo_ = nullptr;};
    inline string getWorkNo() const { DARABONBA_PTR_GET_DEFAULT(workNo_, "") };
    inline GetDingtalkMeetingMemberEventShrinkRequest& setWorkNo(string workNo) { DARABONBA_PTR_SET_VALUE(workNo_, workNo) };


  protected:
    shared_ptr<string> tenantContextShrink_ {};
    shared_ptr<int64_t> beginTime_ {};
    // This parameter is required.
    shared_ptr<string> conferenceId_ {};
    shared_ptr<int64_t> endTime_ {};
    shared_ptr<string> orgId_ {};
    shared_ptr<string> workNo_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
