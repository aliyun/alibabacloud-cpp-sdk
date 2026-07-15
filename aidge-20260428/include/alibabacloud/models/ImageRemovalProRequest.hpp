// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMAGEREMOVALPROREQUEST_HPP_
#define ALIBABACLOUD_MODELS_IMAGEREMOVALPROREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aidge20260428
{
namespace Models
{
  class ImageRemovalProRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImageRemovalProRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Async, async_);
      DARABONBA_PTR_TO_JSON(ImageUrl, imageUrl_);
    };
    friend void from_json(const Darabonba::Json& j, ImageRemovalProRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Async, async_);
      DARABONBA_PTR_FROM_JSON(ImageUrl, imageUrl_);
    };
    ImageRemovalProRequest() = default ;
    ImageRemovalProRequest(const ImageRemovalProRequest &) = default ;
    ImageRemovalProRequest(ImageRemovalProRequest &&) = default ;
    ImageRemovalProRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImageRemovalProRequest() = default ;
    ImageRemovalProRequest& operator=(const ImageRemovalProRequest &) = default ;
    ImageRemovalProRequest& operator=(ImageRemovalProRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->async_ == nullptr
        && this->imageUrl_ == nullptr; };
    // async Field Functions 
    bool hasAsync() const { return this->async_ != nullptr;};
    void deleteAsync() { this->async_ = nullptr;};
    inline bool getAsync() const { DARABONBA_PTR_GET_DEFAULT(async_, false) };
    inline ImageRemovalProRequest& setAsync(bool async) { DARABONBA_PTR_SET_VALUE(async_, async) };


    // imageUrl Field Functions 
    bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
    void deleteImageUrl() { this->imageUrl_ = nullptr;};
    inline string getImageUrl() const { DARABONBA_PTR_GET_DEFAULT(imageUrl_, "") };
    inline ImageRemovalProRequest& setImageUrl(string imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };


  protected:
    // The call type. Valid values:
    // - true: asynchronous.
    // - false: synchronous.
    // 
    // Default value: false.
    shared_ptr<bool> async_ {};
    // The URL of the image to process.
    // 
    // This parameter is required.
    shared_ptr<string> imageUrl_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aidge20260428
#endif
