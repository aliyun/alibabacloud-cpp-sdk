// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTMINUTESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STARTMINUTESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/StartMinutesRequestTenantContext.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class StartMinutesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartMinutesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContext_);
      DARABONBA_PTR_TO_JSON(conferenceId, conferenceId_);
      DARABONBA_PTR_TO_JSON(ownerUserId, ownerUserId_);
      DARABONBA_PTR_TO_JSON(recordAudio, recordAudio_);
    };
    friend void from_json(const Darabonba::Json& j, StartMinutesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContext_);
      DARABONBA_PTR_FROM_JSON(conferenceId, conferenceId_);
      DARABONBA_PTR_FROM_JSON(ownerUserId, ownerUserId_);
      DARABONBA_PTR_FROM_JSON(recordAudio, recordAudio_);
    };
    StartMinutesRequest() = default ;
    StartMinutesRequest(const StartMinutesRequest &) = default ;
    StartMinutesRequest(StartMinutesRequest &&) = default ;
    StartMinutesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartMinutesRequest() = default ;
    StartMinutesRequest& operator=(const StartMinutesRequest &) = default ;
    StartMinutesRequest& operator=(StartMinutesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->tenantContext_ != nullptr
        && this->conferenceId_ != nullptr && this->ownerUserId_ != nullptr && this->recordAudio_ != nullptr; };
    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const StartMinutesRequestTenantContext & tenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, StartMinutesRequestTenantContext) };
    inline StartMinutesRequestTenantContext tenantContext() { DARABONBA_PTR_GET(tenantContext_, StartMinutesRequestTenantContext) };
    inline StartMinutesRequest& setTenantContext(const StartMinutesRequestTenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline StartMinutesRequest& setTenantContext(StartMinutesRequestTenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


    // conferenceId Field Functions 
    bool hasConferenceId() const { return this->conferenceId_ != nullptr;};
    void deleteConferenceId() { this->conferenceId_ = nullptr;};
    inline string conferenceId() const { DARABONBA_PTR_GET_DEFAULT(conferenceId_, "") };
    inline StartMinutesRequest& setConferenceId(string conferenceId) { DARABONBA_PTR_SET_VALUE(conferenceId_, conferenceId) };


    // ownerUserId Field Functions 
    bool hasOwnerUserId() const { return this->ownerUserId_ != nullptr;};
    void deleteOwnerUserId() { this->ownerUserId_ = nullptr;};
    inline string ownerUserId() const { DARABONBA_PTR_GET_DEFAULT(ownerUserId_, "") };
    inline StartMinutesRequest& setOwnerUserId(string ownerUserId) { DARABONBA_PTR_SET_VALUE(ownerUserId_, ownerUserId) };


    // recordAudio Field Functions 
    bool hasRecordAudio() const { return this->recordAudio_ != nullptr;};
    void deleteRecordAudio() { this->recordAudio_ = nullptr;};
    inline bool recordAudio() const { DARABONBA_PTR_GET_DEFAULT(recordAudio_, false) };
    inline StartMinutesRequest& setRecordAudio(bool recordAudio) { DARABONBA_PTR_SET_VALUE(recordAudio_, recordAudio) };


  protected:
    std::shared_ptr<StartMinutesRequestTenantContext> tenantContext_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> conferenceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> ownerUserId_ = nullptr;
    std::shared_ptr<bool> recordAudio_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
