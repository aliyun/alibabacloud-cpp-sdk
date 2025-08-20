// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTREPOTAGRESPONSEBODYIMAGES_HPP_
#define ALIBABACLOUD_MODELS_LISTREPOTAGRESPONSEBODYIMAGES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class ListRepoTagResponseBodyImages : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRepoTagResponseBodyImages& obj) { 
      DARABONBA_PTR_TO_JSON(Digest, digest_);
      DARABONBA_PTR_TO_JSON(ImageCreate, imageCreate_);
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(ImageSize, imageSize_);
      DARABONBA_PTR_TO_JSON(ImageUpdate, imageUpdate_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, ListRepoTagResponseBodyImages& obj) { 
      DARABONBA_PTR_FROM_JSON(Digest, digest_);
      DARABONBA_PTR_FROM_JSON(ImageCreate, imageCreate_);
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(ImageSize, imageSize_);
      DARABONBA_PTR_FROM_JSON(ImageUpdate, imageUpdate_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    ListRepoTagResponseBodyImages() = default ;
    ListRepoTagResponseBodyImages(const ListRepoTagResponseBodyImages &) = default ;
    ListRepoTagResponseBodyImages(ListRepoTagResponseBodyImages &&) = default ;
    ListRepoTagResponseBodyImages(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRepoTagResponseBodyImages() = default ;
    ListRepoTagResponseBodyImages& operator=(const ListRepoTagResponseBodyImages &) = default ;
    ListRepoTagResponseBodyImages& operator=(ListRepoTagResponseBodyImages &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->digest_ != nullptr
        && this->imageCreate_ != nullptr && this->imageId_ != nullptr && this->imageSize_ != nullptr && this->imageUpdate_ != nullptr && this->status_ != nullptr
        && this->tag_ != nullptr; };
    // digest Field Functions 
    bool hasDigest() const { return this->digest_ != nullptr;};
    void deleteDigest() { this->digest_ = nullptr;};
    inline string digest() const { DARABONBA_PTR_GET_DEFAULT(digest_, "") };
    inline ListRepoTagResponseBodyImages& setDigest(string digest) { DARABONBA_PTR_SET_VALUE(digest_, digest) };


    // imageCreate Field Functions 
    bool hasImageCreate() const { return this->imageCreate_ != nullptr;};
    void deleteImageCreate() { this->imageCreate_ = nullptr;};
    inline string imageCreate() const { DARABONBA_PTR_GET_DEFAULT(imageCreate_, "") };
    inline ListRepoTagResponseBodyImages& setImageCreate(string imageCreate) { DARABONBA_PTR_SET_VALUE(imageCreate_, imageCreate) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string imageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline ListRepoTagResponseBodyImages& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // imageSize Field Functions 
    bool hasImageSize() const { return this->imageSize_ != nullptr;};
    void deleteImageSize() { this->imageSize_ = nullptr;};
    inline int64_t imageSize() const { DARABONBA_PTR_GET_DEFAULT(imageSize_, 0L) };
    inline ListRepoTagResponseBodyImages& setImageSize(int64_t imageSize) { DARABONBA_PTR_SET_VALUE(imageSize_, imageSize) };


    // imageUpdate Field Functions 
    bool hasImageUpdate() const { return this->imageUpdate_ != nullptr;};
    void deleteImageUpdate() { this->imageUpdate_ = nullptr;};
    inline string imageUpdate() const { DARABONBA_PTR_GET_DEFAULT(imageUpdate_, "") };
    inline ListRepoTagResponseBodyImages& setImageUpdate(string imageUpdate) { DARABONBA_PTR_SET_VALUE(imageUpdate_, imageUpdate) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListRepoTagResponseBodyImages& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline string tag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
    inline ListRepoTagResponseBodyImages& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


  protected:
    // The digest of the image.
    std::shared_ptr<string> digest_ = nullptr;
    // The time when the image was created.
    std::shared_ptr<string> imageCreate_ = nullptr;
    // The ID of the image.
    std::shared_ptr<string> imageId_ = nullptr;
    // The size of the image.
    std::shared_ptr<int64_t> imageSize_ = nullptr;
    // The time when the image was last updated.
    std::shared_ptr<string> imageUpdate_ = nullptr;
    // The status of the image.
    std::shared_ptr<string> status_ = nullptr;
    // The tag of the image.
    std::shared_ptr<string> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
