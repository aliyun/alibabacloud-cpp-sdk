// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIFECYCLEPOLICYLOGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIFECYCLEPOLICYLOGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class DescribeLifecyclePolicyLogsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLifecyclePolicyLogsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LifecyclePolicyLogs, lifecyclePolicyLogs_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLifecyclePolicyLogsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LifecyclePolicyLogs, lifecyclePolicyLogs_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeLifecyclePolicyLogsResponseBody() = default ;
    DescribeLifecyclePolicyLogsResponseBody(const DescribeLifecyclePolicyLogsResponseBody &) = default ;
    DescribeLifecyclePolicyLogsResponseBody(DescribeLifecyclePolicyLogsResponseBody &&) = default ;
    DescribeLifecyclePolicyLogsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLifecyclePolicyLogsResponseBody() = default ;
    DescribeLifecyclePolicyLogsResponseBody& operator=(const DescribeLifecyclePolicyLogsResponseBody &) = default ;
    DescribeLifecyclePolicyLogsResponseBody& operator=(DescribeLifecyclePolicyLogsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class LifecyclePolicyLogs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const LifecyclePolicyLogs& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Paths, paths_);
        DARABONBA_PTR_TO_JSON(RetrieveRules, retrieveRules_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(StorageType, storageType_);
        DARABONBA_PTR_TO_JSON(Summary, summary_);
        DARABONBA_PTR_TO_JSON(TransitRules, transitRules_);
      };
      friend void from_json(const Darabonba::Json& j, LifecyclePolicyLogs& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Paths, paths_);
        DARABONBA_PTR_FROM_JSON(RetrieveRules, retrieveRules_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(StorageType, storageType_);
        DARABONBA_PTR_FROM_JSON(Summary, summary_);
        DARABONBA_PTR_FROM_JSON(TransitRules, transitRules_);
      };
      LifecyclePolicyLogs() = default ;
      LifecyclePolicyLogs(const LifecyclePolicyLogs &) = default ;
      LifecyclePolicyLogs(LifecyclePolicyLogs &&) = default ;
      LifecyclePolicyLogs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~LifecyclePolicyLogs() = default ;
      LifecyclePolicyLogs& operator=(const LifecyclePolicyLogs &) = default ;
      LifecyclePolicyLogs& operator=(LifecyclePolicyLogs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class TransitRules : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TransitRules& obj) { 
          DARABONBA_PTR_TO_JSON(Attribute, attribute_);
          DARABONBA_PTR_TO_JSON(Threshold, threshold_);
        };
        friend void from_json(const Darabonba::Json& j, TransitRules& obj) { 
          DARABONBA_PTR_FROM_JSON(Attribute, attribute_);
          DARABONBA_PTR_FROM_JSON(Threshold, threshold_);
        };
        TransitRules() = default ;
        TransitRules(const TransitRules &) = default ;
        TransitRules(TransitRules &&) = default ;
        TransitRules(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TransitRules() = default ;
        TransitRules& operator=(const TransitRules &) = default ;
        TransitRules& operator=(TransitRules &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->attribute_ == nullptr
        && this->threshold_ == nullptr; };
        // attribute Field Functions 
        bool hasAttribute() const { return this->attribute_ != nullptr;};
        void deleteAttribute() { this->attribute_ = nullptr;};
        inline string getAttribute() const { DARABONBA_PTR_GET_DEFAULT(attribute_, "") };
        inline TransitRules& setAttribute(string attribute) { DARABONBA_PTR_SET_VALUE(attribute_, attribute) };


        // threshold Field Functions 
        bool hasThreshold() const { return this->threshold_ != nullptr;};
        void deleteThreshold() { this->threshold_ = nullptr;};
        inline string getThreshold() const { DARABONBA_PTR_GET_DEFAULT(threshold_, "") };
        inline TransitRules& setThreshold(string threshold) { DARABONBA_PTR_SET_VALUE(threshold_, threshold) };


      protected:
        shared_ptr<string> attribute_ {};
        shared_ptr<string> threshold_ {};
      };

      class RetrieveRules : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RetrieveRules& obj) { 
          DARABONBA_PTR_TO_JSON(Attribute, attribute_);
          DARABONBA_PTR_TO_JSON(Threshold, threshold_);
        };
        friend void from_json(const Darabonba::Json& j, RetrieveRules& obj) { 
          DARABONBA_PTR_FROM_JSON(Attribute, attribute_);
          DARABONBA_PTR_FROM_JSON(Threshold, threshold_);
        };
        RetrieveRules() = default ;
        RetrieveRules(const RetrieveRules &) = default ;
        RetrieveRules(RetrieveRules &&) = default ;
        RetrieveRules(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RetrieveRules() = default ;
        RetrieveRules& operator=(const RetrieveRules &) = default ;
        RetrieveRules& operator=(RetrieveRules &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->attribute_ == nullptr
        && this->threshold_ == nullptr; };
        // attribute Field Functions 
        bool hasAttribute() const { return this->attribute_ != nullptr;};
        void deleteAttribute() { this->attribute_ = nullptr;};
        inline string getAttribute() const { DARABONBA_PTR_GET_DEFAULT(attribute_, "") };
        inline RetrieveRules& setAttribute(string attribute) { DARABONBA_PTR_SET_VALUE(attribute_, attribute) };


        // threshold Field Functions 
        bool hasThreshold() const { return this->threshold_ != nullptr;};
        void deleteThreshold() { this->threshold_ = nullptr;};
        inline string getThreshold() const { DARABONBA_PTR_GET_DEFAULT(threshold_, "") };
        inline RetrieveRules& setThreshold(string threshold) { DARABONBA_PTR_SET_VALUE(threshold_, threshold) };


      protected:
        shared_ptr<string> attribute_ {};
        shared_ptr<string> threshold_ {};
      };

      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->paths_ == nullptr && this->retrieveRules_ == nullptr && this->status_ == nullptr && this->storageType_ == nullptr && this->summary_ == nullptr
        && this->transitRules_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline LifecyclePolicyLogs& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // paths Field Functions 
      bool hasPaths() const { return this->paths_ != nullptr;};
      void deletePaths() { this->paths_ = nullptr;};
      inline const vector<string> & getPaths() const { DARABONBA_PTR_GET_CONST(paths_, vector<string>) };
      inline vector<string> getPaths() { DARABONBA_PTR_GET(paths_, vector<string>) };
      inline LifecyclePolicyLogs& setPaths(const vector<string> & paths) { DARABONBA_PTR_SET_VALUE(paths_, paths) };
      inline LifecyclePolicyLogs& setPaths(vector<string> && paths) { DARABONBA_PTR_SET_RVALUE(paths_, paths) };


      // retrieveRules Field Functions 
      bool hasRetrieveRules() const { return this->retrieveRules_ != nullptr;};
      void deleteRetrieveRules() { this->retrieveRules_ = nullptr;};
      inline const vector<LifecyclePolicyLogs::RetrieveRules> & getRetrieveRules() const { DARABONBA_PTR_GET_CONST(retrieveRules_, vector<LifecyclePolicyLogs::RetrieveRules>) };
      inline vector<LifecyclePolicyLogs::RetrieveRules> getRetrieveRules() { DARABONBA_PTR_GET(retrieveRules_, vector<LifecyclePolicyLogs::RetrieveRules>) };
      inline LifecyclePolicyLogs& setRetrieveRules(const vector<LifecyclePolicyLogs::RetrieveRules> & retrieveRules) { DARABONBA_PTR_SET_VALUE(retrieveRules_, retrieveRules) };
      inline LifecyclePolicyLogs& setRetrieveRules(vector<LifecyclePolicyLogs::RetrieveRules> && retrieveRules) { DARABONBA_PTR_SET_RVALUE(retrieveRules_, retrieveRules) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline LifecyclePolicyLogs& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // storageType Field Functions 
      bool hasStorageType() const { return this->storageType_ != nullptr;};
      void deleteStorageType() { this->storageType_ = nullptr;};
      inline string getStorageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
      inline LifecyclePolicyLogs& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


      // summary Field Functions 
      bool hasSummary() const { return this->summary_ != nullptr;};
      void deleteSummary() { this->summary_ = nullptr;};
      inline string getSummary() const { DARABONBA_PTR_GET_DEFAULT(summary_, "") };
      inline LifecyclePolicyLogs& setSummary(string summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };


      // transitRules Field Functions 
      bool hasTransitRules() const { return this->transitRules_ != nullptr;};
      void deleteTransitRules() { this->transitRules_ = nullptr;};
      inline const vector<LifecyclePolicyLogs::TransitRules> & getTransitRules() const { DARABONBA_PTR_GET_CONST(transitRules_, vector<LifecyclePolicyLogs::TransitRules>) };
      inline vector<LifecyclePolicyLogs::TransitRules> getTransitRules() { DARABONBA_PTR_GET(transitRules_, vector<LifecyclePolicyLogs::TransitRules>) };
      inline LifecyclePolicyLogs& setTransitRules(const vector<LifecyclePolicyLogs::TransitRules> & transitRules) { DARABONBA_PTR_SET_VALUE(transitRules_, transitRules) };
      inline LifecyclePolicyLogs& setTransitRules(vector<LifecyclePolicyLogs::TransitRules> && transitRules) { DARABONBA_PTR_SET_RVALUE(transitRules_, transitRules) };


    protected:
      shared_ptr<string> createTime_ {};
      shared_ptr<vector<string>> paths_ {};
      shared_ptr<vector<LifecyclePolicyLogs::RetrieveRules>> retrieveRules_ {};
      shared_ptr<string> status_ {};
      shared_ptr<string> storageType_ {};
      shared_ptr<string> summary_ {};
      shared_ptr<vector<LifecyclePolicyLogs::TransitRules>> transitRules_ {};
    };

    virtual bool empty() const override { return this->lifecyclePolicyLogs_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->totalCount_ == nullptr; };
    // lifecyclePolicyLogs Field Functions 
    bool hasLifecyclePolicyLogs() const { return this->lifecyclePolicyLogs_ != nullptr;};
    void deleteLifecyclePolicyLogs() { this->lifecyclePolicyLogs_ = nullptr;};
    inline const vector<DescribeLifecyclePolicyLogsResponseBody::LifecyclePolicyLogs> & getLifecyclePolicyLogs() const { DARABONBA_PTR_GET_CONST(lifecyclePolicyLogs_, vector<DescribeLifecyclePolicyLogsResponseBody::LifecyclePolicyLogs>) };
    inline vector<DescribeLifecyclePolicyLogsResponseBody::LifecyclePolicyLogs> getLifecyclePolicyLogs() { DARABONBA_PTR_GET(lifecyclePolicyLogs_, vector<DescribeLifecyclePolicyLogsResponseBody::LifecyclePolicyLogs>) };
    inline DescribeLifecyclePolicyLogsResponseBody& setLifecyclePolicyLogs(const vector<DescribeLifecyclePolicyLogsResponseBody::LifecyclePolicyLogs> & lifecyclePolicyLogs) { DARABONBA_PTR_SET_VALUE(lifecyclePolicyLogs_, lifecyclePolicyLogs) };
    inline DescribeLifecyclePolicyLogsResponseBody& setLifecyclePolicyLogs(vector<DescribeLifecyclePolicyLogsResponseBody::LifecyclePolicyLogs> && lifecyclePolicyLogs) { DARABONBA_PTR_SET_RVALUE(lifecyclePolicyLogs_, lifecyclePolicyLogs) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeLifecyclePolicyLogsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeLifecyclePolicyLogsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLifecyclePolicyLogsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeLifecyclePolicyLogsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeLifecyclePolicyLogsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<vector<DescribeLifecyclePolicyLogsResponseBody::LifecyclePolicyLogs>> lifecyclePolicyLogs_ {};
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
