// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMIGRATIONJOBDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMIGRATIONJOBDETAILRESPONSEBODY_HPP_
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
  class DescribeMigrationJobDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMigrationJobDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataInitializationDetailList, dataInitializationDetailList_);
      DARABONBA_PTR_TO_JSON(DataSynchronizationDetailList, dataSynchronizationDetailList_);
      DARABONBA_PTR_TO_JSON(ErrCode, errCode_);
      DARABONBA_PTR_TO_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StructureInitializationDetailList, structureInitializationDetailList_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalRecordCount, totalRecordCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMigrationJobDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataInitializationDetailList, dataInitializationDetailList_);
      DARABONBA_PTR_FROM_JSON(DataSynchronizationDetailList, dataSynchronizationDetailList_);
      DARABONBA_PTR_FROM_JSON(ErrCode, errCode_);
      DARABONBA_PTR_FROM_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StructureInitializationDetailList, structureInitializationDetailList_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalRecordCount, totalRecordCount_);
    };
    DescribeMigrationJobDetailResponseBody() = default ;
    DescribeMigrationJobDetailResponseBody(const DescribeMigrationJobDetailResponseBody &) = default ;
    DescribeMigrationJobDetailResponseBody(DescribeMigrationJobDetailResponseBody &&) = default ;
    DescribeMigrationJobDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMigrationJobDetailResponseBody() = default ;
    DescribeMigrationJobDetailResponseBody& operator=(const DescribeMigrationJobDetailResponseBody &) = default ;
    DescribeMigrationJobDetailResponseBody& operator=(DescribeMigrationJobDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class StructureInitializationDetailList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const StructureInitializationDetailList& obj) { 
        DARABONBA_PTR_TO_JSON(StructureInitializationDetail, structureInitializationDetail_);
      };
      friend void from_json(const Darabonba::Json& j, StructureInitializationDetailList& obj) { 
        DARABONBA_PTR_FROM_JSON(StructureInitializationDetail, structureInitializationDetail_);
      };
      StructureInitializationDetailList() = default ;
      StructureInitializationDetailList(const StructureInitializationDetailList &) = default ;
      StructureInitializationDetailList(StructureInitializationDetailList &&) = default ;
      StructureInitializationDetailList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~StructureInitializationDetailList() = default ;
      StructureInitializationDetailList& operator=(const StructureInitializationDetailList &) = default ;
      StructureInitializationDetailList& operator=(StructureInitializationDetailList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class StructureInitializationDetail : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const StructureInitializationDetail& obj) { 
          DARABONBA_PTR_TO_JSON(ConstraintList, constraintList_);
          DARABONBA_PTR_TO_JSON(DestinationOwnerDBName, destinationOwnerDBName_);
          DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
          DARABONBA_PTR_TO_JSON(ObjectDefinition, objectDefinition_);
          DARABONBA_PTR_TO_JSON(ObjectName, objectName_);
          DARABONBA_PTR_TO_JSON(ObjectType, objectType_);
          DARABONBA_PTR_TO_JSON(SourceOwnerDBName, sourceOwnerDBName_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, StructureInitializationDetail& obj) { 
          DARABONBA_PTR_FROM_JSON(ConstraintList, constraintList_);
          DARABONBA_PTR_FROM_JSON(DestinationOwnerDBName, destinationOwnerDBName_);
          DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
          DARABONBA_PTR_FROM_JSON(ObjectDefinition, objectDefinition_);
          DARABONBA_PTR_FROM_JSON(ObjectName, objectName_);
          DARABONBA_PTR_FROM_JSON(ObjectType, objectType_);
          DARABONBA_PTR_FROM_JSON(SourceOwnerDBName, sourceOwnerDBName_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        StructureInitializationDetail() = default ;
        StructureInitializationDetail(const StructureInitializationDetail &) = default ;
        StructureInitializationDetail(StructureInitializationDetail &&) = default ;
        StructureInitializationDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~StructureInitializationDetail() = default ;
        StructureInitializationDetail& operator=(const StructureInitializationDetail &) = default ;
        StructureInitializationDetail& operator=(StructureInitializationDetail &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class ConstraintList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ConstraintList& obj) { 
            DARABONBA_PTR_TO_JSON(StructureInitializationDetail, structureInitializationDetail_);
          };
          friend void from_json(const Darabonba::Json& j, ConstraintList& obj) { 
            DARABONBA_PTR_FROM_JSON(StructureInitializationDetail, structureInitializationDetail_);
          };
          ConstraintList() = default ;
          ConstraintList(const ConstraintList &) = default ;
          ConstraintList(ConstraintList &&) = default ;
          ConstraintList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ConstraintList() = default ;
          ConstraintList& operator=(const ConstraintList &) = default ;
          ConstraintList& operator=(ConstraintList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class StructureInitializationDetail : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const StructureInitializationDetail& obj) { 
              DARABONBA_PTR_TO_JSON(DestinationOwnerDBName, destinationOwnerDBName_);
              DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
              DARABONBA_PTR_TO_JSON(ObjectDefinition, objectDefinition_);
              DARABONBA_PTR_TO_JSON(ObjectName, objectName_);
              DARABONBA_PTR_TO_JSON(ObjectType, objectType_);
              DARABONBA_PTR_TO_JSON(SourceOwnerDBName, sourceOwnerDBName_);
              DARABONBA_PTR_TO_JSON(Status, status_);
            };
            friend void from_json(const Darabonba::Json& j, StructureInitializationDetail& obj) { 
              DARABONBA_PTR_FROM_JSON(DestinationOwnerDBName, destinationOwnerDBName_);
              DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
              DARABONBA_PTR_FROM_JSON(ObjectDefinition, objectDefinition_);
              DARABONBA_PTR_FROM_JSON(ObjectName, objectName_);
              DARABONBA_PTR_FROM_JSON(ObjectType, objectType_);
              DARABONBA_PTR_FROM_JSON(SourceOwnerDBName, sourceOwnerDBName_);
              DARABONBA_PTR_FROM_JSON(Status, status_);
            };
            StructureInitializationDetail() = default ;
            StructureInitializationDetail(const StructureInitializationDetail &) = default ;
            StructureInitializationDetail(StructureInitializationDetail &&) = default ;
            StructureInitializationDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~StructureInitializationDetail() = default ;
            StructureInitializationDetail& operator=(const StructureInitializationDetail &) = default ;
            StructureInitializationDetail& operator=(StructureInitializationDetail &&) = default ;
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
            inline StructureInitializationDetail& setDestinationOwnerDBName(string destinationOwnerDBName) { DARABONBA_PTR_SET_VALUE(destinationOwnerDBName_, destinationOwnerDBName) };


            // errorMessage Field Functions 
            bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
            void deleteErrorMessage() { this->errorMessage_ = nullptr;};
            inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
            inline StructureInitializationDetail& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


            // objectDefinition Field Functions 
            bool hasObjectDefinition() const { return this->objectDefinition_ != nullptr;};
            void deleteObjectDefinition() { this->objectDefinition_ = nullptr;};
            inline string getObjectDefinition() const { DARABONBA_PTR_GET_DEFAULT(objectDefinition_, "") };
            inline StructureInitializationDetail& setObjectDefinition(string objectDefinition) { DARABONBA_PTR_SET_VALUE(objectDefinition_, objectDefinition) };


            // objectName Field Functions 
            bool hasObjectName() const { return this->objectName_ != nullptr;};
            void deleteObjectName() { this->objectName_ = nullptr;};
            inline string getObjectName() const { DARABONBA_PTR_GET_DEFAULT(objectName_, "") };
            inline StructureInitializationDetail& setObjectName(string objectName) { DARABONBA_PTR_SET_VALUE(objectName_, objectName) };


            // objectType Field Functions 
            bool hasObjectType() const { return this->objectType_ != nullptr;};
            void deleteObjectType() { this->objectType_ = nullptr;};
            inline string getObjectType() const { DARABONBA_PTR_GET_DEFAULT(objectType_, "") };
            inline StructureInitializationDetail& setObjectType(string objectType) { DARABONBA_PTR_SET_VALUE(objectType_, objectType) };


            // sourceOwnerDBName Field Functions 
            bool hasSourceOwnerDBName() const { return this->sourceOwnerDBName_ != nullptr;};
            void deleteSourceOwnerDBName() { this->sourceOwnerDBName_ = nullptr;};
            inline string getSourceOwnerDBName() const { DARABONBA_PTR_GET_DEFAULT(sourceOwnerDBName_, "") };
            inline StructureInitializationDetail& setSourceOwnerDBName(string sourceOwnerDBName) { DARABONBA_PTR_SET_VALUE(sourceOwnerDBName_, sourceOwnerDBName) };


            // status Field Functions 
            bool hasStatus() const { return this->status_ != nullptr;};
            void deleteStatus() { this->status_ = nullptr;};
            inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
            inline StructureInitializationDetail& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


          protected:
            // The status of constraint creation. Valid values:
            // 
            // - **NotStarted**
            // - **Migrating**
            // - **Failed**
            // - **Finished**
            shared_ptr<string> destinationOwnerDBName_ {};
            // The constraints of the migration object, such as indexes and foreign keys. 
            // 
            // >  This parameter is returned only if the **ObjectType** parameter is set to **Table** and the migration object has constraints.
            shared_ptr<string> errorMessage_ {};
            // The name of the database to which the migration object in the destination instance belongs.
            shared_ptr<string> objectDefinition_ {};
            // The name of the database to which the migration object in the source instance belongs.
            shared_ptr<string> objectName_ {};
            // The name of migration object.
            shared_ptr<string> objectType_ {};
            // The error message returned if schema migration failed.
            shared_ptr<string> sourceOwnerDBName_ {};
            // The type of the migration object. Valid values: **Table**, **Constraint**, **Index**, **View**, **Materialize View**, **Type**, **Synonym**, **Trigger**, **Function**, **Procedure**, **Package**, **Default**, **Rule**, **PlanGuide**, and **Sequence**.
            shared_ptr<string> status_ {};
          };

          virtual bool empty() const override { return this->structureInitializationDetail_ == nullptr; };
          // structureInitializationDetail Field Functions 
          bool hasStructureInitializationDetail() const { return this->structureInitializationDetail_ != nullptr;};
          void deleteStructureInitializationDetail() { this->structureInitializationDetail_ = nullptr;};
          inline const vector<ConstraintList::StructureInitializationDetail> & getStructureInitializationDetail() const { DARABONBA_PTR_GET_CONST(structureInitializationDetail_, vector<ConstraintList::StructureInitializationDetail>) };
          inline vector<ConstraintList::StructureInitializationDetail> getStructureInitializationDetail() { DARABONBA_PTR_GET(structureInitializationDetail_, vector<ConstraintList::StructureInitializationDetail>) };
          inline ConstraintList& setStructureInitializationDetail(const vector<ConstraintList::StructureInitializationDetail> & structureInitializationDetail) { DARABONBA_PTR_SET_VALUE(structureInitializationDetail_, structureInitializationDetail) };
          inline ConstraintList& setStructureInitializationDetail(vector<ConstraintList::StructureInitializationDetail> && structureInitializationDetail) { DARABONBA_PTR_SET_RVALUE(structureInitializationDetail_, structureInitializationDetail) };


        protected:
          shared_ptr<vector<ConstraintList::StructureInitializationDetail>> structureInitializationDetail_ {};
        };

        virtual bool empty() const override { return this->constraintList_ == nullptr
        && this->destinationOwnerDBName_ == nullptr && this->errorMessage_ == nullptr && this->objectDefinition_ == nullptr && this->objectName_ == nullptr && this->objectType_ == nullptr
        && this->sourceOwnerDBName_ == nullptr && this->status_ == nullptr; };
        // constraintList Field Functions 
        bool hasConstraintList() const { return this->constraintList_ != nullptr;};
        void deleteConstraintList() { this->constraintList_ = nullptr;};
        inline const StructureInitializationDetail::ConstraintList & getConstraintList() const { DARABONBA_PTR_GET_CONST(constraintList_, StructureInitializationDetail::ConstraintList) };
        inline StructureInitializationDetail::ConstraintList getConstraintList() { DARABONBA_PTR_GET(constraintList_, StructureInitializationDetail::ConstraintList) };
        inline StructureInitializationDetail& setConstraintList(const StructureInitializationDetail::ConstraintList & constraintList) { DARABONBA_PTR_SET_VALUE(constraintList_, constraintList) };
        inline StructureInitializationDetail& setConstraintList(StructureInitializationDetail::ConstraintList && constraintList) { DARABONBA_PTR_SET_RVALUE(constraintList_, constraintList) };


        // destinationOwnerDBName Field Functions 
        bool hasDestinationOwnerDBName() const { return this->destinationOwnerDBName_ != nullptr;};
        void deleteDestinationOwnerDBName() { this->destinationOwnerDBName_ = nullptr;};
        inline string getDestinationOwnerDBName() const { DARABONBA_PTR_GET_DEFAULT(destinationOwnerDBName_, "") };
        inline StructureInitializationDetail& setDestinationOwnerDBName(string destinationOwnerDBName) { DARABONBA_PTR_SET_VALUE(destinationOwnerDBName_, destinationOwnerDBName) };


        // errorMessage Field Functions 
        bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
        void deleteErrorMessage() { this->errorMessage_ = nullptr;};
        inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
        inline StructureInitializationDetail& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


        // objectDefinition Field Functions 
        bool hasObjectDefinition() const { return this->objectDefinition_ != nullptr;};
        void deleteObjectDefinition() { this->objectDefinition_ = nullptr;};
        inline string getObjectDefinition() const { DARABONBA_PTR_GET_DEFAULT(objectDefinition_, "") };
        inline StructureInitializationDetail& setObjectDefinition(string objectDefinition) { DARABONBA_PTR_SET_VALUE(objectDefinition_, objectDefinition) };


        // objectName Field Functions 
        bool hasObjectName() const { return this->objectName_ != nullptr;};
        void deleteObjectName() { this->objectName_ = nullptr;};
        inline string getObjectName() const { DARABONBA_PTR_GET_DEFAULT(objectName_, "") };
        inline StructureInitializationDetail& setObjectName(string objectName) { DARABONBA_PTR_SET_VALUE(objectName_, objectName) };


        // objectType Field Functions 
        bool hasObjectType() const { return this->objectType_ != nullptr;};
        void deleteObjectType() { this->objectType_ = nullptr;};
        inline string getObjectType() const { DARABONBA_PTR_GET_DEFAULT(objectType_, "") };
        inline StructureInitializationDetail& setObjectType(string objectType) { DARABONBA_PTR_SET_VALUE(objectType_, objectType) };


        // sourceOwnerDBName Field Functions 
        bool hasSourceOwnerDBName() const { return this->sourceOwnerDBName_ != nullptr;};
        void deleteSourceOwnerDBName() { this->sourceOwnerDBName_ = nullptr;};
        inline string getSourceOwnerDBName() const { DARABONBA_PTR_GET_DEFAULT(sourceOwnerDBName_, "") };
        inline StructureInitializationDetail& setSourceOwnerDBName(string sourceOwnerDBName) { DARABONBA_PTR_SET_VALUE(sourceOwnerDBName_, sourceOwnerDBName) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline StructureInitializationDetail& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        // The schema of the migration object.
        shared_ptr<StructureInitializationDetail::ConstraintList> constraintList_ {};
        // The status of schema migration. Valid values:
        // 
        // - **NotStarted**: Schema migration is not started.
        // - **Migrating**: Schema migration is in progress.
        // - **Failed**: Schema migration failed.
        // - **Finished**: Schema migration is completed.
        shared_ptr<string> destinationOwnerDBName_ {};
        // The details of schema migration.
        shared_ptr<string> errorMessage_ {};
        // The task has failed for too long and cannot be restored
        shared_ptr<string> objectDefinition_ {};
        // The name of the database to which the migration object in the source instance belongs.
        shared_ptr<string> objectName_ {};
        // The name of the database to which the migration object in the destination instance belongs.
        shared_ptr<string> objectType_ {};
        // The error message returned if incremental data migration failed.
        shared_ptr<string> sourceOwnerDBName_ {};
        // The table name.
        shared_ptr<string> status_ {};
      };

      virtual bool empty() const override { return this->structureInitializationDetail_ == nullptr; };
      // structureInitializationDetail Field Functions 
      bool hasStructureInitializationDetail() const { return this->structureInitializationDetail_ != nullptr;};
      void deleteStructureInitializationDetail() { this->structureInitializationDetail_ = nullptr;};
      inline const vector<StructureInitializationDetailList::StructureInitializationDetail> & getStructureInitializationDetail() const { DARABONBA_PTR_GET_CONST(structureInitializationDetail_, vector<StructureInitializationDetailList::StructureInitializationDetail>) };
      inline vector<StructureInitializationDetailList::StructureInitializationDetail> getStructureInitializationDetail() { DARABONBA_PTR_GET(structureInitializationDetail_, vector<StructureInitializationDetailList::StructureInitializationDetail>) };
      inline StructureInitializationDetailList& setStructureInitializationDetail(const vector<StructureInitializationDetailList::StructureInitializationDetail> & structureInitializationDetail) { DARABONBA_PTR_SET_VALUE(structureInitializationDetail_, structureInitializationDetail) };
      inline StructureInitializationDetailList& setStructureInitializationDetail(vector<StructureInitializationDetailList::StructureInitializationDetail> && structureInitializationDetail) { DARABONBA_PTR_SET_RVALUE(structureInitializationDetail_, structureInitializationDetail) };


    protected:
      shared_ptr<vector<StructureInitializationDetailList::StructureInitializationDetail>> structureInitializationDetail_ {};
    };

    class DataSynchronizationDetailList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DataSynchronizationDetailList& obj) { 
        DARABONBA_PTR_TO_JSON(DataSynchronizationDetail, dataSynchronizationDetail_);
      };
      friend void from_json(const Darabonba::Json& j, DataSynchronizationDetailList& obj) { 
        DARABONBA_PTR_FROM_JSON(DataSynchronizationDetail, dataSynchronizationDetail_);
      };
      DataSynchronizationDetailList() = default ;
      DataSynchronizationDetailList(const DataSynchronizationDetailList &) = default ;
      DataSynchronizationDetailList(DataSynchronizationDetailList &&) = default ;
      DataSynchronizationDetailList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DataSynchronizationDetailList() = default ;
      DataSynchronizationDetailList& operator=(const DataSynchronizationDetailList &) = default ;
      DataSynchronizationDetailList& operator=(DataSynchronizationDetailList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DataSynchronizationDetail : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DataSynchronizationDetail& obj) { 
          DARABONBA_PTR_TO_JSON(DestinationOwnerDBName, destinationOwnerDBName_);
          DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
          DARABONBA_PTR_TO_JSON(SourceOwnerDBName, sourceOwnerDBName_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(TableName, tableName_);
        };
        friend void from_json(const Darabonba::Json& j, DataSynchronizationDetail& obj) { 
          DARABONBA_PTR_FROM_JSON(DestinationOwnerDBName, destinationOwnerDBName_);
          DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
          DARABONBA_PTR_FROM_JSON(SourceOwnerDBName, sourceOwnerDBName_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(TableName, tableName_);
        };
        DataSynchronizationDetail() = default ;
        DataSynchronizationDetail(const DataSynchronizationDetail &) = default ;
        DataSynchronizationDetail(DataSynchronizationDetail &&) = default ;
        DataSynchronizationDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DataSynchronizationDetail() = default ;
        DataSynchronizationDetail& operator=(const DataSynchronizationDetail &) = default ;
        DataSynchronizationDetail& operator=(DataSynchronizationDetail &&) = default ;
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
        inline DataSynchronizationDetail& setDestinationOwnerDBName(string destinationOwnerDBName) { DARABONBA_PTR_SET_VALUE(destinationOwnerDBName_, destinationOwnerDBName) };


        // errorMessage Field Functions 
        bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
        void deleteErrorMessage() { this->errorMessage_ = nullptr;};
        inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
        inline DataSynchronizationDetail& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


        // sourceOwnerDBName Field Functions 
        bool hasSourceOwnerDBName() const { return this->sourceOwnerDBName_ != nullptr;};
        void deleteSourceOwnerDBName() { this->sourceOwnerDBName_ = nullptr;};
        inline string getSourceOwnerDBName() const { DARABONBA_PTR_GET_DEFAULT(sourceOwnerDBName_, "") };
        inline DataSynchronizationDetail& setSourceOwnerDBName(string sourceOwnerDBName) { DARABONBA_PTR_SET_VALUE(sourceOwnerDBName_, sourceOwnerDBName) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline DataSynchronizationDetail& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // tableName Field Functions 
        bool hasTableName() const { return this->tableName_ != nullptr;};
        void deleteTableName() { this->tableName_ = nullptr;};
        inline string getTableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
        inline DataSynchronizationDetail& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


      protected:
        // The status of incremental data migration. Valid values:
        // 
        // *   **NotStarted**: Incremental data migration is not started.
        // *   **Migrating**: Incremental data migration is in progress.
        // *   **Failed**: Incremental data migration failed.
        // *   **Finished**: Incremental data migration is completed.
        shared_ptr<string> destinationOwnerDBName_ {};
        // The total number of records that are supposed to be migrated by the task.
        shared_ptr<string> errorMessage_ {};
        // The time taken by full data migration.
        shared_ptr<string> sourceOwnerDBName_ {};
        // The number of records that have been migrated.
        shared_ptr<string> status_ {};
        // The name of the database to which the migration object in the destination instance belongs.
        shared_ptr<string> tableName_ {};
      };

      virtual bool empty() const override { return this->dataSynchronizationDetail_ == nullptr; };
      // dataSynchronizationDetail Field Functions 
      bool hasDataSynchronizationDetail() const { return this->dataSynchronizationDetail_ != nullptr;};
      void deleteDataSynchronizationDetail() { this->dataSynchronizationDetail_ = nullptr;};
      inline const vector<DataSynchronizationDetailList::DataSynchronizationDetail> & getDataSynchronizationDetail() const { DARABONBA_PTR_GET_CONST(dataSynchronizationDetail_, vector<DataSynchronizationDetailList::DataSynchronizationDetail>) };
      inline vector<DataSynchronizationDetailList::DataSynchronizationDetail> getDataSynchronizationDetail() { DARABONBA_PTR_GET(dataSynchronizationDetail_, vector<DataSynchronizationDetailList::DataSynchronizationDetail>) };
      inline DataSynchronizationDetailList& setDataSynchronizationDetail(const vector<DataSynchronizationDetailList::DataSynchronizationDetail> & dataSynchronizationDetail) { DARABONBA_PTR_SET_VALUE(dataSynchronizationDetail_, dataSynchronizationDetail) };
      inline DataSynchronizationDetailList& setDataSynchronizationDetail(vector<DataSynchronizationDetailList::DataSynchronizationDetail> && dataSynchronizationDetail) { DARABONBA_PTR_SET_RVALUE(dataSynchronizationDetail_, dataSynchronizationDetail) };


    protected:
      shared_ptr<vector<DataSynchronizationDetailList::DataSynchronizationDetail>> dataSynchronizationDetail_ {};
    };

    class DataInitializationDetailList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DataInitializationDetailList& obj) { 
        DARABONBA_PTR_TO_JSON(DataInitializationDetail, dataInitializationDetail_);
      };
      friend void from_json(const Darabonba::Json& j, DataInitializationDetailList& obj) { 
        DARABONBA_PTR_FROM_JSON(DataInitializationDetail, dataInitializationDetail_);
      };
      DataInitializationDetailList() = default ;
      DataInitializationDetailList(const DataInitializationDetailList &) = default ;
      DataInitializationDetailList(DataInitializationDetailList &&) = default ;
      DataInitializationDetailList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DataInitializationDetailList() = default ;
      DataInitializationDetailList& operator=(const DataInitializationDetailList &) = default ;
      DataInitializationDetailList& operator=(DataInitializationDetailList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DataInitializationDetail : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DataInitializationDetail& obj) { 
          DARABONBA_PTR_TO_JSON(DestinationOwnerDBName, destinationOwnerDBName_);
          DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
          DARABONBA_PTR_TO_JSON(FinishRowNum, finishRowNum_);
          DARABONBA_PTR_TO_JSON(MigrationTime, migrationTime_);
          DARABONBA_PTR_TO_JSON(SourceOwnerDBName, sourceOwnerDBName_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(TableName, tableName_);
          DARABONBA_PTR_TO_JSON(TotalRowNum, totalRowNum_);
        };
        friend void from_json(const Darabonba::Json& j, DataInitializationDetail& obj) { 
          DARABONBA_PTR_FROM_JSON(DestinationOwnerDBName, destinationOwnerDBName_);
          DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
          DARABONBA_PTR_FROM_JSON(FinishRowNum, finishRowNum_);
          DARABONBA_PTR_FROM_JSON(MigrationTime, migrationTime_);
          DARABONBA_PTR_FROM_JSON(SourceOwnerDBName, sourceOwnerDBName_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(TableName, tableName_);
          DARABONBA_PTR_FROM_JSON(TotalRowNum, totalRowNum_);
        };
        DataInitializationDetail() = default ;
        DataInitializationDetail(const DataInitializationDetail &) = default ;
        DataInitializationDetail(DataInitializationDetail &&) = default ;
        DataInitializationDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DataInitializationDetail() = default ;
        DataInitializationDetail& operator=(const DataInitializationDetail &) = default ;
        DataInitializationDetail& operator=(DataInitializationDetail &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->destinationOwnerDBName_ == nullptr
        && this->errorMessage_ == nullptr && this->finishRowNum_ == nullptr && this->migrationTime_ == nullptr && this->sourceOwnerDBName_ == nullptr && this->status_ == nullptr
        && this->tableName_ == nullptr && this->totalRowNum_ == nullptr; };
        // destinationOwnerDBName Field Functions 
        bool hasDestinationOwnerDBName() const { return this->destinationOwnerDBName_ != nullptr;};
        void deleteDestinationOwnerDBName() { this->destinationOwnerDBName_ = nullptr;};
        inline string getDestinationOwnerDBName() const { DARABONBA_PTR_GET_DEFAULT(destinationOwnerDBName_, "") };
        inline DataInitializationDetail& setDestinationOwnerDBName(string destinationOwnerDBName) { DARABONBA_PTR_SET_VALUE(destinationOwnerDBName_, destinationOwnerDBName) };


        // errorMessage Field Functions 
        bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
        void deleteErrorMessage() { this->errorMessage_ = nullptr;};
        inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
        inline DataInitializationDetail& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


        // finishRowNum Field Functions 
        bool hasFinishRowNum() const { return this->finishRowNum_ != nullptr;};
        void deleteFinishRowNum() { this->finishRowNum_ = nullptr;};
        inline string getFinishRowNum() const { DARABONBA_PTR_GET_DEFAULT(finishRowNum_, "") };
        inline DataInitializationDetail& setFinishRowNum(string finishRowNum) { DARABONBA_PTR_SET_VALUE(finishRowNum_, finishRowNum) };


        // migrationTime Field Functions 
        bool hasMigrationTime() const { return this->migrationTime_ != nullptr;};
        void deleteMigrationTime() { this->migrationTime_ = nullptr;};
        inline string getMigrationTime() const { DARABONBA_PTR_GET_DEFAULT(migrationTime_, "") };
        inline DataInitializationDetail& setMigrationTime(string migrationTime) { DARABONBA_PTR_SET_VALUE(migrationTime_, migrationTime) };


        // sourceOwnerDBName Field Functions 
        bool hasSourceOwnerDBName() const { return this->sourceOwnerDBName_ != nullptr;};
        void deleteSourceOwnerDBName() { this->sourceOwnerDBName_ = nullptr;};
        inline string getSourceOwnerDBName() const { DARABONBA_PTR_GET_DEFAULT(sourceOwnerDBName_, "") };
        inline DataInitializationDetail& setSourceOwnerDBName(string sourceOwnerDBName) { DARABONBA_PTR_SET_VALUE(sourceOwnerDBName_, sourceOwnerDBName) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline DataInitializationDetail& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // tableName Field Functions 
        bool hasTableName() const { return this->tableName_ != nullptr;};
        void deleteTableName() { this->tableName_ = nullptr;};
        inline string getTableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
        inline DataInitializationDetail& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


        // totalRowNum Field Functions 
        bool hasTotalRowNum() const { return this->totalRowNum_ != nullptr;};
        void deleteTotalRowNum() { this->totalRowNum_ = nullptr;};
        inline string getTotalRowNum() const { DARABONBA_PTR_GET_DEFAULT(totalRowNum_, "") };
        inline DataInitializationDetail& setTotalRowNum(string totalRowNum) { DARABONBA_PTR_SET_VALUE(totalRowNum_, totalRowNum) };


      protected:
        // The status of full data migration. Valid values:
        // 
        // - **NotStarted**: Full data migration is not started.
        // - **Migrating**: Full data migration is in progress.
        // - **Failed**: Full data migration failed.
        // - **Finished**: Full data migration is completed.
        shared_ptr<string> destinationOwnerDBName_ {};
        // The page number of the returned page.
        shared_ptr<string> errorMessage_ {};
        // The details of full data migration.
        shared_ptr<string> finishRowNum_ {};
        // The name of the database to which the migration object in the source instance belongs.
        shared_ptr<string> migrationTime_ {};
        // Indicates whether the call was successful.
        shared_ptr<string> sourceOwnerDBName_ {};
        // The total number of entries that are returned.
        shared_ptr<string> status_ {};
        // The error message returned if the call failed.
        shared_ptr<string> tableName_ {};
        // The table name.
        shared_ptr<string> totalRowNum_ {};
      };

      virtual bool empty() const override { return this->dataInitializationDetail_ == nullptr; };
      // dataInitializationDetail Field Functions 
      bool hasDataInitializationDetail() const { return this->dataInitializationDetail_ != nullptr;};
      void deleteDataInitializationDetail() { this->dataInitializationDetail_ = nullptr;};
      inline const vector<DataInitializationDetailList::DataInitializationDetail> & getDataInitializationDetail() const { DARABONBA_PTR_GET_CONST(dataInitializationDetail_, vector<DataInitializationDetailList::DataInitializationDetail>) };
      inline vector<DataInitializationDetailList::DataInitializationDetail> getDataInitializationDetail() { DARABONBA_PTR_GET(dataInitializationDetail_, vector<DataInitializationDetailList::DataInitializationDetail>) };
      inline DataInitializationDetailList& setDataInitializationDetail(const vector<DataInitializationDetailList::DataInitializationDetail> & dataInitializationDetail) { DARABONBA_PTR_SET_VALUE(dataInitializationDetail_, dataInitializationDetail) };
      inline DataInitializationDetailList& setDataInitializationDetail(vector<DataInitializationDetailList::DataInitializationDetail> && dataInitializationDetail) { DARABONBA_PTR_SET_RVALUE(dataInitializationDetail_, dataInitializationDetail) };


    protected:
      shared_ptr<vector<DataInitializationDetailList::DataInitializationDetail>> dataInitializationDetail_ {};
    };

    virtual bool empty() const override { return this->dataInitializationDetailList_ == nullptr
        && this->dataSynchronizationDetailList_ == nullptr && this->errCode_ == nullptr && this->errMessage_ == nullptr && this->pageNumber_ == nullptr && this->pageRecordCount_ == nullptr
        && this->requestId_ == nullptr && this->structureInitializationDetailList_ == nullptr && this->success_ == nullptr && this->totalRecordCount_ == nullptr; };
    // dataInitializationDetailList Field Functions 
    bool hasDataInitializationDetailList() const { return this->dataInitializationDetailList_ != nullptr;};
    void deleteDataInitializationDetailList() { this->dataInitializationDetailList_ = nullptr;};
    inline const DescribeMigrationJobDetailResponseBody::DataInitializationDetailList & getDataInitializationDetailList() const { DARABONBA_PTR_GET_CONST(dataInitializationDetailList_, DescribeMigrationJobDetailResponseBody::DataInitializationDetailList) };
    inline DescribeMigrationJobDetailResponseBody::DataInitializationDetailList getDataInitializationDetailList() { DARABONBA_PTR_GET(dataInitializationDetailList_, DescribeMigrationJobDetailResponseBody::DataInitializationDetailList) };
    inline DescribeMigrationJobDetailResponseBody& setDataInitializationDetailList(const DescribeMigrationJobDetailResponseBody::DataInitializationDetailList & dataInitializationDetailList) { DARABONBA_PTR_SET_VALUE(dataInitializationDetailList_, dataInitializationDetailList) };
    inline DescribeMigrationJobDetailResponseBody& setDataInitializationDetailList(DescribeMigrationJobDetailResponseBody::DataInitializationDetailList && dataInitializationDetailList) { DARABONBA_PTR_SET_RVALUE(dataInitializationDetailList_, dataInitializationDetailList) };


    // dataSynchronizationDetailList Field Functions 
    bool hasDataSynchronizationDetailList() const { return this->dataSynchronizationDetailList_ != nullptr;};
    void deleteDataSynchronizationDetailList() { this->dataSynchronizationDetailList_ = nullptr;};
    inline const DescribeMigrationJobDetailResponseBody::DataSynchronizationDetailList & getDataSynchronizationDetailList() const { DARABONBA_PTR_GET_CONST(dataSynchronizationDetailList_, DescribeMigrationJobDetailResponseBody::DataSynchronizationDetailList) };
    inline DescribeMigrationJobDetailResponseBody::DataSynchronizationDetailList getDataSynchronizationDetailList() { DARABONBA_PTR_GET(dataSynchronizationDetailList_, DescribeMigrationJobDetailResponseBody::DataSynchronizationDetailList) };
    inline DescribeMigrationJobDetailResponseBody& setDataSynchronizationDetailList(const DescribeMigrationJobDetailResponseBody::DataSynchronizationDetailList & dataSynchronizationDetailList) { DARABONBA_PTR_SET_VALUE(dataSynchronizationDetailList_, dataSynchronizationDetailList) };
    inline DescribeMigrationJobDetailResponseBody& setDataSynchronizationDetailList(DescribeMigrationJobDetailResponseBody::DataSynchronizationDetailList && dataSynchronizationDetailList) { DARABONBA_PTR_SET_RVALUE(dataSynchronizationDetailList_, dataSynchronizationDetailList) };


    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline string getErrCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
    inline DescribeMigrationJobDetailResponseBody& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // errMessage Field Functions 
    bool hasErrMessage() const { return this->errMessage_ != nullptr;};
    void deleteErrMessage() { this->errMessage_ = nullptr;};
    inline string getErrMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
    inline DescribeMigrationJobDetailResponseBody& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeMigrationJobDetailResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageRecordCount Field Functions 
    bool hasPageRecordCount() const { return this->pageRecordCount_ != nullptr;};
    void deletePageRecordCount() { this->pageRecordCount_ = nullptr;};
    inline int32_t getPageRecordCount() const { DARABONBA_PTR_GET_DEFAULT(pageRecordCount_, 0) };
    inline DescribeMigrationJobDetailResponseBody& setPageRecordCount(int32_t pageRecordCount) { DARABONBA_PTR_SET_VALUE(pageRecordCount_, pageRecordCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeMigrationJobDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // structureInitializationDetailList Field Functions 
    bool hasStructureInitializationDetailList() const { return this->structureInitializationDetailList_ != nullptr;};
    void deleteStructureInitializationDetailList() { this->structureInitializationDetailList_ = nullptr;};
    inline const DescribeMigrationJobDetailResponseBody::StructureInitializationDetailList & getStructureInitializationDetailList() const { DARABONBA_PTR_GET_CONST(structureInitializationDetailList_, DescribeMigrationJobDetailResponseBody::StructureInitializationDetailList) };
    inline DescribeMigrationJobDetailResponseBody::StructureInitializationDetailList getStructureInitializationDetailList() { DARABONBA_PTR_GET(structureInitializationDetailList_, DescribeMigrationJobDetailResponseBody::StructureInitializationDetailList) };
    inline DescribeMigrationJobDetailResponseBody& setStructureInitializationDetailList(const DescribeMigrationJobDetailResponseBody::StructureInitializationDetailList & structureInitializationDetailList) { DARABONBA_PTR_SET_VALUE(structureInitializationDetailList_, structureInitializationDetailList) };
    inline DescribeMigrationJobDetailResponseBody& setStructureInitializationDetailList(DescribeMigrationJobDetailResponseBody::StructureInitializationDetailList && structureInitializationDetailList) { DARABONBA_PTR_SET_RVALUE(structureInitializationDetailList_, structureInitializationDetailList) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline DescribeMigrationJobDetailResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalRecordCount Field Functions 
    bool hasTotalRecordCount() const { return this->totalRecordCount_ != nullptr;};
    void deleteTotalRecordCount() { this->totalRecordCount_ = nullptr;};
    inline int64_t getTotalRecordCount() const { DARABONBA_PTR_GET_DEFAULT(totalRecordCount_, 0L) };
    inline DescribeMigrationJobDetailResponseBody& setTotalRecordCount(int64_t totalRecordCount) { DARABONBA_PTR_SET_VALUE(totalRecordCount_, totalRecordCount) };


  protected:
    // The maximum number of data migration instances that can be displayed on one page.
    shared_ptr<DescribeMigrationJobDetailResponseBody::DataInitializationDetailList> dataInitializationDetailList_ {};
    // The error message returned if full data migration failed.
    shared_ptr<DescribeMigrationJobDetailResponseBody::DataSynchronizationDetailList> dataSynchronizationDetailList_ {};
    // Specifies whether to query the details of incremental data migration. Valid values:
    // 
    // *   **true**: yes
    // 
    // *   **false**: no
    // 
    // > Default value: **false**
    shared_ptr<string> errCode_ {};
    // The ID of the request.
    shared_ptr<string> errMessage_ {};
    // The error code returned if the call failed.
    shared_ptr<int32_t> pageNumber_ {};
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the value, but you must make sure that the value is unique among different requests. The **ClientToken** value can contain only ASCII characters and cannot exceed 64 characters in length.
    shared_ptr<int32_t> pageRecordCount_ {};
    // Specifies whether to query the details of full data migration. Valid values:
    // 
    // *   **true**: yes
    // 
    // *   **false**: no
    // 
    // > Default value: **false**
    shared_ptr<string> requestId_ {};
    // The name of the database to which the migration object in the source instance belongs.
    shared_ptr<DescribeMigrationJobDetailResponseBody::StructureInitializationDetailList> structureInitializationDetailList_ {};
    // The ID of the Alibaba Cloud account. You do not need to specify this parameter because this parameter will be removed in the future.
    shared_ptr<string> success_ {};
    // Resource group ID.
    shared_ptr<int64_t> totalRecordCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
