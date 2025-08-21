// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAICIMAGESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAICIMAGESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeAICImagesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAICImagesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(ImageType, imageType_);
      DARABONBA_PTR_TO_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_TO_JSON(MaxDate, maxDate_);
      DARABONBA_PTR_TO_JSON(MinDate, minDate_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAICImagesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(ImageType, imageType_);
      DARABONBA_PTR_FROM_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_FROM_JSON(MaxDate, maxDate_);
      DARABONBA_PTR_FROM_JSON(MinDate, minDate_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeAICImagesRequest() = default ;
    DescribeAICImagesRequest(const DescribeAICImagesRequest &) = default ;
    DescribeAICImagesRequest(DescribeAICImagesRequest &&) = default ;
    DescribeAICImagesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAICImagesRequest() = default ;
    DescribeAICImagesRequest& operator=(const DescribeAICImagesRequest &) = default ;
    DescribeAICImagesRequest& operator=(DescribeAICImagesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->description_ != nullptr
        && this->imageId_ != nullptr && this->imageType_ != nullptr && this->imageUrl_ != nullptr && this->maxDate_ != nullptr && this->minDate_ != nullptr
        && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->status_ != nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeAICImagesRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string imageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline DescribeAICImagesRequest& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // imageType Field Functions 
    bool hasImageType() const { return this->imageType_ != nullptr;};
    void deleteImageType() { this->imageType_ = nullptr;};
    inline string imageType() const { DARABONBA_PTR_GET_DEFAULT(imageType_, "") };
    inline DescribeAICImagesRequest& setImageType(string imageType) { DARABONBA_PTR_SET_VALUE(imageType_, imageType) };


    // imageUrl Field Functions 
    bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
    void deleteImageUrl() { this->imageUrl_ = nullptr;};
    inline string imageUrl() const { DARABONBA_PTR_GET_DEFAULT(imageUrl_, "") };
    inline DescribeAICImagesRequest& setImageUrl(string imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };


    // maxDate Field Functions 
    bool hasMaxDate() const { return this->maxDate_ != nullptr;};
    void deleteMaxDate() { this->maxDate_ = nullptr;};
    inline string maxDate() const { DARABONBA_PTR_GET_DEFAULT(maxDate_, "") };
    inline DescribeAICImagesRequest& setMaxDate(string maxDate) { DARABONBA_PTR_SET_VALUE(maxDate_, maxDate) };


    // minDate Field Functions 
    bool hasMinDate() const { return this->minDate_ != nullptr;};
    void deleteMinDate() { this->minDate_ = nullptr;};
    inline string minDate() const { DARABONBA_PTR_GET_DEFAULT(minDate_, "") };
    inline DescribeAICImagesRequest& setMinDate(string minDate) { DARABONBA_PTR_SET_VALUE(minDate_, minDate) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline string pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, "") };
    inline DescribeAICImagesRequest& setPageNumber(string pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline DescribeAICImagesRequest& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeAICImagesRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The description of the image.
    std::shared_ptr<string> description_ = nullptr;
    // The image ID of the AIC instance.
    std::shared_ptr<string> imageId_ = nullptr;
    // The type of the image. Valid values:
    // 
    // *   **public**: public image
    // *   **private**: custom image
    std::shared_ptr<string> imageType_ = nullptr;
    // The URL of the AIC image repository.
    std::shared_ptr<string> imageUrl_ = nullptr;
    // The end of the time range to query. Specify the time in the 2006-01-02 format. By default, the time range to query is not restricted.
    std::shared_ptr<string> maxDate_ = nullptr;
    // The beginning of the time range to query. Specify the time in the 2006-01-02 format. By default, the time range to query is not restricted.
    std::shared_ptr<string> minDate_ = nullptr;
    // The page number. Pages start from page **1**. Default value: **1**.
    std::shared_ptr<string> pageNumber_ = nullptr;
    // The number of entries per page. The maximum value is **100**. Default value: **10**.
    std::shared_ptr<string> pageSize_ = nullptr;
    // The status of the image. Valid values:
    // 
    // *   **verifying**
    // *   **disable**
    // *   **available**
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
