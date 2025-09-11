// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACCESSRULESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACCESSRULESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeAccessRulesResponseBodyAccessRules.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class DescribeAccessRulesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAccessRulesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessRules, accessRules_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAccessRulesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessRules, accessRules_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeAccessRulesResponseBody() = default ;
    DescribeAccessRulesResponseBody(const DescribeAccessRulesResponseBody &) = default ;
    DescribeAccessRulesResponseBody(DescribeAccessRulesResponseBody &&) = default ;
    DescribeAccessRulesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAccessRulesResponseBody() = default ;
    DescribeAccessRulesResponseBody& operator=(const DescribeAccessRulesResponseBody &) = default ;
    DescribeAccessRulesResponseBody& operator=(DescribeAccessRulesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accessRules_ != nullptr
        && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->requestId_ != nullptr && this->totalCount_ != nullptr; };
    // accessRules Field Functions 
    bool hasAccessRules() const { return this->accessRules_ != nullptr;};
    void deleteAccessRules() { this->accessRules_ = nullptr;};
    inline const DescribeAccessRulesResponseBodyAccessRules & accessRules() const { DARABONBA_PTR_GET_CONST(accessRules_, DescribeAccessRulesResponseBodyAccessRules) };
    inline DescribeAccessRulesResponseBodyAccessRules accessRules() { DARABONBA_PTR_GET(accessRules_, DescribeAccessRulesResponseBodyAccessRules) };
    inline DescribeAccessRulesResponseBody& setAccessRules(const DescribeAccessRulesResponseBodyAccessRules & accessRules) { DARABONBA_PTR_SET_VALUE(accessRules_, accessRules) };
    inline DescribeAccessRulesResponseBody& setAccessRules(DescribeAccessRulesResponseBodyAccessRules && accessRules) { DARABONBA_PTR_SET_RVALUE(accessRules_, accessRules) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeAccessRulesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeAccessRulesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAccessRulesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeAccessRulesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The rules in the permission group.
    std::shared_ptr<DescribeAccessRulesResponseBodyAccessRules> accessRules_ = nullptr;
    // The page number.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of rules.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
