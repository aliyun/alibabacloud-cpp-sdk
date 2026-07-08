// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VIRTUALTHREEELEMENTSVERIFICATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_VIRTUALTHREEELEMENTSVERIFICATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dytnsapi20200217
{
namespace Models
{
  class VirtualThreeElementsVerificationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const VirtualThreeElementsVerificationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AuthCode, authCode_);
      DARABONBA_PTR_TO_JSON(CertCode, certCode_);
      DARABONBA_PTR_TO_JSON(CertName, certName_);
      DARABONBA_PTR_TO_JSON(InputNumber, inputNumber_);
      DARABONBA_PTR_TO_JSON(Mask, mask_);
    };
    friend void from_json(const Darabonba::Json& j, VirtualThreeElementsVerificationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthCode, authCode_);
      DARABONBA_PTR_FROM_JSON(CertCode, certCode_);
      DARABONBA_PTR_FROM_JSON(CertName, certName_);
      DARABONBA_PTR_FROM_JSON(InputNumber, inputNumber_);
      DARABONBA_PTR_FROM_JSON(Mask, mask_);
    };
    VirtualThreeElementsVerificationRequest() = default ;
    VirtualThreeElementsVerificationRequest(const VirtualThreeElementsVerificationRequest &) = default ;
    VirtualThreeElementsVerificationRequest(VirtualThreeElementsVerificationRequest &&) = default ;
    VirtualThreeElementsVerificationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~VirtualThreeElementsVerificationRequest() = default ;
    VirtualThreeElementsVerificationRequest& operator=(const VirtualThreeElementsVerificationRequest &) = default ;
    VirtualThreeElementsVerificationRequest& operator=(VirtualThreeElementsVerificationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authCode_ == nullptr
        && this->certCode_ == nullptr && this->certName_ == nullptr && this->inputNumber_ == nullptr && this->mask_ == nullptr; };
    // authCode Field Functions 
    bool hasAuthCode() const { return this->authCode_ != nullptr;};
    void deleteAuthCode() { this->authCode_ = nullptr;};
    inline string getAuthCode() const { DARABONBA_PTR_GET_DEFAULT(authCode_, "") };
    inline VirtualThreeElementsVerificationRequest& setAuthCode(string authCode) { DARABONBA_PTR_SET_VALUE(authCode_, authCode) };


    // certCode Field Functions 
    bool hasCertCode() const { return this->certCode_ != nullptr;};
    void deleteCertCode() { this->certCode_ = nullptr;};
    inline string getCertCode() const { DARABONBA_PTR_GET_DEFAULT(certCode_, "") };
    inline VirtualThreeElementsVerificationRequest& setCertCode(string certCode) { DARABONBA_PTR_SET_VALUE(certCode_, certCode) };


    // certName Field Functions 
    bool hasCertName() const { return this->certName_ != nullptr;};
    void deleteCertName() { this->certName_ = nullptr;};
    inline string getCertName() const { DARABONBA_PTR_GET_DEFAULT(certName_, "") };
    inline VirtualThreeElementsVerificationRequest& setCertName(string certName) { DARABONBA_PTR_SET_VALUE(certName_, certName) };


    // inputNumber Field Functions 
    bool hasInputNumber() const { return this->inputNumber_ != nullptr;};
    void deleteInputNumber() { this->inputNumber_ = nullptr;};
    inline string getInputNumber() const { DARABONBA_PTR_GET_DEFAULT(inputNumber_, "") };
    inline VirtualThreeElementsVerificationRequest& setInputNumber(string inputNumber) { DARABONBA_PTR_SET_VALUE(inputNumber_, inputNumber) };


    // mask Field Functions 
    bool hasMask() const { return this->mask_ != nullptr;};
    void deleteMask() { this->mask_ = nullptr;};
    inline string getMask() const { DARABONBA_PTR_GET_DEFAULT(mask_, "") };
    inline VirtualThreeElementsVerificationRequest& setMask(string mask) { DARABONBA_PTR_SET_VALUE(mask_, mask) };


  protected:
    // This parameter is required.
    shared_ptr<string> authCode_ {};
    // This parameter is required.
    shared_ptr<string> certCode_ {};
    // This parameter is required.
    shared_ptr<string> certName_ {};
    // This parameter is required.
    shared_ptr<string> inputNumber_ {};
    // This parameter is required.
    shared_ptr<string> mask_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dytnsapi20200217
#endif
