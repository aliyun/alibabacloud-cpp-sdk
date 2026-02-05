// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSCRIPTWAVEFORMSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYSCRIPTWAVEFORMSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class QueryScriptWaveformsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryScriptWaveformsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ScriptWaveforms, scriptWaveforms_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryScriptWaveformsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ScriptWaveforms, scriptWaveforms_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryScriptWaveformsResponseBody() = default ;
    QueryScriptWaveformsResponseBody(const QueryScriptWaveformsResponseBody &) = default ;
    QueryScriptWaveformsResponseBody(QueryScriptWaveformsResponseBody &&) = default ;
    QueryScriptWaveformsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryScriptWaveformsResponseBody() = default ;
    QueryScriptWaveformsResponseBody& operator=(const QueryScriptWaveformsResponseBody &) = default ;
    QueryScriptWaveformsResponseBody& operator=(QueryScriptWaveformsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ScriptWaveforms : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ScriptWaveforms& obj) { 
        DARABONBA_PTR_TO_JSON(FileId, fileId_);
        DARABONBA_PTR_TO_JSON(FileName, fileName_);
        DARABONBA_PTR_TO_JSON(ScriptContent, scriptContent_);
        DARABONBA_PTR_TO_JSON(ScriptId, scriptId_);
        DARABONBA_PTR_TO_JSON(ScriptWaveformId, scriptWaveformId_);
      };
      friend void from_json(const Darabonba::Json& j, ScriptWaveforms& obj) { 
        DARABONBA_PTR_FROM_JSON(FileId, fileId_);
        DARABONBA_PTR_FROM_JSON(FileName, fileName_);
        DARABONBA_PTR_FROM_JSON(ScriptContent, scriptContent_);
        DARABONBA_PTR_FROM_JSON(ScriptId, scriptId_);
        DARABONBA_PTR_FROM_JSON(ScriptWaveformId, scriptWaveformId_);
      };
      ScriptWaveforms() = default ;
      ScriptWaveforms(const ScriptWaveforms &) = default ;
      ScriptWaveforms(ScriptWaveforms &&) = default ;
      ScriptWaveforms(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ScriptWaveforms() = default ;
      ScriptWaveforms& operator=(const ScriptWaveforms &) = default ;
      ScriptWaveforms& operator=(ScriptWaveforms &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->fileId_ == nullptr
        && this->fileName_ == nullptr && this->scriptContent_ == nullptr && this->scriptId_ == nullptr && this->scriptWaveformId_ == nullptr; };
      // fileId Field Functions 
      bool hasFileId() const { return this->fileId_ != nullptr;};
      void deleteFileId() { this->fileId_ = nullptr;};
      inline string getFileId() const { DARABONBA_PTR_GET_DEFAULT(fileId_, "") };
      inline ScriptWaveforms& setFileId(string fileId) { DARABONBA_PTR_SET_VALUE(fileId_, fileId) };


      // fileName Field Functions 
      bool hasFileName() const { return this->fileName_ != nullptr;};
      void deleteFileName() { this->fileName_ = nullptr;};
      inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
      inline ScriptWaveforms& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


      // scriptContent Field Functions 
      bool hasScriptContent() const { return this->scriptContent_ != nullptr;};
      void deleteScriptContent() { this->scriptContent_ = nullptr;};
      inline string getScriptContent() const { DARABONBA_PTR_GET_DEFAULT(scriptContent_, "") };
      inline ScriptWaveforms& setScriptContent(string scriptContent) { DARABONBA_PTR_SET_VALUE(scriptContent_, scriptContent) };


      // scriptId Field Functions 
      bool hasScriptId() const { return this->scriptId_ != nullptr;};
      void deleteScriptId() { this->scriptId_ = nullptr;};
      inline string getScriptId() const { DARABONBA_PTR_GET_DEFAULT(scriptId_, "") };
      inline ScriptWaveforms& setScriptId(string scriptId) { DARABONBA_PTR_SET_VALUE(scriptId_, scriptId) };


      // scriptWaveformId Field Functions 
      bool hasScriptWaveformId() const { return this->scriptWaveformId_ != nullptr;};
      void deleteScriptWaveformId() { this->scriptWaveformId_ = nullptr;};
      inline string getScriptWaveformId() const { DARABONBA_PTR_GET_DEFAULT(scriptWaveformId_, "") };
      inline ScriptWaveforms& setScriptWaveformId(string scriptWaveformId) { DARABONBA_PTR_SET_VALUE(scriptWaveformId_, scriptWaveformId) };


    protected:
      shared_ptr<string> fileId_ {};
      shared_ptr<string> fileName_ {};
      shared_ptr<string> scriptContent_ {};
      shared_ptr<string> scriptId_ {};
      shared_ptr<string> scriptWaveformId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->scriptWaveforms_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QueryScriptWaveformsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline QueryScriptWaveformsResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryScriptWaveformsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryScriptWaveformsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // scriptWaveforms Field Functions 
    bool hasScriptWaveforms() const { return this->scriptWaveforms_ != nullptr;};
    void deleteScriptWaveforms() { this->scriptWaveforms_ = nullptr;};
    inline const vector<QueryScriptWaveformsResponseBody::ScriptWaveforms> & getScriptWaveforms() const { DARABONBA_PTR_GET_CONST(scriptWaveforms_, vector<QueryScriptWaveformsResponseBody::ScriptWaveforms>) };
    inline vector<QueryScriptWaveformsResponseBody::ScriptWaveforms> getScriptWaveforms() { DARABONBA_PTR_GET(scriptWaveforms_, vector<QueryScriptWaveformsResponseBody::ScriptWaveforms>) };
    inline QueryScriptWaveformsResponseBody& setScriptWaveforms(const vector<QueryScriptWaveformsResponseBody::ScriptWaveforms> & scriptWaveforms) { DARABONBA_PTR_SET_VALUE(scriptWaveforms_, scriptWaveforms) };
    inline QueryScriptWaveformsResponseBody& setScriptWaveforms(vector<QueryScriptWaveformsResponseBody::ScriptWaveforms> && scriptWaveforms) { DARABONBA_PTR_SET_RVALUE(scriptWaveforms_, scriptWaveforms) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryScriptWaveformsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<QueryScriptWaveformsResponseBody::ScriptWaveforms>> scriptWaveforms_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
