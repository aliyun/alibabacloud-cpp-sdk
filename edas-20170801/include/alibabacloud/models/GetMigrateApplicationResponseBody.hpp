// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMIGRATEAPPLICATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMIGRATEAPPLICATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class GetMigrateApplicationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMigrateApplicationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(traceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, GetMigrateApplicationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(traceId, traceId_);
    };
    GetMigrateApplicationResponseBody() = default ;
    GetMigrateApplicationResponseBody(const GetMigrateApplicationResponseBody &) = default ;
    GetMigrateApplicationResponseBody(GetMigrateApplicationResponseBody &&) = default ;
    GetMigrateApplicationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMigrateApplicationResponseBody() = default ;
    GetMigrateApplicationResponseBody& operator=(const GetMigrateApplicationResponseBody &) = default ;
    GetMigrateApplicationResponseBody& operator=(GetMigrateApplicationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(currentPage, currentPage_);
        DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(result, result_);
        DARABONBA_PTR_TO_JSON(totalSize, totalSize_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(currentPage, currentPage_);
        DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(result, result_);
        DARABONBA_PTR_FROM_JSON(totalSize, totalSize_);
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
      class Result : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Result& obj) { 
          DARABONBA_PTR_TO_JSON(appDetailState, appDetailState_);
          DARABONBA_PTR_TO_JSON(binaryCleaned, binaryCleaned_);
          DARABONBA_PTR_TO_JSON(createTime, createTime_);
          DARABONBA_PTR_TO_JSON(extraInfo, extraInfo_);
          DARABONBA_PTR_TO_JSON(migrationId, migrationId_);
          DARABONBA_PTR_TO_JSON(migrationType, migrationType_);
          DARABONBA_PTR_TO_JSON(owner, owner_);
          DARABONBA_PTR_TO_JSON(regionId, regionId_);
          DARABONBA_PTR_TO_JSON(state, state_);
          DARABONBA_PTR_TO_JSON(statePercent, statePercent_);
          DARABONBA_PTR_TO_JSON(updateTime, updateTime_);
        };
        friend void from_json(const Darabonba::Json& j, Result& obj) { 
          DARABONBA_PTR_FROM_JSON(appDetailState, appDetailState_);
          DARABONBA_PTR_FROM_JSON(binaryCleaned, binaryCleaned_);
          DARABONBA_PTR_FROM_JSON(createTime, createTime_);
          DARABONBA_PTR_FROM_JSON(extraInfo, extraInfo_);
          DARABONBA_PTR_FROM_JSON(migrationId, migrationId_);
          DARABONBA_PTR_FROM_JSON(migrationType, migrationType_);
          DARABONBA_PTR_FROM_JSON(owner, owner_);
          DARABONBA_PTR_FROM_JSON(regionId, regionId_);
          DARABONBA_PTR_FROM_JSON(state, state_);
          DARABONBA_PTR_FROM_JSON(statePercent, statePercent_);
          DARABONBA_PTR_FROM_JSON(updateTime, updateTime_);
        };
        Result() = default ;
        Result(const Result &) = default ;
        Result(Result &&) = default ;
        Result(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Result() = default ;
        Result& operator=(const Result &) = default ;
        Result& operator=(Result &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class ExtraInfo : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ExtraInfo& obj) { 
            DARABONBA_PTR_TO_JSON(appJsonFile, appJsonFile_);
            DARABONBA_PTR_TO_JSON(errorMsg, errorMsg_);
          };
          friend void from_json(const Darabonba::Json& j, ExtraInfo& obj) { 
            DARABONBA_PTR_FROM_JSON(appJsonFile, appJsonFile_);
            DARABONBA_PTR_FROM_JSON(errorMsg, errorMsg_);
          };
          ExtraInfo() = default ;
          ExtraInfo(const ExtraInfo &) = default ;
          ExtraInfo(ExtraInfo &&) = default ;
          ExtraInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ExtraInfo() = default ;
          ExtraInfo& operator=(const ExtraInfo &) = default ;
          ExtraInfo& operator=(ExtraInfo &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->appJsonFile_ == nullptr
        && this->errorMsg_ == nullptr; };
          // appJsonFile Field Functions 
          bool hasAppJsonFile() const { return this->appJsonFile_ != nullptr;};
          void deleteAppJsonFile() { this->appJsonFile_ = nullptr;};
          inline string getAppJsonFile() const { DARABONBA_PTR_GET_DEFAULT(appJsonFile_, "") };
          inline ExtraInfo& setAppJsonFile(string appJsonFile) { DARABONBA_PTR_SET_VALUE(appJsonFile_, appJsonFile) };


          // errorMsg Field Functions 
          bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
          void deleteErrorMsg() { this->errorMsg_ = nullptr;};
          inline string getErrorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
          inline ExtraInfo& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


        protected:
          // appJsonFile
          shared_ptr<string> appJsonFile_ {};
          // The error message.
          shared_ptr<string> errorMsg_ {};
        };

        virtual bool empty() const override { return this->appDetailState_ == nullptr
        && this->binaryCleaned_ == nullptr && this->createTime_ == nullptr && this->extraInfo_ == nullptr && this->migrationId_ == nullptr && this->migrationType_ == nullptr
        && this->owner_ == nullptr && this->regionId_ == nullptr && this->state_ == nullptr && this->statePercent_ == nullptr && this->updateTime_ == nullptr; };
        // appDetailState Field Functions 
        bool hasAppDetailState() const { return this->appDetailState_ != nullptr;};
        void deleteAppDetailState() { this->appDetailState_ = nullptr;};
        inline string getAppDetailState() const { DARABONBA_PTR_GET_DEFAULT(appDetailState_, "") };
        inline Result& setAppDetailState(string appDetailState) { DARABONBA_PTR_SET_VALUE(appDetailState_, appDetailState) };


        // binaryCleaned Field Functions 
        bool hasBinaryCleaned() const { return this->binaryCleaned_ != nullptr;};
        void deleteBinaryCleaned() { this->binaryCleaned_ = nullptr;};
        inline int64_t getBinaryCleaned() const { DARABONBA_PTR_GET_DEFAULT(binaryCleaned_, 0L) };
        inline Result& setBinaryCleaned(int64_t binaryCleaned) { DARABONBA_PTR_SET_VALUE(binaryCleaned_, binaryCleaned) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
        inline Result& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // extraInfo Field Functions 
        bool hasExtraInfo() const { return this->extraInfo_ != nullptr;};
        void deleteExtraInfo() { this->extraInfo_ = nullptr;};
        inline const Result::ExtraInfo & getExtraInfo() const { DARABONBA_PTR_GET_CONST(extraInfo_, Result::ExtraInfo) };
        inline Result::ExtraInfo getExtraInfo() { DARABONBA_PTR_GET(extraInfo_, Result::ExtraInfo) };
        inline Result& setExtraInfo(const Result::ExtraInfo & extraInfo) { DARABONBA_PTR_SET_VALUE(extraInfo_, extraInfo) };
        inline Result& setExtraInfo(Result::ExtraInfo && extraInfo) { DARABONBA_PTR_SET_RVALUE(extraInfo_, extraInfo) };


        // migrationId Field Functions 
        bool hasMigrationId() const { return this->migrationId_ != nullptr;};
        void deleteMigrationId() { this->migrationId_ = nullptr;};
        inline string getMigrationId() const { DARABONBA_PTR_GET_DEFAULT(migrationId_, "") };
        inline Result& setMigrationId(string migrationId) { DARABONBA_PTR_SET_VALUE(migrationId_, migrationId) };


        // migrationType Field Functions 
        bool hasMigrationType() const { return this->migrationType_ != nullptr;};
        void deleteMigrationType() { this->migrationType_ = nullptr;};
        inline int64_t getMigrationType() const { DARABONBA_PTR_GET_DEFAULT(migrationType_, 0L) };
        inline Result& setMigrationType(int64_t migrationType) { DARABONBA_PTR_SET_VALUE(migrationType_, migrationType) };


        // owner Field Functions 
        bool hasOwner() const { return this->owner_ != nullptr;};
        void deleteOwner() { this->owner_ = nullptr;};
        inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
        inline Result& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline Result& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // state Field Functions 
        bool hasState() const { return this->state_ != nullptr;};
        void deleteState() { this->state_ = nullptr;};
        inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
        inline Result& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


        // statePercent Field Functions 
        bool hasStatePercent() const { return this->statePercent_ != nullptr;};
        void deleteStatePercent() { this->statePercent_ = nullptr;};
        inline string getStatePercent() const { DARABONBA_PTR_GET_DEFAULT(statePercent_, "") };
        inline Result& setStatePercent(string statePercent) { DARABONBA_PTR_SET_VALUE(statePercent_, statePercent) };


        // updateTime Field Functions 
        bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
        void deleteUpdateTime() { this->updateTime_ = nullptr;};
        inline int64_t getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
        inline Result& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


      protected:
        // The detailed status of the application.
        shared_ptr<string> appDetailState_ {};
        // Indicates whether binary resources are cleaned up. Valid values: 0: not cleaned up. 1: cleaned up.
        shared_ptr<int64_t> binaryCleaned_ {};
        // The creation time.
        shared_ptr<int64_t> createTime_ {};
        // The additional information.
        shared_ptr<Result::ExtraInfo> extraInfo_ {};
        // The migration ID.
        shared_ptr<string> migrationId_ {};
        // The operation type of the migration task. Valid values: 1: import. 2: export. 3: clone.
        shared_ptr<int64_t> migrationType_ {};
        // The executor.
        shared_ptr<string> owner_ {};
        // regionId
        shared_ptr<string> regionId_ {};
        // The application migration status. Valid values: failed: Failed. finished: Succeeded.
        shared_ptr<string> state_ {};
        // The task progress percentage, stored as a floating-point number. For example, if the API returns 0.33, the progress bar displays 33%.
        shared_ptr<string> statePercent_ {};
        // The update time.
        shared_ptr<int64_t> updateTime_ {};
      };

      virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->pageSize_ == nullptr && this->result_ == nullptr && this->totalSize_ == nullptr; };
      // currentPage Field Functions 
      bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
      void deleteCurrentPage() { this->currentPage_ = nullptr;};
      inline int64_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0L) };
      inline Data& setCurrentPage(int64_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
      inline Data& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // result Field Functions 
      bool hasResult() const { return this->result_ != nullptr;};
      void deleteResult() { this->result_ = nullptr;};
      inline const vector<Data::Result> & getResult() const { DARABONBA_PTR_GET_CONST(result_, vector<Data::Result>) };
      inline vector<Data::Result> getResult() { DARABONBA_PTR_GET(result_, vector<Data::Result>) };
      inline Data& setResult(const vector<Data::Result> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
      inline Data& setResult(vector<Data::Result> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


      // totalSize Field Functions 
      bool hasTotalSize() const { return this->totalSize_ != nullptr;};
      void deleteTotalSize() { this->totalSize_ = nullptr;};
      inline int64_t getTotalSize() const { DARABONBA_PTR_GET_DEFAULT(totalSize_, 0L) };
      inline Data& setTotalSize(int64_t totalSize) { DARABONBA_PTR_SET_VALUE(totalSize_, totalSize) };


    protected:
      // The current page number.
      shared_ptr<int64_t> currentPage_ {};
      // The number of entries per page.
      shared_ptr<int64_t> pageSize_ {};
      // The list of results.
      shared_ptr<vector<Data::Result>> result_ {};
      // The total number of entries.
      shared_ptr<int64_t> totalSize_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->success_ == nullptr && this->traceId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int64_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0L) };
    inline GetMigrateApplicationResponseBody& setCode(int64_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetMigrateApplicationResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetMigrateApplicationResponseBody::Data) };
    inline GetMigrateApplicationResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetMigrateApplicationResponseBody::Data) };
    inline GetMigrateApplicationResponseBody& setData(const GetMigrateApplicationResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetMigrateApplicationResponseBody& setData(GetMigrateApplicationResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetMigrateApplicationResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetMigrateApplicationResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline GetMigrateApplicationResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    // The status code.
    shared_ptr<int64_t> code_ {};
    // The response data.
    shared_ptr<GetMigrateApplicationResponseBody::Data> data_ {};
    // The response message.
    shared_ptr<string> message_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
    // The trace ID.
    shared_ptr<string> traceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
