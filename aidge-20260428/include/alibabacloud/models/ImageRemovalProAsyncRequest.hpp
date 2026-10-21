// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMAGEREMOVALPROASYNCREQUEST_HPP_
#define ALIBABACLOUD_MODELS_IMAGEREMOVALPROASYNCREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aidge20260428
{
namespace Models
{
  class ImageRemovalProAsyncRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImageRemovalProAsyncRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizId, bizId_);
      DARABONBA_PTR_TO_JSON(ImageUrl, imageUrl_);
    };
    friend void from_json(const Darabonba::Json& j, ImageRemovalProAsyncRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizId, bizId_);
      DARABONBA_PTR_FROM_JSON(ImageUrl, imageUrl_);
    };
    ImageRemovalProAsyncRequest() = default ;
    ImageRemovalProAsyncRequest(const ImageRemovalProAsyncRequest &) = default ;
    ImageRemovalProAsyncRequest(ImageRemovalProAsyncRequest &&) = default ;
    ImageRemovalProAsyncRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImageRemovalProAsyncRequest() = default ;
    ImageRemovalProAsyncRequest& operator=(const ImageRemovalProAsyncRequest &) = default ;
    ImageRemovalProAsyncRequest& operator=(ImageRemovalProAsyncRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizId_ == nullptr
        && this->imageUrl_ == nullptr; };
    // bizId Field Functions 
    bool hasBizId() const { return this->bizId_ != nullptr;};
    void deleteBizId() { this->bizId_ = nullptr;};
    inline string getBizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, "") };
    inline ImageRemovalProAsyncRequest& setBizId(string bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


    // imageUrl Field Functions 
    bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
    void deleteImageUrl() { this->imageUrl_ = nullptr;};
    inline string getImageUrl() const { DARABONBA_PTR_GET_DEFAULT(imageUrl_, "") };
    inline ImageRemovalProAsyncRequest& setImageUrl(string imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };


  protected:
    // The business order ID of the caller. This ID is recorded when the request is accepted and returned as-is when you query the asynchronous task result.
    shared_ptr<string> bizId_ {};
    // The URL of the original image. The image must be in the JPG, JPEG, PNG, BMP, or WEBP format.
    // · Resolution: 256×256 to 3000×3000. File size: ≤ 10 MB.
    // 
    // This parameter is required.
    shared_ptr<string> imageUrl_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aidge20260428
#endif
