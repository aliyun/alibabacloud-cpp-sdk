// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSCRIPTSBYSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYSCRIPTSBYSTATUSRESPONSEBODY_HPP_
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
  class QueryScriptsByStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryScriptsByStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Scripts, scripts_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryScriptsByStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Scripts, scripts_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryScriptsByStatusResponseBody() = default ;
    QueryScriptsByStatusResponseBody(const QueryScriptsByStatusResponseBody &) = default ;
    QueryScriptsByStatusResponseBody(QueryScriptsByStatusResponseBody &&) = default ;
    QueryScriptsByStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryScriptsByStatusResponseBody() = default ;
    QueryScriptsByStatusResponseBody& operator=(const QueryScriptsByStatusResponseBody &) = default ;
    QueryScriptsByStatusResponseBody& operator=(QueryScriptsByStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Scripts : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Scripts& obj) { 
        DARABONBA_PTR_TO_JSON(List, list_);
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Scripts& obj) { 
        DARABONBA_PTR_FROM_JSON(List, list_);
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
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
      class List : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const List& obj) { 
          DARABONBA_PTR_TO_JSON(AppliedVersion, appliedVersion_);
          DARABONBA_PTR_TO_JSON(DebugStatus, debugStatus_);
          DARABONBA_PTR_TO_JSON(DebugVersion, debugVersion_);
          DARABONBA_PTR_TO_JSON(Industry, industry_);
          DARABONBA_PTR_TO_JSON(IsDebugDrafted, isDebugDrafted_);
          DARABONBA_PTR_TO_JSON(IsDrafted, isDrafted_);
          DARABONBA_PTR_TO_JSON(Scene, scene_);
          DARABONBA_PTR_TO_JSON(ScriptDescription, scriptDescription_);
          DARABONBA_PTR_TO_JSON(ScriptId, scriptId_);
          DARABONBA_PTR_TO_JSON(ScriptName, scriptName_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
        };
        friend void from_json(const Darabonba::Json& j, List& obj) { 
          DARABONBA_PTR_FROM_JSON(AppliedVersion, appliedVersion_);
          DARABONBA_PTR_FROM_JSON(DebugStatus, debugStatus_);
          DARABONBA_PTR_FROM_JSON(DebugVersion, debugVersion_);
          DARABONBA_PTR_FROM_JSON(Industry, industry_);
          DARABONBA_PTR_FROM_JSON(IsDebugDrafted, isDebugDrafted_);
          DARABONBA_PTR_FROM_JSON(IsDrafted, isDrafted_);
          DARABONBA_PTR_FROM_JSON(Scene, scene_);
          DARABONBA_PTR_FROM_JSON(ScriptDescription, scriptDescription_);
          DARABONBA_PTR_FROM_JSON(ScriptId, scriptId_);
          DARABONBA_PTR_FROM_JSON(ScriptName, scriptName_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
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
        virtual bool empty() const override { return this->appliedVersion_ == nullptr
        && this->debugStatus_ == nullptr && this->debugVersion_ == nullptr && this->industry_ == nullptr && this->isDebugDrafted_ == nullptr && this->isDrafted_ == nullptr
        && this->scene_ == nullptr && this->scriptDescription_ == nullptr && this->scriptId_ == nullptr && this->scriptName_ == nullptr && this->status_ == nullptr
        && this->updateTime_ == nullptr; };
        // appliedVersion Field Functions 
        bool hasAppliedVersion() const { return this->appliedVersion_ != nullptr;};
        void deleteAppliedVersion() { this->appliedVersion_ = nullptr;};
        inline string getAppliedVersion() const { DARABONBA_PTR_GET_DEFAULT(appliedVersion_, "") };
        inline List& setAppliedVersion(string appliedVersion) { DARABONBA_PTR_SET_VALUE(appliedVersion_, appliedVersion) };


        // debugStatus Field Functions 
        bool hasDebugStatus() const { return this->debugStatus_ != nullptr;};
        void deleteDebugStatus() { this->debugStatus_ = nullptr;};
        inline string getDebugStatus() const { DARABONBA_PTR_GET_DEFAULT(debugStatus_, "") };
        inline List& setDebugStatus(string debugStatus) { DARABONBA_PTR_SET_VALUE(debugStatus_, debugStatus) };


        // debugVersion Field Functions 
        bool hasDebugVersion() const { return this->debugVersion_ != nullptr;};
        void deleteDebugVersion() { this->debugVersion_ = nullptr;};
        inline string getDebugVersion() const { DARABONBA_PTR_GET_DEFAULT(debugVersion_, "") };
        inline List& setDebugVersion(string debugVersion) { DARABONBA_PTR_SET_VALUE(debugVersion_, debugVersion) };


        // industry Field Functions 
        bool hasIndustry() const { return this->industry_ != nullptr;};
        void deleteIndustry() { this->industry_ = nullptr;};
        inline string getIndustry() const { DARABONBA_PTR_GET_DEFAULT(industry_, "") };
        inline List& setIndustry(string industry) { DARABONBA_PTR_SET_VALUE(industry_, industry) };


        // isDebugDrafted Field Functions 
        bool hasIsDebugDrafted() const { return this->isDebugDrafted_ != nullptr;};
        void deleteIsDebugDrafted() { this->isDebugDrafted_ = nullptr;};
        inline bool getIsDebugDrafted() const { DARABONBA_PTR_GET_DEFAULT(isDebugDrafted_, false) };
        inline List& setIsDebugDrafted(bool isDebugDrafted) { DARABONBA_PTR_SET_VALUE(isDebugDrafted_, isDebugDrafted) };


        // isDrafted Field Functions 
        bool hasIsDrafted() const { return this->isDrafted_ != nullptr;};
        void deleteIsDrafted() { this->isDrafted_ = nullptr;};
        inline bool getIsDrafted() const { DARABONBA_PTR_GET_DEFAULT(isDrafted_, false) };
        inline List& setIsDrafted(bool isDrafted) { DARABONBA_PTR_SET_VALUE(isDrafted_, isDrafted) };


        // scene Field Functions 
        bool hasScene() const { return this->scene_ != nullptr;};
        void deleteScene() { this->scene_ = nullptr;};
        inline string getScene() const { DARABONBA_PTR_GET_DEFAULT(scene_, "") };
        inline List& setScene(string scene) { DARABONBA_PTR_SET_VALUE(scene_, scene) };


        // scriptDescription Field Functions 
        bool hasScriptDescription() const { return this->scriptDescription_ != nullptr;};
        void deleteScriptDescription() { this->scriptDescription_ = nullptr;};
        inline string getScriptDescription() const { DARABONBA_PTR_GET_DEFAULT(scriptDescription_, "") };
        inline List& setScriptDescription(string scriptDescription) { DARABONBA_PTR_SET_VALUE(scriptDescription_, scriptDescription) };


        // scriptId Field Functions 
        bool hasScriptId() const { return this->scriptId_ != nullptr;};
        void deleteScriptId() { this->scriptId_ = nullptr;};
        inline string getScriptId() const { DARABONBA_PTR_GET_DEFAULT(scriptId_, "") };
        inline List& setScriptId(string scriptId) { DARABONBA_PTR_SET_VALUE(scriptId_, scriptId) };


        // scriptName Field Functions 
        bool hasScriptName() const { return this->scriptName_ != nullptr;};
        void deleteScriptName() { this->scriptName_ = nullptr;};
        inline string getScriptName() const { DARABONBA_PTR_GET_DEFAULT(scriptName_, "") };
        inline List& setScriptName(string scriptName) { DARABONBA_PTR_SET_VALUE(scriptName_, scriptName) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline List& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // updateTime Field Functions 
        bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
        void deleteUpdateTime() { this->updateTime_ = nullptr;};
        inline int64_t getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
        inline List& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


      protected:
        shared_ptr<string> appliedVersion_ {};
        shared_ptr<string> debugStatus_ {};
        shared_ptr<string> debugVersion_ {};
        shared_ptr<string> industry_ {};
        shared_ptr<bool> isDebugDrafted_ {};
        shared_ptr<bool> isDrafted_ {};
        shared_ptr<string> scene_ {};
        shared_ptr<string> scriptDescription_ {};
        shared_ptr<string> scriptId_ {};
        shared_ptr<string> scriptName_ {};
        shared_ptr<string> status_ {};
        shared_ptr<int64_t> updateTime_ {};
      };

      virtual bool empty() const override { return this->list_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // list Field Functions 
      bool hasList() const { return this->list_ != nullptr;};
      void deleteList() { this->list_ = nullptr;};
      inline const vector<Scripts::List> & getList() const { DARABONBA_PTR_GET_CONST(list_, vector<Scripts::List>) };
      inline vector<Scripts::List> getList() { DARABONBA_PTR_GET(list_, vector<Scripts::List>) };
      inline Scripts& setList(const vector<Scripts::List> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
      inline Scripts& setList(vector<Scripts::List> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
      inline Scripts& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Scripts& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline Scripts& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      shared_ptr<vector<Scripts::List>> list_ {};
      shared_ptr<int32_t> pageNumber_ {};
      shared_ptr<int32_t> pageSize_ {};
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->scripts_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QueryScriptsByStatusResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline QueryScriptsByStatusResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryScriptsByStatusResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryScriptsByStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // scripts Field Functions 
    bool hasScripts() const { return this->scripts_ != nullptr;};
    void deleteScripts() { this->scripts_ = nullptr;};
    inline const QueryScriptsByStatusResponseBody::Scripts & getScripts() const { DARABONBA_PTR_GET_CONST(scripts_, QueryScriptsByStatusResponseBody::Scripts) };
    inline QueryScriptsByStatusResponseBody::Scripts getScripts() { DARABONBA_PTR_GET(scripts_, QueryScriptsByStatusResponseBody::Scripts) };
    inline QueryScriptsByStatusResponseBody& setScripts(const QueryScriptsByStatusResponseBody::Scripts & scripts) { DARABONBA_PTR_SET_VALUE(scripts_, scripts) };
    inline QueryScriptsByStatusResponseBody& setScripts(QueryScriptsByStatusResponseBody::Scripts && scripts) { DARABONBA_PTR_SET_RVALUE(scripts_, scripts) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryScriptsByStatusResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<QueryScriptsByStatusResponseBody::Scripts> scripts_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
