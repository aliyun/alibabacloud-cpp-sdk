// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFORWARDTABLEENTRIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFORWARDTABLEENTRIESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeForwardTableEntriesResponseBodyForwardTableEntries.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeForwardTableEntriesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeForwardTableEntriesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ForwardTableEntries, forwardTableEntries_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeForwardTableEntriesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ForwardTableEntries, forwardTableEntries_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeForwardTableEntriesResponseBody() = default ;
    DescribeForwardTableEntriesResponseBody(const DescribeForwardTableEntriesResponseBody &) = default ;
    DescribeForwardTableEntriesResponseBody(DescribeForwardTableEntriesResponseBody &&) = default ;
    DescribeForwardTableEntriesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeForwardTableEntriesResponseBody() = default ;
    DescribeForwardTableEntriesResponseBody& operator=(const DescribeForwardTableEntriesResponseBody &) = default ;
    DescribeForwardTableEntriesResponseBody& operator=(DescribeForwardTableEntriesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->forwardTableEntries_ != nullptr
        && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->requestId_ != nullptr && this->totalCount_ != nullptr; };
    // forwardTableEntries Field Functions 
    bool hasForwardTableEntries() const { return this->forwardTableEntries_ != nullptr;};
    void deleteForwardTableEntries() { this->forwardTableEntries_ = nullptr;};
    inline const DescribeForwardTableEntriesResponseBodyForwardTableEntries & forwardTableEntries() const { DARABONBA_PTR_GET_CONST(forwardTableEntries_, DescribeForwardTableEntriesResponseBodyForwardTableEntries) };
    inline DescribeForwardTableEntriesResponseBodyForwardTableEntries forwardTableEntries() { DARABONBA_PTR_GET(forwardTableEntries_, DescribeForwardTableEntriesResponseBodyForwardTableEntries) };
    inline DescribeForwardTableEntriesResponseBody& setForwardTableEntries(const DescribeForwardTableEntriesResponseBodyForwardTableEntries & forwardTableEntries) { DARABONBA_PTR_SET_VALUE(forwardTableEntries_, forwardTableEntries) };
    inline DescribeForwardTableEntriesResponseBody& setForwardTableEntries(DescribeForwardTableEntriesResponseBodyForwardTableEntries && forwardTableEntries) { DARABONBA_PTR_SET_RVALUE(forwardTableEntries_, forwardTableEntries) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeForwardTableEntriesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeForwardTableEntriesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeForwardTableEntriesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeForwardTableEntriesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The details of DNAT entries.
    std::shared_ptr<DescribeForwardTableEntriesResponseBodyForwardTableEntries> forwardTableEntries_ = nullptr;
    // The page number.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
