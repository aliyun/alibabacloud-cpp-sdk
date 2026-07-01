// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTSQLEXECUTIONBODY_HPP_
#define ALIBABACLOUD_MODELS_STARTSQLEXECUTIONBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ververica20220718
{
namespace Models
{
  class StartSqlExecutionBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartSqlExecutionBody& obj) { 
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(sqlFileId, sqlFileId_);
      DARABONBA_PTR_TO_JSON(sqlScript, sqlScript_);
    };
    friend void from_json(const Darabonba::Json& j, StartSqlExecutionBody& obj) { 
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(sqlFileId, sqlFileId_);
      DARABONBA_PTR_FROM_JSON(sqlScript, sqlScript_);
    };
    StartSqlExecutionBody() = default ;
    StartSqlExecutionBody(const StartSqlExecutionBody &) = default ;
    StartSqlExecutionBody(StartSqlExecutionBody &&) = default ;
    StartSqlExecutionBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartSqlExecutionBody() = default ;
    StartSqlExecutionBody& operator=(const StartSqlExecutionBody &) = default ;
    StartSqlExecutionBody& operator=(StartSqlExecutionBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && this->sqlFileId_ == nullptr && this->sqlScript_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline StartSqlExecutionBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // sqlFileId Field Functions 
    bool hasSqlFileId() const { return this->sqlFileId_ != nullptr;};
    void deleteSqlFileId() { this->sqlFileId_ = nullptr;};
    inline string getSqlFileId() const { DARABONBA_PTR_GET_DEFAULT(sqlFileId_, "") };
    inline StartSqlExecutionBody& setSqlFileId(string sqlFileId) { DARABONBA_PTR_SET_VALUE(sqlFileId_, sqlFileId) };


    // sqlScript Field Functions 
    bool hasSqlScript() const { return this->sqlScript_ != nullptr;};
    void deleteSqlScript() { this->sqlScript_ = nullptr;};
    inline string getSqlScript() const { DARABONBA_PTR_GET_DEFAULT(sqlScript_, "") };
    inline StartSqlExecutionBody& setSqlScript(string sqlScript) { DARABONBA_PTR_SET_VALUE(sqlScript_, sqlScript) };


  protected:
    // The description of the SQL execution.
    shared_ptr<string> description_ {};
    // The SQL file ID.
    shared_ptr<string> sqlFileId_ {};
    // The SQL script content.
    shared_ptr<string> sqlScript_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ververica20220718
#endif
