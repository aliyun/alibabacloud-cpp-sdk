// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMSBLOCKLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMSBLOCKLISTRESPONSEBODY_HPP_
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
  class DescribeLiveStreamsBlockListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveStreamsBlockListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StreamUrls, streamUrls_);
      DARABONBA_PTR_TO_JSON(TotalNum, totalNum_);
      DARABONBA_PTR_TO_JSON(TotalPage, totalPage_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveStreamsBlockListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StreamUrls, streamUrls_);
      DARABONBA_PTR_FROM_JSON(TotalNum, totalNum_);
      DARABONBA_PTR_FROM_JSON(TotalPage, totalPage_);
    };
    DescribeLiveStreamsBlockListResponseBody() = default ;
    DescribeLiveStreamsBlockListResponseBody(const DescribeLiveStreamsBlockListResponseBody &) = default ;
    DescribeLiveStreamsBlockListResponseBody(DescribeLiveStreamsBlockListResponseBody &&) = default ;
    DescribeLiveStreamsBlockListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveStreamsBlockListResponseBody() = default ;
    DescribeLiveStreamsBlockListResponseBody& operator=(const DescribeLiveStreamsBlockListResponseBody &) = default ;
    DescribeLiveStreamsBlockListResponseBody& operator=(DescribeLiveStreamsBlockListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class StreamUrls : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const StreamUrls& obj) { 
        DARABONBA_PTR_TO_JSON(StreamUrl, streamUrl_);
      };
      friend void from_json(const Darabonba::Json& j, StreamUrls& obj) { 
        DARABONBA_PTR_FROM_JSON(StreamUrl, streamUrl_);
      };
      StreamUrls() = default ;
      StreamUrls(const StreamUrls &) = default ;
      StreamUrls(StreamUrls &&) = default ;
      StreamUrls(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~StreamUrls() = default ;
      StreamUrls& operator=(const StreamUrls &) = default ;
      StreamUrls& operator=(StreamUrls &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->streamUrl_ == nullptr; };
      // streamUrl Field Functions 
      bool hasStreamUrl() const { return this->streamUrl_ != nullptr;};
      void deleteStreamUrl() { this->streamUrl_ = nullptr;};
      inline const vector<string> & getStreamUrl() const { DARABONBA_PTR_GET_CONST(streamUrl_, vector<string>) };
      inline vector<string> getStreamUrl() { DARABONBA_PTR_GET(streamUrl_, vector<string>) };
      inline StreamUrls& setStreamUrl(const vector<string> & streamUrl) { DARABONBA_PTR_SET_VALUE(streamUrl_, streamUrl) };
      inline StreamUrls& setStreamUrl(vector<string> && streamUrl) { DARABONBA_PTR_SET_RVALUE(streamUrl_, streamUrl) };


    protected:
      shared_ptr<vector<string>> streamUrl_ {};
    };

    virtual bool empty() const override { return this->domainName_ == nullptr
        && this->pageNum_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->streamUrls_ == nullptr && this->totalNum_ == nullptr
        && this->totalPage_ == nullptr; };
    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeLiveStreamsBlockListResponseBody& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int32_t getPageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
    inline DescribeLiveStreamsBlockListResponseBody& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeLiveStreamsBlockListResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLiveStreamsBlockListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // streamUrls Field Functions 
    bool hasStreamUrls() const { return this->streamUrls_ != nullptr;};
    void deleteStreamUrls() { this->streamUrls_ = nullptr;};
    inline const DescribeLiveStreamsBlockListResponseBody::StreamUrls & getStreamUrls() const { DARABONBA_PTR_GET_CONST(streamUrls_, DescribeLiveStreamsBlockListResponseBody::StreamUrls) };
    inline DescribeLiveStreamsBlockListResponseBody::StreamUrls getStreamUrls() { DARABONBA_PTR_GET(streamUrls_, DescribeLiveStreamsBlockListResponseBody::StreamUrls) };
    inline DescribeLiveStreamsBlockListResponseBody& setStreamUrls(const DescribeLiveStreamsBlockListResponseBody::StreamUrls & streamUrls) { DARABONBA_PTR_SET_VALUE(streamUrls_, streamUrls) };
    inline DescribeLiveStreamsBlockListResponseBody& setStreamUrls(DescribeLiveStreamsBlockListResponseBody::StreamUrls && streamUrls) { DARABONBA_PTR_SET_RVALUE(streamUrls_, streamUrls) };


    // totalNum Field Functions 
    bool hasTotalNum() const { return this->totalNum_ != nullptr;};
    void deleteTotalNum() { this->totalNum_ = nullptr;};
    inline int32_t getTotalNum() const { DARABONBA_PTR_GET_DEFAULT(totalNum_, 0) };
    inline DescribeLiveStreamsBlockListResponseBody& setTotalNum(int32_t totalNum) { DARABONBA_PTR_SET_VALUE(totalNum_, totalNum) };


    // totalPage Field Functions 
    bool hasTotalPage() const { return this->totalPage_ != nullptr;};
    void deleteTotalPage() { this->totalPage_ = nullptr;};
    inline int32_t getTotalPage() const { DARABONBA_PTR_GET_DEFAULT(totalPage_, 0) };
    inline DescribeLiveStreamsBlockListResponseBody& setTotalPage(int32_t totalPage) { DARABONBA_PTR_SET_VALUE(totalPage_, totalPage) };


  protected:
    // The main streaming domain.
    shared_ptr<string> domainName_ {};
    // The page number of the returned page.
    shared_ptr<int32_t> pageNum_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The complete URL of each live stream.
    shared_ptr<DescribeLiveStreamsBlockListResponseBody::StreamUrls> streamUrls_ {};
    // The total number of live stream URLs that meet the specified conditions.
    shared_ptr<int32_t> totalNum_ {};
    // The total number of returned pages.
    shared_ptr<int32_t> totalPage_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
