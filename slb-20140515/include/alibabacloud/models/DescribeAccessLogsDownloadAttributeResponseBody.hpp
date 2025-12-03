// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACCESSLOGSDOWNLOADATTRIBUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACCESSLOGSDOWNLOADATTRIBUTERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeAccessLogsDownloadAttributeResponseBodyLogsDownloadAttributes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Slb20140515
{
namespace Models
{
  class DescribeAccessLogsDownloadAttributeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAccessLogsDownloadAttributeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LogsDownloadAttributes, logsDownloadAttributes_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAccessLogsDownloadAttributeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LogsDownloadAttributes, logsDownloadAttributes_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeAccessLogsDownloadAttributeResponseBody() = default ;
    DescribeAccessLogsDownloadAttributeResponseBody(const DescribeAccessLogsDownloadAttributeResponseBody &) = default ;
    DescribeAccessLogsDownloadAttributeResponseBody(DescribeAccessLogsDownloadAttributeResponseBody &&) = default ;
    DescribeAccessLogsDownloadAttributeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAccessLogsDownloadAttributeResponseBody() = default ;
    DescribeAccessLogsDownloadAttributeResponseBody& operator=(const DescribeAccessLogsDownloadAttributeResponseBody &) = default ;
    DescribeAccessLogsDownloadAttributeResponseBody& operator=(DescribeAccessLogsDownloadAttributeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->logsDownloadAttributes_ == nullptr
        && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // logsDownloadAttributes Field Functions 
    bool hasLogsDownloadAttributes() const { return this->logsDownloadAttributes_ != nullptr;};
    void deleteLogsDownloadAttributes() { this->logsDownloadAttributes_ = nullptr;};
    inline const DescribeAccessLogsDownloadAttributeResponseBodyLogsDownloadAttributes & logsDownloadAttributes() const { DARABONBA_PTR_GET_CONST(logsDownloadAttributes_, DescribeAccessLogsDownloadAttributeResponseBodyLogsDownloadAttributes) };
    inline DescribeAccessLogsDownloadAttributeResponseBodyLogsDownloadAttributes logsDownloadAttributes() { DARABONBA_PTR_GET(logsDownloadAttributes_, DescribeAccessLogsDownloadAttributeResponseBodyLogsDownloadAttributes) };
    inline DescribeAccessLogsDownloadAttributeResponseBody& setLogsDownloadAttributes(const DescribeAccessLogsDownloadAttributeResponseBodyLogsDownloadAttributes & logsDownloadAttributes) { DARABONBA_PTR_SET_VALUE(logsDownloadAttributes_, logsDownloadAttributes) };
    inline DescribeAccessLogsDownloadAttributeResponseBody& setLogsDownloadAttributes(DescribeAccessLogsDownloadAttributeResponseBodyLogsDownloadAttributes && logsDownloadAttributes) { DARABONBA_PTR_SET_RVALUE(logsDownloadAttributes_, logsDownloadAttributes) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeAccessLogsDownloadAttributeResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeAccessLogsDownloadAttributeResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAccessLogsDownloadAttributeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeAccessLogsDownloadAttributeResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The configuration of the access log.
    std::shared_ptr<DescribeAccessLogsDownloadAttributeResponseBodyLogsDownloadAttributes> logsDownloadAttributes_ = nullptr;
    // The page number.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Slb20140515
#endif
