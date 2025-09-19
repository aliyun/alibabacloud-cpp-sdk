// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGEBASELINEITEMLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGEBASELINEITEMLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeImageBaselineItemListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImageBaselineItemListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BaselineClassKey, baselineClassKey_);
      DARABONBA_PTR_TO_JSON(BaselineNameKey, baselineNameKey_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(ImageUuid, imageUuid_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ScanRange, scanRange_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Uuids, uuids_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImageBaselineItemListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BaselineClassKey, baselineClassKey_);
      DARABONBA_PTR_FROM_JSON(BaselineNameKey, baselineNameKey_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(ImageUuid, imageUuid_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ScanRange, scanRange_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Uuids, uuids_);
    };
    DescribeImageBaselineItemListRequest() = default ;
    DescribeImageBaselineItemListRequest(const DescribeImageBaselineItemListRequest &) = default ;
    DescribeImageBaselineItemListRequest(DescribeImageBaselineItemListRequest &&) = default ;
    DescribeImageBaselineItemListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImageBaselineItemListRequest() = default ;
    DescribeImageBaselineItemListRequest& operator=(const DescribeImageBaselineItemListRequest &) = default ;
    DescribeImageBaselineItemListRequest& operator=(DescribeImageBaselineItemListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->baselineClassKey_ != nullptr
        && this->baselineNameKey_ != nullptr && this->currentPage_ != nullptr && this->imageUuid_ != nullptr && this->lang_ != nullptr && this->pageSize_ != nullptr
        && this->scanRange_ != nullptr && this->status_ != nullptr && this->uuids_ != nullptr; };
    // baselineClassKey Field Functions 
    bool hasBaselineClassKey() const { return this->baselineClassKey_ != nullptr;};
    void deleteBaselineClassKey() { this->baselineClassKey_ = nullptr;};
    inline string baselineClassKey() const { DARABONBA_PTR_GET_DEFAULT(baselineClassKey_, "") };
    inline DescribeImageBaselineItemListRequest& setBaselineClassKey(string baselineClassKey) { DARABONBA_PTR_SET_VALUE(baselineClassKey_, baselineClassKey) };


    // baselineNameKey Field Functions 
    bool hasBaselineNameKey() const { return this->baselineNameKey_ != nullptr;};
    void deleteBaselineNameKey() { this->baselineNameKey_ = nullptr;};
    inline string baselineNameKey() const { DARABONBA_PTR_GET_DEFAULT(baselineNameKey_, "") };
    inline DescribeImageBaselineItemListRequest& setBaselineNameKey(string baselineNameKey) { DARABONBA_PTR_SET_VALUE(baselineNameKey_, baselineNameKey) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeImageBaselineItemListRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // imageUuid Field Functions 
    bool hasImageUuid() const { return this->imageUuid_ != nullptr;};
    void deleteImageUuid() { this->imageUuid_ = nullptr;};
    inline string imageUuid() const { DARABONBA_PTR_GET_DEFAULT(imageUuid_, "") };
    inline DescribeImageBaselineItemListRequest& setImageUuid(string imageUuid) { DARABONBA_PTR_SET_VALUE(imageUuid_, imageUuid) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeImageBaselineItemListRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeImageBaselineItemListRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // scanRange Field Functions 
    bool hasScanRange() const { return this->scanRange_ != nullptr;};
    void deleteScanRange() { this->scanRange_ = nullptr;};
    inline const vector<string> & scanRange() const { DARABONBA_PTR_GET_CONST(scanRange_, vector<string>) };
    inline vector<string> scanRange() { DARABONBA_PTR_GET(scanRange_, vector<string>) };
    inline DescribeImageBaselineItemListRequest& setScanRange(const vector<string> & scanRange) { DARABONBA_PTR_SET_VALUE(scanRange_, scanRange) };
    inline DescribeImageBaselineItemListRequest& setScanRange(vector<string> && scanRange) { DARABONBA_PTR_SET_RVALUE(scanRange_, scanRange) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeImageBaselineItemListRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // uuids Field Functions 
    bool hasUuids() const { return this->uuids_ != nullptr;};
    void deleteUuids() { this->uuids_ = nullptr;};
    inline const vector<string> & uuids() const { DARABONBA_PTR_GET_CONST(uuids_, vector<string>) };
    inline vector<string> uuids() { DARABONBA_PTR_GET(uuids_, vector<string>) };
    inline DescribeImageBaselineItemListRequest& setUuids(const vector<string> & uuids) { DARABONBA_PTR_SET_VALUE(uuids_, uuids) };
    inline DescribeImageBaselineItemListRequest& setUuids(vector<string> && uuids) { DARABONBA_PTR_SET_RVALUE(uuids_, uuids) };


  protected:
    // The key of the baseline type.
    std::shared_ptr<string> baselineClassKey_ = nullptr;
    // The key of the baseline name.
    std::shared_ptr<string> baselineNameKey_ = nullptr;
    // The number of the page to return.
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    // The UUID of the image.
    // 
    // This parameter is required.
    std::shared_ptr<string> imageUuid_ = nullptr;
    // The language of the content within the request and response. Default value: **zh**. Valid values:
    // 
    // *   **zh**: Chinese
    // *   **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // The number of entries to return on each page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The types of the assets that are scanned.
    std::shared_ptr<vector<string>> scanRange_ = nullptr;
    // The status of the baseline risk item. Valid values:
    // 
    // *   **0**: unfixed
    // *   **1**: fixed
    // *   **2**: pending verification
    // *   **3**: fixing failed
    std::shared_ptr<string> status_ = nullptr;
    // The UUIDs of images.
    std::shared_ptr<vector<string>> uuids_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
