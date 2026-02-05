// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTOUTBOUNDCALLNUMBERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTOUTBOUNDCALLNUMBERSRESPONSEBODY_HPP_
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
  class ListOutboundCallNumbersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListOutboundCallNumbersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(OutboundCallNumbers, outboundCallNumbers_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListOutboundCallNumbersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(OutboundCallNumbers, outboundCallNumbers_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListOutboundCallNumbersResponseBody() = default ;
    ListOutboundCallNumbersResponseBody(const ListOutboundCallNumbersResponseBody &) = default ;
    ListOutboundCallNumbersResponseBody(ListOutboundCallNumbersResponseBody &&) = default ;
    ListOutboundCallNumbersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListOutboundCallNumbersResponseBody() = default ;
    ListOutboundCallNumbersResponseBody& operator=(const ListOutboundCallNumbersResponseBody &) = default ;
    ListOutboundCallNumbersResponseBody& operator=(ListOutboundCallNumbersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class OutboundCallNumbers : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const OutboundCallNumbers& obj) { 
        DARABONBA_PTR_TO_JSON(List, list_);
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, OutboundCallNumbers& obj) { 
        DARABONBA_PTR_FROM_JSON(List, list_);
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      OutboundCallNumbers() = default ;
      OutboundCallNumbers(const OutboundCallNumbers &) = default ;
      OutboundCallNumbers(OutboundCallNumbers &&) = default ;
      OutboundCallNumbers(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~OutboundCallNumbers() = default ;
      OutboundCallNumbers& operator=(const OutboundCallNumbers &) = default ;
      OutboundCallNumbers& operator=(OutboundCallNumbers &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class List : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const List& obj) { 
          DARABONBA_PTR_TO_JSON(Number, number_);
          DARABONBA_PTR_TO_JSON(OutboundCallNumberId, outboundCallNumberId_);
          DARABONBA_PTR_TO_JSON(RateLimitCount, rateLimitCount_);
          DARABONBA_PTR_TO_JSON(RateLimitPeriod, rateLimitPeriod_);
        };
        friend void from_json(const Darabonba::Json& j, List& obj) { 
          DARABONBA_PTR_FROM_JSON(Number, number_);
          DARABONBA_PTR_FROM_JSON(OutboundCallNumberId, outboundCallNumberId_);
          DARABONBA_PTR_FROM_JSON(RateLimitCount, rateLimitCount_);
          DARABONBA_PTR_FROM_JSON(RateLimitPeriod, rateLimitPeriod_);
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
        virtual bool empty() const override { return this->number_ == nullptr
        && this->outboundCallNumberId_ == nullptr && this->rateLimitCount_ == nullptr && this->rateLimitPeriod_ == nullptr; };
        // number Field Functions 
        bool hasNumber() const { return this->number_ != nullptr;};
        void deleteNumber() { this->number_ = nullptr;};
        inline string getNumber() const { DARABONBA_PTR_GET_DEFAULT(number_, "") };
        inline List& setNumber(string number) { DARABONBA_PTR_SET_VALUE(number_, number) };


        // outboundCallNumberId Field Functions 
        bool hasOutboundCallNumberId() const { return this->outboundCallNumberId_ != nullptr;};
        void deleteOutboundCallNumberId() { this->outboundCallNumberId_ = nullptr;};
        inline string getOutboundCallNumberId() const { DARABONBA_PTR_GET_DEFAULT(outboundCallNumberId_, "") };
        inline List& setOutboundCallNumberId(string outboundCallNumberId) { DARABONBA_PTR_SET_VALUE(outboundCallNumberId_, outboundCallNumberId) };


        // rateLimitCount Field Functions 
        bool hasRateLimitCount() const { return this->rateLimitCount_ != nullptr;};
        void deleteRateLimitCount() { this->rateLimitCount_ = nullptr;};
        inline string getRateLimitCount() const { DARABONBA_PTR_GET_DEFAULT(rateLimitCount_, "") };
        inline List& setRateLimitCount(string rateLimitCount) { DARABONBA_PTR_SET_VALUE(rateLimitCount_, rateLimitCount) };


        // rateLimitPeriod Field Functions 
        bool hasRateLimitPeriod() const { return this->rateLimitPeriod_ != nullptr;};
        void deleteRateLimitPeriod() { this->rateLimitPeriod_ = nullptr;};
        inline string getRateLimitPeriod() const { DARABONBA_PTR_GET_DEFAULT(rateLimitPeriod_, "") };
        inline List& setRateLimitPeriod(string rateLimitPeriod) { DARABONBA_PTR_SET_VALUE(rateLimitPeriod_, rateLimitPeriod) };


      protected:
        shared_ptr<string> number_ {};
        shared_ptr<string> outboundCallNumberId_ {};
        shared_ptr<string> rateLimitCount_ {};
        shared_ptr<string> rateLimitPeriod_ {};
      };

      virtual bool empty() const override { return this->list_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // list Field Functions 
      bool hasList() const { return this->list_ != nullptr;};
      void deleteList() { this->list_ = nullptr;};
      inline const vector<OutboundCallNumbers::List> & getList() const { DARABONBA_PTR_GET_CONST(list_, vector<OutboundCallNumbers::List>) };
      inline vector<OutboundCallNumbers::List> getList() { DARABONBA_PTR_GET(list_, vector<OutboundCallNumbers::List>) };
      inline OutboundCallNumbers& setList(const vector<OutboundCallNumbers::List> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
      inline OutboundCallNumbers& setList(vector<OutboundCallNumbers::List> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
      inline OutboundCallNumbers& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline OutboundCallNumbers& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline OutboundCallNumbers& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      shared_ptr<vector<OutboundCallNumbers::List>> list_ {};
      shared_ptr<int32_t> pageNumber_ {};
      shared_ptr<int32_t> pageSize_ {};
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->outboundCallNumbers_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListOutboundCallNumbersResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListOutboundCallNumbersResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListOutboundCallNumbersResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // outboundCallNumbers Field Functions 
    bool hasOutboundCallNumbers() const { return this->outboundCallNumbers_ != nullptr;};
    void deleteOutboundCallNumbers() { this->outboundCallNumbers_ = nullptr;};
    inline const ListOutboundCallNumbersResponseBody::OutboundCallNumbers & getOutboundCallNumbers() const { DARABONBA_PTR_GET_CONST(outboundCallNumbers_, ListOutboundCallNumbersResponseBody::OutboundCallNumbers) };
    inline ListOutboundCallNumbersResponseBody::OutboundCallNumbers getOutboundCallNumbers() { DARABONBA_PTR_GET(outboundCallNumbers_, ListOutboundCallNumbersResponseBody::OutboundCallNumbers) };
    inline ListOutboundCallNumbersResponseBody& setOutboundCallNumbers(const ListOutboundCallNumbersResponseBody::OutboundCallNumbers & outboundCallNumbers) { DARABONBA_PTR_SET_VALUE(outboundCallNumbers_, outboundCallNumbers) };
    inline ListOutboundCallNumbersResponseBody& setOutboundCallNumbers(ListOutboundCallNumbersResponseBody::OutboundCallNumbers && outboundCallNumbers) { DARABONBA_PTR_SET_RVALUE(outboundCallNumbers_, outboundCallNumbers) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListOutboundCallNumbersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListOutboundCallNumbersResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<ListOutboundCallNumbersResponseBody::OutboundCallNumbers> outboundCallNumbers_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
