// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPLAYTOPVIDEOSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPLAYTOPVIDEOSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribePlayTopVideosResponseBodyTopPlayVideos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribePlayTopVideosResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePlayTopVideosResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TopPlayVideos, topPlayVideos_);
      DARABONBA_PTR_TO_JSON(TotalNum, totalNum_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePlayTopVideosResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TopPlayVideos, topPlayVideos_);
      DARABONBA_PTR_FROM_JSON(TotalNum, totalNum_);
    };
    DescribePlayTopVideosResponseBody() = default ;
    DescribePlayTopVideosResponseBody(const DescribePlayTopVideosResponseBody &) = default ;
    DescribePlayTopVideosResponseBody(DescribePlayTopVideosResponseBody &&) = default ;
    DescribePlayTopVideosResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePlayTopVideosResponseBody() = default ;
    DescribePlayTopVideosResponseBody& operator=(const DescribePlayTopVideosResponseBody &) = default ;
    DescribePlayTopVideosResponseBody& operator=(DescribePlayTopVideosResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pageNo_ != nullptr
        && this->pageSize_ != nullptr && this->requestId_ != nullptr && this->topPlayVideos_ != nullptr && this->totalNum_ != nullptr; };
    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int64_t pageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0L) };
    inline DescribePlayTopVideosResponseBody& setPageNo(int64_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline DescribePlayTopVideosResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePlayTopVideosResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // topPlayVideos Field Functions 
    bool hasTopPlayVideos() const { return this->topPlayVideos_ != nullptr;};
    void deleteTopPlayVideos() { this->topPlayVideos_ = nullptr;};
    inline const DescribePlayTopVideosResponseBodyTopPlayVideos & topPlayVideos() const { DARABONBA_PTR_GET_CONST(topPlayVideos_, DescribePlayTopVideosResponseBodyTopPlayVideos) };
    inline DescribePlayTopVideosResponseBodyTopPlayVideos topPlayVideos() { DARABONBA_PTR_GET(topPlayVideos_, DescribePlayTopVideosResponseBodyTopPlayVideos) };
    inline DescribePlayTopVideosResponseBody& setTopPlayVideos(const DescribePlayTopVideosResponseBodyTopPlayVideos & topPlayVideos) { DARABONBA_PTR_SET_VALUE(topPlayVideos_, topPlayVideos) };
    inline DescribePlayTopVideosResponseBody& setTopPlayVideos(DescribePlayTopVideosResponseBodyTopPlayVideos && topPlayVideos) { DARABONBA_PTR_SET_RVALUE(topPlayVideos_, topPlayVideos) };


    // totalNum Field Functions 
    bool hasTotalNum() const { return this->totalNum_ != nullptr;};
    void deleteTotalNum() { this->totalNum_ = nullptr;};
    inline int64_t totalNum() const { DARABONBA_PTR_GET_DEFAULT(totalNum_, 0L) };
    inline DescribePlayTopVideosResponseBody& setTotalNum(int64_t totalNum) { DARABONBA_PTR_SET_VALUE(totalNum_, totalNum) };


  protected:
    // The page number.
    std::shared_ptr<int64_t> pageNo_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The daily playback statistics on each top video.
    std::shared_ptr<DescribePlayTopVideosResponseBodyTopPlayVideos> topPlayVideos_ = nullptr;
    // The total number of entries that were collected in playback statistics on top videos.
    std::shared_ptr<int64_t> totalNum_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
