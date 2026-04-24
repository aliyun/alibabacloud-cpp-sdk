// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESETAPIKEYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RESETAPIKEYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RdsAi20250507
{
namespace Models
{
  class ResetApiKeyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ResetApiKeyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApiKey, apiKey_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, ResetApiKeyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiKey, apiKey_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    ResetApiKeyRequest() = default ;
    ResetApiKeyRequest(const ResetApiKeyRequest &) = default ;
    ResetApiKeyRequest(ResetApiKeyRequest &&) = default ;
    ResetApiKeyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ResetApiKeyRequest() = default ;
    ResetApiKeyRequest& operator=(const ResetApiKeyRequest &) = default ;
    ResetApiKeyRequest& operator=(ResetApiKeyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiKey_ == nullptr
        && this->instanceId_ == nullptr; };
    // apiKey Field Functions 
    bool hasApiKey() const { return this->apiKey_ != nullptr;};
    void deleteApiKey() { this->apiKey_ = nullptr;};
    inline string getApiKey() const { DARABONBA_PTR_GET_DEFAULT(apiKey_, "") };
    inline ResetApiKeyRequest& setApiKey(string apiKey) { DARABONBA_PTR_SET_VALUE(apiKey_, apiKey) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ResetApiKeyRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    // Api Key
    shared_ptr<string> apiKey_ {};
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RdsAi20250507
#endif
