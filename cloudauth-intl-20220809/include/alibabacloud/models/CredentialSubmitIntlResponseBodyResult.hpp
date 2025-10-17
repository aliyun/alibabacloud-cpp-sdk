// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREDENTIALSUBMITINTLRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_CREDENTIALSUBMITINTLRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudauthIntl20220809
{
namespace Models
{
  class CredentialSubmitIntlResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CredentialSubmitIntlResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(TransactionId, transactionId_);
    };
    friend void from_json(const Darabonba::Json& j, CredentialSubmitIntlResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(TransactionId, transactionId_);
    };
    CredentialSubmitIntlResponseBodyResult() = default ;
    CredentialSubmitIntlResponseBodyResult(const CredentialSubmitIntlResponseBodyResult &) = default ;
    CredentialSubmitIntlResponseBodyResult(CredentialSubmitIntlResponseBodyResult &&) = default ;
    CredentialSubmitIntlResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CredentialSubmitIntlResponseBodyResult() = default ;
    CredentialSubmitIntlResponseBodyResult& operator=(const CredentialSubmitIntlResponseBodyResult &) = default ;
    CredentialSubmitIntlResponseBodyResult& operator=(CredentialSubmitIntlResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->transactionId_ == nullptr; };
    // transactionId Field Functions 
    bool hasTransactionId() const { return this->transactionId_ != nullptr;};
    void deleteTransactionId() { this->transactionId_ = nullptr;};
    inline string transactionId() const { DARABONBA_PTR_GET_DEFAULT(transactionId_, "") };
    inline CredentialSubmitIntlResponseBodyResult& setTransactionId(string transactionId) { DARABONBA_PTR_SET_VALUE(transactionId_, transactionId) };


  protected:
    // Unique identifier of the authentication request.
    std::shared_ptr<string> transactionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudauthIntl20220809
#endif
