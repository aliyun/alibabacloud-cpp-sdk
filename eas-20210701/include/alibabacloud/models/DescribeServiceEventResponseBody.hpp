// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESERVICEEVENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESERVICEEVENTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeServiceEventResponseBodyEvents.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class DescribeServiceEventResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeServiceEventResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Events, events_);
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(TotalPageNum, totalPageNum_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeServiceEventResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Events, events_);
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(TotalPageNum, totalPageNum_);
    };
    DescribeServiceEventResponseBody() = default ;
    DescribeServiceEventResponseBody(const DescribeServiceEventResponseBody &) = default ;
    DescribeServiceEventResponseBody(DescribeServiceEventResponseBody &&) = default ;
    DescribeServiceEventResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeServiceEventResponseBody() = default ;
    DescribeServiceEventResponseBody& operator=(const DescribeServiceEventResponseBody &) = default ;
    DescribeServiceEventResponseBody& operator=(DescribeServiceEventResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->events_ != nullptr
        && this->pageNum_ != nullptr && this->requestId_ != nullptr && this->totalCount_ != nullptr && this->totalPageNum_ != nullptr; };
    // events Field Functions 
    bool hasEvents() const { return this->events_ != nullptr;};
    void deleteEvents() { this->events_ = nullptr;};
    inline const vector<DescribeServiceEventResponseBodyEvents> & events() const { DARABONBA_PTR_GET_CONST(events_, vector<DescribeServiceEventResponseBodyEvents>) };
    inline vector<DescribeServiceEventResponseBodyEvents> events() { DARABONBA_PTR_GET(events_, vector<DescribeServiceEventResponseBodyEvents>) };
    inline DescribeServiceEventResponseBody& setEvents(const vector<DescribeServiceEventResponseBodyEvents> & events) { DARABONBA_PTR_SET_VALUE(events_, events) };
    inline DescribeServiceEventResponseBody& setEvents(vector<DescribeServiceEventResponseBodyEvents> && events) { DARABONBA_PTR_SET_RVALUE(events_, events) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int64_t pageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0L) };
    inline DescribeServiceEventResponseBody& setPageNum(int64_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeServiceEventResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeServiceEventResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // totalPageNum Field Functions 
    bool hasTotalPageNum() const { return this->totalPageNum_ != nullptr;};
    void deleteTotalPageNum() { this->totalPageNum_ = nullptr;};
    inline int64_t totalPageNum() const { DARABONBA_PTR_GET_DEFAULT(totalPageNum_, 0L) };
    inline DescribeServiceEventResponseBody& setTotalPageNum(int64_t totalPageNum) { DARABONBA_PTR_SET_VALUE(totalPageNum_, totalPageNum) };


  protected:
    // The events.
    std::shared_ptr<vector<DescribeServiceEventResponseBodyEvents>> events_ = nullptr;
    // The page number.
    std::shared_ptr<int64_t> pageNum_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
    // The total number of pages returned.
    std::shared_ptr<int64_t> totalPageNum_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
