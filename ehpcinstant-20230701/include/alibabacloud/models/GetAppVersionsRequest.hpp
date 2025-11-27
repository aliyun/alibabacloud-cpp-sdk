// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPPVERSIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETAPPVERSIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EhpcInstant20230701
{
namespace Models
{
  class GetAppVersionsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAppVersionsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(ImageCategory, imageCategory_);
      DARABONBA_PTR_TO_JSON(ImageType, imageType_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, GetAppVersionsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(ImageCategory, imageCategory_);
      DARABONBA_PTR_FROM_JSON(ImageType, imageType_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    GetAppVersionsRequest() = default ;
    GetAppVersionsRequest(const GetAppVersionsRequest &) = default ;
    GetAppVersionsRequest(GetAppVersionsRequest &&) = default ;
    GetAppVersionsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAppVersionsRequest() = default ;
    GetAppVersionsRequest& operator=(const GetAppVersionsRequest &) = default ;
    GetAppVersionsRequest& operator=(GetAppVersionsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appName_ == nullptr
        && return this->imageCategory_ == nullptr && return this->imageType_ == nullptr && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline GetAppVersionsRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // imageCategory Field Functions 
    bool hasImageCategory() const { return this->imageCategory_ != nullptr;};
    void deleteImageCategory() { this->imageCategory_ = nullptr;};
    inline string imageCategory() const { DARABONBA_PTR_GET_DEFAULT(imageCategory_, "") };
    inline GetAppVersionsRequest& setImageCategory(string imageCategory) { DARABONBA_PTR_SET_VALUE(imageCategory_, imageCategory) };


    // imageType Field Functions 
    bool hasImageType() const { return this->imageType_ != nullptr;};
    void deleteImageType() { this->imageType_ = nullptr;};
    inline string imageType() const { DARABONBA_PTR_GET_DEFAULT(imageType_, "") };
    inline GetAppVersionsRequest& setImageType(string imageType) { DARABONBA_PTR_SET_VALUE(imageType_, imageType) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline GetAppVersionsRequest& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline GetAppVersionsRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    // The application name.
    // 
    // This parameter is required.
    std::shared_ptr<string> appName_ = nullptr;
    // The source of the image. Valid values:
    // 
    // Public: public images provided by Alibaba Cloud.
    // 
    // Custom: the custom image that you added.
    std::shared_ptr<string> imageCategory_ = nullptr;
    // The type of the images. Valid values:
    // 
    // VM: Virtual Machine Image
    // 
    // Container: container image
    std::shared_ptr<string> imageType_ = nullptr;
    // The page number. Default value: 1.
    std::shared_ptr<int64_t> pageNumber_ = nullptr;
    // The number of entries to return on each page. Default value: 20.
    std::shared_ptr<int64_t> pageSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EhpcInstant20230701
#endif
