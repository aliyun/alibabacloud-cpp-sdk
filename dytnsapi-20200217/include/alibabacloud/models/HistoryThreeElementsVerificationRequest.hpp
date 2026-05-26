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
    // This parameter is required.
    shared_ptr<string> authCode_ {};
    shared_ptr<string> carrier_ {};
    // This parameter is required.
    shared_ptr<string> certCode_ {};
    // This parameter is required.
    shared_ptr<string> inputNumber_ {};
    // This parameter is required.
    shared_ptr<string> mask_ {};
    // This parameter is required.
    shared_ptr<string> name_ {};
    // This parameter is required.
    shared_ptr<string> verificationTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dytnsapi20200217
#endif
