// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDINGTALKMEETINGINFOSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETDINGTALKMEETINGINFOSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetDingtalkMeetingInfoShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDingtalkMeetingInfoShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContextShrink_);
      DARABONBA_PTR_TO_JSON(conferenceId, conferenceId_);
      DARABONBA_PTR_TO_JSON(orgId, orgId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDingtalkMeetingInfoShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContextShrink_);
      DARABONBA_PTR_FROM_JSON(conferenceId, conferenceId_);
      DARABONBA_PTR_FROM_JSON(orgId, orgId_);
    };
    GetDingtalkMeetingInfoShrinkRequest() = default ;
    GetDingtalkMeetingInfoShrinkRequest(const GetDingtalkMeetingInfoShrinkRequest &) = default ;
    GetDingtalkMeetingInfoShrinkRequest(GetDingtalkMeetingInfoShrinkRequest &&) = default ;
    GetDingtalkMeetingInfoShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDingtalkMeetingInfoShrinkRequest() = default ;
    GetDingtalkMeetingInfoShrinkRequest& operator=(const GetDingtalkMeetingInfoShrinkRequest &) = default ;
    GetDingtalkMeetingInfoShrinkRequest& operator=(GetDingtalkMeetingInfoShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->tenantContextShrink_ == nullptr
        && this->conferenceId_ == nullptr && this->orgId_ == nullptr; };
    // tenantContextShrink Field Functions 
    bool hasTenantContextShrink() const { return this->tenantContextShrink_ != nullptr;};
    void deleteTenantContextShrink() { this->tenantContextShrink_ = nullptr;};
    inline string getTenantContextShrink() const { DARABONBA_PTR_GET_DEFAULT(tenantContextShrink_, "") };
    inline GetDingtalkMeetingInfoShrinkRequest& setTenantContextShrink(string tenantContextShrink) { DARABONBA_PTR_SET_VALUE(tenantContextShrink_, tenantContextShrink) };


    // conferenceId Field Functions 
    bool hasConferenceId() const { return this->conferenceId_ != nullptr;};
    void deleteConferenceId() { this->conferenceId_ = nullptr;};
    inline string getConferenceId() const { DARABONBA_PTR_GET_DEFAULT(conferenceId_, "") };
    inline GetDingtalkMeetingInfoShrinkRequest& setConferenceId(string conferenceId) { DARABONBA_PTR_SET_VALUE(conferenceId_, conferenceId) };


    // orgId Field Functions 
    bool hasOrgId() const { return this->orgId_ != nullptr;};
    void deleteOrgId() { this->orgId_ = nullptr;};
    inline string getOrgId() const { DARABONBA_PTR_GET_DEFAULT(orgId_, "") };
    inline GetDingtalkMeetingInfoShrinkRequest& setOrgId(string orgId) { DARABONBA_PTR_SET_VALUE(orgId_, orgId) };


  protected:
    shared_ptr<string> tenantContextShrink_ {};
    // This parameter is required.
    shared_ptr<string> conferenceId_ {};
    shared_ptr<string> orgId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
