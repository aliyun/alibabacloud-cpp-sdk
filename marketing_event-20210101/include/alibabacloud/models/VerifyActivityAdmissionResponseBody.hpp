// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VERIFYACTIVITYADMISSIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_VERIFYACTIVITYADMISSIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MarketingEvent20210101
{
namespace Models
{
  class VerifyActivityAdmissionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const VerifyActivityAdmissionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, VerifyActivityAdmissionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    VerifyActivityAdmissionResponseBody() = default ;
    VerifyActivityAdmissionResponseBody(const VerifyActivityAdmissionResponseBody &) = default ;
    VerifyActivityAdmissionResponseBody(VerifyActivityAdmissionResponseBody &&) = default ;
    VerifyActivityAdmissionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~VerifyActivityAdmissionResponseBody() = default ;
    VerifyActivityAdmissionResponseBody& operator=(const VerifyActivityAdmissionResponseBody &) = default ;
    VerifyActivityAdmissionResponseBody& operator=(VerifyActivityAdmissionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ActivityId, activityId_);
        DARABONBA_PTR_TO_JSON(ActivityName, activityName_);
        DARABONBA_PTR_TO_JSON(Address, address_);
        DARABONBA_PTR_TO_JSON(AdmissionDate, admissionDate_);
        DARABONBA_PTR_TO_JSON(AllowedDates, allowedDates_);
        DARABONBA_PTR_TO_JSON(Decision, decision_);
        DARABONBA_PTR_TO_JSON(EndTime, endTime_);
        DARABONBA_PTR_TO_JSON(MaskedIdCardNo, maskedIdCardNo_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(RegistrationStatus, registrationStatus_);
        DARABONBA_PTR_TO_JSON(SignedIn, signedIn_);
        DARABONBA_PTR_TO_JSON(SigninTime, signinTime_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ActivityId, activityId_);
        DARABONBA_PTR_FROM_JSON(ActivityName, activityName_);
        DARABONBA_PTR_FROM_JSON(Address, address_);
        DARABONBA_PTR_FROM_JSON(AdmissionDate, admissionDate_);
        DARABONBA_PTR_FROM_JSON(AllowedDates, allowedDates_);
        DARABONBA_PTR_FROM_JSON(Decision, decision_);
        DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
        DARABONBA_PTR_FROM_JSON(MaskedIdCardNo, maskedIdCardNo_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(RegistrationStatus, registrationStatus_);
        DARABONBA_PTR_FROM_JSON(SignedIn, signedIn_);
        DARABONBA_PTR_FROM_JSON(SigninTime, signinTime_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->activityId_ == nullptr
        && this->activityName_ == nullptr && this->address_ == nullptr && this->admissionDate_ == nullptr && this->allowedDates_ == nullptr && this->decision_ == nullptr
        && this->endTime_ == nullptr && this->maskedIdCardNo_ == nullptr && this->name_ == nullptr && this->registrationStatus_ == nullptr && this->signedIn_ == nullptr
        && this->signinTime_ == nullptr && this->startTime_ == nullptr; };
      // activityId Field Functions 
      bool hasActivityId() const { return this->activityId_ != nullptr;};
      void deleteActivityId() { this->activityId_ = nullptr;};
      inline int64_t getActivityId() const { DARABONBA_PTR_GET_DEFAULT(activityId_, 0L) };
      inline Data& setActivityId(int64_t activityId) { DARABONBA_PTR_SET_VALUE(activityId_, activityId) };


      // activityName Field Functions 
      bool hasActivityName() const { return this->activityName_ != nullptr;};
      void deleteActivityName() { this->activityName_ = nullptr;};
      inline string getActivityName() const { DARABONBA_PTR_GET_DEFAULT(activityName_, "") };
      inline Data& setActivityName(string activityName) { DARABONBA_PTR_SET_VALUE(activityName_, activityName) };


      // address Field Functions 
      bool hasAddress() const { return this->address_ != nullptr;};
      void deleteAddress() { this->address_ = nullptr;};
      inline string getAddress() const { DARABONBA_PTR_GET_DEFAULT(address_, "") };
      inline Data& setAddress(string address) { DARABONBA_PTR_SET_VALUE(address_, address) };


      // admissionDate Field Functions 
      bool hasAdmissionDate() const { return this->admissionDate_ != nullptr;};
      void deleteAdmissionDate() { this->admissionDate_ = nullptr;};
      inline string getAdmissionDate() const { DARABONBA_PTR_GET_DEFAULT(admissionDate_, "") };
      inline Data& setAdmissionDate(string admissionDate) { DARABONBA_PTR_SET_VALUE(admissionDate_, admissionDate) };


      // allowedDates Field Functions 
      bool hasAllowedDates() const { return this->allowedDates_ != nullptr;};
      void deleteAllowedDates() { this->allowedDates_ = nullptr;};
      inline const vector<string> & getAllowedDates() const { DARABONBA_PTR_GET_CONST(allowedDates_, vector<string>) };
      inline vector<string> getAllowedDates() { DARABONBA_PTR_GET(allowedDates_, vector<string>) };
      inline Data& setAllowedDates(const vector<string> & allowedDates) { DARABONBA_PTR_SET_VALUE(allowedDates_, allowedDates) };
      inline Data& setAllowedDates(vector<string> && allowedDates) { DARABONBA_PTR_SET_RVALUE(allowedDates_, allowedDates) };


      // decision Field Functions 
      bool hasDecision() const { return this->decision_ != nullptr;};
      void deleteDecision() { this->decision_ = nullptr;};
      inline string getDecision() const { DARABONBA_PTR_GET_DEFAULT(decision_, "") };
      inline Data& setDecision(string decision) { DARABONBA_PTR_SET_VALUE(decision_, decision) };


      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
      inline Data& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // maskedIdCardNo Field Functions 
      bool hasMaskedIdCardNo() const { return this->maskedIdCardNo_ != nullptr;};
      void deleteMaskedIdCardNo() { this->maskedIdCardNo_ = nullptr;};
      inline string getMaskedIdCardNo() const { DARABONBA_PTR_GET_DEFAULT(maskedIdCardNo_, "") };
      inline Data& setMaskedIdCardNo(string maskedIdCardNo) { DARABONBA_PTR_SET_VALUE(maskedIdCardNo_, maskedIdCardNo) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Data& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // registrationStatus Field Functions 
      bool hasRegistrationStatus() const { return this->registrationStatus_ != nullptr;};
      void deleteRegistrationStatus() { this->registrationStatus_ = nullptr;};
      inline int32_t getRegistrationStatus() const { DARABONBA_PTR_GET_DEFAULT(registrationStatus_, 0) };
      inline Data& setRegistrationStatus(int32_t registrationStatus) { DARABONBA_PTR_SET_VALUE(registrationStatus_, registrationStatus) };


      // signedIn Field Functions 
      bool hasSignedIn() const { return this->signedIn_ != nullptr;};
      void deleteSignedIn() { this->signedIn_ = nullptr;};
      inline bool getSignedIn() const { DARABONBA_PTR_GET_DEFAULT(signedIn_, false) };
      inline Data& setSignedIn(bool signedIn) { DARABONBA_PTR_SET_VALUE(signedIn_, signedIn) };


      // signinTime Field Functions 
      bool hasSigninTime() const { return this->signinTime_ != nullptr;};
      void deleteSigninTime() { this->signinTime_ = nullptr;};
      inline string getSigninTime() const { DARABONBA_PTR_GET_DEFAULT(signinTime_, "") };
      inline Data& setSigninTime(string signinTime) { DARABONBA_PTR_SET_VALUE(signinTime_, signinTime) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
      inline Data& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    protected:
      shared_ptr<int64_t> activityId_ {};
      shared_ptr<string> activityName_ {};
      shared_ptr<string> address_ {};
      shared_ptr<string> admissionDate_ {};
      shared_ptr<vector<string>> allowedDates_ {};
      shared_ptr<string> decision_ {};
      shared_ptr<string> endTime_ {};
      shared_ptr<string> maskedIdCardNo_ {};
      shared_ptr<string> name_ {};
      shared_ptr<int32_t> registrationStatus_ {};
      shared_ptr<bool> signedIn_ {};
      shared_ptr<string> signinTime_ {};
      shared_ptr<string> startTime_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline VerifyActivityAdmissionResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const VerifyActivityAdmissionResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, VerifyActivityAdmissionResponseBody::Data) };
    inline VerifyActivityAdmissionResponseBody::Data getData() { DARABONBA_PTR_GET(data_, VerifyActivityAdmissionResponseBody::Data) };
    inline VerifyActivityAdmissionResponseBody& setData(const VerifyActivityAdmissionResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline VerifyActivityAdmissionResponseBody& setData(VerifyActivityAdmissionResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline VerifyActivityAdmissionResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline VerifyActivityAdmissionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline VerifyActivityAdmissionResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<VerifyActivityAdmissionResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MarketingEvent20210101
#endif
