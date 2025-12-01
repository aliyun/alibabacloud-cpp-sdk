// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSUSPEVENTPAGERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETSUSPEVENTPAGERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mssp20161228
{
namespace Models
{
  class GetSuspEventPageResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSuspEventPageResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AlarmEventType, alarmEventType_);
      DARABONBA_PTR_TO_JSON(AlarmId, alarmId_);
      DARABONBA_PTR_TO_JSON(AlarmName, alarmName_);
      DARABONBA_PTR_TO_JSON(AlarmSource, alarmSource_);
      DARABONBA_PTR_TO_JSON(AlarmTime, alarmTime_);
      DARABONBA_PTR_TO_JSON(AnalysisResult, analysisResult_);
      DARABONBA_PTR_TO_JSON(DealTime, dealTime_);
      DARABONBA_PTR_TO_JSON(EventLevel, eventLevel_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(InternetIp, internetIp_);
      DARABONBA_PTR_TO_JSON(IntranetIp, intranetIp_);
      DARABONBA_PTR_TO_JSON(OccurrenceTime, occurrenceTime_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetSuspEventPageResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AlarmEventType, alarmEventType_);
      DARABONBA_PTR_FROM_JSON(AlarmId, alarmId_);
      DARABONBA_PTR_FROM_JSON(AlarmName, alarmName_);
      DARABONBA_PTR_FROM_JSON(AlarmSource, alarmSource_);
      DARABONBA_PTR_FROM_JSON(AlarmTime, alarmTime_);
      DARABONBA_PTR_FROM_JSON(AnalysisResult, analysisResult_);
      DARABONBA_PTR_FROM_JSON(DealTime, dealTime_);
      DARABONBA_PTR_FROM_JSON(EventLevel, eventLevel_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(InternetIp, internetIp_);
      DARABONBA_PTR_FROM_JSON(IntranetIp, intranetIp_);
      DARABONBA_PTR_FROM_JSON(OccurrenceTime, occurrenceTime_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    GetSuspEventPageResponseBodyData() = default ;
    GetSuspEventPageResponseBodyData(const GetSuspEventPageResponseBodyData &) = default ;
    GetSuspEventPageResponseBodyData(GetSuspEventPageResponseBodyData &&) = default ;
    GetSuspEventPageResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSuspEventPageResponseBodyData() = default ;
    GetSuspEventPageResponseBodyData& operator=(const GetSuspEventPageResponseBodyData &) = default ;
    GetSuspEventPageResponseBodyData& operator=(GetSuspEventPageResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alarmEventType_ == nullptr
        && return this->alarmId_ == nullptr && return this->alarmName_ == nullptr && return this->alarmSource_ == nullptr && return this->alarmTime_ == nullptr && return this->analysisResult_ == nullptr
        && return this->dealTime_ == nullptr && return this->eventLevel_ == nullptr && return this->id_ == nullptr && return this->instanceName_ == nullptr && return this->internetIp_ == nullptr
        && return this->intranetIp_ == nullptr && return this->occurrenceTime_ == nullptr && return this->ownerId_ == nullptr && return this->remark_ == nullptr && return this->status_ == nullptr; };
    // alarmEventType Field Functions 
    bool hasAlarmEventType() const { return this->alarmEventType_ != nullptr;};
    void deleteAlarmEventType() { this->alarmEventType_ = nullptr;};
    inline string alarmEventType() const { DARABONBA_PTR_GET_DEFAULT(alarmEventType_, "") };
    inline GetSuspEventPageResponseBodyData& setAlarmEventType(string alarmEventType) { DARABONBA_PTR_SET_VALUE(alarmEventType_, alarmEventType) };


    // alarmId Field Functions 
    bool hasAlarmId() const { return this->alarmId_ != nullptr;};
    void deleteAlarmId() { this->alarmId_ = nullptr;};
    inline int64_t alarmId() const { DARABONBA_PTR_GET_DEFAULT(alarmId_, 0L) };
    inline GetSuspEventPageResponseBodyData& setAlarmId(int64_t alarmId) { DARABONBA_PTR_SET_VALUE(alarmId_, alarmId) };


    // alarmName Field Functions 
    bool hasAlarmName() const { return this->alarmName_ != nullptr;};
    void deleteAlarmName() { this->alarmName_ = nullptr;};
    inline string alarmName() const { DARABONBA_PTR_GET_DEFAULT(alarmName_, "") };
    inline GetSuspEventPageResponseBodyData& setAlarmName(string alarmName) { DARABONBA_PTR_SET_VALUE(alarmName_, alarmName) };


    // alarmSource Field Functions 
    bool hasAlarmSource() const { return this->alarmSource_ != nullptr;};
    void deleteAlarmSource() { this->alarmSource_ = nullptr;};
    inline string alarmSource() const { DARABONBA_PTR_GET_DEFAULT(alarmSource_, "") };
    inline GetSuspEventPageResponseBodyData& setAlarmSource(string alarmSource) { DARABONBA_PTR_SET_VALUE(alarmSource_, alarmSource) };


    // alarmTime Field Functions 
    bool hasAlarmTime() const { return this->alarmTime_ != nullptr;};
    void deleteAlarmTime() { this->alarmTime_ = nullptr;};
    inline string alarmTime() const { DARABONBA_PTR_GET_DEFAULT(alarmTime_, "") };
    inline GetSuspEventPageResponseBodyData& setAlarmTime(string alarmTime) { DARABONBA_PTR_SET_VALUE(alarmTime_, alarmTime) };


    // analysisResult Field Functions 
    bool hasAnalysisResult() const { return this->analysisResult_ != nullptr;};
    void deleteAnalysisResult() { this->analysisResult_ = nullptr;};
    inline string analysisResult() const { DARABONBA_PTR_GET_DEFAULT(analysisResult_, "") };
    inline GetSuspEventPageResponseBodyData& setAnalysisResult(string analysisResult) { DARABONBA_PTR_SET_VALUE(analysisResult_, analysisResult) };


    // dealTime Field Functions 
    bool hasDealTime() const { return this->dealTime_ != nullptr;};
    void deleteDealTime() { this->dealTime_ = nullptr;};
    inline string dealTime() const { DARABONBA_PTR_GET_DEFAULT(dealTime_, "") };
    inline GetSuspEventPageResponseBodyData& setDealTime(string dealTime) { DARABONBA_PTR_SET_VALUE(dealTime_, dealTime) };


    // eventLevel Field Functions 
    bool hasEventLevel() const { return this->eventLevel_ != nullptr;};
    void deleteEventLevel() { this->eventLevel_ = nullptr;};
    inline string eventLevel() const { DARABONBA_PTR_GET_DEFAULT(eventLevel_, "") };
    inline GetSuspEventPageResponseBodyData& setEventLevel(string eventLevel) { DARABONBA_PTR_SET_VALUE(eventLevel_, eventLevel) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GetSuspEventPageResponseBodyData& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline GetSuspEventPageResponseBodyData& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // internetIp Field Functions 
    bool hasInternetIp() const { return this->internetIp_ != nullptr;};
    void deleteInternetIp() { this->internetIp_ = nullptr;};
    inline string internetIp() const { DARABONBA_PTR_GET_DEFAULT(internetIp_, "") };
    inline GetSuspEventPageResponseBodyData& setInternetIp(string internetIp) { DARABONBA_PTR_SET_VALUE(internetIp_, internetIp) };


    // intranetIp Field Functions 
    bool hasIntranetIp() const { return this->intranetIp_ != nullptr;};
    void deleteIntranetIp() { this->intranetIp_ = nullptr;};
    inline string intranetIp() const { DARABONBA_PTR_GET_DEFAULT(intranetIp_, "") };
    inline GetSuspEventPageResponseBodyData& setIntranetIp(string intranetIp) { DARABONBA_PTR_SET_VALUE(intranetIp_, intranetIp) };


    // occurrenceTime Field Functions 
    bool hasOccurrenceTime() const { return this->occurrenceTime_ != nullptr;};
    void deleteOccurrenceTime() { this->occurrenceTime_ = nullptr;};
    inline string occurrenceTime() const { DARABONBA_PTR_GET_DEFAULT(occurrenceTime_, "") };
    inline GetSuspEventPageResponseBodyData& setOccurrenceTime(string occurrenceTime) { DARABONBA_PTR_SET_VALUE(occurrenceTime_, occurrenceTime) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline string ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
    inline GetSuspEventPageResponseBodyData& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline GetSuspEventPageResponseBodyData& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetSuspEventPageResponseBodyData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // Alarm event type.
    std::shared_ptr<string> alarmEventType_ = nullptr;
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
    // Alarm handling time.
    std::shared_ptr<string> dealTime_ = nullptr;
    // Alarm level.
    std::shared_ptr<string> eventLevel_ = nullptr;
    // Ticket primary key id.
    std::shared_ptr<int64_t> id_ = nullptr;
    // Affected asset.
    std::shared_ptr<string> instanceName_ = nullptr;
    // Public IP address.
    std::shared_ptr<string> internetIp_ = nullptr;
    // Private IP address.
    std::shared_ptr<string> intranetIp_ = nullptr;
    // First occurrence time.
    std::shared_ptr<string> occurrenceTime_ = nullptr;
    // Owner ID.
    std::shared_ptr<string> ownerId_ = nullptr;
    // Disposal method.
    std::shared_ptr<string> remark_ = nullptr;
    // Handling status.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mssp20161228
#endif
