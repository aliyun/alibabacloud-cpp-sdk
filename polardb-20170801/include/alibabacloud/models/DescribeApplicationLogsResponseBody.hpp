// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONLOGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONLOGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeApplicationLogsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApplicationLogsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalRecordCount, totalRecordCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApplicationLogsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalRecordCount, totalRecordCount_);
    };
    DescribeApplicationLogsResponseBody() = default ;
    DescribeApplicationLogsResponseBody(const DescribeApplicationLogsResponseBody &) = default ;
    DescribeApplicationLogsResponseBody(DescribeApplicationLogsResponseBody &&) = default ;
    DescribeApplicationLogsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApplicationLogsResponseBody() = default ;
    DescribeApplicationLogsResponseBody& operator=(const DescribeApplicationLogsResponseBody &) = default ;
    DescribeApplicationLogsResponseBody& operator=(DescribeApplicationLogsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(LogRecords, logRecords_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(LogRecords, logRecords_);
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
      class LogRecords : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const LogRecords& obj) { 
          DARABONBA_PTR_TO_JSON(ComponentName, componentName_);
          DARABONBA_PTR_TO_JSON(ContainerName, containerName_);
          DARABONBA_PTR_TO_JSON(Content, content_);
          DARABONBA_PTR_TO_JSON(Date, date_);
          DARABONBA_PTR_TO_JSON(FileLine, fileLine_);
          DARABONBA_PTR_TO_JSON(FileName, fileName_);
          DARABONBA_PTR_TO_JSON(FullFilePath, fullFilePath_);
          DARABONBA_PTR_TO_JSON(Hostname, hostname_);
          DARABONBA_PTR_TO_JSON(LogLevelId, logLevelId_);
          DARABONBA_PTR_TO_JSON(LogLevelName, logLevelName_);
          DARABONBA_PTR_TO_JSON(Method, method_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Runtime, runtime_);
          DARABONBA_PTR_TO_JSON(RuntimeVersion, runtimeVersion_);
          DARABONBA_PTR_TO_JSON(Time, time_);
        };
        friend void from_json(const Darabonba::Json& j, LogRecords& obj) { 
          DARABONBA_PTR_FROM_JSON(ComponentName, componentName_);
          DARABONBA_PTR_FROM_JSON(ContainerName, containerName_);
          DARABONBA_PTR_FROM_JSON(Content, content_);
          DARABONBA_PTR_FROM_JSON(Date, date_);
          DARABONBA_PTR_FROM_JSON(FileLine, fileLine_);
          DARABONBA_PTR_FROM_JSON(FileName, fileName_);
          DARABONBA_PTR_FROM_JSON(FullFilePath, fullFilePath_);
          DARABONBA_PTR_FROM_JSON(Hostname, hostname_);
          DARABONBA_PTR_FROM_JSON(LogLevelId, logLevelId_);
          DARABONBA_PTR_FROM_JSON(LogLevelName, logLevelName_);
          DARABONBA_PTR_FROM_JSON(Method, method_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Runtime, runtime_);
          DARABONBA_PTR_FROM_JSON(RuntimeVersion, runtimeVersion_);
          DARABONBA_PTR_FROM_JSON(Time, time_);
        };
        LogRecords() = default ;
        LogRecords(const LogRecords &) = default ;
        LogRecords(LogRecords &&) = default ;
        LogRecords(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~LogRecords() = default ;
        LogRecords& operator=(const LogRecords &) = default ;
        LogRecords& operator=(LogRecords &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->componentName_ == nullptr
        && this->containerName_ == nullptr && this->content_ == nullptr && this->date_ == nullptr && this->fileLine_ == nullptr && this->fileName_ == nullptr
        && this->fullFilePath_ == nullptr && this->hostname_ == nullptr && this->logLevelId_ == nullptr && this->logLevelName_ == nullptr && this->method_ == nullptr
        && this->name_ == nullptr && this->runtime_ == nullptr && this->runtimeVersion_ == nullptr && this->time_ == nullptr; };
        // componentName Field Functions 
        bool hasComponentName() const { return this->componentName_ != nullptr;};
        void deleteComponentName() { this->componentName_ = nullptr;};
        inline string getComponentName() const { DARABONBA_PTR_GET_DEFAULT(componentName_, "") };
        inline LogRecords& setComponentName(string componentName) { DARABONBA_PTR_SET_VALUE(componentName_, componentName) };


        // containerName Field Functions 
        bool hasContainerName() const { return this->containerName_ != nullptr;};
        void deleteContainerName() { this->containerName_ = nullptr;};
        inline string getContainerName() const { DARABONBA_PTR_GET_DEFAULT(containerName_, "") };
        inline LogRecords& setContainerName(string containerName) { DARABONBA_PTR_SET_VALUE(containerName_, containerName) };


        // content Field Functions 
        bool hasContent() const { return this->content_ != nullptr;};
        void deleteContent() { this->content_ = nullptr;};
        inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
        inline LogRecords& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


        // date Field Functions 
        bool hasDate() const { return this->date_ != nullptr;};
        void deleteDate() { this->date_ = nullptr;};
        inline string getDate() const { DARABONBA_PTR_GET_DEFAULT(date_, "") };
        inline LogRecords& setDate(string date) { DARABONBA_PTR_SET_VALUE(date_, date) };


        // fileLine Field Functions 
        bool hasFileLine() const { return this->fileLine_ != nullptr;};
        void deleteFileLine() { this->fileLine_ = nullptr;};
        inline string getFileLine() const { DARABONBA_PTR_GET_DEFAULT(fileLine_, "") };
        inline LogRecords& setFileLine(string fileLine) { DARABONBA_PTR_SET_VALUE(fileLine_, fileLine) };


        // fileName Field Functions 
        bool hasFileName() const { return this->fileName_ != nullptr;};
        void deleteFileName() { this->fileName_ = nullptr;};
        inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
        inline LogRecords& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


        // fullFilePath Field Functions 
        bool hasFullFilePath() const { return this->fullFilePath_ != nullptr;};
        void deleteFullFilePath() { this->fullFilePath_ = nullptr;};
        inline string getFullFilePath() const { DARABONBA_PTR_GET_DEFAULT(fullFilePath_, "") };
        inline LogRecords& setFullFilePath(string fullFilePath) { DARABONBA_PTR_SET_VALUE(fullFilePath_, fullFilePath) };


        // hostname Field Functions 
        bool hasHostname() const { return this->hostname_ != nullptr;};
        void deleteHostname() { this->hostname_ = nullptr;};
        inline string getHostname() const { DARABONBA_PTR_GET_DEFAULT(hostname_, "") };
        inline LogRecords& setHostname(string hostname) { DARABONBA_PTR_SET_VALUE(hostname_, hostname) };


        // logLevelId Field Functions 
        bool hasLogLevelId() const { return this->logLevelId_ != nullptr;};
        void deleteLogLevelId() { this->logLevelId_ = nullptr;};
        inline int64_t getLogLevelId() const { DARABONBA_PTR_GET_DEFAULT(logLevelId_, 0L) };
        inline LogRecords& setLogLevelId(int64_t logLevelId) { DARABONBA_PTR_SET_VALUE(logLevelId_, logLevelId) };


        // logLevelName Field Functions 
        bool hasLogLevelName() const { return this->logLevelName_ != nullptr;};
        void deleteLogLevelName() { this->logLevelName_ = nullptr;};
        inline string getLogLevelName() const { DARABONBA_PTR_GET_DEFAULT(logLevelName_, "") };
        inline LogRecords& setLogLevelName(string logLevelName) { DARABONBA_PTR_SET_VALUE(logLevelName_, logLevelName) };


        // method Field Functions 
        bool hasMethod() const { return this->method_ != nullptr;};
        void deleteMethod() { this->method_ = nullptr;};
        inline string getMethod() const { DARABONBA_PTR_GET_DEFAULT(method_, "") };
        inline LogRecords& setMethod(string method) { DARABONBA_PTR_SET_VALUE(method_, method) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline LogRecords& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // runtime Field Functions 
        bool hasRuntime() const { return this->runtime_ != nullptr;};
        void deleteRuntime() { this->runtime_ = nullptr;};
        inline string getRuntime() const { DARABONBA_PTR_GET_DEFAULT(runtime_, "") };
        inline LogRecords& setRuntime(string runtime) { DARABONBA_PTR_SET_VALUE(runtime_, runtime) };


        // runtimeVersion Field Functions 
        bool hasRuntimeVersion() const { return this->runtimeVersion_ != nullptr;};
        void deleteRuntimeVersion() { this->runtimeVersion_ = nullptr;};
        inline string getRuntimeVersion() const { DARABONBA_PTR_GET_DEFAULT(runtimeVersion_, "") };
        inline LogRecords& setRuntimeVersion(string runtimeVersion) { DARABONBA_PTR_SET_VALUE(runtimeVersion_, runtimeVersion) };


        // time Field Functions 
        bool hasTime() const { return this->time_ != nullptr;};
        void deleteTime() { this->time_ = nullptr;};
        inline string getTime() const { DARABONBA_PTR_GET_DEFAULT(time_, "") };
        inline LogRecords& setTime(string time) { DARABONBA_PTR_SET_VALUE(time_, time) };


      protected:
        shared_ptr<string> componentName_ {};
        shared_ptr<string> containerName_ {};
        shared_ptr<string> content_ {};
        shared_ptr<string> date_ {};
        shared_ptr<string> fileLine_ {};
        shared_ptr<string> fileName_ {};
        shared_ptr<string> fullFilePath_ {};
        shared_ptr<string> hostname_ {};
        shared_ptr<int64_t> logLevelId_ {};
        shared_ptr<string> logLevelName_ {};
        shared_ptr<string> method_ {};
        shared_ptr<string> name_ {};
        shared_ptr<string> runtime_ {};
        shared_ptr<string> runtimeVersion_ {};
        shared_ptr<string> time_ {};
      };

      virtual bool empty() const override { return this->logRecords_ == nullptr; };
      // logRecords Field Functions 
      bool hasLogRecords() const { return this->logRecords_ != nullptr;};
      void deleteLogRecords() { this->logRecords_ = nullptr;};
      inline const vector<Items::LogRecords> & getLogRecords() const { DARABONBA_PTR_GET_CONST(logRecords_, vector<Items::LogRecords>) };
      inline vector<Items::LogRecords> getLogRecords() { DARABONBA_PTR_GET(logRecords_, vector<Items::LogRecords>) };
      inline Items& setLogRecords(const vector<Items::LogRecords> & logRecords) { DARABONBA_PTR_SET_VALUE(logRecords_, logRecords) };
      inline Items& setLogRecords(vector<Items::LogRecords> && logRecords) { DARABONBA_PTR_SET_RVALUE(logRecords_, logRecords) };


    protected:
      shared_ptr<vector<Items::LogRecords>> logRecords_ {};
    };

    virtual bool empty() const override { return this->applicationId_ == nullptr
        && this->items_ == nullptr && this->pageNumber_ == nullptr && this->pageRecordCount_ == nullptr && this->requestId_ == nullptr && this->totalRecordCount_ == nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline DescribeApplicationLogsResponseBody& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const DescribeApplicationLogsResponseBody::Items & getItems() const { DARABONBA_PTR_GET_CONST(items_, DescribeApplicationLogsResponseBody::Items) };
    inline DescribeApplicationLogsResponseBody::Items getItems() { DARABONBA_PTR_GET(items_, DescribeApplicationLogsResponseBody::Items) };
    inline DescribeApplicationLogsResponseBody& setItems(const DescribeApplicationLogsResponseBody::Items & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeApplicationLogsResponseBody& setItems(DescribeApplicationLogsResponseBody::Items && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeApplicationLogsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageRecordCount Field Functions 
    bool hasPageRecordCount() const { return this->pageRecordCount_ != nullptr;};
    void deletePageRecordCount() { this->pageRecordCount_ = nullptr;};
    inline int32_t getPageRecordCount() const { DARABONBA_PTR_GET_DEFAULT(pageRecordCount_, 0) };
    inline DescribeApplicationLogsResponseBody& setPageRecordCount(int32_t pageRecordCount) { DARABONBA_PTR_SET_VALUE(pageRecordCount_, pageRecordCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeApplicationLogsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalRecordCount Field Functions 
    bool hasTotalRecordCount() const { return this->totalRecordCount_ != nullptr;};
    void deleteTotalRecordCount() { this->totalRecordCount_ = nullptr;};
    inline int32_t getTotalRecordCount() const { DARABONBA_PTR_GET_DEFAULT(totalRecordCount_, 0) };
    inline DescribeApplicationLogsResponseBody& setTotalRecordCount(int32_t totalRecordCount) { DARABONBA_PTR_SET_VALUE(totalRecordCount_, totalRecordCount) };


  protected:
    shared_ptr<string> applicationId_ {};
    shared_ptr<DescribeApplicationLogsResponseBody::Items> items_ {};
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageRecordCount_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalRecordCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
