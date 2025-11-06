// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FETCHSTATICACCOUNTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_FETCHSTATICACCOUNTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Amqp20190901
{
namespace Models
{
  class FetchStaticAccountRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FetchStaticAccountRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccountAccessKey, accountAccessKey_);
      DARABONBA_PTR_TO_JSON(ConsoleSessionId, consoleSessionId_);
      DARABONBA_PTR_TO_JSON(CreateTimeStamp, createTimeStamp_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(SKey, SKey_);
      DARABONBA_PTR_TO_JSON(SecretSign, secretSign_);
      DARABONBA_PTR_TO_JSON(UserName, userName_);
    };
    friend void from_json(const Darabonba::Json& j, FetchStaticAccountRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountAccessKey, accountAccessKey_);
      DARABONBA_PTR_FROM_JSON(ConsoleSessionId, consoleSessionId_);
      DARABONBA_PTR_FROM_JSON(CreateTimeStamp, createTimeStamp_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(SKey, SKey_);
      DARABONBA_PTR_FROM_JSON(SecretSign, secretSign_);
      DARABONBA_PTR_FROM_JSON(UserName, userName_);
    };
    FetchStaticAccountRequest() = default ;
    FetchStaticAccountRequest(const FetchStaticAccountRequest &) = default ;
    FetchStaticAccountRequest(FetchStaticAccountRequest &&) = default ;
    FetchStaticAccountRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FetchStaticAccountRequest() = default ;
    FetchStaticAccountRequest& operator=(const FetchStaticAccountRequest &) = default ;
    FetchStaticAccountRequest& operator=(FetchStaticAccountRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountAccessKey_ == nullptr
        && return this->consoleSessionId_ == nullptr && return this->createTimeStamp_ == nullptr && return this->instanceId_ == nullptr && return this->remark_ == nullptr && return this->SKey_ == nullptr
        && return this->secretSign_ == nullptr && return this->userName_ == nullptr; };
    // accountAccessKey Field Functions 
    bool hasAccountAccessKey() const { return this->accountAccessKey_ != nullptr;};
    void deleteAccountAccessKey() { this->accountAccessKey_ = nullptr;};
    inline string accountAccessKey() const { DARABONBA_PTR_GET_DEFAULT(accountAccessKey_, "") };
    inline FetchStaticAccountRequest& setAccountAccessKey(string accountAccessKey) { DARABONBA_PTR_SET_VALUE(accountAccessKey_, accountAccessKey) };


    // consoleSessionId Field Functions 
    bool hasConsoleSessionId() const { return this->consoleSessionId_ != nullptr;};
    void deleteConsoleSessionId() { this->consoleSessionId_ = nullptr;};
    inline string consoleSessionId() const { DARABONBA_PTR_GET_DEFAULT(consoleSessionId_, "") };
    inline FetchStaticAccountRequest& setConsoleSessionId(string consoleSessionId) { DARABONBA_PTR_SET_VALUE(consoleSessionId_, consoleSessionId) };


    // createTimeStamp Field Functions 
    bool hasCreateTimeStamp() const { return this->createTimeStamp_ != nullptr;};
    void deleteCreateTimeStamp() { this->createTimeStamp_ = nullptr;};
    inline int64_t createTimeStamp() const { DARABONBA_PTR_GET_DEFAULT(createTimeStamp_, 0L) };
    inline FetchStaticAccountRequest& setCreateTimeStamp(int64_t createTimeStamp) { DARABONBA_PTR_SET_VALUE(createTimeStamp_, createTimeStamp) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline FetchStaticAccountRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline FetchStaticAccountRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // SKey Field Functions 
    bool hasSKey() const { return this->SKey_ != nullptr;};
    void deleteSKey() { this->SKey_ = nullptr;};
    inline string SKey() const { DARABONBA_PTR_GET_DEFAULT(SKey_, "") };
    inline FetchStaticAccountRequest& setSKey(string SKey) { DARABONBA_PTR_SET_VALUE(SKey_, SKey) };


    // secretSign Field Functions 
    bool hasSecretSign() const { return this->secretSign_ != nullptr;};
    void deleteSecretSign() { this->secretSign_ = nullptr;};
    inline string secretSign() const { DARABONBA_PTR_GET_DEFAULT(secretSign_, "") };
    inline FetchStaticAccountRequest& setSecretSign(string secretSign) { DARABONBA_PTR_SET_VALUE(secretSign_, secretSign) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string userName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline FetchStaticAccountRequest& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> accountAccessKey_ = nullptr;
    std::shared_ptr<string> consoleSessionId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> createTimeStamp_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> remark_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> SKey_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> secretSign_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> userName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Amqp20190901
#endif
