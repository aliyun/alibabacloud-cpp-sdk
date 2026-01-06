// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMODIFYPGHBACONFIGLOGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMODIFYPGHBACONFIGLOGRESPONSEBODY_HPP_
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
  class DescribeModifyPGHbaConfigLogResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeModifyPGHbaConfigLogResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(HbaLogItems, hbaLogItems_);
      DARABONBA_PTR_TO_JSON(LogItemCount, logItemCount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeModifyPGHbaConfigLogResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(HbaLogItems, hbaLogItems_);
      DARABONBA_PTR_FROM_JSON(LogItemCount, logItemCount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeModifyPGHbaConfigLogResponseBody() = default ;
    DescribeModifyPGHbaConfigLogResponseBody(const DescribeModifyPGHbaConfigLogResponseBody &) = default ;
    DescribeModifyPGHbaConfigLogResponseBody(DescribeModifyPGHbaConfigLogResponseBody &&) = default ;
    DescribeModifyPGHbaConfigLogResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeModifyPGHbaConfigLogResponseBody() = default ;
    DescribeModifyPGHbaConfigLogResponseBody& operator=(const DescribeModifyPGHbaConfigLogResponseBody &) = default ;
    DescribeModifyPGHbaConfigLogResponseBody& operator=(DescribeModifyPGHbaConfigLogResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class HbaLogItems : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const HbaLogItems& obj) { 
        DARABONBA_PTR_TO_JSON(HbaLogItem, hbaLogItem_);
      };
      friend void from_json(const Darabonba::Json& j, HbaLogItems& obj) { 
        DARABONBA_PTR_FROM_JSON(HbaLogItem, hbaLogItem_);
      };
      HbaLogItems() = default ;
      HbaLogItems(const HbaLogItems &) = default ;
      HbaLogItems(HbaLogItems &&) = default ;
      HbaLogItems(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~HbaLogItems() = default ;
      HbaLogItems& operator=(const HbaLogItems &) = default ;
      HbaLogItems& operator=(HbaLogItems &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class HbaLogItem : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const HbaLogItem& obj) { 
          DARABONBA_PTR_TO_JSON(AfterHbaItems, afterHbaItems_);
          DARABONBA_PTR_TO_JSON(BeforeHbaItems, beforeHbaItems_);
          DARABONBA_PTR_TO_JSON(ModifyStatus, modifyStatus_);
          DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
          DARABONBA_PTR_TO_JSON(StatusReason, statusReason_);
        };
        friend void from_json(const Darabonba::Json& j, HbaLogItem& obj) { 
          DARABONBA_PTR_FROM_JSON(AfterHbaItems, afterHbaItems_);
          DARABONBA_PTR_FROM_JSON(BeforeHbaItems, beforeHbaItems_);
          DARABONBA_PTR_FROM_JSON(ModifyStatus, modifyStatus_);
          DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
          DARABONBA_PTR_FROM_JSON(StatusReason, statusReason_);
        };
        HbaLogItem() = default ;
        HbaLogItem(const HbaLogItem &) = default ;
        HbaLogItem(HbaLogItem &&) = default ;
        HbaLogItem(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~HbaLogItem() = default ;
        HbaLogItem& operator=(const HbaLogItem &) = default ;
        HbaLogItem& operator=(HbaLogItem &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class BeforeHbaItems : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const BeforeHbaItems& obj) { 
            DARABONBA_PTR_TO_JSON(HbaItem, hbaItem_);
          };
          friend void from_json(const Darabonba::Json& j, BeforeHbaItems& obj) { 
            DARABONBA_PTR_FROM_JSON(HbaItem, hbaItem_);
          };
          BeforeHbaItems() = default ;
          BeforeHbaItems(const BeforeHbaItems &) = default ;
          BeforeHbaItems(BeforeHbaItems &&) = default ;
          BeforeHbaItems(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~BeforeHbaItems() = default ;
          BeforeHbaItems& operator=(const BeforeHbaItems &) = default ;
          BeforeHbaItems& operator=(BeforeHbaItems &&) = default ;
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
            // The IP address.
            shared_ptr<string> address_ {};
            // The name of the database.
            shared_ptr<string> database_ {};
            // The mask of the IP address.
            shared_ptr<string> mask_ {};
            // The authentication method.
            shared_ptr<string> method_ {};
            // The value of this parameter varies based on the value of the Method parameter.
            shared_ptr<string> option_ {};
            // The priority.
            shared_ptr<int32_t> priorityId_ {};
            // The connection type.
            shared_ptr<string> type_ {};
            // The username of the account.
            shared_ptr<string> user_ {};
          };

          virtual bool empty() const override { return this->hbaItem_ == nullptr; };
          // hbaItem Field Functions 
          bool hasHbaItem() const { return this->hbaItem_ != nullptr;};
          void deleteHbaItem() { this->hbaItem_ = nullptr;};
          inline const vector<BeforeHbaItems::HbaItem> & getHbaItem() const { DARABONBA_PTR_GET_CONST(hbaItem_, vector<BeforeHbaItems::HbaItem>) };
          inline vector<BeforeHbaItems::HbaItem> getHbaItem() { DARABONBA_PTR_GET(hbaItem_, vector<BeforeHbaItems::HbaItem>) };
          inline BeforeHbaItems& setHbaItem(const vector<BeforeHbaItems::HbaItem> & hbaItem) { DARABONBA_PTR_SET_VALUE(hbaItem_, hbaItem) };
          inline BeforeHbaItems& setHbaItem(vector<BeforeHbaItems::HbaItem> && hbaItem) { DARABONBA_PTR_SET_RVALUE(hbaItem_, hbaItem) };


        protected:
          shared_ptr<vector<BeforeHbaItems::HbaItem>> hbaItem_ {};
        };

        class AfterHbaItems : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const AfterHbaItems& obj) { 
            DARABONBA_PTR_TO_JSON(HbaItem, hbaItem_);
          };
          friend void from_json(const Darabonba::Json& j, AfterHbaItems& obj) { 
            DARABONBA_PTR_FROM_JSON(HbaItem, hbaItem_);
          };
          AfterHbaItems() = default ;
          AfterHbaItems(const AfterHbaItems &) = default ;
          AfterHbaItems(AfterHbaItems &&) = default ;
          AfterHbaItems(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~AfterHbaItems() = default ;
          AfterHbaItems& operator=(const AfterHbaItems &) = default ;
          AfterHbaItems& operator=(AfterHbaItems &&) = default ;
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
            // The IP address.
            shared_ptr<string> address_ {};
            // The name of the database.
            shared_ptr<string> database_ {};
            // The mask of the IP address.
            shared_ptr<string> mask_ {};
            // The authentication method.
            shared_ptr<string> method_ {};
            // The value of this parameter was set based on the value of the Method parameter.
            shared_ptr<string> option_ {};
            // The priority.
            shared_ptr<int32_t> priorityId_ {};
            // The connection type.
            shared_ptr<string> type_ {};
            // The username of the account.
            shared_ptr<string> user_ {};
          };

          virtual bool empty() const override { return this->hbaItem_ == nullptr; };
          // hbaItem Field Functions 
          bool hasHbaItem() const { return this->hbaItem_ != nullptr;};
          void deleteHbaItem() { this->hbaItem_ = nullptr;};
          inline const vector<AfterHbaItems::HbaItem> & getHbaItem() const { DARABONBA_PTR_GET_CONST(hbaItem_, vector<AfterHbaItems::HbaItem>) };
          inline vector<AfterHbaItems::HbaItem> getHbaItem() { DARABONBA_PTR_GET(hbaItem_, vector<AfterHbaItems::HbaItem>) };
          inline AfterHbaItems& setHbaItem(const vector<AfterHbaItems::HbaItem> & hbaItem) { DARABONBA_PTR_SET_VALUE(hbaItem_, hbaItem) };
          inline AfterHbaItems& setHbaItem(vector<AfterHbaItems::HbaItem> && hbaItem) { DARABONBA_PTR_SET_RVALUE(hbaItem_, hbaItem) };


        protected:
          shared_ptr<vector<AfterHbaItems::HbaItem>> hbaItem_ {};
        };

        virtual bool empty() const override { return this->afterHbaItems_ == nullptr
        && this->beforeHbaItems_ == nullptr && this->modifyStatus_ == nullptr && this->modifyTime_ == nullptr && this->statusReason_ == nullptr; };
        // afterHbaItems Field Functions 
        bool hasAfterHbaItems() const { return this->afterHbaItems_ != nullptr;};
        void deleteAfterHbaItems() { this->afterHbaItems_ = nullptr;};
        inline const HbaLogItem::AfterHbaItems & getAfterHbaItems() const { DARABONBA_PTR_GET_CONST(afterHbaItems_, HbaLogItem::AfterHbaItems) };
        inline HbaLogItem::AfterHbaItems getAfterHbaItems() { DARABONBA_PTR_GET(afterHbaItems_, HbaLogItem::AfterHbaItems) };
        inline HbaLogItem& setAfterHbaItems(const HbaLogItem::AfterHbaItems & afterHbaItems) { DARABONBA_PTR_SET_VALUE(afterHbaItems_, afterHbaItems) };
        inline HbaLogItem& setAfterHbaItems(HbaLogItem::AfterHbaItems && afterHbaItems) { DARABONBA_PTR_SET_RVALUE(afterHbaItems_, afterHbaItems) };


        // beforeHbaItems Field Functions 
        bool hasBeforeHbaItems() const { return this->beforeHbaItems_ != nullptr;};
        void deleteBeforeHbaItems() { this->beforeHbaItems_ = nullptr;};
        inline const HbaLogItem::BeforeHbaItems & getBeforeHbaItems() const { DARABONBA_PTR_GET_CONST(beforeHbaItems_, HbaLogItem::BeforeHbaItems) };
        inline HbaLogItem::BeforeHbaItems getBeforeHbaItems() { DARABONBA_PTR_GET(beforeHbaItems_, HbaLogItem::BeforeHbaItems) };
        inline HbaLogItem& setBeforeHbaItems(const HbaLogItem::BeforeHbaItems & beforeHbaItems) { DARABONBA_PTR_SET_VALUE(beforeHbaItems_, beforeHbaItems) };
        inline HbaLogItem& setBeforeHbaItems(HbaLogItem::BeforeHbaItems && beforeHbaItems) { DARABONBA_PTR_SET_RVALUE(beforeHbaItems_, beforeHbaItems) };


        // modifyStatus Field Functions 
        bool hasModifyStatus() const { return this->modifyStatus_ != nullptr;};
        void deleteModifyStatus() { this->modifyStatus_ = nullptr;};
        inline string getModifyStatus() const { DARABONBA_PTR_GET_DEFAULT(modifyStatus_, "") };
        inline HbaLogItem& setModifyStatus(string modifyStatus) { DARABONBA_PTR_SET_VALUE(modifyStatus_, modifyStatus) };


        // modifyTime Field Functions 
        bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
        void deleteModifyTime() { this->modifyTime_ = nullptr;};
        inline string getModifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, "") };
        inline HbaLogItem& setModifyTime(string modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


        // statusReason Field Functions 
        bool hasStatusReason() const { return this->statusReason_ != nullptr;};
        void deleteStatusReason() { this->statusReason_ = nullptr;};
        inline string getStatusReason() const { DARABONBA_PTR_GET_DEFAULT(statusReason_, "") };
        inline HbaLogItem& setStatusReason(string statusReason) { DARABONBA_PTR_SET_VALUE(statusReason_, statusReason) };


      protected:
        // The configurations of the pg_hba.conf file after modification.
        shared_ptr<HbaLogItem::AfterHbaItems> afterHbaItems_ {};
        // The configurations of the pg_hba.conf file before modification.
        shared_ptr<HbaLogItem::BeforeHbaItems> beforeHbaItems_ {};
        // The status of the modification.
        // 
        // *   **success**: The modification is successful.
        // *   **failed**: The modification failed.
        // *   **setting**: The modification is being applied.
        shared_ptr<string> modifyStatus_ {};
        // The time when the pg_hba.conf file was modified. The time is displayed in UTC.
        shared_ptr<string> modifyTime_ {};
        // The reason why the modification failed.
        shared_ptr<string> statusReason_ {};
      };

      virtual bool empty() const override { return this->hbaLogItem_ == nullptr; };
      // hbaLogItem Field Functions 
      bool hasHbaLogItem() const { return this->hbaLogItem_ != nullptr;};
      void deleteHbaLogItem() { this->hbaLogItem_ = nullptr;};
      inline const vector<HbaLogItems::HbaLogItem> & getHbaLogItem() const { DARABONBA_PTR_GET_CONST(hbaLogItem_, vector<HbaLogItems::HbaLogItem>) };
      inline vector<HbaLogItems::HbaLogItem> getHbaLogItem() { DARABONBA_PTR_GET(hbaLogItem_, vector<HbaLogItems::HbaLogItem>) };
      inline HbaLogItems& setHbaLogItem(const vector<HbaLogItems::HbaLogItem> & hbaLogItem) { DARABONBA_PTR_SET_VALUE(hbaLogItem_, hbaLogItem) };
      inline HbaLogItems& setHbaLogItem(vector<HbaLogItems::HbaLogItem> && hbaLogItem) { DARABONBA_PTR_SET_RVALUE(hbaLogItem_, hbaLogItem) };


    protected:
      shared_ptr<vector<HbaLogItems::HbaLogItem>> hbaLogItem_ {};
    };

    virtual bool empty() const override { return this->DBInstanceId_ == nullptr
        && this->hbaLogItems_ == nullptr && this->logItemCount_ == nullptr && this->requestId_ == nullptr; };
    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline DescribeModifyPGHbaConfigLogResponseBody& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // hbaLogItems Field Functions 
    bool hasHbaLogItems() const { return this->hbaLogItems_ != nullptr;};
    void deleteHbaLogItems() { this->hbaLogItems_ = nullptr;};
    inline const DescribeModifyPGHbaConfigLogResponseBody::HbaLogItems & getHbaLogItems() const { DARABONBA_PTR_GET_CONST(hbaLogItems_, DescribeModifyPGHbaConfigLogResponseBody::HbaLogItems) };
    inline DescribeModifyPGHbaConfigLogResponseBody::HbaLogItems getHbaLogItems() { DARABONBA_PTR_GET(hbaLogItems_, DescribeModifyPGHbaConfigLogResponseBody::HbaLogItems) };
    inline DescribeModifyPGHbaConfigLogResponseBody& setHbaLogItems(const DescribeModifyPGHbaConfigLogResponseBody::HbaLogItems & hbaLogItems) { DARABONBA_PTR_SET_VALUE(hbaLogItems_, hbaLogItems) };
    inline DescribeModifyPGHbaConfigLogResponseBody& setHbaLogItems(DescribeModifyPGHbaConfigLogResponseBody::HbaLogItems && hbaLogItems) { DARABONBA_PTR_SET_RVALUE(hbaLogItems_, hbaLogItems) };


    // logItemCount Field Functions 
    bool hasLogItemCount() const { return this->logItemCount_ != nullptr;};
    void deleteLogItemCount() { this->logItemCount_ = nullptr;};
    inline int32_t getLogItemCount() const { DARABONBA_PTR_GET_DEFAULT(logItemCount_, 0) };
    inline DescribeModifyPGHbaConfigLogResponseBody& setLogItemCount(int32_t logItemCount) { DARABONBA_PTR_SET_VALUE(logItemCount_, logItemCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeModifyPGHbaConfigLogResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The instance ID.
    shared_ptr<string> DBInstanceId_ {};
    // An array that consists of the modifications to the pg_hba.conf file.
    shared_ptr<DescribeModifyPGHbaConfigLogResponseBody::HbaLogItems> hbaLogItems_ {};
    // The number of modification records.
    shared_ptr<int32_t> logItemCount_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
