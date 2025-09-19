// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLIENTPROBLEMTYPERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLIENTPROBLEMTYPERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeClientProblemTypeResponseBodyProblemTypes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeClientProblemTypeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClientProblemTypeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ProblemTypes, problemTypes_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClientProblemTypeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ProblemTypes, problemTypes_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeClientProblemTypeResponseBody() = default ;
    DescribeClientProblemTypeResponseBody(const DescribeClientProblemTypeResponseBody &) = default ;
    DescribeClientProblemTypeResponseBody(DescribeClientProblemTypeResponseBody &&) = default ;
    DescribeClientProblemTypeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClientProblemTypeResponseBody() = default ;
    DescribeClientProblemTypeResponseBody& operator=(const DescribeClientProblemTypeResponseBody &) = default ;
    DescribeClientProblemTypeResponseBody& operator=(DescribeClientProblemTypeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->count_ != nullptr
        && this->currentPage_ != nullptr && this->pageSize_ != nullptr && this->problemTypes_ != nullptr && this->requestId_ != nullptr && this->totalCount_ != nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline DescribeClientProblemTypeResponseBody& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeClientProblemTypeResponseBody& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeClientProblemTypeResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // problemTypes Field Functions 
    bool hasProblemTypes() const { return this->problemTypes_ != nullptr;};
    void deleteProblemTypes() { this->problemTypes_ = nullptr;};
    inline const vector<DescribeClientProblemTypeResponseBodyProblemTypes> & problemTypes() const { DARABONBA_PTR_GET_CONST(problemTypes_, vector<DescribeClientProblemTypeResponseBodyProblemTypes>) };
    inline vector<DescribeClientProblemTypeResponseBodyProblemTypes> problemTypes() { DARABONBA_PTR_GET(problemTypes_, vector<DescribeClientProblemTypeResponseBodyProblemTypes>) };
    inline DescribeClientProblemTypeResponseBody& setProblemTypes(const vector<DescribeClientProblemTypeResponseBodyProblemTypes> & problemTypes) { DARABONBA_PTR_SET_VALUE(problemTypes_, problemTypes) };
    inline DescribeClientProblemTypeResponseBody& setProblemTypes(vector<DescribeClientProblemTypeResponseBodyProblemTypes> && problemTypes) { DARABONBA_PTR_SET_RVALUE(problemTypes_, problemTypes) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeClientProblemTypeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeClientProblemTypeResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The number of entries returned on the current page.
    std::shared_ptr<int32_t> count_ = nullptr;
    // The page number.
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    // The number of entries per page. Default value: **20**.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The issue types.
    std::shared_ptr<vector<DescribeClientProblemTypeResponseBodyProblemTypes>> problemTypes_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
