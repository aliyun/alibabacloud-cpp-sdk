// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPGHBACONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPGHBACONFIGRESPONSEBODY_HPP_
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
  class DescribePGHbaConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePGHbaConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(DefaultHbaItems, defaultHbaItems_);
      DARABONBA_PTR_TO_JSON(HbaModifyTime, hbaModifyTime_);
      DARABONBA_PTR_TO_JSON(LastModifyStatus, lastModifyStatus_);
      DARABONBA_PTR_TO_JSON(ModifyStatusReason, modifyStatusReason_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RunningHbaItems, runningHbaItems_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePGHbaConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(DefaultHbaItems, defaultHbaItems_);
      DARABONBA_PTR_FROM_JSON(HbaModifyTime, hbaModifyTime_);
      DARABONBA_PTR_FROM_JSON(LastModifyStatus, lastModifyStatus_);
      DARABONBA_PTR_FROM_JSON(ModifyStatusReason, modifyStatusReason_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RunningHbaItems, runningHbaItems_);
    };
    DescribePGHbaConfigResponseBody() = default ;
    DescribePGHbaConfigResponseBody(const DescribePGHbaConfigResponseBody &) = default ;
    DescribePGHbaConfigResponseBody(DescribePGHbaConfigResponseBody &&) = default ;
    DescribePGHbaConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePGHbaConfigResponseBody() = default ;
    DescribePGHbaConfigResponseBody& operator=(const DescribePGHbaConfigResponseBody &) = default ;
    DescribePGHbaConfigResponseBody& operator=(DescribePGHbaConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RunningHbaItems : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RunningHbaItems& obj) { 
        DARABONBA_PTR_TO_JSON(HbaItem, hbaItem_);
      };
      friend void from_json(const Darabonba::Json& j, RunningHbaItems& obj) { 
        DARABONBA_PTR_FROM_JSON(HbaItem, hbaItem_);
      };
      RunningHbaItems() = default ;
      RunningHbaItems(const RunningHbaItems &) = default ;
      RunningHbaItems(RunningHbaItems &&) = default ;
      RunningHbaItems(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RunningHbaItems() = default ;
      RunningHbaItems& operator=(const RunningHbaItems &) = default ;
      RunningHbaItems& operator=(RunningHbaItems &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class HbaItem : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const HbaItem& obj) { 
          DARABONBA_PTR_TO_JSON(Address, address_);
          DARABONBA_PTR_TO_JSON(Database, database_);
          DARABONBA_PTR_TO_JSON(Mask, mask_);
          DARABONBA_PTR_TO_JSON(Method, method_);
          DARABONBA_PTR_TO_JSON(Option, option_);
          DARABONBA_PTR_TO_JSON(PriorityId, priorityId_);
          DARABONBA_PTR_TO_JSON(Type, type_);
          DARABONBA_PTR_TO_JSON(User, user_);
        };
        friend void from_json(const Darabonba::Json& j, HbaItem& obj) { 
          DARABONBA_PTR_FROM_JSON(Address, address_);
          DARABONBA_PTR_FROM_JSON(Database, database_);
          DARABONBA_PTR_FROM_JSON(Mask, mask_);
          DARABONBA_PTR_FROM_JSON(Method, method_);
          DARABONBA_PTR_FROM_JSON(Option, option_);
          DARABONBA_PTR_FROM_JSON(PriorityId, priorityId_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
          DARABONBA_PTR_FROM_JSON(User, user_);
        };
        HbaItem() = default ;
        HbaItem(const HbaItem &) = default ;
        HbaItem(HbaItem &&) = default ;
        HbaItem(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~HbaItem() = default ;
        HbaItem& operator=(const HbaItem &) = default ;
        HbaItem& operator=(HbaItem &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->address_ == nullptr
        && this->database_ == nullptr && this->mask_ == nullptr && this->method_ == nullptr && this->option_ == nullptr && this->priorityId_ == nullptr
        && this->type_ == nullptr && this->user_ == nullptr; };
        // address Field Functions 
        bool hasAddress() const { return this->address_ != nullptr;};
        void deleteAddress() { this->address_ = nullptr;};
        inline string getAddress() const { DARABONBA_PTR_GET_DEFAULT(address_, "") };
        inline HbaItem& setAddress(string address) { DARABONBA_PTR_SET_VALUE(address_, address) };


        // database Field Functions 
        bool hasDatabase() const { return this->database_ != nullptr;};
        void deleteDatabase() { this->database_ = nullptr;};
        inline string getDatabase() const { DARABONBA_PTR_GET_DEFAULT(database_, "") };
        inline HbaItem& setDatabase(string database) { DARABONBA_PTR_SET_VALUE(database_, database) };


        // mask Field Functions 
        bool hasMask() const { return this->mask_ != nullptr;};
        void deleteMask() { this->mask_ = nullptr;};
        inline string getMask() const { DARABONBA_PTR_GET_DEFAULT(mask_, "") };
        inline HbaItem& setMask(string mask) { DARABONBA_PTR_SET_VALUE(mask_, mask) };


        // method Field Functions 
        bool hasMethod() const { return this->method_ != nullptr;};
        void deleteMethod() { this->method_ = nullptr;};
        inline string getMethod() const { DARABONBA_PTR_GET_DEFAULT(method_, "") };
        inline HbaItem& setMethod(string method) { DARABONBA_PTR_SET_VALUE(method_, method) };


        // option Field Functions 
        bool hasOption() const { return this->option_ != nullptr;};
        void deleteOption() { this->option_ = nullptr;};
        inline string getOption() const { DARABONBA_PTR_GET_DEFAULT(option_, "") };
        inline HbaItem& setOption(string option) { DARABONBA_PTR_SET_VALUE(option_, option) };


        // priorityId Field Functions 
        bool hasPriorityId() const { return this->priorityId_ != nullptr;};
        void deletePriorityId() { this->priorityId_ = nullptr;};
        inline int32_t getPriorityId() const { DARABONBA_PTR_GET_DEFAULT(priorityId_, 0) };
        inline HbaItem& setPriorityId(int32_t priorityId) { DARABONBA_PTR_SET_VALUE(priorityId_, priorityId) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline HbaItem& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // user Field Functions 
        bool hasUser() const { return this->user_ != nullptr;};
        void deleteUser() { this->user_ = nullptr;};
        inline string getUser() const { DARABONBA_PTR_GET_DEFAULT(user_, "") };
        inline HbaItem& setUser(string user) { DARABONBA_PTR_SET_VALUE(user_, user) };


      protected:
        // The IP address of the client.
        shared_ptr<string> address_ {};
        // The name of the database.
        shared_ptr<string> database_ {};
        // The mask of the IP address.
        shared_ptr<string> mask_ {};
        // The authentication method.
        shared_ptr<string> method_ {};
        // The value of this parameter varies based on the value of the Method parameter. The value is fixed as null.
        shared_ptr<string> option_ {};
        // The priority.
        shared_ptr<int32_t> priorityId_ {};
        // The connection type. Valor:
        // 
        // *   **host**: The record matches TCP/IP connections, including SSL connections and non-SSL connections.
        // *   **hostssl**: The record matches only TCP/IP connections that are established over SSL.
        // *   **hostnossl**: The record matches only TCP/IP connections that are not established over SSL connections.
        shared_ptr<string> type_ {};
        // The username of the account.
        shared_ptr<string> user_ {};
      };

      virtual bool empty() const override { return this->hbaItem_ == nullptr; };
      // hbaItem Field Functions 
      bool hasHbaItem() const { return this->hbaItem_ != nullptr;};
      void deleteHbaItem() { this->hbaItem_ = nullptr;};
      inline const vector<RunningHbaItems::HbaItem> & getHbaItem() const { DARABONBA_PTR_GET_CONST(hbaItem_, vector<RunningHbaItems::HbaItem>) };
      inline vector<RunningHbaItems::HbaItem> getHbaItem() { DARABONBA_PTR_GET(hbaItem_, vector<RunningHbaItems::HbaItem>) };
      inline RunningHbaItems& setHbaItem(const vector<RunningHbaItems::HbaItem> & hbaItem) { DARABONBA_PTR_SET_VALUE(hbaItem_, hbaItem) };
      inline RunningHbaItems& setHbaItem(vector<RunningHbaItems::HbaItem> && hbaItem) { DARABONBA_PTR_SET_RVALUE(hbaItem_, hbaItem) };


    protected:
      shared_ptr<vector<RunningHbaItems::HbaItem>> hbaItem_ {};
    };

    class DefaultHbaItems : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DefaultHbaItems& obj) { 
        DARABONBA_PTR_TO_JSON(HbaItem, hbaItem_);
      };
      friend void from_json(const Darabonba::Json& j, DefaultHbaItems& obj) { 
        DARABONBA_PTR_FROM_JSON(HbaItem, hbaItem_);
      };
      DefaultHbaItems() = default ;
      DefaultHbaItems(const DefaultHbaItems &) = default ;
      DefaultHbaItems(DefaultHbaItems &&) = default ;
      DefaultHbaItems(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DefaultHbaItems() = default ;
      DefaultHbaItems& operator=(const DefaultHbaItems &) = default ;
      DefaultHbaItems& operator=(DefaultHbaItems &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class HbaItem : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const HbaItem& obj) { 
          DARABONBA_PTR_TO_JSON(Address, address_);
          DARABONBA_PTR_TO_JSON(Database, database_);
          DARABONBA_PTR_TO_JSON(Mask, mask_);
          DARABONBA_PTR_TO_JSON(Method, method_);
          DARABONBA_PTR_TO_JSON(Option, option_);
          DARABONBA_PTR_TO_JSON(PriorityId, priorityId_);
          DARABONBA_PTR_TO_JSON(Type, type_);
          DARABONBA_PTR_TO_JSON(User, user_);
        };
        friend void from_json(const Darabonba::Json& j, HbaItem& obj) { 
          DARABONBA_PTR_FROM_JSON(Address, address_);
          DARABONBA_PTR_FROM_JSON(Database, database_);
          DARABONBA_PTR_FROM_JSON(Mask, mask_);
          DARABONBA_PTR_FROM_JSON(Method, method_);
          DARABONBA_PTR_FROM_JSON(Option, option_);
          DARABONBA_PTR_FROM_JSON(PriorityId, priorityId_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
          DARABONBA_PTR_FROM_JSON(User, user_);
        };
        HbaItem() = default ;
        HbaItem(const HbaItem &) = default ;
        HbaItem(HbaItem &&) = default ;
        HbaItem(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~HbaItem() = default ;
        HbaItem& operator=(const HbaItem &) = default ;
        HbaItem& operator=(HbaItem &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->address_ == nullptr
        && this->database_ == nullptr && this->mask_ == nullptr && this->method_ == nullptr && this->option_ == nullptr && this->priorityId_ == nullptr
        && this->type_ == nullptr && this->user_ == nullptr; };
        // address Field Functions 
        bool hasAddress() const { return this->address_ != nullptr;};
        void deleteAddress() { this->address_ = nullptr;};
        inline string getAddress() const { DARABONBA_PTR_GET_DEFAULT(address_, "") };
        inline HbaItem& setAddress(string address) { DARABONBA_PTR_SET_VALUE(address_, address) };


        // database Field Functions 
        bool hasDatabase() const { return this->database_ != nullptr;};
        void deleteDatabase() { this->database_ = nullptr;};
        inline string getDatabase() const { DARABONBA_PTR_GET_DEFAULT(database_, "") };
        inline HbaItem& setDatabase(string database) { DARABONBA_PTR_SET_VALUE(database_, database) };


        // mask Field Functions 
        bool hasMask() const { return this->mask_ != nullptr;};
        void deleteMask() { this->mask_ = nullptr;};
        inline string getMask() const { DARABONBA_PTR_GET_DEFAULT(mask_, "") };
        inline HbaItem& setMask(string mask) { DARABONBA_PTR_SET_VALUE(mask_, mask) };


        // method Field Functions 
        bool hasMethod() const { return this->method_ != nullptr;};
        void deleteMethod() { this->method_ = nullptr;};
        inline string getMethod() const { DARABONBA_PTR_GET_DEFAULT(method_, "") };
        inline HbaItem& setMethod(string method) { DARABONBA_PTR_SET_VALUE(method_, method) };


        // option Field Functions 
        bool hasOption() const { return this->option_ != nullptr;};
        void deleteOption() { this->option_ = nullptr;};
        inline string getOption() const { DARABONBA_PTR_GET_DEFAULT(option_, "") };
        inline HbaItem& setOption(string option) { DARABONBA_PTR_SET_VALUE(option_, option) };


        // priorityId Field Functions 
        bool hasPriorityId() const { return this->priorityId_ != nullptr;};
        void deletePriorityId() { this->priorityId_ = nullptr;};
        inline int32_t getPriorityId() const { DARABONBA_PTR_GET_DEFAULT(priorityId_, 0) };
        inline HbaItem& setPriorityId(int32_t priorityId) { DARABONBA_PTR_SET_VALUE(priorityId_, priorityId) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline HbaItem& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // user Field Functions 
        bool hasUser() const { return this->user_ != nullptr;};
        void deleteUser() { this->user_ = nullptr;};
        inline string getUser() const { DARABONBA_PTR_GET_DEFAULT(user_, "") };
        inline HbaItem& setUser(string user) { DARABONBA_PTR_SET_VALUE(user_, user) };


      protected:
        // The IP addresses from which the specified users can access the specified databases. The value is fixed as 0.0.0.0/0.
        shared_ptr<string> address_ {};
        // The names of the databases that the specified users are allowed to access. The value is fixed as all or replication.
        shared_ptr<string> database_ {};
        // The mask of the instance. The value is fixed as null.
        shared_ptr<string> mask_ {};
        // The authentication method. The value is fixed as md5.
        shared_ptr<string> method_ {};
        // The value of this parameter is based on the value of the Method parameter. The value is fixed as null.
        shared_ptr<string> option_ {};
        // The priority of the configuration items in the pg_hba.conf file. This value is automatically generated.
        shared_ptr<int32_t> priorityId_ {};
        // The type of connection to the instance. The value is fixed as host.
        shared_ptr<string> type_ {};
        // The user that is allowed to access the instance. The value is fixed as all.
        shared_ptr<string> user_ {};
      };

      virtual bool empty() const override { return this->hbaItem_ == nullptr; };
      // hbaItem Field Functions 
      bool hasHbaItem() const { return this->hbaItem_ != nullptr;};
      void deleteHbaItem() { this->hbaItem_ = nullptr;};
      inline const vector<DefaultHbaItems::HbaItem> & getHbaItem() const { DARABONBA_PTR_GET_CONST(hbaItem_, vector<DefaultHbaItems::HbaItem>) };
      inline vector<DefaultHbaItems::HbaItem> getHbaItem() { DARABONBA_PTR_GET(hbaItem_, vector<DefaultHbaItems::HbaItem>) };
      inline DefaultHbaItems& setHbaItem(const vector<DefaultHbaItems::HbaItem> & hbaItem) { DARABONBA_PTR_SET_VALUE(hbaItem_, hbaItem) };
      inline DefaultHbaItems& setHbaItem(vector<DefaultHbaItems::HbaItem> && hbaItem) { DARABONBA_PTR_SET_RVALUE(hbaItem_, hbaItem) };


    protected:
      shared_ptr<vector<DefaultHbaItems::HbaItem>> hbaItem_ {};
    };

    virtual bool empty() const override { return this->DBInstanceId_ == nullptr
        && this->defaultHbaItems_ == nullptr && this->hbaModifyTime_ == nullptr && this->lastModifyStatus_ == nullptr && this->modifyStatusReason_ == nullptr && this->requestId_ == nullptr
        && this->runningHbaItems_ == nullptr; };
    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline DescribePGHbaConfigResponseBody& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // defaultHbaItems Field Functions 
    bool hasDefaultHbaItems() const { return this->defaultHbaItems_ != nullptr;};
    void deleteDefaultHbaItems() { this->defaultHbaItems_ = nullptr;};
    inline const DescribePGHbaConfigResponseBody::DefaultHbaItems & getDefaultHbaItems() const { DARABONBA_PTR_GET_CONST(defaultHbaItems_, DescribePGHbaConfigResponseBody::DefaultHbaItems) };
    inline DescribePGHbaConfigResponseBody::DefaultHbaItems getDefaultHbaItems() { DARABONBA_PTR_GET(defaultHbaItems_, DescribePGHbaConfigResponseBody::DefaultHbaItems) };
    inline DescribePGHbaConfigResponseBody& setDefaultHbaItems(const DescribePGHbaConfigResponseBody::DefaultHbaItems & defaultHbaItems) { DARABONBA_PTR_SET_VALUE(defaultHbaItems_, defaultHbaItems) };
    inline DescribePGHbaConfigResponseBody& setDefaultHbaItems(DescribePGHbaConfigResponseBody::DefaultHbaItems && defaultHbaItems) { DARABONBA_PTR_SET_RVALUE(defaultHbaItems_, defaultHbaItems) };


    // hbaModifyTime Field Functions 
    bool hasHbaModifyTime() const { return this->hbaModifyTime_ != nullptr;};
    void deleteHbaModifyTime() { this->hbaModifyTime_ = nullptr;};
    inline string getHbaModifyTime() const { DARABONBA_PTR_GET_DEFAULT(hbaModifyTime_, "") };
    inline DescribePGHbaConfigResponseBody& setHbaModifyTime(string hbaModifyTime) { DARABONBA_PTR_SET_VALUE(hbaModifyTime_, hbaModifyTime) };


    // lastModifyStatus Field Functions 
    bool hasLastModifyStatus() const { return this->lastModifyStatus_ != nullptr;};
    void deleteLastModifyStatus() { this->lastModifyStatus_ = nullptr;};
    inline string getLastModifyStatus() const { DARABONBA_PTR_GET_DEFAULT(lastModifyStatus_, "") };
    inline DescribePGHbaConfigResponseBody& setLastModifyStatus(string lastModifyStatus) { DARABONBA_PTR_SET_VALUE(lastModifyStatus_, lastModifyStatus) };


    // modifyStatusReason Field Functions 
    bool hasModifyStatusReason() const { return this->modifyStatusReason_ != nullptr;};
    void deleteModifyStatusReason() { this->modifyStatusReason_ = nullptr;};
    inline string getModifyStatusReason() const { DARABONBA_PTR_GET_DEFAULT(modifyStatusReason_, "") };
    inline DescribePGHbaConfigResponseBody& setModifyStatusReason(string modifyStatusReason) { DARABONBA_PTR_SET_VALUE(modifyStatusReason_, modifyStatusReason) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePGHbaConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // runningHbaItems Field Functions 
    bool hasRunningHbaItems() const { return this->runningHbaItems_ != nullptr;};
    void deleteRunningHbaItems() { this->runningHbaItems_ = nullptr;};
    inline const DescribePGHbaConfigResponseBody::RunningHbaItems & getRunningHbaItems() const { DARABONBA_PTR_GET_CONST(runningHbaItems_, DescribePGHbaConfigResponseBody::RunningHbaItems) };
    inline DescribePGHbaConfigResponseBody::RunningHbaItems getRunningHbaItems() { DARABONBA_PTR_GET(runningHbaItems_, DescribePGHbaConfigResponseBody::RunningHbaItems) };
    inline DescribePGHbaConfigResponseBody& setRunningHbaItems(const DescribePGHbaConfigResponseBody::RunningHbaItems & runningHbaItems) { DARABONBA_PTR_SET_VALUE(runningHbaItems_, runningHbaItems) };
    inline DescribePGHbaConfigResponseBody& setRunningHbaItems(DescribePGHbaConfigResponseBody::RunningHbaItems && runningHbaItems) { DARABONBA_PTR_SET_RVALUE(runningHbaItems_, runningHbaItems) };


  protected:
    // The instance ID.
    shared_ptr<string> DBInstanceId_ {};
    // The default configuration items of the pg_hba.conf file.
    shared_ptr<DescribePGHbaConfigResponseBody::DefaultHbaItems> defaultHbaItems_ {};
    // The time when the previous modification was made to the pg_hba.conf file.
    shared_ptr<string> hbaModifyTime_ {};
    // The status of the previous modification to the pg_hba.conf file. Valid values:
    // 
    // *   **success**
    // *   **setting**
    // *   **failed**
    shared_ptr<string> lastModifyStatus_ {};
    // The reason why the previous modification was made to the pg_hba.conf file.
    shared_ptr<string> modifyStatusReason_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The current configuration items of the pg_hba.conf file.
    shared_ptr<DescribePGHbaConfigResponseBody::RunningHbaItems> runningHbaItems_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
