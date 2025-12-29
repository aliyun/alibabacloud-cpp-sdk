// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDOCUMENTRETRIEVERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDOCUMENTRETRIEVERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class ListDocumentRetrieveResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDocumentRetrieveResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListDocumentRetrieveResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListDocumentRetrieveResponseBody() = default ;
    ListDocumentRetrieveResponseBody(const ListDocumentRetrieveResponseBody &) = default ;
    ListDocumentRetrieveResponseBody(ListDocumentRetrieveResponseBody &&) = default ;
    ListDocumentRetrieveResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDocumentRetrieveResponseBody() = default ;
    ListDocumentRetrieveResponseBody& operator=(const ListDocumentRetrieveResponseBody &) = default ;
    ListDocumentRetrieveResponseBody& operator=(ListDocumentRetrieveResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Essay, essay_);
        DARABONBA_PTR_TO_JSON(IssuingAuthority, issuingAuthority_);
        DARABONBA_PTR_TO_JSON(Link, link_);
        DARABONBA_PTR_TO_JSON(PublicationDate, publicationDate_);
        DARABONBA_PTR_TO_JSON(Title, title_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Essay, essay_);
        DARABONBA_PTR_FROM_JSON(IssuingAuthority, issuingAuthority_);
        DARABONBA_PTR_FROM_JSON(Link, link_);
        DARABONBA_PTR_FROM_JSON(PublicationDate, publicationDate_);
        DARABONBA_PTR_FROM_JSON(Title, title_);
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
      virtual bool empty() const override { return this->essay_ == nullptr
        && this->issuingAuthority_ == nullptr && this->link_ == nullptr && this->publicationDate_ == nullptr && this->title_ == nullptr; };
      // essay Field Functions 
      bool hasEssay() const { return this->essay_ != nullptr;};
      void deleteEssay() { this->essay_ = nullptr;};
      inline string getEssay() const { DARABONBA_PTR_GET_DEFAULT(essay_, "") };
      inline Data& setEssay(string essay) { DARABONBA_PTR_SET_VALUE(essay_, essay) };


      // issuingAuthority Field Functions 
      bool hasIssuingAuthority() const { return this->issuingAuthority_ != nullptr;};
      void deleteIssuingAuthority() { this->issuingAuthority_ = nullptr;};
      inline string getIssuingAuthority() const { DARABONBA_PTR_GET_DEFAULT(issuingAuthority_, "") };
      inline Data& setIssuingAuthority(string issuingAuthority) { DARABONBA_PTR_SET_VALUE(issuingAuthority_, issuingAuthority) };


      // link Field Functions 
      bool hasLink() const { return this->link_ != nullptr;};
      void deleteLink() { this->link_ = nullptr;};
      inline string getLink() const { DARABONBA_PTR_GET_DEFAULT(link_, "") };
      inline Data& setLink(string link) { DARABONBA_PTR_SET_VALUE(link_, link) };


      // publicationDate Field Functions 
      bool hasPublicationDate() const { return this->publicationDate_ != nullptr;};
      void deletePublicationDate() { this->publicationDate_ = nullptr;};
      inline string getPublicationDate() const { DARABONBA_PTR_GET_DEFAULT(publicationDate_, "") };
      inline Data& setPublicationDate(string publicationDate) { DARABONBA_PTR_SET_VALUE(publicationDate_, publicationDate) };


      // title Field Functions 
      bool hasTitle() const { return this->title_ != nullptr;};
      void deleteTitle() { this->title_ = nullptr;};
      inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
      inline Data& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    protected:
      shared_ptr<string> essay_ {};
      shared_ptr<string> issuingAuthority_ {};
      shared_ptr<string> link_ {};
      shared_ptr<string> publicationDate_ {};
      shared_ptr<string> title_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->maxResults_ == nullptr && this->message_ == nullptr && this->nextToken_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr && this->totalCount_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListDocumentRetrieveResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListDocumentRetrieveResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListDocumentRetrieveResponseBody::Data>) };
    inline vector<ListDocumentRetrieveResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListDocumentRetrieveResponseBody::Data>) };
    inline ListDocumentRetrieveResponseBody& setData(const vector<ListDocumentRetrieveResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListDocumentRetrieveResponseBody& setData(vector<ListDocumentRetrieveResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListDocumentRetrieveResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListDocumentRetrieveResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListDocumentRetrieveResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListDocumentRetrieveResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDocumentRetrieveResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListDocumentRetrieveResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListDocumentRetrieveResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<vector<ListDocumentRetrieveResponseBody::Data>> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> nextToken_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
