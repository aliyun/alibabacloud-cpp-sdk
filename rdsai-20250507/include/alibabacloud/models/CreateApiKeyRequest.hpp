// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPIKEYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPIKEYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RdsAi20250507
{
namespace Models
{
  class CreateApiKeyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateApiKeyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(KeyName, keyName_);
      DARABONBA_PTR_TO_JSON(LimitRate, limitRate_);
      DARABONBA_PTR_TO_JSON(LimitType, limitType_);
      DARABONBA_PTR_TO_JSON(Quantity, quantity_);
      DARABONBA_PTR_TO_JSON(TokenQuota, tokenQuota_);
    };
    friend void from_json(const Darabonba::Json& j, CreateApiKeyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(KeyName, keyName_);
      DARABONBA_PTR_FROM_JSON(LimitRate, limitRate_);
      DARABONBA_PTR_FROM_JSON(LimitType, limitType_);
      DARABONBA_PTR_FROM_JSON(Quantity, quantity_);
      DARABONBA_PTR_FROM_JSON(TokenQuota, tokenQuota_);
    };
    CreateApiKeyRequest() = default ;
    CreateApiKeyRequest(const CreateApiKeyRequest &) = default ;
    CreateApiKeyRequest(CreateApiKeyRequest &&) = default ;
    CreateApiKeyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateApiKeyRequest() = default ;
    CreateApiKeyRequest& operator=(const CreateApiKeyRequest &) = default ;
    CreateApiKeyRequest& operator=(CreateApiKeyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->keyName_ == nullptr && this->limitRate_ == nullptr && this->limitType_ == nullptr && this->quantity_ == nullptr && this->tokenQuota_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateApiKeyRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // keyName Field Functions 
    bool hasKeyName() const { return this->keyName_ != nullptr;};
    void deleteKeyName() { this->keyName_ = nullptr;};
    inline string getKeyName() const { DARABONBA_PTR_GET_DEFAULT(keyName_, "") };
    inline CreateApiKeyRequest& setKeyName(string keyName) { DARABONBA_PTR_SET_VALUE(keyName_, keyName) };


    // limitRate Field Functions 
    bool hasLimitRate() const { return this->limitRate_ != nullptr;};
    void deleteLimitRate() { this->limitRate_ = nullptr;};
    inline double getLimitRate() const { DARABONBA_PTR_GET_DEFAULT(limitRate_, 0.0) };
    inline CreateApiKeyRequest& setLimitRate(double limitRate) { DARABONBA_PTR_SET_VALUE(limitRate_, limitRate) };


    // limitType Field Functions 
    bool hasLimitType() const { return this->limitType_ != nullptr;};
    void deleteLimitType() { this->limitType_ = nullptr;};
    inline string getLimitType() const { DARABONBA_PTR_GET_DEFAULT(limitType_, "") };
    inline CreateApiKeyRequest& setLimitType(string limitType) { DARABONBA_PTR_SET_VALUE(limitType_, limitType) };


    // quantity Field Functions 
    bool hasQuantity() const { return this->quantity_ != nullptr;};
    void deleteQuantity() { this->quantity_ = nullptr;};
    inline int32_t getQuantity() const { DARABONBA_PTR_GET_DEFAULT(quantity_, 0) };
    inline CreateApiKeyRequest& setQuantity(int32_t quantity) { DARABONBA_PTR_SET_VALUE(quantity_, quantity) };


    // tokenQuota Field Functions 
    bool hasTokenQuota() const { return this->tokenQuota_ != nullptr;};
    void deleteTokenQuota() { this->tokenQuota_ = nullptr;};
    inline int64_t getTokenQuota() const { DARABONBA_PTR_GET_DEFAULT(tokenQuota_, 0L) };
    inline CreateApiKeyRequest& setTokenQuota(int64_t tokenQuota) { DARABONBA_PTR_SET_VALUE(tokenQuota_, tokenQuota) };


  protected:
    shared_ptr<string> instanceId_ {};
    shared_ptr<string> keyName_ {};
    shared_ptr<double> limitRate_ {};
    shared_ptr<string> limitType_ {};
    shared_ptr<int32_t> quantity_ {};
    shared_ptr<int64_t> tokenQuota_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RdsAi20250507
#endif
