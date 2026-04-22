// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INITIATEPPTCREATIONV2RESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_INITIATEPPTCREATIONV2RESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class InitiatePptCreationV2ResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InitiatePptCreationV2ResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, InitiatePptCreationV2ResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    InitiatePptCreationV2ResponseBody() = default ;
    InitiatePptCreationV2ResponseBody(const InitiatePptCreationV2ResponseBody &) = default ;
    InitiatePptCreationV2ResponseBody(InitiatePptCreationV2ResponseBody &&) = default ;
    InitiatePptCreationV2ResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InitiatePptCreationV2ResponseBody() = default ;
    InitiatePptCreationV2ResponseBody& operator=(const InitiatePptCreationV2ResponseBody &) = default ;
    InitiatePptCreationV2ResponseBody& operator=(InitiatePptCreationV2ResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AppKey, appKey_);
        DARABONBA_PTR_TO_JSON(ExportTaskId, exportTaskId_);
        DARABONBA_PTR_TO_JSON(PptArtifactCover, pptArtifactCover_);
        DARABONBA_PTR_TO_JSON(PptArtifactId, pptArtifactId_);
        DARABONBA_PTR_TO_JSON(PptProcessId, pptProcessId_);
        DARABONBA_PTR_TO_JSON(Signature, signature_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AppKey, appKey_);
        DARABONBA_PTR_FROM_JSON(ExportTaskId, exportTaskId_);
        DARABONBA_PTR_FROM_JSON(PptArtifactCover, pptArtifactCover_);
        DARABONBA_PTR_FROM_JSON(PptArtifactId, pptArtifactId_);
        DARABONBA_PTR_FROM_JSON(PptProcessId, pptProcessId_);
        DARABONBA_PTR_FROM_JSON(Signature, signature_);
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
      virtual bool empty() const override { return this->appKey_ == nullptr
        && this->exportTaskId_ == nullptr && this->pptArtifactCover_ == nullptr && this->pptArtifactId_ == nullptr && this->pptProcessId_ == nullptr && this->signature_ == nullptr; };
      // appKey Field Functions 
      bool hasAppKey() const { return this->appKey_ != nullptr;};
      void deleteAppKey() { this->appKey_ = nullptr;};
      inline string getAppKey() const { DARABONBA_PTR_GET_DEFAULT(appKey_, "") };
      inline Data& setAppKey(string appKey) { DARABONBA_PTR_SET_VALUE(appKey_, appKey) };


      // exportTaskId Field Functions 
      bool hasExportTaskId() const { return this->exportTaskId_ != nullptr;};
      void deleteExportTaskId() { this->exportTaskId_ = nullptr;};
      inline string getExportTaskId() const { DARABONBA_PTR_GET_DEFAULT(exportTaskId_, "") };
      inline Data& setExportTaskId(string exportTaskId) { DARABONBA_PTR_SET_VALUE(exportTaskId_, exportTaskId) };


      // pptArtifactCover Field Functions 
      bool hasPptArtifactCover() const { return this->pptArtifactCover_ != nullptr;};
      void deletePptArtifactCover() { this->pptArtifactCover_ = nullptr;};
      inline string getPptArtifactCover() const { DARABONBA_PTR_GET_DEFAULT(pptArtifactCover_, "") };
      inline Data& setPptArtifactCover(string pptArtifactCover) { DARABONBA_PTR_SET_VALUE(pptArtifactCover_, pptArtifactCover) };


      // pptArtifactId Field Functions 
      bool hasPptArtifactId() const { return this->pptArtifactId_ != nullptr;};
      void deletePptArtifactId() { this->pptArtifactId_ = nullptr;};
      inline string getPptArtifactId() const { DARABONBA_PTR_GET_DEFAULT(pptArtifactId_, "") };
      inline Data& setPptArtifactId(string pptArtifactId) { DARABONBA_PTR_SET_VALUE(pptArtifactId_, pptArtifactId) };


      // pptProcessId Field Functions 
      bool hasPptProcessId() const { return this->pptProcessId_ != nullptr;};
      void deletePptProcessId() { this->pptProcessId_ = nullptr;};
      inline string getPptProcessId() const { DARABONBA_PTR_GET_DEFAULT(pptProcessId_, "") };
      inline Data& setPptProcessId(string pptProcessId) { DARABONBA_PTR_SET_VALUE(pptProcessId_, pptProcessId) };


      // signature Field Functions 
      bool hasSignature() const { return this->signature_ != nullptr;};
      void deleteSignature() { this->signature_ = nullptr;};
      inline string getSignature() const { DARABONBA_PTR_GET_DEFAULT(signature_, "") };
      inline Data& setSignature(string signature) { DARABONBA_PTR_SET_VALUE(signature_, signature) };


    protected:
      shared_ptr<string> appKey_ {};
      shared_ptr<string> exportTaskId_ {};
      shared_ptr<string> pptArtifactCover_ {};
      shared_ptr<string> pptArtifactId_ {};
      shared_ptr<string> pptProcessId_ {};
      shared_ptr<string> signature_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline InitiatePptCreationV2ResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const InitiatePptCreationV2ResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, InitiatePptCreationV2ResponseBody::Data) };
    inline InitiatePptCreationV2ResponseBody::Data getData() { DARABONBA_PTR_GET(data_, InitiatePptCreationV2ResponseBody::Data) };
    inline InitiatePptCreationV2ResponseBody& setData(const InitiatePptCreationV2ResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline InitiatePptCreationV2ResponseBody& setData(InitiatePptCreationV2ResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline InitiatePptCreationV2ResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline InitiatePptCreationV2ResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline InitiatePptCreationV2ResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline InitiatePptCreationV2ResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<InitiatePptCreationV2ResponseBody::Data> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
