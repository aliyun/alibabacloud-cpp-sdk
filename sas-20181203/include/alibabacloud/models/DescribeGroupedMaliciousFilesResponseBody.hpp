// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGROUPEDMALICIOUSFILESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGROUPEDMALICIOUSFILESRESPONSEBODY_HPP_
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
  class DescribeGroupedMaliciousFilesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGroupedMaliciousFilesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(GroupedMaliciousFileResponse, groupedMaliciousFileResponse_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGroupedMaliciousFilesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupedMaliciousFileResponse, groupedMaliciousFileResponse_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeGroupedMaliciousFilesResponseBody() = default ;
    DescribeGroupedMaliciousFilesResponseBody(const DescribeGroupedMaliciousFilesResponseBody &) = default ;
    DescribeGroupedMaliciousFilesResponseBody(DescribeGroupedMaliciousFilesResponseBody &&) = default ;
    DescribeGroupedMaliciousFilesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGroupedMaliciousFilesResponseBody() = default ;
    DescribeGroupedMaliciousFilesResponseBody& operator=(const DescribeGroupedMaliciousFilesResponseBody &) = default ;
    DescribeGroupedMaliciousFilesResponseBody& operator=(DescribeGroupedMaliciousFilesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PageInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PageInfo& obj) { 
        DARABONBA_PTR_TO_JSON(Count, count_);
        DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, PageInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(Count, count_);
        DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      PageInfo() = default ;
      PageInfo(const PageInfo &) = default ;
      PageInfo(PageInfo &&) = default ;
      PageInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PageInfo() = default ;
      PageInfo& operator=(const PageInfo &) = default ;
      PageInfo& operator=(PageInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->count_ == nullptr
        && this->currentPage_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // count Field Functions 
      bool hasCount() const { return this->count_ != nullptr;};
      void deleteCount() { this->count_ = nullptr;};
      inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
      inline PageInfo& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


      // currentPage Field Functions 
      bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
      void deleteCurrentPage() { this->currentPage_ = nullptr;};
      inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
      inline PageInfo& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline PageInfo& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline PageInfo& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The number of entries returned on the current page.
      shared_ptr<int32_t> count_ {};
      // The page number of the returned page.
      shared_ptr<int32_t> currentPage_ {};
      // The number of entries returned per page. Default value: **20**.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of entries returned.
      shared_ptr<int32_t> totalCount_ {};
    };

    class GroupedMaliciousFileResponse : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const GroupedMaliciousFileResponse& obj) { 
        DARABONBA_PTR_TO_JSON(FirstScanTimestamp, firstScanTimestamp_);
        DARABONBA_PTR_TO_JSON(ImageCount, imageCount_);
        DARABONBA_PTR_TO_JSON(LatestScanTimestamp, latestScanTimestamp_);
        DARABONBA_PTR_TO_JSON(Level, level_);
        DARABONBA_PTR_TO_JSON(MaliciousKey, maliciousKey_);
        DARABONBA_PTR_TO_JSON(MaliciousMd5, maliciousMd5_);
        DARABONBA_PTR_TO_JSON(MaliciousName, maliciousName_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, GroupedMaliciousFileResponse& obj) { 
        DARABONBA_PTR_FROM_JSON(FirstScanTimestamp, firstScanTimestamp_);
        DARABONBA_PTR_FROM_JSON(ImageCount, imageCount_);
        DARABONBA_PTR_FROM_JSON(LatestScanTimestamp, latestScanTimestamp_);
        DARABONBA_PTR_FROM_JSON(Level, level_);
        DARABONBA_PTR_FROM_JSON(MaliciousKey, maliciousKey_);
        DARABONBA_PTR_FROM_JSON(MaliciousMd5, maliciousMd5_);
        DARABONBA_PTR_FROM_JSON(MaliciousName, maliciousName_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      GroupedMaliciousFileResponse() = default ;
      GroupedMaliciousFileResponse(const GroupedMaliciousFileResponse &) = default ;
      GroupedMaliciousFileResponse(GroupedMaliciousFileResponse &&) = default ;
      GroupedMaliciousFileResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~GroupedMaliciousFileResponse() = default ;
      GroupedMaliciousFileResponse& operator=(const GroupedMaliciousFileResponse &) = default ;
      GroupedMaliciousFileResponse& operator=(GroupedMaliciousFileResponse &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->firstScanTimestamp_ == nullptr
        && this->imageCount_ == nullptr && this->latestScanTimestamp_ == nullptr && this->level_ == nullptr && this->maliciousKey_ == nullptr && this->maliciousMd5_ == nullptr
        && this->maliciousName_ == nullptr && this->status_ == nullptr; };
      // firstScanTimestamp Field Functions 
      bool hasFirstScanTimestamp() const { return this->firstScanTimestamp_ != nullptr;};
      void deleteFirstScanTimestamp() { this->firstScanTimestamp_ = nullptr;};
      inline int64_t getFirstScanTimestamp() const { DARABONBA_PTR_GET_DEFAULT(firstScanTimestamp_, 0L) };
      inline GroupedMaliciousFileResponse& setFirstScanTimestamp(int64_t firstScanTimestamp) { DARABONBA_PTR_SET_VALUE(firstScanTimestamp_, firstScanTimestamp) };


      // imageCount Field Functions 
      bool hasImageCount() const { return this->imageCount_ != nullptr;};
      void deleteImageCount() { this->imageCount_ = nullptr;};
      inline int64_t getImageCount() const { DARABONBA_PTR_GET_DEFAULT(imageCount_, 0L) };
      inline GroupedMaliciousFileResponse& setImageCount(int64_t imageCount) { DARABONBA_PTR_SET_VALUE(imageCount_, imageCount) };


      // latestScanTimestamp Field Functions 
      bool hasLatestScanTimestamp() const { return this->latestScanTimestamp_ != nullptr;};
      void deleteLatestScanTimestamp() { this->latestScanTimestamp_ = nullptr;};
      inline int64_t getLatestScanTimestamp() const { DARABONBA_PTR_GET_DEFAULT(latestScanTimestamp_, 0L) };
      inline GroupedMaliciousFileResponse& setLatestScanTimestamp(int64_t latestScanTimestamp) { DARABONBA_PTR_SET_VALUE(latestScanTimestamp_, latestScanTimestamp) };


      // level Field Functions 
      bool hasLevel() const { return this->level_ != nullptr;};
      void deleteLevel() { this->level_ = nullptr;};
      inline string getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
      inline GroupedMaliciousFileResponse& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


      // maliciousKey Field Functions 
      bool hasMaliciousKey() const { return this->maliciousKey_ != nullptr;};
      void deleteMaliciousKey() { this->maliciousKey_ = nullptr;};
      inline string getMaliciousKey() const { DARABONBA_PTR_GET_DEFAULT(maliciousKey_, "") };
      inline GroupedMaliciousFileResponse& setMaliciousKey(string maliciousKey) { DARABONBA_PTR_SET_VALUE(maliciousKey_, maliciousKey) };


      // maliciousMd5 Field Functions 
      bool hasMaliciousMd5() const { return this->maliciousMd5_ != nullptr;};
      void deleteMaliciousMd5() { this->maliciousMd5_ = nullptr;};
      inline string getMaliciousMd5() const { DARABONBA_PTR_GET_DEFAULT(maliciousMd5_, "") };
      inline GroupedMaliciousFileResponse& setMaliciousMd5(string maliciousMd5) { DARABONBA_PTR_SET_VALUE(maliciousMd5_, maliciousMd5) };


      // maliciousName Field Functions 
      bool hasMaliciousName() const { return this->maliciousName_ != nullptr;};
      void deleteMaliciousName() { this->maliciousName_ = nullptr;};
      inline string getMaliciousName() const { DARABONBA_PTR_GET_DEFAULT(maliciousName_, "") };
      inline GroupedMaliciousFileResponse& setMaliciousName(string maliciousName) { DARABONBA_PTR_SET_VALUE(maliciousName_, maliciousName) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline GroupedMaliciousFileResponse& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The timestamp generated when the first scan was performed. Unit: milliseconds.
      shared_ptr<int64_t> firstScanTimestamp_ {};
      // The number of affected images.
      shared_ptr<int64_t> imageCount_ {};
      // The timestamp generated when the last scan was performed. Unit: milliseconds.
      shared_ptr<int64_t> latestScanTimestamp_ {};
      // The severity of the malicious image sample. Valid values:
      // 
      // *   **serious**
      // *   **suspicious**
      // *   **remind**
      shared_ptr<string> level_ {};
      // The keyword of the malicious image sample.
      shared_ptr<string> maliciousKey_ {};
      // The MD5 hash value of the malicious image sample.
      shared_ptr<string> maliciousMd5_ {};
      // The name of the malicious image sample.
      shared_ptr<string> maliciousName_ {};
      // The handling status of the malicious image sample. Valid values:
      // 
      // *   **0**: unhandled
      // *   **1**: handled
      // *   **2**: verifying
      // *   **3**: whitelisted
      shared_ptr<int32_t> status_ {};
    };

    virtual bool empty() const override { return this->groupedMaliciousFileResponse_ == nullptr
        && this->pageInfo_ == nullptr && this->requestId_ == nullptr; };
    // groupedMaliciousFileResponse Field Functions 
    bool hasGroupedMaliciousFileResponse() const { return this->groupedMaliciousFileResponse_ != nullptr;};
    void deleteGroupedMaliciousFileResponse() { this->groupedMaliciousFileResponse_ = nullptr;};
    inline const vector<DescribeGroupedMaliciousFilesResponseBody::GroupedMaliciousFileResponse> & getGroupedMaliciousFileResponse() const { DARABONBA_PTR_GET_CONST(groupedMaliciousFileResponse_, vector<DescribeGroupedMaliciousFilesResponseBody::GroupedMaliciousFileResponse>) };
    inline vector<DescribeGroupedMaliciousFilesResponseBody::GroupedMaliciousFileResponse> getGroupedMaliciousFileResponse() { DARABONBA_PTR_GET(groupedMaliciousFileResponse_, vector<DescribeGroupedMaliciousFilesResponseBody::GroupedMaliciousFileResponse>) };
    inline DescribeGroupedMaliciousFilesResponseBody& setGroupedMaliciousFileResponse(const vector<DescribeGroupedMaliciousFilesResponseBody::GroupedMaliciousFileResponse> & groupedMaliciousFileResponse) { DARABONBA_PTR_SET_VALUE(groupedMaliciousFileResponse_, groupedMaliciousFileResponse) };
    inline DescribeGroupedMaliciousFilesResponseBody& setGroupedMaliciousFileResponse(vector<DescribeGroupedMaliciousFilesResponseBody::GroupedMaliciousFileResponse> && groupedMaliciousFileResponse) { DARABONBA_PTR_SET_RVALUE(groupedMaliciousFileResponse_, groupedMaliciousFileResponse) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const DescribeGroupedMaliciousFilesResponseBody::PageInfo & getPageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, DescribeGroupedMaliciousFilesResponseBody::PageInfo) };
    inline DescribeGroupedMaliciousFilesResponseBody::PageInfo getPageInfo() { DARABONBA_PTR_GET(pageInfo_, DescribeGroupedMaliciousFilesResponseBody::PageInfo) };
    inline DescribeGroupedMaliciousFilesResponseBody& setPageInfo(const DescribeGroupedMaliciousFilesResponseBody::PageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline DescribeGroupedMaliciousFilesResponseBody& setPageInfo(DescribeGroupedMaliciousFilesResponseBody::PageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeGroupedMaliciousFilesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the malicious image sample.
    shared_ptr<vector<DescribeGroupedMaliciousFilesResponseBody::GroupedMaliciousFileResponse>> groupedMaliciousFileResponse_ {};
    // The pagination information.
    shared_ptr<DescribeGroupedMaliciousFilesResponseBody::PageInfo> pageInfo_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
