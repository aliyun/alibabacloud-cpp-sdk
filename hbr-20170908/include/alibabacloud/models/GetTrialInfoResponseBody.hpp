// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTRIALINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETTRIALINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class GetTrialInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTrialInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TrialInfo, trialInfo_);
    };
    friend void from_json(const Darabonba::Json& j, GetTrialInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TrialInfo, trialInfo_);
    };
    GetTrialInfoResponseBody() = default ;
    GetTrialInfoResponseBody(const GetTrialInfoResponseBody &) = default ;
    GetTrialInfoResponseBody(GetTrialInfoResponseBody &&) = default ;
    GetTrialInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTrialInfoResponseBody() = default ;
    GetTrialInfoResponseBody& operator=(const GetTrialInfoResponseBody &) = default ;
    GetTrialInfoResponseBody& operator=(GetTrialInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TrialInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TrialInfo& obj) { 
        DARABONBA_PTR_TO_JSON(KeepAfterTrialExpiration, keepAfterTrialExpiration_);
        DARABONBA_PTR_TO_JSON(TrialBackupPlanQuota, trialBackupPlanQuota_);
        DARABONBA_PTR_TO_JSON(TrialExpireTime, trialExpireTime_);
        DARABONBA_PTR_TO_JSON(TrialStartTime, trialStartTime_);
        DARABONBA_PTR_TO_JSON(TrialVaultQuota, trialVaultQuota_);
        DARABONBA_PTR_TO_JSON(TrialVaultReleaseTime, trialVaultReleaseTime_);
      };
      friend void from_json(const Darabonba::Json& j, TrialInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(KeepAfterTrialExpiration, keepAfterTrialExpiration_);
        DARABONBA_PTR_FROM_JSON(TrialBackupPlanQuota, trialBackupPlanQuota_);
        DARABONBA_PTR_FROM_JSON(TrialExpireTime, trialExpireTime_);
        DARABONBA_PTR_FROM_JSON(TrialStartTime, trialStartTime_);
        DARABONBA_PTR_FROM_JSON(TrialVaultQuota, trialVaultQuota_);
        DARABONBA_PTR_FROM_JSON(TrialVaultReleaseTime, trialVaultReleaseTime_);
      };
      TrialInfo() = default ;
      TrialInfo(const TrialInfo &) = default ;
      TrialInfo(TrialInfo &&) = default ;
      TrialInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TrialInfo() = default ;
      TrialInfo& operator=(const TrialInfo &) = default ;
      TrialInfo& operator=(TrialInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->keepAfterTrialExpiration_ == nullptr
        && this->trialBackupPlanQuota_ == nullptr && this->trialExpireTime_ == nullptr && this->trialStartTime_ == nullptr && this->trialVaultQuota_ == nullptr && this->trialVaultReleaseTime_ == nullptr; };
      // keepAfterTrialExpiration Field Functions 
      bool hasKeepAfterTrialExpiration() const { return this->keepAfterTrialExpiration_ != nullptr;};
      void deleteKeepAfterTrialExpiration() { this->keepAfterTrialExpiration_ = nullptr;};
      inline bool getKeepAfterTrialExpiration() const { DARABONBA_PTR_GET_DEFAULT(keepAfterTrialExpiration_, false) };
      inline TrialInfo& setKeepAfterTrialExpiration(bool keepAfterTrialExpiration) { DARABONBA_PTR_SET_VALUE(keepAfterTrialExpiration_, keepAfterTrialExpiration) };


      // trialBackupPlanQuota Field Functions 
      bool hasTrialBackupPlanQuota() const { return this->trialBackupPlanQuota_ != nullptr;};
      void deleteTrialBackupPlanQuota() { this->trialBackupPlanQuota_ = nullptr;};
      inline int64_t getTrialBackupPlanQuota() const { DARABONBA_PTR_GET_DEFAULT(trialBackupPlanQuota_, 0L) };
      inline TrialInfo& setTrialBackupPlanQuota(int64_t trialBackupPlanQuota) { DARABONBA_PTR_SET_VALUE(trialBackupPlanQuota_, trialBackupPlanQuota) };


      // trialExpireTime Field Functions 
      bool hasTrialExpireTime() const { return this->trialExpireTime_ != nullptr;};
      void deleteTrialExpireTime() { this->trialExpireTime_ = nullptr;};
      inline int64_t getTrialExpireTime() const { DARABONBA_PTR_GET_DEFAULT(trialExpireTime_, 0L) };
      inline TrialInfo& setTrialExpireTime(int64_t trialExpireTime) { DARABONBA_PTR_SET_VALUE(trialExpireTime_, trialExpireTime) };


      // trialStartTime Field Functions 
      bool hasTrialStartTime() const { return this->trialStartTime_ != nullptr;};
      void deleteTrialStartTime() { this->trialStartTime_ = nullptr;};
      inline int64_t getTrialStartTime() const { DARABONBA_PTR_GET_DEFAULT(trialStartTime_, 0L) };
      inline TrialInfo& setTrialStartTime(int64_t trialStartTime) { DARABONBA_PTR_SET_VALUE(trialStartTime_, trialStartTime) };


      // trialVaultQuota Field Functions 
      bool hasTrialVaultQuota() const { return this->trialVaultQuota_ != nullptr;};
      void deleteTrialVaultQuota() { this->trialVaultQuota_ = nullptr;};
      inline int64_t getTrialVaultQuota() const { DARABONBA_PTR_GET_DEFAULT(trialVaultQuota_, 0L) };
      inline TrialInfo& setTrialVaultQuota(int64_t trialVaultQuota) { DARABONBA_PTR_SET_VALUE(trialVaultQuota_, trialVaultQuota) };


      // trialVaultReleaseTime Field Functions 
      bool hasTrialVaultReleaseTime() const { return this->trialVaultReleaseTime_ != nullptr;};
      void deleteTrialVaultReleaseTime() { this->trialVaultReleaseTime_ = nullptr;};
      inline int64_t getTrialVaultReleaseTime() const { DARABONBA_PTR_GET_DEFAULT(trialVaultReleaseTime_, 0L) };
      inline TrialInfo& setTrialVaultReleaseTime(int64_t trialVaultReleaseTime) { DARABONBA_PTR_SET_VALUE(trialVaultReleaseTime_, trialVaultReleaseTime) };


    protected:
      // Indicates whether the service is converted to pay-as-you-go after the free trial expires.
      shared_ptr<bool> keepAfterTrialExpiration_ {};
      // The remaining number of free trial backup plans that can be created. The value 1 is returned if the free trial has not expired and no free trial backup plan has been created. Otherwise, the value 0 is returned.
      shared_ptr<int64_t> trialBackupPlanQuota_ {};
      // The expiration time of the free trial. UNIX timestamp, in seconds.
      shared_ptr<int64_t> trialExpireTime_ {};
      // The start time of the free trial. UNIX timestamp, in seconds.
      shared_ptr<int64_t> trialStartTime_ {};
      // The remaining number of free trial backup vaults that can be created. The value 1 is returned if the free trial has not expired and no free trial backup vault has been created. Otherwise, the value 0 is returned.
      shared_ptr<int64_t> trialVaultQuota_ {};
      // The release time of the free trial backup vault. UNIX timestamp, in seconds.
      shared_ptr<int64_t> trialVaultReleaseTime_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->trialInfo_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetTrialInfoResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetTrialInfoResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetTrialInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetTrialInfoResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // trialInfo Field Functions 
    bool hasTrialInfo() const { return this->trialInfo_ != nullptr;};
    void deleteTrialInfo() { this->trialInfo_ = nullptr;};
    inline const GetTrialInfoResponseBody::TrialInfo & getTrialInfo() const { DARABONBA_PTR_GET_CONST(trialInfo_, GetTrialInfoResponseBody::TrialInfo) };
    inline GetTrialInfoResponseBody::TrialInfo getTrialInfo() { DARABONBA_PTR_GET(trialInfo_, GetTrialInfoResponseBody::TrialInfo) };
    inline GetTrialInfoResponseBody& setTrialInfo(const GetTrialInfoResponseBody::TrialInfo & trialInfo) { DARABONBA_PTR_SET_VALUE(trialInfo_, trialInfo) };
    inline GetTrialInfoResponseBody& setTrialInfo(GetTrialInfoResponseBody::TrialInfo && trialInfo) { DARABONBA_PTR_SET_RVALUE(trialInfo_, trialInfo) };


  protected:
    // The return code. A value of 200 indicates success.
    shared_ptr<string> code_ {};
    // The returned message. The value "successful" is returned on success. An error message is returned on failure.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    // 
    // - true: The request was successful.
    // - false: The request failed.
    shared_ptr<bool> success_ {};
    // The free trial properties. This parameter is returned only when a free trial record exists for the data source.
    shared_ptr<GetTrialInfoResponseBody::TrialInfo> trialInfo_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
