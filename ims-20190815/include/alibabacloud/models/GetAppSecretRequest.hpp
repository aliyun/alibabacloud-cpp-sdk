// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPPSECRETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETAPPSECRETREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class GetAppSecretRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAppSecretRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AppSecretId, appSecretId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAppSecretRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AppSecretId, appSecretId_);
    };
    GetAppSecretRequest() = default ;
    GetAppSecretRequest(const GetAppSecretRequest &) = default ;
    GetAppSecretRequest(GetAppSecretRequest &&) = default ;
    GetAppSecretRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAppSecretRequest() = default ;
    GetAppSecretRequest& operator=(const GetAppSecretRequest &) = default ;
    GetAppSecretRequest& operator=(GetAppSecretRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr
        && this->appSecretId_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline GetAppSecretRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // appSecretId Field Functions 
    bool hasAppSecretId() const { return this->appSecretId_ != nullptr;};
    void deleteAppSecretId() { this->appSecretId_ = nullptr;};
    inline string appSecretId() const { DARABONBA_PTR_GET_DEFAULT(appSecretId_, "") };
    inline GetAppSecretRequest& setAppSecretId(string appSecretId) { DARABONBA_PTR_SET_VALUE(appSecretId_, appSecretId) };


  protected:
    // The ID of the application.
    // 
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    // The ID of the application secret.
    // 
    // This parameter is required.
    std::shared_ptr<string> appSecretId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
