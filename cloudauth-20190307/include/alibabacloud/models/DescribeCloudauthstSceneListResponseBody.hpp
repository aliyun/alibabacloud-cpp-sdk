// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLOUDAUTHSTSCENELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLOUDAUTHSTSCENELISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class DescribeCloudauthstSceneListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCloudauthstSceneListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCloudauthstSceneListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeCloudauthstSceneListResponseBody() = default ;
    DescribeCloudauthstSceneListResponseBody(const DescribeCloudauthstSceneListResponseBody &) = default ;
    DescribeCloudauthstSceneListResponseBody(DescribeCloudauthstSceneListResponseBody &&) = default ;
    DescribeCloudauthstSceneListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCloudauthstSceneListResponseBody() = default ;
    DescribeCloudauthstSceneListResponseBody& operator=(const DescribeCloudauthstSceneListResponseBody &) = default ;
    DescribeCloudauthstSceneListResponseBody& operator=(DescribeCloudauthstSceneListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
        DARABONBA_PTR_TO_JSON(ProductName, productName_);
        DARABONBA_PTR_TO_JSON(SceneId, sceneId_);
        DARABONBA_PTR_TO_JSON(SceneName, sceneName_);
        DARABONBA_PTR_TO_JSON(StoreImage, storeImage_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
        DARABONBA_PTR_FROM_JSON(ProductName, productName_);
        DARABONBA_PTR_FROM_JSON(SceneId, sceneId_);
        DARABONBA_PTR_FROM_JSON(SceneName, sceneName_);
        DARABONBA_PTR_FROM_JSON(StoreImage, storeImage_);
      };
      Items() = default ;
      Items(const Items &) = default ;
      Items(Items &&) = default ;
      Items(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Items() = default ;
      Items& operator=(const Items &) = default ;
      Items& operator=(Items &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->gmtCreate_ == nullptr
        && this->gmtModified_ == nullptr && this->productCode_ == nullptr && this->productName_ == nullptr && this->sceneId_ == nullptr && this->sceneName_ == nullptr
        && this->storeImage_ == nullptr; };
      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
      inline Items& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
      inline Items& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // productCode Field Functions 
      bool hasProductCode() const { return this->productCode_ != nullptr;};
      void deleteProductCode() { this->productCode_ = nullptr;};
      inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
      inline Items& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


      // productName Field Functions 
      bool hasProductName() const { return this->productName_ != nullptr;};
      void deleteProductName() { this->productName_ = nullptr;};
      inline string getProductName() const { DARABONBA_PTR_GET_DEFAULT(productName_, "") };
      inline Items& setProductName(string productName) { DARABONBA_PTR_SET_VALUE(productName_, productName) };


      // sceneId Field Functions 
      bool hasSceneId() const { return this->sceneId_ != nullptr;};
      void deleteSceneId() { this->sceneId_ = nullptr;};
      inline string getSceneId() const { DARABONBA_PTR_GET_DEFAULT(sceneId_, "") };
      inline Items& setSceneId(string sceneId) { DARABONBA_PTR_SET_VALUE(sceneId_, sceneId) };


      // sceneName Field Functions 
      bool hasSceneName() const { return this->sceneName_ != nullptr;};
      void deleteSceneName() { this->sceneName_ = nullptr;};
      inline string getSceneName() const { DARABONBA_PTR_GET_DEFAULT(sceneName_, "") };
      inline Items& setSceneName(string sceneName) { DARABONBA_PTR_SET_VALUE(sceneName_, sceneName) };


      // storeImage Field Functions 
      bool hasStoreImage() const { return this->storeImage_ != nullptr;};
      void deleteStoreImage() { this->storeImage_ = nullptr;};
      inline string getStoreImage() const { DARABONBA_PTR_GET_DEFAULT(storeImage_, "") };
      inline Items& setStoreImage(string storeImage) { DARABONBA_PTR_SET_VALUE(storeImage_, storeImage) };


    protected:
      // Creation time.
      shared_ptr<string> gmtCreate_ {};
      // Modification time.
      shared_ptr<string> gmtModified_ {};
      // Cloud marketplace product code.
      shared_ptr<string> productCode_ {};
      // Product name
      shared_ptr<string> productName_ {};
      // Scene ID.
      shared_ptr<string> sceneId_ {};
      // Scene name.
      shared_ptr<string> sceneName_ {};
      // Whether to deliver the files generated by the authentication to the customer\\"s OSS:
      // - **Y**: Enabled
      // - **N**: Disabled
      shared_ptr<string> storeImage_ {};
    };

    virtual bool empty() const override { return this->items_ == nullptr
        && this->requestId_ == nullptr; };
    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<DescribeCloudauthstSceneListResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<DescribeCloudauthstSceneListResponseBody::Items>) };
    inline vector<DescribeCloudauthstSceneListResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<DescribeCloudauthstSceneListResponseBody::Items>) };
    inline DescribeCloudauthstSceneListResponseBody& setItems(const vector<DescribeCloudauthstSceneListResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeCloudauthstSceneListResponseBody& setItems(vector<DescribeCloudauthstSceneListResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCloudauthstSceneListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Scene list
    shared_ptr<vector<DescribeCloudauthstSceneListResponseBody::Items>> items_ {};
    // The ID of this request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
