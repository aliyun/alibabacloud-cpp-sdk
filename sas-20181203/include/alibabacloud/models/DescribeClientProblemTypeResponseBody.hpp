// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLIENTPROBLEMTYPERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLIENTPROBLEMTYPERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class ProblemTypes : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ProblemTypes& obj) { 
        DARABONBA_PTR_TO_JSON(problemDetail, problemDetail_);
        DARABONBA_PTR_TO_JSON(problemId, problemId_);
        DARABONBA_PTR_TO_JSON(problemType, problemType_);
      };
      friend void from_json(const Darabonba::Json& j, ProblemTypes& obj) { 
        DARABONBA_PTR_FROM_JSON(problemDetail, problemDetail_);
        DARABONBA_PTR_FROM_JSON(problemId, problemId_);
        DARABONBA_PTR_FROM_JSON(problemType, problemType_);
      };
      ProblemTypes() = default ;
      ProblemTypes(const ProblemTypes &) = default ;
      ProblemTypes(ProblemTypes &&) = default ;
      ProblemTypes(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ProblemTypes() = default ;
      ProblemTypes& operator=(const ProblemTypes &) = default ;
      ProblemTypes& operator=(ProblemTypes &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->problemDetail_ == nullptr
        && this->problemId_ == nullptr && this->problemType_ == nullptr; };
      // problemDetail Field Functions 
      bool hasProblemDetail() const { return this->problemDetail_ != nullptr;};
      void deleteProblemDetail() { this->problemDetail_ = nullptr;};
      inline string getProblemDetail() const { DARABONBA_PTR_GET_DEFAULT(problemDetail_, "") };
      inline ProblemTypes& setProblemDetail(string problemDetail) { DARABONBA_PTR_SET_VALUE(problemDetail_, problemDetail) };


      // problemId Field Functions 
      bool hasProblemId() const { return this->problemId_ != nullptr;};
      void deleteProblemId() { this->problemId_ = nullptr;};
      inline string getProblemId() const { DARABONBA_PTR_GET_DEFAULT(problemId_, "") };
      inline ProblemTypes& setProblemId(string problemId) { DARABONBA_PTR_SET_VALUE(problemId_, problemId) };


      // problemType Field Functions 
      bool hasProblemType() const { return this->problemType_ != nullptr;};
      void deleteProblemType() { this->problemType_ = nullptr;};
      inline string getProblemType() const { DARABONBA_PTR_GET_DEFAULT(problemType_, "") };
      inline ProblemTypes& setProblemType(string problemType) { DARABONBA_PTR_SET_VALUE(problemType_, problemType) };


    protected:
      // The description of the issue type.
      shared_ptr<string> problemDetail_ {};
      // The ID of the issue type.
      shared_ptr<string> problemId_ {};
      // The name of the issue type.
      shared_ptr<string> problemType_ {};
    };

    virtual bool empty() const override { return this->count_ == nullptr
        && this->currentPage_ == nullptr && this->pageSize_ == nullptr && this->problemTypes_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline DescribeClientProblemTypeResponseBody& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeClientProblemTypeResponseBody& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeClientProblemTypeResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // problemTypes Field Functions 
    bool hasProblemTypes() const { return this->problemTypes_ != nullptr;};
    void deleteProblemTypes() { this->problemTypes_ = nullptr;};
    inline const vector<DescribeClientProblemTypeResponseBody::ProblemTypes> & getProblemTypes() const { DARABONBA_PTR_GET_CONST(problemTypes_, vector<DescribeClientProblemTypeResponseBody::ProblemTypes>) };
    inline vector<DescribeClientProblemTypeResponseBody::ProblemTypes> getProblemTypes() { DARABONBA_PTR_GET(problemTypes_, vector<DescribeClientProblemTypeResponseBody::ProblemTypes>) };
    inline DescribeClientProblemTypeResponseBody& setProblemTypes(const vector<DescribeClientProblemTypeResponseBody::ProblemTypes> & problemTypes) { DARABONBA_PTR_SET_VALUE(problemTypes_, problemTypes) };
    inline DescribeClientProblemTypeResponseBody& setProblemTypes(vector<DescribeClientProblemTypeResponseBody::ProblemTypes> && problemTypes) { DARABONBA_PTR_SET_RVALUE(problemTypes_, problemTypes) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeClientProblemTypeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeClientProblemTypeResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The number of entries returned on the current page.
    shared_ptr<int32_t> count_ {};
    // The page number.
    shared_ptr<int32_t> currentPage_ {};
    // The number of entries per page. Default value: **20**.
    shared_ptr<int32_t> pageSize_ {};
    // The issue types.
    shared_ptr<vector<DescribeClientProblemTypeResponseBody::ProblemTypes>> problemTypes_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
