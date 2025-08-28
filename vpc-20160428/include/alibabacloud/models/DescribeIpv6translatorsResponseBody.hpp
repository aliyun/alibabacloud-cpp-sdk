// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIPV6TRANSLATORSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIPV6TRANSLATORSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeIPv6TranslatorsResponseBodyIpv6Translators.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeIPv6TranslatorsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeIPv6TranslatorsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Ipv6Translators, ipv6Translators_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeIPv6TranslatorsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Ipv6Translators, ipv6Translators_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeIPv6TranslatorsResponseBody() = default ;
    DescribeIPv6TranslatorsResponseBody(const DescribeIPv6TranslatorsResponseBody &) = default ;
    DescribeIPv6TranslatorsResponseBody(DescribeIPv6TranslatorsResponseBody &&) = default ;
    DescribeIPv6TranslatorsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeIPv6TranslatorsResponseBody() = default ;
    DescribeIPv6TranslatorsResponseBody& operator=(const DescribeIPv6TranslatorsResponseBody &) = default ;
    DescribeIPv6TranslatorsResponseBody& operator=(DescribeIPv6TranslatorsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ipv6Translators_ != nullptr
        && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->requestId_ != nullptr && this->totalCount_ != nullptr; };
    // ipv6Translators Field Functions 
    bool hasIpv6Translators() const { return this->ipv6Translators_ != nullptr;};
    void deleteIpv6Translators() { this->ipv6Translators_ = nullptr;};
    inline const DescribeIPv6TranslatorsResponseBodyIpv6Translators & ipv6Translators() const { DARABONBA_PTR_GET_CONST(ipv6Translators_, DescribeIPv6TranslatorsResponseBodyIpv6Translators) };
    inline DescribeIPv6TranslatorsResponseBodyIpv6Translators ipv6Translators() { DARABONBA_PTR_GET(ipv6Translators_, DescribeIPv6TranslatorsResponseBodyIpv6Translators) };
    inline DescribeIPv6TranslatorsResponseBody& setIpv6Translators(const DescribeIPv6TranslatorsResponseBodyIpv6Translators & ipv6Translators) { DARABONBA_PTR_SET_VALUE(ipv6Translators_, ipv6Translators) };
    inline DescribeIPv6TranslatorsResponseBody& setIpv6Translators(DescribeIPv6TranslatorsResponseBodyIpv6Translators && ipv6Translators) { DARABONBA_PTR_SET_RVALUE(ipv6Translators_, ipv6Translators) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeIPv6TranslatorsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeIPv6TranslatorsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeIPv6TranslatorsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeIPv6TranslatorsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The list of IPv6 Translation Service instances.
    std::shared_ptr<DescribeIPv6TranslatorsResponseBodyIpv6Translators> ipv6Translators_ = nullptr;
    // The page number of the returned page.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries returned per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The number of returned entries.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
