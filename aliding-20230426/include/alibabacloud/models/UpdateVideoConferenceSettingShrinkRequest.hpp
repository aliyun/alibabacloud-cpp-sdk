// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEVIDEOCONFERENCESETTINGSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEVIDEOCONFERENCESETTINGSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class UpdateVideoConferenceSettingShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateVideoConferenceSettingShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AllowUnmuteSelf, allowUnmuteSelf_);
      DARABONBA_PTR_TO_JSON(AutoTransferHost, autoTransferHost_);
      DARABONBA_PTR_TO_JSON(ForbiddenShareScreen, forbiddenShareScreen_);
      DARABONBA_PTR_TO_JSON(LockConference, lockConference_);
      DARABONBA_PTR_TO_JSON(MuteAll, muteAll_);
      DARABONBA_PTR_TO_JSON(OnlyInternalEmployeesJoin, onlyInternalEmployeesJoin_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContextShrink_);
      DARABONBA_PTR_TO_JSON(conferenceId, conferenceId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateVideoConferenceSettingShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AllowUnmuteSelf, allowUnmuteSelf_);
      DARABONBA_PTR_FROM_JSON(AutoTransferHost, autoTransferHost_);
      DARABONBA_PTR_FROM_JSON(ForbiddenShareScreen, forbiddenShareScreen_);
      DARABONBA_PTR_FROM_JSON(LockConference, lockConference_);
      DARABONBA_PTR_FROM_JSON(MuteAll, muteAll_);
      DARABONBA_PTR_FROM_JSON(OnlyInternalEmployeesJoin, onlyInternalEmployeesJoin_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContextShrink_);
      DARABONBA_PTR_FROM_JSON(conferenceId, conferenceId_);
    };
    UpdateVideoConferenceSettingShrinkRequest() = default ;
    UpdateVideoConferenceSettingShrinkRequest(const UpdateVideoConferenceSettingShrinkRequest &) = default ;
    UpdateVideoConferenceSettingShrinkRequest(UpdateVideoConferenceSettingShrinkRequest &&) = default ;
    UpdateVideoConferenceSettingShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateVideoConferenceSettingShrinkRequest() = default ;
    UpdateVideoConferenceSettingShrinkRequest& operator=(const UpdateVideoConferenceSettingShrinkRequest &) = default ;
    UpdateVideoConferenceSettingShrinkRequest& operator=(UpdateVideoConferenceSettingShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->allowUnmuteSelf_ != nullptr
        && this->autoTransferHost_ != nullptr && this->forbiddenShareScreen_ != nullptr && this->lockConference_ != nullptr && this->muteAll_ != nullptr && this->onlyInternalEmployeesJoin_ != nullptr
        && this->tenantContextShrink_ != nullptr && this->conferenceId_ != nullptr; };
    // allowUnmuteSelf Field Functions 
    bool hasAllowUnmuteSelf() const { return this->allowUnmuteSelf_ != nullptr;};
    void deleteAllowUnmuteSelf() { this->allowUnmuteSelf_ = nullptr;};
    inline bool allowUnmuteSelf() const { DARABONBA_PTR_GET_DEFAULT(allowUnmuteSelf_, false) };
    inline UpdateVideoConferenceSettingShrinkRequest& setAllowUnmuteSelf(bool allowUnmuteSelf) { DARABONBA_PTR_SET_VALUE(allowUnmuteSelf_, allowUnmuteSelf) };


    // autoTransferHost Field Functions 
    bool hasAutoTransferHost() const { return this->autoTransferHost_ != nullptr;};
    void deleteAutoTransferHost() { this->autoTransferHost_ = nullptr;};
    inline bool autoTransferHost() const { DARABONBA_PTR_GET_DEFAULT(autoTransferHost_, false) };
    inline UpdateVideoConferenceSettingShrinkRequest& setAutoTransferHost(bool autoTransferHost) { DARABONBA_PTR_SET_VALUE(autoTransferHost_, autoTransferHost) };


    // forbiddenShareScreen Field Functions 
    bool hasForbiddenShareScreen() const { return this->forbiddenShareScreen_ != nullptr;};
    void deleteForbiddenShareScreen() { this->forbiddenShareScreen_ = nullptr;};
    inline bool forbiddenShareScreen() const { DARABONBA_PTR_GET_DEFAULT(forbiddenShareScreen_, false) };
    inline UpdateVideoConferenceSettingShrinkRequest& setForbiddenShareScreen(bool forbiddenShareScreen) { DARABONBA_PTR_SET_VALUE(forbiddenShareScreen_, forbiddenShareScreen) };


    // lockConference Field Functions 
    bool hasLockConference() const { return this->lockConference_ != nullptr;};
    void deleteLockConference() { this->lockConference_ = nullptr;};
    inline bool lockConference() const { DARABONBA_PTR_GET_DEFAULT(lockConference_, false) };
    inline UpdateVideoConferenceSettingShrinkRequest& setLockConference(bool lockConference) { DARABONBA_PTR_SET_VALUE(lockConference_, lockConference) };


    // muteAll Field Functions 
    bool hasMuteAll() const { return this->muteAll_ != nullptr;};
    void deleteMuteAll() { this->muteAll_ = nullptr;};
    inline bool muteAll() const { DARABONBA_PTR_GET_DEFAULT(muteAll_, false) };
    inline UpdateVideoConferenceSettingShrinkRequest& setMuteAll(bool muteAll) { DARABONBA_PTR_SET_VALUE(muteAll_, muteAll) };


    // onlyInternalEmployeesJoin Field Functions 
    bool hasOnlyInternalEmployeesJoin() const { return this->onlyInternalEmployeesJoin_ != nullptr;};
    void deleteOnlyInternalEmployeesJoin() { this->onlyInternalEmployeesJoin_ = nullptr;};
    inline bool onlyInternalEmployeesJoin() const { DARABONBA_PTR_GET_DEFAULT(onlyInternalEmployeesJoin_, false) };
    inline UpdateVideoConferenceSettingShrinkRequest& setOnlyInternalEmployeesJoin(bool onlyInternalEmployeesJoin) { DARABONBA_PTR_SET_VALUE(onlyInternalEmployeesJoin_, onlyInternalEmployeesJoin) };


    // tenantContextShrink Field Functions 
    bool hasTenantContextShrink() const { return this->tenantContextShrink_ != nullptr;};
    void deleteTenantContextShrink() { this->tenantContextShrink_ = nullptr;};
    inline string tenantContextShrink() const { DARABONBA_PTR_GET_DEFAULT(tenantContextShrink_, "") };
    inline UpdateVideoConferenceSettingShrinkRequest& setTenantContextShrink(string tenantContextShrink) { DARABONBA_PTR_SET_VALUE(tenantContextShrink_, tenantContextShrink) };


    // conferenceId Field Functions 
    bool hasConferenceId() const { return this->conferenceId_ != nullptr;};
    void deleteConferenceId() { this->conferenceId_ = nullptr;};
    inline string conferenceId() const { DARABONBA_PTR_GET_DEFAULT(conferenceId_, "") };
    inline UpdateVideoConferenceSettingShrinkRequest& setConferenceId(string conferenceId) { DARABONBA_PTR_SET_VALUE(conferenceId_, conferenceId) };


  protected:
    std::shared_ptr<bool> allowUnmuteSelf_ = nullptr;
    std::shared_ptr<bool> autoTransferHost_ = nullptr;
    std::shared_ptr<bool> forbiddenShareScreen_ = nullptr;
    std::shared_ptr<bool> lockConference_ = nullptr;
    std::shared_ptr<bool> muteAll_ = nullptr;
    std::shared_ptr<bool> onlyInternalEmployeesJoin_ = nullptr;
    std::shared_ptr<string> tenantContextShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> conferenceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
