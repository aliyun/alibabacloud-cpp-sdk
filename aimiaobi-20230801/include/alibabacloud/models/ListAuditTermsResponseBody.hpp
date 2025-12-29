// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAUDITTERMSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAUDITTERMSRESPONSEBODY_HPP_
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
  class ListAuditTermsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAuditTermsResponseBody& obj) { 
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
    friend void from_json(const Darabonba::Json& j, ListAuditTermsResponseBody& obj) { 
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
    ListAuditTermsResponseBody() = default ;
    ListAuditTermsResponseBody(const ListAuditTermsResponseBody &) = default ;
    ListAuditTermsResponseBody(ListAuditTermsResponseBody &&) = default ;
    ListAuditTermsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAuditTermsResponseBody() = default ;
    ListAuditTermsResponseBody& operator=(const ListAuditTermsResponseBody &) = default ;
    ListAuditTermsResponseBody& operator=(ListAuditTermsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ExceptionWord, exceptionWord_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Keyword, keyword_);
        DARABONBA_PTR_TO_JSON(SuggestWord, suggestWord_);
        DARABONBA_PTR_TO_JSON(TermsDesc, termsDesc_);
        DARABONBA_PTR_TO_JSON(TermsName, termsName_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ExceptionWord, exceptionWord_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Keyword, keyword_);
        DARABONBA_PTR_FROM_JSON(SuggestWord, suggestWord_);
        DARABONBA_PTR_FROM_JSON(TermsDesc, termsDesc_);
        DARABONBA_PTR_FROM_JSON(TermsName, termsName_);
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
      virtual bool empty() const override { return this->exceptionWord_ == nullptr
        && this->id_ == nullptr && this->keyword_ == nullptr && this->suggestWord_ == nullptr && this->termsDesc_ == nullptr && this->termsName_ == nullptr; };
      // exceptionWord Field Functions 
      bool hasExceptionWord() const { return this->exceptionWord_ != nullptr;};
      void deleteExceptionWord() { this->exceptionWord_ = nullptr;};
      inline const vector<string> & getExceptionWord() const { DARABONBA_PTR_GET_CONST(exceptionWord_, vector<string>) };
      inline vector<string> getExceptionWord() { DARABONBA_PTR_GET(exceptionWord_, vector<string>) };
      inline Data& setExceptionWord(const vector<string> & exceptionWord) { DARABONBA_PTR_SET_VALUE(exceptionWord_, exceptionWord) };
      inline Data& setExceptionWord(vector<string> && exceptionWord) { DARABONBA_PTR_SET_RVALUE(exceptionWord_, exceptionWord) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline Data& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // keyword Field Functions 
      bool hasKeyword() const { return this->keyword_ != nullptr;};
      void deleteKeyword() { this->keyword_ = nullptr;};
      inline string getKeyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
      inline Data& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


      // suggestWord Field Functions 
      bool hasSuggestWord() const { return this->suggestWord_ != nullptr;};
      void deleteSuggestWord() { this->suggestWord_ = nullptr;};
      inline string getSuggestWord() const { DARABONBA_PTR_GET_DEFAULT(suggestWord_, "") };
      inline Data& setSuggestWord(string suggestWord) { DARABONBA_PTR_SET_VALUE(suggestWord_, suggestWord) };


      // termsDesc Field Functions 
      bool hasTermsDesc() const { return this->termsDesc_ != nullptr;};
      void deleteTermsDesc() { this->termsDesc_ = nullptr;};
      inline string getTermsDesc() const { DARABONBA_PTR_GET_DEFAULT(termsDesc_, "") };
      inline Data& setTermsDesc(string termsDesc) { DARABONBA_PTR_SET_VALUE(termsDesc_, termsDesc) };


      // termsName Field Functions 
      bool hasTermsName() const { return this->termsName_ != nullptr;};
      void deleteTermsName() { this->termsName_ = nullptr;};
      inline string getTermsName() const { DARABONBA_PTR_GET_DEFAULT(termsName_, "") };
      inline Data& setTermsName(string termsName) { DARABONBA_PTR_SET_VALUE(termsName_, termsName) };


    protected:
      shared_ptr<vector<string>> exceptionWord_ {};
      shared_ptr<string> id_ {};
      shared_ptr<string> keyword_ {};
      shared_ptr<string> suggestWord_ {};
      shared_ptr<string> termsDesc_ {};
      shared_ptr<string> termsName_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->maxResults_ == nullptr && this->message_ == nullptr && this->nextToken_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr && this->totalCount_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListAuditTermsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListAuditTermsResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListAuditTermsResponseBody::Data>) };
    inline vector<ListAuditTermsResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListAuditTermsResponseBody::Data>) };
    inline ListAuditTermsResponseBody& setData(const vector<ListAuditTermsResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListAuditTermsResponseBody& setData(vector<ListAuditTermsResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListAuditTermsResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListAuditTermsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListAuditTermsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListAuditTermsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAuditTermsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListAuditTermsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListAuditTermsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<vector<ListAuditTermsResponseBody::Data>> data_ {};
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
