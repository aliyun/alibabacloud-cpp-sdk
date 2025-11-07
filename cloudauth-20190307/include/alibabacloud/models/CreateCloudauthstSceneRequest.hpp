// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECLOUDAUTHSTSCENEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECLOUDAUTHSTSCENEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class CreateCloudauthstSceneRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCloudauthstSceneRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(SceneName, sceneName_);
      DARABONBA_PTR_TO_JSON(StoreImage, storeImage_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCloudauthstSceneRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(SceneName, sceneName_);
      DARABONBA_PTR_FROM_JSON(StoreImage, storeImage_);
    };
    CreateCloudauthstSceneRequest() = default ;
    CreateCloudauthstSceneRequest(const CreateCloudauthstSceneRequest &) = default ;
    CreateCloudauthstSceneRequest(CreateCloudauthstSceneRequest &&) = default ;
    CreateCloudauthstSceneRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCloudauthstSceneRequest() = default ;
    CreateCloudauthstSceneRequest& operator=(const CreateCloudauthstSceneRequest &) = default ;
    CreateCloudauthstSceneRequest& operator=(CreateCloudauthstSceneRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->productCode_ == nullptr
        && return this->sceneName_ == nullptr && return this->storeImage_ == nullptr; };
    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string productCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline CreateCloudauthstSceneRequest& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // sceneName Field Functions 
    bool hasSceneName() const { return this->sceneName_ != nullptr;};
    void deleteSceneName() { this->sceneName_ = nullptr;};
    inline string sceneName() const { DARABONBA_PTR_GET_DEFAULT(sceneName_, "") };
    inline CreateCloudauthstSceneRequest& setSceneName(string sceneName) { DARABONBA_PTR_SET_VALUE(sceneName_, sceneName) };


    // storeImage Field Functions 
    bool hasStoreImage() const { return this->storeImage_ != nullptr;};
    void deleteStoreImage() { this->storeImage_ = nullptr;};
    inline string storeImage() const { DARABONBA_PTR_GET_DEFAULT(storeImage_, "") };
    inline CreateCloudauthstSceneRequest& setStoreImage(string storeImage) { DARABONBA_PTR_SET_VALUE(storeImage_, storeImage) };


  protected:
    // Product code.
    // 
    // This parameter is required.
    std::shared_ptr<string> productCode_ = nullptr;
    // Scene name.
    // 
    // This parameter is required.
    std::shared_ptr<string> sceneName_ = nullptr;
    // Whether to deliver the files generated from the authentication to the customer\\"s OSS:
    // - **Y**: Enable
    // - **N**: Disable
    std::shared_ptr<string> storeImage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
