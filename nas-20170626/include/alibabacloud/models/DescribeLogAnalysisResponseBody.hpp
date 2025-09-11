// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELOGANALYSISRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELOGANALYSISRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeLogAnalysisResponseBodyAnalyses.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class DescribeLogAnalysisResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLogAnalysisResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Analyses, analyses_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLogAnalysisResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Analyses, analyses_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeLogAnalysisResponseBody() = default ;
    DescribeLogAnalysisResponseBody(const DescribeLogAnalysisResponseBody &) = default ;
    DescribeLogAnalysisResponseBody(DescribeLogAnalysisResponseBody &&) = default ;
    DescribeLogAnalysisResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLogAnalysisResponseBody() = default ;
    DescribeLogAnalysisResponseBody& operator=(const DescribeLogAnalysisResponseBody &) = default ;
    DescribeLogAnalysisResponseBody& operator=(DescribeLogAnalysisResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->analyses_ != nullptr
        && this->code_ != nullptr && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->requestId_ != nullptr && this->totalCount_ != nullptr; };
    // analyses Field Functions 
    bool hasAnalyses() const { return this->analyses_ != nullptr;};
    void deleteAnalyses() { this->analyses_ = nullptr;};
    inline const DescribeLogAnalysisResponseBodyAnalyses & analyses() const { DARABONBA_PTR_GET_CONST(analyses_, DescribeLogAnalysisResponseBodyAnalyses) };
    inline DescribeLogAnalysisResponseBodyAnalyses analyses() { DARABONBA_PTR_GET(analyses_, DescribeLogAnalysisResponseBodyAnalyses) };
    inline DescribeLogAnalysisResponseBody& setAnalyses(const DescribeLogAnalysisResponseBodyAnalyses & analyses) { DARABONBA_PTR_SET_VALUE(analyses_, analyses) };
    inline DescribeLogAnalysisResponseBody& setAnalyses(DescribeLogAnalysisResponseBodyAnalyses && analyses) { DARABONBA_PTR_SET_RVALUE(analyses_, analyses) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeLogAnalysisResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeLogAnalysisResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeLogAnalysisResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLogAnalysisResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeLogAnalysisResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The collection of log dump information.
    std::shared_ptr<DescribeLogAnalysisResponseBodyAnalyses> analyses_ = nullptr;
    // The HTTP status code.
    std::shared_ptr<string> code_ = nullptr;
    // The page number.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of log dump entries returned per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of log dump entries in the region.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
