// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVMCOREDIAGNOSISTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETVMCOREDIAGNOSISTASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SysOM20231230
{
namespace Models
{
  class GetVmcoreDiagnosisTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVmcoreDiagnosisTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetVmcoreDiagnosisTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetVmcoreDiagnosisTaskResponseBody() = default ;
    GetVmcoreDiagnosisTaskResponseBody(const GetVmcoreDiagnosisTaskResponseBody &) = default ;
    GetVmcoreDiagnosisTaskResponseBody(GetVmcoreDiagnosisTaskResponseBody &&) = default ;
    GetVmcoreDiagnosisTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVmcoreDiagnosisTaskResponseBody() = default ;
    GetVmcoreDiagnosisTaskResponseBody& operator=(const GetVmcoreDiagnosisTaskResponseBody &) = default ;
    GetVmcoreDiagnosisTaskResponseBody& operator=(GetVmcoreDiagnosisTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(createdAt, createdAt_);
        DARABONBA_PTR_TO_JSON(diagnoseResult, diagnoseResult_);
        DARABONBA_PTR_TO_JSON(errorMsg, errorMsg_);
        DARABONBA_PTR_TO_JSON(taskId, taskId_);
        DARABONBA_PTR_TO_JSON(taskStatus, taskStatus_);
        DARABONBA_PTR_TO_JSON(taskType, taskType_);
        DARABONBA_PTR_TO_JSON(urls, urls_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(createdAt, createdAt_);
        DARABONBA_PTR_FROM_JSON(diagnoseResult, diagnoseResult_);
        DARABONBA_PTR_FROM_JSON(errorMsg, errorMsg_);
        DARABONBA_PTR_FROM_JSON(taskId, taskId_);
        DARABONBA_PTR_FROM_JSON(taskStatus, taskStatus_);
        DARABONBA_PTR_FROM_JSON(taskType, taskType_);
        DARABONBA_PTR_FROM_JSON(urls, urls_);
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
      class Urls : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Urls& obj) { 
          DARABONBA_PTR_TO_JSON(debuginfoCommonUrl, debuginfoCommonUrl_);
          DARABONBA_PTR_TO_JSON(debuginfoUrl, debuginfoUrl_);
          DARABONBA_PTR_TO_JSON(dmesgUrl, dmesgUrl_);
          DARABONBA_PTR_TO_JSON(vmcoreUrl, vmcoreUrl_);
        };
        friend void from_json(const Darabonba::Json& j, Urls& obj) { 
          DARABONBA_PTR_FROM_JSON(debuginfoCommonUrl, debuginfoCommonUrl_);
          DARABONBA_PTR_FROM_JSON(debuginfoUrl, debuginfoUrl_);
          DARABONBA_PTR_FROM_JSON(dmesgUrl, dmesgUrl_);
          DARABONBA_PTR_FROM_JSON(vmcoreUrl, vmcoreUrl_);
        };
        Urls() = default ;
        Urls(const Urls &) = default ;
        Urls(Urls &&) = default ;
        Urls(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Urls() = default ;
        Urls& operator=(const Urls &) = default ;
        Urls& operator=(Urls &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->debuginfoCommonUrl_ == nullptr
        && this->debuginfoUrl_ == nullptr && this->dmesgUrl_ == nullptr && this->vmcoreUrl_ == nullptr; };
        // debuginfoCommonUrl Field Functions 
        bool hasDebuginfoCommonUrl() const { return this->debuginfoCommonUrl_ != nullptr;};
        void deleteDebuginfoCommonUrl() { this->debuginfoCommonUrl_ = nullptr;};
        inline string getDebuginfoCommonUrl() const { DARABONBA_PTR_GET_DEFAULT(debuginfoCommonUrl_, "") };
        inline Urls& setDebuginfoCommonUrl(string debuginfoCommonUrl) { DARABONBA_PTR_SET_VALUE(debuginfoCommonUrl_, debuginfoCommonUrl) };


        // debuginfoUrl Field Functions 
        bool hasDebuginfoUrl() const { return this->debuginfoUrl_ != nullptr;};
        void deleteDebuginfoUrl() { this->debuginfoUrl_ = nullptr;};
        inline string getDebuginfoUrl() const { DARABONBA_PTR_GET_DEFAULT(debuginfoUrl_, "") };
        inline Urls& setDebuginfoUrl(string debuginfoUrl) { DARABONBA_PTR_SET_VALUE(debuginfoUrl_, debuginfoUrl) };


        // dmesgUrl Field Functions 
        bool hasDmesgUrl() const { return this->dmesgUrl_ != nullptr;};
        void deleteDmesgUrl() { this->dmesgUrl_ = nullptr;};
        inline string getDmesgUrl() const { DARABONBA_PTR_GET_DEFAULT(dmesgUrl_, "") };
        inline Urls& setDmesgUrl(string dmesgUrl) { DARABONBA_PTR_SET_VALUE(dmesgUrl_, dmesgUrl) };


        // vmcoreUrl Field Functions 
        bool hasVmcoreUrl() const { return this->vmcoreUrl_ != nullptr;};
        void deleteVmcoreUrl() { this->vmcoreUrl_ = nullptr;};
        inline string getVmcoreUrl() const { DARABONBA_PTR_GET_DEFAULT(vmcoreUrl_, "") };
        inline Urls& setVmcoreUrl(string vmcoreUrl) { DARABONBA_PTR_SET_VALUE(vmcoreUrl_, vmcoreUrl) };


      protected:
        shared_ptr<string> debuginfoCommonUrl_ {};
        shared_ptr<string> debuginfoUrl_ {};
        shared_ptr<string> dmesgUrl_ {};
        shared_ptr<string> vmcoreUrl_ {};
      };

      virtual bool empty() const override { return this->createdAt_ == nullptr
        && this->diagnoseResult_ == nullptr && this->errorMsg_ == nullptr && this->taskId_ == nullptr && this->taskStatus_ == nullptr && this->taskType_ == nullptr
        && this->urls_ == nullptr; };
      // createdAt Field Functions 
      bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
      void deleteCreatedAt() { this->createdAt_ = nullptr;};
      inline string getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
      inline Data& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


      // diagnoseResult Field Functions 
      bool hasDiagnoseResult() const { return this->diagnoseResult_ != nullptr;};
      void deleteDiagnoseResult() { this->diagnoseResult_ = nullptr;};
      inline string getDiagnoseResult() const { DARABONBA_PTR_GET_DEFAULT(diagnoseResult_, "") };
      inline Data& setDiagnoseResult(string diagnoseResult) { DARABONBA_PTR_SET_VALUE(diagnoseResult_, diagnoseResult) };


      // errorMsg Field Functions 
      bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
      void deleteErrorMsg() { this->errorMsg_ = nullptr;};
      inline string getErrorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
      inline Data& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline Data& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      // taskStatus Field Functions 
      bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
      void deleteTaskStatus() { this->taskStatus_ = nullptr;};
      inline string getTaskStatus() const { DARABONBA_PTR_GET_DEFAULT(taskStatus_, "") };
      inline Data& setTaskStatus(string taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };


      // taskType Field Functions 
      bool hasTaskType() const { return this->taskType_ != nullptr;};
      void deleteTaskType() { this->taskType_ = nullptr;};
      inline string getTaskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
      inline Data& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


      // urls Field Functions 
      bool hasUrls() const { return this->urls_ != nullptr;};
      void deleteUrls() { this->urls_ = nullptr;};
      inline const Data::Urls & getUrls() const { DARABONBA_PTR_GET_CONST(urls_, Data::Urls) };
      inline Data::Urls getUrls() { DARABONBA_PTR_GET(urls_, Data::Urls) };
      inline Data& setUrls(const Data::Urls & urls) { DARABONBA_PTR_SET_VALUE(urls_, urls) };
      inline Data& setUrls(Data::Urls && urls) { DARABONBA_PTR_SET_RVALUE(urls_, urls) };


    protected:
      shared_ptr<string> createdAt_ {};
      shared_ptr<string> diagnoseResult_ {};
      shared_ptr<string> errorMsg_ {};
      shared_ptr<string> taskId_ {};
      shared_ptr<string> taskStatus_ {};
      shared_ptr<string> taskType_ {};
      shared_ptr<Data::Urls> urls_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetVmcoreDiagnosisTaskResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetVmcoreDiagnosisTaskResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetVmcoreDiagnosisTaskResponseBody::Data) };
    inline GetVmcoreDiagnosisTaskResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetVmcoreDiagnosisTaskResponseBody::Data) };
    inline GetVmcoreDiagnosisTaskResponseBody& setData(const GetVmcoreDiagnosisTaskResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetVmcoreDiagnosisTaskResponseBody& setData(GetVmcoreDiagnosisTaskResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetVmcoreDiagnosisTaskResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetVmcoreDiagnosisTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<GetVmcoreDiagnosisTaskResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif
