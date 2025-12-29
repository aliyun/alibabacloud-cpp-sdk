// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDIALOGUETEMPLATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDIALOGUETEMPLATERESPONSEBODY_HPP_
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
  class ListDialogueTemplateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDialogueTemplateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, ListDialogueTemplateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    ListDialogueTemplateResponseBody() = default ;
    ListDialogueTemplateResponseBody(const ListDialogueTemplateResponseBody &) = default ;
    ListDialogueTemplateResponseBody(ListDialogueTemplateResponseBody &&) = default ;
    ListDialogueTemplateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDialogueTemplateResponseBody() = default ;
    ListDialogueTemplateResponseBody& operator=(const ListDialogueTemplateResponseBody &) = default ;
    ListDialogueTemplateResponseBody& operator=(ListDialogueTemplateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(TemplateDetail, templateDetail_);
        DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
        DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(TemplateDetail, templateDetail_);
        DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
        DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
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
      class TemplateDetail : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TemplateDetail& obj) { 
          DARABONBA_PTR_TO_JSON(FirstDialogueTemplate, firstDialogueTemplate_);
          DARABONBA_PTR_TO_JSON(SecondDialogueTemplate, secondDialogueTemplate_);
        };
        friend void from_json(const Darabonba::Json& j, TemplateDetail& obj) { 
          DARABONBA_PTR_FROM_JSON(FirstDialogueTemplate, firstDialogueTemplate_);
          DARABONBA_PTR_FROM_JSON(SecondDialogueTemplate, secondDialogueTemplate_);
        };
        TemplateDetail() = default ;
        TemplateDetail(const TemplateDetail &) = default ;
        TemplateDetail(TemplateDetail &&) = default ;
        TemplateDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TemplateDetail() = default ;
        TemplateDetail& operator=(const TemplateDetail &) = default ;
        TemplateDetail& operator=(TemplateDetail &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class SecondDialogueTemplate : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const SecondDialogueTemplate& obj) { 
            DARABONBA_PTR_TO_JSON(NonzeroPriceNoAnswer, nonzeroPriceNoAnswer_);
            DARABONBA_PTR_TO_JSON(NonzeroPriceYesAnswer, nonzeroPriceYesAnswer_);
          };
          friend void from_json(const Darabonba::Json& j, SecondDialogueTemplate& obj) { 
            DARABONBA_PTR_FROM_JSON(NonzeroPriceNoAnswer, nonzeroPriceNoAnswer_);
            DARABONBA_PTR_FROM_JSON(NonzeroPriceYesAnswer, nonzeroPriceYesAnswer_);
          };
          SecondDialogueTemplate() = default ;
          SecondDialogueTemplate(const SecondDialogueTemplate &) = default ;
          SecondDialogueTemplate(SecondDialogueTemplate &&) = default ;
          SecondDialogueTemplate(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~SecondDialogueTemplate() = default ;
          SecondDialogueTemplate& operator=(const SecondDialogueTemplate &) = default ;
          SecondDialogueTemplate& operator=(SecondDialogueTemplate &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->nonzeroPriceNoAnswer_ == nullptr
        && this->nonzeroPriceYesAnswer_ == nullptr; };
          // nonzeroPriceNoAnswer Field Functions 
          bool hasNonzeroPriceNoAnswer() const { return this->nonzeroPriceNoAnswer_ != nullptr;};
          void deleteNonzeroPriceNoAnswer() { this->nonzeroPriceNoAnswer_ = nullptr;};
          inline string getNonzeroPriceNoAnswer() const { DARABONBA_PTR_GET_DEFAULT(nonzeroPriceNoAnswer_, "") };
          inline SecondDialogueTemplate& setNonzeroPriceNoAnswer(string nonzeroPriceNoAnswer) { DARABONBA_PTR_SET_VALUE(nonzeroPriceNoAnswer_, nonzeroPriceNoAnswer) };


          // nonzeroPriceYesAnswer Field Functions 
          bool hasNonzeroPriceYesAnswer() const { return this->nonzeroPriceYesAnswer_ != nullptr;};
          void deleteNonzeroPriceYesAnswer() { this->nonzeroPriceYesAnswer_ = nullptr;};
          inline string getNonzeroPriceYesAnswer() const { DARABONBA_PTR_GET_DEFAULT(nonzeroPriceYesAnswer_, "") };
          inline SecondDialogueTemplate& setNonzeroPriceYesAnswer(string nonzeroPriceYesAnswer) { DARABONBA_PTR_SET_VALUE(nonzeroPriceYesAnswer_, nonzeroPriceYesAnswer) };


        protected:
          shared_ptr<string> nonzeroPriceNoAnswer_ {};
          shared_ptr<string> nonzeroPriceYesAnswer_ {};
        };

        class FirstDialogueTemplate : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const FirstDialogueTemplate& obj) { 
            DARABONBA_PTR_TO_JSON(NonzeroPriceYesAnswer, nonzeroPriceYesAnswer_);
            DARABONBA_PTR_TO_JSON(ZeroPriceNoAnswer, zeroPriceNoAnswer_);
            DARABONBA_PTR_TO_JSON(ZeroPriceYesAnswer, zeroPriceYesAnswer_);
          };
          friend void from_json(const Darabonba::Json& j, FirstDialogueTemplate& obj) { 
            DARABONBA_PTR_FROM_JSON(NonzeroPriceYesAnswer, nonzeroPriceYesAnswer_);
            DARABONBA_PTR_FROM_JSON(ZeroPriceNoAnswer, zeroPriceNoAnswer_);
            DARABONBA_PTR_FROM_JSON(ZeroPriceYesAnswer, zeroPriceYesAnswer_);
          };
          FirstDialogueTemplate() = default ;
          FirstDialogueTemplate(const FirstDialogueTemplate &) = default ;
          FirstDialogueTemplate(FirstDialogueTemplate &&) = default ;
          FirstDialogueTemplate(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~FirstDialogueTemplate() = default ;
          FirstDialogueTemplate& operator=(const FirstDialogueTemplate &) = default ;
          FirstDialogueTemplate& operator=(FirstDialogueTemplate &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->nonzeroPriceYesAnswer_ == nullptr
        && this->zeroPriceNoAnswer_ == nullptr && this->zeroPriceYesAnswer_ == nullptr; };
          // nonzeroPriceYesAnswer Field Functions 
          bool hasNonzeroPriceYesAnswer() const { return this->nonzeroPriceYesAnswer_ != nullptr;};
          void deleteNonzeroPriceYesAnswer() { this->nonzeroPriceYesAnswer_ = nullptr;};
          inline string getNonzeroPriceYesAnswer() const { DARABONBA_PTR_GET_DEFAULT(nonzeroPriceYesAnswer_, "") };
          inline FirstDialogueTemplate& setNonzeroPriceYesAnswer(string nonzeroPriceYesAnswer) { DARABONBA_PTR_SET_VALUE(nonzeroPriceYesAnswer_, nonzeroPriceYesAnswer) };


          // zeroPriceNoAnswer Field Functions 
          bool hasZeroPriceNoAnswer() const { return this->zeroPriceNoAnswer_ != nullptr;};
          void deleteZeroPriceNoAnswer() { this->zeroPriceNoAnswer_ = nullptr;};
          inline string getZeroPriceNoAnswer() const { DARABONBA_PTR_GET_DEFAULT(zeroPriceNoAnswer_, "") };
          inline FirstDialogueTemplate& setZeroPriceNoAnswer(string zeroPriceNoAnswer) { DARABONBA_PTR_SET_VALUE(zeroPriceNoAnswer_, zeroPriceNoAnswer) };


          // zeroPriceYesAnswer Field Functions 
          bool hasZeroPriceYesAnswer() const { return this->zeroPriceYesAnswer_ != nullptr;};
          void deleteZeroPriceYesAnswer() { this->zeroPriceYesAnswer_ = nullptr;};
          inline string getZeroPriceYesAnswer() const { DARABONBA_PTR_GET_DEFAULT(zeroPriceYesAnswer_, "") };
          inline FirstDialogueTemplate& setZeroPriceYesAnswer(string zeroPriceYesAnswer) { DARABONBA_PTR_SET_VALUE(zeroPriceYesAnswer_, zeroPriceYesAnswer) };


        protected:
          shared_ptr<string> nonzeroPriceYesAnswer_ {};
          shared_ptr<string> zeroPriceNoAnswer_ {};
          shared_ptr<string> zeroPriceYesAnswer_ {};
        };

        virtual bool empty() const override { return this->firstDialogueTemplate_ == nullptr
        && this->secondDialogueTemplate_ == nullptr; };
        // firstDialogueTemplate Field Functions 
        bool hasFirstDialogueTemplate() const { return this->firstDialogueTemplate_ != nullptr;};
        void deleteFirstDialogueTemplate() { this->firstDialogueTemplate_ = nullptr;};
        inline const TemplateDetail::FirstDialogueTemplate & getFirstDialogueTemplate() const { DARABONBA_PTR_GET_CONST(firstDialogueTemplate_, TemplateDetail::FirstDialogueTemplate) };
        inline TemplateDetail::FirstDialogueTemplate getFirstDialogueTemplate() { DARABONBA_PTR_GET(firstDialogueTemplate_, TemplateDetail::FirstDialogueTemplate) };
        inline TemplateDetail& setFirstDialogueTemplate(const TemplateDetail::FirstDialogueTemplate & firstDialogueTemplate) { DARABONBA_PTR_SET_VALUE(firstDialogueTemplate_, firstDialogueTemplate) };
        inline TemplateDetail& setFirstDialogueTemplate(TemplateDetail::FirstDialogueTemplate && firstDialogueTemplate) { DARABONBA_PTR_SET_RVALUE(firstDialogueTemplate_, firstDialogueTemplate) };


        // secondDialogueTemplate Field Functions 
        bool hasSecondDialogueTemplate() const { return this->secondDialogueTemplate_ != nullptr;};
        void deleteSecondDialogueTemplate() { this->secondDialogueTemplate_ = nullptr;};
        inline const TemplateDetail::SecondDialogueTemplate & getSecondDialogueTemplate() const { DARABONBA_PTR_GET_CONST(secondDialogueTemplate_, TemplateDetail::SecondDialogueTemplate) };
        inline TemplateDetail::SecondDialogueTemplate getSecondDialogueTemplate() { DARABONBA_PTR_GET(secondDialogueTemplate_, TemplateDetail::SecondDialogueTemplate) };
        inline TemplateDetail& setSecondDialogueTemplate(const TemplateDetail::SecondDialogueTemplate & secondDialogueTemplate) { DARABONBA_PTR_SET_VALUE(secondDialogueTemplate_, secondDialogueTemplate) };
        inline TemplateDetail& setSecondDialogueTemplate(TemplateDetail::SecondDialogueTemplate && secondDialogueTemplate) { DARABONBA_PTR_SET_RVALUE(secondDialogueTemplate_, secondDialogueTemplate) };


      protected:
        shared_ptr<TemplateDetail::FirstDialogueTemplate> firstDialogueTemplate_ {};
        shared_ptr<TemplateDetail::SecondDialogueTemplate> secondDialogueTemplate_ {};
      };

      virtual bool empty() const override { return this->templateDetail_ == nullptr
        && this->templateId_ == nullptr && this->templateName_ == nullptr && this->type_ == nullptr; };
      // templateDetail Field Functions 
      bool hasTemplateDetail() const { return this->templateDetail_ != nullptr;};
      void deleteTemplateDetail() { this->templateDetail_ = nullptr;};
      inline const Result::TemplateDetail & getTemplateDetail() const { DARABONBA_PTR_GET_CONST(templateDetail_, Result::TemplateDetail) };
      inline Result::TemplateDetail getTemplateDetail() { DARABONBA_PTR_GET(templateDetail_, Result::TemplateDetail) };
      inline Result& setTemplateDetail(const Result::TemplateDetail & templateDetail) { DARABONBA_PTR_SET_VALUE(templateDetail_, templateDetail) };
      inline Result& setTemplateDetail(Result::TemplateDetail && templateDetail) { DARABONBA_PTR_SET_RVALUE(templateDetail_, templateDetail) };


      // templateId Field Functions 
      bool hasTemplateId() const { return this->templateId_ != nullptr;};
      void deleteTemplateId() { this->templateId_ = nullptr;};
      inline int64_t getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, 0L) };
      inline Result& setTemplateId(int64_t templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


      // templateName Field Functions 
      bool hasTemplateName() const { return this->templateName_ != nullptr;};
      void deleteTemplateName() { this->templateName_ = nullptr;};
      inline string getTemplateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
      inline Result& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Result& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      shared_ptr<Result::TemplateDetail> templateDetail_ {};
      shared_ptr<int64_t> templateId_ {};
      shared_ptr<string> templateName_ {};
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->result_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline ListDialogueTemplateResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListDialogueTemplateResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDialogueTemplateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<ListDialogueTemplateResponseBody::Result> & getResult() const { DARABONBA_PTR_GET_CONST(result_, vector<ListDialogueTemplateResponseBody::Result>) };
    inline vector<ListDialogueTemplateResponseBody::Result> getResult() { DARABONBA_PTR_GET(result_, vector<ListDialogueTemplateResponseBody::Result>) };
    inline ListDialogueTemplateResponseBody& setResult(const vector<ListDialogueTemplateResponseBody::Result> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline ListDialogueTemplateResponseBody& setResult(vector<ListDialogueTemplateResponseBody::Result> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    shared_ptr<int32_t> code_ {};
    shared_ptr<string> message_ {};
    // RequestId
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<ListDialogueTemplateResponseBody::Result>> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieip_1_0
#endif
