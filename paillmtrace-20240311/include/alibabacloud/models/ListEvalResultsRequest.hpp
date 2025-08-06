// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEVALRESULTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTEVALRESULTSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiLLMTrace20240311
{
namespace Models
{
  class ListEvalResultsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEvalResultsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EvaluationId, evaluationId_);
      DARABONBA_PTR_TO_JSON(Keyword, keyword_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RecordIds, recordIds_);
    };
    friend void from_json(const Darabonba::Json& j, ListEvalResultsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EvaluationId, evaluationId_);
      DARABONBA_PTR_FROM_JSON(Keyword, keyword_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RecordIds, recordIds_);
    };
    ListEvalResultsRequest() = default ;
    ListEvalResultsRequest(const ListEvalResultsRequest &) = default ;
    ListEvalResultsRequest(ListEvalResultsRequest &&) = default ;
    ListEvalResultsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEvalResultsRequest() = default ;
    ListEvalResultsRequest& operator=(const ListEvalResultsRequest &) = default ;
    ListEvalResultsRequest& operator=(ListEvalResultsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->evaluationId_ != nullptr
        && this->keyword_ != nullptr && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->recordIds_ != nullptr; };
    // evaluationId Field Functions 
    bool hasEvaluationId() const { return this->evaluationId_ != nullptr;};
    void deleteEvaluationId() { this->evaluationId_ = nullptr;};
    inline string evaluationId() const { DARABONBA_PTR_GET_DEFAULT(evaluationId_, "") };
    inline ListEvalResultsRequest& setEvaluationId(string evaluationId) { DARABONBA_PTR_SET_VALUE(evaluationId_, evaluationId) };


    // keyword Field Functions 
    bool hasKeyword() const { return this->keyword_ != nullptr;};
    void deleteKeyword() { this->keyword_ = nullptr;};
    inline string keyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
    inline ListEvalResultsRequest& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListEvalResultsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListEvalResultsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // recordIds Field Functions 
    bool hasRecordIds() const { return this->recordIds_ != nullptr;};
    void deleteRecordIds() { this->recordIds_ = nullptr;};
    inline const vector<string> & recordIds() const { DARABONBA_PTR_GET_CONST(recordIds_, vector<string>) };
    inline vector<string> recordIds() { DARABONBA_PTR_GET(recordIds_, vector<string>) };
    inline ListEvalResultsRequest& setRecordIds(const vector<string> & recordIds) { DARABONBA_PTR_SET_VALUE(recordIds_, recordIds) };
    inline ListEvalResultsRequest& setRecordIds(vector<string> && recordIds) { DARABONBA_PTR_SET_RVALUE(recordIds_, recordIds) };


  protected:
    // The task ID of the evaluation task to which the trace belongs.
    std::shared_ptr<string> evaluationId_ = nullptr;
    // The keyword to query from the evaluation inputs.
    std::shared_ptr<string> keyword_ = nullptr;
    // The page number. Page starts from page 1. Default value: 1
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries to return on each page. Maximum value: 50. Default value: 10.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The trace data IDs.
    std::shared_ptr<vector<string>> recordIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiLLMTrace20240311
#endif
