// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPHONENUMBERANALYSISAIREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPHONENUMBERANALYSISAIREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dytnsapi20200217
{
namespace Models
{
  class DescribePhoneNumberAnalysisAIRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePhoneNumberAnalysisAIRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AuthCode, authCode_);
      DARABONBA_PTR_TO_JSON(InputNumber, inputNumber_);
      DARABONBA_PTR_TO_JSON(ModelConfig, modelConfig_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(Rate, rate_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePhoneNumberAnalysisAIRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthCode, authCode_);
      DARABONBA_PTR_FROM_JSON(InputNumber, inputNumber_);
      DARABONBA_PTR_FROM_JSON(ModelConfig, modelConfig_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(Rate, rate_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    DescribePhoneNumberAnalysisAIRequest() = default ;
    DescribePhoneNumberAnalysisAIRequest(const DescribePhoneNumberAnalysisAIRequest &) = default ;
    DescribePhoneNumberAnalysisAIRequest(DescribePhoneNumberAnalysisAIRequest &&) = default ;
    DescribePhoneNumberAnalysisAIRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePhoneNumberAnalysisAIRequest() = default ;
    DescribePhoneNumberAnalysisAIRequest& operator=(const DescribePhoneNumberAnalysisAIRequest &) = default ;
    DescribePhoneNumberAnalysisAIRequest& operator=(DescribePhoneNumberAnalysisAIRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authCode_ == nullptr
        && this->inputNumber_ == nullptr && this->modelConfig_ == nullptr && this->ownerId_ == nullptr && this->rate_ == nullptr && this->resourceOwnerAccount_ == nullptr
        && this->resourceOwnerId_ == nullptr; };
    // authCode Field Functions 
    bool hasAuthCode() const { return this->authCode_ != nullptr;};
    void deleteAuthCode() { this->authCode_ = nullptr;};
    inline string getAuthCode() const { DARABONBA_PTR_GET_DEFAULT(authCode_, "") };
    inline DescribePhoneNumberAnalysisAIRequest& setAuthCode(string authCode) { DARABONBA_PTR_SET_VALUE(authCode_, authCode) };


    // inputNumber Field Functions 
    bool hasInputNumber() const { return this->inputNumber_ != nullptr;};
    void deleteInputNumber() { this->inputNumber_ = nullptr;};
    inline string getInputNumber() const { DARABONBA_PTR_GET_DEFAULT(inputNumber_, "") };
    inline DescribePhoneNumberAnalysisAIRequest& setInputNumber(string inputNumber) { DARABONBA_PTR_SET_VALUE(inputNumber_, inputNumber) };


    // modelConfig Field Functions 
    bool hasModelConfig() const { return this->modelConfig_ != nullptr;};
    void deleteModelConfig() { this->modelConfig_ = nullptr;};
    inline string getModelConfig() const { DARABONBA_PTR_GET_DEFAULT(modelConfig_, "") };
    inline DescribePhoneNumberAnalysisAIRequest& setModelConfig(string modelConfig) { DARABONBA_PTR_SET_VALUE(modelConfig_, modelConfig) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribePhoneNumberAnalysisAIRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // rate Field Functions 
    bool hasRate() const { return this->rate_ != nullptr;};
    void deleteRate() { this->rate_ = nullptr;};
    inline int64_t getRate() const { DARABONBA_PTR_GET_DEFAULT(rate_, 0L) };
    inline DescribePhoneNumberAnalysisAIRequest& setRate(int64_t rate) { DARABONBA_PTR_SET_VALUE(rate_, rate) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline DescribePhoneNumberAnalysisAIRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline DescribePhoneNumberAnalysisAIRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // The authorization code.
    // 
    // >  On the ****[**Labels**](https://dytns.console.aliyun.com/analysis/square) page, find the label that you want to use, click Activate Now, enter the required information, and then submit your application. After your application is approved, you can obtain an authorization code.
    // 
    // This parameter is required.
    shared_ptr<string> authCode_ {};
    // The phone number to be queried.
    // 
    // This parameter is required.
    shared_ptr<string> inputNumber_ {};
    // The model parameter configuration. This field is required by some labels.
    shared_ptr<string> modelConfig_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The score threshold for the phone number. Valid values: **0 to 100**.
    // 
    // >  The system provided by Alibaba Cloud determines whether to accept the specified score threshold. When the system does not accept the specified score threshold, the value of this field is invalid.
    shared_ptr<int64_t> rate_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dytnsapi20200217
#endif
