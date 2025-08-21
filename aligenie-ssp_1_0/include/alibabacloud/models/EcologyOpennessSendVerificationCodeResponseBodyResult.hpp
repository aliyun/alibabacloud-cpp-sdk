// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ECOLOGYOPENNESSSENDVERIFICATIONCODERESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_ECOLOGYOPENNESSSENDVERIFICATIONCODERESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class EcologyOpennessSendVerificationCodeResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EcologyOpennessSendVerificationCodeResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(ExpireIn, expireIn_);
      DARABONBA_PTR_TO_JSON(RepeatInterval, repeatInterval_);
    };
    friend void from_json(const Darabonba::Json& j, EcologyOpennessSendVerificationCodeResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(ExpireIn, expireIn_);
      DARABONBA_PTR_FROM_JSON(RepeatInterval, repeatInterval_);
    };
    EcologyOpennessSendVerificationCodeResponseBodyResult() = default ;
    EcologyOpennessSendVerificationCodeResponseBodyResult(const EcologyOpennessSendVerificationCodeResponseBodyResult &) = default ;
    EcologyOpennessSendVerificationCodeResponseBodyResult(EcologyOpennessSendVerificationCodeResponseBodyResult &&) = default ;
    EcologyOpennessSendVerificationCodeResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EcologyOpennessSendVerificationCodeResponseBodyResult() = default ;
    EcologyOpennessSendVerificationCodeResponseBodyResult& operator=(const EcologyOpennessSendVerificationCodeResponseBodyResult &) = default ;
    EcologyOpennessSendVerificationCodeResponseBodyResult& operator=(EcologyOpennessSendVerificationCodeResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->expireIn_ != nullptr
        && this->repeatInterval_ != nullptr; };
    // expireIn Field Functions 
    bool hasExpireIn() const { return this->expireIn_ != nullptr;};
    void deleteExpireIn() { this->expireIn_ = nullptr;};
    inline int32_t expireIn() const { DARABONBA_PTR_GET_DEFAULT(expireIn_, 0) };
    inline EcologyOpennessSendVerificationCodeResponseBodyResult& setExpireIn(int32_t expireIn) { DARABONBA_PTR_SET_VALUE(expireIn_, expireIn) };


    // repeatInterval Field Functions 
    bool hasRepeatInterval() const { return this->repeatInterval_ != nullptr;};
    void deleteRepeatInterval() { this->repeatInterval_ = nullptr;};
    inline int32_t repeatInterval() const { DARABONBA_PTR_GET_DEFAULT(repeatInterval_, 0) };
    inline EcologyOpennessSendVerificationCodeResponseBodyResult& setRepeatInterval(int32_t repeatInterval) { DARABONBA_PTR_SET_VALUE(repeatInterval_, repeatInterval) };


  protected:
    std::shared_ptr<int32_t> expireIn_ = nullptr;
    std::shared_ptr<int32_t> repeatInterval_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
