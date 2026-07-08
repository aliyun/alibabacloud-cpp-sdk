// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HISTORYTHREEELEMENTSVERIFICATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_HISTORYTHREEELEMENTSVERIFICATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dytnsapi20200217
{
namespace Models
{
  class HistoryThreeElementsVerificationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HistoryThreeElementsVerificationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AuthCode, authCode_);
      DARABONBA_PTR_TO_JSON(Carrier, carrier_);
      DARABONBA_PTR_TO_JSON(CertCode, certCode_);
      DARABONBA_PTR_TO_JSON(InputNumber, inputNumber_);
      DARABONBA_PTR_TO_JSON(Mask, mask_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(VerificationTime, verificationTime_);
    };
    friend void from_json(const Darabonba::Json& j, HistoryThreeElementsVerificationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthCode, authCode_);
      DARABONBA_PTR_FROM_JSON(Carrier, carrier_);
      DARABONBA_PTR_FROM_JSON(CertCode, certCode_);
      DARABONBA_PTR_FROM_JSON(InputNumber, inputNumber_);
      DARABONBA_PTR_FROM_JSON(Mask, mask_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(VerificationTime, verificationTime_);
    };
    HistoryThreeElementsVerificationRequest() = default ;
    HistoryThreeElementsVerificationRequest(const HistoryThreeElementsVerificationRequest &) = default ;
    HistoryThreeElementsVerificationRequest(HistoryThreeElementsVerificationRequest &&) = default ;
    HistoryThreeElementsVerificationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HistoryThreeElementsVerificationRequest() = default ;
    HistoryThreeElementsVerificationRequest& operator=(const HistoryThreeElementsVerificationRequest &) = default ;
    HistoryThreeElementsVerificationRequest& operator=(HistoryThreeElementsVerificationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authCode_ == nullptr
        && this->carrier_ == nullptr && this->certCode_ == nullptr && this->inputNumber_ == nullptr && this->mask_ == nullptr && this->name_ == nullptr
        && this->verificationTime_ == nullptr; };
    // authCode Field Functions 
    bool hasAuthCode() const { return this->authCode_ != nullptr;};
    void deleteAuthCode() { this->authCode_ = nullptr;};
    inline string getAuthCode() const { DARABONBA_PTR_GET_DEFAULT(authCode_, "") };
    inline HistoryThreeElementsVerificationRequest& setAuthCode(string authCode) { DARABONBA_PTR_SET_VALUE(authCode_, authCode) };


    // carrier Field Functions 
    bool hasCarrier() const { return this->carrier_ != nullptr;};
    void deleteCarrier() { this->carrier_ = nullptr;};
    inline string getCarrier() const { DARABONBA_PTR_GET_DEFAULT(carrier_, "") };
    inline HistoryThreeElementsVerificationRequest& setCarrier(string carrier) { DARABONBA_PTR_SET_VALUE(carrier_, carrier) };


    // certCode Field Functions 
    bool hasCertCode() const { return this->certCode_ != nullptr;};
    void deleteCertCode() { this->certCode_ = nullptr;};
    inline string getCertCode() const { DARABONBA_PTR_GET_DEFAULT(certCode_, "") };
    inline HistoryThreeElementsVerificationRequest& setCertCode(string certCode) { DARABONBA_PTR_SET_VALUE(certCode_, certCode) };


    // inputNumber Field Functions 
    bool hasInputNumber() const { return this->inputNumber_ != nullptr;};
    void deleteInputNumber() { this->inputNumber_ = nullptr;};
    inline string getInputNumber() const { DARABONBA_PTR_GET_DEFAULT(inputNumber_, "") };
    inline HistoryThreeElementsVerificationRequest& setInputNumber(string inputNumber) { DARABONBA_PTR_SET_VALUE(inputNumber_, inputNumber) };


    // mask Field Functions 
    bool hasMask() const { return this->mask_ != nullptr;};
    void deleteMask() { this->mask_ = nullptr;};
    inline string getMask() const { DARABONBA_PTR_GET_DEFAULT(mask_, "") };
    inline HistoryThreeElementsVerificationRequest& setMask(string mask) { DARABONBA_PTR_SET_VALUE(mask_, mask) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline HistoryThreeElementsVerificationRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // verificationTime Field Functions 
    bool hasVerificationTime() const { return this->verificationTime_ != nullptr;};
    void deleteVerificationTime() { this->verificationTime_ = nullptr;};
    inline string getVerificationTime() const { DARABONBA_PTR_GET_DEFAULT(verificationTime_, "") };
    inline HistoryThreeElementsVerificationRequest& setVerificationTime(string verificationTime) { DARABONBA_PTR_SET_VALUE(verificationTime_, verificationTime) };


  protected:
    // The authorization code. You can obtain it from the following sources:
    // 
    // - On the [Tag Plaza](https://dytns.console.aliyun.com/analysis/square) page in the Phone Number Intelligence console, select the **three-element ID verification** tag and submit an application. You will receive an authorization code after the application is approved.
    // 
    // - On the [My Applications](https://dytns.console.aliyun.com/analysis/apply) page in the Phone Number Intelligence console, find the authorization ID for your approved **three-element ID verification** service.
    // 
    // This parameter is required.
    shared_ptr<string> authCode_ {};
    // The carrier to query. By default, the system queries the number\\"s carrier of record. Specify this parameter to route the query to a specific carrier.
    // 
    // Valid values:
    // 
    // - `CMCC`: China Mobile
    // 
    // - `CUCC`: China Unicom
    // 
    // - `CTCC`: China Telecom
    // 
    // > Due to number portability, a ported number\\"s historical carrier may be unknown. Use this parameter to explicitly query a specific carrier. If omitted, the query defaults to the number\\"s current carrier of record.
    // >
    // > **Important** Specifying China Broadcasting Network is not supported and results in an HTTP 400 error.
    shared_ptr<string> carrier_ {};
    // The ID number to verify.
    // 
    // - If `Mask` is set to `NORMAL`, the value of this parameter is in plaintext.
    // 
    // This parameter is required.
    shared_ptr<string> certCode_ {};
    // The phone number to query.
    // 
    // - If `Mask` is set to `NORMAL`, this parameter must be an 11-digit mobile phone number.
    // 
    // This parameter is required.
    shared_ptr<string> inputNumber_ {};
    // The encryption method. Valid value:
    // 
    // - **NORMAL**: The phone number is not encrypted.
    // 
    // This parameter is required.
    shared_ptr<string> mask_ {};
    // The name to verify.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    // The historical point in time to verify, in `yyyyMMddHHmmss` format. If the specific time of day is unknown, set the `HHmmss` portion to `000000`. For example, `20230615000000` verifies ownership as of June 15, 2023.
    // 
    // This parameter is required.
    shared_ptr<string> verificationTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dytnsapi20200217
#endif
