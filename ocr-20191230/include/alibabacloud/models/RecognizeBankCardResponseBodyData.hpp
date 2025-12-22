// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RECOGNIZEBANKCARDRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_RECOGNIZEBANKCARDRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ocr20191230
{
namespace Models
{
  class RecognizeBankCardResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RecognizeBankCardResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(BankName, bankName_);
      DARABONBA_PTR_TO_JSON(CardNumber, cardNumber_);
      DARABONBA_PTR_TO_JSON(CardType, cardType_);
      DARABONBA_PTR_TO_JSON(ValidDate, validDate_);
    };
    friend void from_json(const Darabonba::Json& j, RecognizeBankCardResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(BankName, bankName_);
      DARABONBA_PTR_FROM_JSON(CardNumber, cardNumber_);
      DARABONBA_PTR_FROM_JSON(CardType, cardType_);
      DARABONBA_PTR_FROM_JSON(ValidDate, validDate_);
    };
    RecognizeBankCardResponseBodyData() = default ;
    RecognizeBankCardResponseBodyData(const RecognizeBankCardResponseBodyData &) = default ;
    RecognizeBankCardResponseBodyData(RecognizeBankCardResponseBodyData &&) = default ;
    RecognizeBankCardResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RecognizeBankCardResponseBodyData() = default ;
    RecognizeBankCardResponseBodyData& operator=(const RecognizeBankCardResponseBodyData &) = default ;
    RecognizeBankCardResponseBodyData& operator=(RecognizeBankCardResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bankName_ == nullptr
        && return this->cardNumber_ == nullptr && return this->cardType_ == nullptr && return this->validDate_ == nullptr; };
    // bankName Field Functions 
    bool hasBankName() const { return this->bankName_ != nullptr;};
    void deleteBankName() { this->bankName_ = nullptr;};
    inline string bankName() const { DARABONBA_PTR_GET_DEFAULT(bankName_, "") };
    inline RecognizeBankCardResponseBodyData& setBankName(string bankName) { DARABONBA_PTR_SET_VALUE(bankName_, bankName) };


    // cardNumber Field Functions 
    bool hasCardNumber() const { return this->cardNumber_ != nullptr;};
    void deleteCardNumber() { this->cardNumber_ = nullptr;};
    inline string cardNumber() const { DARABONBA_PTR_GET_DEFAULT(cardNumber_, "") };
    inline RecognizeBankCardResponseBodyData& setCardNumber(string cardNumber) { DARABONBA_PTR_SET_VALUE(cardNumber_, cardNumber) };


    // cardType Field Functions 
    bool hasCardType() const { return this->cardType_ != nullptr;};
    void deleteCardType() { this->cardType_ = nullptr;};
    inline string cardType() const { DARABONBA_PTR_GET_DEFAULT(cardType_, "") };
    inline RecognizeBankCardResponseBodyData& setCardType(string cardType) { DARABONBA_PTR_SET_VALUE(cardType_, cardType) };


    // validDate Field Functions 
    bool hasValidDate() const { return this->validDate_ != nullptr;};
    void deleteValidDate() { this->validDate_ = nullptr;};
    inline string validDate() const { DARABONBA_PTR_GET_DEFAULT(validDate_, "") };
    inline RecognizeBankCardResponseBodyData& setValidDate(string validDate) { DARABONBA_PTR_SET_VALUE(validDate_, validDate) };


  protected:
    std::shared_ptr<string> bankName_ = nullptr;
    std::shared_ptr<string> cardNumber_ = nullptr;
    std::shared_ptr<string> cardType_ = nullptr;
    std::shared_ptr<string> validDate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ocr20191230
#endif
