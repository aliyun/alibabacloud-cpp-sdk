// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINITIALIZATIONSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINITIALIZATIONSTATUSRESPONSEBODY_HPP_
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
  class DescribeInitializationStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInitializationStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataInitializationDetails, dataInitializationDetails_);
      DARABONBA_PTR_TO_JSON(DataSynchronizationDetails, dataSynchronizationDetails_);
      DARABONBA_PTR_TO_JSON(ErrCode, errCode_);
      DARABONBA_PTR_TO_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StructureInitializationDetails, structureInitializationDetails_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInitializationStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataInitializationDetails, dataInitializationDetails_);
      DARABONBA_PTR_FROM_JSON(DataSynchronizationDetails, dataSynchronizationDetails_);
      DARABONBA_PTR_FROM_JSON(ErrCode, errCode_);
      DARABONBA_PTR_FROM_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StructureInitializationDetails, structureInitializationDetails_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeInitializationStatusResponseBody() = default ;
    DescribeInitializationStatusResponseBody(const DescribeInitializationStatusResponseBody &) = default ;
    DescribeInitializationStatusResponseBody(DescribeInitializationStatusResponseBody &&) = default ;
    DescribeInitializationStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInitializationStatusResponseBody() = default ;
    DescribeInitializationStatusResponseBody& operator=(const DescribeInitializationStatusResponseBody &) = default ;
    DescribeInitializationStatusResponseBody& operator=(DescribeInitializationStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class StructureInitializationDetails : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const StructureInitializationDetails& obj) { 
        DARABONBA_PTR_TO_JSON(Constraints, constraints_);
        DARABONBA_PTR_TO_JSON(DestinationOwnerDBName, destinationOwnerDBName_);
        DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
        DARABONBA_PTR_TO_JSON(ObjectDefinition, objectDefinition_);
        DARABONBA_PTR_TO_JSON(ObjectName, objectName_);
        DARABONBA_PTR_TO_JSON(ObjectType, objectType_);
        DARABONBA_PTR_TO_JSON(SourceOwnerDBName, sourceOwnerDBName_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, StructureInitializationDetails& obj) { 
        DARABONBA_PTR_FROM_JSON(Constraints, constraints_);
        DARABONBA_PTR_FROM_JSON(DestinationOwnerDBName, destinationOwnerDBName_);
        DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
        DARABONBA_PTR_FROM_JSON(ObjectDefinition, objectDefinition_);
        DARABONBA_PTR_FROM_JSON(ObjectName, objectName_);
        DARABONBA_PTR_FROM_JSON(ObjectType, objectType_);
        DARABONBA_PTR_FROM_JSON(SourceOwnerDBName, sourceOwnerDBName_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      StructureInitializationDetails() = default ;
      StructureInitializationDetails(const StructureInitializationDetails &) = default ;
      StructureInitializationDetails(StructureInitializationDetails &&) = default ;
      StructureInitializationDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~StructureInitializationDetails() = default ;
      StructureInitializationDetails& operator=(const StructureInitializationDetails &) = default ;
      StructureInitializationDetails& operator=(StructureInitializationDetails &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Constraints : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Constraints& obj) { 
          DARABONBA_PTR_TO_JSON(DestinationOwnerDBName, destinationOwnerDBName_);
          DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
          DARABONBA_PTR_TO_JSON(ObjectDefinition, objectDefinition_);
          DARABONBA_PTR_TO_JSON(ObjectName, objectName_);
          DARABONBA_PTR_TO_JSON(ObjectType, objectType_);
          DARABONBA_PTR_TO_JSON(SourceOwnerDBName, sourceOwnerDBName_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, Constraints& obj) { 
          DARABONBA_PTR_FROM_JSON(DestinationOwnerDBName, destinationOwnerDBName_);
          DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
          DARABONBA_PTR_FROM_JSON(ObjectDefinition, objectDefinition_);
          DARABONBA_PTR_FROM_JSON(ObjectName, objectName_);
          DARABONBA_PTR_FROM_JSON(ObjectType, objectType_);
          DARABONBA_PTR_FROM_JSON(SourceOwnerDBName, sourceOwnerDBName_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        Constraints() = default ;
        Constraints(const Constraints &) = default ;
        Constraints(Constraints &&) = default ;
        Constraints(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Constraints() = default ;
        Constraints& operator=(const Constraints &) = default ;
        Constraints& operator=(Constraints &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->destinationOwnerDBName_ == nullptr
        && this->errorMessage_ == nullptr && this->objectDefinition_ == nullptr && this->objectName_ == nullptr && this->objectType_ == nullptr && this->sourceOwnerDBName_ == nullptr
        && this->status_ == nullptr; };
        // destinationOwnerDBName Field Functions 
        bool hasDestinationOwnerDBName() const { return this->destinationOwnerDBName_ != nullptr;};
        void deleteDestinationOwnerDBName() { this->destinationOwnerDBName_ = nullptr;};
        inline string getDestinationOwnerDBName() const { DARABONBA_PTR_GET_DEFAULT(destinationOwnerDBName_, "") };
        inline Constraints& setDestinationOwnerDBName(string destinationOwnerDBName) { DARABONBA_PTR_SET_VALUE(destinationOwnerDBName_, destinationOwnerDBName) };


        // errorMessage Field Functions 
        bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
        void deleteErrorMessage() { this->errorMessage_ = nullptr;};
        inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
        inline Constraints& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


        // objectDefinition Field Functions 
        bool hasObjectDefinition() const { return this->objectDefinition_ != nullptr;};
        void deleteObjectDefinition() { this->objectDefinition_ = nullptr;};
        inline string getObjectDefinition() const { DARABONBA_PTR_GET_DEFAULT(objectDefinition_, "") };
        inline Constraints& setObjectDefinition(string objectDefinition) { DARABONBA_PTR_SET_VALUE(objectDefinition_, objectDefinition) };


        // objectName Field Functions 
        bool hasObjectName() const { return this->objectName_ != nullptr;};
        void deleteObjectName() { this->objectName_ = nullptr;};
        inline string getObjectName() const { DARABONBA_PTR_GET_DEFAULT(objectName_, "") };
        inline Constraints& setObjectName(string objectName) { DARABONBA_PTR_SET_VALUE(objectName_, objectName) };


        // objectType Field Functions 
        bool hasObjectType() const { return this->objectType_ != nullptr;};
        void deleteObjectType() { this->objectType_ = nullptr;};
        inline string getObjectType() const { DARABONBA_PTR_GET_DEFAULT(objectType_, "") };
        inline Constraints& setObjectType(string objectType) { DARABONBA_PTR_SET_VALUE(objectType_, objectType) };


        // sourceOwnerDBName Field Functions 
        bool hasSourceOwnerDBName() const { return this->sourceOwnerDBName_ != nullptr;};
        void deleteSourceOwnerDBName() { this->sourceOwnerDBName_ = nullptr;};
        inline string getSourceOwnerDBName() const { DARABONBA_PTR_GET_DEFAULT(sourceOwnerDBName_, "") };
        inline Constraints& setSourceOwnerDBName(string sourceOwnerDBName) { DARABONBA_PTR_SET_VALUE(sourceOwnerDBName_, sourceOwnerDBName) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Constraints& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        // The name of the database to which the object in the destination instance belongs.
        shared_ptr<string> destinationOwnerDBName_ {};
        // The error message returned if constraints failed to be created.
        shared_ptr<string> errorMessage_ {};
        // The syntax to create constraints.
        shared_ptr<string> objectDefinition_ {};
        // The name of the object.
        shared_ptr<string> objectName_ {};
        // The type of the object. Valid value: **Table**.
        shared_ptr<string> objectType_ {};
        // The name of the database to which the object in the source instance belongs.
        shared_ptr<string> sourceOwnerDBName_ {};
        // The status of constraint creation. Valid values:
        // 
        // *   **NotStarted**
        // *   **Migrating**
        // *   **Failed**
        // *   **Finished**
        shared_ptr<string> status_ {};
      };

      virtual bool empty() const override { return this->constraints_ == nullptr
        && this->destinationOwnerDBName_ == nullptr && this->errorMessage_ == nullptr && this->objectDefinition_ == nullptr && this->objectName_ == nullptr && this->objectType_ == nullptr
        && this->sourceOwnerDBName_ == nullptr && this->status_ == nullptr; };
      // constraints Field Functions 
      bool hasConstraints() const { return this->constraints_ != nullptr;};
      void deleteConstraints() { this->constraints_ = nullptr;};
      inline const vector<StructureInitializationDetails::Constraints> & getConstraints() const { DARABONBA_PTR_GET_CONST(constraints_, vector<StructureInitializationDetails::Constraints>) };
      inline vector<StructureInitializationDetails::Constraints> getConstraints() { DARABONBA_PTR_GET(constraints_, vector<StructureInitializationDetails::Constraints>) };
      inline StructureInitializationDetails& setConstraints(const vector<StructureInitializationDetails::Constraints> & constraints) { DARABONBA_PTR_SET_VALUE(constraints_, constraints) };
      inline StructureInitializationDetails& setConstraints(vector<StructureInitializationDetails::Constraints> && constraints) { DARABONBA_PTR_SET_RVALUE(constraints_, constraints) };


      // destinationOwnerDBName Field Functions 
      bool hasDestinationOwnerDBName() const { return this->destinationOwnerDBName_ != nullptr;};
      void deleteDestinationOwnerDBName() { this->destinationOwnerDBName_ = nullptr;};
      inline string getDestinationOwnerDBName() const { DARABONBA_PTR_GET_DEFAULT(destinationOwnerDBName_, "") };
      inline StructureInitializationDetails& setDestinationOwnerDBName(string destinationOwnerDBName) { DARABONBA_PTR_SET_VALUE(destinationOwnerDBName_, destinationOwnerDBName) };


      // errorMessage Field Functions 
      bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
      void deleteErrorMessage() { this->errorMessage_ = nullptr;};
      inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
      inline StructureInitializationDetails& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


      // objectDefinition Field Functions 
      bool hasObjectDefinition() const { return this->objectDefinition_ != nullptr;};
      void deleteObjectDefinition() { this->objectDefinition_ = nullptr;};
      inline string getObjectDefinition() const { DARABONBA_PTR_GET_DEFAULT(objectDefinition_, "") };
      inline StructureInitializationDetails& setObjectDefinition(string objectDefinition) { DARABONBA_PTR_SET_VALUE(objectDefinition_, objectDefinition) };


      // objectName Field Functions 
      bool hasObjectName() const { return this->objectName_ != nullptr;};
      void deleteObjectName() { this->objectName_ = nullptr;};
      inline string getObjectName() const { DARABONBA_PTR_GET_DEFAULT(objectName_, "") };
      inline StructureInitializationDetails& setObjectName(string objectName) { DARABONBA_PTR_SET_VALUE(objectName_, objectName) };


      // objectType Field Functions 
      bool hasObjectType() const { return this->objectType_ != nullptr;};
      void deleteObjectType() { this->objectType_ = nullptr;};
      inline string getObjectType() const { DARABONBA_PTR_GET_DEFAULT(objectType_, "") };
      inline StructureInitializationDetails& setObjectType(string objectType) { DARABONBA_PTR_SET_VALUE(objectType_, objectType) };


      // sourceOwnerDBName Field Functions 
      bool hasSourceOwnerDBName() const { return this->sourceOwnerDBName_ != nullptr;};
      void deleteSourceOwnerDBName() { this->sourceOwnerDBName_ = nullptr;};
      inline string getSourceOwnerDBName() const { DARABONBA_PTR_GET_DEFAULT(sourceOwnerDBName_, "") };
      inline StructureInitializationDetails& setSourceOwnerDBName(string sourceOwnerDBName) { DARABONBA_PTR_SET_VALUE(sourceOwnerDBName_, sourceOwnerDBName) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline StructureInitializationDetails& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The constraints of the synchronization object, such as indexes and foreign keys.
      // 
      // >  This parameter is returned only if the **ObjectType** parameter is set to **Table** and the synchronization object has constraints.
      shared_ptr<vector<StructureInitializationDetails::Constraints>> constraints_ {};
      // The name of the database to which the object in the destination instance belongs.
      shared_ptr<string> destinationOwnerDBName_ {};
      // The error message returned if initial schema synchronization failed.
      shared_ptr<string> errorMessage_ {};
      // The schema of the object.
      shared_ptr<string> objectDefinition_ {};
      // The name of the object.
      shared_ptr<string> objectName_ {};
      // The type of the object. Valid values:
      // 
      // **Table**, **Constraint**, **Index**, **View**, **Materialize View**, **Type**, **Synonym**, **Trigger**, **Function**, **Procedure**, **Package**, **Default**, **Rule**, **PlanGuide**, and **Sequence**.
      shared_ptr<string> objectType_ {};
      // The name of the database to which the object in the source instance belongs.
      shared_ptr<string> sourceOwnerDBName_ {};
      // The status of initial schema synchronization. Valid values:
      // 
      // *   **NotStarted**
      // *   **Migrating**
      // *   **Failed**
      // *   **Finished**
      shared_ptr<string> status_ {};
    };

    class DataSynchronizationDetails : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DataSynchronizationDetails& obj) { 
        DARABONBA_PTR_TO_JSON(DestinationOwnerDBName, destinationOwnerDBName_);
        DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
        DARABONBA_PTR_TO_JSON(SourceOwnerDBName, sourceOwnerDBName_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TableName, tableName_);
      };
      friend void from_json(const Darabonba::Json& j, DataSynchronizationDetails& obj) { 
        DARABONBA_PTR_FROM_JSON(DestinationOwnerDBName, destinationOwnerDBName_);
        DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
        DARABONBA_PTR_FROM_JSON(SourceOwnerDBName, sourceOwnerDBName_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TableName, tableName_);
      };
      DataSynchronizationDetails() = default ;
      DataSynchronizationDetails(const DataSynchronizationDetails &) = default ;
      DataSynchronizationDetails(DataSynchronizationDetails &&) = default ;
      DataSynchronizationDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DataSynchronizationDetails() = default ;
      DataSynchronizationDetails& operator=(const DataSynchronizationDetails &) = default ;
      DataSynchronizationDetails& operator=(DataSynchronizationDetails &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->destinationOwnerDBName_ == nullptr
        && this->errorMessage_ == nullptr && this->sourceOwnerDBName_ == nullptr && this->status_ == nullptr && this->tableName_ == nullptr; };
      // destinationOwnerDBName Field Functions 
      bool hasDestinationOwnerDBName() const { return this->destinationOwnerDBName_ != nullptr;};
      void deleteDestinationOwnerDBName() { this->destinationOwnerDBName_ = nullptr;};
      inline string getDestinationOwnerDBName() const { DARABONBA_PTR_GET_DEFAULT(destinationOwnerDBName_, "") };
      inline DataSynchronizationDetails& setDestinationOwnerDBName(string destinationOwnerDBName) { DARABONBA_PTR_SET_VALUE(destinationOwnerDBName_, destinationOwnerDBName) };


      // errorMessage Field Functions 
      bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
      void deleteErrorMessage() { this->errorMessage_ = nullptr;};
      inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
      inline DataSynchronizationDetails& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


      // sourceOwnerDBName Field Functions 
      bool hasSourceOwnerDBName() const { return this->sourceOwnerDBName_ != nullptr;};
      void deleteSourceOwnerDBName() { this->sourceOwnerDBName_ = nullptr;};
      inline string getSourceOwnerDBName() const { DARABONBA_PTR_GET_DEFAULT(sourceOwnerDBName_, "") };
      inline DataSynchronizationDetails& setSourceOwnerDBName(string sourceOwnerDBName) { DARABONBA_PTR_SET_VALUE(sourceOwnerDBName_, sourceOwnerDBName) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline DataSynchronizationDetails& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // tableName Field Functions 
      bool hasTableName() const { return this->tableName_ != nullptr;};
      void deleteTableName() { this->tableName_ = nullptr;};
      inline string getTableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
      inline DataSynchronizationDetails& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


    protected:
      // The name of the database to which the object in the destination instance belongs.
      shared_ptr<string> destinationOwnerDBName_ {};
      // The error message returned if incremental data synchronization failed.
      shared_ptr<string> errorMessage_ {};
      // The name of the database to which the object in the source instance belongs.
      shared_ptr<string> sourceOwnerDBName_ {};
      // The status of incremental data synchronization. Valid values:
      // 
      // *   **NotStarted**
      // *   **Migrating**
      // *   **Failed**
      // *   **Finished**
      shared_ptr<string> status_ {};
      // The table name.
      shared_ptr<string> tableName_ {};
    };

    class DataInitializationDetails : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DataInitializationDetails& obj) { 
        DARABONBA_PTR_TO_JSON(DestinationOwnerDBName, destinationOwnerDBName_);
        DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
        DARABONBA_PTR_TO_JSON(FinishRowNum, finishRowNum_);
        DARABONBA_PTR_TO_JSON(SourceOwnerDBName, sourceOwnerDBName_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TableName, tableName_);
        DARABONBA_PTR_TO_JSON(TotalRowNum, totalRowNum_);
        DARABONBA_PTR_TO_JSON(UsedTime, usedTime_);
      };
      friend void from_json(const Darabonba::Json& j, DataInitializationDetails& obj) { 
        DARABONBA_PTR_FROM_JSON(DestinationOwnerDBName, destinationOwnerDBName_);
        DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
        DARABONBA_PTR_FROM_JSON(FinishRowNum, finishRowNum_);
        DARABONBA_PTR_FROM_JSON(SourceOwnerDBName, sourceOwnerDBName_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TableName, tableName_);
        DARABONBA_PTR_FROM_JSON(TotalRowNum, totalRowNum_);
        DARABONBA_PTR_FROM_JSON(UsedTime, usedTime_);
      };
      DataInitializationDetails() = default ;
      DataInitializationDetails(const DataInitializationDetails &) = default ;
      DataInitializationDetails(DataInitializationDetails &&) = default ;
      DataInitializationDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DataInitializationDetails() = default ;
      DataInitializationDetails& operator=(const DataInitializationDetails &) = default ;
      DataInitializationDetails& operator=(DataInitializationDetails &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->destinationOwnerDBName_ == nullptr
        && this->errorMessage_ == nullptr && this->finishRowNum_ == nullptr && this->sourceOwnerDBName_ == nullptr && this->status_ == nullptr && this->tableName_ == nullptr
        && this->totalRowNum_ == nullptr && this->usedTime_ == nullptr; };
      // destinationOwnerDBName Field Functions 
      bool hasDestinationOwnerDBName() const { return this->destinationOwnerDBName_ != nullptr;};
      void deleteDestinationOwnerDBName() { this->destinationOwnerDBName_ = nullptr;};
      inline string getDestinationOwnerDBName() const { DARABONBA_PTR_GET_DEFAULT(destinationOwnerDBName_, "") };
      inline DataInitializationDetails& setDestinationOwnerDBName(string destinationOwnerDBName) { DARABONBA_PTR_SET_VALUE(destinationOwnerDBName_, destinationOwnerDBName) };


      // errorMessage Field Functions 
      bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
      void deleteErrorMessage() { this->errorMessage_ = nullptr;};
      inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
      inline DataInitializationDetails& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


      // finishRowNum Field Functions 
      bool hasFinishRowNum() const { return this->finishRowNum_ != nullptr;};
      void deleteFinishRowNum() { this->finishRowNum_ = nullptr;};
      inline string getFinishRowNum() const { DARABONBA_PTR_GET_DEFAULT(finishRowNum_, "") };
      inline DataInitializationDetails& setFinishRowNum(string finishRowNum) { DARABONBA_PTR_SET_VALUE(finishRowNum_, finishRowNum) };


      // sourceOwnerDBName Field Functions 
      bool hasSourceOwnerDBName() const { return this->sourceOwnerDBName_ != nullptr;};
      void deleteSourceOwnerDBName() { this->sourceOwnerDBName_ = nullptr;};
      inline string getSourceOwnerDBName() const { DARABONBA_PTR_GET_DEFAULT(sourceOwnerDBName_, "") };
      inline DataInitializationDetails& setSourceOwnerDBName(string sourceOwnerDBName) { DARABONBA_PTR_SET_VALUE(sourceOwnerDBName_, sourceOwnerDBName) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline DataInitializationDetails& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // tableName Field Functions 
      bool hasTableName() const { return this->tableName_ != nullptr;};
      void deleteTableName() { this->tableName_ = nullptr;};
      inline string getTableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
      inline DataInitializationDetails& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


      // totalRowNum Field Functions 
      bool hasTotalRowNum() const { return this->totalRowNum_ != nullptr;};
      void deleteTotalRowNum() { this->totalRowNum_ = nullptr;};
      inline string getTotalRowNum() const { DARABONBA_PTR_GET_DEFAULT(totalRowNum_, "") };
      inline DataInitializationDetails& setTotalRowNum(string totalRowNum) { DARABONBA_PTR_SET_VALUE(totalRowNum_, totalRowNum) };


      // usedTime Field Functions 
      bool hasUsedTime() const { return this->usedTime_ != nullptr;};
      void deleteUsedTime() { this->usedTime_ = nullptr;};
      inline string getUsedTime() const { DARABONBA_PTR_GET_DEFAULT(usedTime_, "") };
      inline DataInitializationDetails& setUsedTime(string usedTime) { DARABONBA_PTR_SET_VALUE(usedTime_, usedTime) };


    protected:
      // The name of the database to which the object in the destination instance belongs.
      shared_ptr<string> destinationOwnerDBName_ {};
      // The error message returned if initial full data synchronization failed.
      shared_ptr<string> errorMessage_ {};
      // The total number of rows that are actually synchronized.
      // 
      // >  This parameter indicates the total number of actually synchronized rows. In contrast, the value of the **TotalRowNum** parameter is calculated based on the system tables in the source database. The values of the two parameters may be different due to time difference.
      shared_ptr<string> finishRowNum_ {};
      // The name of the database to which the object in the source instance belongs.
      shared_ptr<string> sourceOwnerDBName_ {};
      // The status of initial full data synchronization. Valid values:
      // 
      // *   **NotStarted**
      // *   **Migrating**
      // *   **Failed**
      // *   **Finished**
      shared_ptr<string> status_ {};
      // The table name.
      shared_ptr<string> tableName_ {};
      // The total number of rows that are supposed to be synchronized.
      // 
      // >  The value of this parameter is calculated based on the system tables in the source database. In contrast, the **FinishRowNum** parameter indicates the total number of actually synchronized rows. The values of the two parameters may be different due to time difference.
      shared_ptr<string> totalRowNum_ {};
      // The time spent on full data synchronization.
      shared_ptr<string> usedTime_ {};
    };

    virtual bool empty() const override { return this->dataInitializationDetails_ == nullptr
        && this->dataSynchronizationDetails_ == nullptr && this->errCode_ == nullptr && this->errMessage_ == nullptr && this->requestId_ == nullptr && this->structureInitializationDetails_ == nullptr
        && this->success_ == nullptr; };
    // dataInitializationDetails Field Functions 
    bool hasDataInitializationDetails() const { return this->dataInitializationDetails_ != nullptr;};
    void deleteDataInitializationDetails() { this->dataInitializationDetails_ = nullptr;};
    inline const vector<DescribeInitializationStatusResponseBody::DataInitializationDetails> & getDataInitializationDetails() const { DARABONBA_PTR_GET_CONST(dataInitializationDetails_, vector<DescribeInitializationStatusResponseBody::DataInitializationDetails>) };
    inline vector<DescribeInitializationStatusResponseBody::DataInitializationDetails> getDataInitializationDetails() { DARABONBA_PTR_GET(dataInitializationDetails_, vector<DescribeInitializationStatusResponseBody::DataInitializationDetails>) };
    inline DescribeInitializationStatusResponseBody& setDataInitializationDetails(const vector<DescribeInitializationStatusResponseBody::DataInitializationDetails> & dataInitializationDetails) { DARABONBA_PTR_SET_VALUE(dataInitializationDetails_, dataInitializationDetails) };
    inline DescribeInitializationStatusResponseBody& setDataInitializationDetails(vector<DescribeInitializationStatusResponseBody::DataInitializationDetails> && dataInitializationDetails) { DARABONBA_PTR_SET_RVALUE(dataInitializationDetails_, dataInitializationDetails) };


    // dataSynchronizationDetails Field Functions 
    bool hasDataSynchronizationDetails() const { return this->dataSynchronizationDetails_ != nullptr;};
    void deleteDataSynchronizationDetails() { this->dataSynchronizationDetails_ = nullptr;};
    inline const vector<DescribeInitializationStatusResponseBody::DataSynchronizationDetails> & getDataSynchronizationDetails() const { DARABONBA_PTR_GET_CONST(dataSynchronizationDetails_, vector<DescribeInitializationStatusResponseBody::DataSynchronizationDetails>) };
    inline vector<DescribeInitializationStatusResponseBody::DataSynchronizationDetails> getDataSynchronizationDetails() { DARABONBA_PTR_GET(dataSynchronizationDetails_, vector<DescribeInitializationStatusResponseBody::DataSynchronizationDetails>) };
    inline DescribeInitializationStatusResponseBody& setDataSynchronizationDetails(const vector<DescribeInitializationStatusResponseBody::DataSynchronizationDetails> & dataSynchronizationDetails) { DARABONBA_PTR_SET_VALUE(dataSynchronizationDetails_, dataSynchronizationDetails) };
    inline DescribeInitializationStatusResponseBody& setDataSynchronizationDetails(vector<DescribeInitializationStatusResponseBody::DataSynchronizationDetails> && dataSynchronizationDetails) { DARABONBA_PTR_SET_RVALUE(dataSynchronizationDetails_, dataSynchronizationDetails) };


    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline string getErrCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
    inline DescribeInitializationStatusResponseBody& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // errMessage Field Functions 
    bool hasErrMessage() const { return this->errMessage_ != nullptr;};
    void deleteErrMessage() { this->errMessage_ = nullptr;};
    inline string getErrMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
    inline DescribeInitializationStatusResponseBody& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInitializationStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // structureInitializationDetails Field Functions 
    bool hasStructureInitializationDetails() const { return this->structureInitializationDetails_ != nullptr;};
    void deleteStructureInitializationDetails() { this->structureInitializationDetails_ = nullptr;};
    inline const vector<DescribeInitializationStatusResponseBody::StructureInitializationDetails> & getStructureInitializationDetails() const { DARABONBA_PTR_GET_CONST(structureInitializationDetails_, vector<DescribeInitializationStatusResponseBody::StructureInitializationDetails>) };
    inline vector<DescribeInitializationStatusResponseBody::StructureInitializationDetails> getStructureInitializationDetails() { DARABONBA_PTR_GET(structureInitializationDetails_, vector<DescribeInitializationStatusResponseBody::StructureInitializationDetails>) };
    inline DescribeInitializationStatusResponseBody& setStructureInitializationDetails(const vector<DescribeInitializationStatusResponseBody::StructureInitializationDetails> & structureInitializationDetails) { DARABONBA_PTR_SET_VALUE(structureInitializationDetails_, structureInitializationDetails) };
    inline DescribeInitializationStatusResponseBody& setStructureInitializationDetails(vector<DescribeInitializationStatusResponseBody::StructureInitializationDetails> && structureInitializationDetails) { DARABONBA_PTR_SET_RVALUE(structureInitializationDetails_, structureInitializationDetails) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline DescribeInitializationStatusResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The details of initial full data synchronization.
    shared_ptr<vector<DescribeInitializationStatusResponseBody::DataInitializationDetails>> dataInitializationDetails_ {};
    // The details of incremental data synchronization.
    // 
    // >  This parameter and the parameters it contains will be removed in the future.
    shared_ptr<vector<DescribeInitializationStatusResponseBody::DataSynchronizationDetails>> dataSynchronizationDetails_ {};
    // The error code returned if the call failed.
    shared_ptr<string> errCode_ {};
    // The error message returned if the call failed.
    shared_ptr<string> errMessage_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The details of initial schema synchronization.
    shared_ptr<vector<DescribeInitializationStatusResponseBody::StructureInitializationDetails>> structureInitializationDetails_ {};
    // Indicates whether the call was successful.
    shared_ptr<string> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
