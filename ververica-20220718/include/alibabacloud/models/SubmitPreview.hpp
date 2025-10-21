// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITPREVIEW_HPP_
#define ALIBABACLOUD_MODELS_SUBMITPREVIEW_HPP_
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
  class SubmitPreview : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitPreview& obj) { 
      DARABONBA_PTR_TO_JSON(queryName, queryName_);
      DARABONBA_PTR_TO_JSON(sessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(tableSchemas, tableSchemas_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitPreview& obj) { 
      DARABONBA_PTR_FROM_JSON(queryName, queryName_);
      DARABONBA_PTR_FROM_JSON(sessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(tableSchemas, tableSchemas_);
    };
    SubmitPreview() = default ;
    SubmitPreview(const SubmitPreview &) = default ;
    SubmitPreview(SubmitPreview &&) = default ;
    SubmitPreview(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitPreview() = default ;
    SubmitPreview& operator=(const SubmitPreview &) = default ;
    SubmitPreview& operator=(SubmitPreview &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->queryName_ == nullptr
        && return this->sessionId_ == nullptr && return this->tableSchemas_ == nullptr; };
    // queryName Field Functions 
    bool hasQueryName() const { return this->queryName_ != nullptr;};
    void deleteQueryName() { this->queryName_ = nullptr;};
    inline string queryName() const { DARABONBA_PTR_GET_DEFAULT(queryName_, "") };
    inline SubmitPreview& setQueryName(string queryName) { DARABONBA_PTR_SET_VALUE(queryName_, queryName) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string sessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline SubmitPreview& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // tableSchemas Field Functions 
    bool hasTableSchemas() const { return this->tableSchemas_ != nullptr;};
    void deleteTableSchemas() { this->tableSchemas_ = nullptr;};
    inline const vector<TableSchema> & tableSchemas() const { DARABONBA_PTR_GET_CONST(tableSchemas_, vector<TableSchema>) };
    inline vector<TableSchema> tableSchemas() { DARABONBA_PTR_GET(tableSchemas_, vector<TableSchema>) };
    inline SubmitPreview& setTableSchemas(const vector<TableSchema> & tableSchemas) { DARABONBA_PTR_SET_VALUE(tableSchemas_, tableSchemas) };
    inline SubmitPreview& setTableSchemas(vector<TableSchema> && tableSchemas) { DARABONBA_PTR_SET_RVALUE(tableSchemas_, tableSchemas) };


  protected:
    std::shared_ptr<string> queryName_ = nullptr;
    std::shared_ptr<string> sessionId_ = nullptr;
    std::shared_ptr<vector<TableSchema>> tableSchemas_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ververica20220718
#endif
