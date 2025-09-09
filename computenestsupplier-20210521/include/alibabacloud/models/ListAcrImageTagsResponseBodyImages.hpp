// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTACRIMAGETAGSRESPONSEBODYIMAGES_HPP_
#define ALIBABACLOUD_MODELS_LISTACRIMAGETAGSRESPONSEBODYIMAGES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNestSupplier20210521
{
namespace Models
{
  class ListAcrImageTagsResponseBodyImages : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAcrImageTagsResponseBodyImages& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(ImageSize, imageSize_);
      DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, ListAcrImageTagsResponseBodyImages& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(ImageSize, imageSize_);
      DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    ListAcrImageTagsResponseBodyImages() = default ;
    ListAcrImageTagsResponseBodyImages(const ListAcrImageTagsResponseBodyImages &) = default ;
    ListAcrImageTagsResponseBodyImages(ListAcrImageTagsResponseBodyImages &&) = default ;
    ListAcrImageTagsResponseBodyImages(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAcrImageTagsResponseBodyImages() = default ;
    ListAcrImageTagsResponseBodyImages& operator=(const ListAcrImageTagsResponseBodyImages &) = default ;
    ListAcrImageTagsResponseBodyImages& operator=(ListAcrImageTagsResponseBodyImages &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createTime_ != nullptr
        && this->imageSize_ != nullptr && this->modifiedTime_ != nullptr && this->tag_ != nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListAcrImageTagsResponseBodyImages& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // imageSize Field Functions 
    bool hasImageSize() const { return this->imageSize_ != nullptr;};
    void deleteImageSize() { this->imageSize_ = nullptr;};
    inline string imageSize() const { DARABONBA_PTR_GET_DEFAULT(imageSize_, "") };
    inline ListAcrImageTagsResponseBodyImages& setImageSize(string imageSize) { DARABONBA_PTR_SET_VALUE(imageSize_, imageSize) };


    // modifiedTime Field Functions 
    bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
    void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
    inline string modifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
    inline ListAcrImageTagsResponseBodyImages& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline string tag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
    inline ListAcrImageTagsResponseBodyImages& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


  protected:
    // The time when the image was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The image size. Unit: bytes.
    std::shared_ptr<string> imageSize_ = nullptr;
    // The time when the image was modified.
    std::shared_ptr<string> modifiedTime_ = nullptr;
    // The image version.
    std::shared_ptr<string> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNestSupplier20210521
#endif
