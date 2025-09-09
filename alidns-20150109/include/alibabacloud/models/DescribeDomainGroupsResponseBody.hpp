// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINGROUPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINGROUPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDomainGroupsResponseBodyDomainGroups.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeDomainGroupsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainGroupsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DomainGroups, domainGroups_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainGroupsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainGroups, domainGroups_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeDomainGroupsResponseBody() = default ;
    DescribeDomainGroupsResponseBody(const DescribeDomainGroupsResponseBody &) = default ;
    DescribeDomainGroupsResponseBody(DescribeDomainGroupsResponseBody &&) = default ;
    DescribeDomainGroupsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainGroupsResponseBody() = default ;
    DescribeDomainGroupsResponseBody& operator=(const DescribeDomainGroupsResponseBody &) = default ;
    DescribeDomainGroupsResponseBody& operator=(DescribeDomainGroupsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->domainGroups_ != nullptr
        && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->requestId_ != nullptr && this->totalCount_ != nullptr; };
    // domainGroups Field Functions 
    bool hasDomainGroups() const { return this->domainGroups_ != nullptr;};
    void deleteDomainGroups() { this->domainGroups_ = nullptr;};
    inline const DescribeDomainGroupsResponseBodyDomainGroups & domainGroups() const { DARABONBA_PTR_GET_CONST(domainGroups_, DescribeDomainGroupsResponseBodyDomainGroups) };
    inline DescribeDomainGroupsResponseBodyDomainGroups domainGroups() { DARABONBA_PTR_GET(domainGroups_, DescribeDomainGroupsResponseBodyDomainGroups) };
    inline DescribeDomainGroupsResponseBody& setDomainGroups(const DescribeDomainGroupsResponseBodyDomainGroups & domainGroups) { DARABONBA_PTR_SET_VALUE(domainGroups_, domainGroups) };
    inline DescribeDomainGroupsResponseBody& setDomainGroups(DescribeDomainGroupsResponseBodyDomainGroups && domainGroups) { DARABONBA_PTR_SET_RVALUE(domainGroups_, domainGroups) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline DescribeDomainGroupsResponseBody& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline DescribeDomainGroupsResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDomainGroupsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeDomainGroupsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The domain name groups.
    std::shared_ptr<DescribeDomainGroupsResponseBodyDomainGroups> domainGroups_ = nullptr;
    // The page number. Pages start from page **1**. Default value: **1**.
    std::shared_ptr<int64_t> pageNumber_ = nullptr;
    // The number of entries per page. Valid values: **1 to 100**. Default value: **20**.
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
