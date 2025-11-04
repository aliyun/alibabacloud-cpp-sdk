// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPLAYLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPLAYLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribePlayListResponseBodyPlayList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class DescribePlayListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePlayListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PlayList, playList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalNum, totalNum_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePlayListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PlayList, playList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalNum, totalNum_);
    };
    DescribePlayListResponseBody() = default ;
    DescribePlayListResponseBody(const DescribePlayListResponseBody &) = default ;
    DescribePlayListResponseBody(DescribePlayListResponseBody &&) = default ;
    DescribePlayListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePlayListResponseBody() = default ;
    DescribePlayListResponseBody& operator=(const DescribePlayListResponseBody &) = default ;
    DescribePlayListResponseBody& operator=(DescribePlayListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pageNum_ == nullptr
        && return this->pageSize_ == nullptr && return this->playList_ == nullptr && return this->requestId_ == nullptr && return this->totalNum_ == nullptr; };
    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int64_t pageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0L) };
    inline DescribePlayListResponseBody& setPageNum(int64_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline DescribePlayListResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // playList Field Functions 
    bool hasPlayList() const { return this->playList_ != nullptr;};
    void deletePlayList() { this->playList_ = nullptr;};
    inline const vector<DescribePlayListResponseBodyPlayList> & playList() const { DARABONBA_PTR_GET_CONST(playList_, vector<DescribePlayListResponseBodyPlayList>) };
    inline vector<DescribePlayListResponseBodyPlayList> playList() { DARABONBA_PTR_GET(playList_, vector<DescribePlayListResponseBodyPlayList>) };
    inline DescribePlayListResponseBody& setPlayList(const vector<DescribePlayListResponseBodyPlayList> & playList) { DARABONBA_PTR_SET_VALUE(playList_, playList) };
    inline DescribePlayListResponseBody& setPlayList(vector<DescribePlayListResponseBodyPlayList> && playList) { DARABONBA_PTR_SET_RVALUE(playList_, playList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePlayListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalNum Field Functions 
    bool hasTotalNum() const { return this->totalNum_ != nullptr;};
    void deleteTotalNum() { this->totalNum_ = nullptr;};
    inline int64_t totalNum() const { DARABONBA_PTR_GET_DEFAULT(totalNum_, 0L) };
    inline DescribePlayListResponseBody& setTotalNum(int64_t totalNum) { DARABONBA_PTR_SET_VALUE(totalNum_, totalNum) };


  protected:
    // The page number.
    std::shared_ptr<int64_t> pageNum_ = nullptr;
    // The number of entries per page. Default value: 20. Valid values: 1 to 100.
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    // The playback records.
    std::shared_ptr<vector<DescribePlayListResponseBodyPlayList>> playList_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total playback count.
    std::shared_ptr<int64_t> totalNum_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
