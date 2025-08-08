// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDBTOPOLOGYRESPONSEBODYDBTOPOLOGY_HPP_
#define ALIBABACLOUD_MODELS_GETDBTOPOLOGYRESPONSEBODYDBTOPOLOGY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetDBTopologyResponseBodyDBTopologyDBTopologyInfoList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetDBTopologyResponseBodyDBTopology : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDBTopologyResponseBodyDBTopology& obj) { 
      DARABONBA_PTR_TO_JSON(Alias, alias_);
      DARABONBA_PTR_TO_JSON(DBTopologyInfoList, DBTopologyInfoList_);
      DARABONBA_PTR_TO_JSON(DbType, dbType_);
      DARABONBA_PTR_TO_JSON(EnvType, envType_);
      DARABONBA_PTR_TO_JSON(LogicDbId, logicDbId_);
      DARABONBA_PTR_TO_JSON(LogicDbName, logicDbName_);
      DARABONBA_PTR_TO_JSON(SearchName, searchName_);
    };
    friend void from_json(const Darabonba::Json& j, GetDBTopologyResponseBodyDBTopology& obj) { 
      DARABONBA_PTR_FROM_JSON(Alias, alias_);
      DARABONBA_PTR_FROM_JSON(DBTopologyInfoList, DBTopologyInfoList_);
      DARABONBA_PTR_FROM_JSON(DbType, dbType_);
      DARABONBA_PTR_FROM_JSON(EnvType, envType_);
      DARABONBA_PTR_FROM_JSON(LogicDbId, logicDbId_);
      DARABONBA_PTR_FROM_JSON(LogicDbName, logicDbName_);
      DARABONBA_PTR_FROM_JSON(SearchName, searchName_);
    };
    GetDBTopologyResponseBodyDBTopology() = default ;
    GetDBTopologyResponseBodyDBTopology(const GetDBTopologyResponseBodyDBTopology &) = default ;
    GetDBTopologyResponseBodyDBTopology(GetDBTopologyResponseBodyDBTopology &&) = default ;
    GetDBTopologyResponseBodyDBTopology(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDBTopologyResponseBodyDBTopology() = default ;
    GetDBTopologyResponseBodyDBTopology& operator=(const GetDBTopologyResponseBodyDBTopology &) = default ;
    GetDBTopologyResponseBodyDBTopology& operator=(GetDBTopologyResponseBodyDBTopology &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alias_ != nullptr
        && this->DBTopologyInfoList_ != nullptr && this->dbType_ != nullptr && this->envType_ != nullptr && this->logicDbId_ != nullptr && this->logicDbName_ != nullptr
        && this->searchName_ != nullptr; };
    // alias Field Functions 
    bool hasAlias() const { return this->alias_ != nullptr;};
    void deleteAlias() { this->alias_ = nullptr;};
    inline string alias() const { DARABONBA_PTR_GET_DEFAULT(alias_, "") };
    inline GetDBTopologyResponseBodyDBTopology& setAlias(string alias) { DARABONBA_PTR_SET_VALUE(alias_, alias) };


    // DBTopologyInfoList Field Functions 
    bool hasDBTopologyInfoList() const { return this->DBTopologyInfoList_ != nullptr;};
    void deleteDBTopologyInfoList() { this->DBTopologyInfoList_ = nullptr;};
    inline const vector<Models::GetDBTopologyResponseBodyDBTopologyDBTopologyInfoList> & DBTopologyInfoList() const { DARABONBA_PTR_GET_CONST(DBTopologyInfoList_, vector<Models::GetDBTopologyResponseBodyDBTopologyDBTopologyInfoList>) };
    inline vector<Models::GetDBTopologyResponseBodyDBTopologyDBTopologyInfoList> DBTopologyInfoList() { DARABONBA_PTR_GET(DBTopologyInfoList_, vector<Models::GetDBTopologyResponseBodyDBTopologyDBTopologyInfoList>) };
    inline GetDBTopologyResponseBodyDBTopology& setDBTopologyInfoList(const vector<Models::GetDBTopologyResponseBodyDBTopologyDBTopologyInfoList> & DBTopologyInfoList) { DARABONBA_PTR_SET_VALUE(DBTopologyInfoList_, DBTopologyInfoList) };
    inline GetDBTopologyResponseBodyDBTopology& setDBTopologyInfoList(vector<Models::GetDBTopologyResponseBodyDBTopologyDBTopologyInfoList> && DBTopologyInfoList) { DARABONBA_PTR_SET_RVALUE(DBTopologyInfoList_, DBTopologyInfoList) };


    // dbType Field Functions 
    bool hasDbType() const { return this->dbType_ != nullptr;};
    void deleteDbType() { this->dbType_ = nullptr;};
    inline string dbType() const { DARABONBA_PTR_GET_DEFAULT(dbType_, "") };
    inline GetDBTopologyResponseBodyDBTopology& setDbType(string dbType) { DARABONBA_PTR_SET_VALUE(dbType_, dbType) };


    // envType Field Functions 
    bool hasEnvType() const { return this->envType_ != nullptr;};
    void deleteEnvType() { this->envType_ = nullptr;};
    inline string envType() const { DARABONBA_PTR_GET_DEFAULT(envType_, "") };
    inline GetDBTopologyResponseBodyDBTopology& setEnvType(string envType) { DARABONBA_PTR_SET_VALUE(envType_, envType) };


    // logicDbId Field Functions 
    bool hasLogicDbId() const { return this->logicDbId_ != nullptr;};
    void deleteLogicDbId() { this->logicDbId_ = nullptr;};
    inline int64_t logicDbId() const { DARABONBA_PTR_GET_DEFAULT(logicDbId_, 0L) };
    inline GetDBTopologyResponseBodyDBTopology& setLogicDbId(int64_t logicDbId) { DARABONBA_PTR_SET_VALUE(logicDbId_, logicDbId) };


    // logicDbName Field Functions 
    bool hasLogicDbName() const { return this->logicDbName_ != nullptr;};
    void deleteLogicDbName() { this->logicDbName_ = nullptr;};
    inline string logicDbName() const { DARABONBA_PTR_GET_DEFAULT(logicDbName_, "") };
    inline GetDBTopologyResponseBodyDBTopology& setLogicDbName(string logicDbName) { DARABONBA_PTR_SET_VALUE(logicDbName_, logicDbName) };


    // searchName Field Functions 
    bool hasSearchName() const { return this->searchName_ != nullptr;};
    void deleteSearchName() { this->searchName_ = nullptr;};
    inline string searchName() const { DARABONBA_PTR_GET_DEFAULT(searchName_, "") };
    inline GetDBTopologyResponseBodyDBTopology& setSearchName(string searchName) { DARABONBA_PTR_SET_VALUE(searchName_, searchName) };


  protected:
    // The alias of the access point.
    std::shared_ptr<string> alias_ = nullptr;
    // The list of database splitting topology information.
    std::shared_ptr<vector<Models::GetDBTopologyResponseBodyDBTopologyDBTopologyInfoList>> DBTopologyInfoList_ = nullptr;
    // The type of the database engine.
    std::shared_ptr<string> dbType_ = nullptr;
    // The type of the environment in which the database instance is deployed. Valid values:
    // 
    // *   product: production environment
    // *   dev: development environment
    // *   pre: pre-release environment
    // *   test: test environment
    // *   sit: system integration testing (SIT) environment
    // *   uat: user acceptance testing (UAT) environment
    // *   pet: stress testing environment
    // *   stag: staging environment
    std::shared_ptr<string> envType_ = nullptr;
    // The ID of the logical database.
    std::shared_ptr<int64_t> logicDbId_ = nullptr;
    // Logical database name.
    std::shared_ptr<string> logicDbName_ = nullptr;
    // The name of the saved search.
    std::shared_ptr<string> searchName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
