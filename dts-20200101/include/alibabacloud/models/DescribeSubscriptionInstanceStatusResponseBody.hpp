// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESUBSCRIPTIONINSTANCESTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESUBSCRIPTIONINSTANCESTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class DescribeSubscriptionInstanceStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSubscriptionInstanceStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BeginTimestamp, beginTimestamp_);
      DARABONBA_PTR_TO_JSON(ConsumptionCheckpoint, consumptionCheckpoint_);
      DARABONBA_PTR_TO_JSON(ConsumptionClient, consumptionClient_);
      DARABONBA_PTR_TO_JSON(EndTimestamp, endTimestamp_);
      DARABONBA_PTR_TO_JSON(ErrCode, errCode_);
      DARABONBA_PTR_TO_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(PayType, payType_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SourceEndpoint, sourceEndpoint_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(SubscribeTopic, subscribeTopic_);
      DARABONBA_PTR_TO_JSON(SubscriptionDataType, subscriptionDataType_);
      DARABONBA_PTR_TO_JSON(SubscriptionHost, subscriptionHost_);
      DARABONBA_PTR_TO_JSON(SubscriptionInstanceID, subscriptionInstanceID_);
      DARABONBA_PTR_TO_JSON(SubscriptionInstanceName, subscriptionInstanceName_);
      DARABONBA_PTR_TO_JSON(SubscriptionObject, subscriptionObject_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSubscriptionInstanceStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BeginTimestamp, beginTimestamp_);
      DARABONBA_PTR_FROM_JSON(ConsumptionCheckpoint, consumptionCheckpoint_);
      DARABONBA_PTR_FROM_JSON(ConsumptionClient, consumptionClient_);
      DARABONBA_PTR_FROM_JSON(EndTimestamp, endTimestamp_);
      DARABONBA_PTR_FROM_JSON(ErrCode, errCode_);
      DARABONBA_PTR_FROM_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(PayType, payType_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SourceEndpoint, sourceEndpoint_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(SubscribeTopic, subscribeTopic_);
      DARABONBA_PTR_FROM_JSON(SubscriptionDataType, subscriptionDataType_);
      DARABONBA_PTR_FROM_JSON(SubscriptionHost, subscriptionHost_);
      DARABONBA_PTR_FROM_JSON(SubscriptionInstanceID, subscriptionInstanceID_);
      DARABONBA_PTR_FROM_JSON(SubscriptionInstanceName, subscriptionInstanceName_);
      DARABONBA_PTR_FROM_JSON(SubscriptionObject, subscriptionObject_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    DescribeSubscriptionInstanceStatusResponseBody() = default ;
    DescribeSubscriptionInstanceStatusResponseBody(const DescribeSubscriptionInstanceStatusResponseBody &) = default ;
    DescribeSubscriptionInstanceStatusResponseBody(DescribeSubscriptionInstanceStatusResponseBody &&) = default ;
    DescribeSubscriptionInstanceStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSubscriptionInstanceStatusResponseBody() = default ;
    DescribeSubscriptionInstanceStatusResponseBody& operator=(const DescribeSubscriptionInstanceStatusResponseBody &) = default ;
    DescribeSubscriptionInstanceStatusResponseBody& operator=(DescribeSubscriptionInstanceStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SubscriptionObject : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SubscriptionObject& obj) { 
        DARABONBA_PTR_TO_JSON(SynchronousObject, synchronousObject_);
      };
      friend void from_json(const Darabonba::Json& j, SubscriptionObject& obj) { 
        DARABONBA_PTR_FROM_JSON(SynchronousObject, synchronousObject_);
      };
      SubscriptionObject() = default ;
      SubscriptionObject(const SubscriptionObject &) = default ;
      SubscriptionObject(SubscriptionObject &&) = default ;
      SubscriptionObject(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SubscriptionObject() = default ;
      SubscriptionObject& operator=(const SubscriptionObject &) = default ;
      SubscriptionObject& operator=(SubscriptionObject &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SynchronousObject : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SynchronousObject& obj) { 
          DARABONBA_PTR_TO_JSON(DatabaseName, databaseName_);
          DARABONBA_PTR_TO_JSON(TableList, tableList_);
          DARABONBA_PTR_TO_JSON(WholeDatabase, wholeDatabase_);
        };
        friend void from_json(const Darabonba::Json& j, SynchronousObject& obj) { 
          DARABONBA_PTR_FROM_JSON(DatabaseName, databaseName_);
          DARABONBA_PTR_FROM_JSON(TableList, tableList_);
          DARABONBA_PTR_FROM_JSON(WholeDatabase, wholeDatabase_);
        };
        SynchronousObject() = default ;
        SynchronousObject(const SynchronousObject &) = default ;
        SynchronousObject(SynchronousObject &&) = default ;
        SynchronousObject(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SynchronousObject() = default ;
        SynchronousObject& operator=(const SynchronousObject &) = default ;
        SynchronousObject& operator=(SynchronousObject &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class TableList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const TableList& obj) { 
            DARABONBA_PTR_TO_JSON(Table, table_);
          };
          friend void from_json(const Darabonba::Json& j, TableList& obj) { 
            DARABONBA_PTR_FROM_JSON(Table, table_);
          };
          TableList() = default ;
          TableList(const TableList &) = default ;
          TableList(TableList &&) = default ;
          TableList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~TableList() = default ;
          TableList& operator=(const TableList &) = default ;
          TableList& operator=(TableList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->table_ == nullptr; };
          // table Field Functions 
          bool hasTable() const { return this->table_ != nullptr;};
          void deleteTable() { this->table_ = nullptr;};
          inline const vector<string> & getTable() const { DARABONBA_PTR_GET_CONST(table_, vector<string>) };
          inline vector<string> getTable() { DARABONBA_PTR_GET(table_, vector<string>) };
          inline TableList& setTable(const vector<string> & table) { DARABONBA_PTR_SET_VALUE(table_, table) };
          inline TableList& setTable(vector<string> && table) { DARABONBA_PTR_SET_RVALUE(table_, table) };


        protected:
          shared_ptr<vector<string>> table_ {};
        };

        virtual bool empty() const override { return this->databaseName_ == nullptr
        && this->tableList_ == nullptr && this->wholeDatabase_ == nullptr; };
        // databaseName Field Functions 
        bool hasDatabaseName() const { return this->databaseName_ != nullptr;};
        void deleteDatabaseName() { this->databaseName_ = nullptr;};
        inline string getDatabaseName() const { DARABONBA_PTR_GET_DEFAULT(databaseName_, "") };
        inline SynchronousObject& setDatabaseName(string databaseName) { DARABONBA_PTR_SET_VALUE(databaseName_, databaseName) };


        // tableList Field Functions 
        bool hasTableList() const { return this->tableList_ != nullptr;};
        void deleteTableList() { this->tableList_ = nullptr;};
        inline const SynchronousObject::TableList & getTableList() const { DARABONBA_PTR_GET_CONST(tableList_, SynchronousObject::TableList) };
        inline SynchronousObject::TableList getTableList() { DARABONBA_PTR_GET(tableList_, SynchronousObject::TableList) };
        inline SynchronousObject& setTableList(const SynchronousObject::TableList & tableList) { DARABONBA_PTR_SET_VALUE(tableList_, tableList) };
        inline SynchronousObject& setTableList(SynchronousObject::TableList && tableList) { DARABONBA_PTR_SET_RVALUE(tableList_, tableList) };


        // wholeDatabase Field Functions 
        bool hasWholeDatabase() const { return this->wholeDatabase_ != nullptr;};
        void deleteWholeDatabase() { this->wholeDatabase_ = nullptr;};
        inline string getWholeDatabase() const { DARABONBA_PTR_GET_DEFAULT(wholeDatabase_, "") };
        inline SynchronousObject& setWholeDatabase(string wholeDatabase) { DARABONBA_PTR_SET_VALUE(wholeDatabase_, wholeDatabase) };


      protected:
        // The name of the database to which the object belongs.
        shared_ptr<string> databaseName_ {};
        // The table name.
        shared_ptr<SynchronousObject::TableList> tableList_ {};
        // Indicates whether the data of an entire database is tracked. Valid values:
        // 
        // *   **true**: yes
        // *   **false**: no
        shared_ptr<string> wholeDatabase_ {};
      };

      virtual bool empty() const override { return this->synchronousObject_ == nullptr; };
      // synchronousObject Field Functions 
      bool hasSynchronousObject() const { return this->synchronousObject_ != nullptr;};
      void deleteSynchronousObject() { this->synchronousObject_ = nullptr;};
      inline const vector<SubscriptionObject::SynchronousObject> & getSynchronousObject() const { DARABONBA_PTR_GET_CONST(synchronousObject_, vector<SubscriptionObject::SynchronousObject>) };
      inline vector<SubscriptionObject::SynchronousObject> getSynchronousObject() { DARABONBA_PTR_GET(synchronousObject_, vector<SubscriptionObject::SynchronousObject>) };
      inline SubscriptionObject& setSynchronousObject(const vector<SubscriptionObject::SynchronousObject> & synchronousObject) { DARABONBA_PTR_SET_VALUE(synchronousObject_, synchronousObject) };
      inline SubscriptionObject& setSynchronousObject(vector<SubscriptionObject::SynchronousObject> && synchronousObject) { DARABONBA_PTR_SET_RVALUE(synchronousObject_, synchronousObject) };


    protected:
      shared_ptr<vector<SubscriptionObject::SynchronousObject>> synchronousObject_ {};
    };

    class SubscriptionHost : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SubscriptionHost& obj) { 
        DARABONBA_PTR_TO_JSON(PrivateHost, privateHost_);
        DARABONBA_PTR_TO_JSON(PublicHost, publicHost_);
        DARABONBA_PTR_TO_JSON(VPCHost, VPCHost_);
      };
      friend void from_json(const Darabonba::Json& j, SubscriptionHost& obj) { 
        DARABONBA_PTR_FROM_JSON(PrivateHost, privateHost_);
        DARABONBA_PTR_FROM_JSON(PublicHost, publicHost_);
        DARABONBA_PTR_FROM_JSON(VPCHost, VPCHost_);
      };
      SubscriptionHost() = default ;
      SubscriptionHost(const SubscriptionHost &) = default ;
      SubscriptionHost(SubscriptionHost &&) = default ;
      SubscriptionHost(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SubscriptionHost() = default ;
      SubscriptionHost& operator=(const SubscriptionHost &) = default ;
      SubscriptionHost& operator=(SubscriptionHost &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->privateHost_ == nullptr
        && this->publicHost_ == nullptr && this->VPCHost_ == nullptr; };
      // privateHost Field Functions 
      bool hasPrivateHost() const { return this->privateHost_ != nullptr;};
      void deletePrivateHost() { this->privateHost_ = nullptr;};
      inline string getPrivateHost() const { DARABONBA_PTR_GET_DEFAULT(privateHost_, "") };
      inline SubscriptionHost& setPrivateHost(string privateHost) { DARABONBA_PTR_SET_VALUE(privateHost_, privateHost) };


      // publicHost Field Functions 
      bool hasPublicHost() const { return this->publicHost_ != nullptr;};
      void deletePublicHost() { this->publicHost_ = nullptr;};
      inline string getPublicHost() const { DARABONBA_PTR_GET_DEFAULT(publicHost_, "") };
      inline SubscriptionHost& setPublicHost(string publicHost) { DARABONBA_PTR_SET_VALUE(publicHost_, publicHost) };


      // VPCHost Field Functions 
      bool hasVPCHost() const { return this->VPCHost_ != nullptr;};
      void deleteVPCHost() { this->VPCHost_ = nullptr;};
      inline string getVPCHost() const { DARABONBA_PTR_GET_DEFAULT(VPCHost_, "") };
      inline SubscriptionHost& setVPCHost(string VPCHost) { DARABONBA_PTR_SET_VALUE(VPCHost_, VPCHost) };


    protected:
      // The private endpoint of the change tracking instance. The format is `<Address>:<Port number>`.
      shared_ptr<string> privateHost_ {};
      // The public endpoint of the change tracking instance. The format is `<Address>:<Port number>`.
      shared_ptr<string> publicHost_ {};
      // The virtual private cloud (VPC) endpoint of the change tracking instance. The format is `<Address>:<Port number>`.
      shared_ptr<string> VPCHost_ {};
    };

    class SubscriptionDataType : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SubscriptionDataType& obj) { 
        DARABONBA_PTR_TO_JSON(DDL, DDL_);
        DARABONBA_PTR_TO_JSON(DML, DML_);
      };
      friend void from_json(const Darabonba::Json& j, SubscriptionDataType& obj) { 
        DARABONBA_PTR_FROM_JSON(DDL, DDL_);
        DARABONBA_PTR_FROM_JSON(DML, DML_);
      };
      SubscriptionDataType() = default ;
      SubscriptionDataType(const SubscriptionDataType &) = default ;
      SubscriptionDataType(SubscriptionDataType &&) = default ;
      SubscriptionDataType(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SubscriptionDataType() = default ;
      SubscriptionDataType& operator=(const SubscriptionDataType &) = default ;
      SubscriptionDataType& operator=(SubscriptionDataType &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->DDL_ == nullptr
        && this->DML_ == nullptr; };
      // DDL Field Functions 
      bool hasDDL() const { return this->DDL_ != nullptr;};
      void deleteDDL() { this->DDL_ = nullptr;};
      inline bool getDDL() const { DARABONBA_PTR_GET_DEFAULT(DDL_, false) };
      inline SubscriptionDataType& setDDL(bool DDL) { DARABONBA_PTR_SET_VALUE(DDL_, DDL) };


      // DML Field Functions 
      bool hasDML() const { return this->DML_ != nullptr;};
      void deleteDML() { this->DML_ = nullptr;};
      inline bool getDML() const { DARABONBA_PTR_GET_DEFAULT(DML_, false) };
      inline SubscriptionDataType& setDML(bool DML) { DARABONBA_PTR_SET_VALUE(DML_, DML) };


    protected:
      // Indicates whether data definition language (DDL) operations are tracked. Valid values:
      // 
      // *   **true**: yes
      // *   **false**: no
      shared_ptr<bool> DDL_ {};
      // Indicates whether data manipulation language (DML) operations are tracked. Valid values:
      // 
      // *   **true**: yes
      // *   **false**: no
      shared_ptr<bool> DML_ {};
    };

    class SourceEndpoint : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SourceEndpoint& obj) { 
        DARABONBA_PTR_TO_JSON(InstanceID, instanceID_);
        DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      };
      friend void from_json(const Darabonba::Json& j, SourceEndpoint& obj) { 
        DARABONBA_PTR_FROM_JSON(InstanceID, instanceID_);
        DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      };
      SourceEndpoint() = default ;
      SourceEndpoint(const SourceEndpoint &) = default ;
      SourceEndpoint(SourceEndpoint &&) = default ;
      SourceEndpoint(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SourceEndpoint() = default ;
      SourceEndpoint& operator=(const SourceEndpoint &) = default ;
      SourceEndpoint& operator=(SourceEndpoint &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->instanceID_ == nullptr
        && this->instanceType_ == nullptr; };
      // instanceID Field Functions 
      bool hasInstanceID() const { return this->instanceID_ != nullptr;};
      void deleteInstanceID() { this->instanceID_ = nullptr;};
      inline string getInstanceID() const { DARABONBA_PTR_GET_DEFAULT(instanceID_, "") };
      inline SourceEndpoint& setInstanceID(string instanceID) { DARABONBA_PTR_SET_VALUE(instanceID_, instanceID) };


      // instanceType Field Functions 
      bool hasInstanceType() const { return this->instanceType_ != nullptr;};
      void deleteInstanceType() { this->instanceType_ = nullptr;};
      inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
      inline SourceEndpoint& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    protected:
      // The ID of the instance that hosts the source database.
      shared_ptr<string> instanceID_ {};
      // The instance type of the source database.
      // 
      // >  This parameter is returned only for change tracking instances of the new version.
      shared_ptr<string> instanceType_ {};
    };

    virtual bool empty() const override { return this->beginTimestamp_ == nullptr
        && this->consumptionCheckpoint_ == nullptr && this->consumptionClient_ == nullptr && this->endTimestamp_ == nullptr && this->errCode_ == nullptr && this->errMessage_ == nullptr
        && this->errorMessage_ == nullptr && this->payType_ == nullptr && this->requestId_ == nullptr && this->sourceEndpoint_ == nullptr && this->status_ == nullptr
        && this->subscribeTopic_ == nullptr && this->subscriptionDataType_ == nullptr && this->subscriptionHost_ == nullptr && this->subscriptionInstanceID_ == nullptr && this->subscriptionInstanceName_ == nullptr
        && this->subscriptionObject_ == nullptr && this->success_ == nullptr && this->taskId_ == nullptr; };
    // beginTimestamp Field Functions 
    bool hasBeginTimestamp() const { return this->beginTimestamp_ != nullptr;};
    void deleteBeginTimestamp() { this->beginTimestamp_ = nullptr;};
    inline string getBeginTimestamp() const { DARABONBA_PTR_GET_DEFAULT(beginTimestamp_, "") };
    inline DescribeSubscriptionInstanceStatusResponseBody& setBeginTimestamp(string beginTimestamp) { DARABONBA_PTR_SET_VALUE(beginTimestamp_, beginTimestamp) };


    // consumptionCheckpoint Field Functions 
    bool hasConsumptionCheckpoint() const { return this->consumptionCheckpoint_ != nullptr;};
    void deleteConsumptionCheckpoint() { this->consumptionCheckpoint_ = nullptr;};
    inline string getConsumptionCheckpoint() const { DARABONBA_PTR_GET_DEFAULT(consumptionCheckpoint_, "") };
    inline DescribeSubscriptionInstanceStatusResponseBody& setConsumptionCheckpoint(string consumptionCheckpoint) { DARABONBA_PTR_SET_VALUE(consumptionCheckpoint_, consumptionCheckpoint) };


    // consumptionClient Field Functions 
    bool hasConsumptionClient() const { return this->consumptionClient_ != nullptr;};
    void deleteConsumptionClient() { this->consumptionClient_ = nullptr;};
    inline string getConsumptionClient() const { DARABONBA_PTR_GET_DEFAULT(consumptionClient_, "") };
    inline DescribeSubscriptionInstanceStatusResponseBody& setConsumptionClient(string consumptionClient) { DARABONBA_PTR_SET_VALUE(consumptionClient_, consumptionClient) };


    // endTimestamp Field Functions 
    bool hasEndTimestamp() const { return this->endTimestamp_ != nullptr;};
    void deleteEndTimestamp() { this->endTimestamp_ = nullptr;};
    inline string getEndTimestamp() const { DARABONBA_PTR_GET_DEFAULT(endTimestamp_, "") };
    inline DescribeSubscriptionInstanceStatusResponseBody& setEndTimestamp(string endTimestamp) { DARABONBA_PTR_SET_VALUE(endTimestamp_, endTimestamp) };


    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline string getErrCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
    inline DescribeSubscriptionInstanceStatusResponseBody& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // errMessage Field Functions 
    bool hasErrMessage() const { return this->errMessage_ != nullptr;};
    void deleteErrMessage() { this->errMessage_ = nullptr;};
    inline string getErrMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
    inline DescribeSubscriptionInstanceStatusResponseBody& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline DescribeSubscriptionInstanceStatusResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline string getPayType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
    inline DescribeSubscriptionInstanceStatusResponseBody& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSubscriptionInstanceStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sourceEndpoint Field Functions 
    bool hasSourceEndpoint() const { return this->sourceEndpoint_ != nullptr;};
    void deleteSourceEndpoint() { this->sourceEndpoint_ = nullptr;};
    inline const DescribeSubscriptionInstanceStatusResponseBody::SourceEndpoint & getSourceEndpoint() const { DARABONBA_PTR_GET_CONST(sourceEndpoint_, DescribeSubscriptionInstanceStatusResponseBody::SourceEndpoint) };
    inline DescribeSubscriptionInstanceStatusResponseBody::SourceEndpoint getSourceEndpoint() { DARABONBA_PTR_GET(sourceEndpoint_, DescribeSubscriptionInstanceStatusResponseBody::SourceEndpoint) };
    inline DescribeSubscriptionInstanceStatusResponseBody& setSourceEndpoint(const DescribeSubscriptionInstanceStatusResponseBody::SourceEndpoint & sourceEndpoint) { DARABONBA_PTR_SET_VALUE(sourceEndpoint_, sourceEndpoint) };
    inline DescribeSubscriptionInstanceStatusResponseBody& setSourceEndpoint(DescribeSubscriptionInstanceStatusResponseBody::SourceEndpoint && sourceEndpoint) { DARABONBA_PTR_SET_RVALUE(sourceEndpoint_, sourceEndpoint) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeSubscriptionInstanceStatusResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // subscribeTopic Field Functions 
    bool hasSubscribeTopic() const { return this->subscribeTopic_ != nullptr;};
    void deleteSubscribeTopic() { this->subscribeTopic_ = nullptr;};
    inline string getSubscribeTopic() const { DARABONBA_PTR_GET_DEFAULT(subscribeTopic_, "") };
    inline DescribeSubscriptionInstanceStatusResponseBody& setSubscribeTopic(string subscribeTopic) { DARABONBA_PTR_SET_VALUE(subscribeTopic_, subscribeTopic) };


    // subscriptionDataType Field Functions 
    bool hasSubscriptionDataType() const { return this->subscriptionDataType_ != nullptr;};
    void deleteSubscriptionDataType() { this->subscriptionDataType_ = nullptr;};
    inline const DescribeSubscriptionInstanceStatusResponseBody::SubscriptionDataType & getSubscriptionDataType() const { DARABONBA_PTR_GET_CONST(subscriptionDataType_, DescribeSubscriptionInstanceStatusResponseBody::SubscriptionDataType) };
    inline DescribeSubscriptionInstanceStatusResponseBody::SubscriptionDataType getSubscriptionDataType() { DARABONBA_PTR_GET(subscriptionDataType_, DescribeSubscriptionInstanceStatusResponseBody::SubscriptionDataType) };
    inline DescribeSubscriptionInstanceStatusResponseBody& setSubscriptionDataType(const DescribeSubscriptionInstanceStatusResponseBody::SubscriptionDataType & subscriptionDataType) { DARABONBA_PTR_SET_VALUE(subscriptionDataType_, subscriptionDataType) };
    inline DescribeSubscriptionInstanceStatusResponseBody& setSubscriptionDataType(DescribeSubscriptionInstanceStatusResponseBody::SubscriptionDataType && subscriptionDataType) { DARABONBA_PTR_SET_RVALUE(subscriptionDataType_, subscriptionDataType) };


    // subscriptionHost Field Functions 
    bool hasSubscriptionHost() const { return this->subscriptionHost_ != nullptr;};
    void deleteSubscriptionHost() { this->subscriptionHost_ = nullptr;};
    inline const DescribeSubscriptionInstanceStatusResponseBody::SubscriptionHost & getSubscriptionHost() const { DARABONBA_PTR_GET_CONST(subscriptionHost_, DescribeSubscriptionInstanceStatusResponseBody::SubscriptionHost) };
    inline DescribeSubscriptionInstanceStatusResponseBody::SubscriptionHost getSubscriptionHost() { DARABONBA_PTR_GET(subscriptionHost_, DescribeSubscriptionInstanceStatusResponseBody::SubscriptionHost) };
    inline DescribeSubscriptionInstanceStatusResponseBody& setSubscriptionHost(const DescribeSubscriptionInstanceStatusResponseBody::SubscriptionHost & subscriptionHost) { DARABONBA_PTR_SET_VALUE(subscriptionHost_, subscriptionHost) };
    inline DescribeSubscriptionInstanceStatusResponseBody& setSubscriptionHost(DescribeSubscriptionInstanceStatusResponseBody::SubscriptionHost && subscriptionHost) { DARABONBA_PTR_SET_RVALUE(subscriptionHost_, subscriptionHost) };


    // subscriptionInstanceID Field Functions 
    bool hasSubscriptionInstanceID() const { return this->subscriptionInstanceID_ != nullptr;};
    void deleteSubscriptionInstanceID() { this->subscriptionInstanceID_ = nullptr;};
    inline string getSubscriptionInstanceID() const { DARABONBA_PTR_GET_DEFAULT(subscriptionInstanceID_, "") };
    inline DescribeSubscriptionInstanceStatusResponseBody& setSubscriptionInstanceID(string subscriptionInstanceID) { DARABONBA_PTR_SET_VALUE(subscriptionInstanceID_, subscriptionInstanceID) };


    // subscriptionInstanceName Field Functions 
    bool hasSubscriptionInstanceName() const { return this->subscriptionInstanceName_ != nullptr;};
    void deleteSubscriptionInstanceName() { this->subscriptionInstanceName_ = nullptr;};
    inline string getSubscriptionInstanceName() const { DARABONBA_PTR_GET_DEFAULT(subscriptionInstanceName_, "") };
    inline DescribeSubscriptionInstanceStatusResponseBody& setSubscriptionInstanceName(string subscriptionInstanceName) { DARABONBA_PTR_SET_VALUE(subscriptionInstanceName_, subscriptionInstanceName) };


    // subscriptionObject Field Functions 
    bool hasSubscriptionObject() const { return this->subscriptionObject_ != nullptr;};
    void deleteSubscriptionObject() { this->subscriptionObject_ = nullptr;};
    inline const DescribeSubscriptionInstanceStatusResponseBody::SubscriptionObject & getSubscriptionObject() const { DARABONBA_PTR_GET_CONST(subscriptionObject_, DescribeSubscriptionInstanceStatusResponseBody::SubscriptionObject) };
    inline DescribeSubscriptionInstanceStatusResponseBody::SubscriptionObject getSubscriptionObject() { DARABONBA_PTR_GET(subscriptionObject_, DescribeSubscriptionInstanceStatusResponseBody::SubscriptionObject) };
    inline DescribeSubscriptionInstanceStatusResponseBody& setSubscriptionObject(const DescribeSubscriptionInstanceStatusResponseBody::SubscriptionObject & subscriptionObject) { DARABONBA_PTR_SET_VALUE(subscriptionObject_, subscriptionObject) };
    inline DescribeSubscriptionInstanceStatusResponseBody& setSubscriptionObject(DescribeSubscriptionInstanceStatusResponseBody::SubscriptionObject && subscriptionObject) { DARABONBA_PTR_SET_RVALUE(subscriptionObject_, subscriptionObject) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline DescribeSubscriptionInstanceStatusResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline DescribeSubscriptionInstanceStatusResponseBody& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // The start of the time range for change tracking. The time is displayed in the *yyyy-MM-dd*T*HH:mm:ss*Z format in UTC.
    shared_ptr<string> beginTimestamp_ {};
    // The consumption checkpoint of the change tracking instance. The time is displayed in the *yyyy-MM-dd*T*HH:mm:ss*Z format in UTC.
    shared_ptr<string> consumptionCheckpoint_ {};
    // The downstream client information, in the following format: \\<IP address of the downstream client>:\\<Random ID generated by DTS>.
    shared_ptr<string> consumptionClient_ {};
    // The end of the time range for change tracking. The time is displayed in the *yyyy-MM-dd*T*HH:mm:ss*Z format in UTC.
    shared_ptr<string> endTimestamp_ {};
    // The error code returned if the call failed.
    shared_ptr<string> errCode_ {};
    // The error message returned if the call failed.
    shared_ptr<string> errMessage_ {};
    // The error message returned if change tracking failed.
    shared_ptr<string> errorMessage_ {};
    // The billing method of the change tracking instance. Valid values:
    // 
    // *   **PrePaid**: subscription
    // *   **PostPaid**: pay-as-you-go
    shared_ptr<string> payType_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The connection settings of the source instance.
    shared_ptr<DescribeSubscriptionInstanceStatusResponseBody::SourceEndpoint> sourceEndpoint_ {};
    // The status of the change tracking task. Valid values:
    // 
    // *   **NotStarted**: The task is not started.
    // *   **Prechecking**: The task is being prechecked.
    // *   **PrecheckFailed**: The task failed to pass the precheck.
    // *   **Starting**: The task is being started.
    // *   **Normal**: The task is running as expected.
    // *   **Abnormal**: The task is not running as expected.
    shared_ptr<string> status_ {};
    // The topic of the change tracking instance.
    // 
    // >  This parameter is returned only if your change tracking instance is of the new version and you have called the [CreateConsumerGroup](https://help.aliyun.com/document_detail/122863.html) operation to create a consumer group.
    shared_ptr<string> subscribeTopic_ {};
    // The types of operations that are tracked by the task.
    shared_ptr<DescribeSubscriptionInstanceStatusResponseBody::SubscriptionDataType> subscriptionDataType_ {};
    // The endpoint of the change tracking instance.
    shared_ptr<DescribeSubscriptionInstanceStatusResponseBody::SubscriptionHost> subscriptionHost_ {};
    // The ID of the change tracking instance.
    shared_ptr<string> subscriptionInstanceID_ {};
    // The name of the change tracking instance.
    shared_ptr<string> subscriptionInstanceName_ {};
    // The objects for change tracking.
    shared_ptr<DescribeSubscriptionInstanceStatusResponseBody::SubscriptionObject> subscriptionObject_ {};
    // Indicates whether the call was successful.
    shared_ptr<string> success_ {};
    // The ID of the change tracking task.
    shared_ptr<string> taskId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
