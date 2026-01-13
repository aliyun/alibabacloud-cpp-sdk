// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTIMAGESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTIMAGESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EhpcInstant20230701
{
namespace Models
{
  class ListImagesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListImagesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ImageCategory, imageCategory_);
      DARABONBA_PTR_TO_JSON(ImageIds, imageIds_);
      DARABONBA_PTR_TO_JSON(ImageNames, imageNames_);
      DARABONBA_PTR_TO_JSON(ImageType, imageType_);
      DARABONBA_PTR_TO_JSON(Mode, mode_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, ListImagesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageCategory, imageCategory_);
      DARABONBA_PTR_FROM_JSON(ImageIds, imageIds_);
      DARABONBA_PTR_FROM_JSON(ImageNames, imageNames_);
      DARABONBA_PTR_FROM_JSON(ImageType, imageType_);
      DARABONBA_PTR_FROM_JSON(Mode, mode_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    ListImagesRequest() = default ;
    ListImagesRequest(const ListImagesRequest &) = default ;
    ListImagesRequest(ListImagesRequest &&) = default ;
    ListImagesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListImagesRequest() = default ;
    ListImagesRequest& operator=(const ListImagesRequest &) = default ;
    ListImagesRequest& operator=(ListImagesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->imageCategory_ == nullptr
        && this->imageIds_ == nullptr && this->imageNames_ == nullptr && this->imageType_ == nullptr && this->mode_ == nullptr && this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr; };
    // imageCategory Field Functions 
    bool hasImageCategory() const { return this->imageCategory_ != nullptr;};
    void deleteImageCategory() { this->imageCategory_ = nullptr;};
    inline string getImageCategory() const { DARABONBA_PTR_GET_DEFAULT(imageCategory_, "") };
    inline ListImagesRequest& setImageCategory(string imageCategory) { DARABONBA_PTR_SET_VALUE(imageCategory_, imageCategory) };


    // imageIds Field Functions 
    bool hasImageIds() const { return this->imageIds_ != nullptr;};
    void deleteImageIds() { this->imageIds_ = nullptr;};
    inline const vector<string> & getImageIds() const { DARABONBA_PTR_GET_CONST(imageIds_, vector<string>) };
    inline vector<string> getImageIds() { DARABONBA_PTR_GET(imageIds_, vector<string>) };
    inline ListImagesRequest& setImageIds(const vector<string> & imageIds) { DARABONBA_PTR_SET_VALUE(imageIds_, imageIds) };
    inline ListImagesRequest& setImageIds(vector<string> && imageIds) { DARABONBA_PTR_SET_RVALUE(imageIds_, imageIds) };


    // imageNames Field Functions 
    bool hasImageNames() const { return this->imageNames_ != nullptr;};
    void deleteImageNames() { this->imageNames_ = nullptr;};
    inline const vector<string> & getImageNames() const { DARABONBA_PTR_GET_CONST(imageNames_, vector<string>) };
    inline vector<string> getImageNames() { DARABONBA_PTR_GET(imageNames_, vector<string>) };
    inline ListImagesRequest& setImageNames(const vector<string> & imageNames) { DARABONBA_PTR_SET_VALUE(imageNames_, imageNames) };
    inline ListImagesRequest& setImageNames(vector<string> && imageNames) { DARABONBA_PTR_SET_RVALUE(imageNames_, imageNames) };


    // imageType Field Functions 
    bool hasImageType() const { return this->imageType_ != nullptr;};
    void deleteImageType() { this->imageType_ = nullptr;};
    inline string getImageType() const { DARABONBA_PTR_GET_DEFAULT(imageType_, "") };
    inline ListImagesRequest& setImageType(string imageType) { DARABONBA_PTR_SET_VALUE(imageType_, imageType) };


    // mode Field Functions 
    bool hasMode() const { return this->mode_ != nullptr;};
    void deleteMode() { this->mode_ = nullptr;};
    inline string getMode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
    inline ListImagesRequest& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline ListImagesRequest& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListImagesRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    // The source of the image. Valid values:
    // 
    // *   Public: public images provided by Alibaba Cloud.
    // *   Custom: the custom image that you added.
    shared_ptr<string> imageCategory_ {};
    // The array of image IDs.
    shared_ptr<vector<string>> imageIds_ {};
    // The array of image names.
    shared_ptr<vector<string>> imageNames_ {};
    // The type of the images. Valid values:
    // 
    // *   VM: virtual machine image.
    // *   Container: the container image.
    // 
    // Default value: VM
    shared_ptr<string> imageType_ {};
    // The query mode. Valid values:
    // 
    // *   List: queries the list of all corresponding image versions.
    // *   Merge: merges images to query the latest version list.
    shared_ptr<string> mode_ {};
    // The number of the page to return.\\
    // Default value: 1.
    shared_ptr<int64_t> pageNumber_ {};
    // The number of pieces per page.\\
    // Default value: 20.
    shared_ptr<int64_t> pageSize_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EhpcInstant20230701
#endif
