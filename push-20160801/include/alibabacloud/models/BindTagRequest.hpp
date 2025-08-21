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
    virtual bool empty() const override { this->appKey_ != nullptr
        && this->clientKey_ != nullptr && this->keyType_ != nullptr && this->tagName_ != nullptr; };
    // appKey Field Functions 
    bool hasAppKey() const { return this->appKey_ != nullptr;};
    void deleteAppKey() { this->appKey_ = nullptr;};
    inline int64_t appKey() const { DARABONBA_PTR_GET_DEFAULT(appKey_, 0L) };
    inline BindTagRequest& setAppKey(int64_t appKey) { DARABONBA_PTR_SET_VALUE(appKey_, appKey) };


    // clientKey Field Functions 
    bool hasClientKey() const { return this->clientKey_ != nullptr;};
    void deleteClientKey() { this->clientKey_ = nullptr;};
    inline string clientKey() const { DARABONBA_PTR_GET_DEFAULT(clientKey_, "") };
    inline BindTagRequest& setClientKey(string clientKey) { DARABONBA_PTR_SET_VALUE(clientKey_, clientKey) };


    // keyType Field Functions 
    bool hasKeyType() const { return this->keyType_ != nullptr;};
    void deleteKeyType() { this->keyType_ = nullptr;};
    inline string keyType() const { DARABONBA_PTR_GET_DEFAULT(keyType_, "") };
    inline BindTagRequest& setKeyType(string keyType) { DARABONBA_PTR_SET_VALUE(keyType_, keyType) };


    // tagName Field Functions 
    bool hasTagName() const { return this->tagName_ != nullptr;};
    void deleteTagName() { this->tagName_ = nullptr;};
    inline string tagName() const { DARABONBA_PTR_GET_DEFAULT(tagName_, "") };
    inline BindTagRequest& setTagName(string tagName) { DARABONBA_PTR_SET_VALUE(tagName_, tagName) };


  protected:
    // This parameter is required.
    std::shared_ptr<int64_t> appKey_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> clientKey_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> keyType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> tagName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Push20160801
#endif
