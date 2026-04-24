// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RENAMEAPIKEYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RENAMEAPIKEYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RdsAi20250507
{
namespace Models
{
  class RenameApiKeyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RenameApiKeyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApiKey, apiKey_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(KeyName, keyName_);
    };
    friend void from_json(const Darabonba::Json& j, RenameApiKeyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiKey, apiKey_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(KeyName, keyName_);
    };
    RenameApiKeyRequest() = default ;
    RenameApiKeyRequest(const RenameApiKeyRequest &) = default ;
    RenameApiKeyRequest(RenameApiKeyRequest &&) = default ;
    RenameApiKeyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RenameApiKeyRequest() = default ;
    RenameApiKeyRequest& operator=(const RenameApiKeyRequest &) = default ;
    RenameApiKeyRequest& operator=(RenameApiKeyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiKey_ == nullptr
        && this->instanceId_ == nullptr && this->keyName_ == nullptr; };
    // apiKey Field Functions 
    bool hasApiKey() const { return this->apiKey_ != nullptr;};
    void deleteApiKey() { this->apiKey_ = nullptr;};
    inline string getApiKey() const { DARABONBA_PTR_GET_DEFAULT(apiKey_, "") };
    inline RenameApiKeyRequest& setApiKey(string apiKey) { DARABONBA_PTR_SET_VALUE(apiKey_, apiKey) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline RenameApiKeyRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // keyName Field Functions 
    bool hasKeyName() const { return this->keyName_ != nullptr;};
    void deleteKeyName() { this->keyName_ = nullptr;};
    inline string getKeyName() const { DARABONBA_PTR_GET_DEFAULT(keyName_, "") };
    inline RenameApiKeyRequest& setKeyName(string keyName) { DARABONBA_PTR_SET_VALUE(keyName_, keyName) };


  protected:
    // API KEY
    // 
    // This parameter is required.
    shared_ptr<string> apiKey_ {};
    shared_ptr<string> instanceId_ {};
    // This parameter is required.
    shared_ptr<string> keyName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RdsAi20250507
#endif
