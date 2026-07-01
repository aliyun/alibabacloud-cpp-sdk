// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTBATCHTEMPLATESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTBATCHTEMPLATESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ListBatchTemplatesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListBatchTemplatesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PageResult, pageResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListBatchTemplatesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PageResult, pageResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListBatchTemplatesResponseBody() = default ;
    ListBatchTemplatesResponseBody(const ListBatchTemplatesResponseBody &) = default ;
    ListBatchTemplatesResponseBody(ListBatchTemplatesResponseBody &&) = default ;
    ListBatchTemplatesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListBatchTemplatesResponseBody() = default ;
    ListBatchTemplatesResponseBody& operator=(const ListBatchTemplatesResponseBody &) = default ;
    ListBatchTemplatesResponseBody& operator=(ListBatchTemplatesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PageResult : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PageResult& obj) { 
        DARABONBA_PTR_TO_JSON(TemplateList, templateList_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, PageResult& obj) { 
        DARABONBA_PTR_FROM_JSON(TemplateList, templateList_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      PageResult() = default ;
      PageResult(const PageResult &) = default ;
      PageResult(PageResult &&) = default ;
      PageResult(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PageResult() = default ;
      PageResult& operator=(const PageResult &) = default ;
      PageResult& operator=(PageResult &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class TemplateList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TemplateList& obj) { 
          DARABONBA_PTR_TO_JSON(Comment, comment_);
          DARABONBA_PTR_TO_JSON(Content, content_);
          DARABONBA_PTR_TO_JSON(CurrentVersion, currentVersion_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(Engine, engine_);
          DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Modifier, modifier_);
          DARABONBA_PTR_TO_JSON(ModifierId, modifierId_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(OperatorType, operatorType_);
          DARABONBA_PTR_TO_JSON(Owner, owner_);
          DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
          DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, TemplateList& obj) { 
          DARABONBA_PTR_FROM_JSON(Comment, comment_);
          DARABONBA_PTR_FROM_JSON(Content, content_);
          DARABONBA_PTR_FROM_JSON(CurrentVersion, currentVersion_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(Engine, engine_);
          DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Modifier, modifier_);
          DARABONBA_PTR_FROM_JSON(ModifierId, modifierId_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(OperatorType, operatorType_);
          DARABONBA_PTR_FROM_JSON(Owner, owner_);
          DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
          DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        TemplateList() = default ;
        TemplateList(const TemplateList &) = default ;
        TemplateList(TemplateList &&) = default ;
        TemplateList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TemplateList() = default ;
        TemplateList& operator=(const TemplateList &) = default ;
        TemplateList& operator=(TemplateList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->comment_ == nullptr
        && this->content_ == nullptr && this->currentVersion_ == nullptr && this->description_ == nullptr && this->engine_ == nullptr && this->gmtCreate_ == nullptr
        && this->gmtModified_ == nullptr && this->id_ == nullptr && this->modifier_ == nullptr && this->modifierId_ == nullptr && this->name_ == nullptr
        && this->operatorType_ == nullptr && this->owner_ == nullptr && this->ownerId_ == nullptr && this->projectId_ == nullptr && this->status_ == nullptr; };
        // comment Field Functions 
        bool hasComment() const { return this->comment_ != nullptr;};
        void deleteComment() { this->comment_ = nullptr;};
        inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
        inline TemplateList& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


        // content Field Functions 
        bool hasContent() const { return this->content_ != nullptr;};
        void deleteContent() { this->content_ = nullptr;};
        inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
        inline TemplateList& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


        // currentVersion Field Functions 
        bool hasCurrentVersion() const { return this->currentVersion_ != nullptr;};
        void deleteCurrentVersion() { this->currentVersion_ = nullptr;};
        inline int64_t getCurrentVersion() const { DARABONBA_PTR_GET_DEFAULT(currentVersion_, 0L) };
        inline TemplateList& setCurrentVersion(int64_t currentVersion) { DARABONBA_PTR_SET_VALUE(currentVersion_, currentVersion) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline TemplateList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // engine Field Functions 
        bool hasEngine() const { return this->engine_ != nullptr;};
        void deleteEngine() { this->engine_ = nullptr;};
        inline string getEngine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
        inline TemplateList& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


        // gmtCreate Field Functions 
        bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
        void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
        inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
        inline TemplateList& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


        // gmtModified Field Functions 
        bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
        void deleteGmtModified() { this->gmtModified_ = nullptr;};
        inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
        inline TemplateList& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline TemplateList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // modifier Field Functions 
        bool hasModifier() const { return this->modifier_ != nullptr;};
        void deleteModifier() { this->modifier_ = nullptr;};
        inline string getModifier() const { DARABONBA_PTR_GET_DEFAULT(modifier_, "") };
        inline TemplateList& setModifier(string modifier) { DARABONBA_PTR_SET_VALUE(modifier_, modifier) };


        // modifierId Field Functions 
        bool hasModifierId() const { return this->modifierId_ != nullptr;};
        void deleteModifierId() { this->modifierId_ = nullptr;};
        inline string getModifierId() const { DARABONBA_PTR_GET_DEFAULT(modifierId_, "") };
        inline TemplateList& setModifierId(string modifierId) { DARABONBA_PTR_SET_VALUE(modifierId_, modifierId) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline TemplateList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // operatorType Field Functions 
        bool hasOperatorType() const { return this->operatorType_ != nullptr;};
        void deleteOperatorType() { this->operatorType_ = nullptr;};
        inline int32_t getOperatorType() const { DARABONBA_PTR_GET_DEFAULT(operatorType_, 0) };
        inline TemplateList& setOperatorType(int32_t operatorType) { DARABONBA_PTR_SET_VALUE(operatorType_, operatorType) };


        // owner Field Functions 
        bool hasOwner() const { return this->owner_ != nullptr;};
        void deleteOwner() { this->owner_ = nullptr;};
        inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
        inline TemplateList& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


        // ownerId Field Functions 
        bool hasOwnerId() const { return this->ownerId_ != nullptr;};
        void deleteOwnerId() { this->ownerId_ = nullptr;};
        inline string getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
        inline TemplateList& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


        // projectId Field Functions 
        bool hasProjectId() const { return this->projectId_ != nullptr;};
        void deleteProjectId() { this->projectId_ = nullptr;};
        inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
        inline TemplateList& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline TemplateList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        // The template submission comment.
        shared_ptr<string> comment_ {};
        // The template content.
        shared_ptr<string> content_ {};
        // The current latest version.
        shared_ptr<int64_t> currentVersion_ {};
        // The template description.
        shared_ptr<string> description_ {};
        // The compute engine version. Currently supported Python versions: Python 2.7 and Python 3.7.
        shared_ptr<string> engine_ {};
        // The template creation time. Format: yyyy-MM-dd HH:mm:ss.
        shared_ptr<string> gmtCreate_ {};
        // The template update time. Format: yyyy-MM-dd HH:mm:ss.
        shared_ptr<string> gmtModified_ {};
        // The template ID, which is the same as the menu tree node ID.
        shared_ptr<int64_t> id_ {};
        // The last modifier of the template.
        shared_ptr<string> modifier_ {};
        // The ID of the last modifier of the template.
        shared_ptr<string> modifierId_ {};
        // The template name.
        shared_ptr<string> name_ {};
        // The node type. Valid values: 10 (Shell) and 21 (Python).
        shared_ptr<int32_t> operatorType_ {};
        // The template owner.
        shared_ptr<string> owner_ {};
        // The template owner ID.
        shared_ptr<string> ownerId_ {};
        // The project ID.
        shared_ptr<int64_t> projectId_ {};
        // The template status. Valid values: 0 (draft), 2 (submitted), and 100 (in development).
        shared_ptr<string> status_ {};
      };

      virtual bool empty() const override { return this->templateList_ == nullptr
        && this->totalCount_ == nullptr; };
      // templateList Field Functions 
      bool hasTemplateList() const { return this->templateList_ != nullptr;};
      void deleteTemplateList() { this->templateList_ = nullptr;};
      inline const vector<PageResult::TemplateList> & getTemplateList() const { DARABONBA_PTR_GET_CONST(templateList_, vector<PageResult::TemplateList>) };
      inline vector<PageResult::TemplateList> getTemplateList() { DARABONBA_PTR_GET(templateList_, vector<PageResult::TemplateList>) };
      inline PageResult& setTemplateList(const vector<PageResult::TemplateList> & templateList) { DARABONBA_PTR_SET_VALUE(templateList_, templateList) };
      inline PageResult& setTemplateList(vector<PageResult::TemplateList> && templateList) { DARABONBA_PTR_SET_RVALUE(templateList_, templateList) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline PageResult& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The list of template records.
      shared_ptr<vector<PageResult::TemplateList>> templateList_ {};
      // The total number of records.
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->pageResult_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListBatchTemplatesResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListBatchTemplatesResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListBatchTemplatesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pageResult Field Functions 
    bool hasPageResult() const { return this->pageResult_ != nullptr;};
    void deletePageResult() { this->pageResult_ = nullptr;};
    inline const ListBatchTemplatesResponseBody::PageResult & getPageResult() const { DARABONBA_PTR_GET_CONST(pageResult_, ListBatchTemplatesResponseBody::PageResult) };
    inline ListBatchTemplatesResponseBody::PageResult getPageResult() { DARABONBA_PTR_GET(pageResult_, ListBatchTemplatesResponseBody::PageResult) };
    inline ListBatchTemplatesResponseBody& setPageResult(const ListBatchTemplatesResponseBody::PageResult & pageResult) { DARABONBA_PTR_SET_VALUE(pageResult_, pageResult) };
    inline ListBatchTemplatesResponseBody& setPageResult(ListBatchTemplatesResponseBody::PageResult && pageResult) { DARABONBA_PTR_SET_RVALUE(pageResult_, pageResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListBatchTemplatesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListBatchTemplatesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The backend response code.
    shared_ptr<string> code_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The backend exception details.
    shared_ptr<string> message_ {};
    // The paged query result.
    shared_ptr<ListBatchTemplatesResponseBody::PageResult> pageResult_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
