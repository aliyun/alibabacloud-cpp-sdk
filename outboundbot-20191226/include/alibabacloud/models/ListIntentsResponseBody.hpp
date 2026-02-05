// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINTENTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTINTENTSRESPONSEBODY_HPP_
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
  class ListIntentsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIntentsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Intents, intents_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListIntentsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Intents, intents_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListIntentsResponseBody() = default ;
    ListIntentsResponseBody(const ListIntentsResponseBody &) = default ;
    ListIntentsResponseBody(ListIntentsResponseBody &&) = default ;
    ListIntentsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIntentsResponseBody() = default ;
    ListIntentsResponseBody& operator=(const ListIntentsResponseBody &) = default ;
    ListIntentsResponseBody& operator=(ListIntentsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Intents : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Intents& obj) { 
        DARABONBA_PTR_TO_JSON(List, list_);
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Intents& obj) { 
        DARABONBA_PTR_FROM_JSON(List, list_);
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      Intents() = default ;
      Intents(const Intents &) = default ;
      Intents(Intents &&) = default ;
      Intents(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Intents() = default ;
      Intents& operator=(const Intents &) = default ;
      Intents& operator=(Intents &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class List : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const List& obj) { 
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(IntentDescription, intentDescription_);
          DARABONBA_PTR_TO_JSON(IntentId, intentId_);
          DARABONBA_PTR_TO_JSON(IntentName, intentName_);
          DARABONBA_PTR_TO_JSON(Keywords, keywords_);
          DARABONBA_PTR_TO_JSON(ScriptId, scriptId_);
          DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
          DARABONBA_PTR_TO_JSON(Utterances, utterances_);
        };
        friend void from_json(const Darabonba::Json& j, List& obj) { 
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(IntentDescription, intentDescription_);
          DARABONBA_PTR_FROM_JSON(IntentId, intentId_);
          DARABONBA_PTR_FROM_JSON(IntentName, intentName_);
          DARABONBA_PTR_FROM_JSON(Keywords, keywords_);
          DARABONBA_PTR_FROM_JSON(ScriptId, scriptId_);
          DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
          DARABONBA_PTR_FROM_JSON(Utterances, utterances_);
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
        virtual bool empty() const override { return this->createTime_ == nullptr
        && this->intentDescription_ == nullptr && this->intentId_ == nullptr && this->intentName_ == nullptr && this->keywords_ == nullptr && this->scriptId_ == nullptr
        && this->updateTime_ == nullptr && this->utterances_ == nullptr; };
        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
        inline List& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // intentDescription Field Functions 
        bool hasIntentDescription() const { return this->intentDescription_ != nullptr;};
        void deleteIntentDescription() { this->intentDescription_ = nullptr;};
        inline string getIntentDescription() const { DARABONBA_PTR_GET_DEFAULT(intentDescription_, "") };
        inline List& setIntentDescription(string intentDescription) { DARABONBA_PTR_SET_VALUE(intentDescription_, intentDescription) };


        // intentId Field Functions 
        bool hasIntentId() const { return this->intentId_ != nullptr;};
        void deleteIntentId() { this->intentId_ = nullptr;};
        inline string getIntentId() const { DARABONBA_PTR_GET_DEFAULT(intentId_, "") };
        inline List& setIntentId(string intentId) { DARABONBA_PTR_SET_VALUE(intentId_, intentId) };


        // intentName Field Functions 
        bool hasIntentName() const { return this->intentName_ != nullptr;};
        void deleteIntentName() { this->intentName_ = nullptr;};
        inline string getIntentName() const { DARABONBA_PTR_GET_DEFAULT(intentName_, "") };
        inline List& setIntentName(string intentName) { DARABONBA_PTR_SET_VALUE(intentName_, intentName) };


        // keywords Field Functions 
        bool hasKeywords() const { return this->keywords_ != nullptr;};
        void deleteKeywords() { this->keywords_ = nullptr;};
        inline string getKeywords() const { DARABONBA_PTR_GET_DEFAULT(keywords_, "") };
        inline List& setKeywords(string keywords) { DARABONBA_PTR_SET_VALUE(keywords_, keywords) };


        // scriptId Field Functions 
        bool hasScriptId() const { return this->scriptId_ != nullptr;};
        void deleteScriptId() { this->scriptId_ = nullptr;};
        inline string getScriptId() const { DARABONBA_PTR_GET_DEFAULT(scriptId_, "") };
        inline List& setScriptId(string scriptId) { DARABONBA_PTR_SET_VALUE(scriptId_, scriptId) };


        // updateTime Field Functions 
        bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
        void deleteUpdateTime() { this->updateTime_ = nullptr;};
        inline int64_t getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
        inline List& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


        // utterances Field Functions 
        bool hasUtterances() const { return this->utterances_ != nullptr;};
        void deleteUtterances() { this->utterances_ = nullptr;};
        inline string getUtterances() const { DARABONBA_PTR_GET_DEFAULT(utterances_, "") };
        inline List& setUtterances(string utterances) { DARABONBA_PTR_SET_VALUE(utterances_, utterances) };


      protected:
        shared_ptr<int64_t> createTime_ {};
        shared_ptr<string> intentDescription_ {};
        shared_ptr<string> intentId_ {};
        shared_ptr<string> intentName_ {};
        shared_ptr<string> keywords_ {};
        shared_ptr<string> scriptId_ {};
        shared_ptr<int64_t> updateTime_ {};
        shared_ptr<string> utterances_ {};
      };

      virtual bool empty() const override { return this->list_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // list Field Functions 
      bool hasList() const { return this->list_ != nullptr;};
      void deleteList() { this->list_ = nullptr;};
      inline const vector<Intents::List> & getList() const { DARABONBA_PTR_GET_CONST(list_, vector<Intents::List>) };
      inline vector<Intents::List> getList() { DARABONBA_PTR_GET(list_, vector<Intents::List>) };
      inline Intents& setList(const vector<Intents::List> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
      inline Intents& setList(vector<Intents::List> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
      inline Intents& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Intents& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline Intents& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      shared_ptr<vector<Intents::List>> list_ {};
      shared_ptr<int32_t> pageNumber_ {};
      shared_ptr<int32_t> pageSize_ {};
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->intents_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListIntentsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListIntentsResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // intents Field Functions 
    bool hasIntents() const { return this->intents_ != nullptr;};
    void deleteIntents() { this->intents_ = nullptr;};
    inline const ListIntentsResponseBody::Intents & getIntents() const { DARABONBA_PTR_GET_CONST(intents_, ListIntentsResponseBody::Intents) };
    inline ListIntentsResponseBody::Intents getIntents() { DARABONBA_PTR_GET(intents_, ListIntentsResponseBody::Intents) };
    inline ListIntentsResponseBody& setIntents(const ListIntentsResponseBody::Intents & intents) { DARABONBA_PTR_SET_VALUE(intents_, intents) };
    inline ListIntentsResponseBody& setIntents(ListIntentsResponseBody::Intents && intents) { DARABONBA_PTR_SET_RVALUE(intents_, intents) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListIntentsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListIntentsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListIntentsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<ListIntentsResponseBody::Intents> intents_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
