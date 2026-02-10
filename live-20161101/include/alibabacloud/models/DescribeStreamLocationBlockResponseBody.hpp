// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESTREAMLOCATIONBLOCKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESTREAMLOCATIONBLOCKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeStreamLocationBlockResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeStreamLocationBlockResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StreamBlockList, streamBlockList_);
      DARABONBA_PTR_TO_JSON(TotalPage, totalPage_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeStreamLocationBlockResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StreamBlockList, streamBlockList_);
      DARABONBA_PTR_FROM_JSON(TotalPage, totalPage_);
    };
    DescribeStreamLocationBlockResponseBody() = default ;
    DescribeStreamLocationBlockResponseBody(const DescribeStreamLocationBlockResponseBody &) = default ;
    DescribeStreamLocationBlockResponseBody(DescribeStreamLocationBlockResponseBody &&) = default ;
    DescribeStreamLocationBlockResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeStreamLocationBlockResponseBody() = default ;
    DescribeStreamLocationBlockResponseBody& operator=(const DescribeStreamLocationBlockResponseBody &) = default ;
    DescribeStreamLocationBlockResponseBody& operator=(DescribeStreamLocationBlockResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class StreamBlockList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const StreamBlockList& obj) { 
        DARABONBA_PTR_TO_JSON(StreamBlock, streamBlock_);
      };
      friend void from_json(const Darabonba::Json& j, StreamBlockList& obj) { 
        DARABONBA_PTR_FROM_JSON(StreamBlock, streamBlock_);
      };
      StreamBlockList() = default ;
      StreamBlockList(const StreamBlockList &) = default ;
      StreamBlockList(StreamBlockList &&) = default ;
      StreamBlockList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~StreamBlockList() = default ;
      StreamBlockList& operator=(const StreamBlockList &) = default ;
      StreamBlockList& operator=(StreamBlockList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class StreamBlock : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const StreamBlock& obj) { 
          DARABONBA_PTR_TO_JSON(AppName, appName_);
          DARABONBA_PTR_TO_JSON(BlockType, blockType_);
          DARABONBA_PTR_TO_JSON(DomainName, domainName_);
          DARABONBA_PTR_TO_JSON(LocationList, locationList_);
          DARABONBA_PTR_TO_JSON(ReleaseTime, releaseTime_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(StreamName, streamName_);
          DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
        };
        friend void from_json(const Darabonba::Json& j, StreamBlock& obj) { 
          DARABONBA_PTR_FROM_JSON(AppName, appName_);
          DARABONBA_PTR_FROM_JSON(BlockType, blockType_);
          DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
          DARABONBA_PTR_FROM_JSON(LocationList, locationList_);
          DARABONBA_PTR_FROM_JSON(ReleaseTime, releaseTime_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(StreamName, streamName_);
          DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
        };
        StreamBlock() = default ;
        StreamBlock(const StreamBlock &) = default ;
        StreamBlock(StreamBlock &&) = default ;
        StreamBlock(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~StreamBlock() = default ;
        StreamBlock& operator=(const StreamBlock &) = default ;
        StreamBlock& operator=(StreamBlock &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->appName_ == nullptr
        && this->blockType_ == nullptr && this->domainName_ == nullptr && this->locationList_ == nullptr && this->releaseTime_ == nullptr && this->status_ == nullptr
        && this->streamName_ == nullptr && this->updateTime_ == nullptr; };
        // appName Field Functions 
        bool hasAppName() const { return this->appName_ != nullptr;};
        void deleteAppName() { this->appName_ = nullptr;};
        inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
        inline StreamBlock& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


        // blockType Field Functions 
        bool hasBlockType() const { return this->blockType_ != nullptr;};
        void deleteBlockType() { this->blockType_ = nullptr;};
        inline string getBlockType() const { DARABONBA_PTR_GET_DEFAULT(blockType_, "") };
        inline StreamBlock& setBlockType(string blockType) { DARABONBA_PTR_SET_VALUE(blockType_, blockType) };


        // domainName Field Functions 
        bool hasDomainName() const { return this->domainName_ != nullptr;};
        void deleteDomainName() { this->domainName_ = nullptr;};
        inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
        inline StreamBlock& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


        // locationList Field Functions 
        bool hasLocationList() const { return this->locationList_ != nullptr;};
        void deleteLocationList() { this->locationList_ = nullptr;};
        inline string getLocationList() const { DARABONBA_PTR_GET_DEFAULT(locationList_, "") };
        inline StreamBlock& setLocationList(string locationList) { DARABONBA_PTR_SET_VALUE(locationList_, locationList) };


        // releaseTime Field Functions 
        bool hasReleaseTime() const { return this->releaseTime_ != nullptr;};
        void deleteReleaseTime() { this->releaseTime_ = nullptr;};
        inline string getReleaseTime() const { DARABONBA_PTR_GET_DEFAULT(releaseTime_, "") };
        inline StreamBlock& setReleaseTime(string releaseTime) { DARABONBA_PTR_SET_VALUE(releaseTime_, releaseTime) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
        inline StreamBlock& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // streamName Field Functions 
        bool hasStreamName() const { return this->streamName_ != nullptr;};
        void deleteStreamName() { this->streamName_ = nullptr;};
        inline string getStreamName() const { DARABONBA_PTR_GET_DEFAULT(streamName_, "") };
        inline StreamBlock& setStreamName(string streamName) { DARABONBA_PTR_SET_VALUE(streamName_, streamName) };


        // updateTime Field Functions 
        bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
        void deleteUpdateTime() { this->updateTime_ = nullptr;};
        inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
        inline StreamBlock& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


      protected:
        shared_ptr<string> appName_ {};
        shared_ptr<string> blockType_ {};
        shared_ptr<string> domainName_ {};
        shared_ptr<string> locationList_ {};
        shared_ptr<string> releaseTime_ {};
        shared_ptr<int32_t> status_ {};
        shared_ptr<string> streamName_ {};
        shared_ptr<string> updateTime_ {};
      };

      virtual bool empty() const override { return this->streamBlock_ == nullptr; };
      // streamBlock Field Functions 
      bool hasStreamBlock() const { return this->streamBlock_ != nullptr;};
      void deleteStreamBlock() { this->streamBlock_ = nullptr;};
      inline const vector<StreamBlockList::StreamBlock> & getStreamBlock() const { DARABONBA_PTR_GET_CONST(streamBlock_, vector<StreamBlockList::StreamBlock>) };
      inline vector<StreamBlockList::StreamBlock> getStreamBlock() { DARABONBA_PTR_GET(streamBlock_, vector<StreamBlockList::StreamBlock>) };
      inline StreamBlockList& setStreamBlock(const vector<StreamBlockList::StreamBlock> & streamBlock) { DARABONBA_PTR_SET_VALUE(streamBlock_, streamBlock) };
      inline StreamBlockList& setStreamBlock(vector<StreamBlockList::StreamBlock> && streamBlock) { DARABONBA_PTR_SET_RVALUE(streamBlock_, streamBlock) };


    protected:
      shared_ptr<vector<StreamBlockList::StreamBlock>> streamBlock_ {};
    };

    virtual bool empty() const override { return this->count_ == nullptr
        && this->pageNum_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->streamBlockList_ == nullptr && this->totalPage_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline DescribeStreamLocationBlockResponseBody& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int32_t getPageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
    inline DescribeStreamLocationBlockResponseBody& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeStreamLocationBlockResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeStreamLocationBlockResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // streamBlockList Field Functions 
    bool hasStreamBlockList() const { return this->streamBlockList_ != nullptr;};
    void deleteStreamBlockList() { this->streamBlockList_ = nullptr;};
    inline const DescribeStreamLocationBlockResponseBody::StreamBlockList & getStreamBlockList() const { DARABONBA_PTR_GET_CONST(streamBlockList_, DescribeStreamLocationBlockResponseBody::StreamBlockList) };
    inline DescribeStreamLocationBlockResponseBody::StreamBlockList getStreamBlockList() { DARABONBA_PTR_GET(streamBlockList_, DescribeStreamLocationBlockResponseBody::StreamBlockList) };
    inline DescribeStreamLocationBlockResponseBody& setStreamBlockList(const DescribeStreamLocationBlockResponseBody::StreamBlockList & streamBlockList) { DARABONBA_PTR_SET_VALUE(streamBlockList_, streamBlockList) };
    inline DescribeStreamLocationBlockResponseBody& setStreamBlockList(DescribeStreamLocationBlockResponseBody::StreamBlockList && streamBlockList) { DARABONBA_PTR_SET_RVALUE(streamBlockList_, streamBlockList) };


    // totalPage Field Functions 
    bool hasTotalPage() const { return this->totalPage_ != nullptr;};
    void deleteTotalPage() { this->totalPage_ = nullptr;};
    inline int32_t getTotalPage() const { DARABONBA_PTR_GET_DEFAULT(totalPage_, 0) };
    inline DescribeStreamLocationBlockResponseBody& setTotalPage(int32_t totalPage) { DARABONBA_PTR_SET_VALUE(totalPage_, totalPage) };


  protected:
    // The total number of entries that meet the specified conditions.
    shared_ptr<int32_t> count_ {};
    // The page number.
    shared_ptr<int32_t> pageNum_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    shared_ptr<DescribeStreamLocationBlockResponseBody::StreamBlockList> streamBlockList_ {};
    // The total number of pages.
    shared_ptr<int32_t> totalPage_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
