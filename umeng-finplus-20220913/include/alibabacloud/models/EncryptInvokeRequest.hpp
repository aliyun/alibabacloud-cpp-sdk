// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENCRYPTINVOKEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ENCRYPTINVOKEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace UmengFinplus20220913
{
namespace Models
{
  class EncryptInvokeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EncryptInvokeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(clientId, clientId_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(encryptKey, encryptKey_);
      DARABONBA_PTR_TO_JSON(methodName, methodName_);
      DARABONBA_PTR_TO_JSON(sign, sign_);
    };
    friend void from_json(const Darabonba::Json& j, EncryptInvokeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(clientId, clientId_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(encryptKey, encryptKey_);
      DARABONBA_PTR_FROM_JSON(methodName, methodName_);
      DARABONBA_PTR_FROM_JSON(sign, sign_);
    };
    EncryptInvokeRequest() = default ;
    EncryptInvokeRequest(const EncryptInvokeRequest &) = default ;
    EncryptInvokeRequest(EncryptInvokeRequest &&) = default ;
    EncryptInvokeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EncryptInvokeRequest() = default ;
    EncryptInvokeRequest& operator=(const EncryptInvokeRequest &) = default ;
    EncryptInvokeRequest& operator=(EncryptInvokeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientId_ == nullptr
        && this->data_ == nullptr && this->encryptKey_ == nullptr && this->methodName_ == nullptr && this->sign_ == nullptr; };
    // clientId Field Functions 
    bool hasClientId() const { return this->clientId_ != nullptr;};
    void deleteClientId() { this->clientId_ = nullptr;};
    inline int64_t getClientId() const { DARABONBA_PTR_GET_DEFAULT(clientId_, 0L) };
    inline EncryptInvokeRequest& setClientId(int64_t clientId) { DARABONBA_PTR_SET_VALUE(clientId_, clientId) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline string getData() const { DARABONBA_PTR_GET_DEFAULT(data_, "") };
    inline EncryptInvokeRequest& setData(string data) { DARABONBA_PTR_SET_VALUE(data_, data) };


    // encryptKey Field Functions 
    bool hasEncryptKey() const { return this->encryptKey_ != nullptr;};
    void deleteEncryptKey() { this->encryptKey_ = nullptr;};
    inline string getEncryptKey() const { DARABONBA_PTR_GET_DEFAULT(encryptKey_, "") };
    inline EncryptInvokeRequest& setEncryptKey(string encryptKey) { DARABONBA_PTR_SET_VALUE(encryptKey_, encryptKey) };


    // methodName Field Functions 
    bool hasMethodName() const { return this->methodName_ != nullptr;};
    void deleteMethodName() { this->methodName_ = nullptr;};
    inline string getMethodName() const { DARABONBA_PTR_GET_DEFAULT(methodName_, "") };
    inline EncryptInvokeRequest& setMethodName(string methodName) { DARABONBA_PTR_SET_VALUE(methodName_, methodName) };


    // sign Field Functions 
    bool hasSign() const { return this->sign_ != nullptr;};
    void deleteSign() { this->sign_ = nullptr;};
    inline string getSign() const { DARABONBA_PTR_GET_DEFAULT(sign_, "") };
    inline EncryptInvokeRequest& setSign(string sign) { DARABONBA_PTR_SET_VALUE(sign_, sign) };


  protected:
    shared_ptr<int64_t> clientId_ {};
    shared_ptr<string> data_ {};
    shared_ptr<string> encryptKey_ {};
    shared_ptr<string> methodName_ {};
    shared_ptr<string> sign_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace UmengFinplus20220913
#endif
