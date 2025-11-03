// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGRANTRULESTOCENRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGRANTRULESTOCENRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeGrantRulesToCenResponseBodyCenGrantRules.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeGrantRulesToCenResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGrantRulesToCenResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CenGrantRules, cenGrantRules_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGrantRulesToCenResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CenGrantRules, cenGrantRules_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeGrantRulesToCenResponseBody() = default ;
    DescribeGrantRulesToCenResponseBody(const DescribeGrantRulesToCenResponseBody &) = default ;
    DescribeGrantRulesToCenResponseBody(DescribeGrantRulesToCenResponseBody &&) = default ;
    DescribeGrantRulesToCenResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGrantRulesToCenResponseBody() = default ;
    DescribeGrantRulesToCenResponseBody& operator=(const DescribeGrantRulesToCenResponseBody &) = default ;
    DescribeGrantRulesToCenResponseBody& operator=(DescribeGrantRulesToCenResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cenGrantRules_ == nullptr
        && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // cenGrantRules Field Functions 
    bool hasCenGrantRules() const { return this->cenGrantRules_ != nullptr;};
    void deleteCenGrantRules() { this->cenGrantRules_ = nullptr;};
    inline const DescribeGrantRulesToCenResponseBodyCenGrantRules & cenGrantRules() const { DARABONBA_PTR_GET_CONST(cenGrantRules_, DescribeGrantRulesToCenResponseBodyCenGrantRules) };
    inline DescribeGrantRulesToCenResponseBodyCenGrantRules cenGrantRules() { DARABONBA_PTR_GET(cenGrantRules_, DescribeGrantRulesToCenResponseBodyCenGrantRules) };
    inline DescribeGrantRulesToCenResponseBody& setCenGrantRules(const DescribeGrantRulesToCenResponseBodyCenGrantRules & cenGrantRules) { DARABONBA_PTR_SET_VALUE(cenGrantRules_, cenGrantRules) };
    inline DescribeGrantRulesToCenResponseBody& setCenGrantRules(DescribeGrantRulesToCenResponseBodyCenGrantRules && cenGrantRules) { DARABONBA_PTR_SET_RVALUE(cenGrantRules_, cenGrantRules) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeGrantRulesToCenResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeGrantRulesToCenResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeGrantRulesToCenResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeGrantRulesToCenResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The information about the authorization.
    std::shared_ptr<DescribeGrantRulesToCenResponseBodyCenGrantRules> cenGrantRules_ = nullptr;
    // The page number of the returned page.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries returned per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
