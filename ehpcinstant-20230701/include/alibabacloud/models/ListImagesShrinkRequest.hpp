// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTIMAGESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTIMAGESSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EhpcInstant20230701
{
namespace Models
{
  class ListImagesShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListImagesShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ImageCategory, imageCategory_);
      DARABONBA_PTR_TO_JSON(ImageIds, imageIdsShrink_);
      DARABONBA_PTR_TO_JSON(ImageNames, imageNamesShrink_);
      DARABONBA_PTR_TO_JSON(ImageType, imageType_);
      DARABONBA_PTR_TO_JSON(Mode, mode_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, ListImagesShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageCategory, imageCategory_);
      DARABONBA_PTR_FROM_JSON(ImageIds, imageIdsShrink_);
      DARABONBA_PTR_FROM_JSON(ImageNames, imageNamesShrink_);
      DARABONBA_PTR_FROM_JSON(ImageType, imageType_);
      DARABONBA_PTR_FROM_JSON(Mode, mode_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    ListImagesShrinkRequest() = default ;
    ListImagesShrinkRequest(const ListImagesShrinkRequest &) = default ;
    ListImagesShrinkRequest(ListImagesShrinkRequest &&) = default ;
    ListImagesShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListImagesShrinkRequest() = default ;
    ListImagesShrinkRequest& operator=(const ListImagesShrinkRequest &) = default ;
    ListImagesShrinkRequest& operator=(ListImagesShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->imageCategory_ == nullptr
        && return this->imageIdsShrink_ == nullptr && return this->imageNamesShrink_ == nullptr && return this->imageType_ == nullptr && return this->mode_ == nullptr && return this->pageNumber_ == nullptr
        && return this->pageSize_ == nullptr; };
    // imageCategory Field Functions 
    bool hasImageCategory() const { return this->imageCategory_ != nullptr;};
    void deleteImageCategory() { this->imageCategory_ = nullptr;};
    inline string imageCategory() const { DARABONBA_PTR_GET_DEFAULT(imageCategory_, "") };
    inline ListImagesShrinkRequest& setImageCategory(string imageCategory) { DARABONBA_PTR_SET_VALUE(imageCategory_, imageCategory) };


    // imageIdsShrink Field Functions 
    bool hasImageIdsShrink() const { return this->imageIdsShrink_ != nullptr;};
    void deleteImageIdsShrink() { this->imageIdsShrink_ = nullptr;};
    inline string imageIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(imageIdsShrink_, "") };
    inline ListImagesShrinkRequest& setImageIdsShrink(string imageIdsShrink) { DARABONBA_PTR_SET_VALUE(imageIdsShrink_, imageIdsShrink) };


    // imageNamesShrink Field Functions 
    bool hasImageNamesShrink() const { return this->imageNamesShrink_ != nullptr;};
    void deleteImageNamesShrink() { this->imageNamesShrink_ = nullptr;};
    inline string imageNamesShrink() const { DARABONBA_PTR_GET_DEFAULT(imageNamesShrink_, "") };
    inline ListImagesShrinkRequest& setImageNamesShrink(string imageNamesShrink) { DARABONBA_PTR_SET_VALUE(imageNamesShrink_, imageNamesShrink) };


    // imageType Field Functions 
    bool hasImageType() const { return this->imageType_ != nullptr;};
    void deleteImageType() { this->imageType_ = nullptr;};
    inline string imageType() const { DARABONBA_PTR_GET_DEFAULT(imageType_, "") };
    inline ListImagesShrinkRequest& setImageType(string imageType) { DARABONBA_PTR_SET_VALUE(imageType_, imageType) };


    // mode Field Functions 
    bool hasMode() const { return this->mode_ != nullptr;};
    void deleteMode() { this->mode_ = nullptr;};
    inline string mode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
    inline ListImagesShrinkRequest& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline ListImagesShrinkRequest& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListImagesShrinkRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    // The source of the image. Valid values:
    // 
    // *   Public: public images provided by Alibaba Cloud.
    // *   Custom: the custom image that you added.
    std::shared_ptr<string> imageCategory_ = nullptr;
    // The array of image IDs.
    std::shared_ptr<string> imageIdsShrink_ = nullptr;
    // The array of image names.
    std::shared_ptr<string> imageNamesShrink_ = nullptr;
    // The type of the images. Valid values:
    // 
    // *   VM: virtual machine image.
    // *   Container: the container image.
    // 
    // Default value: VM
    std::shared_ptr<string> imageType_ = nullptr;
    // The query mode. Valid values:
    // 
    // *   List: queries the list of all corresponding image versions.
    // *   Merge: merges images to query the latest version list.
    std::shared_ptr<string> mode_ = nullptr;
    // The number of the page to return.\\
    // Default value: 1.
    std::shared_ptr<int64_t> pageNumber_ = nullptr;
    // The number of pieces per page.\\
    // Default value: 20.
    std::shared_ptr<int64_t> pageSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EhpcInstant20230701
#endif
