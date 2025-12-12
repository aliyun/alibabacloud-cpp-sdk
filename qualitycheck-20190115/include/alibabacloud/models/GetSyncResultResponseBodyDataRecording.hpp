// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSYNCRESULTRESPONSEBODYDATARECORDING_HPP_
#define ALIBABACLOUD_MODELS_GETSYNCRESULTRESPONSEBODYDATARECORDING_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class GetSyncResultResponseBodyDataRecording : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSyncResultResponseBodyDataRecording& obj) { 
      DARABONBA_PTR_TO_JSON(Business, business_);
      DARABONBA_PTR_TO_JSON(CallId, callId_);
      DARABONBA_PTR_TO_JSON(CallTime, callTime_);
      DARABONBA_PTR_TO_JSON(CallType, callType_);
      DARABONBA_PTR_TO_JSON(Callee, callee_);
      DARABONBA_PTR_TO_JSON(Caller, caller_);
      DARABONBA_PTR_TO_JSON(DataSetName, dataSetName_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(DurationAudio, durationAudio_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PrimaryId, primaryId_);
      DARABONBA_PTR_TO_JSON(Remark1, remark1_);
      DARABONBA_PTR_TO_JSON(Remark2, remark2_);
      DARABONBA_PTR_TO_JSON(Remark3, remark3_);
      DARABONBA_PTR_TO_JSON(Url, url_);
    };
    friend void from_json(const Darabonba::Json& j, GetSyncResultResponseBodyDataRecording& obj) { 
      DARABONBA_PTR_FROM_JSON(Business, business_);
      DARABONBA_PTR_FROM_JSON(CallId, callId_);
      DARABONBA_PTR_FROM_JSON(CallTime, callTime_);
      DARABONBA_PTR_FROM_JSON(CallType, callType_);
      DARABONBA_PTR_FROM_JSON(Callee, callee_);
      DARABONBA_PTR_FROM_JSON(Caller, caller_);
      DARABONBA_PTR_FROM_JSON(DataSetName, dataSetName_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(DurationAudio, durationAudio_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PrimaryId, primaryId_);
      DARABONBA_PTR_FROM_JSON(Remark1, remark1_);
      DARABONBA_PTR_FROM_JSON(Remark2, remark2_);
      DARABONBA_PTR_FROM_JSON(Remark3, remark3_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
    };
    GetSyncResultResponseBodyDataRecording() = default ;
    GetSyncResultResponseBodyDataRecording(const GetSyncResultResponseBodyDataRecording &) = default ;
    GetSyncResultResponseBodyDataRecording(GetSyncResultResponseBodyDataRecording &&) = default ;
    GetSyncResultResponseBodyDataRecording(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSyncResultResponseBodyDataRecording() = default ;
    GetSyncResultResponseBodyDataRecording& operator=(const GetSyncResultResponseBodyDataRecording &) = default ;
    GetSyncResultResponseBodyDataRecording& operator=(GetSyncResultResponseBodyDataRecording &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->business_ == nullptr
        && return this->callId_ == nullptr && return this->callTime_ == nullptr && return this->callType_ == nullptr && return this->callee_ == nullptr && return this->caller_ == nullptr
        && return this->dataSetName_ == nullptr && return this->duration_ == nullptr && return this->durationAudio_ == nullptr && return this->id_ == nullptr && return this->name_ == nullptr
        && return this->primaryId_ == nullptr && return this->remark1_ == nullptr && return this->remark2_ == nullptr && return this->remark3_ == nullptr && return this->url_ == nullptr; };
    // business Field Functions 
    bool hasBusiness() const { return this->business_ != nullptr;};
    void deleteBusiness() { this->business_ = nullptr;};
    inline string business() const { DARABONBA_PTR_GET_DEFAULT(business_, "") };
    inline GetSyncResultResponseBodyDataRecording& setBusiness(string business) { DARABONBA_PTR_SET_VALUE(business_, business) };


    // callId Field Functions 
    bool hasCallId() const { return this->callId_ != nullptr;};
    void deleteCallId() { this->callId_ = nullptr;};
    inline string callId() const { DARABONBA_PTR_GET_DEFAULT(callId_, "") };
    inline GetSyncResultResponseBodyDataRecording& setCallId(string callId) { DARABONBA_PTR_SET_VALUE(callId_, callId) };


    // callTime Field Functions 
    bool hasCallTime() const { return this->callTime_ != nullptr;};
    void deleteCallTime() { this->callTime_ = nullptr;};
    inline string callTime() const { DARABONBA_PTR_GET_DEFAULT(callTime_, "") };
    inline GetSyncResultResponseBodyDataRecording& setCallTime(string callTime) { DARABONBA_PTR_SET_VALUE(callTime_, callTime) };


    // callType Field Functions 
    bool hasCallType() const { return this->callType_ != nullptr;};
    void deleteCallType() { this->callType_ = nullptr;};
    inline int32_t callType() const { DARABONBA_PTR_GET_DEFAULT(callType_, 0) };
    inline GetSyncResultResponseBodyDataRecording& setCallType(int32_t callType) { DARABONBA_PTR_SET_VALUE(callType_, callType) };


    // callee Field Functions 
    bool hasCallee() const { return this->callee_ != nullptr;};
    void deleteCallee() { this->callee_ = nullptr;};
    inline string callee() const { DARABONBA_PTR_GET_DEFAULT(callee_, "") };
    inline GetSyncResultResponseBodyDataRecording& setCallee(string callee) { DARABONBA_PTR_SET_VALUE(callee_, callee) };


    // caller Field Functions 
    bool hasCaller() const { return this->caller_ != nullptr;};
    void deleteCaller() { this->caller_ = nullptr;};
    inline string caller() const { DARABONBA_PTR_GET_DEFAULT(caller_, "") };
    inline GetSyncResultResponseBodyDataRecording& setCaller(string caller) { DARABONBA_PTR_SET_VALUE(caller_, caller) };


    // dataSetName Field Functions 
    bool hasDataSetName() const { return this->dataSetName_ != nullptr;};
    void deleteDataSetName() { this->dataSetName_ = nullptr;};
    inline string dataSetName() const { DARABONBA_PTR_GET_DEFAULT(dataSetName_, "") };
    inline GetSyncResultResponseBodyDataRecording& setDataSetName(string dataSetName) { DARABONBA_PTR_SET_VALUE(dataSetName_, dataSetName) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline int64_t duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0L) };
    inline GetSyncResultResponseBodyDataRecording& setDuration(int64_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // durationAudio Field Functions 
    bool hasDurationAudio() const { return this->durationAudio_ != nullptr;};
    void deleteDurationAudio() { this->durationAudio_ = nullptr;};
    inline int64_t durationAudio() const { DARABONBA_PTR_GET_DEFAULT(durationAudio_, 0L) };
    inline GetSyncResultResponseBodyDataRecording& setDurationAudio(int64_t durationAudio) { DARABONBA_PTR_SET_VALUE(durationAudio_, durationAudio) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline GetSyncResultResponseBodyDataRecording& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetSyncResultResponseBodyDataRecording& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // primaryId Field Functions 
    bool hasPrimaryId() const { return this->primaryId_ != nullptr;};
    void deletePrimaryId() { this->primaryId_ = nullptr;};
    inline string primaryId() const { DARABONBA_PTR_GET_DEFAULT(primaryId_, "") };
    inline GetSyncResultResponseBodyDataRecording& setPrimaryId(string primaryId) { DARABONBA_PTR_SET_VALUE(primaryId_, primaryId) };


    // remark1 Field Functions 
    bool hasRemark1() const { return this->remark1_ != nullptr;};
    void deleteRemark1() { this->remark1_ = nullptr;};
    inline string remark1() const { DARABONBA_PTR_GET_DEFAULT(remark1_, "") };
    inline GetSyncResultResponseBodyDataRecording& setRemark1(string remark1) { DARABONBA_PTR_SET_VALUE(remark1_, remark1) };


    // remark2 Field Functions 
    bool hasRemark2() const { return this->remark2_ != nullptr;};
    void deleteRemark2() { this->remark2_ = nullptr;};
    inline string remark2() const { DARABONBA_PTR_GET_DEFAULT(remark2_, "") };
    inline GetSyncResultResponseBodyDataRecording& setRemark2(string remark2) { DARABONBA_PTR_SET_VALUE(remark2_, remark2) };


    // remark3 Field Functions 
    bool hasRemark3() const { return this->remark3_ != nullptr;};
    void deleteRemark3() { this->remark3_ = nullptr;};
    inline string remark3() const { DARABONBA_PTR_GET_DEFAULT(remark3_, "") };
    inline GetSyncResultResponseBodyDataRecording& setRemark3(string remark3) { DARABONBA_PTR_SET_VALUE(remark3_, remark3) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline GetSyncResultResponseBodyDataRecording& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    std::shared_ptr<string> business_ = nullptr;
    std::shared_ptr<string> callId_ = nullptr;
    std::shared_ptr<string> callTime_ = nullptr;
    std::shared_ptr<int32_t> callType_ = nullptr;
    std::shared_ptr<string> callee_ = nullptr;
    std::shared_ptr<string> caller_ = nullptr;
    std::shared_ptr<string> dataSetName_ = nullptr;
    std::shared_ptr<int64_t> duration_ = nullptr;
    std::shared_ptr<int64_t> durationAudio_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> primaryId_ = nullptr;
    std::shared_ptr<string> remark1_ = nullptr;
    std::shared_ptr<string> remark2_ = nullptr;
    std::shared_ptr<string> remark3_ = nullptr;
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
