// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFLOWLOGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFLOWLOGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeFlowlogsResponseBodyFlowLogs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class DescribeFlowlogsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFlowlogsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FlowLogs, flowLogs_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFlowlogsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FlowLogs, flowLogs_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeFlowlogsResponseBody() = default ;
    DescribeFlowlogsResponseBody(const DescribeFlowlogsResponseBody &) = default ;
    DescribeFlowlogsResponseBody(DescribeFlowlogsResponseBody &&) = default ;
    DescribeFlowlogsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFlowlogsResponseBody() = default ;
    DescribeFlowlogsResponseBody& operator=(const DescribeFlowlogsResponseBody &) = default ;
    DescribeFlowlogsResponseBody& operator=(DescribeFlowlogsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->flowLogs_ != nullptr
        && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->requestId_ != nullptr && this->success_ != nullptr && this->totalCount_ != nullptr; };
    // flowLogs Field Functions 
    bool hasFlowLogs() const { return this->flowLogs_ != nullptr;};
    void deleteFlowLogs() { this->flowLogs_ = nullptr;};
    inline const DescribeFlowlogsResponseBodyFlowLogs & flowLogs() const { DARABONBA_PTR_GET_CONST(flowLogs_, DescribeFlowlogsResponseBodyFlowLogs) };
    inline DescribeFlowlogsResponseBodyFlowLogs flowLogs() { DARABONBA_PTR_GET(flowLogs_, DescribeFlowlogsResponseBodyFlowLogs) };
    inline DescribeFlowlogsResponseBody& setFlowLogs(const DescribeFlowlogsResponseBodyFlowLogs & flowLogs) { DARABONBA_PTR_SET_VALUE(flowLogs_, flowLogs) };
    inline DescribeFlowlogsResponseBody& setFlowLogs(DescribeFlowlogsResponseBodyFlowLogs && flowLogs) { DARABONBA_PTR_SET_RVALUE(flowLogs_, flowLogs) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline string pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, "") };
    inline DescribeFlowlogsResponseBody& setPageNumber(string pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline DescribeFlowlogsResponseBody& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeFlowlogsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string success() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline DescribeFlowlogsResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline string totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, "") };
    inline DescribeFlowlogsResponseBody& setTotalCount(string totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The information about the flow log.
    std::shared_ptr<DescribeFlowlogsResponseBodyFlowLogs> flowLogs_ = nullptr;
    // The page number of the returned page.
    std::shared_ptr<string> pageNumber_ = nullptr;
    // The number of entries returned per page.
    std::shared_ptr<string> pageSize_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the call is successful. Valid values:
    // 
    // *   **true**: yes
    // *   **false**: no
    std::shared_ptr<string> success_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<string> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
