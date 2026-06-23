// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEACCOUNTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEACCOUNTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AmqpOpen20191212
{
namespace Models
{
  class CreateAccountRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAccountRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(accountAccessKey, accountAccessKey_);
      DARABONBA_PTR_TO_JSON(createTimestamp, createTimestamp_);
      DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(secretSign, secretSign_);
      DARABONBA_PTR_TO_JSON(signature, signature_);
      DARABONBA_PTR_TO_JSON(userName, userName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAccountRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(accountAccessKey, accountAccessKey_);
      DARABONBA_PTR_FROM_JSON(createTimestamp, createTimestamp_);
      DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(secretSign, secretSign_);
      DARABONBA_PTR_FROM_JSON(signature, signature_);
      DARABONBA_PTR_FROM_JSON(userName, userName_);
    };
    CreateAccountRequest() = default ;
    CreateAccountRequest(const CreateAccountRequest &) = default ;
    CreateAccountRequest(CreateAccountRequest &&) = default ;
    CreateAccountRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAccountRequest() = default ;
    CreateAccountRequest& operator=(const CreateAccountRequest &) = default ;
    CreateAccountRequest& operator=(CreateAccountRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->remark_ == nullptr
        && this->accountAccessKey_ == nullptr && this->createTimestamp_ == nullptr && this->instanceId_ == nullptr && this->secretSign_ == nullptr && this->signature_ == nullptr
        && this->userName_ == nullptr; };
    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline CreateAccountRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // accountAccessKey Field Functions 
    bool hasAccountAccessKey() const { return this->accountAccessKey_ != nullptr;};
    void deleteAccountAccessKey() { this->accountAccessKey_ = nullptr;};
    inline string getAccountAccessKey() const { DARABONBA_PTR_GET_DEFAULT(accountAccessKey_, "") };
    inline CreateAccountRequest& setAccountAccessKey(string accountAccessKey) { DARABONBA_PTR_SET_VALUE(accountAccessKey_, accountAccessKey) };


    // createTimestamp Field Functions 
    bool hasCreateTimestamp() const { return this->createTimestamp_ != nullptr;};
    void deleteCreateTimestamp() { this->createTimestamp_ = nullptr;};
    inline int64_t getCreateTimestamp() const { DARABONBA_PTR_GET_DEFAULT(createTimestamp_, 0L) };
    inline CreateAccountRequest& setCreateTimestamp(int64_t createTimestamp) { DARABONBA_PTR_SET_VALUE(createTimestamp_, createTimestamp) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateAccountRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // secretSign Field Functions 
    bool hasSecretSign() const { return this->secretSign_ != nullptr;};
    void deleteSecretSign() { this->secretSign_ = nullptr;};
    inline string getSecretSign() const { DARABONBA_PTR_GET_DEFAULT(secretSign_, "") };
    inline CreateAccountRequest& setSecretSign(string secretSign) { DARABONBA_PTR_SET_VALUE(secretSign_, secretSign) };


    // signature Field Functions 
    bool hasSignature() const { return this->signature_ != nullptr;};
    void deleteSignature() { this->signature_ = nullptr;};
    inline string getSignature() const { DARABONBA_PTR_GET_DEFAULT(signature_, "") };
    inline CreateAccountRequest& setSignature(string signature) { DARABONBA_PTR_SET_VALUE(signature_, signature) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline CreateAccountRequest& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


  protected:
    // The remarks on the static user.
    shared_ptr<string> remark_ {};
    // The AccessKey ID of your Alibaba Cloud account or RAM user. For more information about how to obtain an AccessKey ID, see [Create an AccessKey](https://help.aliyun.com/document_detail/116401.html).
    // 
    // > If you use the AccessKey of a RAM user to create a static username and password to access ApsaraMQ for RabbitMQ and to send and receive messages, make sure that the RAM user is granted the required permissions. For more information, see [RAM access policies](https://help.aliyun.com/document_detail/146559.html).
    // 
    // This parameter is required.
    shared_ptr<string> accountAccessKey_ {};
    // The timestamp that indicates when the username and password are created. Unit: milliseconds.
    // 
    // > This timestamp is used to calculate the static password. You can customize this value. This is not the timestamp that the system generates when the username and password are created.
    // 
    // This parameter is required.
    shared_ptr<int64_t> createTimestamp_ {};
    // The ID of the ApsaraMQ for RabbitMQ instance. This specifies the instance for which you want to create a static username and password.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The signature of the AccessKey secret. The system calculates the static password based on the signature, the AccessKey secret signature, and the username.
    // 
    // The AccessKey secret signature is calculated using the HmacSHA1 algorithm on the creation timestamp of the specified username and the AccessKey ID. For more information about how to calculate the signature, see the **Signature algorithm sample code** section in this topic.
    // 
    // This parameter is required.
    shared_ptr<string> secretSign_ {};
    // The signature. The system calculates the static password based on the signature, the AccessKey secret signature, and the username.
    // 
    // The signature is calculated using the HmacSHA1 algorithm on the creation timestamp of the specified username and the AccessKey ID. For more information about how to calculate the signature, see the **Signature algorithm sample code** section in this topic.
    // 
    // This parameter is required.
    shared_ptr<string> signature_ {};
    // The static username that you want to create.
    // 
    // The value of this parameter is a Base64-encoded string that is constructed from the instance ID and the AccessKey ID. For more information about how to calculate the value, see the **Username calculation sample code** section in this topic.
    // 
    // This parameter is required.
    shared_ptr<string> userName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AmqpOpen20191212
#endif
