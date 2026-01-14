// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMIGRATIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTMIGRATIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RocketMQ20220801
{
namespace Models
{
  class ListMigrationsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMigrationsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(dynamicCode, dynamicCode_);
      DARABONBA_PTR_TO_JSON(dynamicMessage, dynamicMessage_);
      DARABONBA_PTR_TO_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListMigrationsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(dynamicCode, dynamicCode_);
      DARABONBA_PTR_FROM_JSON(dynamicMessage, dynamicMessage_);
      DARABONBA_PTR_FROM_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    ListMigrationsResponseBody() = default ;
    ListMigrationsResponseBody(const ListMigrationsResponseBody &) = default ;
    ListMigrationsResponseBody(ListMigrationsResponseBody &&) = default ;
    ListMigrationsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMigrationsResponseBody() = default ;
    ListMigrationsResponseBody& operator=(const ListMigrationsResponseBody &) = default ;
    ListMigrationsResponseBody& operator=(ListMigrationsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(list, list_);
        DARABONBA_PTR_TO_JSON(pageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(list, list_);
        DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class List : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const List& obj) { 
          DARABONBA_PTR_TO_JSON(createTime, createTime_);
          DARABONBA_PTR_TO_JSON(currentStage, currentStage_);
          DARABONBA_PTR_TO_JSON(migrationId, migrationId_);
          DARABONBA_PTR_TO_JSON(migrationName, migrationName_);
          DARABONBA_PTR_TO_JSON(migrationSource, migrationSource_);
          DARABONBA_PTR_TO_JSON(migrationStatus, migrationStatus_);
          DARABONBA_PTR_TO_JSON(migrationTarget, migrationTarget_);
          DARABONBA_PTR_TO_JSON(migrationType, migrationType_);
          DARABONBA_PTR_TO_JSON(updateTime, updateTime_);
          DARABONBA_PTR_TO_JSON(userId, userId_);
        };
        friend void from_json(const Darabonba::Json& j, List& obj) { 
          DARABONBA_PTR_FROM_JSON(createTime, createTime_);
          DARABONBA_PTR_FROM_JSON(currentStage, currentStage_);
          DARABONBA_PTR_FROM_JSON(migrationId, migrationId_);
          DARABONBA_PTR_FROM_JSON(migrationName, migrationName_);
          DARABONBA_PTR_FROM_JSON(migrationSource, migrationSource_);
          DARABONBA_PTR_FROM_JSON(migrationStatus, migrationStatus_);
          DARABONBA_PTR_FROM_JSON(migrationTarget, migrationTarget_);
          DARABONBA_PTR_FROM_JSON(migrationType, migrationType_);
          DARABONBA_PTR_FROM_JSON(updateTime, updateTime_);
          DARABONBA_PTR_FROM_JSON(userId, userId_);
        };
        List() = default ;
        List(const List &) = default ;
        List(List &&) = default ;
        List(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~List() = default ;
        List& operator=(const List &) = default ;
        List& operator=(List &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class MigrationTarget : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const MigrationTarget& obj) { 
            DARABONBA_ANY_TO_JSON(targetData, targetData_);
            DARABONBA_PTR_TO_JSON(targetType, targetType_);
          };
          friend void from_json(const Darabonba::Json& j, MigrationTarget& obj) { 
            DARABONBA_ANY_FROM_JSON(targetData, targetData_);
            DARABONBA_PTR_FROM_JSON(targetType, targetType_);
          };
          MigrationTarget() = default ;
          MigrationTarget(const MigrationTarget &) = default ;
          MigrationTarget(MigrationTarget &&) = default ;
          MigrationTarget(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~MigrationTarget() = default ;
          MigrationTarget& operator=(const MigrationTarget &) = default ;
          MigrationTarget& operator=(MigrationTarget &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->targetData_ == nullptr
        && this->targetType_ == nullptr; };
          // targetData Field Functions 
          bool hasTargetData() const { return this->targetData_ != nullptr;};
          void deleteTargetData() { this->targetData_ = nullptr;};
          inline           const Darabonba::Json & getTargetData() const { DARABONBA_GET(targetData_) };
          Darabonba::Json & getTargetData() { DARABONBA_GET(targetData_) };
          inline MigrationTarget& setTargetData(const Darabonba::Json & targetData) { DARABONBA_SET_VALUE(targetData_, targetData) };
          inline MigrationTarget& setTargetData(Darabonba::Json && targetData) { DARABONBA_SET_RVALUE(targetData_, targetData) };


          // targetType Field Functions 
          bool hasTargetType() const { return this->targetType_ != nullptr;};
          void deleteTargetType() { this->targetType_ = nullptr;};
          inline string getTargetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
          inline MigrationTarget& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


        protected:
          Darabonba::Json targetData_ {};
          shared_ptr<string> targetType_ {};
        };

        class MigrationSource : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const MigrationSource& obj) { 
            DARABONBA_ANY_TO_JSON(sourceData, sourceData_);
            DARABONBA_PTR_TO_JSON(sourceType, sourceType_);
          };
          friend void from_json(const Darabonba::Json& j, MigrationSource& obj) { 
            DARABONBA_ANY_FROM_JSON(sourceData, sourceData_);
            DARABONBA_PTR_FROM_JSON(sourceType, sourceType_);
          };
          MigrationSource() = default ;
          MigrationSource(const MigrationSource &) = default ;
          MigrationSource(MigrationSource &&) = default ;
          MigrationSource(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~MigrationSource() = default ;
          MigrationSource& operator=(const MigrationSource &) = default ;
          MigrationSource& operator=(MigrationSource &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->sourceData_ == nullptr
        && this->sourceType_ == nullptr; };
          // sourceData Field Functions 
          bool hasSourceData() const { return this->sourceData_ != nullptr;};
          void deleteSourceData() { this->sourceData_ = nullptr;};
          inline           const Darabonba::Json & getSourceData() const { DARABONBA_GET(sourceData_) };
          Darabonba::Json & getSourceData() { DARABONBA_GET(sourceData_) };
          inline MigrationSource& setSourceData(const Darabonba::Json & sourceData) { DARABONBA_SET_VALUE(sourceData_, sourceData) };
          inline MigrationSource& setSourceData(Darabonba::Json && sourceData) { DARABONBA_SET_RVALUE(sourceData_, sourceData) };


          // sourceType Field Functions 
          bool hasSourceType() const { return this->sourceType_ != nullptr;};
          void deleteSourceType() { this->sourceType_ = nullptr;};
          inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
          inline MigrationSource& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


        protected:
          Darabonba::Json sourceData_ {};
          shared_ptr<string> sourceType_ {};
        };

        class CurrentStage : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const CurrentStage& obj) { 
            DARABONBA_ANY_TO_JSON(stageData, stageData_);
            DARABONBA_PTR_TO_JSON(stageStatus, stageStatus_);
            DARABONBA_PTR_TO_JSON(stageType, stageType_);
          };
          friend void from_json(const Darabonba::Json& j, CurrentStage& obj) { 
            DARABONBA_ANY_FROM_JSON(stageData, stageData_);
            DARABONBA_PTR_FROM_JSON(stageStatus, stageStatus_);
            DARABONBA_PTR_FROM_JSON(stageType, stageType_);
          };
          CurrentStage() = default ;
          CurrentStage(const CurrentStage &) = default ;
          CurrentStage(CurrentStage &&) = default ;
          CurrentStage(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~CurrentStage() = default ;
          CurrentStage& operator=(const CurrentStage &) = default ;
          CurrentStage& operator=(CurrentStage &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->stageData_ == nullptr
        && this->stageStatus_ == nullptr && this->stageType_ == nullptr; };
          // stageData Field Functions 
          bool hasStageData() const { return this->stageData_ != nullptr;};
          void deleteStageData() { this->stageData_ = nullptr;};
          inline           const Darabonba::Json & getStageData() const { DARABONBA_GET(stageData_) };
          Darabonba::Json & getStageData() { DARABONBA_GET(stageData_) };
          inline CurrentStage& setStageData(const Darabonba::Json & stageData) { DARABONBA_SET_VALUE(stageData_, stageData) };
          inline CurrentStage& setStageData(Darabonba::Json && stageData) { DARABONBA_SET_RVALUE(stageData_, stageData) };


          // stageStatus Field Functions 
          bool hasStageStatus() const { return this->stageStatus_ != nullptr;};
          void deleteStageStatus() { this->stageStatus_ = nullptr;};
          inline string getStageStatus() const { DARABONBA_PTR_GET_DEFAULT(stageStatus_, "") };
          inline CurrentStage& setStageStatus(string stageStatus) { DARABONBA_PTR_SET_VALUE(stageStatus_, stageStatus) };


          // stageType Field Functions 
          bool hasStageType() const { return this->stageType_ != nullptr;};
          void deleteStageType() { this->stageType_ = nullptr;};
          inline string getStageType() const { DARABONBA_PTR_GET_DEFAULT(stageType_, "") };
          inline CurrentStage& setStageType(string stageType) { DARABONBA_PTR_SET_VALUE(stageType_, stageType) };


        protected:
          Darabonba::Json stageData_ {};
          shared_ptr<string> stageStatus_ {};
          shared_ptr<string> stageType_ {};
        };

        virtual bool empty() const override { return this->createTime_ == nullptr
        && this->currentStage_ == nullptr && this->migrationId_ == nullptr && this->migrationName_ == nullptr && this->migrationSource_ == nullptr && this->migrationStatus_ == nullptr
        && this->migrationTarget_ == nullptr && this->migrationType_ == nullptr && this->updateTime_ == nullptr && this->userId_ == nullptr; };
        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline List& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // currentStage Field Functions 
        bool hasCurrentStage() const { return this->currentStage_ != nullptr;};
        void deleteCurrentStage() { this->currentStage_ = nullptr;};
        inline const List::CurrentStage & getCurrentStage() const { DARABONBA_PTR_GET_CONST(currentStage_, List::CurrentStage) };
        inline List::CurrentStage getCurrentStage() { DARABONBA_PTR_GET(currentStage_, List::CurrentStage) };
        inline List& setCurrentStage(const List::CurrentStage & currentStage) { DARABONBA_PTR_SET_VALUE(currentStage_, currentStage) };
        inline List& setCurrentStage(List::CurrentStage && currentStage) { DARABONBA_PTR_SET_RVALUE(currentStage_, currentStage) };


        // migrationId Field Functions 
        bool hasMigrationId() const { return this->migrationId_ != nullptr;};
        void deleteMigrationId() { this->migrationId_ = nullptr;};
        inline int64_t getMigrationId() const { DARABONBA_PTR_GET_DEFAULT(migrationId_, 0L) };
        inline List& setMigrationId(int64_t migrationId) { DARABONBA_PTR_SET_VALUE(migrationId_, migrationId) };


        // migrationName Field Functions 
        bool hasMigrationName() const { return this->migrationName_ != nullptr;};
        void deleteMigrationName() { this->migrationName_ = nullptr;};
        inline string getMigrationName() const { DARABONBA_PTR_GET_DEFAULT(migrationName_, "") };
        inline List& setMigrationName(string migrationName) { DARABONBA_PTR_SET_VALUE(migrationName_, migrationName) };


        // migrationSource Field Functions 
        bool hasMigrationSource() const { return this->migrationSource_ != nullptr;};
        void deleteMigrationSource() { this->migrationSource_ = nullptr;};
        inline const List::MigrationSource & getMigrationSource() const { DARABONBA_PTR_GET_CONST(migrationSource_, List::MigrationSource) };
        inline List::MigrationSource getMigrationSource() { DARABONBA_PTR_GET(migrationSource_, List::MigrationSource) };
        inline List& setMigrationSource(const List::MigrationSource & migrationSource) { DARABONBA_PTR_SET_VALUE(migrationSource_, migrationSource) };
        inline List& setMigrationSource(List::MigrationSource && migrationSource) { DARABONBA_PTR_SET_RVALUE(migrationSource_, migrationSource) };


        // migrationStatus Field Functions 
        bool hasMigrationStatus() const { return this->migrationStatus_ != nullptr;};
        void deleteMigrationStatus() { this->migrationStatus_ = nullptr;};
        inline string getMigrationStatus() const { DARABONBA_PTR_GET_DEFAULT(migrationStatus_, "") };
        inline List& setMigrationStatus(string migrationStatus) { DARABONBA_PTR_SET_VALUE(migrationStatus_, migrationStatus) };


        // migrationTarget Field Functions 
        bool hasMigrationTarget() const { return this->migrationTarget_ != nullptr;};
        void deleteMigrationTarget() { this->migrationTarget_ = nullptr;};
        inline const List::MigrationTarget & getMigrationTarget() const { DARABONBA_PTR_GET_CONST(migrationTarget_, List::MigrationTarget) };
        inline List::MigrationTarget getMigrationTarget() { DARABONBA_PTR_GET(migrationTarget_, List::MigrationTarget) };
        inline List& setMigrationTarget(const List::MigrationTarget & migrationTarget) { DARABONBA_PTR_SET_VALUE(migrationTarget_, migrationTarget) };
        inline List& setMigrationTarget(List::MigrationTarget && migrationTarget) { DARABONBA_PTR_SET_RVALUE(migrationTarget_, migrationTarget) };


        // migrationType Field Functions 
        bool hasMigrationType() const { return this->migrationType_ != nullptr;};
        void deleteMigrationType() { this->migrationType_ = nullptr;};
        inline string getMigrationType() const { DARABONBA_PTR_GET_DEFAULT(migrationType_, "") };
        inline List& setMigrationType(string migrationType) { DARABONBA_PTR_SET_VALUE(migrationType_, migrationType) };


        // updateTime Field Functions 
        bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
        void deleteUpdateTime() { this->updateTime_ = nullptr;};
        inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
        inline List& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


        // userId Field Functions 
        bool hasUserId() const { return this->userId_ != nullptr;};
        void deleteUserId() { this->userId_ = nullptr;};
        inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
        inline List& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      protected:
        shared_ptr<string> createTime_ {};
        shared_ptr<List::CurrentStage> currentStage_ {};
        shared_ptr<int64_t> migrationId_ {};
        shared_ptr<string> migrationName_ {};
        shared_ptr<List::MigrationSource> migrationSource_ {};
        shared_ptr<string> migrationStatus_ {};
        shared_ptr<List::MigrationTarget> migrationTarget_ {};
        shared_ptr<string> migrationType_ {};
        shared_ptr<string> updateTime_ {};
        shared_ptr<string> userId_ {};
      };

      virtual bool empty() const override { return this->list_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // list Field Functions 
      bool hasList() const { return this->list_ != nullptr;};
      void deleteList() { this->list_ = nullptr;};
      inline const vector<Data::List> & getList() const { DARABONBA_PTR_GET_CONST(list_, vector<Data::List>) };
      inline vector<Data::List> getList() { DARABONBA_PTR_GET(list_, vector<Data::List>) };
      inline Data& setList(const vector<Data::List> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
      inline Data& setList(vector<Data::List> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
      inline Data& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
      inline Data& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
      inline Data& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      shared_ptr<vector<Data::List>> list_ {};
      shared_ptr<int64_t> pageNumber_ {};
      shared_ptr<int64_t> pageSize_ {};
      shared_ptr<int64_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->dynamicCode_ == nullptr && this->dynamicMessage_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListMigrationsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListMigrationsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListMigrationsResponseBody::Data) };
    inline ListMigrationsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListMigrationsResponseBody::Data) };
    inline ListMigrationsResponseBody& setData(const ListMigrationsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListMigrationsResponseBody& setData(ListMigrationsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // dynamicCode Field Functions 
    bool hasDynamicCode() const { return this->dynamicCode_ != nullptr;};
    void deleteDynamicCode() { this->dynamicCode_ = nullptr;};
    inline string getDynamicCode() const { DARABONBA_PTR_GET_DEFAULT(dynamicCode_, "") };
    inline ListMigrationsResponseBody& setDynamicCode(string dynamicCode) { DARABONBA_PTR_SET_VALUE(dynamicCode_, dynamicCode) };


    // dynamicMessage Field Functions 
    bool hasDynamicMessage() const { return this->dynamicMessage_ != nullptr;};
    void deleteDynamicMessage() { this->dynamicMessage_ = nullptr;};
    inline string getDynamicMessage() const { DARABONBA_PTR_GET_DEFAULT(dynamicMessage_, "") };
    inline ListMigrationsResponseBody& setDynamicMessage(string dynamicMessage) { DARABONBA_PTR_SET_VALUE(dynamicMessage_, dynamicMessage) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListMigrationsResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListMigrationsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListMigrationsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListMigrationsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<ListMigrationsResponseBody::Data> data_ {};
    shared_ptr<string> dynamicCode_ {};
    shared_ptr<string> dynamicMessage_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RocketMQ20220801
#endif
