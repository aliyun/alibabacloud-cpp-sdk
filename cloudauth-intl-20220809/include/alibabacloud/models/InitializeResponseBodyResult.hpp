// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INITIALIZERESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_INITIALIZERESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudauthIntl20220809
{
namespace Models
{
  class InitializeResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InitializeResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(ClientCfg, clientCfg_);
      DARABONBA_PTR_TO_JSON(Protocol, protocol_);
      DARABONBA_PTR_TO_JSON(TransactionId, transactionId_);
      DARABONBA_PTR_TO_JSON(TransactionUrl, transactionUrl_);
    };
    friend void from_json(const Darabonba::Json& j, InitializeResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientCfg, clientCfg_);
      DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
      DARABONBA_PTR_FROM_JSON(TransactionId, transactionId_);
      DARABONBA_PTR_FROM_JSON(TransactionUrl, transactionUrl_);
    };
    InitializeResponseBodyResult() = default ;
    InitializeResponseBodyResult(const InitializeResponseBodyResult &) = default ;
    InitializeResponseBodyResult(InitializeResponseBodyResult &&) = default ;
    InitializeResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InitializeResponseBodyResult() = default ;
    InitializeResponseBodyResult& operator=(const InitializeResponseBodyResult &) = default ;
    InitializeResponseBodyResult& operator=(InitializeResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientCfg_ == nullptr
        && return this->protocol_ == nullptr && return this->transactionId_ == nullptr && return this->transactionUrl_ == nullptr; };
    // clientCfg Field Functions 
    bool hasClientCfg() const { return this->clientCfg_ != nullptr;};
    void deleteClientCfg() { this->clientCfg_ = nullptr;};
    inline string clientCfg() const { DARABONBA_PTR_GET_DEFAULT(clientCfg_, "") };
    inline InitializeResponseBodyResult& setClientCfg(string clientCfg) { DARABONBA_PTR_SET_VALUE(clientCfg_, clientCfg) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string protocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline InitializeResponseBodyResult& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    // transactionId Field Functions 
    bool hasTransactionId() const { return this->transactionId_ != nullptr;};
    void deleteTransactionId() { this->transactionId_ = nullptr;};
    inline string transactionId() const { DARABONBA_PTR_GET_DEFAULT(transactionId_, "") };
    inline InitializeResponseBodyResult& setTransactionId(string transactionId) { DARABONBA_PTR_SET_VALUE(transactionId_, transactionId) };


    // transactionUrl Field Functions 
    bool hasTransactionUrl() const { return this->transactionUrl_ != nullptr;};
    void deleteTransactionUrl() { this->transactionUrl_ = nullptr;};
    inline string transactionUrl() const { DARABONBA_PTR_GET_DEFAULT(transactionUrl_, "") };
    inline InitializeResponseBodyResult& setTransactionUrl(string transactionUrl) { DARABONBA_PTR_SET_VALUE(transactionUrl_, transactionUrl) };


  protected:
    // Client configuration
    std::shared_ptr<string> clientCfg_ = nullptr;
    // Standard encryption protocol for authentication.
    // 
    // > This field is required when integrating with H5 web pages using iframe embedding.
    std::shared_ptr<string> protocol_ = nullptr;
    // Authentication ID
    std::shared_ptr<string> transactionId_ = nullptr;
    // Web authentication URL
    std::shared_ptr<string> transactionUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudauthIntl20220809
#endif
