// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BUYSECRETNORESPONSEBODYSECRETBUYINFODTO_HPP_
#define ALIBABACLOUD_MODELS_BUYSECRETNORESPONSEBODYSECRETBUYINFODTO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyplsapi20170525
{
namespace Models
{
  class BuySecretNoResponseBodySecretBuyInfoDTO : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BuySecretNoResponseBodySecretBuyInfoDTO& obj) { 
      DARABONBA_PTR_TO_JSON(SecretNo, secretNo_);
    };
    friend void from_json(const Darabonba::Json& j, BuySecretNoResponseBodySecretBuyInfoDTO& obj) { 
      DARABONBA_PTR_FROM_JSON(SecretNo, secretNo_);
    };
    BuySecretNoResponseBodySecretBuyInfoDTO() = default ;
    BuySecretNoResponseBodySecretBuyInfoDTO(const BuySecretNoResponseBodySecretBuyInfoDTO &) = default ;
    BuySecretNoResponseBodySecretBuyInfoDTO(BuySecretNoResponseBodySecretBuyInfoDTO &&) = default ;
    BuySecretNoResponseBodySecretBuyInfoDTO(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BuySecretNoResponseBodySecretBuyInfoDTO() = default ;
    BuySecretNoResponseBodySecretBuyInfoDTO& operator=(const BuySecretNoResponseBodySecretBuyInfoDTO &) = default ;
    BuySecretNoResponseBodySecretBuyInfoDTO& operator=(BuySecretNoResponseBodySecretBuyInfoDTO &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->secretNo_ == nullptr; };
    // secretNo Field Functions 
    bool hasSecretNo() const { return this->secretNo_ != nullptr;};
    void deleteSecretNo() { this->secretNo_ = nullptr;};
    inline string secretNo() const { DARABONBA_PTR_GET_DEFAULT(secretNo_, "") };
    inline BuySecretNoResponseBodySecretBuyInfoDTO& setSecretNo(string secretNo) { DARABONBA_PTR_SET_VALUE(secretNo_, secretNo) };


  protected:
    // The private number, that is, phone number X.
    std::shared_ptr<string> secretNo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyplsapi20170525
#endif
