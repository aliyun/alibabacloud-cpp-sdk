// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMETADBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTMETADBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class ListMetaDBResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMetaDBResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DatabaseInfo, databaseInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListMetaDBResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DatabaseInfo, databaseInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListMetaDBResponseBody() = default ;
    ListMetaDBResponseBody(const ListMetaDBResponseBody &) = default ;
    ListMetaDBResponseBody(ListMetaDBResponseBody &&) = default ;
    ListMetaDBResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMetaDBResponseBody() = default ;
    ListMetaDBResponseBody& operator=(const ListMetaDBResponseBody &) = default ;
    ListMetaDBResponseBody& operator=(ListMetaDBResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DatabaseInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DatabaseInfo& obj) { 
        DARABONBA_PTR_TO_JSON(DbList, dbList_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, DatabaseInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(DbList, dbList_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      DatabaseInfo() = default ;
      DatabaseInfo(const DatabaseInfo &) = default ;
      DatabaseInfo(DatabaseInfo &&) = default ;
      DatabaseInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DatabaseInfo() = default ;
      DatabaseInfo& operator=(const DatabaseInfo &) = default ;
      DatabaseInfo& operator=(DatabaseInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DbList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DbList& obj) { 
          DARABONBA_PTR_TO_JSON(CreateTimeStamp, createTimeStamp_);
          DARABONBA_PTR_TO_JSON(Location, location_);
          DARABONBA_PTR_TO_JSON(ModifiedTimeStamp, modifiedTimeStamp_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
          DARABONBA_PTR_TO_JSON(Type, type_);
          DARABONBA_PTR_TO_JSON(UUID, UUID_);
        };
        friend void from_json(const Darabonba::Json& j, DbList& obj) { 
          DARABONBA_PTR_FROM_JSON(CreateTimeStamp, createTimeStamp_);
          DARABONBA_PTR_FROM_JSON(Location, location_);
          DARABONBA_PTR_FROM_JSON(ModifiedTimeStamp, modifiedTimeStamp_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
          DARABONBA_PTR_FROM_JSON(UUID, UUID_);
        };
        DbList() = default ;
        DbList(const DbList &) = default ;
        DbList(DbList &&) = default ;
        DbList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DbList() = default ;
        DbList& operator=(const DbList &) = default ;
        DbList& operator=(DbList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->createTimeStamp_ == nullptr
        && this->location_ == nullptr && this->modifiedTimeStamp_ == nullptr && this->name_ == nullptr && this->ownerId_ == nullptr && this->type_ == nullptr
        && this->UUID_ == nullptr; };
        // createTimeStamp Field Functions 
        bool hasCreateTimeStamp() const { return this->createTimeStamp_ != nullptr;};
        void deleteCreateTimeStamp() { this->createTimeStamp_ = nullptr;};
        inline int64_t getCreateTimeStamp() const { DARABONBA_PTR_GET_DEFAULT(createTimeStamp_, 0L) };
        inline DbList& setCreateTimeStamp(int64_t createTimeStamp) { DARABONBA_PTR_SET_VALUE(createTimeStamp_, createTimeStamp) };


        // location Field Functions 
        bool hasLocation() const { return this->location_ != nullptr;};
        void deleteLocation() { this->location_ = nullptr;};
        inline string getLocation() const { DARABONBA_PTR_GET_DEFAULT(location_, "") };
        inline DbList& setLocation(string location) { DARABONBA_PTR_SET_VALUE(location_, location) };


        // modifiedTimeStamp Field Functions 
        bool hasModifiedTimeStamp() const { return this->modifiedTimeStamp_ != nullptr;};
        void deleteModifiedTimeStamp() { this->modifiedTimeStamp_ = nullptr;};
        inline int64_t getModifiedTimeStamp() const { DARABONBA_PTR_GET_DEFAULT(modifiedTimeStamp_, 0L) };
        inline DbList& setModifiedTimeStamp(int64_t modifiedTimeStamp) { DARABONBA_PTR_SET_VALUE(modifiedTimeStamp_, modifiedTimeStamp) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline DbList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // ownerId Field Functions 
        bool hasOwnerId() const { return this->ownerId_ != nullptr;};
        void deleteOwnerId() { this->ownerId_ = nullptr;};
        inline string getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
        inline DbList& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline DbList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // UUID Field Functions 
        bool hasUUID() const { return this->UUID_ != nullptr;};
        void deleteUUID() { this->UUID_ = nullptr;};
        inline string getUUID() const { DARABONBA_PTR_GET_DEFAULT(UUID_, "") };
        inline DbList& setUUID(string UUID) { DARABONBA_PTR_SET_VALUE(UUID_, UUID) };


      protected:
        // The timestamp at which the metadatabase was created. You can convert the timestamp to the date based on the time zone that you use.
        shared_ptr<int64_t> createTimeStamp_ {};
        // The URL of the metadatabase.
        shared_ptr<string> location_ {};
        // The timestamp at which the metadatabase was updated.
        shared_ptr<int64_t> modifiedTimeStamp_ {};
        // The name of the metadatabase.
        shared_ptr<string> name_ {};
        // The owner ID.
        shared_ptr<string> ownerId_ {};
        // The type of the metadatabase.
        shared_ptr<string> type_ {};
        // The UUID of the metadatabase.
        shared_ptr<string> UUID_ {};
      };

      virtual bool empty() const override { return this->dbList_ == nullptr
        && this->totalCount_ == nullptr; };
      // dbList Field Functions 
      bool hasDbList() const { return this->dbList_ != nullptr;};
      void deleteDbList() { this->dbList_ = nullptr;};
      inline const vector<DatabaseInfo::DbList> & getDbList() const { DARABONBA_PTR_GET_CONST(dbList_, vector<DatabaseInfo::DbList>) };
      inline vector<DatabaseInfo::DbList> getDbList() { DARABONBA_PTR_GET(dbList_, vector<DatabaseInfo::DbList>) };
      inline DatabaseInfo& setDbList(const vector<DatabaseInfo::DbList> & dbList) { DARABONBA_PTR_SET_VALUE(dbList_, dbList) };
      inline DatabaseInfo& setDbList(vector<DatabaseInfo::DbList> && dbList) { DARABONBA_PTR_SET_RVALUE(dbList_, dbList) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
      inline DatabaseInfo& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The metadatabases.
      shared_ptr<vector<DatabaseInfo::DbList>> dbList_ {};
      // The total number of the metadatabases returned.
      shared_ptr<int64_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->databaseInfo_ == nullptr
        && this->requestId_ == nullptr; };
    // databaseInfo Field Functions 
    bool hasDatabaseInfo() const { return this->databaseInfo_ != nullptr;};
    void deleteDatabaseInfo() { this->databaseInfo_ = nullptr;};
    inline const ListMetaDBResponseBody::DatabaseInfo & getDatabaseInfo() const { DARABONBA_PTR_GET_CONST(databaseInfo_, ListMetaDBResponseBody::DatabaseInfo) };
    inline ListMetaDBResponseBody::DatabaseInfo getDatabaseInfo() { DARABONBA_PTR_GET(databaseInfo_, ListMetaDBResponseBody::DatabaseInfo) };
    inline ListMetaDBResponseBody& setDatabaseInfo(const ListMetaDBResponseBody::DatabaseInfo & databaseInfo) { DARABONBA_PTR_SET_VALUE(databaseInfo_, databaseInfo) };
    inline ListMetaDBResponseBody& setDatabaseInfo(ListMetaDBResponseBody::DatabaseInfo && databaseInfo) { DARABONBA_PTR_SET_RVALUE(databaseInfo_, databaseInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListMetaDBResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the metadatabases.
    shared_ptr<ListMetaDBResponseBody::DatabaseInfo> databaseInfo_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
