// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTJOBSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTJOBSRESPONSEBODY_HPP_
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
  class ListJobsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListJobsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalSize, totalSize_);
    };
    friend void from_json(const Darabonba::Json& j, ListJobsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalSize, totalSize_);
    };
    ListJobsResponseBody() = default ;
    ListJobsResponseBody(const ListJobsResponseBody &) = default ;
    ListJobsResponseBody(ListJobsResponseBody &&) = default ;
    ListJobsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListJobsResponseBody() = default ;
    ListJobsResponseBody& operator=(const ListJobsResponseBody &) = default ;
    ListJobsResponseBody& operator=(ListJobsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Applications, applications_);
        DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalSize, totalSize_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Applications, applications_);
        DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
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
      class Applications : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Applications& obj) { 
          DARABONBA_PTR_TO_JSON(Active, active_);
          DARABONBA_PTR_TO_JSON(AppDescription, appDescription_);
          DARABONBA_PTR_TO_JSON(AppId, appId_);
          DARABONBA_PTR_TO_JSON(AppName, appName_);
          DARABONBA_PTR_TO_JSON(CompletionTime, completionTime_);
          DARABONBA_PTR_TO_JSON(Cpu, cpu_);
          DARABONBA_PTR_TO_JSON(Failed, failed_);
          DARABONBA_PTR_TO_JSON(ImageUrl, imageUrl_);
          DARABONBA_PTR_TO_JSON(LastChangeorderState, lastChangeorderState_);
          DARABONBA_PTR_TO_JSON(LastJobState, lastJobState_);
          DARABONBA_PTR_TO_JSON(LastStartTime, lastStartTime_);
          DARABONBA_PTR_TO_JSON(Mem, mem_);
          DARABONBA_PTR_TO_JSON(Message, message_);
          DARABONBA_PTR_TO_JSON(NamespaceId, namespaceId_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(Succeeded, succeeded_);
          DARABONBA_PTR_TO_JSON(Suspend, suspend_);
          DARABONBA_PTR_TO_JSON(Tags, tags_);
          DARABONBA_PTR_TO_JSON(TriggerConfig, triggerConfig_);
        };
        friend void from_json(const Darabonba::Json& j, Applications& obj) { 
          DARABONBA_PTR_FROM_JSON(Active, active_);
          DARABONBA_PTR_FROM_JSON(AppDescription, appDescription_);
          DARABONBA_PTR_FROM_JSON(AppId, appId_);
          DARABONBA_PTR_FROM_JSON(AppName, appName_);
          DARABONBA_PTR_FROM_JSON(CompletionTime, completionTime_);
          DARABONBA_PTR_FROM_JSON(Cpu, cpu_);
          DARABONBA_PTR_FROM_JSON(Failed, failed_);
          DARABONBA_PTR_FROM_JSON(ImageUrl, imageUrl_);
          DARABONBA_PTR_FROM_JSON(LastChangeorderState, lastChangeorderState_);
          DARABONBA_PTR_FROM_JSON(LastJobState, lastJobState_);
          DARABONBA_PTR_FROM_JSON(LastStartTime, lastStartTime_);
          DARABONBA_PTR_FROM_JSON(Mem, mem_);
          DARABONBA_PTR_FROM_JSON(Message, message_);
          DARABONBA_PTR_FROM_JSON(NamespaceId, namespaceId_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(Succeeded, succeeded_);
          DARABONBA_PTR_FROM_JSON(Suspend, suspend_);
          DARABONBA_PTR_FROM_JSON(Tags, tags_);
          DARABONBA_PTR_FROM_JSON(TriggerConfig, triggerConfig_);
        };
        Applications() = default ;
        Applications(const Applications &) = default ;
        Applications(Applications &&) = default ;
        Applications(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Applications() = default ;
        Applications& operator=(const Applications &) = default ;
        Applications& operator=(Applications &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Tags : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Tags& obj) { 
            DARABONBA_PTR_TO_JSON(Key, key_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, Tags& obj) { 
            DARABONBA_PTR_FROM_JSON(Key, key_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          Tags() = default ;
          Tags(const Tags &) = default ;
          Tags(Tags &&) = default ;
          Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Tags() = default ;
          Tags& operator=(const Tags &) = default ;
          Tags& operator=(Tags &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
          // key Field Functions 
          bool hasKey() const { return this->key_ != nullptr;};
          void deleteKey() { this->key_ = nullptr;};
          inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
          inline Tags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline Tags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // The tag key.
          shared_ptr<string> key_ {};
          // The tag value.
          shared_ptr<string> value_ {};
        };

        virtual bool empty() const override { return this->active_ == nullptr
        && this->appDescription_ == nullptr && this->appId_ == nullptr && this->appName_ == nullptr && this->completionTime_ == nullptr && this->cpu_ == nullptr
        && this->failed_ == nullptr && this->imageUrl_ == nullptr && this->lastChangeorderState_ == nullptr && this->lastJobState_ == nullptr && this->lastStartTime_ == nullptr
        && this->mem_ == nullptr && this->message_ == nullptr && this->namespaceId_ == nullptr && this->regionId_ == nullptr && this->succeeded_ == nullptr
        && this->suspend_ == nullptr && this->tags_ == nullptr && this->triggerConfig_ == nullptr; };
        // active Field Functions 
        bool hasActive() const { return this->active_ != nullptr;};
        void deleteActive() { this->active_ = nullptr;};
        inline int64_t getActive() const { DARABONBA_PTR_GET_DEFAULT(active_, 0L) };
        inline Applications& setActive(int64_t active) { DARABONBA_PTR_SET_VALUE(active_, active) };


        // appDescription Field Functions 
        bool hasAppDescription() const { return this->appDescription_ != nullptr;};
        void deleteAppDescription() { this->appDescription_ = nullptr;};
        inline string getAppDescription() const { DARABONBA_PTR_GET_DEFAULT(appDescription_, "") };
        inline Applications& setAppDescription(string appDescription) { DARABONBA_PTR_SET_VALUE(appDescription_, appDescription) };


        // appId Field Functions 
        bool hasAppId() const { return this->appId_ != nullptr;};
        void deleteAppId() { this->appId_ = nullptr;};
        inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
        inline Applications& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


        // appName Field Functions 
        bool hasAppName() const { return this->appName_ != nullptr;};
        void deleteAppName() { this->appName_ = nullptr;};
        inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
        inline Applications& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


        // completionTime Field Functions 
        bool hasCompletionTime() const { return this->completionTime_ != nullptr;};
        void deleteCompletionTime() { this->completionTime_ = nullptr;};
        inline int64_t getCompletionTime() const { DARABONBA_PTR_GET_DEFAULT(completionTime_, 0L) };
        inline Applications& setCompletionTime(int64_t completionTime) { DARABONBA_PTR_SET_VALUE(completionTime_, completionTime) };


        // cpu Field Functions 
        bool hasCpu() const { return this->cpu_ != nullptr;};
        void deleteCpu() { this->cpu_ = nullptr;};
        inline int32_t getCpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0) };
        inline Applications& setCpu(int32_t cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


        // failed Field Functions 
        bool hasFailed() const { return this->failed_ != nullptr;};
        void deleteFailed() { this->failed_ = nullptr;};
        inline int64_t getFailed() const { DARABONBA_PTR_GET_DEFAULT(failed_, 0L) };
        inline Applications& setFailed(int64_t failed) { DARABONBA_PTR_SET_VALUE(failed_, failed) };


        // imageUrl Field Functions 
        bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
        void deleteImageUrl() { this->imageUrl_ = nullptr;};
        inline string getImageUrl() const { DARABONBA_PTR_GET_DEFAULT(imageUrl_, "") };
        inline Applications& setImageUrl(string imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };


        // lastChangeorderState Field Functions 
        bool hasLastChangeorderState() const { return this->lastChangeorderState_ != nullptr;};
        void deleteLastChangeorderState() { this->lastChangeorderState_ = nullptr;};
        inline string getLastChangeorderState() const { DARABONBA_PTR_GET_DEFAULT(lastChangeorderState_, "") };
        inline Applications& setLastChangeorderState(string lastChangeorderState) { DARABONBA_PTR_SET_VALUE(lastChangeorderState_, lastChangeorderState) };


        // lastJobState Field Functions 
        bool hasLastJobState() const { return this->lastJobState_ != nullptr;};
        void deleteLastJobState() { this->lastJobState_ = nullptr;};
        inline string getLastJobState() const { DARABONBA_PTR_GET_DEFAULT(lastJobState_, "") };
        inline Applications& setLastJobState(string lastJobState) { DARABONBA_PTR_SET_VALUE(lastJobState_, lastJobState) };


        // lastStartTime Field Functions 
        bool hasLastStartTime() const { return this->lastStartTime_ != nullptr;};
        void deleteLastStartTime() { this->lastStartTime_ = nullptr;};
        inline int64_t getLastStartTime() const { DARABONBA_PTR_GET_DEFAULT(lastStartTime_, 0L) };
        inline Applications& setLastStartTime(int64_t lastStartTime) { DARABONBA_PTR_SET_VALUE(lastStartTime_, lastStartTime) };


        // mem Field Functions 
        bool hasMem() const { return this->mem_ != nullptr;};
        void deleteMem() { this->mem_ = nullptr;};
        inline int32_t getMem() const { DARABONBA_PTR_GET_DEFAULT(mem_, 0) };
        inline Applications& setMem(int32_t mem) { DARABONBA_PTR_SET_VALUE(mem_, mem) };


        // message Field Functions 
        bool hasMessage() const { return this->message_ != nullptr;};
        void deleteMessage() { this->message_ = nullptr;};
        inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
        inline Applications& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


        // namespaceId Field Functions 
        bool hasNamespaceId() const { return this->namespaceId_ != nullptr;};
        void deleteNamespaceId() { this->namespaceId_ = nullptr;};
        inline string getNamespaceId() const { DARABONBA_PTR_GET_DEFAULT(namespaceId_, "") };
        inline Applications& setNamespaceId(string namespaceId) { DARABONBA_PTR_SET_VALUE(namespaceId_, namespaceId) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline Applications& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // succeeded Field Functions 
        bool hasSucceeded() const { return this->succeeded_ != nullptr;};
        void deleteSucceeded() { this->succeeded_ = nullptr;};
        inline int64_t getSucceeded() const { DARABONBA_PTR_GET_DEFAULT(succeeded_, 0L) };
        inline Applications& setSucceeded(int64_t succeeded) { DARABONBA_PTR_SET_VALUE(succeeded_, succeeded) };


        // suspend Field Functions 
        bool hasSuspend() const { return this->suspend_ != nullptr;};
        void deleteSuspend() { this->suspend_ = nullptr;};
        inline bool getSuspend() const { DARABONBA_PTR_GET_DEFAULT(suspend_, false) };
        inline Applications& setSuspend(bool suspend) { DARABONBA_PTR_SET_VALUE(suspend_, suspend) };


        // tags Field Functions 
        bool hasTags() const { return this->tags_ != nullptr;};
        void deleteTags() { this->tags_ = nullptr;};
        inline const vector<Applications::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Applications::Tags>) };
        inline vector<Applications::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<Applications::Tags>) };
        inline Applications& setTags(const vector<Applications::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
        inline Applications& setTags(vector<Applications::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


        // triggerConfig Field Functions 
        bool hasTriggerConfig() const { return this->triggerConfig_ != nullptr;};
        void deleteTriggerConfig() { this->triggerConfig_ = nullptr;};
        inline string getTriggerConfig() const { DARABONBA_PTR_GET_DEFAULT(triggerConfig_, "") };
        inline Applications& setTriggerConfig(string triggerConfig) { DARABONBA_PTR_SET_VALUE(triggerConfig_, triggerConfig) };


      protected:
        // The number of running instances.
        shared_ptr<int64_t> active_ {};
        // The description of the job template.
        shared_ptr<string> appDescription_ {};
        // The ID of the job template.
        shared_ptr<string> appId_ {};
        // The name of the job template.
        shared_ptr<string> appName_ {};
        // The completion time of the last job.
        shared_ptr<int64_t> completionTime_ {};
        // The CPU required for each instance. Unit: millicores. The value cannot be 0. Currently, only the following defined specifications are supported:
        // 
        // - **500**
        // - **1000**
        // - **2000**
        // - **4000**
        // - **8000**
        // - **16000**
        // - **32000**
        shared_ptr<int32_t> cpu_ {};
        // The number of failed instances.
        shared_ptr<int64_t> failed_ {};
        // The image URL.
        shared_ptr<string> imageUrl_ {};
        // Specifies whether the last change order was executed successfully. Valid values:
        // - **0**: The change order failed.
        // - **1**: The change order succeeded.
        shared_ptr<string> lastChangeorderState_ {};
        // The running status of the last job. Valid values:
        // 
        // - **0**: not executed
        // - **1**: executed successfully
        // - **2**: execution failed
        // - **3**: executing
        shared_ptr<string> lastJobState_ {};
        // The start time of the last job.
        shared_ptr<int64_t> lastStartTime_ {};
        // The memory required for each instance. Unit: MB. The value cannot be 0. The memory has a one-to-one mapping with the CPU. Currently, only the following defined specifications are supported:
        // 
        // - **1024**: corresponds to 500 and 1000 millicores
        // - **2048**: corresponds to 500, 1000, and 2000 millicores
        // - **4096**: corresponds to 1000, 2000, and 4000 millicores
        // - **8192**: corresponds to 2000, 4000, and 8000 millicores
        // - **12288**: corresponds to 12000 millicores
        // - **16384**: corresponds to 4000, 8000, and 16000 millicores
        // - **24576**: corresponds to 12000 millicores
        // - **32768**: corresponds to 16000 millicores
        // - **65536**: corresponds to 8000, 16000, and 32000 millicores
        // - **131072**: corresponds to 32000 millicores
        shared_ptr<int32_t> mem_ {};
        // The additional information about the operation result.
        shared_ptr<string> message_ {};
        // The ID of the namespace.
        shared_ptr<string> namespaceId_ {};
        // The region ID.
        shared_ptr<string> regionId_ {};
        // The number of successful instances.
        shared_ptr<int64_t> succeeded_ {};
        // Specifies whether the job template is paused.
        shared_ptr<bool> suspend_ {};
        // The tags of the job template.
        shared_ptr<vector<Applications::Tags>> tags_ {};
        shared_ptr<string> triggerConfig_ {};
      };

      virtual bool empty() const override { return this->applications_ == nullptr
        && this->currentPage_ == nullptr && this->pageSize_ == nullptr && this->totalSize_ == nullptr; };
      // applications Field Functions 
      bool hasApplications() const { return this->applications_ != nullptr;};
      void deleteApplications() { this->applications_ = nullptr;};
      inline const vector<Data::Applications> & getApplications() const { DARABONBA_PTR_GET_CONST(applications_, vector<Data::Applications>) };
      inline vector<Data::Applications> getApplications() { DARABONBA_PTR_GET(applications_, vector<Data::Applications>) };
      inline Data& setApplications(const vector<Data::Applications> & applications) { DARABONBA_PTR_SET_VALUE(applications_, applications) };
      inline Data& setApplications(vector<Data::Applications> && applications) { DARABONBA_PTR_SET_RVALUE(applications_, applications) };


      // currentPage Field Functions 
      bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
      void deleteCurrentPage() { this->currentPage_ = nullptr;};
      inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
      inline Data& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


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
      // The list of job templates.
      shared_ptr<vector<Data::Applications>> applications_ {};
      // The current page number.
      shared_ptr<int32_t> currentPage_ {};
      // The number of entries per page.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of job templates.
      shared_ptr<int32_t> totalSize_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->currentPage_ == nullptr && this->data_ == nullptr && this->errorCode_ == nullptr && this->message_ == nullptr && this->pageSize_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr && this->totalSize_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListJobsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline ListJobsResponseBody& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListJobsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListJobsResponseBody::Data) };
    inline ListJobsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListJobsResponseBody::Data) };
    inline ListJobsResponseBody& setData(const ListJobsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListJobsResponseBody& setData(ListJobsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListJobsResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListJobsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListJobsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListJobsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListJobsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalSize Field Functions 
    bool hasTotalSize() const { return this->totalSize_ != nullptr;};
    void deleteTotalSize() { this->totalSize_ = nullptr;};
    inline int32_t getTotalSize() const { DARABONBA_PTR_GET_DEFAULT(totalSize_, 0) };
    inline ListJobsResponseBody& setTotalSize(int32_t totalSize) { DARABONBA_PTR_SET_VALUE(totalSize_, totalSize) };


  protected:
    // The HTTP status code or POP error code. Valid values:
    // 
    // - **2xx**: success
    // - **3xx**: redirection
    // - **4xx**: client error
    // - **5xx**: server error
    shared_ptr<string> code_ {};
    // The current page number.
    shared_ptr<int32_t> currentPage_ {};
    // The list of job templates.
    shared_ptr<ListJobsResponseBody::Data> data_ {};
    // The error code. Take note of the following items:
    // 
    // - If the request is successful, the **ErrorCode** parameter is not returned.
    // - If the request fails, the **ErrorCode** parameter is returned. For more information, see the **Error codes** section of this topic.
    shared_ptr<string> errorCode_ {};
    // The additional information about the operation result.
    shared_ptr<string> message_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Specifies whether the job template list was queried successfully. Valid values:
    // 
    // - **true**: The query was successful.
    // - **false**: The query failed.
    shared_ptr<bool> success_ {};
    // The total number of job templates.
    shared_ptr<int32_t> totalSize_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
