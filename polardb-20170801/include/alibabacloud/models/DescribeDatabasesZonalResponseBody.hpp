// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDATABASESZONALRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDATABASESZONALRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeDatabasesZonalResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDatabasesZonalResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Databases, databases_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDatabasesZonalResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Databases, databases_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDatabasesZonalResponseBody() = default ;
    DescribeDatabasesZonalResponseBody(const DescribeDatabasesZonalResponseBody &) = default ;
    DescribeDatabasesZonalResponseBody(DescribeDatabasesZonalResponseBody &&) = default ;
    DescribeDatabasesZonalResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDatabasesZonalResponseBody() = default ;
    DescribeDatabasesZonalResponseBody& operator=(const DescribeDatabasesZonalResponseBody &) = default ;
    DescribeDatabasesZonalResponseBody& operator=(DescribeDatabasesZonalResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Databases : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Databases& obj) { 
        DARABONBA_PTR_TO_JSON(Accounts, accounts_);
        DARABONBA_PTR_TO_JSON(CharacterSetName, characterSetName_);
        DARABONBA_PTR_TO_JSON(DBDescription, DBDescription_);
        DARABONBA_PTR_TO_JSON(DBName, DBName_);
        DARABONBA_PTR_TO_JSON(DBStatus, DBStatus_);
        DARABONBA_PTR_TO_JSON(Engine, engine_);
        DARABONBA_PTR_TO_JSON(MasterID, masterID_);
      };
      friend void from_json(const Darabonba::Json& j, Databases& obj) { 
        DARABONBA_PTR_FROM_JSON(Accounts, accounts_);
        DARABONBA_PTR_FROM_JSON(CharacterSetName, characterSetName_);
        DARABONBA_PTR_FROM_JSON(DBDescription, DBDescription_);
        DARABONBA_PTR_FROM_JSON(DBName, DBName_);
        DARABONBA_PTR_FROM_JSON(DBStatus, DBStatus_);
        DARABONBA_PTR_FROM_JSON(Engine, engine_);
        DARABONBA_PTR_FROM_JSON(MasterID, masterID_);
      };
      Databases() = default ;
      Databases(const Databases &) = default ;
      Databases(Databases &&) = default ;
      Databases(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Databases() = default ;
      Databases& operator=(const Databases &) = default ;
      Databases& operator=(Databases &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Accounts : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Accounts& obj) { 
          DARABONBA_PTR_TO_JSON(AccountName, accountName_);
          DARABONBA_PTR_TO_JSON(AccountPrivilege, accountPrivilege_);
          DARABONBA_PTR_TO_JSON(AccountStatus, accountStatus_);
          DARABONBA_PTR_TO_JSON(PrivilegeStatus, privilegeStatus_);
        };
        friend void from_json(const Darabonba::Json& j, Accounts& obj) { 
          DARABONBA_PTR_FROM_JSON(AccountName, accountName_);
          DARABONBA_PTR_FROM_JSON(AccountPrivilege, accountPrivilege_);
          DARABONBA_PTR_FROM_JSON(AccountStatus, accountStatus_);
          DARABONBA_PTR_FROM_JSON(PrivilegeStatus, privilegeStatus_);
        };
        Accounts() = default ;
        Accounts(const Accounts &) = default ;
        Accounts(Accounts &&) = default ;
        Accounts(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Accounts() = default ;
        Accounts& operator=(const Accounts &) = default ;
        Accounts& operator=(Accounts &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->accountName_ == nullptr
        && this->accountPrivilege_ == nullptr && this->accountStatus_ == nullptr && this->privilegeStatus_ == nullptr; };
        // accountName Field Functions 
        bool hasAccountName() const { return this->accountName_ != nullptr;};
        void deleteAccountName() { this->accountName_ = nullptr;};
        inline string getAccountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
        inline Accounts& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


        // accountPrivilege Field Functions 
        bool hasAccountPrivilege() const { return this->accountPrivilege_ != nullptr;};
        void deleteAccountPrivilege() { this->accountPrivilege_ = nullptr;};
        inline string getAccountPrivilege() const { DARABONBA_PTR_GET_DEFAULT(accountPrivilege_, "") };
        inline Accounts& setAccountPrivilege(string accountPrivilege) { DARABONBA_PTR_SET_VALUE(accountPrivilege_, accountPrivilege) };


        // accountStatus Field Functions 
        bool hasAccountStatus() const { return this->accountStatus_ != nullptr;};
        void deleteAccountStatus() { this->accountStatus_ = nullptr;};
        inline string getAccountStatus() const { DARABONBA_PTR_GET_DEFAULT(accountStatus_, "") };
        inline Accounts& setAccountStatus(string accountStatus) { DARABONBA_PTR_SET_VALUE(accountStatus_, accountStatus) };


        // privilegeStatus Field Functions 
        bool hasPrivilegeStatus() const { return this->privilegeStatus_ != nullptr;};
        void deletePrivilegeStatus() { this->privilegeStatus_ = nullptr;};
        inline string getPrivilegeStatus() const { DARABONBA_PTR_GET_DEFAULT(privilegeStatus_, "") };
        inline Accounts& setPrivilegeStatus(string privilegeStatus) { DARABONBA_PTR_SET_VALUE(privilegeStatus_, privilegeStatus) };


      protected:
        shared_ptr<string> accountName_ {};
        shared_ptr<string> accountPrivilege_ {};
        shared_ptr<string> accountStatus_ {};
        shared_ptr<string> privilegeStatus_ {};
      };

      virtual bool empty() const override { return this->accounts_ == nullptr
        && this->characterSetName_ == nullptr && this->DBDescription_ == nullptr && this->DBName_ == nullptr && this->DBStatus_ == nullptr && this->engine_ == nullptr
        && this->masterID_ == nullptr; };
      // accounts Field Functions 
      bool hasAccounts() const { return this->accounts_ != nullptr;};
      void deleteAccounts() { this->accounts_ = nullptr;};
      inline const vector<Databases::Accounts> & getAccounts() const { DARABONBA_PTR_GET_CONST(accounts_, vector<Databases::Accounts>) };
      inline vector<Databases::Accounts> getAccounts() { DARABONBA_PTR_GET(accounts_, vector<Databases::Accounts>) };
      inline Databases& setAccounts(const vector<Databases::Accounts> & accounts) { DARABONBA_PTR_SET_VALUE(accounts_, accounts) };
      inline Databases& setAccounts(vector<Databases::Accounts> && accounts) { DARABONBA_PTR_SET_RVALUE(accounts_, accounts) };


      // characterSetName Field Functions 
      bool hasCharacterSetName() const { return this->characterSetName_ != nullptr;};
      void deleteCharacterSetName() { this->characterSetName_ = nullptr;};
      inline string getCharacterSetName() const { DARABONBA_PTR_GET_DEFAULT(characterSetName_, "") };
      inline Databases& setCharacterSetName(string characterSetName) { DARABONBA_PTR_SET_VALUE(characterSetName_, characterSetName) };


      // DBDescription Field Functions 
      bool hasDBDescription() const { return this->DBDescription_ != nullptr;};
      void deleteDBDescription() { this->DBDescription_ = nullptr;};
      inline string getDBDescription() const { DARABONBA_PTR_GET_DEFAULT(DBDescription_, "") };
      inline Databases& setDBDescription(string DBDescription) { DARABONBA_PTR_SET_VALUE(DBDescription_, DBDescription) };


      // DBName Field Functions 
      bool hasDBName() const { return this->DBName_ != nullptr;};
      void deleteDBName() { this->DBName_ = nullptr;};
      inline string getDBName() const { DARABONBA_PTR_GET_DEFAULT(DBName_, "") };
      inline Databases& setDBName(string DBName) { DARABONBA_PTR_SET_VALUE(DBName_, DBName) };


      // DBStatus Field Functions 
      bool hasDBStatus() const { return this->DBStatus_ != nullptr;};
      void deleteDBStatus() { this->DBStatus_ = nullptr;};
      inline string getDBStatus() const { DARABONBA_PTR_GET_DEFAULT(DBStatus_, "") };
      inline Databases& setDBStatus(string DBStatus) { DARABONBA_PTR_SET_VALUE(DBStatus_, DBStatus) };


      // engine Field Functions 
      bool hasEngine() const { return this->engine_ != nullptr;};
      void deleteEngine() { this->engine_ = nullptr;};
      inline string getEngine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
      inline Databases& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


      // masterID Field Functions 
      bool hasMasterID() const { return this->masterID_ != nullptr;};
      void deleteMasterID() { this->masterID_ = nullptr;};
      inline string getMasterID() const { DARABONBA_PTR_GET_DEFAULT(masterID_, "") };
      inline Databases& setMasterID(string masterID) { DARABONBA_PTR_SET_VALUE(masterID_, masterID) };


    protected:
      shared_ptr<vector<Databases::Accounts>> accounts_ {};
      shared_ptr<string> characterSetName_ {};
      shared_ptr<string> DBDescription_ {};
      shared_ptr<string> DBName_ {};
      shared_ptr<string> DBStatus_ {};
      shared_ptr<string> engine_ {};
      shared_ptr<string> masterID_ {};
    };

    virtual bool empty() const override { return this->databases_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->pageNumber_ == nullptr && this->pageRecordCount_ == nullptr && this->requestId_ == nullptr; };
    // databases Field Functions 
    bool hasDatabases() const { return this->databases_ != nullptr;};
    void deleteDatabases() { this->databases_ = nullptr;};
    inline const vector<DescribeDatabasesZonalResponseBody::Databases> & getDatabases() const { DARABONBA_PTR_GET_CONST(databases_, vector<DescribeDatabasesZonalResponseBody::Databases>) };
    inline vector<DescribeDatabasesZonalResponseBody::Databases> getDatabases() { DARABONBA_PTR_GET(databases_, vector<DescribeDatabasesZonalResponseBody::Databases>) };
    inline DescribeDatabasesZonalResponseBody& setDatabases(const vector<DescribeDatabasesZonalResponseBody::Databases> & databases) { DARABONBA_PTR_SET_VALUE(databases_, databases) };
    inline DescribeDatabasesZonalResponseBody& setDatabases(vector<DescribeDatabasesZonalResponseBody::Databases> && databases) { DARABONBA_PTR_SET_RVALUE(databases_, databases) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeDatabasesZonalResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeDatabasesZonalResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeDatabasesZonalResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageRecordCount Field Functions 
    bool hasPageRecordCount() const { return this->pageRecordCount_ != nullptr;};
    void deletePageRecordCount() { this->pageRecordCount_ = nullptr;};
    inline int32_t getPageRecordCount() const { DARABONBA_PTR_GET_DEFAULT(pageRecordCount_, 0) };
    inline DescribeDatabasesZonalResponseBody& setPageRecordCount(int32_t pageRecordCount) { DARABONBA_PTR_SET_VALUE(pageRecordCount_, pageRecordCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDatabasesZonalResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<DescribeDatabasesZonalResponseBody::Databases>> databases_ {};
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageRecordCount_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
