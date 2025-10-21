// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITPREVIEWRESULT_HPP_
#define ALIBABACLOUD_MODELS_SUBMITPREVIEWRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/TableSchema.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ververica20220718
{
namespace Models
{
  class SubmitPreviewResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitPreviewResult& obj) { 
      DARABONBA_PTR_TO_JSON(queryId, queryId_);
      DARABONBA_PTR_TO_JSON(sessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(tableSchemas, tableSchemas_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitPreviewResult& obj) { 
      DARABONBA_PTR_FROM_JSON(queryId, queryId_);
      DARABONBA_PTR_FROM_JSON(sessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(tableSchemas, tableSchemas_);
    };
    SubmitPreviewResult() = default ;
    SubmitPreviewResult(const SubmitPreviewResult &) = default ;
    SubmitPreviewResult(SubmitPreviewResult &&) = default ;
    SubmitPreviewResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitPreviewResult() = default ;
    SubmitPreviewResult& operator=(const SubmitPreviewResult &) = default ;
    SubmitPreviewResult& operator=(SubmitPreviewResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->queryId_ == nullptr
        && return this->sessionId_ == nullptr && return this->tableSchemas_ == nullptr; };
    // queryId Field Functions 
    bool hasQueryId() const { return this->queryId_ != nullptr;};
    void deleteQueryId() { this->queryId_ = nullptr;};
    inline string queryId() const { DARABONBA_PTR_GET_DEFAULT(queryId_, "") };
    inline SubmitPreviewResult& setQueryId(string queryId) { DARABONBA_PTR_SET_VALUE(queryId_, queryId) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string sessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline SubmitPreviewResult& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // tableSchemas Field Functions 
    bool hasTableSchemas() const { return this->tableSchemas_ != nullptr;};
    void deleteTableSchemas() { this->tableSchemas_ = nullptr;};
    inline const vector<TableSchema> & tableSchemas() const { DARABONBA_PTR_GET_CONST(tableSchemas_, vector<TableSchema>) };
    inline vector<TableSchema> tableSchemas() { DARABONBA_PTR_GET(tableSchemas_, vector<TableSchema>) };
    inline SubmitPreviewResult& setTableSchemas(const vector<TableSchema> & tableSchemas) { DARABONBA_PTR_SET_VALUE(tableSchemas_, tableSchemas) };
    inline SubmitPreviewResult& setTableSchemas(vector<TableSchema> && tableSchemas) { DARABONBA_PTR_SET_RVALUE(tableSchemas_, tableSchemas) };


  protected:
    std::shared_ptr<string> queryId_ = nullptr;
    std::shared_ptr<string> sessionId_ = nullptr;
    std::shared_ptr<vector<TableSchema>> tableSchemas_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ververica20220718
#endif
