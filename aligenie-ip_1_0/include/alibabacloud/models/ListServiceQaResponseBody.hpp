// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSERVICEQARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSERVICEQARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieip_1_0
{
namespace Models
{
  class ListServiceQAResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListServiceQAResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Page, page_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(StatusCode, statusCode_);
    };
    friend void from_json(const Darabonba::Json& j, ListServiceQAResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Page, page_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(StatusCode, statusCode_);
    };
    ListServiceQAResponseBody() = default ;
    ListServiceQAResponseBody(const ListServiceQAResponseBody &) = default ;
    ListServiceQAResponseBody(ListServiceQAResponseBody &&) = default ;
    ListServiceQAResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListServiceQAResponseBody() = default ;
    ListServiceQAResponseBody& operator=(const ListServiceQAResponseBody &) = default ;
    ListServiceQAResponseBody& operator=(ListServiceQAResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(Active, active_);
        DARABONBA_PTR_TO_JSON(Answer, answer_);
        DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(Question, question_);
        DARABONBA_PTR_TO_JSON(ServiceQAId, serviceQAId_);
        DARABONBA_PTR_TO_JSON(Templates, templates_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(Active, active_);
        DARABONBA_PTR_FROM_JSON(Answer, answer_);
        DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(Question, question_);
        DARABONBA_PTR_FROM_JSON(ServiceQAId, serviceQAId_);
        DARABONBA_PTR_FROM_JSON(Templates, templates_);
      };
      Result() = default ;
      Result(const Result &) = default ;
      Result(Result &&) = default ;
      Result(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Result() = default ;
      Result& operator=(const Result &) = default ;
      Result& operator=(Result &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->active_ == nullptr
        && this->answer_ == nullptr && this->gmtModified_ == nullptr && this->question_ == nullptr && this->serviceQAId_ == nullptr && this->templates_ == nullptr; };
      // active Field Functions 
      bool hasActive() const { return this->active_ != nullptr;};
      void deleteActive() { this->active_ = nullptr;};
      inline bool getActive() const { DARABONBA_PTR_GET_DEFAULT(active_, false) };
      inline Result& setActive(bool active) { DARABONBA_PTR_SET_VALUE(active_, active) };


      // answer Field Functions 
      bool hasAnswer() const { return this->answer_ != nullptr;};
      void deleteAnswer() { this->answer_ = nullptr;};
      inline string getAnswer() const { DARABONBA_PTR_GET_DEFAULT(answer_, "") };
      inline Result& setAnswer(string answer) { DARABONBA_PTR_SET_VALUE(answer_, answer) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
      inline Result& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // question Field Functions 
      bool hasQuestion() const { return this->question_ != nullptr;};
      void deleteQuestion() { this->question_ = nullptr;};
      inline string getQuestion() const { DARABONBA_PTR_GET_DEFAULT(question_, "") };
      inline Result& setQuestion(string question) { DARABONBA_PTR_SET_VALUE(question_, question) };


      // serviceQAId Field Functions 
      bool hasServiceQAId() const { return this->serviceQAId_ != nullptr;};
      void deleteServiceQAId() { this->serviceQAId_ = nullptr;};
      inline int64_t getServiceQAId() const { DARABONBA_PTR_GET_DEFAULT(serviceQAId_, 0L) };
      inline Result& setServiceQAId(int64_t serviceQAId) { DARABONBA_PTR_SET_VALUE(serviceQAId_, serviceQAId) };


      // templates Field Functions 
      bool hasTemplates() const { return this->templates_ != nullptr;};
      void deleteTemplates() { this->templates_ = nullptr;};
      inline string getTemplates() const { DARABONBA_PTR_GET_DEFAULT(templates_, "") };
      inline Result& setTemplates(string templates) { DARABONBA_PTR_SET_VALUE(templates_, templates) };


    protected:
      shared_ptr<bool> active_ {};
      shared_ptr<string> answer_ {};
      shared_ptr<string> gmtModified_ {};
      shared_ptr<string> question_ {};
      shared_ptr<int64_t> serviceQAId_ {};
      shared_ptr<string> templates_ {};
    };

    class Page : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Page& obj) { 
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(Total, total_);
      };
      friend void from_json(const Darabonba::Json& j, Page& obj) { 
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(Total, total_);
      };
      Page() = default ;
      Page(const Page &) = default ;
      Page(Page &&) = default ;
      Page(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Page() = default ;
      Page& operator=(const Page &) = default ;
      Page& operator=(Page &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->total_ == nullptr; };
      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
      inline Page& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Page& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // total Field Functions 
      bool hasTotal() const { return this->total_ != nullptr;};
      void deleteTotal() { this->total_ = nullptr;};
      inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
      inline Page& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    protected:
      shared_ptr<int32_t> pageNumber_ {};
      shared_ptr<int32_t> pageSize_ {};
      shared_ptr<int32_t> total_ {};
    };

    virtual bool empty() const override { return this->message_ == nullptr
        && this->page_ == nullptr && this->requestId_ == nullptr && this->result_ == nullptr && this->statusCode_ == nullptr; };
    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListServiceQAResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline const ListServiceQAResponseBody::Page & getPage() const { DARABONBA_PTR_GET_CONST(page_, ListServiceQAResponseBody::Page) };
    inline ListServiceQAResponseBody::Page getPage() { DARABONBA_PTR_GET(page_, ListServiceQAResponseBody::Page) };
    inline ListServiceQAResponseBody& setPage(const ListServiceQAResponseBody::Page & page) { DARABONBA_PTR_SET_VALUE(page_, page) };
    inline ListServiceQAResponseBody& setPage(ListServiceQAResponseBody::Page && page) { DARABONBA_PTR_SET_RVALUE(page_, page) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListServiceQAResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<ListServiceQAResponseBody::Result> & getResult() const { DARABONBA_PTR_GET_CONST(result_, vector<ListServiceQAResponseBody::Result>) };
    inline vector<ListServiceQAResponseBody::Result> getResult() { DARABONBA_PTR_GET(result_, vector<ListServiceQAResponseBody::Result>) };
    inline ListServiceQAResponseBody& setResult(const vector<ListServiceQAResponseBody::Result> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline ListServiceQAResponseBody& setResult(vector<ListServiceQAResponseBody::Result> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline ListServiceQAResponseBody& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


  protected:
    shared_ptr<string> message_ {};
    shared_ptr<ListServiceQAResponseBody::Page> page_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<ListServiceQAResponseBody::Result>> result_ {};
    shared_ptr<int32_t> statusCode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieip_1_0
#endif
