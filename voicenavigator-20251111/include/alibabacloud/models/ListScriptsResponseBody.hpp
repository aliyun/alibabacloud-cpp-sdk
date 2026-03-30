// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSCRIPTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSCRIPTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace VoiceNavigator20251111
{
namespace Models
{
  class ListScriptsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListScriptsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Params, params_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListScriptsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Params, params_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListScriptsResponseBody() = default ;
    ListScriptsResponseBody(const ListScriptsResponseBody &) = default ;
    ListScriptsResponseBody(ListScriptsResponseBody &&) = default ;
    ListScriptsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListScriptsResponseBody() = default ;
    ListScriptsResponseBody& operator=(const ListScriptsResponseBody &) = default ;
    ListScriptsResponseBody& operator=(ListScriptsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(Scripts, scripts_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(Scripts, scripts_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
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
      class Scripts : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Scripts& obj) { 
          DARABONBA_PTR_TO_JSON(Concurrency, concurrency_);
          DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(DraftVersionId, draftVersionId_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(NluAccessType, nluAccessType_);
          DARABONBA_PTR_TO_JSON(NluEngine, nluEngine_);
          DARABONBA_PTR_TO_JSON(Number, number_);
          DARABONBA_PTR_TO_JSON(PublishedVersionId, publishedVersionId_);
          DARABONBA_PTR_TO_JSON(ScriptId, scriptId_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(UpdatedTime, updatedTime_);
        };
        friend void from_json(const Darabonba::Json& j, Scripts& obj) { 
          DARABONBA_PTR_FROM_JSON(Concurrency, concurrency_);
          DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(DraftVersionId, draftVersionId_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(NluAccessType, nluAccessType_);
          DARABONBA_PTR_FROM_JSON(NluEngine, nluEngine_);
          DARABONBA_PTR_FROM_JSON(Number, number_);
          DARABONBA_PTR_FROM_JSON(PublishedVersionId, publishedVersionId_);
          DARABONBA_PTR_FROM_JSON(ScriptId, scriptId_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(UpdatedTime, updatedTime_);
        };
        Scripts() = default ;
        Scripts(const Scripts &) = default ;
        Scripts(Scripts &&) = default ;
        Scripts(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Scripts() = default ;
        Scripts& operator=(const Scripts &) = default ;
        Scripts& operator=(Scripts &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->concurrency_ == nullptr
        && this->createdTime_ == nullptr && this->description_ == nullptr && this->draftVersionId_ == nullptr && this->name_ == nullptr && this->nluAccessType_ == nullptr
        && this->nluEngine_ == nullptr && this->number_ == nullptr && this->publishedVersionId_ == nullptr && this->scriptId_ == nullptr && this->status_ == nullptr
        && this->updatedTime_ == nullptr; };
        // concurrency Field Functions 
        bool hasConcurrency() const { return this->concurrency_ != nullptr;};
        void deleteConcurrency() { this->concurrency_ = nullptr;};
        inline int32_t getConcurrency() const { DARABONBA_PTR_GET_DEFAULT(concurrency_, 0) };
        inline Scripts& setConcurrency(int32_t concurrency) { DARABONBA_PTR_SET_VALUE(concurrency_, concurrency) };


        // createdTime Field Functions 
        bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
        void deleteCreatedTime() { this->createdTime_ = nullptr;};
        inline int64_t getCreatedTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, 0L) };
        inline Scripts& setCreatedTime(int64_t createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline Scripts& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // draftVersionId Field Functions 
        bool hasDraftVersionId() const { return this->draftVersionId_ != nullptr;};
        void deleteDraftVersionId() { this->draftVersionId_ = nullptr;};
        inline string getDraftVersionId() const { DARABONBA_PTR_GET_DEFAULT(draftVersionId_, "") };
        inline Scripts& setDraftVersionId(string draftVersionId) { DARABONBA_PTR_SET_VALUE(draftVersionId_, draftVersionId) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Scripts& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // nluAccessType Field Functions 
        bool hasNluAccessType() const { return this->nluAccessType_ != nullptr;};
        void deleteNluAccessType() { this->nluAccessType_ = nullptr;};
        inline string getNluAccessType() const { DARABONBA_PTR_GET_DEFAULT(nluAccessType_, "") };
        inline Scripts& setNluAccessType(string nluAccessType) { DARABONBA_PTR_SET_VALUE(nluAccessType_, nluAccessType) };


        // nluEngine Field Functions 
        bool hasNluEngine() const { return this->nluEngine_ != nullptr;};
        void deleteNluEngine() { this->nluEngine_ = nullptr;};
        inline string getNluEngine() const { DARABONBA_PTR_GET_DEFAULT(nluEngine_, "") };
        inline Scripts& setNluEngine(string nluEngine) { DARABONBA_PTR_SET_VALUE(nluEngine_, nluEngine) };


        // number Field Functions 
        bool hasNumber() const { return this->number_ != nullptr;};
        void deleteNumber() { this->number_ = nullptr;};
        inline string getNumber() const { DARABONBA_PTR_GET_DEFAULT(number_, "") };
        inline Scripts& setNumber(string number) { DARABONBA_PTR_SET_VALUE(number_, number) };


        // publishedVersionId Field Functions 
        bool hasPublishedVersionId() const { return this->publishedVersionId_ != nullptr;};
        void deletePublishedVersionId() { this->publishedVersionId_ = nullptr;};
        inline string getPublishedVersionId() const { DARABONBA_PTR_GET_DEFAULT(publishedVersionId_, "") };
        inline Scripts& setPublishedVersionId(string publishedVersionId) { DARABONBA_PTR_SET_VALUE(publishedVersionId_, publishedVersionId) };


        // scriptId Field Functions 
        bool hasScriptId() const { return this->scriptId_ != nullptr;};
        void deleteScriptId() { this->scriptId_ = nullptr;};
        inline string getScriptId() const { DARABONBA_PTR_GET_DEFAULT(scriptId_, "") };
        inline Scripts& setScriptId(string scriptId) { DARABONBA_PTR_SET_VALUE(scriptId_, scriptId) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Scripts& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // updatedTime Field Functions 
        bool hasUpdatedTime() const { return this->updatedTime_ != nullptr;};
        void deleteUpdatedTime() { this->updatedTime_ = nullptr;};
        inline int64_t getUpdatedTime() const { DARABONBA_PTR_GET_DEFAULT(updatedTime_, 0L) };
        inline Scripts& setUpdatedTime(int64_t updatedTime) { DARABONBA_PTR_SET_VALUE(updatedTime_, updatedTime) };


      protected:
        shared_ptr<int32_t> concurrency_ {};
        shared_ptr<int64_t> createdTime_ {};
        shared_ptr<string> description_ {};
        shared_ptr<string> draftVersionId_ {};
        shared_ptr<string> name_ {};
        shared_ptr<string> nluAccessType_ {};
        shared_ptr<string> nluEngine_ {};
        shared_ptr<string> number_ {};
        shared_ptr<string> publishedVersionId_ {};
        shared_ptr<string> scriptId_ {};
        shared_ptr<string> status_ {};
        shared_ptr<int64_t> updatedTime_ {};
      };

      virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->scripts_ == nullptr && this->totalCount_ == nullptr; };
      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
      inline Data& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Data& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // scripts Field Functions 
      bool hasScripts() const { return this->scripts_ != nullptr;};
      void deleteScripts() { this->scripts_ = nullptr;};
      inline const vector<Data::Scripts> & getScripts() const { DARABONBA_PTR_GET_CONST(scripts_, vector<Data::Scripts>) };
      inline vector<Data::Scripts> getScripts() { DARABONBA_PTR_GET(scripts_, vector<Data::Scripts>) };
      inline Data& setScripts(const vector<Data::Scripts> & scripts) { DARABONBA_PTR_SET_VALUE(scripts_, scripts) };
      inline Data& setScripts(vector<Data::Scripts> && scripts) { DARABONBA_PTR_SET_RVALUE(scripts_, scripts) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline Data& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      shared_ptr<int32_t> pageNumber_ {};
      shared_ptr<int32_t> pageSize_ {};
      shared_ptr<vector<Data::Scripts>> scripts_ {};
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->params_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListScriptsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListScriptsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListScriptsResponseBody::Data) };
    inline ListScriptsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListScriptsResponseBody::Data) };
    inline ListScriptsResponseBody& setData(const ListScriptsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListScriptsResponseBody& setData(ListScriptsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListScriptsResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListScriptsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // params Field Functions 
    bool hasParams() const { return this->params_ != nullptr;};
    void deleteParams() { this->params_ = nullptr;};
    inline const vector<string> & getParams() const { DARABONBA_PTR_GET_CONST(params_, vector<string>) };
    inline vector<string> getParams() { DARABONBA_PTR_GET(params_, vector<string>) };
    inline ListScriptsResponseBody& setParams(const vector<string> & params) { DARABONBA_PTR_SET_VALUE(params_, params) };
    inline ListScriptsResponseBody& setParams(vector<string> && params) { DARABONBA_PTR_SET_RVALUE(params_, params) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListScriptsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<ListScriptsResponseBody::Data> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<vector<string>> params_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace VoiceNavigator20251111
#endif
