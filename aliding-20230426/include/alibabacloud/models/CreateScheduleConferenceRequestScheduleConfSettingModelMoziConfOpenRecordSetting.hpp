// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESCHEDULECONFERENCEREQUESTSCHEDULECONFSETTINGMODELMOZICONFOPENRECORDSETTING_HPP_
#define ALIBABACLOUD_MODELS_CREATESCHEDULECONFERENCEREQUESTSCHEDULECONFSETTINGMODELMOZICONFOPENRECORDSETTING_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class CreateScheduleConferenceRequestScheduleConfSettingModelMoziConfOpenRecordSetting : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateScheduleConferenceRequestScheduleConfSettingModelMoziConfOpenRecordSetting& obj) { 
      DARABONBA_PTR_TO_JSON(IsFollowHost, isFollowHost_);
      DARABONBA_PTR_TO_JSON(Mode, mode_);
      DARABONBA_PTR_TO_JSON(RecordAutoStart, recordAutoStart_);
      DARABONBA_PTR_TO_JSON(RecordAutoStartType, recordAutoStartType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateScheduleConferenceRequestScheduleConfSettingModelMoziConfOpenRecordSetting& obj) { 
      DARABONBA_PTR_FROM_JSON(IsFollowHost, isFollowHost_);
      DARABONBA_PTR_FROM_JSON(Mode, mode_);
      DARABONBA_PTR_FROM_JSON(RecordAutoStart, recordAutoStart_);
      DARABONBA_PTR_FROM_JSON(RecordAutoStartType, recordAutoStartType_);
    };
    CreateScheduleConferenceRequestScheduleConfSettingModelMoziConfOpenRecordSetting() = default ;
    CreateScheduleConferenceRequestScheduleConfSettingModelMoziConfOpenRecordSetting(const CreateScheduleConferenceRequestScheduleConfSettingModelMoziConfOpenRecordSetting &) = default ;
    CreateScheduleConferenceRequestScheduleConfSettingModelMoziConfOpenRecordSetting(CreateScheduleConferenceRequestScheduleConfSettingModelMoziConfOpenRecordSetting &&) = default ;
    CreateScheduleConferenceRequestScheduleConfSettingModelMoziConfOpenRecordSetting(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateScheduleConferenceRequestScheduleConfSettingModelMoziConfOpenRecordSetting() = default ;
    CreateScheduleConferenceRequestScheduleConfSettingModelMoziConfOpenRecordSetting& operator=(const CreateScheduleConferenceRequestScheduleConfSettingModelMoziConfOpenRecordSetting &) = default ;
    CreateScheduleConferenceRequestScheduleConfSettingModelMoziConfOpenRecordSetting& operator=(CreateScheduleConferenceRequestScheduleConfSettingModelMoziConfOpenRecordSetting &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->isFollowHost_ == nullptr
        && return this->mode_ == nullptr && return this->recordAutoStart_ == nullptr && return this->recordAutoStartType_ == nullptr; };
    // isFollowHost Field Functions 
    bool hasIsFollowHost() const { return this->isFollowHost_ != nullptr;};
    void deleteIsFollowHost() { this->isFollowHost_ = nullptr;};
    inline bool isFollowHost() const { DARABONBA_PTR_GET_DEFAULT(isFollowHost_, false) };
    inline CreateScheduleConferenceRequestScheduleConfSettingModelMoziConfOpenRecordSetting& setIsFollowHost(bool isFollowHost) { DARABONBA_PTR_SET_VALUE(isFollowHost_, isFollowHost) };


    // mode Field Functions 
    bool hasMode() const { return this->mode_ != nullptr;};
    void deleteMode() { this->mode_ = nullptr;};
    inline string mode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
    inline CreateScheduleConferenceRequestScheduleConfSettingModelMoziConfOpenRecordSetting& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


    // recordAutoStart Field Functions 
    bool hasRecordAutoStart() const { return this->recordAutoStart_ != nullptr;};
    void deleteRecordAutoStart() { this->recordAutoStart_ = nullptr;};
    inline int32_t recordAutoStart() const { DARABONBA_PTR_GET_DEFAULT(recordAutoStart_, 0) };
    inline CreateScheduleConferenceRequestScheduleConfSettingModelMoziConfOpenRecordSetting& setRecordAutoStart(int32_t recordAutoStart) { DARABONBA_PTR_SET_VALUE(recordAutoStart_, recordAutoStart) };


    // recordAutoStartType Field Functions 
    bool hasRecordAutoStartType() const { return this->recordAutoStartType_ != nullptr;};
    void deleteRecordAutoStartType() { this->recordAutoStartType_ = nullptr;};
    inline int32_t recordAutoStartType() const { DARABONBA_PTR_GET_DEFAULT(recordAutoStartType_, 0) };
    inline CreateScheduleConferenceRequestScheduleConfSettingModelMoziConfOpenRecordSetting& setRecordAutoStartType(int32_t recordAutoStartType) { DARABONBA_PTR_SET_VALUE(recordAutoStartType_, recordAutoStartType) };


  protected:
    std::shared_ptr<bool> isFollowHost_ = nullptr;
    std::shared_ptr<string> mode_ = nullptr;
    std::shared_ptr<int32_t> recordAutoStart_ = nullptr;
    std::shared_ptr<int32_t> recordAutoStartType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
