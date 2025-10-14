// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPRODUCTIMAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPRODUCTIMAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class CreateProductImageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateProductImageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(backgroundDescription, backgroundDescription_);
      DARABONBA_PTR_TO_JSON(backgroundPriority, backgroundPriority_);
      DARABONBA_PTR_TO_JSON(backgroundUrl, backgroundUrl_);
      DARABONBA_PTR_TO_JSON(highlightText, highlightText_);
      DARABONBA_PTR_TO_JSON(imageCount, imageCount_);
      DARABONBA_PTR_TO_JSON(imageUrl, imageUrl_);
      DARABONBA_PTR_TO_JSON(subTitle, subTitle_);
      DARABONBA_PTR_TO_JSON(title, title_);
    };
    friend void from_json(const Darabonba::Json& j, CreateProductImageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(backgroundDescription, backgroundDescription_);
      DARABONBA_PTR_FROM_JSON(backgroundPriority, backgroundPriority_);
      DARABONBA_PTR_FROM_JSON(backgroundUrl, backgroundUrl_);
      DARABONBA_PTR_FROM_JSON(highlightText, highlightText_);
      DARABONBA_PTR_FROM_JSON(imageCount, imageCount_);
      DARABONBA_PTR_FROM_JSON(imageUrl, imageUrl_);
      DARABONBA_PTR_FROM_JSON(subTitle, subTitle_);
      DARABONBA_PTR_FROM_JSON(title, title_);
    };
    CreateProductImageRequest() = default ;
    CreateProductImageRequest(const CreateProductImageRequest &) = default ;
    CreateProductImageRequest(CreateProductImageRequest &&) = default ;
    CreateProductImageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateProductImageRequest() = default ;
    CreateProductImageRequest& operator=(const CreateProductImageRequest &) = default ;
    CreateProductImageRequest& operator=(CreateProductImageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backgroundDescription_ == nullptr
        && return this->backgroundPriority_ == nullptr && return this->backgroundUrl_ == nullptr && return this->highlightText_ == nullptr && return this->imageCount_ == nullptr && return this->imageUrl_ == nullptr
        && return this->subTitle_ == nullptr && return this->title_ == nullptr; };
    // backgroundDescription Field Functions 
    bool hasBackgroundDescription() const { return this->backgroundDescription_ != nullptr;};
    void deleteBackgroundDescription() { this->backgroundDescription_ = nullptr;};
    inline string backgroundDescription() const { DARABONBA_PTR_GET_DEFAULT(backgroundDescription_, "") };
    inline CreateProductImageRequest& setBackgroundDescription(string backgroundDescription) { DARABONBA_PTR_SET_VALUE(backgroundDescription_, backgroundDescription) };


    // backgroundPriority Field Functions 
    bool hasBackgroundPriority() const { return this->backgroundPriority_ != nullptr;};
    void deleteBackgroundPriority() { this->backgroundPriority_ = nullptr;};
    inline int32_t backgroundPriority() const { DARABONBA_PTR_GET_DEFAULT(backgroundPriority_, 0) };
    inline CreateProductImageRequest& setBackgroundPriority(int32_t backgroundPriority) { DARABONBA_PTR_SET_VALUE(backgroundPriority_, backgroundPriority) };


    // backgroundUrl Field Functions 
    bool hasBackgroundUrl() const { return this->backgroundUrl_ != nullptr;};
    void deleteBackgroundUrl() { this->backgroundUrl_ = nullptr;};
    inline string backgroundUrl() const { DARABONBA_PTR_GET_DEFAULT(backgroundUrl_, "") };
    inline CreateProductImageRequest& setBackgroundUrl(string backgroundUrl) { DARABONBA_PTR_SET_VALUE(backgroundUrl_, backgroundUrl) };


    // highlightText Field Functions 
    bool hasHighlightText() const { return this->highlightText_ != nullptr;};
    void deleteHighlightText() { this->highlightText_ = nullptr;};
    inline string highlightText() const { DARABONBA_PTR_GET_DEFAULT(highlightText_, "") };
    inline CreateProductImageRequest& setHighlightText(string highlightText) { DARABONBA_PTR_SET_VALUE(highlightText_, highlightText) };


    // imageCount Field Functions 
    bool hasImageCount() const { return this->imageCount_ != nullptr;};
    void deleteImageCount() { this->imageCount_ = nullptr;};
    inline int32_t imageCount() const { DARABONBA_PTR_GET_DEFAULT(imageCount_, 0) };
    inline CreateProductImageRequest& setImageCount(int32_t imageCount) { DARABONBA_PTR_SET_VALUE(imageCount_, imageCount) };


    // imageUrl Field Functions 
    bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
    void deleteImageUrl() { this->imageUrl_ = nullptr;};
    inline string imageUrl() const { DARABONBA_PTR_GET_DEFAULT(imageUrl_, "") };
    inline CreateProductImageRequest& setImageUrl(string imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };


    // subTitle Field Functions 
    bool hasSubTitle() const { return this->subTitle_ != nullptr;};
    void deleteSubTitle() { this->subTitle_ = nullptr;};
    inline string subTitle() const { DARABONBA_PTR_GET_DEFAULT(subTitle_, "") };
    inline CreateProductImageRequest& setSubTitle(string subTitle) { DARABONBA_PTR_SET_VALUE(subTitle_, subTitle) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline CreateProductImageRequest& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    std::shared_ptr<string> backgroundDescription_ = nullptr;
    std::shared_ptr<int32_t> backgroundPriority_ = nullptr;
    std::shared_ptr<string> backgroundUrl_ = nullptr;
    std::shared_ptr<string> highlightText_ = nullptr;
    std::shared_ptr<int32_t> imageCount_ = nullptr;
    std::shared_ptr<string> imageUrl_ = nullptr;
    std::shared_ptr<string> subTitle_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
