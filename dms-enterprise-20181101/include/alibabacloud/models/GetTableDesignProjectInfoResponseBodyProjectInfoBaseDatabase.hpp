// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTABLEDESIGNPROJECTINFORESPONSEBODYPROJECTINFOBASEDATABASE_HPP_
#define ALIBABACLOUD_MODELS_GETTABLEDESIGNPROJECTINFORESPONSEBODYPROJECTINFOBASEDATABASE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetTableDesignProjectInfoResponseBodyProjectInfoBaseDatabase : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTableDesignProjectInfoResponseBodyProjectInfoBaseDatabase& obj) { 
      DARABONBA_PTR_TO_JSON(Alias, alias_);
      DARABONBA_PTR_TO_JSON(DbId, dbId_);
      DARABONBA_PTR_TO_JSON(DbType, dbType_);
      DARABONBA_PTR_TO_JSON(EnvType, envType_);
      DARABONBA_PTR_TO_JSON(Logic, logic_);
      DARABONBA_PTR_TO_JSON(SchemaName, schemaName_);
      DARABONBA_PTR_TO_JSON(SearchName, searchName_);
    };
    friend void from_json(const Darabonba::Json& j, GetTableDesignProjectInfoResponseBodyProjectInfoBaseDatabase& obj) { 
      DARABONBA_PTR_FROM_JSON(Alias, alias_);
      DARABONBA_PTR_FROM_JSON(DbId, dbId_);
      DARABONBA_PTR_FROM_JSON(DbType, dbType_);
      DARABONBA_PTR_FROM_JSON(EnvType, envType_);
      DARABONBA_PTR_FROM_JSON(Logic, logic_);
      DARABONBA_PTR_FROM_JSON(SchemaName, schemaName_);
      DARABONBA_PTR_FROM_JSON(SearchName, searchName_);
    };
    GetTableDesignProjectInfoResponseBodyProjectInfoBaseDatabase() = default ;
    GetTableDesignProjectInfoResponseBodyProjectInfoBaseDatabase(const GetTableDesignProjectInfoResponseBodyProjectInfoBaseDatabase &) = default ;
    GetTableDesignProjectInfoResponseBodyProjectInfoBaseDatabase(GetTableDesignProjectInfoResponseBodyProjectInfoBaseDatabase &&) = default ;
    GetTableDesignProjectInfoResponseBodyProjectInfoBaseDatabase(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTableDesignProjectInfoResponseBodyProjectInfoBaseDatabase() = default ;
    GetTableDesignProjectInfoResponseBodyProjectInfoBaseDatabase& operator=(const GetTableDesignProjectInfoResponseBodyProjectInfoBaseDatabase &) = default ;
    GetTableDesignProjectInfoResponseBodyProjectInfoBaseDatabase& operator=(GetTableDesignProjectInfoResponseBodyProjectInfoBaseDatabase &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alias_ != nullptr
        && this->dbId_ != nullptr && this->dbType_ != nullptr && this->envType_ != nullptr && this->logic_ != nullptr && this->schemaName_ != nullptr
        && this->searchName_ != nullptr; };
    // alias Field Functions 
    bool hasAlias() const { return this->alias_ != nullptr;};
    void deleteAlias() { this->alias_ = nullptr;};
    inline string alias() const { DARABONBA_PTR_GET_DEFAULT(alias_, "") };
    inline GetTableDesignProjectInfoResponseBodyProjectInfoBaseDatabase& setAlias(string alias) { DARABONBA_PTR_SET_VALUE(alias_, alias) };


    // dbId Field Functions 
    bool hasDbId() const { return this->dbId_ != nullptr;};
    void deleteDbId() { this->dbId_ = nullptr;};
    inline int32_t dbId() const { DARABONBA_PTR_GET_DEFAULT(dbId_, 0) };
    inline GetTableDesignProjectInfoResponseBodyProjectInfoBaseDatabase& setDbId(int32_t dbId) { DARABONBA_PTR_SET_VALUE(dbId_, dbId) };


    // dbType Field Functions 
    bool hasDbType() const { return this->dbType_ != nullptr;};
    void deleteDbType() { this->dbType_ = nullptr;};
    inline string dbType() const { DARABONBA_PTR_GET_DEFAULT(dbType_, "") };
    inline GetTableDesignProjectInfoResponseBodyProjectInfoBaseDatabase& setDbType(string dbType) { DARABONBA_PTR_SET_VALUE(dbType_, dbType) };


    // envType Field Functions 
    bool hasEnvType() const { return this->envType_ != nullptr;};
    void deleteEnvType() { this->envType_ = nullptr;};
    inline string envType() const { DARABONBA_PTR_GET_DEFAULT(envType_, "") };
    inline GetTableDesignProjectInfoResponseBodyProjectInfoBaseDatabase& setEnvType(string envType) { DARABONBA_PTR_SET_VALUE(envType_, envType) };


    // logic Field Functions 
    bool hasLogic() const { return this->logic_ != nullptr;};
    void deleteLogic() { this->logic_ = nullptr;};
    inline bool logic() const { DARABONBA_PTR_GET_DEFAULT(logic_, false) };
    inline GetTableDesignProjectInfoResponseBodyProjectInfoBaseDatabase& setLogic(bool logic) { DARABONBA_PTR_SET_VALUE(logic_, logic) };


    // schemaName Field Functions 
    bool hasSchemaName() const { return this->schemaName_ != nullptr;};
    void deleteSchemaName() { this->schemaName_ = nullptr;};
    inline string schemaName() const { DARABONBA_PTR_GET_DEFAULT(schemaName_, "") };
    inline GetTableDesignProjectInfoResponseBodyProjectInfoBaseDatabase& setSchemaName(string schemaName) { DARABONBA_PTR_SET_VALUE(schemaName_, schemaName) };


    // searchName Field Functions 
    bool hasSearchName() const { return this->searchName_ != nullptr;};
    void deleteSearchName() { this->searchName_ = nullptr;};
    inline string searchName() const { DARABONBA_PTR_GET_DEFAULT(searchName_, "") };
    inline GetTableDesignProjectInfoResponseBodyProjectInfoBaseDatabase& setSearchName(string searchName) { DARABONBA_PTR_SET_VALUE(searchName_, searchName) };


  protected:
    // The alias of the database instance.
    std::shared_ptr<string> alias_ = nullptr;
    // The database ID.
    std::shared_ptr<int32_t> dbId_ = nullptr;
    // The type of the database. For more information about the valid values of this parameter, see [DbType parameter](https://help.aliyun.com/document_detail/198106.html).
    std::shared_ptr<string> dbType_ = nullptr;
    // The type of the environment in which the database instance is deployed. Valid values:
    // 
    // *   **product**: production environment.
    // *   **dev**: development environment.
    // *   **pre**: pre-release environment.
    // *   **test**: test environment.
    // *   **sit**: system integration testing (SIT) environment.
    // *   **uat**: user acceptance testing (UAT) environment.
    // *   **pet**: stress testing environment.
    // *   **stag**: staging environment.
    std::shared_ptr<string> envType_ = nullptr;
    // Indicates whether the database is a logical database. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> logic_ = nullptr;
    // The database name.
    std::shared_ptr<string> schemaName_ = nullptr;
    // The name that is used to search for the database.
    std::shared_ptr<string> searchName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
