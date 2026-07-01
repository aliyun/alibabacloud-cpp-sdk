// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DQLRESULT_HPP_
#define ALIBABACLOUD_MODELS_DQLRESULT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SubmitPreviewResult.hpp>
#include <vector>
#include <alibabacloud/models/TableResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ververica20220718
{
namespace Models
{
  class DqlResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DqlResult& obj) { 
      DARABONBA_PTR_TO_JSON(statementIndex, statementIndex_);
      DARABONBA_PTR_TO_JSON(submitPreviewResult, submitPreviewResult_);
      DARABONBA_PTR_TO_JSON(tableResults, tableResults_);
    };
    friend void from_json(const Darabonba::Json& j, DqlResult& obj) { 
      DARABONBA_PTR_FROM_JSON(statementIndex, statementIndex_);
      DARABONBA_PTR_FROM_JSON(submitPreviewResult, submitPreviewResult_);
      DARABONBA_PTR_FROM_JSON(tableResults, tableResults_);
    };
    DqlResult() = default ;
    DqlResult(const DqlResult &) = default ;
    DqlResult(DqlResult &&) = default ;
    DqlResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DqlResult() = default ;
    DqlResult& operator=(const DqlResult &) = default ;
    DqlResult& operator=(DqlResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->statementIndex_ == nullptr
        && this->submitPreviewResult_ == nullptr && this->tableResults_ == nullptr; };
    // statementIndex Field Functions 
    bool hasStatementIndex() const { return this->statementIndex_ != nullptr;};
    void deleteStatementIndex() { this->statementIndex_ = nullptr;};
    inline int32_t getStatementIndex() const { DARABONBA_PTR_GET_DEFAULT(statementIndex_, 0) };
    inline DqlResult& setStatementIndex(int32_t statementIndex) { DARABONBA_PTR_SET_VALUE(statementIndex_, statementIndex) };


    // submitPreviewResult Field Functions 
    bool hasSubmitPreviewResult() const { return this->submitPreviewResult_ != nullptr;};
    void deleteSubmitPreviewResult() { this->submitPreviewResult_ = nullptr;};
    inline const SubmitPreviewResult & getSubmitPreviewResult() const { DARABONBA_PTR_GET_CONST(submitPreviewResult_, SubmitPreviewResult) };
    inline SubmitPreviewResult getSubmitPreviewResult() { DARABONBA_PTR_GET(submitPreviewResult_, SubmitPreviewResult) };
    inline DqlResult& setSubmitPreviewResult(const SubmitPreviewResult & submitPreviewResult) { DARABONBA_PTR_SET_VALUE(submitPreviewResult_, submitPreviewResult) };
    inline DqlResult& setSubmitPreviewResult(SubmitPreviewResult && submitPreviewResult) { DARABONBA_PTR_SET_RVALUE(submitPreviewResult_, submitPreviewResult) };


    // tableResults Field Functions 
    bool hasTableResults() const { return this->tableResults_ != nullptr;};
    void deleteTableResults() { this->tableResults_ = nullptr;};
    inline const vector<TableResult> & getTableResults() const { DARABONBA_PTR_GET_CONST(tableResults_, vector<TableResult>) };
    inline vector<TableResult> getTableResults() { DARABONBA_PTR_GET(tableResults_, vector<TableResult>) };
    inline DqlResult& setTableResults(const vector<TableResult> & tableResults) { DARABONBA_PTR_SET_VALUE(tableResults_, tableResults) };
    inline DqlResult& setTableResults(vector<TableResult> && tableResults) { DARABONBA_PTR_SET_RVALUE(tableResults_, tableResults) };


  protected:
    // The statement index.
    shared_ptr<int32_t> statementIndex_ {};
    // The submit preview results.
    shared_ptr<SubmitPreviewResult> submitPreviewResult_ {};
    // The table results.
    shared_ptr<vector<TableResult>> tableResults_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ververica20220718
#endif
