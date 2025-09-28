// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VERIFYPHONEWITHTOKENRESPONSEBODYGATEVERIFY_HPP_
#define ALIBABACLOUD_MODELS_VERIFYPHONEWITHTOKENRESPONSEBODYGATEVERIFY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dypnsapi20170525
{
namespace Models
{
  class VerifyPhoneWithTokenResponseBodyGateVerify : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const VerifyPhoneWithTokenResponseBodyGateVerify& obj) { 
      DARABONBA_PTR_TO_JSON(VerifyId, verifyId_);
      DARABONBA_PTR_TO_JSON(VerifyResult, verifyResult_);
    };
    friend void from_json(const Darabonba::Json& j, VerifyPhoneWithTokenResponseBodyGateVerify& obj) { 
      DARABONBA_PTR_FROM_JSON(VerifyId, verifyId_);
      DARABONBA_PTR_FROM_JSON(VerifyResult, verifyResult_);
    };
    VerifyPhoneWithTokenResponseBodyGateVerify() = default ;
    VerifyPhoneWithTokenResponseBodyGateVerify(const VerifyPhoneWithTokenResponseBodyGateVerify &) = default ;
    VerifyPhoneWithTokenResponseBodyGateVerify(VerifyPhoneWithTokenResponseBodyGateVerify &&) = default ;
    VerifyPhoneWithTokenResponseBodyGateVerify(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~VerifyPhoneWithTokenResponseBodyGateVerify() = default ;
    VerifyPhoneWithTokenResponseBodyGateVerify& operator=(const VerifyPhoneWithTokenResponseBodyGateVerify &) = default ;
    VerifyPhoneWithTokenResponseBodyGateVerify& operator=(VerifyPhoneWithTokenResponseBodyGateVerify &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->verifyId_ != nullptr
        && this->verifyResult_ != nullptr; };
    // verifyId Field Functions 
    bool hasVerifyId() const { return this->verifyId_ != nullptr;};
    void deleteVerifyId() { this->verifyId_ = nullptr;};
    inline string verifyId() const { DARABONBA_PTR_GET_DEFAULT(verifyId_, "") };
    inline VerifyPhoneWithTokenResponseBodyGateVerify& setVerifyId(string verifyId) { DARABONBA_PTR_SET_VALUE(verifyId_, verifyId) };


    // verifyResult Field Functions 
    bool hasVerifyResult() const { return this->verifyResult_ != nullptr;};
    void deleteVerifyResult() { this->verifyResult_ = nullptr;};
    inline string verifyResult() const { DARABONBA_PTR_GET_DEFAULT(verifyResult_, "") };
    inline VerifyPhoneWithTokenResponseBodyGateVerify& setVerifyResult(string verifyResult) { DARABONBA_PTR_SET_VALUE(verifyResult_, verifyResult) };


  protected:
    // The external ID.
    std::shared_ptr<string> verifyId_ = nullptr;
    // The verification results. Valid values:
    // 
    // *   PASS: The input phone number is consistent with the phone number used in HTML5 pages.
    // *   REJECT: The input phone number is different from the phone number used in HTML5 pages.
    // *   UNKNOWN: The system cannot judge whether the input phone number is consistent with the phone number used in HTML5 pages.
    std::shared_ptr<string> verifyResult_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dypnsapi20170525
#endif
