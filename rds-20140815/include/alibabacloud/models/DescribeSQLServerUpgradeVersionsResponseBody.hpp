// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESQLSERVERUPGRADEVERSIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESQLSERVERUPGRADEVERSIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeSQLServerUpgradeVersionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSQLServerUpgradeVersionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSQLServerUpgradeVersionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeSQLServerUpgradeVersionsResponseBody() = default ;
    DescribeSQLServerUpgradeVersionsResponseBody(const DescribeSQLServerUpgradeVersionsResponseBody &) = default ;
    DescribeSQLServerUpgradeVersionsResponseBody(DescribeSQLServerUpgradeVersionsResponseBody &&) = default ;
    DescribeSQLServerUpgradeVersionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSQLServerUpgradeVersionsResponseBody() = default ;
    DescribeSQLServerUpgradeVersionsResponseBody& operator=(const DescribeSQLServerUpgradeVersionsResponseBody &) = default ;
    DescribeSQLServerUpgradeVersionsResponseBody& operator=(DescribeSQLServerUpgradeVersionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(Item, item_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(Item, item_);
      };
      Items() = default ;
      Items(const Items &) = default ;
      Items(Items &&) = default ;
      Items(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Items() = default ;
      Items& operator=(const Items &) = default ;
      Items& operator=(Items &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Item : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Item& obj) { 
          DARABONBA_PTR_TO_JSON(CurrentVersion, currentVersion_);
          DARABONBA_PTR_TO_JSON(SQLServerUpgradeVersions, SQLServerUpgradeVersions_);
        };
        friend void from_json(const Darabonba::Json& j, Item& obj) { 
          DARABONBA_PTR_FROM_JSON(CurrentVersion, currentVersion_);
          DARABONBA_PTR_FROM_JSON(SQLServerUpgradeVersions, SQLServerUpgradeVersions_);
        };
        Item() = default ;
        Item(const Item &) = default ;
        Item(Item &&) = default ;
        Item(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Item() = default ;
        Item& operator=(const Item &) = default ;
        Item& operator=(Item &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class SQLServerUpgradeVersions : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const SQLServerUpgradeVersions& obj) { 
            DARABONBA_PTR_TO_JSON(SQLServerUpgradeVersion, SQLServerUpgradeVersion_);
          };
          friend void from_json(const Darabonba::Json& j, SQLServerUpgradeVersions& obj) { 
            DARABONBA_PTR_FROM_JSON(SQLServerUpgradeVersion, SQLServerUpgradeVersion_);
          };
          SQLServerUpgradeVersions() = default ;
          SQLServerUpgradeVersions(const SQLServerUpgradeVersions &) = default ;
          SQLServerUpgradeVersions(SQLServerUpgradeVersions &&) = default ;
          SQLServerUpgradeVersions(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~SQLServerUpgradeVersions() = default ;
          SQLServerUpgradeVersions& operator=(const SQLServerUpgradeVersions &) = default ;
          SQLServerUpgradeVersions& operator=(SQLServerUpgradeVersions &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class SQLServerUpgradeVersion : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const SQLServerUpgradeVersion& obj) { 
              DARABONBA_PTR_TO_JSON(DBInstanceClassItems, DBInstanceClassItems_);
              DARABONBA_PTR_TO_JSON(EnableUpgrade, enableUpgrade_);
              DARABONBA_PTR_TO_JSON(Version, version_);
            };
            friend void from_json(const Darabonba::Json& j, SQLServerUpgradeVersion& obj) { 
              DARABONBA_PTR_FROM_JSON(DBInstanceClassItems, DBInstanceClassItems_);
              DARABONBA_PTR_FROM_JSON(EnableUpgrade, enableUpgrade_);
              DARABONBA_PTR_FROM_JSON(Version, version_);
            };
            SQLServerUpgradeVersion() = default ;
            SQLServerUpgradeVersion(const SQLServerUpgradeVersion &) = default ;
            SQLServerUpgradeVersion(SQLServerUpgradeVersion &&) = default ;
            SQLServerUpgradeVersion(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~SQLServerUpgradeVersion() = default ;
            SQLServerUpgradeVersion& operator=(const SQLServerUpgradeVersion &) = default ;
            SQLServerUpgradeVersion& operator=(SQLServerUpgradeVersion &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class DBInstanceClassItems : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const DBInstanceClassItems& obj) { 
                DARABONBA_PTR_TO_JSON(DBInstanceClassItem, DBInstanceClassItem_);
              };
              friend void from_json(const Darabonba::Json& j, DBInstanceClassItems& obj) { 
                DARABONBA_PTR_FROM_JSON(DBInstanceClassItem, DBInstanceClassItem_);
              };
              DBInstanceClassItems() = default ;
              DBInstanceClassItems(const DBInstanceClassItems &) = default ;
              DBInstanceClassItems(DBInstanceClassItems &&) = default ;
              DBInstanceClassItems(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~DBInstanceClassItems() = default ;
              DBInstanceClassItems& operator=(const DBInstanceClassItems &) = default ;
              DBInstanceClassItems& operator=(DBInstanceClassItems &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              class DBInstanceClassItem : public Darabonba::Model {
              public:
                friend void to_json(Darabonba::Json& j, const DBInstanceClassItem& obj) { 
                  DARABONBA_PTR_TO_JSON(CPU, CPU_);
                  DARABONBA_PTR_TO_JSON(DBInstanceClass, DBInstanceClass_);
                  DARABONBA_PTR_TO_JSON(DBInstanceClassType, DBInstanceClassType_);
                  DARABONBA_PTR_TO_JSON(Group, group_);
                  DARABONBA_PTR_TO_JSON(Memory, memory_);
                };
                friend void from_json(const Darabonba::Json& j, DBInstanceClassItem& obj) { 
                  DARABONBA_PTR_FROM_JSON(CPU, CPU_);
                  DARABONBA_PTR_FROM_JSON(DBInstanceClass, DBInstanceClass_);
                  DARABONBA_PTR_FROM_JSON(DBInstanceClassType, DBInstanceClassType_);
                  DARABONBA_PTR_FROM_JSON(Group, group_);
                  DARABONBA_PTR_FROM_JSON(Memory, memory_);
                };
                DBInstanceClassItem() = default ;
                DBInstanceClassItem(const DBInstanceClassItem &) = default ;
                DBInstanceClassItem(DBInstanceClassItem &&) = default ;
                DBInstanceClassItem(const Darabonba::Json & obj) { from_json(obj, *this); };
                virtual ~DBInstanceClassItem() = default ;
                DBInstanceClassItem& operator=(const DBInstanceClassItem &) = default ;
                DBInstanceClassItem& operator=(DBInstanceClassItem &&) = default ;
                virtual void validate() const override {
                };
                virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                virtual bool empty() const override { return this->CPU_ == nullptr
        && this->DBInstanceClass_ == nullptr && this->DBInstanceClassType_ == nullptr && this->group_ == nullptr && this->memory_ == nullptr; };
                // CPU Field Functions 
                bool hasCPU() const { return this->CPU_ != nullptr;};
                void deleteCPU() { this->CPU_ = nullptr;};
                inline string getCPU() const { DARABONBA_PTR_GET_DEFAULT(CPU_, "") };
                inline DBInstanceClassItem& setCPU(string CPU) { DARABONBA_PTR_SET_VALUE(CPU_, CPU) };


                // DBInstanceClass Field Functions 
                bool hasDBInstanceClass() const { return this->DBInstanceClass_ != nullptr;};
                void deleteDBInstanceClass() { this->DBInstanceClass_ = nullptr;};
                inline string getDBInstanceClass() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceClass_, "") };
                inline DBInstanceClassItem& setDBInstanceClass(string DBInstanceClass) { DARABONBA_PTR_SET_VALUE(DBInstanceClass_, DBInstanceClass) };


                // DBInstanceClassType Field Functions 
                bool hasDBInstanceClassType() const { return this->DBInstanceClassType_ != nullptr;};
                void deleteDBInstanceClassType() { this->DBInstanceClassType_ = nullptr;};
                inline string getDBInstanceClassType() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceClassType_, "") };
                inline DBInstanceClassItem& setDBInstanceClassType(string DBInstanceClassType) { DARABONBA_PTR_SET_VALUE(DBInstanceClassType_, DBInstanceClassType) };


                // group Field Functions 
                bool hasGroup() const { return this->group_ != nullptr;};
                void deleteGroup() { this->group_ = nullptr;};
                inline string getGroup() const { DARABONBA_PTR_GET_DEFAULT(group_, "") };
                inline DBInstanceClassItem& setGroup(string group) { DARABONBA_PTR_SET_VALUE(group_, group) };


                // memory Field Functions 
                bool hasMemory() const { return this->memory_ != nullptr;};
                void deleteMemory() { this->memory_ = nullptr;};
                inline string getMemory() const { DARABONBA_PTR_GET_DEFAULT(memory_, "") };
                inline DBInstanceClassItem& setMemory(string memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


              protected:
                shared_ptr<string> CPU_ {};
                shared_ptr<string> DBInstanceClass_ {};
                shared_ptr<string> DBInstanceClassType_ {};
                shared_ptr<string> group_ {};
                shared_ptr<string> memory_ {};
              };

              virtual bool empty() const override { return this->DBInstanceClassItem_ == nullptr; };
              // DBInstanceClassItem Field Functions 
              bool hasDBInstanceClassItem() const { return this->DBInstanceClassItem_ != nullptr;};
              void deleteDBInstanceClassItem() { this->DBInstanceClassItem_ = nullptr;};
              inline const vector<DBInstanceClassItems::DBInstanceClassItem> & getDBInstanceClassItem() const { DARABONBA_PTR_GET_CONST(DBInstanceClassItem_, vector<DBInstanceClassItems::DBInstanceClassItem>) };
              inline vector<DBInstanceClassItems::DBInstanceClassItem> getDBInstanceClassItem() { DARABONBA_PTR_GET(DBInstanceClassItem_, vector<DBInstanceClassItems::DBInstanceClassItem>) };
              inline DBInstanceClassItems& setDBInstanceClassItem(const vector<DBInstanceClassItems::DBInstanceClassItem> & dBInstanceClassItem) { DARABONBA_PTR_SET_VALUE(DBInstanceClassItem_, dBInstanceClassItem) };
              inline DBInstanceClassItems& setDBInstanceClassItem(vector<DBInstanceClassItems::DBInstanceClassItem> && dBInstanceClassItem) { DARABONBA_PTR_SET_RVALUE(DBInstanceClassItem_, dBInstanceClassItem) };


            protected:
              shared_ptr<vector<DBInstanceClassItems::DBInstanceClassItem>> DBInstanceClassItem_ {};
            };

            virtual bool empty() const override { return this->DBInstanceClassItems_ == nullptr
        && this->enableUpgrade_ == nullptr && this->version_ == nullptr; };
            // DBInstanceClassItems Field Functions 
            bool hasDBInstanceClassItems() const { return this->DBInstanceClassItems_ != nullptr;};
            void deleteDBInstanceClassItems() { this->DBInstanceClassItems_ = nullptr;};
            inline const SQLServerUpgradeVersion::DBInstanceClassItems & getDBInstanceClassItems() const { DARABONBA_PTR_GET_CONST(DBInstanceClassItems_, SQLServerUpgradeVersion::DBInstanceClassItems) };
            inline SQLServerUpgradeVersion::DBInstanceClassItems getDBInstanceClassItems() { DARABONBA_PTR_GET(DBInstanceClassItems_, SQLServerUpgradeVersion::DBInstanceClassItems) };
            inline SQLServerUpgradeVersion& setDBInstanceClassItems(const SQLServerUpgradeVersion::DBInstanceClassItems & dBInstanceClassItems) { DARABONBA_PTR_SET_VALUE(DBInstanceClassItems_, dBInstanceClassItems) };
            inline SQLServerUpgradeVersion& setDBInstanceClassItems(SQLServerUpgradeVersion::DBInstanceClassItems && dBInstanceClassItems) { DARABONBA_PTR_SET_RVALUE(DBInstanceClassItems_, dBInstanceClassItems) };


            // enableUpgrade Field Functions 
            bool hasEnableUpgrade() const { return this->enableUpgrade_ != nullptr;};
            void deleteEnableUpgrade() { this->enableUpgrade_ = nullptr;};
            inline string getEnableUpgrade() const { DARABONBA_PTR_GET_DEFAULT(enableUpgrade_, "") };
            inline SQLServerUpgradeVersion& setEnableUpgrade(string enableUpgrade) { DARABONBA_PTR_SET_VALUE(enableUpgrade_, enableUpgrade) };


            // version Field Functions 
            bool hasVersion() const { return this->version_ != nullptr;};
            void deleteVersion() { this->version_ = nullptr;};
            inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
            inline SQLServerUpgradeVersion& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


          protected:
            shared_ptr<SQLServerUpgradeVersion::DBInstanceClassItems> DBInstanceClassItems_ {};
            shared_ptr<string> enableUpgrade_ {};
            shared_ptr<string> version_ {};
          };

          virtual bool empty() const override { return this->SQLServerUpgradeVersion_ == nullptr; };
          // SQLServerUpgradeVersion Field Functions 
          bool hasSQLServerUpgradeVersion() const { return this->SQLServerUpgradeVersion_ != nullptr;};
          void deleteSQLServerUpgradeVersion() { this->SQLServerUpgradeVersion_ = nullptr;};
          inline const vector<SQLServerUpgradeVersions::SQLServerUpgradeVersion> & getSQLServerUpgradeVersion() const { DARABONBA_PTR_GET_CONST(SQLServerUpgradeVersion_, vector<SQLServerUpgradeVersions::SQLServerUpgradeVersion>) };
          inline vector<SQLServerUpgradeVersions::SQLServerUpgradeVersion> getSQLServerUpgradeVersion() { DARABONBA_PTR_GET(SQLServerUpgradeVersion_, vector<SQLServerUpgradeVersions::SQLServerUpgradeVersion>) };
          inline SQLServerUpgradeVersions& setSQLServerUpgradeVersion(const vector<SQLServerUpgradeVersions::SQLServerUpgradeVersion> & sQLServerUpgradeVersion) { DARABONBA_PTR_SET_VALUE(SQLServerUpgradeVersion_, sQLServerUpgradeVersion) };
          inline SQLServerUpgradeVersions& setSQLServerUpgradeVersion(vector<SQLServerUpgradeVersions::SQLServerUpgradeVersion> && sQLServerUpgradeVersion) { DARABONBA_PTR_SET_RVALUE(SQLServerUpgradeVersion_, sQLServerUpgradeVersion) };


        protected:
          shared_ptr<vector<SQLServerUpgradeVersions::SQLServerUpgradeVersion>> SQLServerUpgradeVersion_ {};
        };

        virtual bool empty() const override { return this->currentVersion_ == nullptr
        && this->SQLServerUpgradeVersions_ == nullptr; };
        // currentVersion Field Functions 
        bool hasCurrentVersion() const { return this->currentVersion_ != nullptr;};
        void deleteCurrentVersion() { this->currentVersion_ = nullptr;};
        inline string getCurrentVersion() const { DARABONBA_PTR_GET_DEFAULT(currentVersion_, "") };
        inline Item& setCurrentVersion(string currentVersion) { DARABONBA_PTR_SET_VALUE(currentVersion_, currentVersion) };


        // SQLServerUpgradeVersions Field Functions 
        bool hasSQLServerUpgradeVersions() const { return this->SQLServerUpgradeVersions_ != nullptr;};
        void deleteSQLServerUpgradeVersions() { this->SQLServerUpgradeVersions_ = nullptr;};
        inline const Item::SQLServerUpgradeVersions & getSQLServerUpgradeVersions() const { DARABONBA_PTR_GET_CONST(SQLServerUpgradeVersions_, Item::SQLServerUpgradeVersions) };
        inline Item::SQLServerUpgradeVersions getSQLServerUpgradeVersions() { DARABONBA_PTR_GET(SQLServerUpgradeVersions_, Item::SQLServerUpgradeVersions) };
        inline Item& setSQLServerUpgradeVersions(const Item::SQLServerUpgradeVersions & sQLServerUpgradeVersions) { DARABONBA_PTR_SET_VALUE(SQLServerUpgradeVersions_, sQLServerUpgradeVersions) };
        inline Item& setSQLServerUpgradeVersions(Item::SQLServerUpgradeVersions && sQLServerUpgradeVersions) { DARABONBA_PTR_SET_RVALUE(SQLServerUpgradeVersions_, sQLServerUpgradeVersions) };


      protected:
        shared_ptr<string> currentVersion_ {};
        shared_ptr<Item::SQLServerUpgradeVersions> SQLServerUpgradeVersions_ {};
      };

      virtual bool empty() const override { return this->item_ == nullptr; };
      // item Field Functions 
      bool hasItem() const { return this->item_ != nullptr;};
      void deleteItem() { this->item_ = nullptr;};
      inline const vector<Items::Item> & getItem() const { DARABONBA_PTR_GET_CONST(item_, vector<Items::Item>) };
      inline vector<Items::Item> getItem() { DARABONBA_PTR_GET(item_, vector<Items::Item>) };
      inline Items& setItem(const vector<Items::Item> & item) { DARABONBA_PTR_SET_VALUE(item_, item) };
      inline Items& setItem(vector<Items::Item> && item) { DARABONBA_PTR_SET_RVALUE(item_, item) };


    protected:
      shared_ptr<vector<Items::Item>> item_ {};
    };

    virtual bool empty() const override { return this->items_ == nullptr
        && this->requestId_ == nullptr; };
    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const DescribeSQLServerUpgradeVersionsResponseBody::Items & getItems() const { DARABONBA_PTR_GET_CONST(items_, DescribeSQLServerUpgradeVersionsResponseBody::Items) };
    inline DescribeSQLServerUpgradeVersionsResponseBody::Items getItems() { DARABONBA_PTR_GET(items_, DescribeSQLServerUpgradeVersionsResponseBody::Items) };
    inline DescribeSQLServerUpgradeVersionsResponseBody& setItems(const DescribeSQLServerUpgradeVersionsResponseBody::Items & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeSQLServerUpgradeVersionsResponseBody& setItems(DescribeSQLServerUpgradeVersionsResponseBody::Items && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSQLServerUpgradeVersionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<DescribeSQLServerUpgradeVersionsResponseBody::Items> items_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
