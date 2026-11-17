// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTKNOWLEDGEBASERETRIEVALGRANTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTKNOWLEDGEBASERETRIEVALGRANTSRESPONSEBODY_HPP_
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
  class ListKnowledgeBaseRetrievalGrantsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListKnowledgeBaseRetrievalGrantsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListKnowledgeBaseRetrievalGrantsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListKnowledgeBaseRetrievalGrantsResponseBody() = default ;
    ListKnowledgeBaseRetrievalGrantsResponseBody(const ListKnowledgeBaseRetrievalGrantsResponseBody &) = default ;
    ListKnowledgeBaseRetrievalGrantsResponseBody(ListKnowledgeBaseRetrievalGrantsResponseBody &&) = default ;
    ListKnowledgeBaseRetrievalGrantsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListKnowledgeBaseRetrievalGrantsResponseBody() = default ;
    ListKnowledgeBaseRetrievalGrantsResponseBody& operator=(const ListKnowledgeBaseRetrievalGrantsResponseBody &) = default ;
    ListKnowledgeBaseRetrievalGrantsResponseBody& operator=(ListKnowledgeBaseRetrievalGrantsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(KnowledgeBaseRetrievalGrants, knowledgeBaseRetrievalGrants_);
        DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
        DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(KnowledgeBaseRetrievalGrants, knowledgeBaseRetrievalGrants_);
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
      class KnowledgeBaseRetrievalGrants : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const KnowledgeBaseRetrievalGrants& obj) { 
          DARABONBA_PTR_TO_JSON(KnowledgeBaseId, knowledgeBaseId_);
          DARABONBA_PTR_TO_JSON(PrincipalId, principalId_);
          DARABONBA_PTR_TO_JSON(PrincipalType, principalType_);
        };
        friend void from_json(const Darabonba::Json& j, KnowledgeBaseRetrievalGrants& obj) { 
          DARABONBA_PTR_FROM_JSON(KnowledgeBaseId, knowledgeBaseId_);
          DARABONBA_PTR_FROM_JSON(PrincipalId, principalId_);
          DARABONBA_PTR_FROM_JSON(PrincipalType, principalType_);
        };
        KnowledgeBaseRetrievalGrants() = default ;
        KnowledgeBaseRetrievalGrants(const KnowledgeBaseRetrievalGrants &) = default ;
        KnowledgeBaseRetrievalGrants(KnowledgeBaseRetrievalGrants &&) = default ;
        KnowledgeBaseRetrievalGrants(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~KnowledgeBaseRetrievalGrants() = default ;
        KnowledgeBaseRetrievalGrants& operator=(const KnowledgeBaseRetrievalGrants &) = default ;
        KnowledgeBaseRetrievalGrants& operator=(KnowledgeBaseRetrievalGrants &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->knowledgeBaseId_ == nullptr
        && this->principalId_ == nullptr && this->principalType_ == nullptr; };
        // knowledgeBaseId Field Functions 
        bool hasKnowledgeBaseId() const { return this->knowledgeBaseId_ != nullptr;};
        void deleteKnowledgeBaseId() { this->knowledgeBaseId_ = nullptr;};
        inline string getKnowledgeBaseId() const { DARABONBA_PTR_GET_DEFAULT(knowledgeBaseId_, "") };
        inline KnowledgeBaseRetrievalGrants& setKnowledgeBaseId(string knowledgeBaseId) { DARABONBA_PTR_SET_VALUE(knowledgeBaseId_, knowledgeBaseId) };


        // principalId Field Functions 
        bool hasPrincipalId() const { return this->principalId_ != nullptr;};
        void deletePrincipalId() { this->principalId_ = nullptr;};
        inline string getPrincipalId() const { DARABONBA_PTR_GET_DEFAULT(principalId_, "") };
        inline KnowledgeBaseRetrievalGrants& setPrincipalId(string principalId) { DARABONBA_PTR_SET_VALUE(principalId_, principalId) };


        // principalType Field Functions 
        bool hasPrincipalType() const { return this->principalType_ != nullptr;};
        void deletePrincipalType() { this->principalType_ = nullptr;};
        inline string getPrincipalType() const { DARABONBA_PTR_GET_DEFAULT(principalType_, "") };
        inline KnowledgeBaseRetrievalGrants& setPrincipalType(string principalType) { DARABONBA_PTR_SET_VALUE(principalType_, principalType) };


      protected:
        // The knowledge base ID.
        shared_ptr<string> knowledgeBaseId_ {};
        // The DataWorks user ID of the principal that receives the share. When a principal is added, the system verifies whether the user is a member of the same tenant.
        shared_ptr<string> principalId_ {};
        // The type of principal that receives the share. Default value: USER. Only USER is supported in the initial release.
        shared_ptr<string> principalType_ {};
      };

      virtual bool empty() const override { return this->knowledgeBaseRetrievalGrants_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr; };
      // knowledgeBaseRetrievalGrants Field Functions 
      bool hasKnowledgeBaseRetrievalGrants() const { return this->knowledgeBaseRetrievalGrants_ != nullptr;};
      void deleteKnowledgeBaseRetrievalGrants() { this->knowledgeBaseRetrievalGrants_ = nullptr;};
      inline const vector<Data::KnowledgeBaseRetrievalGrants> & getKnowledgeBaseRetrievalGrants() const { DARABONBA_PTR_GET_CONST(knowledgeBaseRetrievalGrants_, vector<Data::KnowledgeBaseRetrievalGrants>) };
      inline vector<Data::KnowledgeBaseRetrievalGrants> getKnowledgeBaseRetrievalGrants() { DARABONBA_PTR_GET(knowledgeBaseRetrievalGrants_, vector<Data::KnowledgeBaseRetrievalGrants>) };
      inline Data& setKnowledgeBaseRetrievalGrants(const vector<Data::KnowledgeBaseRetrievalGrants> & knowledgeBaseRetrievalGrants) { DARABONBA_PTR_SET_VALUE(knowledgeBaseRetrievalGrants_, knowledgeBaseRetrievalGrants) };
      inline Data& setKnowledgeBaseRetrievalGrants(vector<Data::KnowledgeBaseRetrievalGrants> && knowledgeBaseRetrievalGrants) { DARABONBA_PTR_SET_RVALUE(knowledgeBaseRetrievalGrants_, knowledgeBaseRetrievalGrants) };


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
      // The user grants on the current page.
      shared_ptr<vector<Data::KnowledgeBaseRetrievalGrants>> knowledgeBaseRetrievalGrants_ {};
      // The maximum number of entries per page used in the current request. If you do not specify this parameter in the request, the value is 20. This value is not the actual number of entries returned on the current page.
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
    inline ListKnowledgeBaseRetrievalGrantsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListKnowledgeBaseRetrievalGrantsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListKnowledgeBaseRetrievalGrantsResponseBody::Data) };
    inline ListKnowledgeBaseRetrievalGrantsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListKnowledgeBaseRetrievalGrantsResponseBody::Data) };
    inline ListKnowledgeBaseRetrievalGrantsResponseBody& setData(const ListKnowledgeBaseRetrievalGrantsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListKnowledgeBaseRetrievalGrantsResponseBody& setData(ListKnowledgeBaseRetrievalGrantsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListKnowledgeBaseRetrievalGrantsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListKnowledgeBaseRetrievalGrantsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListKnowledgeBaseRetrievalGrantsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The business error code. You can use this code to determine the error type when the request fails.
    shared_ptr<string> code_ {};
    // The business data returned when the request is successful.
    shared_ptr<ListKnowledgeBaseRetrievalGrantsResponseBody::Data> data_ {};
    // The error message returned when the request fails.
    shared_ptr<string> message_ {};
    // The unique identifier of the request. You can use this ID to troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request is successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
