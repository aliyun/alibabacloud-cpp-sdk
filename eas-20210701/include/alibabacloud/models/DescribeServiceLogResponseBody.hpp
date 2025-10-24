// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESERVICELOGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESERVICELOGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class DescribeServiceLogResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeServiceLogResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Logs, logs_);
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(TotalPageNum, totalPageNum_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeServiceLogResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Logs, logs_);
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(TotalPageNum, totalPageNum_);
    };
    DescribeServiceLogResponseBody() = default ;
    DescribeServiceLogResponseBody(const DescribeServiceLogResponseBody &) = default ;
    DescribeServiceLogResponseBody(DescribeServiceLogResponseBody &&) = default ;
    DescribeServiceLogResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeServiceLogResponseBody() = default ;
    DescribeServiceLogResponseBody& operator=(const DescribeServiceLogResponseBody &) = default ;
    DescribeServiceLogResponseBody& operator=(DescribeServiceLogResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->logs_ == nullptr
        && return this->pageNum_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr && return this->totalPageNum_ == nullptr; };
    // logs Field Functions 
    bool hasLogs() const { return this->logs_ != nullptr;};
    void deleteLogs() { this->logs_ = nullptr;};
    inline const vector<string> & logs() const { DARABONBA_PTR_GET_CONST(logs_, vector<string>) };
    inline vector<string> logs() { DARABONBA_PTR_GET(logs_, vector<string>) };
    inline DescribeServiceLogResponseBody& setLogs(const vector<string> & logs) { DARABONBA_PTR_SET_VALUE(logs_, logs) };
    inline DescribeServiceLogResponseBody& setLogs(vector<string> && logs) { DARABONBA_PTR_SET_RVALUE(logs_, logs) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int64_t pageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0L) };
    inline DescribeServiceLogResponseBody& setPageNum(int64_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeServiceLogResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeServiceLogResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // totalPageNum Field Functions 
    bool hasTotalPageNum() const { return this->totalPageNum_ != nullptr;};
    void deleteTotalPageNum() { this->totalPageNum_ = nullptr;};
    inline int64_t totalPageNum() const { DARABONBA_PTR_GET_DEFAULT(totalPageNum_, 0L) };
    inline DescribeServiceLogResponseBody& setTotalPageNum(int64_t totalPageNum) { DARABONBA_PTR_SET_VALUE(totalPageNum_, totalPageNum) };


  protected:
    // The returned logs.
    std::shared_ptr<vector<string>> logs_ = nullptr;
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
