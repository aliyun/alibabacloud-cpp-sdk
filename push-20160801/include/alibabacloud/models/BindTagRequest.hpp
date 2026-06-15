// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BINDTAGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BINDTAGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Push20160801
{
namespace Models
{
  class BindTagRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BindTagRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppKey, appKey_);
      DARABONBA_PTR_TO_JSON(ClientKey, clientKey_);
      DARABONBA_PTR_TO_JSON(KeyType, keyType_);
      DARABONBA_PTR_TO_JSON(TagName, tagName_);
    };
    friend void from_json(const Darabonba::Json& j, BindTagRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppKey, appKey_);
      DARABONBA_PTR_FROM_JSON(ClientKey, clientKey_);
      DARABONBA_PTR_FROM_JSON(KeyType, keyType_);
      DARABONBA_PTR_FROM_JSON(TagName, tagName_);
    };
    BindTagRequest() = default ;
    BindTagRequest(const BindTagRequest &) = default ;
    BindTagRequest(BindTagRequest &&) = default ;
    BindTagRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BindTagRequest() = default ;
    BindTagRequest& operator=(const BindTagRequest &) = default ;
    BindTagRequest& operator=(BindTagRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appKey_ == nullptr
        && this->clientKey_ == nullptr && this->keyType_ == nullptr && this->tagName_ == nullptr; };
    // appKey Field Functions 
    bool hasAppKey() const { return this->appKey_ != nullptr;};
    void deleteAppKey() { this->appKey_ = nullptr;};
    inline int64_t getAppKey() const { DARABONBA_PTR_GET_DEFAULT(appKey_, 0L) };
    inline BindTagRequest& setAppKey(int64_t appKey) { DARABONBA_PTR_SET_VALUE(appKey_, appKey) };


    // clientKey Field Functions 
    bool hasClientKey() const { return this->clientKey_ != nullptr;};
    void deleteClientKey() { this->clientKey_ = nullptr;};
    inline string getClientKey() const { DARABONBA_PTR_GET_DEFAULT(clientKey_, "") };
    inline BindTagRequest& setClientKey(string clientKey) { DARABONBA_PTR_SET_VALUE(clientKey_, clientKey) };


    // keyType Field Functions 
    bool hasKeyType() const { return this->keyType_ != nullptr;};
    void deleteKeyType() { this->keyType_ = nullptr;};
    inline string getKeyType() const { DARABONBA_PTR_GET_DEFAULT(keyType_, "") };
    inline BindTagRequest& setKeyType(string keyType) { DARABONBA_PTR_SET_VALUE(keyType_, keyType) };


    // tagName Field Functions 
    bool hasTagName() const { return this->tagName_ != nullptr;};
    void deleteTagName() { this->tagName_ = nullptr;};
    inline string getTagName() const { DARABONBA_PTR_GET_DEFAULT(tagName_, "") };
    inline BindTagRequest& setTagName(string tagName) { DARABONBA_PTR_SET_VALUE(tagName_, tagName) };


  protected:
    // The AppKey of your application.
    // 
    // This parameter is required.
    shared_ptr<int64_t> appKey_ {};
    // The ID of the target device. You can specify a maximum of 1,000 device IDs.
    // 
    // This parameter is required.
    shared_ptr<string> clientKey_ {};
    // The type of the `ClientKey`. Valid value:
    // 
    // - **DEVICE**: Indicates a device target.
    // 
    // This parameter is required.
    shared_ptr<string> keyType_ {};
    // The tags to bind. Separate multiple tags with commas (,). You can bind up to 10 tags per request.
    // A tag name can be up to 128 characters long (each Chinese character counts as 1 character). Each application can have up to 10,000 tags. A single device can be bound to multiple tags.
    // 
    // >Notice: 
    // 
    // Do not bind a single tag to more than 100,000 devices. This practice can increase push processing time and increase response time.
    // 
    // - Use the full push feature to send notifications to all devices.
    // 
    // - Split the device set into multiple fine-grained tags and call the push API in batches.
    // 
    // 
    // 
    // > - If you attempt to bind the same tag multiple times, the system automatically removes the duplicates.
    // >
    // > - When a user uninstalls the application from a device, the tags associated with that device are automatically unbound. This unbinding process may be slightly delayed.
    // 
    // This parameter is required.
    shared_ptr<string> tagName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Push20160801
#endif
