// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCUSTOMQARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCUSTOMQARESPONSEBODY_HPP_
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
  class ListCustomQAResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCustomQAResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Page, page_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(StatusCode, statusCode_);
    };
    friend void from_json(const Darabonba::Json& j, ListCustomQAResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Page, page_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(StatusCode, statusCode_);
    };
    ListCustomQAResponseBody() = default ;
    ListCustomQAResponseBody(const ListCustomQAResponseBody &) = default ;
    ListCustomQAResponseBody(ListCustomQAResponseBody &&) = default ;
    ListCustomQAResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCustomQAResponseBody() = default ;
    ListCustomQAResponseBody& operator=(const ListCustomQAResponseBody &) = default ;
    ListCustomQAResponseBody& operator=(ListCustomQAResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(Answers, answers_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(CustomQAId, customQAId_);
        DARABONBA_PTR_TO_JSON(HotelId, hotelId_);
        DARABONBA_PTR_TO_JSON(KeyWords, keyWords_);
        DARABONBA_PTR_TO_JSON(MajorQuestion, majorQuestion_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(SupplementaryQuestion, supplementaryQuestion_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(Answers, answers_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(CustomQAId, customQAId_);
        DARABONBA_PTR_FROM_JSON(HotelId, hotelId_);
        DARABONBA_PTR_FROM_JSON(KeyWords, keyWords_);
        DARABONBA_PTR_FROM_JSON(MajorQuestion, majorQuestion_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(SupplementaryQuestion, supplementaryQuestion_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
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
      virtual bool empty() const override { return this->answers_ == nullptr
        && this->createTime_ == nullptr && this->customQAId_ == nullptr && this->hotelId_ == nullptr && this->keyWords_ == nullptr && this->majorQuestion_ == nullptr
        && this->status_ == nullptr && this->supplementaryQuestion_ == nullptr && this->updateTime_ == nullptr; };
      // answers Field Functions 
      bool hasAnswers() const { return this->answers_ != nullptr;};
      void deleteAnswers() { this->answers_ = nullptr;};
      inline string getAnswers() const { DARABONBA_PTR_GET_DEFAULT(answers_, "") };
      inline Result& setAnswers(string answers) { DARABONBA_PTR_SET_VALUE(answers_, answers) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Result& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // customQAId Field Functions 
      bool hasCustomQAId() const { return this->customQAId_ != nullptr;};
      void deleteCustomQAId() { this->customQAId_ = nullptr;};
      inline string getCustomQAId() const { DARABONBA_PTR_GET_DEFAULT(customQAId_, "") };
      inline Result& setCustomQAId(string customQAId) { DARABONBA_PTR_SET_VALUE(customQAId_, customQAId) };


      // hotelId Field Functions 
      bool hasHotelId() const { return this->hotelId_ != nullptr;};
      void deleteHotelId() { this->hotelId_ = nullptr;};
      inline string getHotelId() const { DARABONBA_PTR_GET_DEFAULT(hotelId_, "") };
      inline Result& setHotelId(string hotelId) { DARABONBA_PTR_SET_VALUE(hotelId_, hotelId) };


      // keyWords Field Functions 
      bool hasKeyWords() const { return this->keyWords_ != nullptr;};
      void deleteKeyWords() { this->keyWords_ = nullptr;};
      inline string getKeyWords() const { DARABONBA_PTR_GET_DEFAULT(keyWords_, "") };
      inline Result& setKeyWords(string keyWords) { DARABONBA_PTR_SET_VALUE(keyWords_, keyWords) };


      // majorQuestion Field Functions 
      bool hasMajorQuestion() const { return this->majorQuestion_ != nullptr;};
      void deleteMajorQuestion() { this->majorQuestion_ = nullptr;};
      inline string getMajorQuestion() const { DARABONBA_PTR_GET_DEFAULT(majorQuestion_, "") };
      inline Result& setMajorQuestion(string majorQuestion) { DARABONBA_PTR_SET_VALUE(majorQuestion_, majorQuestion) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline Result& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // supplementaryQuestion Field Functions 
      bool hasSupplementaryQuestion() const { return this->supplementaryQuestion_ != nullptr;};
      void deleteSupplementaryQuestion() { this->supplementaryQuestion_ = nullptr;};
      inline string getSupplementaryQuestion() const { DARABONBA_PTR_GET_DEFAULT(supplementaryQuestion_, "") };
      inline Result& setSupplementaryQuestion(string supplementaryQuestion) { DARABONBA_PTR_SET_VALUE(supplementaryQuestion_, supplementaryQuestion) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
      inline Result& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    protected:
      shared_ptr<string> answers_ {};
      shared_ptr<string> createTime_ {};
      shared_ptr<string> customQAId_ {};
      shared_ptr<string> hotelId_ {};
      shared_ptr<string> keyWords_ {};
      shared_ptr<string> majorQuestion_ {};
      shared_ptr<int32_t> status_ {};
      shared_ptr<string> supplementaryQuestion_ {};
      shared_ptr<string> updateTime_ {};
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
    inline ListCustomQAResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline const ListCustomQAResponseBody::Page & getPage() const { DARABONBA_PTR_GET_CONST(page_, ListCustomQAResponseBody::Page) };
    inline ListCustomQAResponseBody::Page getPage() { DARABONBA_PTR_GET(page_, ListCustomQAResponseBody::Page) };
    inline ListCustomQAResponseBody& setPage(const ListCustomQAResponseBody::Page & page) { DARABONBA_PTR_SET_VALUE(page_, page) };
    inline ListCustomQAResponseBody& setPage(ListCustomQAResponseBody::Page && page) { DARABONBA_PTR_SET_RVALUE(page_, page) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListCustomQAResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<ListCustomQAResponseBody::Result> & getResult() const { DARABONBA_PTR_GET_CONST(result_, vector<ListCustomQAResponseBody::Result>) };
    inline vector<ListCustomQAResponseBody::Result> getResult() { DARABONBA_PTR_GET(result_, vector<ListCustomQAResponseBody::Result>) };
    inline ListCustomQAResponseBody& setResult(const vector<ListCustomQAResponseBody::Result> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline ListCustomQAResponseBody& setResult(vector<ListCustomQAResponseBody::Result> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline ListCustomQAResponseBody& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


  protected:
    shared_ptr<string> message_ {};
    shared_ptr<ListCustomQAResponseBody::Page> page_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<ListCustomQAResponseBody::Result>> result_ {};
    shared_ptr<int32_t> statusCode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieip_1_0
#endif
