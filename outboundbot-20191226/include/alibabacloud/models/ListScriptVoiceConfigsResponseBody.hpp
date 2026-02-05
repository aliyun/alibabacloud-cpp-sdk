// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSCRIPTVOICECONFIGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSCRIPTVOICECONFIGSRESPONSEBODY_HPP_
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
  class ListScriptVoiceConfigsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListScriptVoiceConfigsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ScriptVoiceConfigs, scriptVoiceConfigs_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListScriptVoiceConfigsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ScriptVoiceConfigs, scriptVoiceConfigs_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListScriptVoiceConfigsResponseBody() = default ;
    ListScriptVoiceConfigsResponseBody(const ListScriptVoiceConfigsResponseBody &) = default ;
    ListScriptVoiceConfigsResponseBody(ListScriptVoiceConfigsResponseBody &&) = default ;
    ListScriptVoiceConfigsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListScriptVoiceConfigsResponseBody() = default ;
    ListScriptVoiceConfigsResponseBody& operator=(const ListScriptVoiceConfigsResponseBody &) = default ;
    ListScriptVoiceConfigsResponseBody& operator=(ListScriptVoiceConfigsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ScriptVoiceConfigs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ScriptVoiceConfigs& obj) { 
        DARABONBA_PTR_TO_JSON(List, list_);
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, ScriptVoiceConfigs& obj) { 
        DARABONBA_PTR_FROM_JSON(List, list_);
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      ScriptVoiceConfigs() = default ;
      ScriptVoiceConfigs(const ScriptVoiceConfigs &) = default ;
      ScriptVoiceConfigs(ScriptVoiceConfigs &&) = default ;
      ScriptVoiceConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ScriptVoiceConfigs() = default ;
      ScriptVoiceConfigs& operator=(const ScriptVoiceConfigs &) = default ;
      ScriptVoiceConfigs& operator=(ScriptVoiceConfigs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class List : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const List& obj) { 
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(ScriptContent, scriptContent_);
          DARABONBA_PTR_TO_JSON(ScriptId, scriptId_);
          DARABONBA_PTR_TO_JSON(ScriptVoiceConfigId, scriptVoiceConfigId_);
          DARABONBA_PTR_TO_JSON(ScriptWaveformRelation, scriptWaveformRelation_);
          DARABONBA_PTR_TO_JSON(Source, source_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, List& obj) { 
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(ScriptContent, scriptContent_);
          DARABONBA_PTR_FROM_JSON(ScriptId, scriptId_);
          DARABONBA_PTR_FROM_JSON(ScriptVoiceConfigId, scriptVoiceConfigId_);
          DARABONBA_PTR_FROM_JSON(ScriptWaveformRelation, scriptWaveformRelation_);
          DARABONBA_PTR_FROM_JSON(Source, source_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        List() = default ;
        List(const List &) = default ;
        List(List &&) = default ;
        List(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~List() = default ;
        List& operator=(const List &) = default ;
        List& operator=(List &&) = default ;
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
        inline List& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // scriptContent Field Functions 
        bool hasScriptContent() const { return this->scriptContent_ != nullptr;};
        void deleteScriptContent() { this->scriptContent_ = nullptr;};
        inline string getScriptContent() const { DARABONBA_PTR_GET_DEFAULT(scriptContent_, "") };
        inline List& setScriptContent(string scriptContent) { DARABONBA_PTR_SET_VALUE(scriptContent_, scriptContent) };


        // scriptId Field Functions 
        bool hasScriptId() const { return this->scriptId_ != nullptr;};
        void deleteScriptId() { this->scriptId_ = nullptr;};
        inline string getScriptId() const { DARABONBA_PTR_GET_DEFAULT(scriptId_, "") };
        inline List& setScriptId(string scriptId) { DARABONBA_PTR_SET_VALUE(scriptId_, scriptId) };


        // scriptVoiceConfigId Field Functions 
        bool hasScriptVoiceConfigId() const { return this->scriptVoiceConfigId_ != nullptr;};
        void deleteScriptVoiceConfigId() { this->scriptVoiceConfigId_ = nullptr;};
        inline string getScriptVoiceConfigId() const { DARABONBA_PTR_GET_DEFAULT(scriptVoiceConfigId_, "") };
        inline List& setScriptVoiceConfigId(string scriptVoiceConfigId) { DARABONBA_PTR_SET_VALUE(scriptVoiceConfigId_, scriptVoiceConfigId) };


        // scriptWaveformRelation Field Functions 
        bool hasScriptWaveformRelation() const { return this->scriptWaveformRelation_ != nullptr;};
        void deleteScriptWaveformRelation() { this->scriptWaveformRelation_ = nullptr;};
        inline string getScriptWaveformRelation() const { DARABONBA_PTR_GET_DEFAULT(scriptWaveformRelation_, "") };
        inline List& setScriptWaveformRelation(string scriptWaveformRelation) { DARABONBA_PTR_SET_VALUE(scriptWaveformRelation_, scriptWaveformRelation) };


        // source Field Functions 
        bool hasSource() const { return this->source_ != nullptr;};
        void deleteSource() { this->source_ = nullptr;};
        inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
        inline List& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline List& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        shared_ptr<string> instanceId_ {};
        shared_ptr<string> scriptContent_ {};
        shared_ptr<string> scriptId_ {};
        shared_ptr<string> scriptVoiceConfigId_ {};
        shared_ptr<string> scriptWaveformRelation_ {};
        shared_ptr<string> source_ {};
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->list_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // list Field Functions 
      bool hasList() const { return this->list_ != nullptr;};
      void deleteList() { this->list_ = nullptr;};
      inline const vector<ScriptVoiceConfigs::List> & getList() const { DARABONBA_PTR_GET_CONST(list_, vector<ScriptVoiceConfigs::List>) };
      inline vector<ScriptVoiceConfigs::List> getList() { DARABONBA_PTR_GET(list_, vector<ScriptVoiceConfigs::List>) };
      inline ScriptVoiceConfigs& setList(const vector<ScriptVoiceConfigs::List> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
      inline ScriptVoiceConfigs& setList(vector<ScriptVoiceConfigs::List> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
      inline ScriptVoiceConfigs& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline ScriptVoiceConfigs& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline ScriptVoiceConfigs& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      shared_ptr<vector<ScriptVoiceConfigs::List>> list_ {};
      shared_ptr<int32_t> pageNumber_ {};
      shared_ptr<int32_t> pageSize_ {};
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->scriptVoiceConfigs_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListScriptVoiceConfigsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListScriptVoiceConfigsResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListScriptVoiceConfigsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListScriptVoiceConfigsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // scriptVoiceConfigs Field Functions 
    bool hasScriptVoiceConfigs() const { return this->scriptVoiceConfigs_ != nullptr;};
    void deleteScriptVoiceConfigs() { this->scriptVoiceConfigs_ = nullptr;};
    inline const ListScriptVoiceConfigsResponseBody::ScriptVoiceConfigs & getScriptVoiceConfigs() const { DARABONBA_PTR_GET_CONST(scriptVoiceConfigs_, ListScriptVoiceConfigsResponseBody::ScriptVoiceConfigs) };
    inline ListScriptVoiceConfigsResponseBody::ScriptVoiceConfigs getScriptVoiceConfigs() { DARABONBA_PTR_GET(scriptVoiceConfigs_, ListScriptVoiceConfigsResponseBody::ScriptVoiceConfigs) };
    inline ListScriptVoiceConfigsResponseBody& setScriptVoiceConfigs(const ListScriptVoiceConfigsResponseBody::ScriptVoiceConfigs & scriptVoiceConfigs) { DARABONBA_PTR_SET_VALUE(scriptVoiceConfigs_, scriptVoiceConfigs) };
    inline ListScriptVoiceConfigsResponseBody& setScriptVoiceConfigs(ListScriptVoiceConfigsResponseBody::ScriptVoiceConfigs && scriptVoiceConfigs) { DARABONBA_PTR_SET_RVALUE(scriptVoiceConfigs_, scriptVoiceConfigs) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListScriptVoiceConfigsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<ListScriptVoiceConfigsResponseBody::ScriptVoiceConfigs> scriptVoiceConfigs_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
