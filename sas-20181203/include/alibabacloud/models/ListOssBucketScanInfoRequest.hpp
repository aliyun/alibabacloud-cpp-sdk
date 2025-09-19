// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTOSSBUCKETSCANINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTOSSBUCKETSCANINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListOssBucketScanInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListOssBucketScanInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BucketName, bucketName_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(FuzzBucketName, fuzzBucketName_);
      DARABONBA_PTR_TO_JSON(HasRisk, hasRisk_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListOssBucketScanInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BucketName, bucketName_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(FuzzBucketName, fuzzBucketName_);
      DARABONBA_PTR_FROM_JSON(HasRisk, hasRisk_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ListOssBucketScanInfoRequest() = default ;
    ListOssBucketScanInfoRequest(const ListOssBucketScanInfoRequest &) = default ;
    ListOssBucketScanInfoRequest(ListOssBucketScanInfoRequest &&) = default ;
    ListOssBucketScanInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListOssBucketScanInfoRequest() = default ;
    ListOssBucketScanInfoRequest& operator=(const ListOssBucketScanInfoRequest &) = default ;
    ListOssBucketScanInfoRequest& operator=(ListOssBucketScanInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bucketName_ != nullptr
        && this->currentPage_ != nullptr && this->fuzzBucketName_ != nullptr && this->hasRisk_ != nullptr && this->lang_ != nullptr && this->pageSize_ != nullptr
        && this->status_ != nullptr; };
    // bucketName Field Functions 
    bool hasBucketName() const { return this->bucketName_ != nullptr;};
    void deleteBucketName() { this->bucketName_ = nullptr;};
    inline string bucketName() const { DARABONBA_PTR_GET_DEFAULT(bucketName_, "") };
    inline ListOssBucketScanInfoRequest& setBucketName(string bucketName) { DARABONBA_PTR_SET_VALUE(bucketName_, bucketName) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline ListOssBucketScanInfoRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // fuzzBucketName Field Functions 
    bool hasFuzzBucketName() const { return this->fuzzBucketName_ != nullptr;};
    void deleteFuzzBucketName() { this->fuzzBucketName_ = nullptr;};
    inline string fuzzBucketName() const { DARABONBA_PTR_GET_DEFAULT(fuzzBucketName_, "") };
    inline ListOssBucketScanInfoRequest& setFuzzBucketName(string fuzzBucketName) { DARABONBA_PTR_SET_VALUE(fuzzBucketName_, fuzzBucketName) };


    // hasRisk Field Functions 
    bool hasHasRisk() const { return this->hasRisk_ != nullptr;};
    void deleteHasRisk() { this->hasRisk_ = nullptr;};
    inline int32_t hasRisk() const { DARABONBA_PTR_GET_DEFAULT(hasRisk_, 0) };
    inline ListOssBucketScanInfoRequest& setHasRisk(int32_t hasRisk) { DARABONBA_PTR_SET_VALUE(hasRisk_, hasRisk) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline ListOssBucketScanInfoRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListOssBucketScanInfoRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline ListOssBucketScanInfoRequest& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The name of the bucket.
    std::shared_ptr<string> bucketName_ = nullptr;
    // The page number.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    // The name of the bucket that is used for fuzzy match.
    std::shared_ptr<string> fuzzBucketName_ = nullptr;
    // Specifies whether at-risk objects are detected. Valid values:
    // 
    // *   **0**: No at-risk objects are detected.
    // *   **1**: At-risk objects are detected.
    std::shared_ptr<int32_t> hasRisk_ = nullptr;
    // The language of the content in the request and response. Default value: **zh**. Valid values:
    // 
    // *   **zh**: Chinese.
    // *   **en**: English.
    std::shared_ptr<string> lang_ = nullptr;
    // The number of entries per page.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The check status of the bucket. Valid values:
    // 
    // *   **1**: The bucket is not checked.
    // *   **2**: All objects in the bucket are being checked.
    // *   **3**: Only new objects in the bucket are being checked.
    // *   **4**: The bucket is checked.
    std::shared_ptr<int32_t> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
