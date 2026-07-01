// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETBATCHTEMPLATEVERSIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETBATCHTEMPLATEVERSIONSRESPONSEBODY_HPP_
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
  class GetBatchTemplateVersionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetBatchTemplateVersionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetBatchTemplateVersionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetBatchTemplateVersionsResponseBody() = default ;
    GetBatchTemplateVersionsResponseBody(const GetBatchTemplateVersionsResponseBody &) = default ;
    GetBatchTemplateVersionsResponseBody(GetBatchTemplateVersionsResponseBody &&) = default ;
    GetBatchTemplateVersionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetBatchTemplateVersionsResponseBody() = default ;
    GetBatchTemplateVersionsResponseBody& operator=(const GetBatchTemplateVersionsResponseBody &) = default ;
    GetBatchTemplateVersionsResponseBody& operator=(GetBatchTemplateVersionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(TemplateVersionList, templateVersionList_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(TemplateVersionList, templateVersionList_);
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
      class TemplateVersionList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TemplateVersionList& obj) { 
          DARABONBA_PTR_TO_JSON(Comment, comment_);
          DARABONBA_PTR_TO_JSON(Content, content_);
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
          DARABONBA_PTR_TO_JSON(Version, version_);
        };
        friend void from_json(const Darabonba::Json& j, TemplateVersionList& obj) { 
          DARABONBA_PTR_FROM_JSON(Comment, comment_);
          DARABONBA_PTR_FROM_JSON(Content, content_);
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
          DARABONBA_PTR_FROM_JSON(Version, version_);
        };
        TemplateVersionList() = default ;
        TemplateVersionList(const TemplateVersionList &) = default ;
        TemplateVersionList(TemplateVersionList &&) = default ;
        TemplateVersionList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TemplateVersionList() = default ;
        TemplateVersionList& operator=(const TemplateVersionList &) = default ;
        TemplateVersionList& operator=(TemplateVersionList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->comment_ == nullptr
        && this->content_ == nullptr && this->description_ == nullptr && this->engine_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr
        && this->id_ == nullptr && this->modifier_ == nullptr && this->modifierId_ == nullptr && this->name_ == nullptr && this->operatorType_ == nullptr
        && this->owner_ == nullptr && this->ownerId_ == nullptr && this->projectId_ == nullptr && this->status_ == nullptr && this->version_ == nullptr; };
        // comment Field Functions 
        bool hasComment() const { return this->comment_ != nullptr;};
        void deleteComment() { this->comment_ = nullptr;};
        inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
        inline TemplateVersionList& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


        // content Field Functions 
        bool hasContent() const { return this->content_ != nullptr;};
        void deleteContent() { this->content_ = nullptr;};
        inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
        inline TemplateVersionList& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline TemplateVersionList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // engine Field Functions 
        bool hasEngine() const { return this->engine_ != nullptr;};
        void deleteEngine() { this->engine_ = nullptr;};
        inline string getEngine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
        inline TemplateVersionList& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


        // gmtCreate Field Functions 
        bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
        void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
        inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
        inline TemplateVersionList& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


        // gmtModified Field Functions 
        bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
        void deleteGmtModified() { this->gmtModified_ = nullptr;};
        inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
        inline TemplateVersionList& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline TemplateVersionList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // modifier Field Functions 
        bool hasModifier() const { return this->modifier_ != nullptr;};
        void deleteModifier() { this->modifier_ = nullptr;};
        inline string getModifier() const { DARABONBA_PTR_GET_DEFAULT(modifier_, "") };
        inline TemplateVersionList& setModifier(string modifier) { DARABONBA_PTR_SET_VALUE(modifier_, modifier) };


        // modifierId Field Functions 
        bool hasModifierId() const { return this->modifierId_ != nullptr;};
        void deleteModifierId() { this->modifierId_ = nullptr;};
        inline string getModifierId() const { DARABONBA_PTR_GET_DEFAULT(modifierId_, "") };
        inline TemplateVersionList& setModifierId(string modifierId) { DARABONBA_PTR_SET_VALUE(modifierId_, modifierId) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline TemplateVersionList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // operatorType Field Functions 
        bool hasOperatorType() const { return this->operatorType_ != nullptr;};
        void deleteOperatorType() { this->operatorType_ = nullptr;};
        inline int32_t getOperatorType() const { DARABONBA_PTR_GET_DEFAULT(operatorType_, 0) };
        inline TemplateVersionList& setOperatorType(int32_t operatorType) { DARABONBA_PTR_SET_VALUE(operatorType_, operatorType) };


        // owner Field Functions 
        bool hasOwner() const { return this->owner_ != nullptr;};
        void deleteOwner() { this->owner_ = nullptr;};
        inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
        inline TemplateVersionList& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


        // ownerId Field Functions 
        bool hasOwnerId() const { return this->ownerId_ != nullptr;};
        void deleteOwnerId() { this->ownerId_ = nullptr;};
        inline string getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
        inline TemplateVersionList& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


        // projectId Field Functions 
        bool hasProjectId() const { return this->projectId_ != nullptr;};
        void deleteProjectId() { this->projectId_ = nullptr;};
        inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
        inline TemplateVersionList& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline TemplateVersionList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // version Field Functions 
        bool hasVersion() const { return this->version_ != nullptr;};
        void deleteVersion() { this->version_ = nullptr;};
        inline int64_t getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, 0L) };
        inline TemplateVersionList& setVersion(int64_t version) { DARABONBA_PTR_SET_VALUE(version_, version) };


      protected:
        shared_ptr<string> comment_ {};
        shared_ptr<string> content_ {};
        shared_ptr<string> description_ {};
        shared_ptr<string> engine_ {};
        shared_ptr<string> gmtCreate_ {};
        shared_ptr<string> gmtModified_ {};
        shared_ptr<int64_t> id_ {};
        shared_ptr<string> modifier_ {};
        shared_ptr<string> modifierId_ {};
        shared_ptr<string> name_ {};
        shared_ptr<int32_t> operatorType_ {};
        shared_ptr<string> owner_ {};
        shared_ptr<string> ownerId_ {};
        shared_ptr<int64_t> projectId_ {};
        shared_ptr<string> status_ {};
        shared_ptr<int64_t> version_ {};
      };

      virtual bool empty() const override { return this->templateVersionList_ == nullptr; };
      // templateVersionList Field Functions 
      bool hasTemplateVersionList() const { return this->templateVersionList_ != nullptr;};
      void deleteTemplateVersionList() { this->templateVersionList_ = nullptr;};
      inline const vector<Data::TemplateVersionList> & getTemplateVersionList() const { DARABONBA_PTR_GET_CONST(templateVersionList_, vector<Data::TemplateVersionList>) };
      inline vector<Data::TemplateVersionList> getTemplateVersionList() { DARABONBA_PTR_GET(templateVersionList_, vector<Data::TemplateVersionList>) };
      inline Data& setTemplateVersionList(const vector<Data::TemplateVersionList> & templateVersionList) { DARABONBA_PTR_SET_VALUE(templateVersionList_, templateVersionList) };
      inline Data& setTemplateVersionList(vector<Data::TemplateVersionList> && templateVersionList) { DARABONBA_PTR_SET_RVALUE(templateVersionList_, templateVersionList) };


    protected:
      shared_ptr<vector<Data::TemplateVersionList>> templateVersionList_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetBatchTemplateVersionsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetBatchTemplateVersionsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetBatchTemplateVersionsResponseBody::Data) };
    inline GetBatchTemplateVersionsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetBatchTemplateVersionsResponseBody::Data) };
    inline GetBatchTemplateVersionsResponseBody& setData(const GetBatchTemplateVersionsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetBatchTemplateVersionsResponseBody& setData(GetBatchTemplateVersionsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetBatchTemplateVersionsResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetBatchTemplateVersionsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetBatchTemplateVersionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetBatchTemplateVersionsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<GetBatchTemplateVersionsResponseBody::Data> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
