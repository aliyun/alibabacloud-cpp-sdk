// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESCHEDULECONFSETTINGSREQUESTSCHEDULECONFSETTINGMODEL_HPP_
#define ALIBABACLOUD_MODELS_UPDATESCHEDULECONFSETTINGSREQUESTSCHEDULECONFSETTINGMODEL_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateScheduleConfSettingsRequestScheduleConfSettingModelMoziConfOpenRecordSetting.hpp>
#include <alibabacloud/models/UpdateScheduleConfSettingsRequestScheduleConfSettingModelMoziConfVirtualExtraSetting.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class UpdateScheduleConfSettingsRequestScheduleConfSettingModel : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateScheduleConfSettingsRequestScheduleConfSettingModel& obj) { 
      DARABONBA_PTR_TO_JSON(CohostUserIds, cohostUserIds_);
      DARABONBA_PTR_TO_JSON(ConfAllowedCorpId, confAllowedCorpId_);
      DARABONBA_PTR_TO_JSON(HostUserId, hostUserId_);
      DARABONBA_PTR_TO_JSON(LockRoom, lockRoom_);
      DARABONBA_PTR_TO_JSON(MoziConfOpenRecordSetting, moziConfOpenRecordSetting_);
      DARABONBA_PTR_TO_JSON(MoziConfVirtualExtraSetting, moziConfVirtualExtraSetting_);
      DARABONBA_PTR_TO_JSON(MuteOnJoin, muteOnJoin_);
      DARABONBA_PTR_TO_JSON(ScreenShareForbidden, screenShareForbidden_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateScheduleConfSettingsRequestScheduleConfSettingModel& obj) { 
      DARABONBA_PTR_FROM_JSON(CohostUserIds, cohostUserIds_);
      DARABONBA_PTR_FROM_JSON(ConfAllowedCorpId, confAllowedCorpId_);
      DARABONBA_PTR_FROM_JSON(HostUserId, hostUserId_);
      DARABONBA_PTR_FROM_JSON(LockRoom, lockRoom_);
      DARABONBA_PTR_FROM_JSON(MoziConfOpenRecordSetting, moziConfOpenRecordSetting_);
      DARABONBA_PTR_FROM_JSON(MoziConfVirtualExtraSetting, moziConfVirtualExtraSetting_);
      DARABONBA_PTR_FROM_JSON(MuteOnJoin, muteOnJoin_);
      DARABONBA_PTR_FROM_JSON(ScreenShareForbidden, screenShareForbidden_);
    };
    UpdateScheduleConfSettingsRequestScheduleConfSettingModel() = default ;
    UpdateScheduleConfSettingsRequestScheduleConfSettingModel(const UpdateScheduleConfSettingsRequestScheduleConfSettingModel &) = default ;
    UpdateScheduleConfSettingsRequestScheduleConfSettingModel(UpdateScheduleConfSettingsRequestScheduleConfSettingModel &&) = default ;
    UpdateScheduleConfSettingsRequestScheduleConfSettingModel(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateScheduleConfSettingsRequestScheduleConfSettingModel() = default ;
    UpdateScheduleConfSettingsRequestScheduleConfSettingModel& operator=(const UpdateScheduleConfSettingsRequestScheduleConfSettingModel &) = default ;
    UpdateScheduleConfSettingsRequestScheduleConfSettingModel& operator=(UpdateScheduleConfSettingsRequestScheduleConfSettingModel &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cohostUserIds_ == nullptr
        && return this->confAllowedCorpId_ == nullptr && return this->hostUserId_ == nullptr && return this->lockRoom_ == nullptr && return this->moziConfOpenRecordSetting_ == nullptr && return this->moziConfVirtualExtraSetting_ == nullptr
        && return this->muteOnJoin_ == nullptr && return this->screenShareForbidden_ == nullptr; };
    // cohostUserIds Field Functions 
    bool hasCohostUserIds() const { return this->cohostUserIds_ != nullptr;};
    void deleteCohostUserIds() { this->cohostUserIds_ = nullptr;};
    inline const vector<string> & cohostUserIds() const { DARABONBA_PTR_GET_CONST(cohostUserIds_, vector<string>) };
    inline vector<string> cohostUserIds() { DARABONBA_PTR_GET(cohostUserIds_, vector<string>) };
    inline UpdateScheduleConfSettingsRequestScheduleConfSettingModel& setCohostUserIds(const vector<string> & cohostUserIds) { DARABONBA_PTR_SET_VALUE(cohostUserIds_, cohostUserIds) };
    inline UpdateScheduleConfSettingsRequestScheduleConfSettingModel& setCohostUserIds(vector<string> && cohostUserIds) { DARABONBA_PTR_SET_RVALUE(cohostUserIds_, cohostUserIds) };


    // confAllowedCorpId Field Functions 
    bool hasConfAllowedCorpId() const { return this->confAllowedCorpId_ != nullptr;};
    void deleteConfAllowedCorpId() { this->confAllowedCorpId_ = nullptr;};
    inline string confAllowedCorpId() const { DARABONBA_PTR_GET_DEFAULT(confAllowedCorpId_, "") };
    inline UpdateScheduleConfSettingsRequestScheduleConfSettingModel& setConfAllowedCorpId(string confAllowedCorpId) { DARABONBA_PTR_SET_VALUE(confAllowedCorpId_, confAllowedCorpId) };


    // hostUserId Field Functions 
    bool hasHostUserId() const { return this->hostUserId_ != nullptr;};
    void deleteHostUserId() { this->hostUserId_ = nullptr;};
    inline string hostUserId() const { DARABONBA_PTR_GET_DEFAULT(hostUserId_, "") };
    inline UpdateScheduleConfSettingsRequestScheduleConfSettingModel& setHostUserId(string hostUserId) { DARABONBA_PTR_SET_VALUE(hostUserId_, hostUserId) };


    // lockRoom Field Functions 
    bool hasLockRoom() const { return this->lockRoom_ != nullptr;};
    void deleteLockRoom() { this->lockRoom_ = nullptr;};
    inline int32_t lockRoom() const { DARABONBA_PTR_GET_DEFAULT(lockRoom_, 0) };
    inline UpdateScheduleConfSettingsRequestScheduleConfSettingModel& setLockRoom(int32_t lockRoom) { DARABONBA_PTR_SET_VALUE(lockRoom_, lockRoom) };


    // moziConfOpenRecordSetting Field Functions 
    bool hasMoziConfOpenRecordSetting() const { return this->moziConfOpenRecordSetting_ != nullptr;};
    void deleteMoziConfOpenRecordSetting() { this->moziConfOpenRecordSetting_ = nullptr;};
    inline const Models::UpdateScheduleConfSettingsRequestScheduleConfSettingModelMoziConfOpenRecordSetting & moziConfOpenRecordSetting() const { DARABONBA_PTR_GET_CONST(moziConfOpenRecordSetting_, Models::UpdateScheduleConfSettingsRequestScheduleConfSettingModelMoziConfOpenRecordSetting) };
    inline Models::UpdateScheduleConfSettingsRequestScheduleConfSettingModelMoziConfOpenRecordSetting moziConfOpenRecordSetting() { DARABONBA_PTR_GET(moziConfOpenRecordSetting_, Models::UpdateScheduleConfSettingsRequestScheduleConfSettingModelMoziConfOpenRecordSetting) };
    inline UpdateScheduleConfSettingsRequestScheduleConfSettingModel& setMoziConfOpenRecordSetting(const Models::UpdateScheduleConfSettingsRequestScheduleConfSettingModelMoziConfOpenRecordSetting & moziConfOpenRecordSetting) { DARABONBA_PTR_SET_VALUE(moziConfOpenRecordSetting_, moziConfOpenRecordSetting) };
    inline UpdateScheduleConfSettingsRequestScheduleConfSettingModel& setMoziConfOpenRecordSetting(Models::UpdateScheduleConfSettingsRequestScheduleConfSettingModelMoziConfOpenRecordSetting && moziConfOpenRecordSetting) { DARABONBA_PTR_SET_RVALUE(moziConfOpenRecordSetting_, moziConfOpenRecordSetting) };


    // moziConfVirtualExtraSetting Field Functions 
    bool hasMoziConfVirtualExtraSetting() const { return this->moziConfVirtualExtraSetting_ != nullptr;};
    void deleteMoziConfVirtualExtraSetting() { this->moziConfVirtualExtraSetting_ = nullptr;};
    inline const Models::UpdateScheduleConfSettingsRequestScheduleConfSettingModelMoziConfVirtualExtraSetting & moziConfVirtualExtraSetting() const { DARABONBA_PTR_GET_CONST(moziConfVirtualExtraSetting_, Models::UpdateScheduleConfSettingsRequestScheduleConfSettingModelMoziConfVirtualExtraSetting) };
    inline Models::UpdateScheduleConfSettingsRequestScheduleConfSettingModelMoziConfVirtualExtraSetting moziConfVirtualExtraSetting() { DARABONBA_PTR_GET(moziConfVirtualExtraSetting_, Models::UpdateScheduleConfSettingsRequestScheduleConfSettingModelMoziConfVirtualExtraSetting) };
    inline UpdateScheduleConfSettingsRequestScheduleConfSettingModel& setMoziConfVirtualExtraSetting(const Models::UpdateScheduleConfSettingsRequestScheduleConfSettingModelMoziConfVirtualExtraSetting & moziConfVirtualExtraSetting) { DARABONBA_PTR_SET_VALUE(moziConfVirtualExtraSetting_, moziConfVirtualExtraSetting) };
    inline UpdateScheduleConfSettingsRequestScheduleConfSettingModel& setMoziConfVirtualExtraSetting(Models::UpdateScheduleConfSettingsRequestScheduleConfSettingModelMoziConfVirtualExtraSetting && moziConfVirtualExtraSetting) { DARABONBA_PTR_SET_RVALUE(moziConfVirtualExtraSetting_, moziConfVirtualExtraSetting) };


    // muteOnJoin Field Functions 
    bool hasMuteOnJoin() const { return this->muteOnJoin_ != nullptr;};
    void deleteMuteOnJoin() { this->muteOnJoin_ = nullptr;};
    inline int32_t muteOnJoin() const { DARABONBA_PTR_GET_DEFAULT(muteOnJoin_, 0) };
    inline UpdateScheduleConfSettingsRequestScheduleConfSettingModel& setMuteOnJoin(int32_t muteOnJoin) { DARABONBA_PTR_SET_VALUE(muteOnJoin_, muteOnJoin) };


    // screenShareForbidden Field Functions 
    bool hasScreenShareForbidden() const { return this->screenShareForbidden_ != nullptr;};
    void deleteScreenShareForbidden() { this->screenShareForbidden_ = nullptr;};
    inline int32_t screenShareForbidden() const { DARABONBA_PTR_GET_DEFAULT(screenShareForbidden_, 0) };
    inline UpdateScheduleConfSettingsRequestScheduleConfSettingModel& setScreenShareForbidden(int32_t screenShareForbidden) { DARABONBA_PTR_SET_VALUE(screenShareForbidden_, screenShareForbidden) };


  protected:
    std::shared_ptr<vector<string>> cohostUserIds_ = nullptr;
    std::shared_ptr<string> confAllowedCorpId_ = nullptr;
    std::shared_ptr<string> hostUserId_ = nullptr;
    std::shared_ptr<int32_t> lockRoom_ = nullptr;
    std::shared_ptr<Models::UpdateScheduleConfSettingsRequestScheduleConfSettingModelMoziConfOpenRecordSetting> moziConfOpenRecordSetting_ = nullptr;
    std::shared_ptr<Models::UpdateScheduleConfSettingsRequestScheduleConfSettingModelMoziConfVirtualExtraSetting> moziConfVirtualExtraSetting_ = nullptr;
    std::shared_ptr<int32_t> muteOnJoin_ = nullptr;
    std::shared_ptr<int32_t> screenShareForbidden_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
