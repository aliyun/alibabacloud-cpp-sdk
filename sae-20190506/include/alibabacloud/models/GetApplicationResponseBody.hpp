// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPPLICATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAPPLICATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class GetApplicationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetApplicationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Application, application_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TraceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, GetApplicationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Application, application_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TraceId, traceId_);
    };
    GetApplicationResponseBody() = default ;
    GetApplicationResponseBody(const GetApplicationResponseBody &) = default ;
    GetApplicationResponseBody(GetApplicationResponseBody &&) = default ;
    GetApplicationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetApplicationResponseBody() = default ;
    GetApplicationResponseBody& operator=(const GetApplicationResponseBody &) = default ;
    GetApplicationResponseBody& operator=(GetApplicationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Application : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Application& obj) { 
        DARABONBA_PTR_TO_JSON(AppDescription, appDescription_);
        DARABONBA_PTR_TO_JSON(AppId, appId_);
        DARABONBA_PTR_TO_JSON(AppName, appName_);
        DARABONBA_PTR_TO_JSON(BaseAppId, baseAppId_);
        DARABONBA_PTR_TO_JSON(Cpu, cpu_);
        DARABONBA_PTR_TO_JSON(Instances, instances_);
        DARABONBA_PTR_TO_JSON(IsStateful, isStateful_);
        DARABONBA_PTR_TO_JSON(Mem, mem_);
        DARABONBA_PTR_TO_JSON(MseEnabled, mseEnabled_);
        DARABONBA_PTR_TO_JSON(MseNamespaceId, mseNamespaceId_);
        DARABONBA_PTR_TO_JSON(NamespaceId, namespaceId_);
        DARABONBA_PTR_TO_JSON(ProgrammingLanguage, programmingLanguage_);
        DARABONBA_PTR_TO_JSON(RunningInstances, runningInstances_);
        DARABONBA_PTR_TO_JSON(ScaleRuleEnabled, scaleRuleEnabled_);
        DARABONBA_PTR_TO_JSON(ScaleRuleType, scaleRuleType_);
      };
      friend void from_json(const Darabonba::Json& j, Application& obj) { 
        DARABONBA_PTR_FROM_JSON(AppDescription, appDescription_);
        DARABONBA_PTR_FROM_JSON(AppId, appId_);
        DARABONBA_PTR_FROM_JSON(AppName, appName_);
        DARABONBA_PTR_FROM_JSON(BaseAppId, baseAppId_);
        DARABONBA_PTR_FROM_JSON(Cpu, cpu_);
        DARABONBA_PTR_FROM_JSON(Instances, instances_);
        DARABONBA_PTR_FROM_JSON(IsStateful, isStateful_);
        DARABONBA_PTR_FROM_JSON(Mem, mem_);
        DARABONBA_PTR_FROM_JSON(MseEnabled, mseEnabled_);
        DARABONBA_PTR_FROM_JSON(MseNamespaceId, mseNamespaceId_);
        DARABONBA_PTR_FROM_JSON(NamespaceId, namespaceId_);
        DARABONBA_PTR_FROM_JSON(ProgrammingLanguage, programmingLanguage_);
        DARABONBA_PTR_FROM_JSON(RunningInstances, runningInstances_);
        DARABONBA_PTR_FROM_JSON(ScaleRuleEnabled, scaleRuleEnabled_);
        DARABONBA_PTR_FROM_JSON(ScaleRuleType, scaleRuleType_);
      };
      Application() = default ;
      Application(const Application &) = default ;
      Application(Application &&) = default ;
      Application(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Application() = default ;
      Application& operator=(const Application &) = default ;
      Application& operator=(Application &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->appDescription_ == nullptr
        && this->appId_ == nullptr && this->appName_ == nullptr && this->baseAppId_ == nullptr && this->cpu_ == nullptr && this->instances_ == nullptr
        && this->isStateful_ == nullptr && this->mem_ == nullptr && this->mseEnabled_ == nullptr && this->mseNamespaceId_ == nullptr && this->namespaceId_ == nullptr
        && this->programmingLanguage_ == nullptr && this->runningInstances_ == nullptr && this->scaleRuleEnabled_ == nullptr && this->scaleRuleType_ == nullptr; };
      // appDescription Field Functions 
      bool hasAppDescription() const { return this->appDescription_ != nullptr;};
      void deleteAppDescription() { this->appDescription_ = nullptr;};
      inline string getAppDescription() const { DARABONBA_PTR_GET_DEFAULT(appDescription_, "") };
      inline Application& setAppDescription(string appDescription) { DARABONBA_PTR_SET_VALUE(appDescription_, appDescription) };


      // appId Field Functions 
      bool hasAppId() const { return this->appId_ != nullptr;};
      void deleteAppId() { this->appId_ = nullptr;};
      inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
      inline Application& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


      // appName Field Functions 
      bool hasAppName() const { return this->appName_ != nullptr;};
      void deleteAppName() { this->appName_ = nullptr;};
      inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
      inline Application& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


      // baseAppId Field Functions 
      bool hasBaseAppId() const { return this->baseAppId_ != nullptr;};
      void deleteBaseAppId() { this->baseAppId_ = nullptr;};
      inline string getBaseAppId() const { DARABONBA_PTR_GET_DEFAULT(baseAppId_, "") };
      inline Application& setBaseAppId(string baseAppId) { DARABONBA_PTR_SET_VALUE(baseAppId_, baseAppId) };


      // cpu Field Functions 
      bool hasCpu() const { return this->cpu_ != nullptr;};
      void deleteCpu() { this->cpu_ = nullptr;};
      inline int32_t getCpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0) };
      inline Application& setCpu(int32_t cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


      // instances Field Functions 
      bool hasInstances() const { return this->instances_ != nullptr;};
      void deleteInstances() { this->instances_ = nullptr;};
      inline int32_t getInstances() const { DARABONBA_PTR_GET_DEFAULT(instances_, 0) };
      inline Application& setInstances(int32_t instances) { DARABONBA_PTR_SET_VALUE(instances_, instances) };


      // isStateful Field Functions 
      bool hasIsStateful() const { return this->isStateful_ != nullptr;};
      void deleteIsStateful() { this->isStateful_ = nullptr;};
      inline bool getIsStateful() const { DARABONBA_PTR_GET_DEFAULT(isStateful_, false) };
      inline Application& setIsStateful(bool isStateful) { DARABONBA_PTR_SET_VALUE(isStateful_, isStateful) };


      // mem Field Functions 
      bool hasMem() const { return this->mem_ != nullptr;};
      void deleteMem() { this->mem_ = nullptr;};
      inline int32_t getMem() const { DARABONBA_PTR_GET_DEFAULT(mem_, 0) };
      inline Application& setMem(int32_t mem) { DARABONBA_PTR_SET_VALUE(mem_, mem) };


      // mseEnabled Field Functions 
      bool hasMseEnabled() const { return this->mseEnabled_ != nullptr;};
      void deleteMseEnabled() { this->mseEnabled_ = nullptr;};
      inline bool getMseEnabled() const { DARABONBA_PTR_GET_DEFAULT(mseEnabled_, false) };
      inline Application& setMseEnabled(bool mseEnabled) { DARABONBA_PTR_SET_VALUE(mseEnabled_, mseEnabled) };


      // mseNamespaceId Field Functions 
      bool hasMseNamespaceId() const { return this->mseNamespaceId_ != nullptr;};
      void deleteMseNamespaceId() { this->mseNamespaceId_ = nullptr;};
      inline string getMseNamespaceId() const { DARABONBA_PTR_GET_DEFAULT(mseNamespaceId_, "") };
      inline Application& setMseNamespaceId(string mseNamespaceId) { DARABONBA_PTR_SET_VALUE(mseNamespaceId_, mseNamespaceId) };


      // namespaceId Field Functions 
      bool hasNamespaceId() const { return this->namespaceId_ != nullptr;};
      void deleteNamespaceId() { this->namespaceId_ = nullptr;};
      inline string getNamespaceId() const { DARABONBA_PTR_GET_DEFAULT(namespaceId_, "") };
      inline Application& setNamespaceId(string namespaceId) { DARABONBA_PTR_SET_VALUE(namespaceId_, namespaceId) };


      // programmingLanguage Field Functions 
      bool hasProgrammingLanguage() const { return this->programmingLanguage_ != nullptr;};
      void deleteProgrammingLanguage() { this->programmingLanguage_ = nullptr;};
      inline string getProgrammingLanguage() const { DARABONBA_PTR_GET_DEFAULT(programmingLanguage_, "") };
      inline Application& setProgrammingLanguage(string programmingLanguage) { DARABONBA_PTR_SET_VALUE(programmingLanguage_, programmingLanguage) };


      // runningInstances Field Functions 
      bool hasRunningInstances() const { return this->runningInstances_ != nullptr;};
      void deleteRunningInstances() { this->runningInstances_ = nullptr;};
      inline int32_t getRunningInstances() const { DARABONBA_PTR_GET_DEFAULT(runningInstances_, 0) };
      inline Application& setRunningInstances(int32_t runningInstances) { DARABONBA_PTR_SET_VALUE(runningInstances_, runningInstances) };


      // scaleRuleEnabled Field Functions 
      bool hasScaleRuleEnabled() const { return this->scaleRuleEnabled_ != nullptr;};
      void deleteScaleRuleEnabled() { this->scaleRuleEnabled_ = nullptr;};
      inline string getScaleRuleEnabled() const { DARABONBA_PTR_GET_DEFAULT(scaleRuleEnabled_, "") };
      inline Application& setScaleRuleEnabled(string scaleRuleEnabled) { DARABONBA_PTR_SET_VALUE(scaleRuleEnabled_, scaleRuleEnabled) };


      // scaleRuleType Field Functions 
      bool hasScaleRuleType() const { return this->scaleRuleType_ != nullptr;};
      void deleteScaleRuleType() { this->scaleRuleType_ = nullptr;};
      inline string getScaleRuleType() const { DARABONBA_PTR_GET_DEFAULT(scaleRuleType_, "") };
      inline Application& setScaleRuleType(string scaleRuleType) { DARABONBA_PTR_SET_VALUE(scaleRuleType_, scaleRuleType) };


    protected:
      // The application description.
      shared_ptr<string> appDescription_ {};
      // The application ID.
      shared_ptr<string> appId_ {};
      // The application name.
      shared_ptr<string> appName_ {};
      // The base application ID.
      shared_ptr<string> baseAppId_ {};
      // The CPU required for each instance, in millicores. This value cannot be 0. Valid values:
      // 
      // - **500**
      // 
      // - **1000**
      // 
      // - **2000**
      // 
      // - **4000**
      // 
      // - **8000**
      // 
      // - **12000**
      // 
      // - **16000**
      // 
      // - **32000**
      shared_ptr<int32_t> cpu_ {};
      // The total number of application instances.
      shared_ptr<int32_t> instances_ {};
      // Indicates whether the application is stateful.
      shared_ptr<bool> isStateful_ {};
      // The memory required for each instance, in MB. This value cannot be 0. The memory specification is coupled with the CPU specification. The following configurations are supported:
      // 
      // - **1024**: corresponds to 500 or 1,000 millicores of CPU.
      // 
      // - **2048**: corresponds to 500, 1,000, or 2,000 millicores of CPU.
      // 
      // - **4096**: corresponds to 1,000, 2,000, or 4,000 millicores of CPU.
      // 
      // - **8192**: corresponds to 2,000, 4,000, or 8,000 millicores of CPU.
      // 
      // - **12288**: corresponds to 12,000 millicores of CPU.
      // 
      // - **16384**: corresponds to 4,000, 8,000, or 16,000 millicores of CPU.
      // 
      // - **24576**: corresponds to 12,000 millicores of CPU.
      // 
      // - **32768**: corresponds to 16,000 millicores of CPU.
      // 
      // - **65536**: corresponds to 8,000, 16,000, or 32,000 millicores of CPU.
      // 
      // - **131072**: corresponds to 32,000 millicores of CPU.
      shared_ptr<int32_t> mem_ {};
      // Indicates whether WebAssemblyFilter is enabled. Valid values:
      // 
      // - **true**: enabled.
      // 
      // - **false**: disabled.
      shared_ptr<bool> mseEnabled_ {};
      // The namespace ID of the MSE instance.
      shared_ptr<string> mseNamespaceId_ {};
      // The namespace ID.
      shared_ptr<string> namespaceId_ {};
      // The programming language of the application. Valid values:
      // 
      // - **java**: Java.
      // 
      // - **php**: PHP.
      // 
      // - **other**: other languages, such as Python, C++, Go, .NET, and Node.js.
      shared_ptr<string> programmingLanguage_ {};
      // The number of running instances.
      shared_ptr<int32_t> runningInstances_ {};
      // Indicates whether the auto scaling policy is enabled. Valid values:
      // 
      // - **true**: The policy is enabled.
      // 
      // - **false**: The policy is disabled.
      shared_ptr<string> scaleRuleEnabled_ {};
      // The type of the auto scaling policy. Valid values:
      // 
      // - **timing**: scheduled auto scaling.
      // 
      // - **metric**: metric-based auto scaling.
      // 
      // - **mix**: hybrid auto scaling.
      shared_ptr<string> scaleRuleType_ {};
    };

    virtual bool empty() const override { return this->application_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->traceId_ == nullptr; };
    // application Field Functions 
    bool hasApplication() const { return this->application_ != nullptr;};
    void deleteApplication() { this->application_ = nullptr;};
    inline const GetApplicationResponseBody::Application & getApplication() const { DARABONBA_PTR_GET_CONST(application_, GetApplicationResponseBody::Application) };
    inline GetApplicationResponseBody::Application getApplication() { DARABONBA_PTR_GET(application_, GetApplicationResponseBody::Application) };
    inline GetApplicationResponseBody& setApplication(const GetApplicationResponseBody::Application & application) { DARABONBA_PTR_SET_VALUE(application_, application) };
    inline GetApplicationResponseBody& setApplication(GetApplicationResponseBody::Application && application) { DARABONBA_PTR_SET_RVALUE(application_, application) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetApplicationResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetApplicationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline GetApplicationResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    // The details of the application.
    shared_ptr<GetApplicationResponseBody::Application> application_ {};
    // The response message.
    // 
    // - If the request is successful, the value is **success**.
    // 
    // - If the request fails, the value is a specific error code.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The trace ID used to query the details of the request.
    shared_ptr<string> traceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
