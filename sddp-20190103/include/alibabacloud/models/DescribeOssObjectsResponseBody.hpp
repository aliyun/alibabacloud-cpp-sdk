// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEOSSOBJECTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEOSSOBJECTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sddp20190103
{
namespace Models
{
  class DescribeOssObjectsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeOssObjectsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(Marker, marker_);
      DARABONBA_PTR_TO_JSON(NextMarker, nextMarker_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(Truncated, truncated_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeOssObjectsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(Marker, marker_);
      DARABONBA_PTR_FROM_JSON(NextMarker, nextMarker_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(Truncated, truncated_);
    };
    DescribeOssObjectsResponseBody() = default ;
    DescribeOssObjectsResponseBody(const DescribeOssObjectsResponseBody &) = default ;
    DescribeOssObjectsResponseBody(DescribeOssObjectsResponseBody &&) = default ;
    DescribeOssObjectsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeOssObjectsResponseBody() = default ;
    DescribeOssObjectsResponseBody& operator=(const DescribeOssObjectsResponseBody &) = default ;
    DescribeOssObjectsResponseBody& operator=(DescribeOssObjectsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(BucketName, bucketName_);
        DARABONBA_PTR_TO_JSON(Category, category_);
        DARABONBA_PTR_TO_JSON(CategoryName, categoryName_);
        DARABONBA_PTR_TO_JSON(FileCategoryCode, fileCategoryCode_);
        DARABONBA_PTR_TO_JSON(FileCategoryName, fileCategoryName_);
        DARABONBA_PTR_TO_JSON(FileId, fileId_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(LastModifiedTime, lastModifiedTime_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(RiskLevelId, riskLevelId_);
        DARABONBA_PTR_TO_JSON(RiskLevelName, riskLevelName_);
        DARABONBA_PTR_TO_JSON(RuleCount, ruleCount_);
        DARABONBA_PTR_TO_JSON(RuleList, ruleList_);
        DARABONBA_PTR_TO_JSON(SensitiveCount, sensitiveCount_);
        DARABONBA_PTR_TO_JSON(Size, size_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(BucketName, bucketName_);
        DARABONBA_PTR_FROM_JSON(Category, category_);
        DARABONBA_PTR_FROM_JSON(CategoryName, categoryName_);
        DARABONBA_PTR_FROM_JSON(FileCategoryCode, fileCategoryCode_);
        DARABONBA_PTR_FROM_JSON(FileCategoryName, fileCategoryName_);
        DARABONBA_PTR_FROM_JSON(FileId, fileId_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(LastModifiedTime, lastModifiedTime_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(RiskLevelId, riskLevelId_);
        DARABONBA_PTR_FROM_JSON(RiskLevelName, riskLevelName_);
        DARABONBA_PTR_FROM_JSON(RuleCount, ruleCount_);
        DARABONBA_PTR_FROM_JSON(RuleList, ruleList_);
        DARABONBA_PTR_FROM_JSON(SensitiveCount, sensitiveCount_);
        DARABONBA_PTR_FROM_JSON(Size, size_);
      };
      Items() = default ;
      Items(const Items &) = default ;
      Items(Items &&) = default ;
      Items(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Items() = default ;
      Items& operator=(const Items &) = default ;
      Items& operator=(Items &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class RuleList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RuleList& obj) { 
          DARABONBA_PTR_TO_JSON(Count, count_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(RiskLevelId, riskLevelId_);
        };
        friend void from_json(const Darabonba::Json& j, RuleList& obj) { 
          DARABONBA_PTR_FROM_JSON(Count, count_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(RiskLevelId, riskLevelId_);
        };
        RuleList() = default ;
        RuleList(const RuleList &) = default ;
        RuleList(RuleList &&) = default ;
        RuleList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RuleList() = default ;
        RuleList& operator=(const RuleList &) = default ;
        RuleList& operator=(RuleList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->count_ == nullptr
        && this->name_ == nullptr && this->riskLevelId_ == nullptr; };
        // count Field Functions 
        bool hasCount() const { return this->count_ != nullptr;};
        void deleteCount() { this->count_ = nullptr;};
        inline int64_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
        inline RuleList& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline RuleList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // riskLevelId Field Functions 
        bool hasRiskLevelId() const { return this->riskLevelId_ != nullptr;};
        void deleteRiskLevelId() { this->riskLevelId_ = nullptr;};
        inline int64_t getRiskLevelId() const { DARABONBA_PTR_GET_DEFAULT(riskLevelId_, 0L) };
        inline RuleList& setRiskLevelId(int64_t riskLevelId) { DARABONBA_PTR_SET_VALUE(riskLevelId_, riskLevelId) };


      protected:
        // The number of times that the rule is hit.
        shared_ptr<int64_t> count_ {};
        // The search keyword. Fuzzy match is supported.
        shared_ptr<string> name_ {};
        // The ID of the sensitivity level of the OSS object. Valid values:
        // 
        // *   **1**: N/A, which indicates that no sensitive data is detected.
        // *   **2**: S1, which indicates the low sensitivity level.
        // *   **3**: S2, which indicates the medium sensitivity level.
        // *   **4**: S3, which indicates the high sensitivity level.
        // *   **5**: S4, which indicates the highest sensitivity level.
        shared_ptr<int64_t> riskLevelId_ {};
      };

      virtual bool empty() const override { return this->bucketName_ == nullptr
        && this->category_ == nullptr && this->categoryName_ == nullptr && this->fileCategoryCode_ == nullptr && this->fileCategoryName_ == nullptr && this->fileId_ == nullptr
        && this->id_ == nullptr && this->instanceId_ == nullptr && this->lastModifiedTime_ == nullptr && this->name_ == nullptr && this->regionId_ == nullptr
        && this->riskLevelId_ == nullptr && this->riskLevelName_ == nullptr && this->ruleCount_ == nullptr && this->ruleList_ == nullptr && this->sensitiveCount_ == nullptr
        && this->size_ == nullptr; };
      // bucketName Field Functions 
      bool hasBucketName() const { return this->bucketName_ != nullptr;};
      void deleteBucketName() { this->bucketName_ = nullptr;};
      inline string getBucketName() const { DARABONBA_PTR_GET_DEFAULT(bucketName_, "") };
      inline Items& setBucketName(string bucketName) { DARABONBA_PTR_SET_VALUE(bucketName_, bucketName) };


      // category Field Functions 
      bool hasCategory() const { return this->category_ != nullptr;};
      void deleteCategory() { this->category_ = nullptr;};
      inline int64_t getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, 0L) };
      inline Items& setCategory(int64_t category) { DARABONBA_PTR_SET_VALUE(category_, category) };


      // categoryName Field Functions 
      bool hasCategoryName() const { return this->categoryName_ != nullptr;};
      void deleteCategoryName() { this->categoryName_ = nullptr;};
      inline string getCategoryName() const { DARABONBA_PTR_GET_DEFAULT(categoryName_, "") };
      inline Items& setCategoryName(string categoryName) { DARABONBA_PTR_SET_VALUE(categoryName_, categoryName) };


      // fileCategoryCode Field Functions 
      bool hasFileCategoryCode() const { return this->fileCategoryCode_ != nullptr;};
      void deleteFileCategoryCode() { this->fileCategoryCode_ = nullptr;};
      inline int64_t getFileCategoryCode() const { DARABONBA_PTR_GET_DEFAULT(fileCategoryCode_, 0L) };
      inline Items& setFileCategoryCode(int64_t fileCategoryCode) { DARABONBA_PTR_SET_VALUE(fileCategoryCode_, fileCategoryCode) };


      // fileCategoryName Field Functions 
      bool hasFileCategoryName() const { return this->fileCategoryName_ != nullptr;};
      void deleteFileCategoryName() { this->fileCategoryName_ = nullptr;};
      inline string getFileCategoryName() const { DARABONBA_PTR_GET_DEFAULT(fileCategoryName_, "") };
      inline Items& setFileCategoryName(string fileCategoryName) { DARABONBA_PTR_SET_VALUE(fileCategoryName_, fileCategoryName) };


      // fileId Field Functions 
      bool hasFileId() const { return this->fileId_ != nullptr;};
      void deleteFileId() { this->fileId_ = nullptr;};
      inline string getFileId() const { DARABONBA_PTR_GET_DEFAULT(fileId_, "") };
      inline Items& setFileId(string fileId) { DARABONBA_PTR_SET_VALUE(fileId_, fileId) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline Items& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline int64_t getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, 0L) };
      inline Items& setInstanceId(int64_t instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // lastModifiedTime Field Functions 
      bool hasLastModifiedTime() const { return this->lastModifiedTime_ != nullptr;};
      void deleteLastModifiedTime() { this->lastModifiedTime_ = nullptr;};
      inline int64_t getLastModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(lastModifiedTime_, 0L) };
      inline Items& setLastModifiedTime(int64_t lastModifiedTime) { DARABONBA_PTR_SET_VALUE(lastModifiedTime_, lastModifiedTime) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Items& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Items& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // riskLevelId Field Functions 
      bool hasRiskLevelId() const { return this->riskLevelId_ != nullptr;};
      void deleteRiskLevelId() { this->riskLevelId_ = nullptr;};
      inline int64_t getRiskLevelId() const { DARABONBA_PTR_GET_DEFAULT(riskLevelId_, 0L) };
      inline Items& setRiskLevelId(int64_t riskLevelId) { DARABONBA_PTR_SET_VALUE(riskLevelId_, riskLevelId) };


      // riskLevelName Field Functions 
      bool hasRiskLevelName() const { return this->riskLevelName_ != nullptr;};
      void deleteRiskLevelName() { this->riskLevelName_ = nullptr;};
      inline string getRiskLevelName() const { DARABONBA_PTR_GET_DEFAULT(riskLevelName_, "") };
      inline Items& setRiskLevelName(string riskLevelName) { DARABONBA_PTR_SET_VALUE(riskLevelName_, riskLevelName) };


      // ruleCount Field Functions 
      bool hasRuleCount() const { return this->ruleCount_ != nullptr;};
      void deleteRuleCount() { this->ruleCount_ = nullptr;};
      inline int32_t getRuleCount() const { DARABONBA_PTR_GET_DEFAULT(ruleCount_, 0) };
      inline Items& setRuleCount(int32_t ruleCount) { DARABONBA_PTR_SET_VALUE(ruleCount_, ruleCount) };


      // ruleList Field Functions 
      bool hasRuleList() const { return this->ruleList_ != nullptr;};
      void deleteRuleList() { this->ruleList_ = nullptr;};
      inline const vector<Items::RuleList> & getRuleList() const { DARABONBA_PTR_GET_CONST(ruleList_, vector<Items::RuleList>) };
      inline vector<Items::RuleList> getRuleList() { DARABONBA_PTR_GET(ruleList_, vector<Items::RuleList>) };
      inline Items& setRuleList(const vector<Items::RuleList> & ruleList) { DARABONBA_PTR_SET_VALUE(ruleList_, ruleList) };
      inline Items& setRuleList(vector<Items::RuleList> && ruleList) { DARABONBA_PTR_SET_RVALUE(ruleList_, ruleList) };


      // sensitiveCount Field Functions 
      bool hasSensitiveCount() const { return this->sensitiveCount_ != nullptr;};
      void deleteSensitiveCount() { this->sensitiveCount_ = nullptr;};
      inline int32_t getSensitiveCount() const { DARABONBA_PTR_GET_DEFAULT(sensitiveCount_, 0) };
      inline Items& setSensitiveCount(int32_t sensitiveCount) { DARABONBA_PTR_SET_VALUE(sensitiveCount_, sensitiveCount) };


      // size Field Functions 
      bool hasSize() const { return this->size_ != nullptr;};
      void deleteSize() { this->size_ = nullptr;};
      inline int64_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
      inline Items& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    protected:
      // The name of the bucket.
      shared_ptr<string> bucketName_ {};
      // The type of the OSS object. Valid values include **900001**, **800015**, or **800005**, which indicates the MP4 file, PDF file, or OSS configuration file, respectively.
      shared_ptr<int64_t> category_ {};
      // The name of the file type.
      shared_ptr<string> categoryName_ {};
      // The code of the file type.
      shared_ptr<int64_t> fileCategoryCode_ {};
      // The name of the file type.
      shared_ptr<string> fileCategoryName_ {};
      // The file ID of the OSS object.
      shared_ptr<string> fileId_ {};
      // The ID of the OSS object.
      shared_ptr<string> id_ {};
      // The ID of the instance to which the OSS object belongs.
      shared_ptr<int64_t> instanceId_ {};
      // The time when the file was last modified.
      shared_ptr<int64_t> lastModifiedTime_ {};
      // The name of the OSS object.
      shared_ptr<string> name_ {};
      // The region ID of the OSS object.
      shared_ptr<string> regionId_ {};
      // The ID of the sensitivity level of the OSS object. Valid values:
      // 
      // *   **1**: N/A, which indicates that no sensitive data is detected.
      // *   **2**: S1, which indicates the low sensitivity level.
      // *   **3**: S2, which indicates the medium sensitivity level.
      // *   **4**: S3, which indicates the high sensitivity level.
      // *   **5**: S4, which indicates the highest sensitivity level.
      shared_ptr<int64_t> riskLevelId_ {};
      // The name of the sensitivity level for the OSS object.
      shared_ptr<string> riskLevelName_ {};
      // The number of rules that are hit.
      shared_ptr<int32_t> ruleCount_ {};
      // The rules.
      shared_ptr<vector<Items::RuleList>> ruleList_ {};
      // The number of fields that are hit.
      shared_ptr<int32_t> sensitiveCount_ {};
      // The size of the file. Unit: bytes.
      shared_ptr<int64_t> size_ {};
    };

    virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->items_ == nullptr && this->marker_ == nullptr && this->nextMarker_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr
        && this->totalCount_ == nullptr && this->truncated_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeOssObjectsResponseBody& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<DescribeOssObjectsResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<DescribeOssObjectsResponseBody::Items>) };
    inline vector<DescribeOssObjectsResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<DescribeOssObjectsResponseBody::Items>) };
    inline DescribeOssObjectsResponseBody& setItems(const vector<DescribeOssObjectsResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeOssObjectsResponseBody& setItems(vector<DescribeOssObjectsResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // marker Field Functions 
    bool hasMarker() const { return this->marker_ != nullptr;};
    void deleteMarker() { this->marker_ = nullptr;};
    inline string getMarker() const { DARABONBA_PTR_GET_DEFAULT(marker_, "") };
    inline DescribeOssObjectsResponseBody& setMarker(string marker) { DARABONBA_PTR_SET_VALUE(marker_, marker) };


    // nextMarker Field Functions 
    bool hasNextMarker() const { return this->nextMarker_ != nullptr;};
    void deleteNextMarker() { this->nextMarker_ = nullptr;};
    inline string getNextMarker() const { DARABONBA_PTR_GET_DEFAULT(nextMarker_, "") };
    inline DescribeOssObjectsResponseBody& setNextMarker(string nextMarker) { DARABONBA_PTR_SET_VALUE(nextMarker_, nextMarker) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeOssObjectsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeOssObjectsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeOssObjectsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // truncated Field Functions 
    bool hasTruncated() const { return this->truncated_ != nullptr;};
    void deleteTruncated() { this->truncated_ = nullptr;};
    inline bool getTruncated() const { DARABONBA_PTR_GET_DEFAULT(truncated_, false) };
    inline DescribeOssObjectsResponseBody& setTruncated(bool truncated) { DARABONBA_PTR_SET_VALUE(truncated_, truncated) };


  protected:
    // The page number of the returned page.
    shared_ptr<int32_t> currentPage_ {};
    // The OSS objects.
    shared_ptr<vector<DescribeOssObjectsResponseBody::Items>> items_ {};
    // This parameter is deprecated.
    shared_ptr<string> marker_ {};
    // The ID value from which the next page of results starts.
    // 
    // >  This parameter is returned only when the `Truncated` parameter is set to `true`.
    shared_ptr<string> nextMarker_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
    // Indicates whether the queried entries are truncated. Valid values:
    // 
    // *   **true**
    // *   **false**
    shared_ptr<bool> truncated_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sddp20190103
#endif
