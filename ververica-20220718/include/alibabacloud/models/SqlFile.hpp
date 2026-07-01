// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SQLFILE_HPP_
#define ALIBABACLOUD_MODELS_SQLFILE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ververica20220718
{
namespace Models
{
  class SqlFile : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SqlFile& obj) { 
      DARABONBA_PTR_TO_JSON(batchMode, batchMode_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(namespace, namespace_);
      DARABONBA_PTR_TO_JSON(parentId, parentId_);
      DARABONBA_PTR_TO_JSON(sessionClusterName, sessionClusterName_);
      DARABONBA_PTR_TO_JSON(sqlFileId, sqlFileId_);
      DARABONBA_PTR_TO_JSON(sqlScript, sqlScript_);
      DARABONBA_PTR_TO_JSON(workspace, workspace_);
    };
    friend void from_json(const Darabonba::Json& j, SqlFile& obj) { 
      DARABONBA_PTR_FROM_JSON(batchMode, batchMode_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(parentId, parentId_);
      DARABONBA_PTR_FROM_JSON(sessionClusterName, sessionClusterName_);
      DARABONBA_PTR_FROM_JSON(sqlFileId, sqlFileId_);
      DARABONBA_PTR_FROM_JSON(sqlScript, sqlScript_);
      DARABONBA_PTR_FROM_JSON(workspace, workspace_);
    };
    SqlFile() = default ;
    SqlFile(const SqlFile &) = default ;
    SqlFile(SqlFile &&) = default ;
    SqlFile(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SqlFile() = default ;
    SqlFile& operator=(const SqlFile &) = default ;
    SqlFile& operator=(SqlFile &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->batchMode_ == nullptr
        && this->description_ == nullptr && this->name_ == nullptr && this->namespace_ == nullptr && this->parentId_ == nullptr && this->sessionClusterName_ == nullptr
        && this->sqlFileId_ == nullptr && this->sqlScript_ == nullptr && this->workspace_ == nullptr; };
    // batchMode Field Functions 
    bool hasBatchMode() const { return this->batchMode_ != nullptr;};
    void deleteBatchMode() { this->batchMode_ = nullptr;};
    inline string getBatchMode() const { DARABONBA_PTR_GET_DEFAULT(batchMode_, "") };
    inline SqlFile& setBatchMode(string batchMode) { DARABONBA_PTR_SET_VALUE(batchMode_, batchMode) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline SqlFile& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline SqlFile& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline SqlFile& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // parentId Field Functions 
    bool hasParentId() const { return this->parentId_ != nullptr;};
    void deleteParentId() { this->parentId_ = nullptr;};
    inline string getParentId() const { DARABONBA_PTR_GET_DEFAULT(parentId_, "") };
    inline SqlFile& setParentId(string parentId) { DARABONBA_PTR_SET_VALUE(parentId_, parentId) };


    // sessionClusterName Field Functions 
    bool hasSessionClusterName() const { return this->sessionClusterName_ != nullptr;};
    void deleteSessionClusterName() { this->sessionClusterName_ = nullptr;};
    inline string getSessionClusterName() const { DARABONBA_PTR_GET_DEFAULT(sessionClusterName_, "") };
    inline SqlFile& setSessionClusterName(string sessionClusterName) { DARABONBA_PTR_SET_VALUE(sessionClusterName_, sessionClusterName) };


    // sqlFileId Field Functions 
    bool hasSqlFileId() const { return this->sqlFileId_ != nullptr;};
    void deleteSqlFileId() { this->sqlFileId_ = nullptr;};
    inline string getSqlFileId() const { DARABONBA_PTR_GET_DEFAULT(sqlFileId_, "") };
    inline SqlFile& setSqlFileId(string sqlFileId) { DARABONBA_PTR_SET_VALUE(sqlFileId_, sqlFileId) };


    // sqlScript Field Functions 
    bool hasSqlScript() const { return this->sqlScript_ != nullptr;};
    void deleteSqlScript() { this->sqlScript_ = nullptr;};
    inline string getSqlScript() const { DARABONBA_PTR_GET_DEFAULT(sqlScript_, "") };
    inline SqlFile& setSqlScript(string sqlScript) { DARABONBA_PTR_SET_VALUE(sqlScript_, sqlScript) };


    // workspace Field Functions 
    bool hasWorkspace() const { return this->workspace_ != nullptr;};
    void deleteWorkspace() { this->workspace_ = nullptr;};
    inline string getWorkspace() const { DARABONBA_PTR_GET_DEFAULT(workspace_, "") };
    inline SqlFile& setWorkspace(string workspace) { DARABONBA_PTR_SET_VALUE(workspace_, workspace) };


  protected:
    // The batch mode.
    shared_ptr<string> batchMode_ {};
    // The description of the SQL file.
    shared_ptr<string> description_ {};
    // The name of the SQL file.
    shared_ptr<string> name_ {};
    // The namespace.
    shared_ptr<string> namespace_ {};
    // The ID of the parent SQL file.
    shared_ptr<string> parentId_ {};
    // The name of the session cluster.
    shared_ptr<string> sessionClusterName_ {};
    // The SQL file ID.
    shared_ptr<string> sqlFileId_ {};
    // The SQL script content.
    shared_ptr<string> sqlScript_ {};
    // The workspace ID.
    shared_ptr<string> workspace_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ververica20220718
#endif
