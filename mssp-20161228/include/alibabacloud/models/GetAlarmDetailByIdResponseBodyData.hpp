// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETALARMDETAILBYIDRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETALARMDETAILBYIDRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetAlarmDetailByIdResponseBodyDataEventDetails.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mssp20161228
{
namespace Models
{
  class GetAlarmDetailByIdResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAlarmDetailByIdResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AlarmEventType, alarmEventType_);
      DARABONBA_PTR_TO_JSON(AlarmEventTypeDisplay, alarmEventTypeDisplay_);
      DARABONBA_PTR_TO_JSON(AlarmId, alarmId_);
      DARABONBA_PTR_TO_JSON(AlarmName, alarmName_);
      DARABONBA_PTR_TO_JSON(AlarmSource, alarmSource_);
      DARABONBA_PTR_TO_JSON(AlarmTime, alarmTime_);
      DARABONBA_PTR_TO_JSON(AnalysisResult, analysisResult_);
      DARABONBA_PTR_TO_JSON(ContainHwMode, containHwMode_);
      DARABONBA_PTR_TO_JSON(DealTime, dealTime_);
      DARABONBA_PTR_TO_JSON(Desc, desc_);
      DARABONBA_PTR_TO_JSON(EventDetails, eventDetails_);
      DARABONBA_PTR_TO_JSON(EventLevel, eventLevel_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(InternetIp, internetIp_);
      DARABONBA_PTR_TO_JSON(IntranetIp, intranetIp_);
      DARABONBA_PTR_TO_JSON(OccurrenceTime, occurrenceTime_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TacticDisplayName, tacticDisplayName_);
    };
    friend void from_json(const Darabonba::Json& j, GetAlarmDetailByIdResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AlarmEventType, alarmEventType_);
      DARABONBA_PTR_FROM_JSON(AlarmEventTypeDisplay, alarmEventTypeDisplay_);
      DARABONBA_PTR_FROM_JSON(AlarmId, alarmId_);
      DARABONBA_PTR_FROM_JSON(AlarmName, alarmName_);
      DARABONBA_PTR_FROM_JSON(AlarmSource, alarmSource_);
      DARABONBA_PTR_FROM_JSON(AlarmTime, alarmTime_);
      DARABONBA_PTR_FROM_JSON(AnalysisResult, analysisResult_);
      DARABONBA_PTR_FROM_JSON(ContainHwMode, containHwMode_);
      DARABONBA_PTR_FROM_JSON(DealTime, dealTime_);
      DARABONBA_PTR_FROM_JSON(Desc, desc_);
      DARABONBA_PTR_FROM_JSON(EventDetails, eventDetails_);
      DARABONBA_PTR_FROM_JSON(EventLevel, eventLevel_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(InternetIp, internetIp_);
      DARABONBA_PTR_FROM_JSON(IntranetIp, intranetIp_);
      DARABONBA_PTR_FROM_JSON(OccurrenceTime, occurrenceTime_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TacticDisplayName, tacticDisplayName_);
    };
    GetAlarmDetailByIdResponseBodyData() = default ;
    GetAlarmDetailByIdResponseBodyData(const GetAlarmDetailByIdResponseBodyData &) = default ;
    GetAlarmDetailByIdResponseBodyData(GetAlarmDetailByIdResponseBodyData &&) = default ;
    GetAlarmDetailByIdResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAlarmDetailByIdResponseBodyData() = default ;
    GetAlarmDetailByIdResponseBodyData& operator=(const GetAlarmDetailByIdResponseBodyData &) = default ;
    GetAlarmDetailByIdResponseBodyData& operator=(GetAlarmDetailByIdResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alarmEventType_ == nullptr
        && return this->alarmEventTypeDisplay_ == nullptr && return this->alarmId_ == nullptr && return this->alarmName_ == nullptr && return this->alarmSource_ == nullptr && return this->alarmTime_ == nullptr
        && return this->analysisResult_ == nullptr && return this->containHwMode_ == nullptr && return this->dealTime_ == nullptr && return this->desc_ == nullptr && return this->eventDetails_ == nullptr
        && return this->eventLevel_ == nullptr && return this->id_ == nullptr && return this->instanceName_ == nullptr && return this->internetIp_ == nullptr && return this->intranetIp_ == nullptr
        && return this->occurrenceTime_ == nullptr && return this->ownerId_ == nullptr && return this->remark_ == nullptr && return this->status_ == nullptr && return this->tacticDisplayName_ == nullptr; };
    // alarmEventType Field Functions 
    bool hasAlarmEventType() const { return this->alarmEventType_ != nullptr;};
    void deleteAlarmEventType() { this->alarmEventType_ = nullptr;};
    inline string alarmEventType() const { DARABONBA_PTR_GET_DEFAULT(alarmEventType_, "") };
    inline GetAlarmDetailByIdResponseBodyData& setAlarmEventType(string alarmEventType) { DARABONBA_PTR_SET_VALUE(alarmEventType_, alarmEventType) };


    // alarmEventTypeDisplay Field Functions 
    bool hasAlarmEventTypeDisplay() const { return this->alarmEventTypeDisplay_ != nullptr;};
    void deleteAlarmEventTypeDisplay() { this->alarmEventTypeDisplay_ = nullptr;};
    inline string alarmEventTypeDisplay() const { DARABONBA_PTR_GET_DEFAULT(alarmEventTypeDisplay_, "") };
    inline GetAlarmDetailByIdResponseBodyData& setAlarmEventTypeDisplay(string alarmEventTypeDisplay) { DARABONBA_PTR_SET_VALUE(alarmEventTypeDisplay_, alarmEventTypeDisplay) };


    // alarmId Field Functions 
    bool hasAlarmId() const { return this->alarmId_ != nullptr;};
    void deleteAlarmId() { this->alarmId_ = nullptr;};
    inline int64_t alarmId() const { DARABONBA_PTR_GET_DEFAULT(alarmId_, 0L) };
    inline GetAlarmDetailByIdResponseBodyData& setAlarmId(int64_t alarmId) { DARABONBA_PTR_SET_VALUE(alarmId_, alarmId) };


    // alarmName Field Functions 
    bool hasAlarmName() const { return this->alarmName_ != nullptr;};
    void deleteAlarmName() { this->alarmName_ = nullptr;};
    inline string alarmName() const { DARABONBA_PTR_GET_DEFAULT(alarmName_, "") };
    inline GetAlarmDetailByIdResponseBodyData& setAlarmName(string alarmName) { DARABONBA_PTR_SET_VALUE(alarmName_, alarmName) };


    // alarmSource Field Functions 
    bool hasAlarmSource() const { return this->alarmSource_ != nullptr;};
    void deleteAlarmSource() { this->alarmSource_ = nullptr;};
    inline string alarmSource() const { DARABONBA_PTR_GET_DEFAULT(alarmSource_, "") };
    inline GetAlarmDetailByIdResponseBodyData& setAlarmSource(string alarmSource) { DARABONBA_PTR_SET_VALUE(alarmSource_, alarmSource) };


    // alarmTime Field Functions 
    bool hasAlarmTime() const { return this->alarmTime_ != nullptr;};
    void deleteAlarmTime() { this->alarmTime_ = nullptr;};
    inline string alarmTime() const { DARABONBA_PTR_GET_DEFAULT(alarmTime_, "") };
    inline GetAlarmDetailByIdResponseBodyData& setAlarmTime(string alarmTime) { DARABONBA_PTR_SET_VALUE(alarmTime_, alarmTime) };


    // analysisResult Field Functions 
    bool hasAnalysisResult() const { return this->analysisResult_ != nullptr;};
    void deleteAnalysisResult() { this->analysisResult_ = nullptr;};
    inline string analysisResult() const { DARABONBA_PTR_GET_DEFAULT(analysisResult_, "") };
    inline GetAlarmDetailByIdResponseBodyData& setAnalysisResult(string analysisResult) { DARABONBA_PTR_SET_VALUE(analysisResult_, analysisResult) };


    // containHwMode Field Functions 
    bool hasContainHwMode() const { return this->containHwMode_ != nullptr;};
    void deleteContainHwMode() { this->containHwMode_ = nullptr;};
    inline bool containHwMode() const { DARABONBA_PTR_GET_DEFAULT(containHwMode_, false) };
    inline GetAlarmDetailByIdResponseBodyData& setContainHwMode(bool containHwMode) { DARABONBA_PTR_SET_VALUE(containHwMode_, containHwMode) };


    // dealTime Field Functions 
    bool hasDealTime() const { return this->dealTime_ != nullptr;};
    void deleteDealTime() { this->dealTime_ = nullptr;};
    inline string dealTime() const { DARABONBA_PTR_GET_DEFAULT(dealTime_, "") };
    inline GetAlarmDetailByIdResponseBodyData& setDealTime(string dealTime) { DARABONBA_PTR_SET_VALUE(dealTime_, dealTime) };


    // desc Field Functions 
    bool hasDesc() const { return this->desc_ != nullptr;};
    void deleteDesc() { this->desc_ = nullptr;};
    inline string desc() const { DARABONBA_PTR_GET_DEFAULT(desc_, "") };
    inline GetAlarmDetailByIdResponseBodyData& setDesc(string desc) { DARABONBA_PTR_SET_VALUE(desc_, desc) };


    // eventDetails Field Functions 
    bool hasEventDetails() const { return this->eventDetails_ != nullptr;};
    void deleteEventDetails() { this->eventDetails_ = nullptr;};
    inline const vector<Models::GetAlarmDetailByIdResponseBodyDataEventDetails> & eventDetails() const { DARABONBA_PTR_GET_CONST(eventDetails_, vector<Models::GetAlarmDetailByIdResponseBodyDataEventDetails>) };
    inline vector<Models::GetAlarmDetailByIdResponseBodyDataEventDetails> eventDetails() { DARABONBA_PTR_GET(eventDetails_, vector<Models::GetAlarmDetailByIdResponseBodyDataEventDetails>) };
    inline GetAlarmDetailByIdResponseBodyData& setEventDetails(const vector<Models::GetAlarmDetailByIdResponseBodyDataEventDetails> & eventDetails) { DARABONBA_PTR_SET_VALUE(eventDetails_, eventDetails) };
    inline GetAlarmDetailByIdResponseBodyData& setEventDetails(vector<Models::GetAlarmDetailByIdResponseBodyDataEventDetails> && eventDetails) { DARABONBA_PTR_SET_RVALUE(eventDetails_, eventDetails) };


    // eventLevel Field Functions 
    bool hasEventLevel() const { return this->eventLevel_ != nullptr;};
    void deleteEventLevel() { this->eventLevel_ = nullptr;};
    inline string eventLevel() const { DARABONBA_PTR_GET_DEFAULT(eventLevel_, "") };
    inline GetAlarmDetailByIdResponseBodyData& setEventLevel(string eventLevel) { DARABONBA_PTR_SET_VALUE(eventLevel_, eventLevel) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GetAlarmDetailByIdResponseBodyData& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline GetAlarmDetailByIdResponseBodyData& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // internetIp Field Functions 
    bool hasInternetIp() const { return this->internetIp_ != nullptr;};
    void deleteInternetIp() { this->internetIp_ = nullptr;};
    inline string internetIp() const { DARABONBA_PTR_GET_DEFAULT(internetIp_, "") };
    inline GetAlarmDetailByIdResponseBodyData& setInternetIp(string internetIp) { DARABONBA_PTR_SET_VALUE(internetIp_, internetIp) };


    // intranetIp Field Functions 
    bool hasIntranetIp() const { return this->intranetIp_ != nullptr;};
    void deleteIntranetIp() { this->intranetIp_ = nullptr;};
    inline string intranetIp() const { DARABONBA_PTR_GET_DEFAULT(intranetIp_, "") };
    inline GetAlarmDetailByIdResponseBodyData& setIntranetIp(string intranetIp) { DARABONBA_PTR_SET_VALUE(intranetIp_, intranetIp) };


    // occurrenceTime Field Functions 
    bool hasOccurrenceTime() const { return this->occurrenceTime_ != nullptr;};
    void deleteOccurrenceTime() { this->occurrenceTime_ = nullptr;};
    inline string occurrenceTime() const { DARABONBA_PTR_GET_DEFAULT(occurrenceTime_, "") };
    inline GetAlarmDetailByIdResponseBodyData& setOccurrenceTime(string occurrenceTime) { DARABONBA_PTR_SET_VALUE(occurrenceTime_, occurrenceTime) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline string ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
    inline GetAlarmDetailByIdResponseBodyData& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline GetAlarmDetailByIdResponseBodyData& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetAlarmDetailByIdResponseBodyData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tacticDisplayName Field Functions 
    bool hasTacticDisplayName() const { return this->tacticDisplayName_ != nullptr;};
    void deleteTacticDisplayName() { this->tacticDisplayName_ = nullptr;};
    inline string tacticDisplayName() const { DARABONBA_PTR_GET_DEFAULT(tacticDisplayName_, "") };
    inline GetAlarmDetailByIdResponseBodyData& setTacticDisplayName(string tacticDisplayName) { DARABONBA_PTR_SET_VALUE(tacticDisplayName_, tacticDisplayName) };


  protected:
    // Alarm event type.
    std::shared_ptr<string> alarmEventType_ = nullptr;
    // Alarm event type.
    std::shared_ptr<string> alarmEventTypeDisplay_ = nullptr;
    // Alarm ID.
    std::shared_ptr<int64_t> alarmId_ = nullptr;
    // Alarm name.
    std::shared_ptr<string> alarmName_ = nullptr;
    // Alarm source.
    std::shared_ptr<string> alarmSource_ = nullptr;
    // Latest alarm time.
    std::shared_ptr<string> alarmTime_ = nullptr;
    // Analysis process.
    std::shared_ptr<string> analysisResult_ = nullptr;
    // Whether high-protection mode is enabled. true means enabled, false means not enabled.
    std::shared_ptr<bool> containHwMode_ = nullptr;
    // Alarm handling time.
    std::shared_ptr<string> dealTime_ = nullptr;
    // Description.
    std::shared_ptr<string> desc_ = nullptr;
    // Event details information.
    std::shared_ptr<vector<Models::GetAlarmDetailByIdResponseBodyDataEventDetails>> eventDetails_ = nullptr;
    // Alarm level.
    std::shared_ptr<string> eventLevel_ = nullptr;
    // Primary key ID of the work order.
    std::shared_ptr<int64_t> id_ = nullptr;
    // Affected asset.
    std::shared_ptr<string> instanceName_ = nullptr;
    // Public IP.
    std::shared_ptr<string> internetIp_ = nullptr;
    // Private IP.
    std::shared_ptr<string> intranetIp_ = nullptr;
    // First occurrence time
    std::shared_ptr<string> occurrenceTime_ = nullptr;
    // Owner.
    std::shared_ptr<string> ownerId_ = nullptr;
    // Disposal method.
    std::shared_ptr<string> remark_ = nullptr;
    // Handling status.
    std::shared_ptr<string> status_ = nullptr;
    // ATT&CK tactic name.
    std::shared_ptr<string> tacticDisplayName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mssp20161228
#endif
