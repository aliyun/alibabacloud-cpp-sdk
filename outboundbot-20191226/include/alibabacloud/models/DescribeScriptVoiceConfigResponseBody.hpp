// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESCRIPTVOICECONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESCRIPTVOICECONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class DescribeScriptVoiceConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeScriptVoiceConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ScriptVoiceConfig, scriptVoiceConfig_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeScriptVoiceConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ScriptVoiceConfig, scriptVoiceConfig_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeScriptVoiceConfigResponseBody() = default ;
    DescribeScriptVoiceConfigResponseBody(const DescribeScriptVoiceConfigResponseBody &) = default ;
    DescribeScriptVoiceConfigResponseBody(DescribeScriptVoiceConfigResponseBody &&) = default ;
    DescribeScriptVoiceConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeScriptVoiceConfigResponseBody() = default ;
    DescribeScriptVoiceConfigResponseBody& operator=(const DescribeScriptVoiceConfigResponseBody &) = default ;
    DescribeScriptVoiceConfigResponseBody& operator=(DescribeScriptVoiceConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ScriptVoiceConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ScriptVoiceConfig& obj) { 
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(ScriptContent, scriptContent_);
        DARABONBA_PTR_TO_JSON(ScriptId, scriptId_);
        DARABONBA_PTR_TO_JSON(ScriptVoiceConfigId, scriptVoiceConfigId_);
        DARABONBA_PTR_TO_JSON(ScriptWaveformRelation, scriptWaveformRelation_);
        DARABONBA_PTR_TO_JSON(Source, source_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, ScriptVoiceConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(ScriptContent, scriptContent_);
        DARABONBA_PTR_FROM_JSON(ScriptId, scriptId_);
        DARABONBA_PTR_FROM_JSON(ScriptVoiceConfigId, scriptVoiceConfigId_);
        DARABONBA_PTR_FROM_JSON(ScriptWaveformRelation, scriptWaveformRelation_);
        DARABONBA_PTR_FROM_JSON(Source, source_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      ScriptVoiceConfig() = default ;
      ScriptVoiceConfig(const ScriptVoiceConfig &) = default ;
      ScriptVoiceConfig(ScriptVoiceConfig &&) = default ;
      ScriptVoiceConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ScriptVoiceConfig() = default ;
      ScriptVoiceConfig& operator=(const ScriptVoiceConfig &) = default ;
      ScriptVoiceConfig& operator=(ScriptVoiceConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->scriptContent_ == nullptr && this->scriptId_ == nullptr && this->scriptVoiceConfigId_ == nullptr && this->scriptWaveformRelation_ == nullptr && this->source_ == nullptr
        && this->type_ == nullptr; };
      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline ScriptVoiceConfig& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // scriptContent Field Functions 
      bool hasScriptContent() const { return this->scriptContent_ != nullptr;};
      void deleteScriptContent() { this->scriptContent_ = nullptr;};
      inline string getScriptContent() const { DARABONBA_PTR_GET_DEFAULT(scriptContent_, "") };
      inline ScriptVoiceConfig& setScriptContent(string scriptContent) { DARABONBA_PTR_SET_VALUE(scriptContent_, scriptContent) };


      // scriptId Field Functions 
      bool hasScriptId() const { return this->scriptId_ != nullptr;};
      void deleteScriptId() { this->scriptId_ = nullptr;};
      inline string getScriptId() const { DARABONBA_PTR_GET_DEFAULT(scriptId_, "") };
      inline ScriptVoiceConfig& setScriptId(string scriptId) { DARABONBA_PTR_SET_VALUE(scriptId_, scriptId) };


      // scriptVoiceConfigId Field Functions 
      bool hasScriptVoiceConfigId() const { return this->scriptVoiceConfigId_ != nullptr;};
      void deleteScriptVoiceConfigId() { this->scriptVoiceConfigId_ = nullptr;};
      inline string getScriptVoiceConfigId() const { DARABONBA_PTR_GET_DEFAULT(scriptVoiceConfigId_, "") };
      inline ScriptVoiceConfig& setScriptVoiceConfigId(string scriptVoiceConfigId) { DARABONBA_PTR_SET_VALUE(scriptVoiceConfigId_, scriptVoiceConfigId) };


      // scriptWaveformRelation Field Functions 
      bool hasScriptWaveformRelation() const { return this->scriptWaveformRelation_ != nullptr;};
      void deleteScriptWaveformRelation() { this->scriptWaveformRelation_ = nullptr;};
      inline string getScriptWaveformRelation() const { DARABONBA_PTR_GET_DEFAULT(scriptWaveformRelation_, "") };
      inline ScriptVoiceConfig& setScriptWaveformRelation(string scriptWaveformRelation) { DARABONBA_PTR_SET_VALUE(scriptWaveformRelation_, scriptWaveformRelation) };


      // source Field Functions 
      bool hasSource() const { return this->source_ != nullptr;};
      void deleteSource() { this->source_ = nullptr;};
      inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
      inline ScriptVoiceConfig& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline ScriptVoiceConfig& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      shared_ptr<string> instanceId_ {};
      shared_ptr<string> scriptContent_ {};
      shared_ptr<string> scriptId_ {};
      shared_ptr<string> scriptVoiceConfigId_ {};
      shared_ptr<string> scriptWaveformRelation_ {};
      shared_ptr<string> source_ {};
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->scriptVoiceConfig_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeScriptVoiceConfigResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline DescribeScriptVoiceConfigResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeScriptVoiceConfigResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeScriptVoiceConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // scriptVoiceConfig Field Functions 
    bool hasScriptVoiceConfig() const { return this->scriptVoiceConfig_ != nullptr;};
    void deleteScriptVoiceConfig() { this->scriptVoiceConfig_ = nullptr;};
    inline const DescribeScriptVoiceConfigResponseBody::ScriptVoiceConfig & getScriptVoiceConfig() const { DARABONBA_PTR_GET_CONST(scriptVoiceConfig_, DescribeScriptVoiceConfigResponseBody::ScriptVoiceConfig) };
    inline DescribeScriptVoiceConfigResponseBody::ScriptVoiceConfig getScriptVoiceConfig() { DARABONBA_PTR_GET(scriptVoiceConfig_, DescribeScriptVoiceConfigResponseBody::ScriptVoiceConfig) };
    inline DescribeScriptVoiceConfigResponseBody& setScriptVoiceConfig(const DescribeScriptVoiceConfigResponseBody::ScriptVoiceConfig & scriptVoiceConfig) { DARABONBA_PTR_SET_VALUE(scriptVoiceConfig_, scriptVoiceConfig) };
    inline DescribeScriptVoiceConfigResponseBody& setScriptVoiceConfig(DescribeScriptVoiceConfigResponseBody::ScriptVoiceConfig && scriptVoiceConfig) { DARABONBA_PTR_SET_RVALUE(scriptVoiceConfig_, scriptVoiceConfig) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeScriptVoiceConfigResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<DescribeScriptVoiceConfigResponseBody::ScriptVoiceConfig> scriptVoiceConfig_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
