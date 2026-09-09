// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDAGENDASUMRECORDFLOWPOPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDAGENDASUMRECORDFLOWPOPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MarketingEvent20210101
{
namespace Models
{
  class AddAgendaSumRecordFlowPopRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddAgendaSumRecordFlowPopRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ActiveNum, activeNum_);
      DARABONBA_PTR_TO_JSON(AgendaId, agendaId_);
      DARABONBA_PTR_TO_JSON(AttendancePercent, attendancePercent_);
      DARABONBA_PTR_TO_JSON(FlowTime, flowTime_);
      DARABONBA_PTR_TO_JSON(SessionName, sessionName_);
      DARABONBA_PTR_TO_JSON(TotalPv, totalPv_);
      DARABONBA_PTR_TO_JSON(TotalUv, totalUv_);
    };
    friend void from_json(const Darabonba::Json& j, AddAgendaSumRecordFlowPopRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ActiveNum, activeNum_);
      DARABONBA_PTR_FROM_JSON(AgendaId, agendaId_);
      DARABONBA_PTR_FROM_JSON(AttendancePercent, attendancePercent_);
      DARABONBA_PTR_FROM_JSON(FlowTime, flowTime_);
      DARABONBA_PTR_FROM_JSON(SessionName, sessionName_);
      DARABONBA_PTR_FROM_JSON(TotalPv, totalPv_);
      DARABONBA_PTR_FROM_JSON(TotalUv, totalUv_);
    };
    AddAgendaSumRecordFlowPopRequest() = default ;
    AddAgendaSumRecordFlowPopRequest(const AddAgendaSumRecordFlowPopRequest &) = default ;
    AddAgendaSumRecordFlowPopRequest(AddAgendaSumRecordFlowPopRequest &&) = default ;
    AddAgendaSumRecordFlowPopRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddAgendaSumRecordFlowPopRequest() = default ;
    AddAgendaSumRecordFlowPopRequest& operator=(const AddAgendaSumRecordFlowPopRequest &) = default ;
    AddAgendaSumRecordFlowPopRequest& operator=(AddAgendaSumRecordFlowPopRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->activeNum_ == nullptr
        && this->agendaId_ == nullptr && this->attendancePercent_ == nullptr && this->flowTime_ == nullptr && this->sessionName_ == nullptr && this->totalPv_ == nullptr
        && this->totalUv_ == nullptr; };
    // activeNum Field Functions 
    bool hasActiveNum() const { return this->activeNum_ != nullptr;};
    void deleteActiveNum() { this->activeNum_ = nullptr;};
    inline int32_t getActiveNum() const { DARABONBA_PTR_GET_DEFAULT(activeNum_, 0) };
    inline AddAgendaSumRecordFlowPopRequest& setActiveNum(int32_t activeNum) { DARABONBA_PTR_SET_VALUE(activeNum_, activeNum) };


    // agendaId Field Functions 
    bool hasAgendaId() const { return this->agendaId_ != nullptr;};
    void deleteAgendaId() { this->agendaId_ = nullptr;};
    inline int64_t getAgendaId() const { DARABONBA_PTR_GET_DEFAULT(agendaId_, 0L) };
    inline AddAgendaSumRecordFlowPopRequest& setAgendaId(int64_t agendaId) { DARABONBA_PTR_SET_VALUE(agendaId_, agendaId) };


    // attendancePercent Field Functions 
    bool hasAttendancePercent() const { return this->attendancePercent_ != nullptr;};
    void deleteAttendancePercent() { this->attendancePercent_ = nullptr;};
    inline string getAttendancePercent() const { DARABONBA_PTR_GET_DEFAULT(attendancePercent_, "") };
    inline AddAgendaSumRecordFlowPopRequest& setAttendancePercent(string attendancePercent) { DARABONBA_PTR_SET_VALUE(attendancePercent_, attendancePercent) };


    // flowTime Field Functions 
    bool hasFlowTime() const { return this->flowTime_ != nullptr;};
    void deleteFlowTime() { this->flowTime_ = nullptr;};
    inline int64_t getFlowTime() const { DARABONBA_PTR_GET_DEFAULT(flowTime_, 0L) };
    inline AddAgendaSumRecordFlowPopRequest& setFlowTime(int64_t flowTime) { DARABONBA_PTR_SET_VALUE(flowTime_, flowTime) };


    // sessionName Field Functions 
    bool hasSessionName() const { return this->sessionName_ != nullptr;};
    void deleteSessionName() { this->sessionName_ = nullptr;};
    inline string getSessionName() const { DARABONBA_PTR_GET_DEFAULT(sessionName_, "") };
    inline AddAgendaSumRecordFlowPopRequest& setSessionName(string sessionName) { DARABONBA_PTR_SET_VALUE(sessionName_, sessionName) };


    // totalPv Field Functions 
    bool hasTotalPv() const { return this->totalPv_ != nullptr;};
    void deleteTotalPv() { this->totalPv_ = nullptr;};
    inline int32_t getTotalPv() const { DARABONBA_PTR_GET_DEFAULT(totalPv_, 0) };
    inline AddAgendaSumRecordFlowPopRequest& setTotalPv(int32_t totalPv) { DARABONBA_PTR_SET_VALUE(totalPv_, totalPv) };


    // totalUv Field Functions 
    bool hasTotalUv() const { return this->totalUv_ != nullptr;};
    void deleteTotalUv() { this->totalUv_ = nullptr;};
    inline int32_t getTotalUv() const { DARABONBA_PTR_GET_DEFAULT(totalUv_, 0) };
    inline AddAgendaSumRecordFlowPopRequest& setTotalUv(int32_t totalUv) { DARABONBA_PTR_SET_VALUE(totalUv_, totalUv) };


  protected:
    shared_ptr<int32_t> activeNum_ {};
    // This parameter is required.
    shared_ptr<int64_t> agendaId_ {};
    shared_ptr<string> attendancePercent_ {};
    // This parameter is required.
    shared_ptr<int64_t> flowTime_ {};
    // This parameter is required.
    shared_ptr<string> sessionName_ {};
    // This parameter is required.
    shared_ptr<int32_t> totalPv_ {};
    // This parameter is required.
    shared_ptr<int32_t> totalUv_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MarketingEvent20210101
#endif
