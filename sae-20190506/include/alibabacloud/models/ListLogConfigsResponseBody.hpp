// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLOGCONFIGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTLOGCONFIGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class ListLogConfigsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLogConfigsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TraceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, ListLogConfigsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TraceId, traceId_);
    };
    ListLogConfigsResponseBody() = default ;
    ListLogConfigsResponseBody(const ListLogConfigsResponseBody &) = default ;
    ListLogConfigsResponseBody(ListLogConfigsResponseBody &&) = default ;
    ListLogConfigsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLogConfigsResponseBody() = default ;
    ListLogConfigsResponseBody& operator=(const ListLogConfigsResponseBody &) = default ;
    ListLogConfigsResponseBody& operator=(ListLogConfigsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_TO_JSON(LogConfigs, logConfigs_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalSize, totalSize_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_FROM_JSON(LogConfigs, logConfigs_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalSize, totalSize_);
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
      class LogConfigs : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const LogConfigs& obj) { 
          DARABONBA_PTR_TO_JSON(ConfigName, configName_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(LogDir, logDir_);
          DARABONBA_PTR_TO_JSON(LogType, logType_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(SlsLogStore, slsLogStore_);
          DARABONBA_PTR_TO_JSON(SlsProject, slsProject_);
          DARABONBA_PTR_TO_JSON(StoreType, storeType_);
        };
        friend void from_json(const Darabonba::Json& j, LogConfigs& obj) { 
          DARABONBA_PTR_FROM_JSON(ConfigName, configName_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(LogDir, logDir_);
          DARABONBA_PTR_FROM_JSON(LogType, logType_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(SlsLogStore, slsLogStore_);
          DARABONBA_PTR_FROM_JSON(SlsProject, slsProject_);
          DARABONBA_PTR_FROM_JSON(StoreType, storeType_);
        };
        LogConfigs() = default ;
        LogConfigs(const LogConfigs &) = default ;
        LogConfigs(LogConfigs &&) = default ;
        LogConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~LogConfigs() = default ;
        LogConfigs& operator=(const LogConfigs &) = default ;
        LogConfigs& operator=(LogConfigs &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->configName_ == nullptr
        && this->createTime_ == nullptr && this->logDir_ == nullptr && this->logType_ == nullptr && this->regionId_ == nullptr && this->slsLogStore_ == nullptr
        && this->slsProject_ == nullptr && this->storeType_ == nullptr; };
        // configName Field Functions 
        bool hasConfigName() const { return this->configName_ != nullptr;};
        void deleteConfigName() { this->configName_ = nullptr;};
        inline string getConfigName() const { DARABONBA_PTR_GET_DEFAULT(configName_, "") };
        inline LogConfigs& setConfigName(string configName) { DARABONBA_PTR_SET_VALUE(configName_, configName) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline LogConfigs& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // logDir Field Functions 
        bool hasLogDir() const { return this->logDir_ != nullptr;};
        void deleteLogDir() { this->logDir_ = nullptr;};
        inline string getLogDir() const { DARABONBA_PTR_GET_DEFAULT(logDir_, "") };
        inline LogConfigs& setLogDir(string logDir) { DARABONBA_PTR_SET_VALUE(logDir_, logDir) };


        // logType Field Functions 
        bool hasLogType() const { return this->logType_ != nullptr;};
        void deleteLogType() { this->logType_ = nullptr;};
        inline string getLogType() const { DARABONBA_PTR_GET_DEFAULT(logType_, "") };
        inline LogConfigs& setLogType(string logType) { DARABONBA_PTR_SET_VALUE(logType_, logType) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline LogConfigs& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // slsLogStore Field Functions 
        bool hasSlsLogStore() const { return this->slsLogStore_ != nullptr;};
        void deleteSlsLogStore() { this->slsLogStore_ = nullptr;};
        inline string getSlsLogStore() const { DARABONBA_PTR_GET_DEFAULT(slsLogStore_, "") };
        inline LogConfigs& setSlsLogStore(string slsLogStore) { DARABONBA_PTR_SET_VALUE(slsLogStore_, slsLogStore) };


        // slsProject Field Functions 
        bool hasSlsProject() const { return this->slsProject_ != nullptr;};
        void deleteSlsProject() { this->slsProject_ = nullptr;};
        inline string getSlsProject() const { DARABONBA_PTR_GET_DEFAULT(slsProject_, "") };
        inline LogConfigs& setSlsProject(string slsProject) { DARABONBA_PTR_SET_VALUE(slsProject_, slsProject) };


        // storeType Field Functions 
        bool hasStoreType() const { return this->storeType_ != nullptr;};
        void deleteStoreType() { this->storeType_ = nullptr;};
        inline string getStoreType() const { DARABONBA_PTR_GET_DEFAULT(storeType_, "") };
        inline LogConfigs& setStoreType(string storeType) { DARABONBA_PTR_SET_VALUE(storeType_, storeType) };


      protected:
        // The path of logs.
        shared_ptr<string> configName_ {};
        // The storage type of logs.
        shared_ptr<string> createTime_ {};
        // The path of the log file (log source).
        shared_ptr<string> logDir_ {};
        // The ID of the region.
        shared_ptr<string> logType_ {};
        // The number of the returned page.
        shared_ptr<string> regionId_ {};
        // The time when the configuration was created.
        shared_ptr<string> slsLogStore_ {};
        // The type of the log. Set this value to **file_log**.
        shared_ptr<string> slsProject_ {};
        // The ID of the Log Service project.
        shared_ptr<string> storeType_ {};
      };

      virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->logConfigs_ == nullptr && this->pageSize_ == nullptr && this->totalSize_ == nullptr; };
      // currentPage Field Functions 
      bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
      void deleteCurrentPage() { this->currentPage_ = nullptr;};
      inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
      inline Data& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


      // logConfigs Field Functions 
      bool hasLogConfigs() const { return this->logConfigs_ != nullptr;};
      void deleteLogConfigs() { this->logConfigs_ = nullptr;};
      inline const vector<Data::LogConfigs> & getLogConfigs() const { DARABONBA_PTR_GET_CONST(logConfigs_, vector<Data::LogConfigs>) };
      inline vector<Data::LogConfigs> getLogConfigs() { DARABONBA_PTR_GET(logConfigs_, vector<Data::LogConfigs>) };
      inline Data& setLogConfigs(const vector<Data::LogConfigs> & logConfigs) { DARABONBA_PTR_SET_VALUE(logConfigs_, logConfigs) };
      inline Data& setLogConfigs(vector<Data::LogConfigs> && logConfigs) { DARABONBA_PTR_SET_RVALUE(logConfigs_, logConfigs) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Data& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalSize Field Functions 
      bool hasTotalSize() const { return this->totalSize_ != nullptr;};
      void deleteTotalSize() { this->totalSize_ = nullptr;};
      inline int32_t getTotalSize() const { DARABONBA_PTR_GET_DEFAULT(totalSize_, 0) };
      inline Data& setTotalSize(int32_t totalSize) { DARABONBA_PTR_SET_VALUE(totalSize_, totalSize) };


    protected:
      // The total number of returned entries.
      shared_ptr<int32_t> currentPage_ {};
      // The details of the logging configuration.
      shared_ptr<vector<Data::LogConfigs>> logConfigs_ {};
      // The error code.
      // 
      // *   The **ErrorCode** parameter is not returned when the request succeeds.
      // *   The **ErrorCode** parameter is returned when the request fails. For more information, see **Error codes** in this topic.
      shared_ptr<int32_t> pageSize_ {};
      // The number of entries returned on each page.
      shared_ptr<int32_t> totalSize_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->errorCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr
        && this->traceId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListLogConfigsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListLogConfigsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListLogConfigsResponseBody::Data) };
    inline ListLogConfigsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListLogConfigsResponseBody::Data) };
    inline ListLogConfigsResponseBody& setData(const ListLogConfigsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListLogConfigsResponseBody& setData(ListLogConfigsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListLogConfigsResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListLogConfigsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListLogConfigsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListLogConfigsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline ListLogConfigsResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    // Indicates whether the logging configurations of an application were obtained. Valid values:
    // 
    // *   **true**: indicates that the configurations were obtained.
    // *   **false**: indicates that the configurations could not be obtained.
    shared_ptr<string> code_ {};
    // The logging configurations.
    shared_ptr<ListLogConfigsResponseBody::Data> data_ {};
    // The HTTP status code. Valid values:
    // 
    // *   **2xx**: indicates that the request was successful.
    // *   **3xx**: indicates that the request was redirected.
    // *   **4xx**: indicates that the request was invalid.
    // *   **5xx**: indicates that a server error occurred.
    shared_ptr<string> errorCode_ {};
    // The ID of the trace. It can be used to query the details of a request.
    shared_ptr<string> message_ {};
    // The returned message.
    // 
    // *   **success** is returned when the request succeeds.
    // *   An error code is returned when the request fails.
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    // The logging configurations.
    shared_ptr<string> traceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
