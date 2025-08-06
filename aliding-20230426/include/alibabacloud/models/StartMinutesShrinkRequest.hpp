// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTMINUTESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STARTMINUTESSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class StartMinutesShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartMinutesShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContextShrink_);
      DARABONBA_PTR_TO_JSON(conferenceId, conferenceId_);
      DARABONBA_PTR_TO_JSON(ownerUserId, ownerUserId_);
      DARABONBA_PTR_TO_JSON(recordAudio, recordAudio_);
    };
    friend void from_json(const Darabonba::Json& j, StartMinutesShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContextShrink_);
      DARABONBA_PTR_FROM_JSON(conferenceId, conferenceId_);
      DARABONBA_PTR_FROM_JSON(ownerUserId, ownerUserId_);
      DARABONBA_PTR_FROM_JSON(recordAudio, recordAudio_);
    };
    StartMinutesShrinkRequest() = default ;
    StartMinutesShrinkRequest(const StartMinutesShrinkRequest &) = default ;
    StartMinutesShrinkRequest(StartMinutesShrinkRequest &&) = default ;
    StartMinutesShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartMinutesShrinkRequest() = default ;
    StartMinutesShrinkRequest& operator=(const StartMinutesShrinkRequest &) = default ;
    StartMinutesShrinkRequest& operator=(StartMinutesShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->tenantContextShrink_ != nullptr
        && this->conferenceId_ != nullptr && this->ownerUserId_ != nullptr && this->recordAudio_ != nullptr; };
    // tenantContextShrink Field Functions 
    bool hasTenantContextShrink() const { return this->tenantContextShrink_ != nullptr;};
    void deleteTenantContextShrink() { this->tenantContextShrink_ = nullptr;};
    inline string tenantContextShrink() const { DARABONBA_PTR_GET_DEFAULT(tenantContextShrink_, "") };
    inline StartMinutesShrinkRequest& setTenantContextShrink(string tenantContextShrink) { DARABONBA_PTR_SET_VALUE(tenantContextShrink_, tenantContextShrink) };


    // conferenceId Field Functions 
    bool hasConferenceId() const { return this->conferenceId_ != nullptr;};
    void deleteConferenceId() { this->conferenceId_ = nullptr;};
    inline string conferenceId() const { DARABONBA_PTR_GET_DEFAULT(conferenceId_, "") };
    inline StartMinutesShrinkRequest& setConferenceId(string conferenceId) { DARABONBA_PTR_SET_VALUE(conferenceId_, conferenceId) };


    // ownerUserId Field Functions 
    bool hasOwnerUserId() const { return this->ownerUserId_ != nullptr;};
    void deleteOwnerUserId() { this->ownerUserId_ = nullptr;};
    inline string ownerUserId() const { DARABONBA_PTR_GET_DEFAULT(ownerUserId_, "") };
    inline StartMinutesShrinkRequest& setOwnerUserId(string ownerUserId) { DARABONBA_PTR_SET_VALUE(ownerUserId_, ownerUserId) };


    // recordAudio Field Functions 
    bool hasRecordAudio() const { return this->recordAudio_ != nullptr;};
    void deleteRecordAudio() { this->recordAudio_ = nullptr;};
    inline bool recordAudio() const { DARABONBA_PTR_GET_DEFAULT(recordAudio_, false) };
    inline StartMinutesShrinkRequest& setRecordAudio(bool recordAudio) { DARABONBA_PTR_SET_VALUE(recordAudio_, recordAudio) };


  protected:
    std::shared_ptr<string> tenantContextShrink_ = nullptr;
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
