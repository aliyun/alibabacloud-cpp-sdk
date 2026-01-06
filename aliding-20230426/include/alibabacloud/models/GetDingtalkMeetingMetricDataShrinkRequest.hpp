// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDINGTALKMEETINGMETRICDATASHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETDINGTALKMEETINGMETRICDATASHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetDingtalkMeetingMetricDataShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDingtalkMeetingMetricDataShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContextShrink_);
      DARABONBA_PTR_TO_JSON(beginTime, beginTime_);
      DARABONBA_PTR_TO_JSON(conferenceId, conferenceId_);
      DARABONBA_PTR_TO_JSON(endTime, endTime_);
      DARABONBA_PTR_TO_JSON(orgId, orgId_);
      DARABONBA_PTR_TO_JSON(typeName, typeName_);
      DARABONBA_PTR_TO_JSON(workNo, workNo_);
    };
    friend void from_json(const Darabonba::Json& j, GetDingtalkMeetingMetricDataShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContextShrink_);
      DARABONBA_PTR_FROM_JSON(beginTime, beginTime_);
      DARABONBA_PTR_FROM_JSON(conferenceId, conferenceId_);
      DARABONBA_PTR_FROM_JSON(endTime, endTime_);
      DARABONBA_PTR_FROM_JSON(orgId, orgId_);
      DARABONBA_PTR_FROM_JSON(typeName, typeName_);
      DARABONBA_PTR_FROM_JSON(workNo, workNo_);
    };
    GetDingtalkMeetingMetricDataShrinkRequest() = default ;
    GetDingtalkMeetingMetricDataShrinkRequest(const GetDingtalkMeetingMetricDataShrinkRequest &) = default ;
    GetDingtalkMeetingMetricDataShrinkRequest(GetDingtalkMeetingMetricDataShrinkRequest &&) = default ;
    GetDingtalkMeetingMetricDataShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDingtalkMeetingMetricDataShrinkRequest() = default ;
    GetDingtalkMeetingMetricDataShrinkRequest& operator=(const GetDingtalkMeetingMetricDataShrinkRequest &) = default ;
    GetDingtalkMeetingMetricDataShrinkRequest& operator=(GetDingtalkMeetingMetricDataShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->tenantContextShrink_ == nullptr
        && this->beginTime_ == nullptr && this->conferenceId_ == nullptr && this->endTime_ == nullptr && this->orgId_ == nullptr && this->typeName_ == nullptr
        && this->workNo_ == nullptr; };
    // tenantContextShrink Field Functions 
    bool hasTenantContextShrink() const { return this->tenantContextShrink_ != nullptr;};
    void deleteTenantContextShrink() { this->tenantContextShrink_ = nullptr;};
    inline string getTenantContextShrink() const { DARABONBA_PTR_GET_DEFAULT(tenantContextShrink_, "") };
    inline GetDingtalkMeetingMetricDataShrinkRequest& setTenantContextShrink(string tenantContextShrink) { DARABONBA_PTR_SET_VALUE(tenantContextShrink_, tenantContextShrink) };


    // beginTime Field Functions 
    bool hasBeginTime() const { return this->beginTime_ != nullptr;};
    void deleteBeginTime() { this->beginTime_ = nullptr;};
    inline int64_t getBeginTime() const { DARABONBA_PTR_GET_DEFAULT(beginTime_, 0L) };
    inline GetDingtalkMeetingMetricDataShrinkRequest& setBeginTime(int64_t beginTime) { DARABONBA_PTR_SET_VALUE(beginTime_, beginTime) };


    // conferenceId Field Functions 
    bool hasConferenceId() const { return this->conferenceId_ != nullptr;};
    void deleteConferenceId() { this->conferenceId_ = nullptr;};
    inline string getConferenceId() const { DARABONBA_PTR_GET_DEFAULT(conferenceId_, "") };
    inline GetDingtalkMeetingMetricDataShrinkRequest& setConferenceId(string conferenceId) { DARABONBA_PTR_SET_VALUE(conferenceId_, conferenceId) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline GetDingtalkMeetingMetricDataShrinkRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // orgId Field Functions 
    bool hasOrgId() const { return this->orgId_ != nullptr;};
    void deleteOrgId() { this->orgId_ = nullptr;};
    inline string getOrgId() const { DARABONBA_PTR_GET_DEFAULT(orgId_, "") };
    inline GetDingtalkMeetingMetricDataShrinkRequest& setOrgId(string orgId) { DARABONBA_PTR_SET_VALUE(orgId_, orgId) };


    // typeName Field Functions 
    bool hasTypeName() const { return this->typeName_ != nullptr;};
    void deleteTypeName() { this->typeName_ = nullptr;};
    inline string getTypeName() const { DARABONBA_PTR_GET_DEFAULT(typeName_, "") };
    inline GetDingtalkMeetingMetricDataShrinkRequest& setTypeName(string typeName) { DARABONBA_PTR_SET_VALUE(typeName_, typeName) };


    // workNo Field Functions 
    bool hasWorkNo() const { return this->workNo_ != nullptr;};
    void deleteWorkNo() { this->workNo_ = nullptr;};
    inline string getWorkNo() const { DARABONBA_PTR_GET_DEFAULT(workNo_, "") };
    inline GetDingtalkMeetingMetricDataShrinkRequest& setWorkNo(string workNo) { DARABONBA_PTR_SET_VALUE(workNo_, workNo) };


  protected:
    shared_ptr<string> tenantContextShrink_ {};
    shared_ptr<int64_t> beginTime_ {};
    // This parameter is required.
    shared_ptr<string> conferenceId_ {};
    shared_ptr<int64_t> endTime_ {};
    shared_ptr<string> orgId_ {};
    shared_ptr<string> typeName_ {};
    shared_ptr<string> workNo_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
