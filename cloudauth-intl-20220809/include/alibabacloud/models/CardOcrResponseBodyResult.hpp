// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CARDOCRRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_CARDOCRRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudauthIntl20220809
{
namespace Models
{
  class CardOcrResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CardOcrResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(ExtCardInfo, extCardInfo_);
      DARABONBA_PTR_TO_JSON(ExtIdInfo, extIdInfo_);
      DARABONBA_PTR_TO_JSON(Passed, passed_);
      DARABONBA_PTR_TO_JSON(SubCode, subCode_);
      DARABONBA_PTR_TO_JSON(TransactionId, transactionId_);
    };
    friend void from_json(const Darabonba::Json& j, CardOcrResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(ExtCardInfo, extCardInfo_);
      DARABONBA_PTR_FROM_JSON(ExtIdInfo, extIdInfo_);
      DARABONBA_PTR_FROM_JSON(Passed, passed_);
      DARABONBA_PTR_FROM_JSON(SubCode, subCode_);
      DARABONBA_PTR_FROM_JSON(TransactionId, transactionId_);
    };
    CardOcrResponseBodyResult() = default ;
    CardOcrResponseBodyResult(const CardOcrResponseBodyResult &) = default ;
    CardOcrResponseBodyResult(CardOcrResponseBodyResult &&) = default ;
    CardOcrResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CardOcrResponseBodyResult() = default ;
    CardOcrResponseBodyResult& operator=(const CardOcrResponseBodyResult &) = default ;
    CardOcrResponseBodyResult& operator=(CardOcrResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->extCardInfo_ == nullptr
        && return this->extIdInfo_ == nullptr && return this->passed_ == nullptr && return this->subCode_ == nullptr && return this->transactionId_ == nullptr; };
    // extCardInfo Field Functions 
    bool hasExtCardInfo() const { return this->extCardInfo_ != nullptr;};
    void deleteExtCardInfo() { this->extCardInfo_ = nullptr;};
    inline string extCardInfo() const { DARABONBA_PTR_GET_DEFAULT(extCardInfo_, "") };
    inline CardOcrResponseBodyResult& setExtCardInfo(string extCardInfo) { DARABONBA_PTR_SET_VALUE(extCardInfo_, extCardInfo) };


    // extIdInfo Field Functions 
    bool hasExtIdInfo() const { return this->extIdInfo_ != nullptr;};
    void deleteExtIdInfo() { this->extIdInfo_ = nullptr;};
    inline string extIdInfo() const { DARABONBA_PTR_GET_DEFAULT(extIdInfo_, "") };
    inline CardOcrResponseBodyResult& setExtIdInfo(string extIdInfo) { DARABONBA_PTR_SET_VALUE(extIdInfo_, extIdInfo) };


    // passed Field Functions 
    bool hasPassed() const { return this->passed_ != nullptr;};
    void deletePassed() { this->passed_ = nullptr;};
    inline string passed() const { DARABONBA_PTR_GET_DEFAULT(passed_, "") };
    inline CardOcrResponseBodyResult& setPassed(string passed) { DARABONBA_PTR_SET_VALUE(passed_, passed) };


    // subCode Field Functions 
    bool hasSubCode() const { return this->subCode_ != nullptr;};
    void deleteSubCode() { this->subCode_ = nullptr;};
    inline string subCode() const { DARABONBA_PTR_GET_DEFAULT(subCode_, "") };
    inline CardOcrResponseBodyResult& setSubCode(string subCode) { DARABONBA_PTR_SET_VALUE(subCode_, subCode) };


    // transactionId Field Functions 
    bool hasTransactionId() const { return this->transactionId_ != nullptr;};
    void deleteTransactionId() { this->transactionId_ = nullptr;};
    inline string transactionId() const { DARABONBA_PTR_GET_DEFAULT(transactionId_, "") };
    inline CardOcrResponseBodyResult& setTransactionId(string transactionId) { DARABONBA_PTR_SET_VALUE(transactionId_, transactionId) };


  protected:
    // Document recognition result
    std::shared_ptr<string> extCardInfo_ = nullptr;
    // Additional result information
    std::shared_ptr<string> extIdInfo_ = nullptr;
    // Whether the authentication passed.
    // 
    // - Y: Passed.
    // - N: Not passed.
    std::shared_ptr<string> passed_ = nullptr;
    // Sub-result code.
    std::shared_ptr<string> subCode_ = nullptr;
    // Unique identifier for the authentication request
    std::shared_ptr<string> transactionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudauthIntl20220809
#endif
