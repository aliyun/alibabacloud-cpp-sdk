// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLOUDAUTHSTSCENELISTRESPONSEBODYITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLOUDAUTHSTSCENELISTRESPONSEBODYITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class DescribeCloudauthstSceneListResponseBodyItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCloudauthstSceneListResponseBodyItems& obj) { 
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(ProductName, productName_);
      DARABONBA_PTR_TO_JSON(SceneId, sceneId_);
      DARABONBA_PTR_TO_JSON(SceneName, sceneName_);
      DARABONBA_PTR_TO_JSON(StoreImage, storeImage_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCloudauthstSceneListResponseBodyItems& obj) { 
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(ProductName, productName_);
      DARABONBA_PTR_FROM_JSON(SceneId, sceneId_);
      DARABONBA_PTR_FROM_JSON(SceneName, sceneName_);
      DARABONBA_PTR_FROM_JSON(StoreImage, storeImage_);
    };
    DescribeCloudauthstSceneListResponseBodyItems() = default ;
    DescribeCloudauthstSceneListResponseBodyItems(const DescribeCloudauthstSceneListResponseBodyItems &) = default ;
    DescribeCloudauthstSceneListResponseBodyItems(DescribeCloudauthstSceneListResponseBodyItems &&) = default ;
    DescribeCloudauthstSceneListResponseBodyItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCloudauthstSceneListResponseBodyItems() = default ;
    DescribeCloudauthstSceneListResponseBodyItems& operator=(const DescribeCloudauthstSceneListResponseBodyItems &) = default ;
    DescribeCloudauthstSceneListResponseBodyItems& operator=(DescribeCloudauthstSceneListResponseBodyItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->gmtCreate_ == nullptr
        && return this->gmtModified_ == nullptr && return this->productCode_ == nullptr && return this->productName_ == nullptr && return this->sceneId_ == nullptr && return this->sceneName_ == nullptr
        && return this->storeImage_ == nullptr; };
    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline DescribeCloudauthstSceneListResponseBodyItems& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline DescribeCloudauthstSceneListResponseBodyItems& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string productCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline DescribeCloudauthstSceneListResponseBodyItems& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // productName Field Functions 
    bool hasProductName() const { return this->productName_ != nullptr;};
    void deleteProductName() { this->productName_ = nullptr;};
    inline string productName() const { DARABONBA_PTR_GET_DEFAULT(productName_, "") };
    inline DescribeCloudauthstSceneListResponseBodyItems& setProductName(string productName) { DARABONBA_PTR_SET_VALUE(productName_, productName) };


    // sceneId Field Functions 
    bool hasSceneId() const { return this->sceneId_ != nullptr;};
    void deleteSceneId() { this->sceneId_ = nullptr;};
    inline string sceneId() const { DARABONBA_PTR_GET_DEFAULT(sceneId_, "") };
    inline DescribeCloudauthstSceneListResponseBodyItems& setSceneId(string sceneId) { DARABONBA_PTR_SET_VALUE(sceneId_, sceneId) };


    // sceneName Field Functions 
    bool hasSceneName() const { return this->sceneName_ != nullptr;};
    void deleteSceneName() { this->sceneName_ = nullptr;};
    inline string sceneName() const { DARABONBA_PTR_GET_DEFAULT(sceneName_, "") };
    inline DescribeCloudauthstSceneListResponseBodyItems& setSceneName(string sceneName) { DARABONBA_PTR_SET_VALUE(sceneName_, sceneName) };


    // storeImage Field Functions 
    bool hasStoreImage() const { return this->storeImage_ != nullptr;};
    void deleteStoreImage() { this->storeImage_ = nullptr;};
    inline string storeImage() const { DARABONBA_PTR_GET_DEFAULT(storeImage_, "") };
    inline DescribeCloudauthstSceneListResponseBodyItems& setStoreImage(string storeImage) { DARABONBA_PTR_SET_VALUE(storeImage_, storeImage) };


  protected:
    // Creation time.
    std::shared_ptr<string> gmtCreate_ = nullptr;
    // Modification time.
    std::shared_ptr<string> gmtModified_ = nullptr;
    // Cloud marketplace product code.
    std::shared_ptr<string> productCode_ = nullptr;
    // Product name
    std::shared_ptr<string> productName_ = nullptr;
    // Scene ID.
    std::shared_ptr<string> sceneId_ = nullptr;
    // Scene name.
    std::shared_ptr<string> sceneName_ = nullptr;
    // Whether to deliver the files generated by the authentication to the customer\\"s OSS:
    // - **Y**: Enabled
    // - **N**: Disabled
    std::shared_ptr<string> storeImage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
