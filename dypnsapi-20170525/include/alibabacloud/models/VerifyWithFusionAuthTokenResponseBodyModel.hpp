// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VERIFYWITHFUSIONAUTHTOKENRESPONSEBODYMODEL_HPP_
#define ALIBABACLOUD_MODELS_VERIFYWITHFUSIONAUTHTOKENRESPONSEBODYMODEL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dypnsapi20170525
{
namespace Models
{
  class VerifyWithFusionAuthTokenResponseBodyModel : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const VerifyWithFusionAuthTokenResponseBodyModel& obj) { 
      DARABONBA_PTR_TO_JSON(PhoneNumber, phoneNumber_);
      DARABONBA_PTR_TO_JSON(PhoneScore, phoneScore_);
      DARABONBA_PTR_TO_JSON(VerifyResult, verifyResult_);
    };
    friend void from_json(const Darabonba::Json& j, VerifyWithFusionAuthTokenResponseBodyModel& obj) { 
      DARABONBA_PTR_FROM_JSON(PhoneNumber, phoneNumber_);
      DARABONBA_PTR_FROM_JSON(PhoneScore, phoneScore_);
      DARABONBA_PTR_FROM_JSON(VerifyResult, verifyResult_);
    };
    VerifyWithFusionAuthTokenResponseBodyModel() = default ;
    VerifyWithFusionAuthTokenResponseBodyModel(const VerifyWithFusionAuthTokenResponseBodyModel &) = default ;
    VerifyWithFusionAuthTokenResponseBodyModel(VerifyWithFusionAuthTokenResponseBodyModel &&) = default ;
    VerifyWithFusionAuthTokenResponseBodyModel(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~VerifyWithFusionAuthTokenResponseBodyModel() = default ;
    VerifyWithFusionAuthTokenResponseBodyModel& operator=(const VerifyWithFusionAuthTokenResponseBodyModel &) = default ;
    VerifyWithFusionAuthTokenResponseBodyModel& operator=(VerifyWithFusionAuthTokenResponseBodyModel &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->phoneNumber_ != nullptr
        && this->phoneScore_ != nullptr && this->verifyResult_ != nullptr; };
    // phoneNumber Field Functions 
    bool hasPhoneNumber() const { return this->phoneNumber_ != nullptr;};
    void deletePhoneNumber() { this->phoneNumber_ = nullptr;};
    inline string phoneNumber() const { DARABONBA_PTR_GET_DEFAULT(phoneNumber_, "") };
    inline VerifyWithFusionAuthTokenResponseBodyModel& setPhoneNumber(string phoneNumber) { DARABONBA_PTR_SET_VALUE(phoneNumber_, phoneNumber) };


    // phoneScore Field Functions 
    bool hasPhoneScore() const { return this->phoneScore_ != nullptr;};
    void deletePhoneScore() { this->phoneScore_ = nullptr;};
    inline int64_t phoneScore() const { DARABONBA_PTR_GET_DEFAULT(phoneScore_, 0L) };
    inline VerifyWithFusionAuthTokenResponseBodyModel& setPhoneScore(int64_t phoneScore) { DARABONBA_PTR_SET_VALUE(phoneScore_, phoneScore) };


    // verifyResult Field Functions 
    bool hasVerifyResult() const { return this->verifyResult_ != nullptr;};
    void deleteVerifyResult() { this->verifyResult_ = nullptr;};
    inline string verifyResult() const { DARABONBA_PTR_GET_DEFAULT(verifyResult_, "") };
    inline VerifyWithFusionAuthTokenResponseBodyModel& setVerifyResult(string verifyResult) { DARABONBA_PTR_SET_VALUE(verifyResult_, verifyResult) };


  protected:
    // The phone number, which is returned when the verification is successful.
    std::shared_ptr<string> phoneNumber_ = nullptr;
    // The phone number score, which is generated only after the phone number scoring node is enabled and the verification is successful. The higher the score, the more risky the phone number. Valid values: 0 to 100.
    std::shared_ptr<int64_t> phoneScore_ = nullptr;
    // The verification result. Valid values: PASS and UNKNOWN.
    std::shared_ptr<string> verifyResult_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dypnsapi20170525
#endif
