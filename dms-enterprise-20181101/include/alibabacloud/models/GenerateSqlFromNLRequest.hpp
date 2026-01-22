// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATESQLFROMNLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GENERATESQLFROMNLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GenerateSqlFromNLRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateSqlFromNLRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DbId, dbId_);
      DARABONBA_PTR_TO_JSON(Dialect, dialect_);
      DARABONBA_PTR_TO_JSON(Knowledge, knowledge_);
      DARABONBA_PTR_TO_JSON(Level, level_);
      DARABONBA_PTR_TO_JSON(Model, model_);
      DARABONBA_PTR_TO_JSON(Question, question_);
      DARABONBA_PTR_TO_JSON(RealLoginUserUid, realLoginUserUid_);
      DARABONBA_PTR_TO_JSON(TableNames, tableNames_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateSqlFromNLRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DbId, dbId_);
      DARABONBA_PTR_FROM_JSON(Dialect, dialect_);
      DARABONBA_PTR_FROM_JSON(Knowledge, knowledge_);
      DARABONBA_PTR_FROM_JSON(Level, level_);
      DARABONBA_PTR_FROM_JSON(Model, model_);
      DARABONBA_PTR_FROM_JSON(Question, question_);
      DARABONBA_PTR_FROM_JSON(RealLoginUserUid, realLoginUserUid_);
      DARABONBA_PTR_FROM_JSON(TableNames, tableNames_);
    };
    GenerateSqlFromNLRequest() = default ;
    GenerateSqlFromNLRequest(const GenerateSqlFromNLRequest &) = default ;
    GenerateSqlFromNLRequest(GenerateSqlFromNLRequest &&) = default ;
    GenerateSqlFromNLRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateSqlFromNLRequest() = default ;
    GenerateSqlFromNLRequest& operator=(const GenerateSqlFromNLRequest &) = default ;
    GenerateSqlFromNLRequest& operator=(GenerateSqlFromNLRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dbId_ == nullptr
        && this->dialect_ == nullptr && this->knowledge_ == nullptr && this->level_ == nullptr && this->model_ == nullptr && this->question_ == nullptr
        && this->realLoginUserUid_ == nullptr && this->tableNames_ == nullptr; };
    // dbId Field Functions 
    bool hasDbId() const { return this->dbId_ != nullptr;};
    void deleteDbId() { this->dbId_ = nullptr;};
    inline string getDbId() const { DARABONBA_PTR_GET_DEFAULT(dbId_, "") };
    inline GenerateSqlFromNLRequest& setDbId(string dbId) { DARABONBA_PTR_SET_VALUE(dbId_, dbId) };


    // dialect Field Functions 
    bool hasDialect() const { return this->dialect_ != nullptr;};
    void deleteDialect() { this->dialect_ = nullptr;};
    inline string getDialect() const { DARABONBA_PTR_GET_DEFAULT(dialect_, "") };
    inline GenerateSqlFromNLRequest& setDialect(string dialect) { DARABONBA_PTR_SET_VALUE(dialect_, dialect) };


    // knowledge Field Functions 
    bool hasKnowledge() const { return this->knowledge_ != nullptr;};
    void deleteKnowledge() { this->knowledge_ = nullptr;};
    inline string getKnowledge() const { DARABONBA_PTR_GET_DEFAULT(knowledge_, "") };
    inline GenerateSqlFromNLRequest& setKnowledge(string knowledge) { DARABONBA_PTR_SET_VALUE(knowledge_, knowledge) };


    // level Field Functions 
    bool hasLevel() const { return this->level_ != nullptr;};
    void deleteLevel() { this->level_ = nullptr;};
    inline string getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
    inline GenerateSqlFromNLRequest& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


    // model Field Functions 
    bool hasModel() const { return this->model_ != nullptr;};
    void deleteModel() { this->model_ = nullptr;};
    inline string getModel() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
    inline GenerateSqlFromNLRequest& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


    // question Field Functions 
    bool hasQuestion() const { return this->question_ != nullptr;};
    void deleteQuestion() { this->question_ = nullptr;};
    inline string getQuestion() const { DARABONBA_PTR_GET_DEFAULT(question_, "") };
    inline GenerateSqlFromNLRequest& setQuestion(string question) { DARABONBA_PTR_SET_VALUE(question_, question) };


    // realLoginUserUid Field Functions 
    bool hasRealLoginUserUid() const { return this->realLoginUserUid_ != nullptr;};
    void deleteRealLoginUserUid() { this->realLoginUserUid_ = nullptr;};
    inline string getRealLoginUserUid() const { DARABONBA_PTR_GET_DEFAULT(realLoginUserUid_, "") };
    inline GenerateSqlFromNLRequest& setRealLoginUserUid(string realLoginUserUid) { DARABONBA_PTR_SET_VALUE(realLoginUserUid_, realLoginUserUid) };


    // tableNames Field Functions 
    bool hasTableNames() const { return this->tableNames_ != nullptr;};
    void deleteTableNames() { this->tableNames_ = nullptr;};
    inline string getTableNames() const { DARABONBA_PTR_GET_DEFAULT(tableNames_, "") };
    inline GenerateSqlFromNLRequest& setTableNames(string tableNames) { DARABONBA_PTR_SET_VALUE(tableNames_, tableNames) };


  protected:
    // This parameter is required.
    shared_ptr<string> dbId_ {};
    shared_ptr<string> dialect_ {};
    shared_ptr<string> knowledge_ {};
    shared_ptr<string> level_ {};
    shared_ptr<string> model_ {};
    // This parameter is required.
    shared_ptr<string> question_ {};
    shared_ptr<string> realLoginUserUid_ {};
    shared_ptr<string> tableNames_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
