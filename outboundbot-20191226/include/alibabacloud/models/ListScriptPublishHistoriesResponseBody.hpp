// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSCRIPTPUBLISHHISTORIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSCRIPTPUBLISHHISTORIESRESPONSEBODY_HPP_
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
  class ListScriptPublishHistoriesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListScriptPublishHistoriesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ScriptPublishHistories, scriptPublishHistories_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListScriptPublishHistoriesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ScriptPublishHistories, scriptPublishHistories_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListScriptPublishHistoriesResponseBody() = default ;
    ListScriptPublishHistoriesResponseBody(const ListScriptPublishHistoriesResponseBody &) = default ;
    ListScriptPublishHistoriesResponseBody(ListScriptPublishHistoriesResponseBody &&) = default ;
    ListScriptPublishHistoriesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListScriptPublishHistoriesResponseBody() = default ;
    ListScriptPublishHistoriesResponseBody& operator=(const ListScriptPublishHistoriesResponseBody &) = default ;
    ListScriptPublishHistoriesResponseBody& operator=(ListScriptPublishHistoriesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ScriptPublishHistories : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ScriptPublishHistories& obj) { 
        DARABONBA_PTR_TO_JSON(List, list_);
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, ScriptPublishHistories& obj) { 
        DARABONBA_PTR_FROM_JSON(List, list_);
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      ScriptPublishHistories() = default ;
      ScriptPublishHistories(const ScriptPublishHistories &) = default ;
      ScriptPublishHistories(ScriptPublishHistories &&) = default ;
      ScriptPublishHistories(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ScriptPublishHistories() = default ;
      ScriptPublishHistories& operator=(const ScriptPublishHistories &) = default ;
      ScriptPublishHistories& operator=(ScriptPublishHistories &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class List : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const List& obj) { 
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(PublishTime, publishTime_);
          DARABONBA_PTR_TO_JSON(ScriptId, scriptId_);
          DARABONBA_PTR_TO_JSON(ScriptVersion, scriptVersion_);
        };
        friend void from_json(const Darabonba::Json& j, List& obj) { 
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(PublishTime, publishTime_);
          DARABONBA_PTR_FROM_JSON(ScriptId, scriptId_);
          DARABONBA_PTR_FROM_JSON(ScriptVersion, scriptVersion_);
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
        virtual bool empty() const override { return this->description_ == nullptr
        && this->instanceId_ == nullptr && this->publishTime_ == nullptr && this->scriptId_ == nullptr && this->scriptVersion_ == nullptr; };
        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline List& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline List& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // publishTime Field Functions 
        bool hasPublishTime() const { return this->publishTime_ != nullptr;};
        void deletePublishTime() { this->publishTime_ = nullptr;};
        inline int64_t getPublishTime() const { DARABONBA_PTR_GET_DEFAULT(publishTime_, 0L) };
        inline List& setPublishTime(int64_t publishTime) { DARABONBA_PTR_SET_VALUE(publishTime_, publishTime) };


        // scriptId Field Functions 
        bool hasScriptId() const { return this->scriptId_ != nullptr;};
        void deleteScriptId() { this->scriptId_ = nullptr;};
        inline string getScriptId() const { DARABONBA_PTR_GET_DEFAULT(scriptId_, "") };
        inline List& setScriptId(string scriptId) { DARABONBA_PTR_SET_VALUE(scriptId_, scriptId) };


        // scriptVersion Field Functions 
        bool hasScriptVersion() const { return this->scriptVersion_ != nullptr;};
        void deleteScriptVersion() { this->scriptVersion_ = nullptr;};
        inline string getScriptVersion() const { DARABONBA_PTR_GET_DEFAULT(scriptVersion_, "") };
        inline List& setScriptVersion(string scriptVersion) { DARABONBA_PTR_SET_VALUE(scriptVersion_, scriptVersion) };


      protected:
        shared_ptr<string> description_ {};
        shared_ptr<string> instanceId_ {};
        shared_ptr<int64_t> publishTime_ {};
        shared_ptr<string> scriptId_ {};
        shared_ptr<string> scriptVersion_ {};
      };

      virtual bool empty() const override { return this->list_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // list Field Functions 
      bool hasList() const { return this->list_ != nullptr;};
      void deleteList() { this->list_ = nullptr;};
      inline const vector<ScriptPublishHistories::List> & getList() const { DARABONBA_PTR_GET_CONST(list_, vector<ScriptPublishHistories::List>) };
      inline vector<ScriptPublishHistories::List> getList() { DARABONBA_PTR_GET(list_, vector<ScriptPublishHistories::List>) };
      inline ScriptPublishHistories& setList(const vector<ScriptPublishHistories::List> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
      inline ScriptPublishHistories& setList(vector<ScriptPublishHistories::List> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
      inline ScriptPublishHistories& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline ScriptPublishHistories& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline ScriptPublishHistories& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      shared_ptr<vector<ScriptPublishHistories::List>> list_ {};
      shared_ptr<int32_t> pageNumber_ {};
      shared_ptr<int32_t> pageSize_ {};
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->scriptPublishHistories_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListScriptPublishHistoriesResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListScriptPublishHistoriesResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListScriptPublishHistoriesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListScriptPublishHistoriesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // scriptPublishHistories Field Functions 
    bool hasScriptPublishHistories() const { return this->scriptPublishHistories_ != nullptr;};
    void deleteScriptPublishHistories() { this->scriptPublishHistories_ = nullptr;};
    inline const ListScriptPublishHistoriesResponseBody::ScriptPublishHistories & getScriptPublishHistories() const { DARABONBA_PTR_GET_CONST(scriptPublishHistories_, ListScriptPublishHistoriesResponseBody::ScriptPublishHistories) };
    inline ListScriptPublishHistoriesResponseBody::ScriptPublishHistories getScriptPublishHistories() { DARABONBA_PTR_GET(scriptPublishHistories_, ListScriptPublishHistoriesResponseBody::ScriptPublishHistories) };
    inline ListScriptPublishHistoriesResponseBody& setScriptPublishHistories(const ListScriptPublishHistoriesResponseBody::ScriptPublishHistories & scriptPublishHistories) { DARABONBA_PTR_SET_VALUE(scriptPublishHistories_, scriptPublishHistories) };
    inline ListScriptPublishHistoriesResponseBody& setScriptPublishHistories(ListScriptPublishHistoriesResponseBody::ScriptPublishHistories && scriptPublishHistories) { DARABONBA_PTR_SET_RVALUE(scriptPublishHistories_, scriptPublishHistories) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListScriptPublishHistoriesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<ListScriptPublishHistoriesResponseBody::ScriptPublishHistories> scriptPublishHistories_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
