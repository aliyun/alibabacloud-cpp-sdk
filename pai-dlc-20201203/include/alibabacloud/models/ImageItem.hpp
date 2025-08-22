// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMAGEITEM_HPP_
#define ALIBABACLOUD_MODELS_IMAGEITEM_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDlc20201203
{
namespace Models
{
  class ImageItem : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImageItem& obj) { 
      DARABONBA_PTR_TO_JSON(AcceleratorType, acceleratorType_);
      DARABONBA_PTR_TO_JSON(AuthorId, authorId_);
      DARABONBA_PTR_TO_JSON(Framework, framework_);
      DARABONBA_PTR_TO_JSON(ImageProviderType, imageProviderType_);
      DARABONBA_PTR_TO_JSON(ImageTag, imageTag_);
      DARABONBA_PTR_TO_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_TO_JSON(ImageUrlVpc, imageUrlVpc_);
    };
    friend void from_json(const Darabonba::Json& j, ImageItem& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceleratorType, acceleratorType_);
      DARABONBA_PTR_FROM_JSON(AuthorId, authorId_);
      DARABONBA_PTR_FROM_JSON(Framework, framework_);
      DARABONBA_PTR_FROM_JSON(ImageProviderType, imageProviderType_);
      DARABONBA_PTR_FROM_JSON(ImageTag, imageTag_);
      DARABONBA_PTR_FROM_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_FROM_JSON(ImageUrlVpc, imageUrlVpc_);
    };
    ImageItem() = default ;
    ImageItem(const ImageItem &) = default ;
    ImageItem(ImageItem &&) = default ;
    ImageItem(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImageItem() = default ;
    ImageItem& operator=(const ImageItem &) = default ;
    ImageItem& operator=(ImageItem &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->acceleratorType_ != nullptr
        && this->authorId_ != nullptr && this->framework_ != nullptr && this->imageProviderType_ != nullptr && this->imageTag_ != nullptr && this->imageUrl_ != nullptr
        && this->imageUrlVpc_ != nullptr; };
    // acceleratorType Field Functions 
    bool hasAcceleratorType() const { return this->acceleratorType_ != nullptr;};
    void deleteAcceleratorType() { this->acceleratorType_ = nullptr;};
    inline string acceleratorType() const { DARABONBA_PTR_GET_DEFAULT(acceleratorType_, "") };
    inline ImageItem& setAcceleratorType(string acceleratorType) { DARABONBA_PTR_SET_VALUE(acceleratorType_, acceleratorType) };


    // authorId Field Functions 
    bool hasAuthorId() const { return this->authorId_ != nullptr;};
    void deleteAuthorId() { this->authorId_ = nullptr;};
    inline string authorId() const { DARABONBA_PTR_GET_DEFAULT(authorId_, "") };
    inline ImageItem& setAuthorId(string authorId) { DARABONBA_PTR_SET_VALUE(authorId_, authorId) };


    // framework Field Functions 
    bool hasFramework() const { return this->framework_ != nullptr;};
    void deleteFramework() { this->framework_ = nullptr;};
    inline string framework() const { DARABONBA_PTR_GET_DEFAULT(framework_, "") };
    inline ImageItem& setFramework(string framework) { DARABONBA_PTR_SET_VALUE(framework_, framework) };


    // imageProviderType Field Functions 
    bool hasImageProviderType() const { return this->imageProviderType_ != nullptr;};
    void deleteImageProviderType() { this->imageProviderType_ = nullptr;};
    inline string imageProviderType() const { DARABONBA_PTR_GET_DEFAULT(imageProviderType_, "") };
    inline ImageItem& setImageProviderType(string imageProviderType) { DARABONBA_PTR_SET_VALUE(imageProviderType_, imageProviderType) };


    // imageTag Field Functions 
    bool hasImageTag() const { return this->imageTag_ != nullptr;};
    void deleteImageTag() { this->imageTag_ = nullptr;};
    inline string imageTag() const { DARABONBA_PTR_GET_DEFAULT(imageTag_, "") };
    inline ImageItem& setImageTag(string imageTag) { DARABONBA_PTR_SET_VALUE(imageTag_, imageTag) };


    // imageUrl Field Functions 
    bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
    void deleteImageUrl() { this->imageUrl_ = nullptr;};
    inline string imageUrl() const { DARABONBA_PTR_GET_DEFAULT(imageUrl_, "") };
    inline ImageItem& setImageUrl(string imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };


    // imageUrlVpc Field Functions 
    bool hasImageUrlVpc() const { return this->imageUrlVpc_ != nullptr;};
    void deleteImageUrlVpc() { this->imageUrlVpc_ = nullptr;};
    inline string imageUrlVpc() const { DARABONBA_PTR_GET_DEFAULT(imageUrlVpc_, "") };
    inline ImageItem& setImageUrlVpc(string imageUrlVpc) { DARABONBA_PTR_SET_VALUE(imageUrlVpc_, imageUrlVpc) };


  protected:
    std::shared_ptr<string> acceleratorType_ = nullptr;
    std::shared_ptr<string> authorId_ = nullptr;
    std::shared_ptr<string> framework_ = nullptr;
    std::shared_ptr<string> imageProviderType_ = nullptr;
    std::shared_ptr<string> imageTag_ = nullptr;
    std::shared_ptr<string> imageUrl_ = nullptr;
    std::shared_ptr<string> imageUrlVpc_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif
