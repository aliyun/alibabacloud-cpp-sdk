// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTKNOWLEDGEBASEADMINISTRATORSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTKNOWLEDGEBASEADMINISTRATORSRESPONSEBODY_HPP_
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
  class ListKnowledgeBaseAdministratorsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListKnowledgeBaseAdministratorsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListKnowledgeBaseAdministratorsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListKnowledgeBaseAdministratorsResponseBody() = default ;
    ListKnowledgeBaseAdministratorsResponseBody(const ListKnowledgeBaseAdministratorsResponseBody &) = default ;
    ListKnowledgeBaseAdministratorsResponseBody(ListKnowledgeBaseAdministratorsResponseBody &&) = default ;
    ListKnowledgeBaseAdministratorsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListKnowledgeBaseAdministratorsResponseBody() = default ;
    ListKnowledgeBaseAdministratorsResponseBody& operator=(const ListKnowledgeBaseAdministratorsResponseBody &) = default ;
    ListKnowledgeBaseAdministratorsResponseBody& operator=(ListKnowledgeBaseAdministratorsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(KnowledgeBaseAdministrators, knowledgeBaseAdministrators_);
        DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
        DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(KnowledgeBaseAdministrators, knowledgeBaseAdministrators_);
        DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
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
      class KnowledgeBaseAdministrators : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const KnowledgeBaseAdministrators& obj) { 
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
          DARABONBA_PTR_TO_JSON(KnowledgeBaseId, knowledgeBaseId_);
          DARABONBA_PTR_TO_JSON(UserId, userId_);
        };
        friend void from_json(const Darabonba::Json& j, KnowledgeBaseAdministrators& obj) { 
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
          DARABONBA_PTR_FROM_JSON(KnowledgeBaseId, knowledgeBaseId_);
          DARABONBA_PTR_FROM_JSON(UserId, userId_);
        };
        KnowledgeBaseAdministrators() = default ;
        KnowledgeBaseAdministrators(const KnowledgeBaseAdministrators &) = default ;
        KnowledgeBaseAdministrators(KnowledgeBaseAdministrators &&) = default ;
        KnowledgeBaseAdministrators(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~KnowledgeBaseAdministrators() = default ;
        KnowledgeBaseAdministrators& operator=(const KnowledgeBaseAdministrators &) = default ;
        KnowledgeBaseAdministrators& operator=(KnowledgeBaseAdministrators &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->createTime_ == nullptr
        && this->displayName_ == nullptr && this->knowledgeBaseId_ == nullptr && this->userId_ == nullptr; };
        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
        inline KnowledgeBaseAdministrators& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // displayName Field Functions 
        bool hasDisplayName() const { return this->displayName_ != nullptr;};
        void deleteDisplayName() { this->displayName_ = nullptr;};
        inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
        inline KnowledgeBaseAdministrators& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


        // knowledgeBaseId Field Functions 
        bool hasKnowledgeBaseId() const { return this->knowledgeBaseId_ != nullptr;};
        void deleteKnowledgeBaseId() { this->knowledgeBaseId_ = nullptr;};
        inline string getKnowledgeBaseId() const { DARABONBA_PTR_GET_DEFAULT(knowledgeBaseId_, "") };
        inline KnowledgeBaseAdministrators& setKnowledgeBaseId(string knowledgeBaseId) { DARABONBA_PTR_SET_VALUE(knowledgeBaseId_, knowledgeBaseId) };


        // userId Field Functions 
        bool hasUserId() const { return this->userId_ != nullptr;};
        void deleteUserId() { this->userId_ = nullptr;};
        inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
        inline KnowledgeBaseAdministrators& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      protected:
        // The creation time of the record, represented as a UNIX timestamp in milliseconds.
        shared_ptr<int64_t> createTime_ {};
        // The display name of the user. This field is optional and is not used to verify the user’s identity.
        shared_ptr<string> displayName_ {};
        // The ID of the knowledge base.
        shared_ptr<string> knowledgeBaseId_ {};
        // The DataWorks user ID of the administrator.
        shared_ptr<string> userId_ {};
      };

      virtual bool empty() const override { return this->knowledgeBaseAdministrators_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr; };
      // knowledgeBaseAdministrators Field Functions 
      bool hasKnowledgeBaseAdministrators() const { return this->knowledgeBaseAdministrators_ != nullptr;};
      void deleteKnowledgeBaseAdministrators() { this->knowledgeBaseAdministrators_ = nullptr;};
      inline const vector<Data::KnowledgeBaseAdministrators> & getKnowledgeBaseAdministrators() const { DARABONBA_PTR_GET_CONST(knowledgeBaseAdministrators_, vector<Data::KnowledgeBaseAdministrators>) };
      inline vector<Data::KnowledgeBaseAdministrators> getKnowledgeBaseAdministrators() { DARABONBA_PTR_GET(knowledgeBaseAdministrators_, vector<Data::KnowledgeBaseAdministrators>) };
      inline Data& setKnowledgeBaseAdministrators(const vector<Data::KnowledgeBaseAdministrators> & knowledgeBaseAdministrators) { DARABONBA_PTR_SET_VALUE(knowledgeBaseAdministrators_, knowledgeBaseAdministrators) };
      inline Data& setKnowledgeBaseAdministrators(vector<Data::KnowledgeBaseAdministrators> && knowledgeBaseAdministrators) { DARABONBA_PTR_SET_RVALUE(knowledgeBaseAdministrators_, knowledgeBaseAdministrators) };


      // maxResults Field Functions 
      bool hasMaxResults() const { return this->maxResults_ != nullptr;};
      void deleteMaxResults() { this->maxResults_ = nullptr;};
      inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
      inline Data& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


      // nextToken Field Functions 
      bool hasNextToken() const { return this->nextToken_ != nullptr;};
      void deleteNextToken() { this->nextToken_ = nullptr;};
      inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
      inline Data& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    protected:
      // The administrators on the current page, excluding the owner.
      shared_ptr<vector<Data::KnowledgeBaseAdministrators>> knowledgeBaseAdministrators_ {};
      // The maximum number of entries per page used for the current request. If the input parameter is omitted, the value is 20. This is not the actual number of entries returned on the current page.
      shared_ptr<int32_t> maxResults_ {};
      // The cursor for the next page. If no subsequent pages exist, null is returned.
      shared_ptr<string> nextToken_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListKnowledgeBaseAdministratorsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListKnowledgeBaseAdministratorsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListKnowledgeBaseAdministratorsResponseBody::Data) };
    inline ListKnowledgeBaseAdministratorsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListKnowledgeBaseAdministratorsResponseBody::Data) };
    inline ListKnowledgeBaseAdministratorsResponseBody& setData(const ListKnowledgeBaseAdministratorsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListKnowledgeBaseAdministratorsResponseBody& setData(ListKnowledgeBaseAdministratorsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListKnowledgeBaseAdministratorsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListKnowledgeBaseAdministratorsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListKnowledgeBaseAdministratorsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The business error code, which is used to determine the error type when the request fails.
    shared_ptr<string> code_ {};
    // The business data returned when the request is successful.
    shared_ptr<ListKnowledgeBaseAdministratorsResponseBody::Data> data_ {};
    // The security error message returned when the request fails.
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
