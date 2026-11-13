// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTKNOWLEDGEBASESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTKNOWLEDGEBASESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListKnowledgeBasesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListKnowledgeBasesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListKnowledgeBasesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListKnowledgeBasesResponseBody() = default ;
    ListKnowledgeBasesResponseBody(const ListKnowledgeBasesResponseBody &) = default ;
    ListKnowledgeBasesResponseBody(ListKnowledgeBasesResponseBody &&) = default ;
    ListKnowledgeBasesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListKnowledgeBasesResponseBody() = default ;
    ListKnowledgeBasesResponseBody& operator=(const ListKnowledgeBasesResponseBody &) = default ;
    ListKnowledgeBasesResponseBody& operator=(ListKnowledgeBasesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(KnowledgeBases, knowledgeBases_);
        DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(KnowledgeBases, knowledgeBases_);
        DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
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
      class KnowledgeBases : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const KnowledgeBases& obj) { 
          DARABONBA_PTR_TO_JSON(AccessRole, accessRole_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(KnowledgeBaseId, knowledgeBaseId_);
          DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Owner, owner_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, KnowledgeBases& obj) { 
          DARABONBA_PTR_FROM_JSON(AccessRole, accessRole_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(KnowledgeBaseId, knowledgeBaseId_);
          DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Owner, owner_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        KnowledgeBases() = default ;
        KnowledgeBases(const KnowledgeBases &) = default ;
        KnowledgeBases(KnowledgeBases &&) = default ;
        KnowledgeBases(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~KnowledgeBases() = default ;
        KnowledgeBases& operator=(const KnowledgeBases &) = default ;
        KnowledgeBases& operator=(KnowledgeBases &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->accessRole_ == nullptr
        && this->createTime_ == nullptr && this->description_ == nullptr && this->knowledgeBaseId_ == nullptr && this->modifyTime_ == nullptr && this->name_ == nullptr
        && this->owner_ == nullptr && this->status_ == nullptr && this->type_ == nullptr; };
        // accessRole Field Functions 
        bool hasAccessRole() const { return this->accessRole_ != nullptr;};
        void deleteAccessRole() { this->accessRole_ = nullptr;};
        inline string getAccessRole() const { DARABONBA_PTR_GET_DEFAULT(accessRole_, "") };
        inline KnowledgeBases& setAccessRole(string accessRole) { DARABONBA_PTR_SET_VALUE(accessRole_, accessRole) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
        inline KnowledgeBases& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline KnowledgeBases& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // knowledgeBaseId Field Functions 
        bool hasKnowledgeBaseId() const { return this->knowledgeBaseId_ != nullptr;};
        void deleteKnowledgeBaseId() { this->knowledgeBaseId_ = nullptr;};
        inline string getKnowledgeBaseId() const { DARABONBA_PTR_GET_DEFAULT(knowledgeBaseId_, "") };
        inline KnowledgeBases& setKnowledgeBaseId(string knowledgeBaseId) { DARABONBA_PTR_SET_VALUE(knowledgeBaseId_, knowledgeBaseId) };


        // modifyTime Field Functions 
        bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
        void deleteModifyTime() { this->modifyTime_ = nullptr;};
        inline int64_t getModifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, 0L) };
        inline KnowledgeBases& setModifyTime(int64_t modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline KnowledgeBases& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // owner Field Functions 
        bool hasOwner() const { return this->owner_ != nullptr;};
        void deleteOwner() { this->owner_ = nullptr;};
        inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
        inline KnowledgeBases& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline KnowledgeBases& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline KnowledgeBases& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // The read-only access role of the current caller for the knowledge base. Valid values:
        // - OWNER: owner
        // - ADMIN: administrator
        // - VIEWER: viewer
        shared_ptr<string> accessRole_ {};
        // The creation time of the knowledge base. The value is a UNIX timestamp in milliseconds.
        shared_ptr<int64_t> createTime_ {};
        // The description of the knowledge base. This field can be empty if no description is set.
        shared_ptr<string> description_ {};
        // The stable ID of the knowledge base, which can be used to limit the search scope.
        shared_ptr<string> knowledgeBaseId_ {};
        // The last modification time of the knowledge base. The value is a UNIX timestamp in milliseconds.
        shared_ptr<int64_t> modifyTime_ {};
        // The name of the knowledge base.
        shared_ptr<string> name_ {};
        // The DataWorks user ID of the knowledge base owner.
        shared_ptr<string> owner_ {};
        // The public status of the knowledge base. This list returns only normally visible knowledge bases, and the value is ACTIVE.
        shared_ptr<string> status_ {};
        // The type of the knowledge base. Valid values:
        // - PERSONAL: personal knowledge base
        // - ENTERPRISE: enterprise knowledge base
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->knowledgeBases_ == nullptr
        && this->nextToken_ == nullptr; };
      // knowledgeBases Field Functions 
      bool hasKnowledgeBases() const { return this->knowledgeBases_ != nullptr;};
      void deleteKnowledgeBases() { this->knowledgeBases_ = nullptr;};
      inline const vector<Data::KnowledgeBases> & getKnowledgeBases() const { DARABONBA_PTR_GET_CONST(knowledgeBases_, vector<Data::KnowledgeBases>) };
      inline vector<Data::KnowledgeBases> getKnowledgeBases() { DARABONBA_PTR_GET(knowledgeBases_, vector<Data::KnowledgeBases>) };
      inline Data& setKnowledgeBases(const vector<Data::KnowledgeBases> & knowledgeBases) { DARABONBA_PTR_SET_VALUE(knowledgeBases_, knowledgeBases) };
      inline Data& setKnowledgeBases(vector<Data::KnowledgeBases> && knowledgeBases) { DARABONBA_PTR_SET_RVALUE(knowledgeBases_, knowledgeBases) };


      // nextToken Field Functions 
      bool hasNextToken() const { return this->nextToken_ != nullptr;};
      void deleteNextToken() { this->nextToken_ = nullptr;};
      inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
      inline Data& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    protected:
      // The list of knowledge bases that the current caller has permission to view in the current region.
      shared_ptr<vector<Data::KnowledgeBases>> knowledgeBases_ {};
      // The pagination cursor. Do not specify this parameter when you request the first page. For subsequent pages, use the NextToken value returned in the previous response as is. An empty response indicates that no more pages are available. If the current page is empty but the cursor is not empty, continue pagination. Keep the same MaxResults value during pagination.
      shared_ptr<string> nextToken_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->maxResults_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListKnowledgeBasesResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListKnowledgeBasesResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListKnowledgeBasesResponseBody::Data) };
    inline ListKnowledgeBasesResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListKnowledgeBasesResponseBody::Data) };
    inline ListKnowledgeBasesResponseBody& setData(const ListKnowledgeBasesResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListKnowledgeBasesResponseBody& setData(ListKnowledgeBasesResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListKnowledgeBasesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListKnowledgeBasesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListKnowledgeBasesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListKnowledgeBasesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The business error code. This field is omitted when the request is successful. If the request fails, the common error response protocol is followed.
    shared_ptr<string> code_ {};
    // The list of knowledge bases on the current page and the cursor for the next page.
    shared_ptr<ListKnowledgeBasesResponseBody::Data> data_ {};
    // The maximum number of knowledge bases to return per page. Valid values: 1 to 100.
    shared_ptr<int32_t> maxResults_ {};
    // The readable description of the business error. This field is omitted when the request is successful. Provide the RequestId along with this message when troubleshooting failures.
    shared_ptr<string> message_ {};
    // The unique identifier of the request, which can be used to troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request is successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
