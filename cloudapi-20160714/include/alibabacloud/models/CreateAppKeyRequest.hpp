// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPPKEYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPPKEYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class CreateAppKeyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAppKeyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AppKey, appKey_);
      DARABONBA_PTR_TO_JSON(AppSecret, appSecret_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAppKeyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AppKey, appKey_);
      DARABONBA_PTR_FROM_JSON(AppSecret, appSecret_);
    };
    CreateAppKeyRequest() = default ;
    CreateAppKeyRequest(const CreateAppKeyRequest &) = default ;
    CreateAppKeyRequest(CreateAppKeyRequest &&) = default ;
    CreateAppKeyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAppKeyRequest() = default ;
    CreateAppKeyRequest& operator=(const CreateAppKeyRequest &) = default ;
    CreateAppKeyRequest& operator=(CreateAppKeyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->appKey_ == nullptr && return this->appSecret_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline CreateAppKeyRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // appKey Field Functions 
    bool hasAppKey() const { return this->appKey_ != nullptr;};
    void deleteAppKey() { this->appKey_ = nullptr;};
    inline string appKey() const { DARABONBA_PTR_GET_DEFAULT(appKey_, "") };
    inline CreateAppKeyRequest& setAppKey(string appKey) { DARABONBA_PTR_SET_VALUE(appKey_, appKey) };


    // appSecret Field Functions 
    bool hasAppSecret() const { return this->appSecret_ != nullptr;};
    void deleteAppSecret() { this->appSecret_ = nullptr;};
    inline string appSecret() const { DARABONBA_PTR_GET_DEFAULT(appSecret_, "") };
    inline CreateAppKeyRequest& setAppSecret(string appSecret) { DARABONBA_PTR_SET_VALUE(appSecret_, appSecret) };


  protected:
    // The application ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    // The application AppKey.
    std::shared_ptr<string> appKey_ = nullptr;
    // The application AppSecret.
    std::shared_ptr<string> appSecret_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
