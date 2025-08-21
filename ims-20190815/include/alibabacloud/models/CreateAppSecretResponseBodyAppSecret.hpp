// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPPSECRETRESPONSEBODYAPPSECRET_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPPSECRETRESPONSEBODYAPPSECRET_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class CreateAppSecretResponseBodyAppSecret : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAppSecretResponseBodyAppSecret& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AppSecretId, appSecretId_);
      DARABONBA_PTR_TO_JSON(AppSecretValue, appSecretValue_);
      DARABONBA_PTR_TO_JSON(CreateDate, createDate_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAppSecretResponseBodyAppSecret& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AppSecretId, appSecretId_);
      DARABONBA_PTR_FROM_JSON(AppSecretValue, appSecretValue_);
      DARABONBA_PTR_FROM_JSON(CreateDate, createDate_);
    };
    CreateAppSecretResponseBodyAppSecret() = default ;
    CreateAppSecretResponseBodyAppSecret(const CreateAppSecretResponseBodyAppSecret &) = default ;
    CreateAppSecretResponseBodyAppSecret(CreateAppSecretResponseBodyAppSecret &&) = default ;
    CreateAppSecretResponseBodyAppSecret(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAppSecretResponseBodyAppSecret() = default ;
    CreateAppSecretResponseBodyAppSecret& operator=(const CreateAppSecretResponseBodyAppSecret &) = default ;
    CreateAppSecretResponseBodyAppSecret& operator=(CreateAppSecretResponseBodyAppSecret &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr
        && this->appSecretId_ != nullptr && this->appSecretValue_ != nullptr && this->createDate_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline CreateAppSecretResponseBodyAppSecret& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // appSecretId Field Functions 
    bool hasAppSecretId() const { return this->appSecretId_ != nullptr;};
    void deleteAppSecretId() { this->appSecretId_ = nullptr;};
    inline string appSecretId() const { DARABONBA_PTR_GET_DEFAULT(appSecretId_, "") };
    inline CreateAppSecretResponseBodyAppSecret& setAppSecretId(string appSecretId) { DARABONBA_PTR_SET_VALUE(appSecretId_, appSecretId) };


    // appSecretValue Field Functions 
    bool hasAppSecretValue() const { return this->appSecretValue_ != nullptr;};
    void deleteAppSecretValue() { this->appSecretValue_ = nullptr;};
    inline string appSecretValue() const { DARABONBA_PTR_GET_DEFAULT(appSecretValue_, "") };
    inline CreateAppSecretResponseBodyAppSecret& setAppSecretValue(string appSecretValue) { DARABONBA_PTR_SET_VALUE(appSecretValue_, appSecretValue) };


    // createDate Field Functions 
    bool hasCreateDate() const { return this->createDate_ != nullptr;};
    void deleteCreateDate() { this->createDate_ = nullptr;};
    inline string createDate() const { DARABONBA_PTR_GET_DEFAULT(createDate_, "") };
    inline CreateAppSecretResponseBodyAppSecret& setCreateDate(string createDate) { DARABONBA_PTR_SET_VALUE(createDate_, createDate) };


  protected:
    // The ID of the application.
    std::shared_ptr<string> appId_ = nullptr;
    // The ID of the application secret.
    std::shared_ptr<string> appSecretId_ = nullptr;
    // The content of the application secret. This value can be used as the client secret for open authorization (OAuth).
    std::shared_ptr<string> appSecretValue_ = nullptr;
    // The creation time.
    std::shared_ptr<string> createDate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
