// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXECSQLTRANSSINGLESCRIPTTRANSLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EXECSQLTRANSSINGLESCRIPTTRANSLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace LHM20250116
{
namespace Models
{
  class ExecSqlTransSingleScriptTranslateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExecSqlTransSingleScriptTranslateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(sourceDialect, sourceDialect_);
      DARABONBA_PTR_TO_JSON(sourceSqlScript, sourceSqlScript_);
      DARABONBA_PTR_TO_JSON(tableMapping, tableMapping_);
      DARABONBA_PTR_TO_JSON(targetDialect, targetDialect_);
    };
    friend void from_json(const Darabonba::Json& j, ExecSqlTransSingleScriptTranslateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(sourceDialect, sourceDialect_);
      DARABONBA_PTR_FROM_JSON(sourceSqlScript, sourceSqlScript_);
      DARABONBA_PTR_FROM_JSON(tableMapping, tableMapping_);
      DARABONBA_PTR_FROM_JSON(targetDialect, targetDialect_);
    };
    ExecSqlTransSingleScriptTranslateRequest() = default ;
    ExecSqlTransSingleScriptTranslateRequest(const ExecSqlTransSingleScriptTranslateRequest &) = default ;
    ExecSqlTransSingleScriptTranslateRequest(ExecSqlTransSingleScriptTranslateRequest &&) = default ;
    ExecSqlTransSingleScriptTranslateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExecSqlTransSingleScriptTranslateRequest() = default ;
    ExecSqlTransSingleScriptTranslateRequest& operator=(const ExecSqlTransSingleScriptTranslateRequest &) = default ;
    ExecSqlTransSingleScriptTranslateRequest& operator=(ExecSqlTransSingleScriptTranslateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->sourceDialect_ == nullptr
        && this->sourceSqlScript_ == nullptr && this->tableMapping_ == nullptr && this->targetDialect_ == nullptr; };
    // sourceDialect Field Functions 
    bool hasSourceDialect() const { return this->sourceDialect_ != nullptr;};
    void deleteSourceDialect() { this->sourceDialect_ = nullptr;};
    inline string getSourceDialect() const { DARABONBA_PTR_GET_DEFAULT(sourceDialect_, "") };
    inline ExecSqlTransSingleScriptTranslateRequest& setSourceDialect(string sourceDialect) { DARABONBA_PTR_SET_VALUE(sourceDialect_, sourceDialect) };


    // sourceSqlScript Field Functions 
    bool hasSourceSqlScript() const { return this->sourceSqlScript_ != nullptr;};
    void deleteSourceSqlScript() { this->sourceSqlScript_ = nullptr;};
    inline string getSourceSqlScript() const { DARABONBA_PTR_GET_DEFAULT(sourceSqlScript_, "") };
    inline ExecSqlTransSingleScriptTranslateRequest& setSourceSqlScript(string sourceSqlScript) { DARABONBA_PTR_SET_VALUE(sourceSqlScript_, sourceSqlScript) };


    // tableMapping Field Functions 
    bool hasTableMapping() const { return this->tableMapping_ != nullptr;};
    void deleteTableMapping() { this->tableMapping_ = nullptr;};
    inline const vector<string> & getTableMapping() const { DARABONBA_PTR_GET_CONST(tableMapping_, vector<string>) };
    inline vector<string> getTableMapping() { DARABONBA_PTR_GET(tableMapping_, vector<string>) };
    inline ExecSqlTransSingleScriptTranslateRequest& setTableMapping(const vector<string> & tableMapping) { DARABONBA_PTR_SET_VALUE(tableMapping_, tableMapping) };
    inline ExecSqlTransSingleScriptTranslateRequest& setTableMapping(vector<string> && tableMapping) { DARABONBA_PTR_SET_RVALUE(tableMapping_, tableMapping) };


    // targetDialect Field Functions 
    bool hasTargetDialect() const { return this->targetDialect_ != nullptr;};
    void deleteTargetDialect() { this->targetDialect_ = nullptr;};
    inline string getTargetDialect() const { DARABONBA_PTR_GET_DEFAULT(targetDialect_, "") };
    inline ExecSqlTransSingleScriptTranslateRequest& setTargetDialect(string targetDialect) { DARABONBA_PTR_SET_VALUE(targetDialect_, targetDialect) };


  protected:
    // The source SQL dialect type.
    shared_ptr<string> sourceDialect_ {};
    // The source script content. It must be Base64-encoded before being passed in. The server decodes the content before performing the conversion.
    shared_ptr<string> sourceSqlScript_ {};
    // The table name mapping. In string format, the source table and target table are separated by a comma (,).
    shared_ptr<vector<string>> tableMapping_ {};
    // The target SQL dialect type.
    shared_ptr<string> targetDialect_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace LHM20250116
#endif
