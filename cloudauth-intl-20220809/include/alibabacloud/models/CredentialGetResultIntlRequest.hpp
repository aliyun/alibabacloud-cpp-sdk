// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREDENTIALGETRESULTINTLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREDENTIALGETRESULTINTLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudauthIntl20220809
{
namespace Models
{
  class CredentialGetResultIntlRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CredentialGetResultIntlRequest& obj) { 
      DARABONBA_PTR_TO_JSON(TransactionId, transactionId_);
    };
    friend void from_json(const Darabonba::Json& j, CredentialGetResultIntlRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(TransactionId, transactionId_);
    };
    CredentialGetResultIntlRequest() = default ;
    CredentialGetResultIntlRequest(const CredentialGetResultIntlRequest &) = default ;
    CredentialGetResultIntlRequest(CredentialGetResultIntlRequest &&) = default ;
    CredentialGetResultIntlRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CredentialGetResultIntlRequest() = default ;
    CredentialGetResultIntlRequest& operator=(const CredentialGetResultIntlRequest &) = default ;
    CredentialGetResultIntlRequest& operator=(CredentialGetResultIntlRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->transactionId_ == nullptr; };
    // transactionId Field Functions 
    bool hasTransactionId() const { return this->transactionId_ != nullptr;};
    void deleteTransactionId() { this->transactionId_ = nullptr;};
    inline string transactionId() const { DARABONBA_PTR_GET_DEFAULT(transactionId_, "") };
    inline CredentialGetResultIntlRequest& setTransactionId(string transactionId) { DARABONBA_PTR_SET_VALUE(transactionId_, transactionId) };


  protected:
    // Unique identifier for the authentication request
    // 
    // This parameter is required.
    std::shared_ptr<string> transactionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudauthIntl20220809
#endif
