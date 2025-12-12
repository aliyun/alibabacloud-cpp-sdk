// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESULTRESPONSEBODYDATARESULTINFORECORDING_HPP_
#define ALIBABACLOUD_MODELS_GETRESULTRESPONSEBODYDATARESULTINFORECORDING_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class GetResultResponseBodyDataResultInfoRecording : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResultResponseBodyDataResultInfoRecording& obj) { 
      DARABONBA_PTR_TO_JSON(Business, business_);
      DARABONBA_PTR_TO_JSON(CallId, callId_);
      DARABONBA_PTR_TO_JSON(CallTime, callTime_);
      DARABONBA_PTR_TO_JSON(CallType, callType_);
      DARABONBA_PTR_TO_JSON(Callee, callee_);
      DARABONBA_PTR_TO_JSON(Caller, caller_);
      DARABONBA_PTR_TO_JSON(CustomerName, customerName_);
      DARABONBA_PTR_TO_JSON(DataSetName, dataSetName_);
      DARABONBA_PTR_TO_JSON(DialogueSize, dialogueSize_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PrimaryId, primaryId_);
      DARABONBA_PTR_TO_JSON(Remark1, remark1_);
      DARABONBA_PTR_TO_JSON(Remark10, remark10_);
      DARABONBA_PTR_TO_JSON(Remark11, remark11_);
      DARABONBA_PTR_TO_JSON(Remark12, remark12_);
      DARABONBA_PTR_TO_JSON(Remark13, remark13_);
      DARABONBA_PTR_TO_JSON(Remark2, remark2_);
      DARABONBA_PTR_TO_JSON(Remark3, remark3_);
      DARABONBA_PTR_TO_JSON(Remark4, remark4_);
      DARABONBA_PTR_TO_JSON(Remark5, remark5_);
      DARABONBA_PTR_TO_JSON(Remark6, remark6_);
      DARABONBA_PTR_TO_JSON(Remark7, remark7_);
      DARABONBA_PTR_TO_JSON(Remark8, remark8_);
      DARABONBA_PTR_TO_JSON(Remark9, remark9_);
      DARABONBA_PTR_TO_JSON(TaskConfigId, taskConfigId_);
      DARABONBA_PTR_TO_JSON(TaskConfigName, taskConfigName_);
      DARABONBA_PTR_TO_JSON(Url, url_);
    };
    friend void from_json(const Darabonba::Json& j, GetResultResponseBodyDataResultInfoRecording& obj) { 
      DARABONBA_PTR_FROM_JSON(Business, business_);
      DARABONBA_PTR_FROM_JSON(CallId, callId_);
      DARABONBA_PTR_FROM_JSON(CallTime, callTime_);
      DARABONBA_PTR_FROM_JSON(CallType, callType_);
      DARABONBA_PTR_FROM_JSON(Callee, callee_);
      DARABONBA_PTR_FROM_JSON(Caller, caller_);
      DARABONBA_PTR_FROM_JSON(CustomerName, customerName_);
      DARABONBA_PTR_FROM_JSON(DataSetName, dataSetName_);
      DARABONBA_PTR_FROM_JSON(DialogueSize, dialogueSize_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PrimaryId, primaryId_);
      DARABONBA_PTR_FROM_JSON(Remark1, remark1_);
      DARABONBA_PTR_FROM_JSON(Remark10, remark10_);
      DARABONBA_PTR_FROM_JSON(Remark11, remark11_);
      DARABONBA_PTR_FROM_JSON(Remark12, remark12_);
      DARABONBA_PTR_FROM_JSON(Remark13, remark13_);
      DARABONBA_PTR_FROM_JSON(Remark2, remark2_);
      DARABONBA_PTR_FROM_JSON(Remark3, remark3_);
      DARABONBA_PTR_FROM_JSON(Remark4, remark4_);
      DARABONBA_PTR_FROM_JSON(Remark5, remark5_);
      DARABONBA_PTR_FROM_JSON(Remark6, remark6_);
      DARABONBA_PTR_FROM_JSON(Remark7, remark7_);
      DARABONBA_PTR_FROM_JSON(Remark8, remark8_);
      DARABONBA_PTR_FROM_JSON(Remark9, remark9_);
      DARABONBA_PTR_FROM_JSON(TaskConfigId, taskConfigId_);
      DARABONBA_PTR_FROM_JSON(TaskConfigName, taskConfigName_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
    };
    GetResultResponseBodyDataResultInfoRecording() = default ;
    GetResultResponseBodyDataResultInfoRecording(const GetResultResponseBodyDataResultInfoRecording &) = default ;
    GetResultResponseBodyDataResultInfoRecording(GetResultResponseBodyDataResultInfoRecording &&) = default ;
    GetResultResponseBodyDataResultInfoRecording(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResultResponseBodyDataResultInfoRecording() = default ;
    GetResultResponseBodyDataResultInfoRecording& operator=(const GetResultResponseBodyDataResultInfoRecording &) = default ;
    GetResultResponseBodyDataResultInfoRecording& operator=(GetResultResponseBodyDataResultInfoRecording &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->business_ == nullptr
        && return this->callId_ == nullptr && return this->callTime_ == nullptr && return this->callType_ == nullptr && return this->callee_ == nullptr && return this->caller_ == nullptr
        && return this->customerName_ == nullptr && return this->dataSetName_ == nullptr && return this->dialogueSize_ == nullptr && return this->duration_ == nullptr && return this->id_ == nullptr
        && return this->name_ == nullptr && return this->primaryId_ == nullptr && return this->remark1_ == nullptr && return this->remark10_ == nullptr && return this->remark11_ == nullptr
        && return this->remark12_ == nullptr && return this->remark13_ == nullptr && return this->remark2_ == nullptr && return this->remark3_ == nullptr && return this->remark4_ == nullptr
        && return this->remark5_ == nullptr && return this->remark6_ == nullptr && return this->remark7_ == nullptr && return this->remark8_ == nullptr && return this->remark9_ == nullptr
        && return this->taskConfigId_ == nullptr && return this->taskConfigName_ == nullptr && return this->url_ == nullptr; };
    // business Field Functions 
    bool hasBusiness() const { return this->business_ != nullptr;};
    void deleteBusiness() { this->business_ = nullptr;};
    inline string business() const { DARABONBA_PTR_GET_DEFAULT(business_, "") };
    inline GetResultResponseBodyDataResultInfoRecording& setBusiness(string business) { DARABONBA_PTR_SET_VALUE(business_, business) };


    // callId Field Functions 
    bool hasCallId() const { return this->callId_ != nullptr;};
    void deleteCallId() { this->callId_ = nullptr;};
    inline string callId() const { DARABONBA_PTR_GET_DEFAULT(callId_, "") };
    inline GetResultResponseBodyDataResultInfoRecording& setCallId(string callId) { DARABONBA_PTR_SET_VALUE(callId_, callId) };


    // callTime Field Functions 
    bool hasCallTime() const { return this->callTime_ != nullptr;};
    void deleteCallTime() { this->callTime_ = nullptr;};
    inline string callTime() const { DARABONBA_PTR_GET_DEFAULT(callTime_, "") };
    inline GetResultResponseBodyDataResultInfoRecording& setCallTime(string callTime) { DARABONBA_PTR_SET_VALUE(callTime_, callTime) };


    // callType Field Functions 
    bool hasCallType() const { return this->callType_ != nullptr;};
    void deleteCallType() { this->callType_ = nullptr;};
    inline int32_t callType() const { DARABONBA_PTR_GET_DEFAULT(callType_, 0) };
    inline GetResultResponseBodyDataResultInfoRecording& setCallType(int32_t callType) { DARABONBA_PTR_SET_VALUE(callType_, callType) };


    // callee Field Functions 
    bool hasCallee() const { return this->callee_ != nullptr;};
    void deleteCallee() { this->callee_ = nullptr;};
    inline string callee() const { DARABONBA_PTR_GET_DEFAULT(callee_, "") };
    inline GetResultResponseBodyDataResultInfoRecording& setCallee(string callee) { DARABONBA_PTR_SET_VALUE(callee_, callee) };


    // caller Field Functions 
    bool hasCaller() const { return this->caller_ != nullptr;};
    void deleteCaller() { this->caller_ = nullptr;};
    inline string caller() const { DARABONBA_PTR_GET_DEFAULT(caller_, "") };
    inline GetResultResponseBodyDataResultInfoRecording& setCaller(string caller) { DARABONBA_PTR_SET_VALUE(caller_, caller) };


    // customerName Field Functions 
    bool hasCustomerName() const { return this->customerName_ != nullptr;};
    void deleteCustomerName() { this->customerName_ = nullptr;};
    inline string customerName() const { DARABONBA_PTR_GET_DEFAULT(customerName_, "") };
    inline GetResultResponseBodyDataResultInfoRecording& setCustomerName(string customerName) { DARABONBA_PTR_SET_VALUE(customerName_, customerName) };


    // dataSetName Field Functions 
    bool hasDataSetName() const { return this->dataSetName_ != nullptr;};
    void deleteDataSetName() { this->dataSetName_ = nullptr;};
    inline string dataSetName() const { DARABONBA_PTR_GET_DEFAULT(dataSetName_, "") };
    inline GetResultResponseBodyDataResultInfoRecording& setDataSetName(string dataSetName) { DARABONBA_PTR_SET_VALUE(dataSetName_, dataSetName) };


    // dialogueSize Field Functions 
    bool hasDialogueSize() const { return this->dialogueSize_ != nullptr;};
    void deleteDialogueSize() { this->dialogueSize_ = nullptr;};
    inline int32_t dialogueSize() const { DARABONBA_PTR_GET_DEFAULT(dialogueSize_, 0) };
    inline GetResultResponseBodyDataResultInfoRecording& setDialogueSize(int32_t dialogueSize) { DARABONBA_PTR_SET_VALUE(dialogueSize_, dialogueSize) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline int64_t duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0L) };
    inline GetResultResponseBodyDataResultInfoRecording& setDuration(int64_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline GetResultResponseBodyDataResultInfoRecording& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetResultResponseBodyDataResultInfoRecording& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // primaryId Field Functions 
    bool hasPrimaryId() const { return this->primaryId_ != nullptr;};
    void deletePrimaryId() { this->primaryId_ = nullptr;};
    inline string primaryId() const { DARABONBA_PTR_GET_DEFAULT(primaryId_, "") };
    inline GetResultResponseBodyDataResultInfoRecording& setPrimaryId(string primaryId) { DARABONBA_PTR_SET_VALUE(primaryId_, primaryId) };


    // remark1 Field Functions 
    bool hasRemark1() const { return this->remark1_ != nullptr;};
    void deleteRemark1() { this->remark1_ = nullptr;};
    inline string remark1() const { DARABONBA_PTR_GET_DEFAULT(remark1_, "") };
    inline GetResultResponseBodyDataResultInfoRecording& setRemark1(string remark1) { DARABONBA_PTR_SET_VALUE(remark1_, remark1) };


    // remark10 Field Functions 
    bool hasRemark10() const { return this->remark10_ != nullptr;};
    void deleteRemark10() { this->remark10_ = nullptr;};
    inline string remark10() const { DARABONBA_PTR_GET_DEFAULT(remark10_, "") };
    inline GetResultResponseBodyDataResultInfoRecording& setRemark10(string remark10) { DARABONBA_PTR_SET_VALUE(remark10_, remark10) };


    // remark11 Field Functions 
    bool hasRemark11() const { return this->remark11_ != nullptr;};
    void deleteRemark11() { this->remark11_ = nullptr;};
    inline string remark11() const { DARABONBA_PTR_GET_DEFAULT(remark11_, "") };
    inline GetResultResponseBodyDataResultInfoRecording& setRemark11(string remark11) { DARABONBA_PTR_SET_VALUE(remark11_, remark11) };


    // remark12 Field Functions 
    bool hasRemark12() const { return this->remark12_ != nullptr;};
    void deleteRemark12() { this->remark12_ = nullptr;};
    inline string remark12() const { DARABONBA_PTR_GET_DEFAULT(remark12_, "") };
    inline GetResultResponseBodyDataResultInfoRecording& setRemark12(string remark12) { DARABONBA_PTR_SET_VALUE(remark12_, remark12) };


    // remark13 Field Functions 
    bool hasRemark13() const { return this->remark13_ != nullptr;};
    void deleteRemark13() { this->remark13_ = nullptr;};
    inline string remark13() const { DARABONBA_PTR_GET_DEFAULT(remark13_, "") };
    inline GetResultResponseBodyDataResultInfoRecording& setRemark13(string remark13) { DARABONBA_PTR_SET_VALUE(remark13_, remark13) };


    // remark2 Field Functions 
    bool hasRemark2() const { return this->remark2_ != nullptr;};
    void deleteRemark2() { this->remark2_ = nullptr;};
    inline string remark2() const { DARABONBA_PTR_GET_DEFAULT(remark2_, "") };
    inline GetResultResponseBodyDataResultInfoRecording& setRemark2(string remark2) { DARABONBA_PTR_SET_VALUE(remark2_, remark2) };


    // remark3 Field Functions 
    bool hasRemark3() const { return this->remark3_ != nullptr;};
    void deleteRemark3() { this->remark3_ = nullptr;};
    inline string remark3() const { DARABONBA_PTR_GET_DEFAULT(remark3_, "") };
    inline GetResultResponseBodyDataResultInfoRecording& setRemark3(string remark3) { DARABONBA_PTR_SET_VALUE(remark3_, remark3) };


    // remark4 Field Functions 
    bool hasRemark4() const { return this->remark4_ != nullptr;};
    void deleteRemark4() { this->remark4_ = nullptr;};
    inline string remark4() const { DARABONBA_PTR_GET_DEFAULT(remark4_, "") };
    inline GetResultResponseBodyDataResultInfoRecording& setRemark4(string remark4) { DARABONBA_PTR_SET_VALUE(remark4_, remark4) };


    // remark5 Field Functions 
    bool hasRemark5() const { return this->remark5_ != nullptr;};
    void deleteRemark5() { this->remark5_ = nullptr;};
    inline int64_t remark5() const { DARABONBA_PTR_GET_DEFAULT(remark5_, 0L) };
    inline GetResultResponseBodyDataResultInfoRecording& setRemark5(int64_t remark5) { DARABONBA_PTR_SET_VALUE(remark5_, remark5) };


    // remark6 Field Functions 
    bool hasRemark6() const { return this->remark6_ != nullptr;};
    void deleteRemark6() { this->remark6_ = nullptr;};
    inline string remark6() const { DARABONBA_PTR_GET_DEFAULT(remark6_, "") };
    inline GetResultResponseBodyDataResultInfoRecording& setRemark6(string remark6) { DARABONBA_PTR_SET_VALUE(remark6_, remark6) };


    // remark7 Field Functions 
    bool hasRemark7() const { return this->remark7_ != nullptr;};
    void deleteRemark7() { this->remark7_ = nullptr;};
    inline string remark7() const { DARABONBA_PTR_GET_DEFAULT(remark7_, "") };
    inline GetResultResponseBodyDataResultInfoRecording& setRemark7(string remark7) { DARABONBA_PTR_SET_VALUE(remark7_, remark7) };


    // remark8 Field Functions 
    bool hasRemark8() const { return this->remark8_ != nullptr;};
    void deleteRemark8() { this->remark8_ = nullptr;};
    inline string remark8() const { DARABONBA_PTR_GET_DEFAULT(remark8_, "") };
    inline GetResultResponseBodyDataResultInfoRecording& setRemark8(string remark8) { DARABONBA_PTR_SET_VALUE(remark8_, remark8) };


    // remark9 Field Functions 
    bool hasRemark9() const { return this->remark9_ != nullptr;};
    void deleteRemark9() { this->remark9_ = nullptr;};
    inline string remark9() const { DARABONBA_PTR_GET_DEFAULT(remark9_, "") };
    inline GetResultResponseBodyDataResultInfoRecording& setRemark9(string remark9) { DARABONBA_PTR_SET_VALUE(remark9_, remark9) };


    // taskConfigId Field Functions 
    bool hasTaskConfigId() const { return this->taskConfigId_ != nullptr;};
    void deleteTaskConfigId() { this->taskConfigId_ = nullptr;};
    inline int64_t taskConfigId() const { DARABONBA_PTR_GET_DEFAULT(taskConfigId_, 0L) };
    inline GetResultResponseBodyDataResultInfoRecording& setTaskConfigId(int64_t taskConfigId) { DARABONBA_PTR_SET_VALUE(taskConfigId_, taskConfigId) };


    // taskConfigName Field Functions 
    bool hasTaskConfigName() const { return this->taskConfigName_ != nullptr;};
    void deleteTaskConfigName() { this->taskConfigName_ = nullptr;};
    inline string taskConfigName() const { DARABONBA_PTR_GET_DEFAULT(taskConfigName_, "") };
    inline GetResultResponseBodyDataResultInfoRecording& setTaskConfigName(string taskConfigName) { DARABONBA_PTR_SET_VALUE(taskConfigName_, taskConfigName) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline GetResultResponseBodyDataResultInfoRecording& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    std::shared_ptr<string> business_ = nullptr;
    std::shared_ptr<string> callId_ = nullptr;
    std::shared_ptr<string> callTime_ = nullptr;
    std::shared_ptr<int32_t> callType_ = nullptr;
    std::shared_ptr<string> callee_ = nullptr;
    std::shared_ptr<string> caller_ = nullptr;
    std::shared_ptr<string> customerName_ = nullptr;
    std::shared_ptr<string> dataSetName_ = nullptr;
    std::shared_ptr<int32_t> dialogueSize_ = nullptr;
    std::shared_ptr<int64_t> duration_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> primaryId_ = nullptr;
    std::shared_ptr<string> remark1_ = nullptr;
    std::shared_ptr<string> remark10_ = nullptr;
    std::shared_ptr<string> remark11_ = nullptr;
    std::shared_ptr<string> remark12_ = nullptr;
    std::shared_ptr<string> remark13_ = nullptr;
    std::shared_ptr<string> remark2_ = nullptr;
    std::shared_ptr<string> remark3_ = nullptr;
    std::shared_ptr<string> remark4_ = nullptr;
    std::shared_ptr<int64_t> remark5_ = nullptr;
    std::shared_ptr<string> remark6_ = nullptr;
    std::shared_ptr<string> remark7_ = nullptr;
    std::shared_ptr<string> remark8_ = nullptr;
    std::shared_ptr<string> remark9_ = nullptr;
    std::shared_ptr<int64_t> taskConfigId_ = nullptr;
    std::shared_ptr<string> taskConfigName_ = nullptr;
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
