// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDATABASESZONALRESPONSEBODYDATABASES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDATABASESZONALRESPONSEBODYDATABASES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDatabasesZonalResponseBodyDatabasesAccounts.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeDatabasesZonalResponseBodyDatabases : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDatabasesZonalResponseBodyDatabases& obj) { 
      DARABONBA_PTR_TO_JSON(Accounts, accounts_);
      DARABONBA_PTR_TO_JSON(CharacterSetName, characterSetName_);
      DARABONBA_PTR_TO_JSON(DBDescription, DBDescription_);
      DARABONBA_PTR_TO_JSON(DBName, DBName_);
      DARABONBA_PTR_TO_JSON(DBStatus, DBStatus_);
      DARABONBA_PTR_TO_JSON(Engine, engine_);
      DARABONBA_PTR_TO_JSON(MasterID, masterID_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDatabasesZonalResponseBodyDatabases& obj) { 
      DARABONBA_PTR_FROM_JSON(Accounts, accounts_);
      DARABONBA_PTR_FROM_JSON(CharacterSetName, characterSetName_);
      DARABONBA_PTR_FROM_JSON(DBDescription, DBDescription_);
      DARABONBA_PTR_FROM_JSON(DBName, DBName_);
      DARABONBA_PTR_FROM_JSON(DBStatus, DBStatus_);
      DARABONBA_PTR_FROM_JSON(Engine, engine_);
      DARABONBA_PTR_FROM_JSON(MasterID, masterID_);
    };
    DescribeDatabasesZonalResponseBodyDatabases() = default ;
    DescribeDatabasesZonalResponseBodyDatabases(const DescribeDatabasesZonalResponseBodyDatabases &) = default ;
    DescribeDatabasesZonalResponseBodyDatabases(DescribeDatabasesZonalResponseBodyDatabases &&) = default ;
    DescribeDatabasesZonalResponseBodyDatabases(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDatabasesZonalResponseBodyDatabases() = default ;
    DescribeDatabasesZonalResponseBodyDatabases& operator=(const DescribeDatabasesZonalResponseBodyDatabases &) = default ;
    DescribeDatabasesZonalResponseBodyDatabases& operator=(DescribeDatabasesZonalResponseBodyDatabases &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accounts_ == nullptr
        && return this->characterSetName_ == nullptr && return this->DBDescription_ == nullptr && return this->DBName_ == nullptr && return this->DBStatus_ == nullptr && return this->engine_ == nullptr
        && return this->masterID_ == nullptr; };
    // accounts Field Functions 
    bool hasAccounts() const { return this->accounts_ != nullptr;};
    void deleteAccounts() { this->accounts_ = nullptr;};
    inline const vector<Models::DescribeDatabasesZonalResponseBodyDatabasesAccounts> & accounts() const { DARABONBA_PTR_GET_CONST(accounts_, vector<Models::DescribeDatabasesZonalResponseBodyDatabasesAccounts>) };
    inline vector<Models::DescribeDatabasesZonalResponseBodyDatabasesAccounts> accounts() { DARABONBA_PTR_GET(accounts_, vector<Models::DescribeDatabasesZonalResponseBodyDatabasesAccounts>) };
    inline DescribeDatabasesZonalResponseBodyDatabases& setAccounts(const vector<Models::DescribeDatabasesZonalResponseBodyDatabasesAccounts> & accounts) { DARABONBA_PTR_SET_VALUE(accounts_, accounts) };
    inline DescribeDatabasesZonalResponseBodyDatabases& setAccounts(vector<Models::DescribeDatabasesZonalResponseBodyDatabasesAccounts> && accounts) { DARABONBA_PTR_SET_RVALUE(accounts_, accounts) };


    // characterSetName Field Functions 
    bool hasCharacterSetName() const { return this->characterSetName_ != nullptr;};
    void deleteCharacterSetName() { this->characterSetName_ = nullptr;};
    inline string characterSetName() const { DARABONBA_PTR_GET_DEFAULT(characterSetName_, "") };
    inline DescribeDatabasesZonalResponseBodyDatabases& setCharacterSetName(string characterSetName) { DARABONBA_PTR_SET_VALUE(characterSetName_, characterSetName) };


    // DBDescription Field Functions 
    bool hasDBDescription() const { return this->DBDescription_ != nullptr;};
    void deleteDBDescription() { this->DBDescription_ = nullptr;};
    inline string DBDescription() const { DARABONBA_PTR_GET_DEFAULT(DBDescription_, "") };
    inline DescribeDatabasesZonalResponseBodyDatabases& setDBDescription(string DBDescription) { DARABONBA_PTR_SET_VALUE(DBDescription_, DBDescription) };


    // DBName Field Functions 
    bool hasDBName() const { return this->DBName_ != nullptr;};
    void deleteDBName() { this->DBName_ = nullptr;};
    inline string DBName() const { DARABONBA_PTR_GET_DEFAULT(DBName_, "") };
    inline DescribeDatabasesZonalResponseBodyDatabases& setDBName(string DBName) { DARABONBA_PTR_SET_VALUE(DBName_, DBName) };


    // DBStatus Field Functions 
    bool hasDBStatus() const { return this->DBStatus_ != nullptr;};
    void deleteDBStatus() { this->DBStatus_ = nullptr;};
    inline string DBStatus() const { DARABONBA_PTR_GET_DEFAULT(DBStatus_, "") };
    inline DescribeDatabasesZonalResponseBodyDatabases& setDBStatus(string DBStatus) { DARABONBA_PTR_SET_VALUE(DBStatus_, DBStatus) };


    // engine Field Functions 
    bool hasEngine() const { return this->engine_ != nullptr;};
    void deleteEngine() { this->engine_ = nullptr;};
    inline string engine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
    inline DescribeDatabasesZonalResponseBodyDatabases& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


    // masterID Field Functions 
    bool hasMasterID() const { return this->masterID_ != nullptr;};
    void deleteMasterID() { this->masterID_ = nullptr;};
    inline string masterID() const { DARABONBA_PTR_GET_DEFAULT(masterID_, "") };
    inline DescribeDatabasesZonalResponseBodyDatabases& setMasterID(string masterID) { DARABONBA_PTR_SET_VALUE(masterID_, masterID) };


  protected:
    std::shared_ptr<vector<Models::DescribeDatabasesZonalResponseBodyDatabasesAccounts>> accounts_ = nullptr;
    std::shared_ptr<string> characterSetName_ = nullptr;
    std::shared_ptr<string> DBDescription_ = nullptr;
    std::shared_ptr<string> DBName_ = nullptr;
    std::shared_ptr<string> DBStatus_ = nullptr;
    std::shared_ptr<string> engine_ = nullptr;
    std::shared_ptr<string> masterID_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
