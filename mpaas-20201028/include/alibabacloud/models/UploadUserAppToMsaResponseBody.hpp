// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPLOADUSERAPPTOMSARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPLOADUSERAPPTOMSARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class UploadUserAppToMsaResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UploadUserAppToMsaResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_TO_JSON(ResultContent, resultContent_);
      DARABONBA_PTR_TO_JSON(ResultMessage, resultMessage_);
    };
    friend void from_json(const Darabonba::Json& j, UploadUserAppToMsaResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_FROM_JSON(ResultContent, resultContent_);
      DARABONBA_PTR_FROM_JSON(ResultMessage, resultMessage_);
    };
    UploadUserAppToMsaResponseBody() = default ;
    UploadUserAppToMsaResponseBody(const UploadUserAppToMsaResponseBody &) = default ;
    UploadUserAppToMsaResponseBody(UploadUserAppToMsaResponseBody &&) = default ;
    UploadUserAppToMsaResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UploadUserAppToMsaResponseBody() = default ;
    UploadUserAppToMsaResponseBody& operator=(const UploadUserAppToMsaResponseBody &) = default ;
    UploadUserAppToMsaResponseBody& operator=(UploadUserAppToMsaResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResultContent : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResultContent& obj) { 
        DARABONBA_PTR_TO_JSON(Code, code_);
        DARABONBA_PTR_TO_JSON(Data, data_);
        DARABONBA_PTR_TO_JSON(Extra, extra_);
        DARABONBA_PTR_TO_JSON(Message, message_);
        DARABONBA_PTR_TO_JSON(Success, success_);
      };
      friend void from_json(const Darabonba::Json& j, ResultContent& obj) { 
        DARABONBA_PTR_FROM_JSON(Code, code_);
        DARABONBA_PTR_FROM_JSON(Data, data_);
        DARABONBA_PTR_FROM_JSON(Extra, extra_);
        DARABONBA_PTR_FROM_JSON(Message, message_);
        DARABONBA_PTR_FROM_JSON(Success, success_);
      };
      ResultContent() = default ;
      ResultContent(const ResultContent &) = default ;
      ResultContent(ResultContent &&) = default ;
      ResultContent(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResultContent() = default ;
      ResultContent& operator=(const ResultContent &) = default ;
      ResultContent& operator=(ResultContent &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Data : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Data& obj) { 
          DARABONBA_PTR_TO_JSON(ApkInfo, apkInfo_);
          DARABONBA_PTR_TO_JSON(EnhanceTaskId, enhanceTaskId_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Progress, progress_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, Data& obj) { 
          DARABONBA_PTR_FROM_JSON(ApkInfo, apkInfo_);
          DARABONBA_PTR_FROM_JSON(EnhanceTaskId, enhanceTaskId_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Progress, progress_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
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
        class ApkInfo : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ApkInfo& obj) { 
            DARABONBA_PTR_TO_JSON(AfterMd5, afterMd5_);
            DARABONBA_PTR_TO_JSON(AfterSize, afterSize_);
            DARABONBA_PTR_TO_JSON(AppCode, appCode_);
            DARABONBA_PTR_TO_JSON(AppPackage, appPackage_);
            DARABONBA_PTR_TO_JSON(BeforeMd5, beforeMd5_);
            DARABONBA_PTR_TO_JSON(BeforeSize, beforeSize_);
            DARABONBA_PTR_TO_JSON(ClassForest, classForest_);
            DARABONBA_PTR_TO_JSON(EnhanceMapping, enhanceMapping_);
            DARABONBA_PTR_TO_JSON(EnhanceRules, enhanceRules_);
            DARABONBA_PTR_TO_JSON(EnhancedClasses, enhancedClasses_);
            DARABONBA_PTR_TO_JSON(Id, id_);
            DARABONBA_PTR_TO_JSON(Label, label_);
            DARABONBA_PTR_TO_JSON(Progress, progress_);
            DARABONBA_PTR_TO_JSON(Status, status_);
            DARABONBA_PTR_TO_JSON(TaskType, taskType_);
            DARABONBA_PTR_TO_JSON(VersionCode, versionCode_);
            DARABONBA_PTR_TO_JSON(VersionName, versionName_);
          };
          friend void from_json(const Darabonba::Json& j, ApkInfo& obj) { 
            DARABONBA_PTR_FROM_JSON(AfterMd5, afterMd5_);
            DARABONBA_PTR_FROM_JSON(AfterSize, afterSize_);
            DARABONBA_PTR_FROM_JSON(AppCode, appCode_);
            DARABONBA_PTR_FROM_JSON(AppPackage, appPackage_);
            DARABONBA_PTR_FROM_JSON(BeforeMd5, beforeMd5_);
            DARABONBA_PTR_FROM_JSON(BeforeSize, beforeSize_);
            DARABONBA_PTR_FROM_JSON(ClassForest, classForest_);
            DARABONBA_PTR_FROM_JSON(EnhanceMapping, enhanceMapping_);
            DARABONBA_PTR_FROM_JSON(EnhanceRules, enhanceRules_);
            DARABONBA_PTR_FROM_JSON(EnhancedClasses, enhancedClasses_);
            DARABONBA_PTR_FROM_JSON(Id, id_);
            DARABONBA_PTR_FROM_JSON(Label, label_);
            DARABONBA_PTR_FROM_JSON(Progress, progress_);
            DARABONBA_PTR_FROM_JSON(Status, status_);
            DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
            DARABONBA_PTR_FROM_JSON(VersionCode, versionCode_);
            DARABONBA_PTR_FROM_JSON(VersionName, versionName_);
          };
          ApkInfo() = default ;
          ApkInfo(const ApkInfo &) = default ;
          ApkInfo(ApkInfo &&) = default ;
          ApkInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ApkInfo() = default ;
          ApkInfo& operator=(const ApkInfo &) = default ;
          ApkInfo& operator=(ApkInfo &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class EnhanceMapping : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const EnhanceMapping& obj) { 
              DARABONBA_PTR_TO_JSON(Info, info_);
              DARABONBA_PTR_TO_JSON(Reason, reason_);
              DARABONBA_PTR_TO_JSON(Type, type_);
            };
            friend void from_json(const Darabonba::Json& j, EnhanceMapping& obj) { 
              DARABONBA_PTR_FROM_JSON(Info, info_);
              DARABONBA_PTR_FROM_JSON(Reason, reason_);
              DARABONBA_PTR_FROM_JSON(Type, type_);
            };
            EnhanceMapping() = default ;
            EnhanceMapping(const EnhanceMapping &) = default ;
            EnhanceMapping(EnhanceMapping &&) = default ;
            EnhanceMapping(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~EnhanceMapping() = default ;
            EnhanceMapping& operator=(const EnhanceMapping &) = default ;
            EnhanceMapping& operator=(EnhanceMapping &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->info_ == nullptr
        && this->reason_ == nullptr && this->type_ == nullptr; };
            // info Field Functions 
            bool hasInfo() const { return this->info_ != nullptr;};
            void deleteInfo() { this->info_ = nullptr;};
            inline string getInfo() const { DARABONBA_PTR_GET_DEFAULT(info_, "") };
            inline EnhanceMapping& setInfo(string info) { DARABONBA_PTR_SET_VALUE(info_, info) };


            // reason Field Functions 
            bool hasReason() const { return this->reason_ != nullptr;};
            void deleteReason() { this->reason_ = nullptr;};
            inline string getReason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
            inline EnhanceMapping& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


            // type Field Functions 
            bool hasType() const { return this->type_ != nullptr;};
            void deleteType() { this->type_ = nullptr;};
            inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
            inline EnhanceMapping& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


          protected:
            shared_ptr<string> info_ {};
            shared_ptr<string> reason_ {};
            shared_ptr<string> type_ {};
          };

          virtual bool empty() const override { return this->afterMd5_ == nullptr
        && this->afterSize_ == nullptr && this->appCode_ == nullptr && this->appPackage_ == nullptr && this->beforeMd5_ == nullptr && this->beforeSize_ == nullptr
        && this->classForest_ == nullptr && this->enhanceMapping_ == nullptr && this->enhanceRules_ == nullptr && this->enhancedClasses_ == nullptr && this->id_ == nullptr
        && this->label_ == nullptr && this->progress_ == nullptr && this->status_ == nullptr && this->taskType_ == nullptr && this->versionCode_ == nullptr
        && this->versionName_ == nullptr; };
          // afterMd5 Field Functions 
          bool hasAfterMd5() const { return this->afterMd5_ != nullptr;};
          void deleteAfterMd5() { this->afterMd5_ = nullptr;};
          inline string getAfterMd5() const { DARABONBA_PTR_GET_DEFAULT(afterMd5_, "") };
          inline ApkInfo& setAfterMd5(string afterMd5) { DARABONBA_PTR_SET_VALUE(afterMd5_, afterMd5) };


          // afterSize Field Functions 
          bool hasAfterSize() const { return this->afterSize_ != nullptr;};
          void deleteAfterSize() { this->afterSize_ = nullptr;};
          inline int64_t getAfterSize() const { DARABONBA_PTR_GET_DEFAULT(afterSize_, 0L) };
          inline ApkInfo& setAfterSize(int64_t afterSize) { DARABONBA_PTR_SET_VALUE(afterSize_, afterSize) };


          // appCode Field Functions 
          bool hasAppCode() const { return this->appCode_ != nullptr;};
          void deleteAppCode() { this->appCode_ = nullptr;};
          inline string getAppCode() const { DARABONBA_PTR_GET_DEFAULT(appCode_, "") };
          inline ApkInfo& setAppCode(string appCode) { DARABONBA_PTR_SET_VALUE(appCode_, appCode) };


          // appPackage Field Functions 
          bool hasAppPackage() const { return this->appPackage_ != nullptr;};
          void deleteAppPackage() { this->appPackage_ = nullptr;};
          inline string getAppPackage() const { DARABONBA_PTR_GET_DEFAULT(appPackage_, "") };
          inline ApkInfo& setAppPackage(string appPackage) { DARABONBA_PTR_SET_VALUE(appPackage_, appPackage) };


          // beforeMd5 Field Functions 
          bool hasBeforeMd5() const { return this->beforeMd5_ != nullptr;};
          void deleteBeforeMd5() { this->beforeMd5_ = nullptr;};
          inline string getBeforeMd5() const { DARABONBA_PTR_GET_DEFAULT(beforeMd5_, "") };
          inline ApkInfo& setBeforeMd5(string beforeMd5) { DARABONBA_PTR_SET_VALUE(beforeMd5_, beforeMd5) };


          // beforeSize Field Functions 
          bool hasBeforeSize() const { return this->beforeSize_ != nullptr;};
          void deleteBeforeSize() { this->beforeSize_ = nullptr;};
          inline int64_t getBeforeSize() const { DARABONBA_PTR_GET_DEFAULT(beforeSize_, 0L) };
          inline ApkInfo& setBeforeSize(int64_t beforeSize) { DARABONBA_PTR_SET_VALUE(beforeSize_, beforeSize) };


          // classForest Field Functions 
          bool hasClassForest() const { return this->classForest_ != nullptr;};
          void deleteClassForest() { this->classForest_ = nullptr;};
          inline string getClassForest() const { DARABONBA_PTR_GET_DEFAULT(classForest_, "") };
          inline ApkInfo& setClassForest(string classForest) { DARABONBA_PTR_SET_VALUE(classForest_, classForest) };


          // enhanceMapping Field Functions 
          bool hasEnhanceMapping() const { return this->enhanceMapping_ != nullptr;};
          void deleteEnhanceMapping() { this->enhanceMapping_ = nullptr;};
          inline const ApkInfo::EnhanceMapping & getEnhanceMapping() const { DARABONBA_PTR_GET_CONST(enhanceMapping_, ApkInfo::EnhanceMapping) };
          inline ApkInfo::EnhanceMapping getEnhanceMapping() { DARABONBA_PTR_GET(enhanceMapping_, ApkInfo::EnhanceMapping) };
          inline ApkInfo& setEnhanceMapping(const ApkInfo::EnhanceMapping & enhanceMapping) { DARABONBA_PTR_SET_VALUE(enhanceMapping_, enhanceMapping) };
          inline ApkInfo& setEnhanceMapping(ApkInfo::EnhanceMapping && enhanceMapping) { DARABONBA_PTR_SET_RVALUE(enhanceMapping_, enhanceMapping) };


          // enhanceRules Field Functions 
          bool hasEnhanceRules() const { return this->enhanceRules_ != nullptr;};
          void deleteEnhanceRules() { this->enhanceRules_ = nullptr;};
          inline const vector<string> & getEnhanceRules() const { DARABONBA_PTR_GET_CONST(enhanceRules_, vector<string>) };
          inline vector<string> getEnhanceRules() { DARABONBA_PTR_GET(enhanceRules_, vector<string>) };
          inline ApkInfo& setEnhanceRules(const vector<string> & enhanceRules) { DARABONBA_PTR_SET_VALUE(enhanceRules_, enhanceRules) };
          inline ApkInfo& setEnhanceRules(vector<string> && enhanceRules) { DARABONBA_PTR_SET_RVALUE(enhanceRules_, enhanceRules) };


          // enhancedClasses Field Functions 
          bool hasEnhancedClasses() const { return this->enhancedClasses_ != nullptr;};
          void deleteEnhancedClasses() { this->enhancedClasses_ = nullptr;};
          inline const vector<string> & getEnhancedClasses() const { DARABONBA_PTR_GET_CONST(enhancedClasses_, vector<string>) };
          inline vector<string> getEnhancedClasses() { DARABONBA_PTR_GET(enhancedClasses_, vector<string>) };
          inline ApkInfo& setEnhancedClasses(const vector<string> & enhancedClasses) { DARABONBA_PTR_SET_VALUE(enhancedClasses_, enhancedClasses) };
          inline ApkInfo& setEnhancedClasses(vector<string> && enhancedClasses) { DARABONBA_PTR_SET_RVALUE(enhancedClasses_, enhancedClasses) };


          // id Field Functions 
          bool hasId() const { return this->id_ != nullptr;};
          void deleteId() { this->id_ = nullptr;};
          inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
          inline ApkInfo& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


          // label Field Functions 
          bool hasLabel() const { return this->label_ != nullptr;};
          void deleteLabel() { this->label_ = nullptr;};
          inline string getLabel() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
          inline ApkInfo& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


          // progress Field Functions 
          bool hasProgress() const { return this->progress_ != nullptr;};
          void deleteProgress() { this->progress_ = nullptr;};
          inline int64_t getProgress() const { DARABONBA_PTR_GET_DEFAULT(progress_, 0L) };
          inline ApkInfo& setProgress(int64_t progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


          // status Field Functions 
          bool hasStatus() const { return this->status_ != nullptr;};
          void deleteStatus() { this->status_ = nullptr;};
          inline int64_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0L) };
          inline ApkInfo& setStatus(int64_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


          // taskType Field Functions 
          bool hasTaskType() const { return this->taskType_ != nullptr;};
          void deleteTaskType() { this->taskType_ = nullptr;};
          inline string getTaskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
          inline ApkInfo& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


          // versionCode Field Functions 
          bool hasVersionCode() const { return this->versionCode_ != nullptr;};
          void deleteVersionCode() { this->versionCode_ = nullptr;};
          inline string getVersionCode() const { DARABONBA_PTR_GET_DEFAULT(versionCode_, "") };
          inline ApkInfo& setVersionCode(string versionCode) { DARABONBA_PTR_SET_VALUE(versionCode_, versionCode) };


          // versionName Field Functions 
          bool hasVersionName() const { return this->versionName_ != nullptr;};
          void deleteVersionName() { this->versionName_ = nullptr;};
          inline string getVersionName() const { DARABONBA_PTR_GET_DEFAULT(versionName_, "") };
          inline ApkInfo& setVersionName(string versionName) { DARABONBA_PTR_SET_VALUE(versionName_, versionName) };


        protected:
          shared_ptr<string> afterMd5_ {};
          shared_ptr<int64_t> afterSize_ {};
          shared_ptr<string> appCode_ {};
          shared_ptr<string> appPackage_ {};
          shared_ptr<string> beforeMd5_ {};
          shared_ptr<int64_t> beforeSize_ {};
          shared_ptr<string> classForest_ {};
          shared_ptr<ApkInfo::EnhanceMapping> enhanceMapping_ {};
          shared_ptr<vector<string>> enhanceRules_ {};
          shared_ptr<vector<string>> enhancedClasses_ {};
          shared_ptr<int64_t> id_ {};
          shared_ptr<string> label_ {};
          shared_ptr<int64_t> progress_ {};
          shared_ptr<int64_t> status_ {};
          shared_ptr<string> taskType_ {};
          shared_ptr<string> versionCode_ {};
          shared_ptr<string> versionName_ {};
        };

        virtual bool empty() const override { return this->apkInfo_ == nullptr
        && this->enhanceTaskId_ == nullptr && this->id_ == nullptr && this->progress_ == nullptr && this->status_ == nullptr; };
        // apkInfo Field Functions 
        bool hasApkInfo() const { return this->apkInfo_ != nullptr;};
        void deleteApkInfo() { this->apkInfo_ = nullptr;};
        inline const Data::ApkInfo & getApkInfo() const { DARABONBA_PTR_GET_CONST(apkInfo_, Data::ApkInfo) };
        inline Data::ApkInfo getApkInfo() { DARABONBA_PTR_GET(apkInfo_, Data::ApkInfo) };
        inline Data& setApkInfo(const Data::ApkInfo & apkInfo) { DARABONBA_PTR_SET_VALUE(apkInfo_, apkInfo) };
        inline Data& setApkInfo(Data::ApkInfo && apkInfo) { DARABONBA_PTR_SET_RVALUE(apkInfo_, apkInfo) };


        // enhanceTaskId Field Functions 
        bool hasEnhanceTaskId() const { return this->enhanceTaskId_ != nullptr;};
        void deleteEnhanceTaskId() { this->enhanceTaskId_ = nullptr;};
        inline int64_t getEnhanceTaskId() const { DARABONBA_PTR_GET_DEFAULT(enhanceTaskId_, 0L) };
        inline Data& setEnhanceTaskId(int64_t enhanceTaskId) { DARABONBA_PTR_SET_VALUE(enhanceTaskId_, enhanceTaskId) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline Data& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // progress Field Functions 
        bool hasProgress() const { return this->progress_ != nullptr;};
        void deleteProgress() { this->progress_ = nullptr;};
        inline int64_t getProgress() const { DARABONBA_PTR_GET_DEFAULT(progress_, 0L) };
        inline Data& setProgress(int64_t progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline int64_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0L) };
        inline Data& setStatus(int64_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        shared_ptr<Data::ApkInfo> apkInfo_ {};
        shared_ptr<int64_t> enhanceTaskId_ {};
        shared_ptr<int64_t> id_ {};
        shared_ptr<int64_t> progress_ {};
        shared_ptr<int64_t> status_ {};
      };

      virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->extra_ == nullptr && this->message_ == nullptr && this->success_ == nullptr; };
      // code Field Functions 
      bool hasCode() const { return this->code_ != nullptr;};
      void deleteCode() { this->code_ = nullptr;};
      inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
      inline ResultContent& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


      // data Field Functions 
      bool hasData() const { return this->data_ != nullptr;};
      void deleteData() { this->data_ = nullptr;};
      inline const ResultContent::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ResultContent::Data) };
      inline ResultContent::Data getData() { DARABONBA_PTR_GET(data_, ResultContent::Data) };
      inline ResultContent& setData(const ResultContent::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
      inline ResultContent& setData(ResultContent::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


      // extra Field Functions 
      bool hasExtra() const { return this->extra_ != nullptr;};
      void deleteExtra() { this->extra_ = nullptr;};
      inline string getExtra() const { DARABONBA_PTR_GET_DEFAULT(extra_, "") };
      inline ResultContent& setExtra(string extra) { DARABONBA_PTR_SET_VALUE(extra_, extra) };


      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline ResultContent& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      // success Field Functions 
      bool hasSuccess() const { return this->success_ != nullptr;};
      void deleteSuccess() { this->success_ = nullptr;};
      inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
      inline ResultContent& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    protected:
      shared_ptr<string> code_ {};
      shared_ptr<ResultContent::Data> data_ {};
      shared_ptr<string> extra_ {};
      shared_ptr<string> message_ {};
      shared_ptr<bool> success_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->resultCode_ == nullptr && this->resultContent_ == nullptr && this->resultMessage_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UploadUserAppToMsaResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultCode Field Functions 
    bool hasResultCode() const { return this->resultCode_ != nullptr;};
    void deleteResultCode() { this->resultCode_ = nullptr;};
    inline string getResultCode() const { DARABONBA_PTR_GET_DEFAULT(resultCode_, "") };
    inline UploadUserAppToMsaResponseBody& setResultCode(string resultCode) { DARABONBA_PTR_SET_VALUE(resultCode_, resultCode) };


    // resultContent Field Functions 
    bool hasResultContent() const { return this->resultContent_ != nullptr;};
    void deleteResultContent() { this->resultContent_ = nullptr;};
    inline const UploadUserAppToMsaResponseBody::ResultContent & getResultContent() const { DARABONBA_PTR_GET_CONST(resultContent_, UploadUserAppToMsaResponseBody::ResultContent) };
    inline UploadUserAppToMsaResponseBody::ResultContent getResultContent() { DARABONBA_PTR_GET(resultContent_, UploadUserAppToMsaResponseBody::ResultContent) };
    inline UploadUserAppToMsaResponseBody& setResultContent(const UploadUserAppToMsaResponseBody::ResultContent & resultContent) { DARABONBA_PTR_SET_VALUE(resultContent_, resultContent) };
    inline UploadUserAppToMsaResponseBody& setResultContent(UploadUserAppToMsaResponseBody::ResultContent && resultContent) { DARABONBA_PTR_SET_RVALUE(resultContent_, resultContent) };


    // resultMessage Field Functions 
    bool hasResultMessage() const { return this->resultMessage_ != nullptr;};
    void deleteResultMessage() { this->resultMessage_ = nullptr;};
    inline string getResultMessage() const { DARABONBA_PTR_GET_DEFAULT(resultMessage_, "") };
    inline UploadUserAppToMsaResponseBody& setResultMessage(string resultMessage) { DARABONBA_PTR_SET_VALUE(resultMessage_, resultMessage) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<string> resultCode_ {};
    shared_ptr<UploadUserAppToMsaResponseBody::ResultContent> resultContent_ {};
    shared_ptr<string> resultMessage_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
