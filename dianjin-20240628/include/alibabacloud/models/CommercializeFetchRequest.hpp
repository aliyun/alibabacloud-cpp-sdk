// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COMMERCIALIZEFETCHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_COMMERCIALIZEFETCHREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace Models
{
  class CommercializeFetchRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CommercializeFetchRequest& obj) { 
      DARABONBA_PTR_TO_JSON(channelId, channelId_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(encryptType, encryptType_);
      DARABONBA_PTR_TO_JSON(env, env_);
      DARABONBA_PTR_TO_JSON(productId, productId_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(secretKey, secretKey_);
      DARABONBA_PTR_TO_JSON(sign, sign_);
      DARABONBA_PTR_TO_JSON(signType, signType_);
    };
    friend void from_json(const Darabonba::Json& j, CommercializeFetchRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(channelId, channelId_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(encryptType, encryptType_);
      DARABONBA_PTR_FROM_JSON(env, env_);
      DARABONBA_PTR_FROM_JSON(productId, productId_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(secretKey, secretKey_);
      DARABONBA_PTR_FROM_JSON(sign, sign_);
      DARABONBA_PTR_FROM_JSON(signType, signType_);
    };
    CommercializeFetchRequest() = default ;
    CommercializeFetchRequest(const CommercializeFetchRequest &) = default ;
    CommercializeFetchRequest(CommercializeFetchRequest &&) = default ;
    CommercializeFetchRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CommercializeFetchRequest() = default ;
    CommercializeFetchRequest& operator=(const CommercializeFetchRequest &) = default ;
    CommercializeFetchRequest& operator=(CommercializeFetchRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->channelId_ == nullptr
        && this->data_ == nullptr && this->encryptType_ == nullptr && this->env_ == nullptr && this->productId_ == nullptr && this->requestId_ == nullptr
        && this->secretKey_ == nullptr && this->sign_ == nullptr && this->signType_ == nullptr; };
    // channelId Field Functions 
    bool hasChannelId() const { return this->channelId_ != nullptr;};
    void deleteChannelId() { this->channelId_ = nullptr;};
    inline string getChannelId() const { DARABONBA_PTR_GET_DEFAULT(channelId_, "") };
    inline CommercializeFetchRequest& setChannelId(string channelId) { DARABONBA_PTR_SET_VALUE(channelId_, channelId) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline string getData() const { DARABONBA_PTR_GET_DEFAULT(data_, "") };
    inline CommercializeFetchRequest& setData(string data) { DARABONBA_PTR_SET_VALUE(data_, data) };


    // encryptType Field Functions 
    bool hasEncryptType() const { return this->encryptType_ != nullptr;};
    void deleteEncryptType() { this->encryptType_ = nullptr;};
    inline string getEncryptType() const { DARABONBA_PTR_GET_DEFAULT(encryptType_, "") };
    inline CommercializeFetchRequest& setEncryptType(string encryptType) { DARABONBA_PTR_SET_VALUE(encryptType_, encryptType) };


    // env Field Functions 
    bool hasEnv() const { return this->env_ != nullptr;};
    void deleteEnv() { this->env_ = nullptr;};
    inline string getEnv() const { DARABONBA_PTR_GET_DEFAULT(env_, "") };
    inline CommercializeFetchRequest& setEnv(string env) { DARABONBA_PTR_SET_VALUE(env_, env) };


    // productId Field Functions 
    bool hasProductId() const { return this->productId_ != nullptr;};
    void deleteProductId() { this->productId_ = nullptr;};
    inline string getProductId() const { DARABONBA_PTR_GET_DEFAULT(productId_, "") };
    inline CommercializeFetchRequest& setProductId(string productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CommercializeFetchRequest& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // secretKey Field Functions 
    bool hasSecretKey() const { return this->secretKey_ != nullptr;};
    void deleteSecretKey() { this->secretKey_ = nullptr;};
    inline string getSecretKey() const { DARABONBA_PTR_GET_DEFAULT(secretKey_, "") };
    inline CommercializeFetchRequest& setSecretKey(string secretKey) { DARABONBA_PTR_SET_VALUE(secretKey_, secretKey) };


    // sign Field Functions 
    bool hasSign() const { return this->sign_ != nullptr;};
    void deleteSign() { this->sign_ = nullptr;};
    inline string getSign() const { DARABONBA_PTR_GET_DEFAULT(sign_, "") };
    inline CommercializeFetchRequest& setSign(string sign) { DARABONBA_PTR_SET_VALUE(sign_, sign) };


    // signType Field Functions 
    bool hasSignType() const { return this->signType_ != nullptr;};
    void deleteSignType() { this->signType_ = nullptr;};
    inline string getSignType() const { DARABONBA_PTR_GET_DEFAULT(signType_, "") };
    inline CommercializeFetchRequest& setSignType(string signType) { DARABONBA_PTR_SET_VALUE(signType_, signType) };


  protected:
    // This parameter is required.
    shared_ptr<string> channelId_ {};
    // This parameter is required.
    shared_ptr<string> data_ {};
    shared_ptr<string> encryptType_ {};
    shared_ptr<string> env_ {};
    // This parameter is required.
    shared_ptr<string> productId_ {};
    // This parameter is required.
    shared_ptr<string> requestId_ {};
    // This parameter is required.
    shared_ptr<string> secretKey_ {};
    // This parameter is required.
    shared_ptr<string> sign_ {};
    shared_ptr<string> signType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
