// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVODMEDIAPLAYDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVODMEDIAPLAYDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeVodMediaPlayDataResponseBodyQoeInfoList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeVodMediaPlayDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVodMediaPlayDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(QoeInfoList, qoeInfoList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVodMediaPlayDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(QoeInfoList, qoeInfoList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeVodMediaPlayDataResponseBody() = default ;
    DescribeVodMediaPlayDataResponseBody(const DescribeVodMediaPlayDataResponseBody &) = default ;
    DescribeVodMediaPlayDataResponseBody(DescribeVodMediaPlayDataResponseBody &&) = default ;
    DescribeVodMediaPlayDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVodMediaPlayDataResponseBody() = default ;
    DescribeVodMediaPlayDataResponseBody& operator=(const DescribeVodMediaPlayDataResponseBody &) = default ;
    DescribeVodMediaPlayDataResponseBody& operator=(DescribeVodMediaPlayDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pageNo_ == nullptr
        && return this->pageSize_ == nullptr && return this->qoeInfoList_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int64_t pageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0L) };
    inline DescribeVodMediaPlayDataResponseBody& setPageNo(int64_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline DescribeVodMediaPlayDataResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // qoeInfoList Field Functions 
    bool hasQoeInfoList() const { return this->qoeInfoList_ != nullptr;};
    void deleteQoeInfoList() { this->qoeInfoList_ = nullptr;};
    inline const vector<DescribeVodMediaPlayDataResponseBodyQoeInfoList> & qoeInfoList() const { DARABONBA_PTR_GET_CONST(qoeInfoList_, vector<DescribeVodMediaPlayDataResponseBodyQoeInfoList>) };
    inline vector<DescribeVodMediaPlayDataResponseBodyQoeInfoList> qoeInfoList() { DARABONBA_PTR_GET(qoeInfoList_, vector<DescribeVodMediaPlayDataResponseBodyQoeInfoList>) };
    inline DescribeVodMediaPlayDataResponseBody& setQoeInfoList(const vector<DescribeVodMediaPlayDataResponseBodyQoeInfoList> & qoeInfoList) { DARABONBA_PTR_SET_VALUE(qoeInfoList_, qoeInfoList) };
    inline DescribeVodMediaPlayDataResponseBody& setQoeInfoList(vector<DescribeVodMediaPlayDataResponseBodyQoeInfoList> && qoeInfoList) { DARABONBA_PTR_SET_RVALUE(qoeInfoList_, qoeInfoList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVodMediaPlayDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeVodMediaPlayDataResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The page number.
    std::shared_ptr<int64_t> pageNo_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    // The data returned.
    std::shared_ptr<vector<DescribeVodMediaPlayDataResponseBodyQoeInfoList>> qoeInfoList_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
