// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMAGEREMOVESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_IMAGEREMOVESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aidge20260428
{
namespace Models
{
  class ImageRemoveShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImageRemoveShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_TO_JSON(Mask, mask_);
      DARABONBA_PTR_TO_JSON(NonObjectRemoveElements, nonObjectRemoveElementsShrink_);
      DARABONBA_PTR_TO_JSON(ObjectRemoveElements, objectRemoveElementsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, ImageRemoveShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_FROM_JSON(Mask, mask_);
      DARABONBA_PTR_FROM_JSON(NonObjectRemoveElements, nonObjectRemoveElementsShrink_);
      DARABONBA_PTR_FROM_JSON(ObjectRemoveElements, objectRemoveElementsShrink_);
    };
    ImageRemoveShrinkRequest() = default ;
    ImageRemoveShrinkRequest(const ImageRemoveShrinkRequest &) = default ;
    ImageRemoveShrinkRequest(ImageRemoveShrinkRequest &&) = default ;
    ImageRemoveShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImageRemoveShrinkRequest() = default ;
    ImageRemoveShrinkRequest& operator=(const ImageRemoveShrinkRequest &) = default ;
    ImageRemoveShrinkRequest& operator=(ImageRemoveShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->imageUrl_ == nullptr
        && this->mask_ == nullptr && this->nonObjectRemoveElementsShrink_ == nullptr && this->objectRemoveElementsShrink_ == nullptr; };
    // imageUrl Field Functions 
    bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
    void deleteImageUrl() { this->imageUrl_ = nullptr;};
    inline string getImageUrl() const { DARABONBA_PTR_GET_DEFAULT(imageUrl_, "") };
    inline ImageRemoveShrinkRequest& setImageUrl(string imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };


    // mask Field Functions 
    bool hasMask() const { return this->mask_ != nullptr;};
    void deleteMask() { this->mask_ = nullptr;};
    inline string getMask() const { DARABONBA_PTR_GET_DEFAULT(mask_, "") };
    inline ImageRemoveShrinkRequest& setMask(string mask) { DARABONBA_PTR_SET_VALUE(mask_, mask) };


    // nonObjectRemoveElementsShrink Field Functions 
    bool hasNonObjectRemoveElementsShrink() const { return this->nonObjectRemoveElementsShrink_ != nullptr;};
    void deleteNonObjectRemoveElementsShrink() { this->nonObjectRemoveElementsShrink_ = nullptr;};
    inline string getNonObjectRemoveElementsShrink() const { DARABONBA_PTR_GET_DEFAULT(nonObjectRemoveElementsShrink_, "") };
    inline ImageRemoveShrinkRequest& setNonObjectRemoveElementsShrink(string nonObjectRemoveElementsShrink) { DARABONBA_PTR_SET_VALUE(nonObjectRemoveElementsShrink_, nonObjectRemoveElementsShrink) };


    // objectRemoveElementsShrink Field Functions 
    bool hasObjectRemoveElementsShrink() const { return this->objectRemoveElementsShrink_ != nullptr;};
    void deleteObjectRemoveElementsShrink() { this->objectRemoveElementsShrink_ = nullptr;};
    inline string getObjectRemoveElementsShrink() const { DARABONBA_PTR_GET_DEFAULT(objectRemoveElementsShrink_, "") };
    inline ImageRemoveShrinkRequest& setObjectRemoveElementsShrink(string objectRemoveElementsShrink) { DARABONBA_PTR_SET_VALUE(objectRemoveElementsShrink_, objectRemoveElementsShrink) };


  protected:
    // URL of the image to be processed (mutually exclusive with ImageBase64)
    // 
    // This parameter is required.
    shared_ptr<string> imageUrl_ {};
    // Specific removal area in RLE format. If provided, this takes priority and the remove parameters are ignored
    shared_ptr<string> mask_ {};
    // Elements to remove from the non-subject area of the image (1=transparent text blocks; 2=specific names; 3=text; 4=blemishes). Multiple selections allowed
    shared_ptr<string> nonObjectRemoveElementsShrink_ {};
    // Elements to remove from the image subject (1=transparent text blocks; 2=specific names; 3=text; 4=blemishes). Multiple selections allowed
    // 
    // This parameter is required.
    shared_ptr<string> objectRemoveElementsShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aidge20260428
#endif
