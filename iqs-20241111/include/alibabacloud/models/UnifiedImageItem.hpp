// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UNIFIEDIMAGEITEM_HPP_
#define ALIBABACLOUD_MODELS_UNIFIEDIMAGEITEM_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IQS20241111
{
namespace Models
{
  class UnifiedImageItem : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UnifiedImageItem& obj) { 
      DARABONBA_PTR_TO_JSON(height, height_);
      DARABONBA_PTR_TO_JSON(hostPageUrl, hostPageUrl_);
      DARABONBA_PTR_TO_JSON(imageUrl, imageUrl_);
      DARABONBA_PTR_TO_JSON(publishedTime, publishedTime_);
      DARABONBA_PTR_TO_JSON(title, title_);
      DARABONBA_PTR_TO_JSON(width, width_);
    };
    friend void from_json(const Darabonba::Json& j, UnifiedImageItem& obj) { 
      DARABONBA_PTR_FROM_JSON(height, height_);
      DARABONBA_PTR_FROM_JSON(hostPageUrl, hostPageUrl_);
      DARABONBA_PTR_FROM_JSON(imageUrl, imageUrl_);
      DARABONBA_PTR_FROM_JSON(publishedTime, publishedTime_);
      DARABONBA_PTR_FROM_JSON(title, title_);
      DARABONBA_PTR_FROM_JSON(width, width_);
    };
    UnifiedImageItem() = default ;
    UnifiedImageItem(const UnifiedImageItem &) = default ;
    UnifiedImageItem(UnifiedImageItem &&) = default ;
    UnifiedImageItem(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UnifiedImageItem() = default ;
    UnifiedImageItem& operator=(const UnifiedImageItem &) = default ;
    UnifiedImageItem& operator=(UnifiedImageItem &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->height_ == nullptr
        && this->hostPageUrl_ == nullptr && this->imageUrl_ == nullptr && this->publishedTime_ == nullptr && this->title_ == nullptr && this->width_ == nullptr; };
    // height Field Functions 
    bool hasHeight() const { return this->height_ != nullptr;};
    void deleteHeight() { this->height_ = nullptr;};
    inline int32_t getHeight() const { DARABONBA_PTR_GET_DEFAULT(height_, 0) };
    inline UnifiedImageItem& setHeight(int32_t height) { DARABONBA_PTR_SET_VALUE(height_, height) };


    // hostPageUrl Field Functions 
    bool hasHostPageUrl() const { return this->hostPageUrl_ != nullptr;};
    void deleteHostPageUrl() { this->hostPageUrl_ = nullptr;};
    inline string getHostPageUrl() const { DARABONBA_PTR_GET_DEFAULT(hostPageUrl_, "") };
    inline UnifiedImageItem& setHostPageUrl(string hostPageUrl) { DARABONBA_PTR_SET_VALUE(hostPageUrl_, hostPageUrl) };


    // imageUrl Field Functions 
    bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
    void deleteImageUrl() { this->imageUrl_ = nullptr;};
    inline string getImageUrl() const { DARABONBA_PTR_GET_DEFAULT(imageUrl_, "") };
    inline UnifiedImageItem& setImageUrl(string imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };


    // publishedTime Field Functions 
    bool hasPublishedTime() const { return this->publishedTime_ != nullptr;};
    void deletePublishedTime() { this->publishedTime_ = nullptr;};
    inline string getPublishedTime() const { DARABONBA_PTR_GET_DEFAULT(publishedTime_, "") };
    inline UnifiedImageItem& setPublishedTime(string publishedTime) { DARABONBA_PTR_SET_VALUE(publishedTime_, publishedTime) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline UnifiedImageItem& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // width Field Functions 
    bool hasWidth() const { return this->width_ != nullptr;};
    void deleteWidth() { this->width_ = nullptr;};
    inline int32_t getWidth() const { DARABONBA_PTR_GET_DEFAULT(width_, 0) };
    inline UnifiedImageItem& setWidth(int32_t width) { DARABONBA_PTR_SET_VALUE(width_, width) };


  protected:
    shared_ptr<int32_t> height_ {};
    shared_ptr<string> hostPageUrl_ {};
    shared_ptr<string> imageUrl_ {};
    shared_ptr<string> publishedTime_ {};
    shared_ptr<string> title_ {};
    shared_ptr<int32_t> width_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IQS20241111
#endif
