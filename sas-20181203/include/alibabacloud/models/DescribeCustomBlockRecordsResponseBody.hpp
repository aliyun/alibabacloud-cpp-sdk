// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECUSTOMBLOCKRECORDSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECUSTOMBLOCKRECORDSRESPONSEBODY_HPP_
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
  class DescribeCustomBlockRecordsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCustomBlockRecordsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RecordList, recordList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCustomBlockRecordsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RecordList, recordList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeCustomBlockRecordsResponseBody() = default ;
    DescribeCustomBlockRecordsResponseBody(const DescribeCustomBlockRecordsResponseBody &) = default ;
    DescribeCustomBlockRecordsResponseBody(DescribeCustomBlockRecordsResponseBody &&) = default ;
    DescribeCustomBlockRecordsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCustomBlockRecordsResponseBody() = default ;
    DescribeCustomBlockRecordsResponseBody& operator=(const DescribeCustomBlockRecordsResponseBody &) = default ;
    DescribeCustomBlockRecordsResponseBody& operator=(DescribeCustomBlockRecordsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RecordList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RecordList& obj) { 
        DARABONBA_PTR_TO_JSON(BlockExpireDate, blockExpireDate_);
        DARABONBA_PTR_TO_JSON(BlockIp, blockIp_);
        DARABONBA_PTR_TO_JSON(Bound, bound_);
        DARABONBA_PTR_TO_JSON(EnableCount, enableCount_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(ServerCount, serverCount_);
        DARABONBA_PTR_TO_JSON(Source, source_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TargetList, targetList_);
      };
      friend void from_json(const Darabonba::Json& j, RecordList& obj) { 
        DARABONBA_PTR_FROM_JSON(BlockExpireDate, blockExpireDate_);
        DARABONBA_PTR_FROM_JSON(BlockIp, blockIp_);
        DARABONBA_PTR_FROM_JSON(Bound, bound_);
        DARABONBA_PTR_FROM_JSON(EnableCount, enableCount_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(ServerCount, serverCount_);
        DARABONBA_PTR_FROM_JSON(Source, source_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TargetList, targetList_);
      };
      RecordList() = default ;
      RecordList(const RecordList &) = default ;
      RecordList(RecordList &&) = default ;
      RecordList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RecordList() = default ;
      RecordList& operator=(const RecordList &) = default ;
      RecordList& operator=(RecordList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class TargetList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TargetList& obj) { 
          DARABONBA_PTR_TO_JSON(Target, target_);
          DARABONBA_PTR_TO_JSON(TargetType, targetType_);
        };
        friend void from_json(const Darabonba::Json& j, TargetList& obj) { 
          DARABONBA_PTR_FROM_JSON(Target, target_);
          DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
        };
        TargetList() = default ;
        TargetList(const TargetList &) = default ;
        TargetList(TargetList &&) = default ;
        TargetList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TargetList() = default ;
        TargetList& operator=(const TargetList &) = default ;
        TargetList& operator=(TargetList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->target_ == nullptr
        && this->targetType_ == nullptr; };
        // target Field Functions 
        bool hasTarget() const { return this->target_ != nullptr;};
        void deleteTarget() { this->target_ = nullptr;};
        inline string getTarget() const { DARABONBA_PTR_GET_DEFAULT(target_, "") };
        inline TargetList& setTarget(string target) { DARABONBA_PTR_SET_VALUE(target_, target) };


        // targetType Field Functions 
        bool hasTargetType() const { return this->targetType_ != nullptr;};
        void deleteTargetType() { this->targetType_ = nullptr;};
        inline string getTargetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
        inline TargetList& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


      protected:
        // The ID of the destination asset.
        shared_ptr<string> target_ {};
        // The type of the query. Valid values:
        // 
        // *   Set the value to **uuid**.
        shared_ptr<string> targetType_ {};
      };

      virtual bool empty() const override { return this->blockExpireDate_ == nullptr
        && this->blockIp_ == nullptr && this->bound_ == nullptr && this->enableCount_ == nullptr && this->id_ == nullptr && this->serverCount_ == nullptr
        && this->source_ == nullptr && this->status_ == nullptr && this->targetList_ == nullptr; };
      // blockExpireDate Field Functions 
      bool hasBlockExpireDate() const { return this->blockExpireDate_ != nullptr;};
      void deleteBlockExpireDate() { this->blockExpireDate_ = nullptr;};
      inline int64_t getBlockExpireDate() const { DARABONBA_PTR_GET_DEFAULT(blockExpireDate_, 0L) };
      inline RecordList& setBlockExpireDate(int64_t blockExpireDate) { DARABONBA_PTR_SET_VALUE(blockExpireDate_, blockExpireDate) };


      // blockIp Field Functions 
      bool hasBlockIp() const { return this->blockIp_ != nullptr;};
      void deleteBlockIp() { this->blockIp_ = nullptr;};
      inline string getBlockIp() const { DARABONBA_PTR_GET_DEFAULT(blockIp_, "") };
      inline RecordList& setBlockIp(string blockIp) { DARABONBA_PTR_SET_VALUE(blockIp_, blockIp) };


      // bound Field Functions 
      bool hasBound() const { return this->bound_ != nullptr;};
      void deleteBound() { this->bound_ = nullptr;};
      inline string getBound() const { DARABONBA_PTR_GET_DEFAULT(bound_, "") };
      inline RecordList& setBound(string bound) { DARABONBA_PTR_SET_VALUE(bound_, bound) };


      // enableCount Field Functions 
      bool hasEnableCount() const { return this->enableCount_ != nullptr;};
      void deleteEnableCount() { this->enableCount_ = nullptr;};
      inline int32_t getEnableCount() const { DARABONBA_PTR_GET_DEFAULT(enableCount_, 0) };
      inline RecordList& setEnableCount(int32_t enableCount) { DARABONBA_PTR_SET_VALUE(enableCount_, enableCount) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline RecordList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // serverCount Field Functions 
      bool hasServerCount() const { return this->serverCount_ != nullptr;};
      void deleteServerCount() { this->serverCount_ = nullptr;};
      inline int32_t getServerCount() const { DARABONBA_PTR_GET_DEFAULT(serverCount_, 0) };
      inline RecordList& setServerCount(int32_t serverCount) { DARABONBA_PTR_SET_VALUE(serverCount_, serverCount) };


      // source Field Functions 
      bool hasSource() const { return this->source_ != nullptr;};
      void deleteSource() { this->source_ = nullptr;};
      inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
      inline RecordList& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline RecordList& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // targetList Field Functions 
      bool hasTargetList() const { return this->targetList_ != nullptr;};
      void deleteTargetList() { this->targetList_ = nullptr;};
      inline const vector<RecordList::TargetList> & getTargetList() const { DARABONBA_PTR_GET_CONST(targetList_, vector<RecordList::TargetList>) };
      inline vector<RecordList::TargetList> getTargetList() { DARABONBA_PTR_GET(targetList_, vector<RecordList::TargetList>) };
      inline RecordList& setTargetList(const vector<RecordList::TargetList> & targetList) { DARABONBA_PTR_SET_VALUE(targetList_, targetList) };
      inline RecordList& setTargetList(vector<RecordList::TargetList> && targetList) { DARABONBA_PTR_SET_RVALUE(targetList_, targetList) };


    protected:
      // The timestamp generated when the block action on the IP address becomes invalid.
      shared_ptr<int64_t> blockExpireDate_ {};
      // The blocked IP address.
      shared_ptr<string> blockIp_ {};
      // The direction of the traffic that is sent by the blocked IP address. Valid values:
      // 
      // *   **in**
      // *   **out**
      shared_ptr<string> bound_ {};
      // The number of servers for which the defense rule is enabled.
      shared_ptr<int32_t> enableCount_ {};
      // The record ID.
      shared_ptr<int64_t> id_ {};
      // The total number of servers on which the IP address is blocked.
      shared_ptr<int32_t> serverCount_ {};
      // The source of the defense rule.
      shared_ptr<string> source_ {};
      // The status of the defense rule against brute-force attacks. Valid values:
      // 
      // *   **0**: invalid.
      // *   **1**: enabled.
      // *   **2**: failed.
      shared_ptr<int32_t> status_ {};
      // The servers for which the defense rule is enabled.
      shared_ptr<vector<RecordList::TargetList>> targetList_ {};
    };

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
      // The number of entries returned per page.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of entries returned.
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->pageInfo_ == nullptr
        && this->recordList_ == nullptr && this->requestId_ == nullptr; };
    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const DescribeCustomBlockRecordsResponseBody::PageInfo & getPageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, DescribeCustomBlockRecordsResponseBody::PageInfo) };
    inline DescribeCustomBlockRecordsResponseBody::PageInfo getPageInfo() { DARABONBA_PTR_GET(pageInfo_, DescribeCustomBlockRecordsResponseBody::PageInfo) };
    inline DescribeCustomBlockRecordsResponseBody& setPageInfo(const DescribeCustomBlockRecordsResponseBody::PageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline DescribeCustomBlockRecordsResponseBody& setPageInfo(DescribeCustomBlockRecordsResponseBody::PageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // recordList Field Functions 
    bool hasRecordList() const { return this->recordList_ != nullptr;};
    void deleteRecordList() { this->recordList_ = nullptr;};
    inline const vector<DescribeCustomBlockRecordsResponseBody::RecordList> & getRecordList() const { DARABONBA_PTR_GET_CONST(recordList_, vector<DescribeCustomBlockRecordsResponseBody::RecordList>) };
    inline vector<DescribeCustomBlockRecordsResponseBody::RecordList> getRecordList() { DARABONBA_PTR_GET(recordList_, vector<DescribeCustomBlockRecordsResponseBody::RecordList>) };
    inline DescribeCustomBlockRecordsResponseBody& setRecordList(const vector<DescribeCustomBlockRecordsResponseBody::RecordList> & recordList) { DARABONBA_PTR_SET_VALUE(recordList_, recordList) };
    inline DescribeCustomBlockRecordsResponseBody& setRecordList(vector<DescribeCustomBlockRecordsResponseBody::RecordList> && recordList) { DARABONBA_PTR_SET_RVALUE(recordList_, recordList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCustomBlockRecordsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The pagination information.
    shared_ptr<DescribeCustomBlockRecordsResponseBody::PageInfo> pageInfo_ {};
    // An array that consists of the defense rules.
    shared_ptr<vector<DescribeCustomBlockRecordsResponseBody::RecordList>> recordList_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
