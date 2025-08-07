// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDATABASESRESPONSEBODYDATABASESDATABASE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDATABASESRESPONSEBODYDATABASESDATABASE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDatabasesResponseBodyDatabasesDatabaseAccounts.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeDatabasesResponseBodyDatabasesDatabase : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDatabasesResponseBodyDatabasesDatabase& obj) { 
      DARABONBA_PTR_TO_JSON(Accounts, accounts_);
      DARABONBA_PTR_TO_JSON(CharacterSetName, characterSetName_);
      DARABONBA_PTR_TO_JSON(DBDescription, DBDescription_);
      DARABONBA_PTR_TO_JSON(DBName, DBName_);
      DARABONBA_PTR_TO_JSON(DBStatus, DBStatus_);
      DARABONBA_PTR_TO_JSON(Engine, engine_);
      DARABONBA_PTR_TO_JSON(MasterID, masterID_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDatabasesResponseBodyDatabasesDatabase& obj) { 
      DARABONBA_PTR_FROM_JSON(Accounts, accounts_);
      DARABONBA_PTR_FROM_JSON(CharacterSetName, characterSetName_);
      DARABONBA_PTR_FROM_JSON(DBDescription, DBDescription_);
      DARABONBA_PTR_FROM_JSON(DBName, DBName_);
      DARABONBA_PTR_FROM_JSON(DBStatus, DBStatus_);
      DARABONBA_PTR_FROM_JSON(Engine, engine_);
      DARABONBA_PTR_FROM_JSON(MasterID, masterID_);
    };
    DescribeDatabasesResponseBodyDatabasesDatabase() = default ;
    DescribeDatabasesResponseBodyDatabasesDatabase(const DescribeDatabasesResponseBodyDatabasesDatabase &) = default ;
    DescribeDatabasesResponseBodyDatabasesDatabase(DescribeDatabasesResponseBodyDatabasesDatabase &&) = default ;
    DescribeDatabasesResponseBodyDatabasesDatabase(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDatabasesResponseBodyDatabasesDatabase() = default ;
    DescribeDatabasesResponseBodyDatabasesDatabase& operator=(const DescribeDatabasesResponseBodyDatabasesDatabase &) = default ;
    DescribeDatabasesResponseBodyDatabasesDatabase& operator=(DescribeDatabasesResponseBodyDatabasesDatabase &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accounts_ != nullptr
        && this->characterSetName_ != nullptr && this->DBDescription_ != nullptr && this->DBName_ != nullptr && this->DBStatus_ != nullptr && this->engine_ != nullptr
        && this->masterID_ != nullptr; };
    // accounts Field Functions 
    bool hasAccounts() const { return this->accounts_ != nullptr;};
    void deleteAccounts() { this->accounts_ = nullptr;};
    inline const Models::DescribeDatabasesResponseBodyDatabasesDatabaseAccounts & accounts() const { DARABONBA_PTR_GET_CONST(accounts_, Models::DescribeDatabasesResponseBodyDatabasesDatabaseAccounts) };
    inline Models::DescribeDatabasesResponseBodyDatabasesDatabaseAccounts accounts() { DARABONBA_PTR_GET(accounts_, Models::DescribeDatabasesResponseBodyDatabasesDatabaseAccounts) };
    inline DescribeDatabasesResponseBodyDatabasesDatabase& setAccounts(const Models::DescribeDatabasesResponseBodyDatabasesDatabaseAccounts & accounts) { DARABONBA_PTR_SET_VALUE(accounts_, accounts) };
    inline DescribeDatabasesResponseBodyDatabasesDatabase& setAccounts(Models::DescribeDatabasesResponseBodyDatabasesDatabaseAccounts && accounts) { DARABONBA_PTR_SET_RVALUE(accounts_, accounts) };


    // characterSetName Field Functions 
    bool hasCharacterSetName() const { return this->characterSetName_ != nullptr;};
    void deleteCharacterSetName() { this->characterSetName_ = nullptr;};
    inline string characterSetName() const { DARABONBA_PTR_GET_DEFAULT(characterSetName_, "") };
    inline DescribeDatabasesResponseBodyDatabasesDatabase& setCharacterSetName(string characterSetName) { DARABONBA_PTR_SET_VALUE(characterSetName_, characterSetName) };


    // DBDescription Field Functions 
    bool hasDBDescription() const { return this->DBDescription_ != nullptr;};
    void deleteDBDescription() { this->DBDescription_ = nullptr;};
    inline string DBDescription() const { DARABONBA_PTR_GET_DEFAULT(DBDescription_, "") };
    inline DescribeDatabasesResponseBodyDatabasesDatabase& setDBDescription(string DBDescription) { DARABONBA_PTR_SET_VALUE(DBDescription_, DBDescription) };


    // DBName Field Functions 
    bool hasDBName() const { return this->DBName_ != nullptr;};
    void deleteDBName() { this->DBName_ = nullptr;};
    inline string DBName() const { DARABONBA_PTR_GET_DEFAULT(DBName_, "") };
    inline DescribeDatabasesResponseBodyDatabasesDatabase& setDBName(string DBName) { DARABONBA_PTR_SET_VALUE(DBName_, DBName) };


    // DBStatus Field Functions 
    bool hasDBStatus() const { return this->DBStatus_ != nullptr;};
    void deleteDBStatus() { this->DBStatus_ = nullptr;};
    inline string DBStatus() const { DARABONBA_PTR_GET_DEFAULT(DBStatus_, "") };
    inline DescribeDatabasesResponseBodyDatabasesDatabase& setDBStatus(string DBStatus) { DARABONBA_PTR_SET_VALUE(DBStatus_, DBStatus) };


    // engine Field Functions 
    bool hasEngine() const { return this->engine_ != nullptr;};
    void deleteEngine() { this->engine_ = nullptr;};
    inline string engine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
    inline DescribeDatabasesResponseBodyDatabasesDatabase& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


    // masterID Field Functions 
    bool hasMasterID() const { return this->masterID_ != nullptr;};
    void deleteMasterID() { this->masterID_ = nullptr;};
    inline string masterID() const { DARABONBA_PTR_GET_DEFAULT(masterID_, "") };
    inline DescribeDatabasesResponseBodyDatabasesDatabase& setMasterID(string masterID) { DARABONBA_PTR_SET_VALUE(masterID_, masterID) };


  protected:
    // Details about the accounts.
    // 
    // > A PolarDB for MySQL cluster does not support privileged accounts.
    std::shared_ptr<Models::DescribeDatabasesResponseBodyDatabasesDatabaseAccounts> accounts_ = nullptr;
    // The character set that the database uses. For more information, see [Character set tables](https://help.aliyun.com/document_detail/99716.html).
    std::shared_ptr<string> characterSetName_ = nullptr;
    // The description of the database.
    std::shared_ptr<string> DBDescription_ = nullptr;
    // The name of the database.
    std::shared_ptr<string> DBName_ = nullptr;
    // The state of the database. Valid values:
    // 
    // *   **Creating**
    // *   **Running**
    // *   **Deleting**
    std::shared_ptr<string> DBStatus_ = nullptr;
    // The type of the database engine. Valid values:
    // 
    // *   **MySQL**
    // *   **Oracle**
    // *   **PostgreSQL**
    std::shared_ptr<string> engine_ = nullptr;
    // The ID of the primary node in the cluster of Multi-master Cluster (Database/Table) Edition.
    std::shared_ptr<string> masterID_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
