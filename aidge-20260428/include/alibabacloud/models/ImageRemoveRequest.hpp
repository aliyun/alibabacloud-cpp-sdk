// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMAGEREMOVEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_IMAGEREMOVEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aidge20260428
{
namespace Models
{
  class ImageRemoveRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImageRemoveRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_TO_JSON(Mask, mask_);
      DARABONBA_PTR_TO_JSON(NonObjectRemoveElements, nonObjectRemoveElements_);
      DARABONBA_PTR_TO_JSON(ObjectRemoveElements, objectRemoveElements_);
    };
    friend void from_json(const Darabonba::Json& j, ImageRemoveRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_FROM_JSON(Mask, mask_);
      DARABONBA_PTR_FROM_JSON(NonObjectRemoveElements, nonObjectRemoveElements_);
      DARABONBA_PTR_FROM_JSON(ObjectRemoveElements, objectRemoveElements_);
    };
    ImageRemoveRequest() = default ;
    ImageRemoveRequest(const ImageRemoveRequest &) = default ;
    ImageRemoveRequest(ImageRemoveRequest &&) = default ;
    ImageRemoveRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImageRemoveRequest() = default ;
    ImageRemoveRequest& operator=(const ImageRemoveRequest &) = default ;
    ImageRemoveRequest& operator=(ImageRemoveRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->imageUrl_ == nullptr
        && this->mask_ == nullptr && this->nonObjectRemoveElements_ == nullptr && this->objectRemoveElements_ == nullptr; };
    // imageUrl Field Functions 
    bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
    void deleteImageUrl() { this->imageUrl_ = nullptr;};
    inline string getImageUrl() const { DARABONBA_PTR_GET_DEFAULT(imageUrl_, "") };
    inline ImageRemoveRequest& setImageUrl(string imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };


    // mask Field Functions 
    bool hasMask() const { return this->mask_ != nullptr;};
    void deleteMask() { this->mask_ = nullptr;};
    inline string getMask() const { DARABONBA_PTR_GET_DEFAULT(mask_, "") };
    inline ImageRemoveRequest& setMask(string mask) { DARABONBA_PTR_SET_VALUE(mask_, mask) };


    // nonObjectRemoveElements Field Functions 
    bool hasNonObjectRemoveElements() const { return this->nonObjectRemoveElements_ != nullptr;};
    void deleteNonObjectRemoveElements() { this->nonObjectRemoveElements_ = nullptr;};
    inline const vector<int32_t> & getNonObjectRemoveElements() const { DARABONBA_PTR_GET_CONST(nonObjectRemoveElements_, vector<int32_t>) };
    inline vector<int32_t> getNonObjectRemoveElements() { DARABONBA_PTR_GET(nonObjectRemoveElements_, vector<int32_t>) };
    inline ImageRemoveRequest& setNonObjectRemoveElements(const vector<int32_t> & nonObjectRemoveElements) { DARABONBA_PTR_SET_VALUE(nonObjectRemoveElements_, nonObjectRemoveElements) };
    inline ImageRemoveRequest& setNonObjectRemoveElements(vector<int32_t> && nonObjectRemoveElements) { DARABONBA_PTR_SET_RVALUE(nonObjectRemoveElements_, nonObjectRemoveElements) };


    // objectRemoveElements Field Functions 
    bool hasObjectRemoveElements() const { return this->objectRemoveElements_ != nullptr;};
    void deleteObjectRemoveElements() { this->objectRemoveElements_ = nullptr;};
    inline const vector<int32_t> & getObjectRemoveElements() const { DARABONBA_PTR_GET_CONST(objectRemoveElements_, vector<int32_t>) };
    inline vector<int32_t> getObjectRemoveElements() { DARABONBA_PTR_GET(objectRemoveElements_, vector<int32_t>) };
    inline ImageRemoveRequest& setObjectRemoveElements(const vector<int32_t> & objectRemoveElements) { DARABONBA_PTR_SET_VALUE(objectRemoveElements_, objectRemoveElements) };
    inline ImageRemoveRequest& setObjectRemoveElements(vector<int32_t> && objectRemoveElements) { DARABONBA_PTR_SET_RVALUE(objectRemoveElements_, objectRemoveElements) };


  protected:
    // The URL of the image to process. This parameter is mutually exclusive with ImageBase64. You must specify one of them.
    // 
    // This parameter is required.
    shared_ptr<string> imageUrl_ {};
    // The specific erasure region in RLE format. If this parameter is specified, it takes priority and the remove parameters are ignored.
    shared_ptr<string> mask_ {};
    // The elements to remove from the non-subject area of the image. Valid values:
    // - 1: transparent text block
    // - 2: specific name
    // - 3: text
    // - 4: image blemish
    // 
    // You can specify multiple values.
    shared_ptr<vector<int32_t>> nonObjectRemoveElements_ {};
    // The elements to remove from the image subject area. Valid values:
    // - 1: transparent text block
    // - 2: specific name
    // - 3: text
    // - 4: image blemish
    // 
    // You can specify multiple values.
    shared_ptr<vector<int32_t>> objectRemoveElements_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aidge20260428
#endif
