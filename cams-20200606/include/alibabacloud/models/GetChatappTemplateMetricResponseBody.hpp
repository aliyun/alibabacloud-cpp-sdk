// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCHATAPPTEMPLATEMETRICRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCHATAPPTEMPLATEMETRICRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cams20200606
{
namespace Models
{
  class GetChatappTemplateMetricResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetChatappTemplateMetricResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetChatappTemplateMetricResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetChatappTemplateMetricResponseBody() = default ;
    GetChatappTemplateMetricResponseBody(const GetChatappTemplateMetricResponseBody &) = default ;
    GetChatappTemplateMetricResponseBody(GetChatappTemplateMetricResponseBody &&) = default ;
    GetChatappTemplateMetricResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetChatappTemplateMetricResponseBody() = default ;
    GetChatappTemplateMetricResponseBody& operator=(const GetChatappTemplateMetricResponseBody &) = default ;
    GetChatappTemplateMetricResponseBody& operator=(GetChatappTemplateMetricResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Cliented, cliented_);
        DARABONBA_PTR_TO_JSON(DeliveredCount, deliveredCount_);
        DARABONBA_PTR_TO_JSON(End, end_);
        DARABONBA_PTR_TO_JSON(Language, language_);
        DARABONBA_PTR_TO_JSON(ReadCount, readCount_);
        DARABONBA_PTR_TO_JSON(SentCount, sentCount_);
        DARABONBA_PTR_TO_JSON(Start, start_);
        DARABONBA_PTR_TO_JSON(TemplateCode, templateCode_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Cliented, cliented_);
        DARABONBA_PTR_FROM_JSON(DeliveredCount, deliveredCount_);
        DARABONBA_PTR_FROM_JSON(End, end_);
        DARABONBA_PTR_FROM_JSON(Language, language_);
        DARABONBA_PTR_FROM_JSON(ReadCount, readCount_);
        DARABONBA_PTR_FROM_JSON(SentCount, sentCount_);
        DARABONBA_PTR_FROM_JSON(Start, start_);
        DARABONBA_PTR_FROM_JSON(TemplateCode, templateCode_);
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
      class Cliented : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Cliented& obj) { 
          DARABONBA_PTR_TO_JSON(ButtonContent, buttonContent_);
          DARABONBA_PTR_TO_JSON(Count, count_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, Cliented& obj) { 
          DARABONBA_PTR_FROM_JSON(ButtonContent, buttonContent_);
          DARABONBA_PTR_FROM_JSON(Count, count_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        Cliented() = default ;
        Cliented(const Cliented &) = default ;
        Cliented(Cliented &&) = default ;
        Cliented(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Cliented() = default ;
        Cliented& operator=(const Cliented &) = default ;
        Cliented& operator=(Cliented &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->buttonContent_ == nullptr
        && this->count_ == nullptr && this->type_ == nullptr; };
        // buttonContent Field Functions 
        bool hasButtonContent() const { return this->buttonContent_ != nullptr;};
        void deleteButtonContent() { this->buttonContent_ = nullptr;};
        inline string getButtonContent() const { DARABONBA_PTR_GET_DEFAULT(buttonContent_, "") };
        inline Cliented& setButtonContent(string buttonContent) { DARABONBA_PTR_SET_VALUE(buttonContent_, buttonContent) };


        // count Field Functions 
        bool hasCount() const { return this->count_ != nullptr;};
        void deleteCount() { this->count_ = nullptr;};
        inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
        inline Cliented& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Cliented& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // The text on the button.
        shared_ptr<string> buttonContent_ {};
        // The number of clicks.
        shared_ptr<int32_t> count_ {};
        // The button type.
        // 
        // Valid values:
        // 
        // *   phone_number_button
        // *   url_button
        // *   quick_relpy_button
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->cliented_ == nullptr
        && this->deliveredCount_ == nullptr && this->end_ == nullptr && this->language_ == nullptr && this->readCount_ == nullptr && this->sentCount_ == nullptr
        && this->start_ == nullptr && this->templateCode_ == nullptr; };
      // cliented Field Functions 
      bool hasCliented() const { return this->cliented_ != nullptr;};
      void deleteCliented() { this->cliented_ = nullptr;};
      inline const vector<Data::Cliented> & getCliented() const { DARABONBA_PTR_GET_CONST(cliented_, vector<Data::Cliented>) };
      inline vector<Data::Cliented> getCliented() { DARABONBA_PTR_GET(cliented_, vector<Data::Cliented>) };
      inline Data& setCliented(const vector<Data::Cliented> & cliented) { DARABONBA_PTR_SET_VALUE(cliented_, cliented) };
      inline Data& setCliented(vector<Data::Cliented> && cliented) { DARABONBA_PTR_SET_RVALUE(cliented_, cliented) };


      // deliveredCount Field Functions 
      bool hasDeliveredCount() const { return this->deliveredCount_ != nullptr;};
      void deleteDeliveredCount() { this->deliveredCount_ = nullptr;};
      inline int32_t getDeliveredCount() const { DARABONBA_PTR_GET_DEFAULT(deliveredCount_, 0) };
      inline Data& setDeliveredCount(int32_t deliveredCount) { DARABONBA_PTR_SET_VALUE(deliveredCount_, deliveredCount) };


      // end Field Functions 
      bool hasEnd() const { return this->end_ != nullptr;};
      void deleteEnd() { this->end_ = nullptr;};
      inline int64_t getEnd() const { DARABONBA_PTR_GET_DEFAULT(end_, 0L) };
      inline Data& setEnd(int64_t end) { DARABONBA_PTR_SET_VALUE(end_, end) };


      // language Field Functions 
      bool hasLanguage() const { return this->language_ != nullptr;};
      void deleteLanguage() { this->language_ = nullptr;};
      inline string getLanguage() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
      inline Data& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


      // readCount Field Functions 
      bool hasReadCount() const { return this->readCount_ != nullptr;};
      void deleteReadCount() { this->readCount_ = nullptr;};
      inline int32_t getReadCount() const { DARABONBA_PTR_GET_DEFAULT(readCount_, 0) };
      inline Data& setReadCount(int32_t readCount) { DARABONBA_PTR_SET_VALUE(readCount_, readCount) };


      // sentCount Field Functions 
      bool hasSentCount() const { return this->sentCount_ != nullptr;};
      void deleteSentCount() { this->sentCount_ = nullptr;};
      inline int32_t getSentCount() const { DARABONBA_PTR_GET_DEFAULT(sentCount_, 0) };
      inline Data& setSentCount(int32_t sentCount) { DARABONBA_PTR_SET_VALUE(sentCount_, sentCount) };


      // start Field Functions 
      bool hasStart() const { return this->start_ != nullptr;};
      void deleteStart() { this->start_ = nullptr;};
      inline int64_t getStart() const { DARABONBA_PTR_GET_DEFAULT(start_, 0L) };
      inline Data& setStart(int64_t start) { DARABONBA_PTR_SET_VALUE(start_, start) };


      // templateCode Field Functions 
      bool hasTemplateCode() const { return this->templateCode_ != nullptr;};
      void deleteTemplateCode() { this->templateCode_ = nullptr;};
      inline string getTemplateCode() const { DARABONBA_PTR_GET_DEFAULT(templateCode_, "") };
      inline Data& setTemplateCode(string templateCode) { DARABONBA_PTR_SET_VALUE(templateCode_, templateCode) };


    protected:
      // The statistics on button clicks.
      shared_ptr<vector<Data::Cliented>> cliented_ {};
      // The number of delivered messages.
      shared_ptr<int32_t> deliveredCount_ {};
      // The end of the time range you queried.
      shared_ptr<int64_t> end_ {};
      // The template language.
      shared_ptr<string> language_ {};
      // The number of read messages.
      shared_ptr<int32_t> readCount_ {};
      // The number of sent messages.
      shared_ptr<int32_t> sentCount_ {};
      // The beginning of the time range you queried.
      shared_ptr<int64_t> start_ {};
      // The template code.
      shared_ptr<string> templateCode_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline GetChatappTemplateMetricResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetChatappTemplateMetricResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<GetChatappTemplateMetricResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<GetChatappTemplateMetricResponseBody::Data>) };
    inline vector<GetChatappTemplateMetricResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<GetChatappTemplateMetricResponseBody::Data>) };
    inline GetChatappTemplateMetricResponseBody& setData(const vector<GetChatappTemplateMetricResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetChatappTemplateMetricResponseBody& setData(vector<GetChatappTemplateMetricResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetChatappTemplateMetricResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetChatappTemplateMetricResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details about the access denial.
    shared_ptr<string> accessDeniedDetail_ {};
    // The value OK indicates that the request was successful.
    shared_ptr<string> code_ {};
    // The returned data.
    shared_ptr<vector<GetChatappTemplateMetricResponseBody::Data>> data_ {};
    // The error message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cams20200606
#endif
