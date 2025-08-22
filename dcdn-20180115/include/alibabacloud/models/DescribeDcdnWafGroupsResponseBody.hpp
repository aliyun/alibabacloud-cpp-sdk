// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNWAFGROUPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNWAFGROUPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDcdnWafGroupsResponseBodyWafGroups.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnWafGroupsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnWafGroupsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(WafGroups, wafGroups_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnWafGroupsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(WafGroups, wafGroups_);
    };
    DescribeDcdnWafGroupsResponseBody() = default ;
    DescribeDcdnWafGroupsResponseBody(const DescribeDcdnWafGroupsResponseBody &) = default ;
    DescribeDcdnWafGroupsResponseBody(DescribeDcdnWafGroupsResponseBody &&) = default ;
    DescribeDcdnWafGroupsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnWafGroupsResponseBody() = default ;
    DescribeDcdnWafGroupsResponseBody& operator=(const DescribeDcdnWafGroupsResponseBody &) = default ;
    DescribeDcdnWafGroupsResponseBody& operator=(DescribeDcdnWafGroupsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pageNumber_ != nullptr
        && this->pageSize_ != nullptr && this->requestId_ != nullptr && this->totalCount_ != nullptr && this->wafGroups_ != nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeDcdnWafGroupsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeDcdnWafGroupsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDcdnWafGroupsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeDcdnWafGroupsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // wafGroups Field Functions 
    bool hasWafGroups() const { return this->wafGroups_ != nullptr;};
    void deleteWafGroups() { this->wafGroups_ = nullptr;};
    inline const vector<DescribeDcdnWafGroupsResponseBodyWafGroups> & wafGroups() const { DARABONBA_PTR_GET_CONST(wafGroups_, vector<DescribeDcdnWafGroupsResponseBodyWafGroups>) };
    inline vector<DescribeDcdnWafGroupsResponseBodyWafGroups> wafGroups() { DARABONBA_PTR_GET(wafGroups_, vector<DescribeDcdnWafGroupsResponseBodyWafGroups>) };
    inline DescribeDcdnWafGroupsResponseBody& setWafGroups(const vector<DescribeDcdnWafGroupsResponseBodyWafGroups> & wafGroups) { DARABONBA_PTR_SET_VALUE(wafGroups_, wafGroups) };
    inline DescribeDcdnWafGroupsResponseBody& setWafGroups(vector<DescribeDcdnWafGroupsResponseBodyWafGroups> && wafGroups) { DARABONBA_PTR_SET_RVALUE(wafGroups_, wafGroups) };


  protected:
    // The page number of the returned page. Default value: 1.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries to return on each page. Default value: **20**.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The number of WAF rule groups.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
    // The list of WAF rule groups.
    std::shared_ptr<vector<DescribeDcdnWafGroupsResponseBodyWafGroups>> wafGroups_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
