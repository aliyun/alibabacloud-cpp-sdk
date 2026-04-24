// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAPIKEYQUOTAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAPIKEYQUOTAREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RdsAi20250507
{
namespace Models
{
  class UpdateApiKeyQuotaRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateApiKeyQuotaRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Keys, keys_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateApiKeyQuotaRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Keys, keys_);
    };
    UpdateApiKeyQuotaRequest() = default ;
    UpdateApiKeyQuotaRequest(const UpdateApiKeyQuotaRequest &) = default ;
    UpdateApiKeyQuotaRequest(UpdateApiKeyQuotaRequest &&) = default ;
    UpdateApiKeyQuotaRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateApiKeyQuotaRequest() = default ;
    UpdateApiKeyQuotaRequest& operator=(const UpdateApiKeyQuotaRequest &) = default ;
    UpdateApiKeyQuotaRequest& operator=(UpdateApiKeyQuotaRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Keys : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Keys& obj) { 
        DARABONBA_PTR_TO_JSON(ApiKey, apiKey_);
        DARABONBA_PTR_TO_JSON(LimitRate, limitRate_);
        DARABONBA_PTR_TO_JSON(LimitType, limitType_);
        DARABONBA_PTR_TO_JSON(TokenQuota, tokenQuota_);
      };
      friend void from_json(const Darabonba::Json& j, Keys& obj) { 
        DARABONBA_PTR_FROM_JSON(ApiKey, apiKey_);
        DARABONBA_PTR_FROM_JSON(LimitRate, limitRate_);
        DARABONBA_PTR_FROM_JSON(LimitType, limitType_);
        DARABONBA_PTR_FROM_JSON(TokenQuota, tokenQuota_);
      };
      Keys() = default ;
      Keys(const Keys &) = default ;
      Keys(Keys &&) = default ;
      Keys(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Keys() = default ;
      Keys& operator=(const Keys &) = default ;
      Keys& operator=(Keys &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->apiKey_ == nullptr
        && this->limitRate_ == nullptr && this->limitType_ == nullptr && this->tokenQuota_ == nullptr; };
      // apiKey Field Functions 
      bool hasApiKey() const { return this->apiKey_ != nullptr;};
      void deleteApiKey() { this->apiKey_ = nullptr;};
      inline string getApiKey() const { DARABONBA_PTR_GET_DEFAULT(apiKey_, "") };
      inline Keys& setApiKey(string apiKey) { DARABONBA_PTR_SET_VALUE(apiKey_, apiKey) };


      // limitRate Field Functions 
      bool hasLimitRate() const { return this->limitRate_ != nullptr;};
      void deleteLimitRate() { this->limitRate_ = nullptr;};
      inline double getLimitRate() const { DARABONBA_PTR_GET_DEFAULT(limitRate_, 0.0) };
      inline Keys& setLimitRate(double limitRate) { DARABONBA_PTR_SET_VALUE(limitRate_, limitRate) };


      // limitType Field Functions 
      bool hasLimitType() const { return this->limitType_ != nullptr;};
      void deleteLimitType() { this->limitType_ = nullptr;};
      inline string getLimitType() const { DARABONBA_PTR_GET_DEFAULT(limitType_, "") };
      inline Keys& setLimitType(string limitType) { DARABONBA_PTR_SET_VALUE(limitType_, limitType) };


      // tokenQuota Field Functions 
      bool hasTokenQuota() const { return this->tokenQuota_ != nullptr;};
      void deleteTokenQuota() { this->tokenQuota_ = nullptr;};
      inline int64_t getTokenQuota() const { DARABONBA_PTR_GET_DEFAULT(tokenQuota_, 0L) };
      inline Keys& setTokenQuota(int64_t tokenQuota) { DARABONBA_PTR_SET_VALUE(tokenQuota_, tokenQuota) };


    protected:
      // API KEY
      shared_ptr<string> apiKey_ {};
      shared_ptr<double> limitRate_ {};
      shared_ptr<string> limitType_ {};
      shared_ptr<int64_t> tokenQuota_ {};
    };

    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->keys_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpdateApiKeyQuotaRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // keys Field Functions 
    bool hasKeys() const { return this->keys_ != nullptr;};
    void deleteKeys() { this->keys_ = nullptr;};
    inline const vector<UpdateApiKeyQuotaRequest::Keys> & getKeys() const { DARABONBA_PTR_GET_CONST(keys_, vector<UpdateApiKeyQuotaRequest::Keys>) };
    inline vector<UpdateApiKeyQuotaRequest::Keys> getKeys() { DARABONBA_PTR_GET(keys_, vector<UpdateApiKeyQuotaRequest::Keys>) };
    inline UpdateApiKeyQuotaRequest& setKeys(const vector<UpdateApiKeyQuotaRequest::Keys> & keys) { DARABONBA_PTR_SET_VALUE(keys_, keys) };
    inline UpdateApiKeyQuotaRequest& setKeys(vector<UpdateApiKeyQuotaRequest::Keys> && keys) { DARABONBA_PTR_SET_RVALUE(keys_, keys) };


  protected:
    shared_ptr<string> instanceId_ {};
    shared_ptr<vector<UpdateApiKeyQuotaRequest::Keys>> keys_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RdsAi20250507
#endif
