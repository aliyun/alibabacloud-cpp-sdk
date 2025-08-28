// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIPV6TRANSLATORACLLISTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIPV6TRANSLATORACLLISTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeIPv6TranslatorAclListsResponseBodyIpv6TranslatorAcls.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeIPv6TranslatorAclListsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeIPv6TranslatorAclListsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Ipv6TranslatorAcls, ipv6TranslatorAcls_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeIPv6TranslatorAclListsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Ipv6TranslatorAcls, ipv6TranslatorAcls_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeIPv6TranslatorAclListsResponseBody() = default ;
    DescribeIPv6TranslatorAclListsResponseBody(const DescribeIPv6TranslatorAclListsResponseBody &) = default ;
    DescribeIPv6TranslatorAclListsResponseBody(DescribeIPv6TranslatorAclListsResponseBody &&) = default ;
    DescribeIPv6TranslatorAclListsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeIPv6TranslatorAclListsResponseBody() = default ;
    DescribeIPv6TranslatorAclListsResponseBody& operator=(const DescribeIPv6TranslatorAclListsResponseBody &) = default ;
    DescribeIPv6TranslatorAclListsResponseBody& operator=(DescribeIPv6TranslatorAclListsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ipv6TranslatorAcls_ != nullptr
        && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->requestId_ != nullptr && this->totalCount_ != nullptr; };
    // ipv6TranslatorAcls Field Functions 
    bool hasIpv6TranslatorAcls() const { return this->ipv6TranslatorAcls_ != nullptr;};
    void deleteIpv6TranslatorAcls() { this->ipv6TranslatorAcls_ = nullptr;};
    inline const DescribeIPv6TranslatorAclListsResponseBodyIpv6TranslatorAcls & ipv6TranslatorAcls() const { DARABONBA_PTR_GET_CONST(ipv6TranslatorAcls_, DescribeIPv6TranslatorAclListsResponseBodyIpv6TranslatorAcls) };
    inline DescribeIPv6TranslatorAclListsResponseBodyIpv6TranslatorAcls ipv6TranslatorAcls() { DARABONBA_PTR_GET(ipv6TranslatorAcls_, DescribeIPv6TranslatorAclListsResponseBodyIpv6TranslatorAcls) };
    inline DescribeIPv6TranslatorAclListsResponseBody& setIpv6TranslatorAcls(const DescribeIPv6TranslatorAclListsResponseBodyIpv6TranslatorAcls & ipv6TranslatorAcls) { DARABONBA_PTR_SET_VALUE(ipv6TranslatorAcls_, ipv6TranslatorAcls) };
    inline DescribeIPv6TranslatorAclListsResponseBody& setIpv6TranslatorAcls(DescribeIPv6TranslatorAclListsResponseBodyIpv6TranslatorAcls && ipv6TranslatorAcls) { DARABONBA_PTR_SET_RVALUE(ipv6TranslatorAcls_, ipv6TranslatorAcls) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeIPv6TranslatorAclListsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeIPv6TranslatorAclListsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeIPv6TranslatorAclListsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeIPv6TranslatorAclListsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The list of network ACLs.
    std::shared_ptr<DescribeIPv6TranslatorAclListsResponseBodyIpv6TranslatorAcls> ipv6TranslatorAcls_ = nullptr;
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
} // namespace Vpc20160428
#endif
