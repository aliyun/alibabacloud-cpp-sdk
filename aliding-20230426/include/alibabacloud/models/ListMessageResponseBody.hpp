// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMESSAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTMESSAGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class ListMessageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMessageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(messages, messages_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListMessageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(messages, messages_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    ListMessageResponseBody() = default ;
    ListMessageResponseBody(const ListMessageResponseBody &) = default ;
    ListMessageResponseBody(ListMessageResponseBody &&) = default ;
    ListMessageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMessageResponseBody() = default ;
    ListMessageResponseBody& operator=(const ListMessageResponseBody &) = default ;
    ListMessageResponseBody& operator=(ListMessageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Messages : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Messages& obj) { 
        DARABONBA_PTR_TO_JSON(content, content_);
        DARABONBA_PTR_TO_JSON(contentDesc, contentDesc_);
        DARABONBA_PTR_TO_JSON(createAt, createAt_);
        DARABONBA_PTR_TO_JSON(id, id_);
        DARABONBA_PTR_TO_JSON(role, role_);
        DARABONBA_PTR_TO_JSON(runId, runId_);
        DARABONBA_PTR_TO_JSON(threadId, threadId_);
      };
      friend void from_json(const Darabonba::Json& j, Messages& obj) { 
        DARABONBA_PTR_FROM_JSON(content, content_);
        DARABONBA_PTR_FROM_JSON(contentDesc, contentDesc_);
        DARABONBA_PTR_FROM_JSON(createAt, createAt_);
        DARABONBA_PTR_FROM_JSON(id, id_);
        DARABONBA_PTR_FROM_JSON(role, role_);
        DARABONBA_PTR_FROM_JSON(runId, runId_);
        DARABONBA_PTR_FROM_JSON(threadId, threadId_);
      };
      Messages() = default ;
      Messages(const Messages &) = default ;
      Messages(Messages &&) = default ;
      Messages(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Messages() = default ;
      Messages& operator=(const Messages &) = default ;
      Messages& operator=(Messages &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Content : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Content& obj) { 
          DARABONBA_PTR_TO_JSON(cardCallback, cardCallback_);
          DARABONBA_PTR_TO_JSON(dingCard, dingCard_);
          DARABONBA_PTR_TO_JSON(dingNormalCard, dingNormalCard_);
          DARABONBA_PTR_TO_JSON(markdown, markdown_);
          DARABONBA_PTR_TO_JSON(structView, structView_);
          DARABONBA_PTR_TO_JSON(text, text_);
          DARABONBA_PTR_TO_JSON(type, type_);
        };
        friend void from_json(const Darabonba::Json& j, Content& obj) { 
          DARABONBA_PTR_FROM_JSON(cardCallback, cardCallback_);
          DARABONBA_PTR_FROM_JSON(dingCard, dingCard_);
          DARABONBA_PTR_FROM_JSON(dingNormalCard, dingNormalCard_);
          DARABONBA_PTR_FROM_JSON(markdown, markdown_);
          DARABONBA_PTR_FROM_JSON(structView, structView_);
          DARABONBA_PTR_FROM_JSON(text, text_);
          DARABONBA_PTR_FROM_JSON(type, type_);
        };
        Content() = default ;
        Content(const Content &) = default ;
        Content(Content &&) = default ;
        Content(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Content() = default ;
        Content& operator=(const Content &) = default ;
        Content& operator=(Content &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Text : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Text& obj) { 
            DARABONBA_PTR_TO_JSON(value, value_);
          };
          friend void from_json(const Darabonba::Json& j, Text& obj) { 
            DARABONBA_PTR_FROM_JSON(value, value_);
          };
          Text() = default ;
          Text(const Text &) = default ;
          Text(Text &&) = default ;
          Text(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Text() = default ;
          Text& operator=(const Text &) = default ;
          Text& operator=(Text &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->value_ == nullptr; };
          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline Text& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          shared_ptr<string> value_ {};
        };

        class StructView : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const StructView& obj) { 
            DARABONBA_PTR_TO_JSON(parts, parts_);
          };
          friend void from_json(const Darabonba::Json& j, StructView& obj) { 
            DARABONBA_PTR_FROM_JSON(parts, parts_);
          };
          StructView() = default ;
          StructView(const StructView &) = default ;
          StructView(StructView &&) = default ;
          StructView(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~StructView() = default ;
          StructView& operator=(const StructView &) = default ;
          StructView& operator=(StructView &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Parts : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Parts& obj) { 
              DARABONBA_PTR_TO_JSON(append, append_);
              DARABONBA_PTR_TO_JSON(dataPart, dataPart_);
              DARABONBA_PTR_TO_JSON(finish, finish_);
              DARABONBA_PTR_TO_JSON(partDesc, partDesc_);
              DARABONBA_PTR_TO_JSON(partId, partId_);
              DARABONBA_PTR_TO_JSON(reasonPart, reasonPart_);
              DARABONBA_PTR_TO_JSON(recommendPart, recommendPart_);
              DARABONBA_PTR_TO_JSON(referencePart, referencePart_);
              DARABONBA_PTR_TO_JSON(textPart, textPart_);
              DARABONBA_PTR_TO_JSON(type, type_);
            };
            friend void from_json(const Darabonba::Json& j, Parts& obj) { 
              DARABONBA_PTR_FROM_JSON(append, append_);
              DARABONBA_PTR_FROM_JSON(dataPart, dataPart_);
              DARABONBA_PTR_FROM_JSON(finish, finish_);
              DARABONBA_PTR_FROM_JSON(partDesc, partDesc_);
              DARABONBA_PTR_FROM_JSON(partId, partId_);
              DARABONBA_PTR_FROM_JSON(reasonPart, reasonPart_);
              DARABONBA_PTR_FROM_JSON(recommendPart, recommendPart_);
              DARABONBA_PTR_FROM_JSON(referencePart, referencePart_);
              DARABONBA_PTR_FROM_JSON(textPart, textPart_);
              DARABONBA_PTR_FROM_JSON(type, type_);
            };
            Parts() = default ;
            Parts(const Parts &) = default ;
            Parts(Parts &&) = default ;
            Parts(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Parts() = default ;
            Parts& operator=(const Parts &) = default ;
            Parts& operator=(Parts &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class TextPart : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const TextPart& obj) { 
                DARABONBA_PTR_TO_JSON(text, text_);
              };
              friend void from_json(const Darabonba::Json& j, TextPart& obj) { 
                DARABONBA_PTR_FROM_JSON(text, text_);
              };
              TextPart() = default ;
              TextPart(const TextPart &) = default ;
              TextPart(TextPart &&) = default ;
              TextPart(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~TextPart() = default ;
              TextPart& operator=(const TextPart &) = default ;
              TextPart& operator=(TextPart &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->text_ == nullptr; };
              // text Field Functions 
              bool hasText() const { return this->text_ != nullptr;};
              void deleteText() { this->text_ = nullptr;};
              inline string getText() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
              inline TextPart& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


            protected:
              shared_ptr<string> text_ {};
            };

            class ReferencePart : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const ReferencePart& obj) { 
                DARABONBA_PTR_TO_JSON(references, references_);
              };
              friend void from_json(const Darabonba::Json& j, ReferencePart& obj) { 
                DARABONBA_PTR_FROM_JSON(references, references_);
              };
              ReferencePart() = default ;
              ReferencePart(const ReferencePart &) = default ;
              ReferencePart(ReferencePart &&) = default ;
              ReferencePart(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~ReferencePart() = default ;
              ReferencePart& operator=(const ReferencePart &) = default ;
              ReferencePart& operator=(ReferencePart &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              class References : public Darabonba::Model {
              public:
                friend void to_json(Darabonba::Json& j, const References& obj) { 
                  DARABONBA_PTR_TO_JSON(index, index_);
                  DARABONBA_PTR_TO_JSON(name, name_);
                  DARABONBA_PTR_TO_JSON(sourceCode, sourceCode_);
                  DARABONBA_PTR_TO_JSON(sourceIcon, sourceIcon_);
                  DARABONBA_PTR_TO_JSON(summary, summary_);
                  DARABONBA_PTR_TO_JSON(title, title_);
                  DARABONBA_PTR_TO_JSON(url, url_);
                };
                friend void from_json(const Darabonba::Json& j, References& obj) { 
                  DARABONBA_PTR_FROM_JSON(index, index_);
                  DARABONBA_PTR_FROM_JSON(name, name_);
                  DARABONBA_PTR_FROM_JSON(sourceCode, sourceCode_);
                  DARABONBA_PTR_FROM_JSON(sourceIcon, sourceIcon_);
                  DARABONBA_PTR_FROM_JSON(summary, summary_);
                  DARABONBA_PTR_FROM_JSON(title, title_);
                  DARABONBA_PTR_FROM_JSON(url, url_);
                };
                References() = default ;
                References(const References &) = default ;
                References(References &&) = default ;
                References(const Darabonba::Json & obj) { from_json(obj, *this); };
                virtual ~References() = default ;
                References& operator=(const References &) = default ;
                References& operator=(References &&) = default ;
                virtual void validate() const override {
                };
                virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                virtual bool empty() const override { return this->index_ == nullptr
        && this->name_ == nullptr && this->sourceCode_ == nullptr && this->sourceIcon_ == nullptr && this->summary_ == nullptr && this->title_ == nullptr
        && this->url_ == nullptr; };
                // index Field Functions 
                bool hasIndex() const { return this->index_ != nullptr;};
                void deleteIndex() { this->index_ = nullptr;};
                inline string getIndex() const { DARABONBA_PTR_GET_DEFAULT(index_, "") };
                inline References& setIndex(string index) { DARABONBA_PTR_SET_VALUE(index_, index) };


                // name Field Functions 
                bool hasName() const { return this->name_ != nullptr;};
                void deleteName() { this->name_ = nullptr;};
                inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
                inline References& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


                // sourceCode Field Functions 
                bool hasSourceCode() const { return this->sourceCode_ != nullptr;};
                void deleteSourceCode() { this->sourceCode_ = nullptr;};
                inline string getSourceCode() const { DARABONBA_PTR_GET_DEFAULT(sourceCode_, "") };
                inline References& setSourceCode(string sourceCode) { DARABONBA_PTR_SET_VALUE(sourceCode_, sourceCode) };


                // sourceIcon Field Functions 
                bool hasSourceIcon() const { return this->sourceIcon_ != nullptr;};
                void deleteSourceIcon() { this->sourceIcon_ = nullptr;};
                inline string getSourceIcon() const { DARABONBA_PTR_GET_DEFAULT(sourceIcon_, "") };
                inline References& setSourceIcon(string sourceIcon) { DARABONBA_PTR_SET_VALUE(sourceIcon_, sourceIcon) };


                // summary Field Functions 
                bool hasSummary() const { return this->summary_ != nullptr;};
                void deleteSummary() { this->summary_ = nullptr;};
                inline string getSummary() const { DARABONBA_PTR_GET_DEFAULT(summary_, "") };
                inline References& setSummary(string summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };


                // title Field Functions 
                bool hasTitle() const { return this->title_ != nullptr;};
                void deleteTitle() { this->title_ = nullptr;};
                inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
                inline References& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


                // url Field Functions 
                bool hasUrl() const { return this->url_ != nullptr;};
                void deleteUrl() { this->url_ = nullptr;};
                inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
                inline References& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


              protected:
                shared_ptr<string> index_ {};
                shared_ptr<string> name_ {};
                shared_ptr<string> sourceCode_ {};
                shared_ptr<string> sourceIcon_ {};
                shared_ptr<string> summary_ {};
                shared_ptr<string> title_ {};
                shared_ptr<string> url_ {};
              };

              virtual bool empty() const override { return this->references_ == nullptr; };
              // references Field Functions 
              bool hasReferences() const { return this->references_ != nullptr;};
              void deleteReferences() { this->references_ = nullptr;};
              inline const vector<ReferencePart::References> & getReferences() const { DARABONBA_PTR_GET_CONST(references_, vector<ReferencePart::References>) };
              inline vector<ReferencePart::References> getReferences() { DARABONBA_PTR_GET(references_, vector<ReferencePart::References>) };
              inline ReferencePart& setReferences(const vector<ReferencePart::References> & references) { DARABONBA_PTR_SET_VALUE(references_, references) };
              inline ReferencePart& setReferences(vector<ReferencePart::References> && references) { DARABONBA_PTR_SET_RVALUE(references_, references) };


            protected:
              shared_ptr<vector<ReferencePart::References>> references_ {};
            };

            class RecommendPart : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const RecommendPart& obj) { 
                DARABONBA_PTR_TO_JSON(recommends, recommends_);
              };
              friend void from_json(const Darabonba::Json& j, RecommendPart& obj) { 
                DARABONBA_PTR_FROM_JSON(recommends, recommends_);
              };
              RecommendPart() = default ;
              RecommendPart(const RecommendPart &) = default ;
              RecommendPart(RecommendPart &&) = default ;
              RecommendPart(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~RecommendPart() = default ;
              RecommendPart& operator=(const RecommendPart &) = default ;
              RecommendPart& operator=(RecommendPart &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              class Recommends : public Darabonba::Model {
              public:
                friend void to_json(Darabonba::Json& j, const Recommends& obj) { 
                  DARABONBA_PTR_TO_JSON(mobileUrl, mobileUrl_);
                  DARABONBA_PTR_TO_JSON(text, text_);
                  DARABONBA_PTR_TO_JSON(url, url_);
                };
                friend void from_json(const Darabonba::Json& j, Recommends& obj) { 
                  DARABONBA_PTR_FROM_JSON(mobileUrl, mobileUrl_);
                  DARABONBA_PTR_FROM_JSON(text, text_);
                  DARABONBA_PTR_FROM_JSON(url, url_);
                };
                Recommends() = default ;
                Recommends(const Recommends &) = default ;
                Recommends(Recommends &&) = default ;
                Recommends(const Darabonba::Json & obj) { from_json(obj, *this); };
                virtual ~Recommends() = default ;
                Recommends& operator=(const Recommends &) = default ;
                Recommends& operator=(Recommends &&) = default ;
                virtual void validate() const override {
                };
                virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                virtual bool empty() const override { return this->mobileUrl_ == nullptr
        && this->text_ == nullptr && this->url_ == nullptr; };
                // mobileUrl Field Functions 
                bool hasMobileUrl() const { return this->mobileUrl_ != nullptr;};
                void deleteMobileUrl() { this->mobileUrl_ = nullptr;};
                inline string getMobileUrl() const { DARABONBA_PTR_GET_DEFAULT(mobileUrl_, "") };
                inline Recommends& setMobileUrl(string mobileUrl) { DARABONBA_PTR_SET_VALUE(mobileUrl_, mobileUrl) };


                // text Field Functions 
                bool hasText() const { return this->text_ != nullptr;};
                void deleteText() { this->text_ = nullptr;};
                inline string getText() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
                inline Recommends& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


                // url Field Functions 
                bool hasUrl() const { return this->url_ != nullptr;};
                void deleteUrl() { this->url_ = nullptr;};
                inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
                inline Recommends& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


              protected:
                shared_ptr<string> mobileUrl_ {};
                shared_ptr<string> text_ {};
                shared_ptr<string> url_ {};
              };

              virtual bool empty() const override { return this->recommends_ == nullptr; };
              // recommends Field Functions 
              bool hasRecommends() const { return this->recommends_ != nullptr;};
              void deleteRecommends() { this->recommends_ = nullptr;};
              inline const vector<RecommendPart::Recommends> & getRecommends() const { DARABONBA_PTR_GET_CONST(recommends_, vector<RecommendPart::Recommends>) };
              inline vector<RecommendPart::Recommends> getRecommends() { DARABONBA_PTR_GET(recommends_, vector<RecommendPart::Recommends>) };
              inline RecommendPart& setRecommends(const vector<RecommendPart::Recommends> & recommends) { DARABONBA_PTR_SET_VALUE(recommends_, recommends) };
              inline RecommendPart& setRecommends(vector<RecommendPart::Recommends> && recommends) { DARABONBA_PTR_SET_RVALUE(recommends_, recommends) };


            protected:
              shared_ptr<vector<RecommendPart::Recommends>> recommends_ {};
            };

            class ReasonPart : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const ReasonPart& obj) { 
                DARABONBA_PTR_TO_JSON(reason, reason_);
              };
              friend void from_json(const Darabonba::Json& j, ReasonPart& obj) { 
                DARABONBA_PTR_FROM_JSON(reason, reason_);
              };
              ReasonPart() = default ;
              ReasonPart(const ReasonPart &) = default ;
              ReasonPart(ReasonPart &&) = default ;
              ReasonPart(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~ReasonPart() = default ;
              ReasonPart& operator=(const ReasonPart &) = default ;
              ReasonPart& operator=(ReasonPart &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->reason_ == nullptr; };
              // reason Field Functions 
              bool hasReason() const { return this->reason_ != nullptr;};
              void deleteReason() { this->reason_ = nullptr;};
              inline string getReason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
              inline ReasonPart& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


            protected:
              shared_ptr<string> reason_ {};
            };

            class DataPart : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const DataPart& obj) { 
                DARABONBA_ANY_TO_JSON(data, data_);
              };
              friend void from_json(const Darabonba::Json& j, DataPart& obj) { 
                DARABONBA_ANY_FROM_JSON(data, data_);
              };
              DataPart() = default ;
              DataPart(const DataPart &) = default ;
              DataPart(DataPart &&) = default ;
              DataPart(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~DataPart() = default ;
              DataPart& operator=(const DataPart &) = default ;
              DataPart& operator=(DataPart &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->data_ == nullptr; };
              // data Field Functions 
              bool hasData() const { return this->data_ != nullptr;};
              void deleteData() { this->data_ = nullptr;};
              inline               const Darabonba::Json & getData() const { DARABONBA_GET(data_) };
              Darabonba::Json & getData() { DARABONBA_GET(data_) };
              inline DataPart& setData(const Darabonba::Json & data) { DARABONBA_SET_VALUE(data_, data) };
              inline DataPart& setData(Darabonba::Json && data) { DARABONBA_SET_RVALUE(data_, data) };


            protected:
              Darabonba::Json data_ {};
            };

            virtual bool empty() const override { return this->append_ == nullptr
        && this->dataPart_ == nullptr && this->finish_ == nullptr && this->partDesc_ == nullptr && this->partId_ == nullptr && this->reasonPart_ == nullptr
        && this->recommendPart_ == nullptr && this->referencePart_ == nullptr && this->textPart_ == nullptr && this->type_ == nullptr; };
            // append Field Functions 
            bool hasAppend() const { return this->append_ != nullptr;};
            void deleteAppend() { this->append_ = nullptr;};
            inline bool getAppend() const { DARABONBA_PTR_GET_DEFAULT(append_, false) };
            inline Parts& setAppend(bool append) { DARABONBA_PTR_SET_VALUE(append_, append) };


            // dataPart Field Functions 
            bool hasDataPart() const { return this->dataPart_ != nullptr;};
            void deleteDataPart() { this->dataPart_ = nullptr;};
            inline const Parts::DataPart & getDataPart() const { DARABONBA_PTR_GET_CONST(dataPart_, Parts::DataPart) };
            inline Parts::DataPart getDataPart() { DARABONBA_PTR_GET(dataPart_, Parts::DataPart) };
            inline Parts& setDataPart(const Parts::DataPart & dataPart) { DARABONBA_PTR_SET_VALUE(dataPart_, dataPart) };
            inline Parts& setDataPart(Parts::DataPart && dataPart) { DARABONBA_PTR_SET_RVALUE(dataPart_, dataPart) };


            // finish Field Functions 
            bool hasFinish() const { return this->finish_ != nullptr;};
            void deleteFinish() { this->finish_ = nullptr;};
            inline bool getFinish() const { DARABONBA_PTR_GET_DEFAULT(finish_, false) };
            inline Parts& setFinish(bool finish) { DARABONBA_PTR_SET_VALUE(finish_, finish) };


            // partDesc Field Functions 
            bool hasPartDesc() const { return this->partDesc_ != nullptr;};
            void deletePartDesc() { this->partDesc_ = nullptr;};
            inline string getPartDesc() const { DARABONBA_PTR_GET_DEFAULT(partDesc_, "") };
            inline Parts& setPartDesc(string partDesc) { DARABONBA_PTR_SET_VALUE(partDesc_, partDesc) };


            // partId Field Functions 
            bool hasPartId() const { return this->partId_ != nullptr;};
            void deletePartId() { this->partId_ = nullptr;};
            inline string getPartId() const { DARABONBA_PTR_GET_DEFAULT(partId_, "") };
            inline Parts& setPartId(string partId) { DARABONBA_PTR_SET_VALUE(partId_, partId) };


            // reasonPart Field Functions 
            bool hasReasonPart() const { return this->reasonPart_ != nullptr;};
            void deleteReasonPart() { this->reasonPart_ = nullptr;};
            inline const Parts::ReasonPart & getReasonPart() const { DARABONBA_PTR_GET_CONST(reasonPart_, Parts::ReasonPart) };
            inline Parts::ReasonPart getReasonPart() { DARABONBA_PTR_GET(reasonPart_, Parts::ReasonPart) };
            inline Parts& setReasonPart(const Parts::ReasonPart & reasonPart) { DARABONBA_PTR_SET_VALUE(reasonPart_, reasonPart) };
            inline Parts& setReasonPart(Parts::ReasonPart && reasonPart) { DARABONBA_PTR_SET_RVALUE(reasonPart_, reasonPart) };


            // recommendPart Field Functions 
            bool hasRecommendPart() const { return this->recommendPart_ != nullptr;};
            void deleteRecommendPart() { this->recommendPart_ = nullptr;};
            inline const Parts::RecommendPart & getRecommendPart() const { DARABONBA_PTR_GET_CONST(recommendPart_, Parts::RecommendPart) };
            inline Parts::RecommendPart getRecommendPart() { DARABONBA_PTR_GET(recommendPart_, Parts::RecommendPart) };
            inline Parts& setRecommendPart(const Parts::RecommendPart & recommendPart) { DARABONBA_PTR_SET_VALUE(recommendPart_, recommendPart) };
            inline Parts& setRecommendPart(Parts::RecommendPart && recommendPart) { DARABONBA_PTR_SET_RVALUE(recommendPart_, recommendPart) };


            // referencePart Field Functions 
            bool hasReferencePart() const { return this->referencePart_ != nullptr;};
            void deleteReferencePart() { this->referencePart_ = nullptr;};
            inline const Parts::ReferencePart & getReferencePart() const { DARABONBA_PTR_GET_CONST(referencePart_, Parts::ReferencePart) };
            inline Parts::ReferencePart getReferencePart() { DARABONBA_PTR_GET(referencePart_, Parts::ReferencePart) };
            inline Parts& setReferencePart(const Parts::ReferencePart & referencePart) { DARABONBA_PTR_SET_VALUE(referencePart_, referencePart) };
            inline Parts& setReferencePart(Parts::ReferencePart && referencePart) { DARABONBA_PTR_SET_RVALUE(referencePart_, referencePart) };


            // textPart Field Functions 
            bool hasTextPart() const { return this->textPart_ != nullptr;};
            void deleteTextPart() { this->textPart_ = nullptr;};
            inline const Parts::TextPart & getTextPart() const { DARABONBA_PTR_GET_CONST(textPart_, Parts::TextPart) };
            inline Parts::TextPart getTextPart() { DARABONBA_PTR_GET(textPart_, Parts::TextPart) };
            inline Parts& setTextPart(const Parts::TextPart & textPart) { DARABONBA_PTR_SET_VALUE(textPart_, textPart) };
            inline Parts& setTextPart(Parts::TextPart && textPart) { DARABONBA_PTR_SET_RVALUE(textPart_, textPart) };


            // type Field Functions 
            bool hasType() const { return this->type_ != nullptr;};
            void deleteType() { this->type_ = nullptr;};
            inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
            inline Parts& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


          protected:
            shared_ptr<bool> append_ {};
            shared_ptr<Parts::DataPart> dataPart_ {};
            shared_ptr<bool> finish_ {};
            shared_ptr<string> partDesc_ {};
            shared_ptr<string> partId_ {};
            shared_ptr<Parts::ReasonPart> reasonPart_ {};
            shared_ptr<Parts::RecommendPart> recommendPart_ {};
            shared_ptr<Parts::ReferencePart> referencePart_ {};
            shared_ptr<Parts::TextPart> textPart_ {};
            // This parameter is required.
            shared_ptr<string> type_ {};
          };

          virtual bool empty() const override { return this->parts_ == nullptr; };
          // parts Field Functions 
          bool hasParts() const { return this->parts_ != nullptr;};
          void deleteParts() { this->parts_ = nullptr;};
          inline const vector<StructView::Parts> & getParts() const { DARABONBA_PTR_GET_CONST(parts_, vector<StructView::Parts>) };
          inline vector<StructView::Parts> getParts() { DARABONBA_PTR_GET(parts_, vector<StructView::Parts>) };
          inline StructView& setParts(const vector<StructView::Parts> & parts) { DARABONBA_PTR_SET_VALUE(parts_, parts) };
          inline StructView& setParts(vector<StructView::Parts> && parts) { DARABONBA_PTR_SET_RVALUE(parts_, parts) };


        protected:
          shared_ptr<vector<StructView::Parts>> parts_ {};
        };

        class Markdown : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Markdown& obj) { 
            DARABONBA_PTR_TO_JSON(value, value_);
          };
          friend void from_json(const Darabonba::Json& j, Markdown& obj) { 
            DARABONBA_PTR_FROM_JSON(value, value_);
          };
          Markdown() = default ;
          Markdown(const Markdown &) = default ;
          Markdown(Markdown &&) = default ;
          Markdown(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Markdown() = default ;
          Markdown& operator=(const Markdown &) = default ;
          Markdown& operator=(Markdown &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->value_ == nullptr; };
          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline Markdown& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          shared_ptr<string> value_ {};
        };

        class DingNormalCard : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const DingNormalCard& obj) { 
            DARABONBA_PTR_TO_JSON(cardData, cardData_);
            DARABONBA_PTR_TO_JSON(cardTemplateId, cardTemplateId_);
            DARABONBA_PTR_TO_JSON(cardUpdateOptions, cardUpdateOptions_);
            DARABONBA_PTR_TO_JSON(dynamicDataSourceConfigs, dynamicDataSourceConfigs_);
            DARABONBA_PTR_TO_JSON(privateData, privateData_);
          };
          friend void from_json(const Darabonba::Json& j, DingNormalCard& obj) { 
            DARABONBA_PTR_FROM_JSON(cardData, cardData_);
            DARABONBA_PTR_FROM_JSON(cardTemplateId, cardTemplateId_);
            DARABONBA_PTR_FROM_JSON(cardUpdateOptions, cardUpdateOptions_);
            DARABONBA_PTR_FROM_JSON(dynamicDataSourceConfigs, dynamicDataSourceConfigs_);
            DARABONBA_PTR_FROM_JSON(privateData, privateData_);
          };
          DingNormalCard() = default ;
          DingNormalCard(const DingNormalCard &) = default ;
          DingNormalCard(DingNormalCard &&) = default ;
          DingNormalCard(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~DingNormalCard() = default ;
          DingNormalCard& operator=(const DingNormalCard &) = default ;
          DingNormalCard& operator=(DingNormalCard &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class DynamicDataSourceConfigs : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const DynamicDataSourceConfigs& obj) { 
              DARABONBA_ANY_TO_JSON(constParams, constParams_);
              DARABONBA_PTR_TO_JSON(dynamicDataSourceId, dynamicDataSourceId_);
              DARABONBA_PTR_TO_JSON(pullConfig, pullConfig_);
            };
            friend void from_json(const Darabonba::Json& j, DynamicDataSourceConfigs& obj) { 
              DARABONBA_ANY_FROM_JSON(constParams, constParams_);
              DARABONBA_PTR_FROM_JSON(dynamicDataSourceId, dynamicDataSourceId_);
              DARABONBA_PTR_FROM_JSON(pullConfig, pullConfig_);
            };
            DynamicDataSourceConfigs() = default ;
            DynamicDataSourceConfigs(const DynamicDataSourceConfigs &) = default ;
            DynamicDataSourceConfigs(DynamicDataSourceConfigs &&) = default ;
            DynamicDataSourceConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~DynamicDataSourceConfigs() = default ;
            DynamicDataSourceConfigs& operator=(const DynamicDataSourceConfigs &) = default ;
            DynamicDataSourceConfigs& operator=(DynamicDataSourceConfigs &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class PullConfig : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const PullConfig& obj) { 
                DARABONBA_PTR_TO_JSON(interval, interval_);
                DARABONBA_PTR_TO_JSON(pullStrategy, pullStrategy_);
                DARABONBA_PTR_TO_JSON(timeUnit, timeUnit_);
              };
              friend void from_json(const Darabonba::Json& j, PullConfig& obj) { 
                DARABONBA_PTR_FROM_JSON(interval, interval_);
                DARABONBA_PTR_FROM_JSON(pullStrategy, pullStrategy_);
                DARABONBA_PTR_FROM_JSON(timeUnit, timeUnit_);
              };
              PullConfig() = default ;
              PullConfig(const PullConfig &) = default ;
              PullConfig(PullConfig &&) = default ;
              PullConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~PullConfig() = default ;
              PullConfig& operator=(const PullConfig &) = default ;
              PullConfig& operator=(PullConfig &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->interval_ == nullptr
        && this->pullStrategy_ == nullptr && this->timeUnit_ == nullptr; };
              // interval Field Functions 
              bool hasInterval() const { return this->interval_ != nullptr;};
              void deleteInterval() { this->interval_ = nullptr;};
              inline int32_t getInterval() const { DARABONBA_PTR_GET_DEFAULT(interval_, 0) };
              inline PullConfig& setInterval(int32_t interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


              // pullStrategy Field Functions 
              bool hasPullStrategy() const { return this->pullStrategy_ != nullptr;};
              void deletePullStrategy() { this->pullStrategy_ = nullptr;};
              inline string getPullStrategy() const { DARABONBA_PTR_GET_DEFAULT(pullStrategy_, "") };
              inline PullConfig& setPullStrategy(string pullStrategy) { DARABONBA_PTR_SET_VALUE(pullStrategy_, pullStrategy) };


              // timeUnit Field Functions 
              bool hasTimeUnit() const { return this->timeUnit_ != nullptr;};
              void deleteTimeUnit() { this->timeUnit_ = nullptr;};
              inline string getTimeUnit() const { DARABONBA_PTR_GET_DEFAULT(timeUnit_, "") };
              inline PullConfig& setTimeUnit(string timeUnit) { DARABONBA_PTR_SET_VALUE(timeUnit_, timeUnit) };


            protected:
              shared_ptr<int32_t> interval_ {};
              shared_ptr<string> pullStrategy_ {};
              shared_ptr<string> timeUnit_ {};
            };

            virtual bool empty() const override { return this->constParams_ == nullptr
        && this->dynamicDataSourceId_ == nullptr && this->pullConfig_ == nullptr; };
            // constParams Field Functions 
            bool hasConstParams() const { return this->constParams_ != nullptr;};
            void deleteConstParams() { this->constParams_ = nullptr;};
            inline             const Darabonba::Json & getConstParams() const { DARABONBA_GET(constParams_) };
            Darabonba::Json & getConstParams() { DARABONBA_GET(constParams_) };
            inline DynamicDataSourceConfigs& setConstParams(const Darabonba::Json & constParams) { DARABONBA_SET_VALUE(constParams_, constParams) };
            inline DynamicDataSourceConfigs& setConstParams(Darabonba::Json && constParams) { DARABONBA_SET_RVALUE(constParams_, constParams) };


            // dynamicDataSourceId Field Functions 
            bool hasDynamicDataSourceId() const { return this->dynamicDataSourceId_ != nullptr;};
            void deleteDynamicDataSourceId() { this->dynamicDataSourceId_ = nullptr;};
            inline string getDynamicDataSourceId() const { DARABONBA_PTR_GET_DEFAULT(dynamicDataSourceId_, "") };
            inline DynamicDataSourceConfigs& setDynamicDataSourceId(string dynamicDataSourceId) { DARABONBA_PTR_SET_VALUE(dynamicDataSourceId_, dynamicDataSourceId) };


            // pullConfig Field Functions 
            bool hasPullConfig() const { return this->pullConfig_ != nullptr;};
            void deletePullConfig() { this->pullConfig_ = nullptr;};
            inline const DynamicDataSourceConfigs::PullConfig & getPullConfig() const { DARABONBA_PTR_GET_CONST(pullConfig_, DynamicDataSourceConfigs::PullConfig) };
            inline DynamicDataSourceConfigs::PullConfig getPullConfig() { DARABONBA_PTR_GET(pullConfig_, DynamicDataSourceConfigs::PullConfig) };
            inline DynamicDataSourceConfigs& setPullConfig(const DynamicDataSourceConfigs::PullConfig & pullConfig) { DARABONBA_PTR_SET_VALUE(pullConfig_, pullConfig) };
            inline DynamicDataSourceConfigs& setPullConfig(DynamicDataSourceConfigs::PullConfig && pullConfig) { DARABONBA_PTR_SET_RVALUE(pullConfig_, pullConfig) };


          protected:
            Darabonba::Json constParams_ {};
            shared_ptr<string> dynamicDataSourceId_ {};
            shared_ptr<DynamicDataSourceConfigs::PullConfig> pullConfig_ {};
          };

          class CardUpdateOptions : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const CardUpdateOptions& obj) { 
              DARABONBA_PTR_TO_JSON(updateCardDataByKey, updateCardDataByKey_);
              DARABONBA_PTR_TO_JSON(updatePrivateDataByKey, updatePrivateDataByKey_);
            };
            friend void from_json(const Darabonba::Json& j, CardUpdateOptions& obj) { 
              DARABONBA_PTR_FROM_JSON(updateCardDataByKey, updateCardDataByKey_);
              DARABONBA_PTR_FROM_JSON(updatePrivateDataByKey, updatePrivateDataByKey_);
            };
            CardUpdateOptions() = default ;
            CardUpdateOptions(const CardUpdateOptions &) = default ;
            CardUpdateOptions(CardUpdateOptions &&) = default ;
            CardUpdateOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~CardUpdateOptions() = default ;
            CardUpdateOptions& operator=(const CardUpdateOptions &) = default ;
            CardUpdateOptions& operator=(CardUpdateOptions &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->updateCardDataByKey_ == nullptr
        && this->updatePrivateDataByKey_ == nullptr; };
            // updateCardDataByKey Field Functions 
            bool hasUpdateCardDataByKey() const { return this->updateCardDataByKey_ != nullptr;};
            void deleteUpdateCardDataByKey() { this->updateCardDataByKey_ = nullptr;};
            inline bool getUpdateCardDataByKey() const { DARABONBA_PTR_GET_DEFAULT(updateCardDataByKey_, false) };
            inline CardUpdateOptions& setUpdateCardDataByKey(bool updateCardDataByKey) { DARABONBA_PTR_SET_VALUE(updateCardDataByKey_, updateCardDataByKey) };


            // updatePrivateDataByKey Field Functions 
            bool hasUpdatePrivateDataByKey() const { return this->updatePrivateDataByKey_ != nullptr;};
            void deleteUpdatePrivateDataByKey() { this->updatePrivateDataByKey_ = nullptr;};
            inline bool getUpdatePrivateDataByKey() const { DARABONBA_PTR_GET_DEFAULT(updatePrivateDataByKey_, false) };
            inline CardUpdateOptions& setUpdatePrivateDataByKey(bool updatePrivateDataByKey) { DARABONBA_PTR_SET_VALUE(updatePrivateDataByKey_, updatePrivateDataByKey) };


          protected:
            shared_ptr<bool> updateCardDataByKey_ {};
            shared_ptr<bool> updatePrivateDataByKey_ {};
          };

          class CardData : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const CardData& obj) { 
              DARABONBA_ANY_TO_JSON(cardParamMap, cardParamMap_);
            };
            friend void from_json(const Darabonba::Json& j, CardData& obj) { 
              DARABONBA_ANY_FROM_JSON(cardParamMap, cardParamMap_);
            };
            CardData() = default ;
            CardData(const CardData &) = default ;
            CardData(CardData &&) = default ;
            CardData(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~CardData() = default ;
            CardData& operator=(const CardData &) = default ;
            CardData& operator=(CardData &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->cardParamMap_ == nullptr; };
            // cardParamMap Field Functions 
            bool hasCardParamMap() const { return this->cardParamMap_ != nullptr;};
            void deleteCardParamMap() { this->cardParamMap_ = nullptr;};
            inline             const Darabonba::Json & getCardParamMap() const { DARABONBA_GET(cardParamMap_) };
            Darabonba::Json & getCardParamMap() { DARABONBA_GET(cardParamMap_) };
            inline CardData& setCardParamMap(const Darabonba::Json & cardParamMap) { DARABONBA_SET_VALUE(cardParamMap_, cardParamMap) };
            inline CardData& setCardParamMap(Darabonba::Json && cardParamMap) { DARABONBA_SET_RVALUE(cardParamMap_, cardParamMap) };


          protected:
            Darabonba::Json cardParamMap_ {};
          };

          virtual bool empty() const override { return this->cardData_ == nullptr
        && this->cardTemplateId_ == nullptr && this->cardUpdateOptions_ == nullptr && this->dynamicDataSourceConfigs_ == nullptr && this->privateData_ == nullptr; };
          // cardData Field Functions 
          bool hasCardData() const { return this->cardData_ != nullptr;};
          void deleteCardData() { this->cardData_ = nullptr;};
          inline const DingNormalCard::CardData & getCardData() const { DARABONBA_PTR_GET_CONST(cardData_, DingNormalCard::CardData) };
          inline DingNormalCard::CardData getCardData() { DARABONBA_PTR_GET(cardData_, DingNormalCard::CardData) };
          inline DingNormalCard& setCardData(const DingNormalCard::CardData & cardData) { DARABONBA_PTR_SET_VALUE(cardData_, cardData) };
          inline DingNormalCard& setCardData(DingNormalCard::CardData && cardData) { DARABONBA_PTR_SET_RVALUE(cardData_, cardData) };


          // cardTemplateId Field Functions 
          bool hasCardTemplateId() const { return this->cardTemplateId_ != nullptr;};
          void deleteCardTemplateId() { this->cardTemplateId_ = nullptr;};
          inline string getCardTemplateId() const { DARABONBA_PTR_GET_DEFAULT(cardTemplateId_, "") };
          inline DingNormalCard& setCardTemplateId(string cardTemplateId) { DARABONBA_PTR_SET_VALUE(cardTemplateId_, cardTemplateId) };


          // cardUpdateOptions Field Functions 
          bool hasCardUpdateOptions() const { return this->cardUpdateOptions_ != nullptr;};
          void deleteCardUpdateOptions() { this->cardUpdateOptions_ = nullptr;};
          inline const DingNormalCard::CardUpdateOptions & getCardUpdateOptions() const { DARABONBA_PTR_GET_CONST(cardUpdateOptions_, DingNormalCard::CardUpdateOptions) };
          inline DingNormalCard::CardUpdateOptions getCardUpdateOptions() { DARABONBA_PTR_GET(cardUpdateOptions_, DingNormalCard::CardUpdateOptions) };
          inline DingNormalCard& setCardUpdateOptions(const DingNormalCard::CardUpdateOptions & cardUpdateOptions) { DARABONBA_PTR_SET_VALUE(cardUpdateOptions_, cardUpdateOptions) };
          inline DingNormalCard& setCardUpdateOptions(DingNormalCard::CardUpdateOptions && cardUpdateOptions) { DARABONBA_PTR_SET_RVALUE(cardUpdateOptions_, cardUpdateOptions) };


          // dynamicDataSourceConfigs Field Functions 
          bool hasDynamicDataSourceConfigs() const { return this->dynamicDataSourceConfigs_ != nullptr;};
          void deleteDynamicDataSourceConfigs() { this->dynamicDataSourceConfigs_ = nullptr;};
          inline const vector<DingNormalCard::DynamicDataSourceConfigs> & getDynamicDataSourceConfigs() const { DARABONBA_PTR_GET_CONST(dynamicDataSourceConfigs_, vector<DingNormalCard::DynamicDataSourceConfigs>) };
          inline vector<DingNormalCard::DynamicDataSourceConfigs> getDynamicDataSourceConfigs() { DARABONBA_PTR_GET(dynamicDataSourceConfigs_, vector<DingNormalCard::DynamicDataSourceConfigs>) };
          inline DingNormalCard& setDynamicDataSourceConfigs(const vector<DingNormalCard::DynamicDataSourceConfigs> & dynamicDataSourceConfigs) { DARABONBA_PTR_SET_VALUE(dynamicDataSourceConfigs_, dynamicDataSourceConfigs) };
          inline DingNormalCard& setDynamicDataSourceConfigs(vector<DingNormalCard::DynamicDataSourceConfigs> && dynamicDataSourceConfigs) { DARABONBA_PTR_SET_RVALUE(dynamicDataSourceConfigs_, dynamicDataSourceConfigs) };


          // privateData Field Functions 
          bool hasPrivateData() const { return this->privateData_ != nullptr;};
          void deletePrivateData() { this->privateData_ = nullptr;};
          inline const map<string, Darabonba::Json> & getPrivateData() const { DARABONBA_PTR_GET_CONST(privateData_, map<string, Darabonba::Json>) };
          inline map<string, Darabonba::Json> getPrivateData() { DARABONBA_PTR_GET(privateData_, map<string, Darabonba::Json>) };
          inline DingNormalCard& setPrivateData(const map<string, Darabonba::Json> & privateData) { DARABONBA_PTR_SET_VALUE(privateData_, privateData) };
          inline DingNormalCard& setPrivateData(map<string, Darabonba::Json> && privateData) { DARABONBA_PTR_SET_RVALUE(privateData_, privateData) };


        protected:
          shared_ptr<DingNormalCard::CardData> cardData_ {};
          shared_ptr<string> cardTemplateId_ {};
          shared_ptr<DingNormalCard::CardUpdateOptions> cardUpdateOptions_ {};
          shared_ptr<vector<DingNormalCard::DynamicDataSourceConfigs>> dynamicDataSourceConfigs_ {};
          shared_ptr<map<string, Darabonba::Json>> privateData_ {};
        };

        class DingCard : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const DingCard& obj) { 
            DARABONBA_PTR_TO_JSON(content, content_);
            DARABONBA_PTR_TO_JSON(contentType, contentType_);
            DARABONBA_PTR_TO_JSON(finished, finished_);
            DARABONBA_PTR_TO_JSON(templateId, templateId_);
          };
          friend void from_json(const Darabonba::Json& j, DingCard& obj) { 
            DARABONBA_PTR_FROM_JSON(content, content_);
            DARABONBA_PTR_FROM_JSON(contentType, contentType_);
            DARABONBA_PTR_FROM_JSON(finished, finished_);
            DARABONBA_PTR_FROM_JSON(templateId, templateId_);
          };
          DingCard() = default ;
          DingCard(const DingCard &) = default ;
          DingCard(DingCard &&) = default ;
          DingCard(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~DingCard() = default ;
          DingCard& operator=(const DingCard &) = default ;
          DingCard& operator=(DingCard &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->content_ == nullptr
        && this->contentType_ == nullptr && this->finished_ == nullptr && this->templateId_ == nullptr; };
          // content Field Functions 
          bool hasContent() const { return this->content_ != nullptr;};
          void deleteContent() { this->content_ = nullptr;};
          inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
          inline DingCard& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


          // contentType Field Functions 
          bool hasContentType() const { return this->contentType_ != nullptr;};
          void deleteContentType() { this->contentType_ = nullptr;};
          inline string getContentType() const { DARABONBA_PTR_GET_DEFAULT(contentType_, "") };
          inline DingCard& setContentType(string contentType) { DARABONBA_PTR_SET_VALUE(contentType_, contentType) };


          // finished Field Functions 
          bool hasFinished() const { return this->finished_ != nullptr;};
          void deleteFinished() { this->finished_ = nullptr;};
          inline bool getFinished() const { DARABONBA_PTR_GET_DEFAULT(finished_, false) };
          inline DingCard& setFinished(bool finished) { DARABONBA_PTR_SET_VALUE(finished_, finished) };


          // templateId Field Functions 
          bool hasTemplateId() const { return this->templateId_ != nullptr;};
          void deleteTemplateId() { this->templateId_ = nullptr;};
          inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
          inline DingCard& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


        protected:
          shared_ptr<string> content_ {};
          // This parameter is required.
          shared_ptr<string> contentType_ {};
          shared_ptr<bool> finished_ {};
          shared_ptr<string> templateId_ {};
        };

        class CardCallback : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const CardCallback& obj) { 
            DARABONBA_PTR_TO_JSON(content, content_);
            DARABONBA_PTR_TO_JSON(relatedMessageId, relatedMessageId_);
          };
          friend void from_json(const Darabonba::Json& j, CardCallback& obj) { 
            DARABONBA_PTR_FROM_JSON(content, content_);
            DARABONBA_PTR_FROM_JSON(relatedMessageId, relatedMessageId_);
          };
          CardCallback() = default ;
          CardCallback(const CardCallback &) = default ;
          CardCallback(CardCallback &&) = default ;
          CardCallback(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~CardCallback() = default ;
          CardCallback& operator=(const CardCallback &) = default ;
          CardCallback& operator=(CardCallback &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->content_ == nullptr
        && this->relatedMessageId_ == nullptr; };
          // content Field Functions 
          bool hasContent() const { return this->content_ != nullptr;};
          void deleteContent() { this->content_ = nullptr;};
          inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
          inline CardCallback& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


          // relatedMessageId Field Functions 
          bool hasRelatedMessageId() const { return this->relatedMessageId_ != nullptr;};
          void deleteRelatedMessageId() { this->relatedMessageId_ = nullptr;};
          inline string getRelatedMessageId() const { DARABONBA_PTR_GET_DEFAULT(relatedMessageId_, "") };
          inline CardCallback& setRelatedMessageId(string relatedMessageId) { DARABONBA_PTR_SET_VALUE(relatedMessageId_, relatedMessageId) };


        protected:
          shared_ptr<string> content_ {};
          shared_ptr<string> relatedMessageId_ {};
        };

        virtual bool empty() const override { return this->cardCallback_ == nullptr
        && this->dingCard_ == nullptr && this->dingNormalCard_ == nullptr && this->markdown_ == nullptr && this->structView_ == nullptr && this->text_ == nullptr
        && this->type_ == nullptr; };
        // cardCallback Field Functions 
        bool hasCardCallback() const { return this->cardCallback_ != nullptr;};
        void deleteCardCallback() { this->cardCallback_ = nullptr;};
        inline const Content::CardCallback & getCardCallback() const { DARABONBA_PTR_GET_CONST(cardCallback_, Content::CardCallback) };
        inline Content::CardCallback getCardCallback() { DARABONBA_PTR_GET(cardCallback_, Content::CardCallback) };
        inline Content& setCardCallback(const Content::CardCallback & cardCallback) { DARABONBA_PTR_SET_VALUE(cardCallback_, cardCallback) };
        inline Content& setCardCallback(Content::CardCallback && cardCallback) { DARABONBA_PTR_SET_RVALUE(cardCallback_, cardCallback) };


        // dingCard Field Functions 
        bool hasDingCard() const { return this->dingCard_ != nullptr;};
        void deleteDingCard() { this->dingCard_ = nullptr;};
        inline const Content::DingCard & getDingCard() const { DARABONBA_PTR_GET_CONST(dingCard_, Content::DingCard) };
        inline Content::DingCard getDingCard() { DARABONBA_PTR_GET(dingCard_, Content::DingCard) };
        inline Content& setDingCard(const Content::DingCard & dingCard) { DARABONBA_PTR_SET_VALUE(dingCard_, dingCard) };
        inline Content& setDingCard(Content::DingCard && dingCard) { DARABONBA_PTR_SET_RVALUE(dingCard_, dingCard) };


        // dingNormalCard Field Functions 
        bool hasDingNormalCard() const { return this->dingNormalCard_ != nullptr;};
        void deleteDingNormalCard() { this->dingNormalCard_ = nullptr;};
        inline const Content::DingNormalCard & getDingNormalCard() const { DARABONBA_PTR_GET_CONST(dingNormalCard_, Content::DingNormalCard) };
        inline Content::DingNormalCard getDingNormalCard() { DARABONBA_PTR_GET(dingNormalCard_, Content::DingNormalCard) };
        inline Content& setDingNormalCard(const Content::DingNormalCard & dingNormalCard) { DARABONBA_PTR_SET_VALUE(dingNormalCard_, dingNormalCard) };
        inline Content& setDingNormalCard(Content::DingNormalCard && dingNormalCard) { DARABONBA_PTR_SET_RVALUE(dingNormalCard_, dingNormalCard) };


        // markdown Field Functions 
        bool hasMarkdown() const { return this->markdown_ != nullptr;};
        void deleteMarkdown() { this->markdown_ = nullptr;};
        inline const Content::Markdown & getMarkdown() const { DARABONBA_PTR_GET_CONST(markdown_, Content::Markdown) };
        inline Content::Markdown getMarkdown() { DARABONBA_PTR_GET(markdown_, Content::Markdown) };
        inline Content& setMarkdown(const Content::Markdown & markdown) { DARABONBA_PTR_SET_VALUE(markdown_, markdown) };
        inline Content& setMarkdown(Content::Markdown && markdown) { DARABONBA_PTR_SET_RVALUE(markdown_, markdown) };


        // structView Field Functions 
        bool hasStructView() const { return this->structView_ != nullptr;};
        void deleteStructView() { this->structView_ = nullptr;};
        inline const Content::StructView & getStructView() const { DARABONBA_PTR_GET_CONST(structView_, Content::StructView) };
        inline Content::StructView getStructView() { DARABONBA_PTR_GET(structView_, Content::StructView) };
        inline Content& setStructView(const Content::StructView & structView) { DARABONBA_PTR_SET_VALUE(structView_, structView) };
        inline Content& setStructView(Content::StructView && structView) { DARABONBA_PTR_SET_RVALUE(structView_, structView) };


        // text Field Functions 
        bool hasText() const { return this->text_ != nullptr;};
        void deleteText() { this->text_ = nullptr;};
        inline const Content::Text & getText() const { DARABONBA_PTR_GET_CONST(text_, Content::Text) };
        inline Content::Text getText() { DARABONBA_PTR_GET(text_, Content::Text) };
        inline Content& setText(const Content::Text & text) { DARABONBA_PTR_SET_VALUE(text_, text) };
        inline Content& setText(Content::Text && text) { DARABONBA_PTR_SET_RVALUE(text_, text) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Content& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        shared_ptr<Content::CardCallback> cardCallback_ {};
        shared_ptr<Content::DingCard> dingCard_ {};
        shared_ptr<Content::DingNormalCard> dingNormalCard_ {};
        shared_ptr<Content::Markdown> markdown_ {};
        shared_ptr<Content::StructView> structView_ {};
        shared_ptr<Content::Text> text_ {};
        // This parameter is required.
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->content_ == nullptr
        && this->contentDesc_ == nullptr && this->createAt_ == nullptr && this->id_ == nullptr && this->role_ == nullptr && this->runId_ == nullptr
        && this->threadId_ == nullptr; };
      // content Field Functions 
      bool hasContent() const { return this->content_ != nullptr;};
      void deleteContent() { this->content_ = nullptr;};
      inline const Messages::Content & getContent() const { DARABONBA_PTR_GET_CONST(content_, Messages::Content) };
      inline Messages::Content getContent() { DARABONBA_PTR_GET(content_, Messages::Content) };
      inline Messages& setContent(const Messages::Content & content) { DARABONBA_PTR_SET_VALUE(content_, content) };
      inline Messages& setContent(Messages::Content && content) { DARABONBA_PTR_SET_RVALUE(content_, content) };


      // contentDesc Field Functions 
      bool hasContentDesc() const { return this->contentDesc_ != nullptr;};
      void deleteContentDesc() { this->contentDesc_ = nullptr;};
      inline string getContentDesc() const { DARABONBA_PTR_GET_DEFAULT(contentDesc_, "") };
      inline Messages& setContentDesc(string contentDesc) { DARABONBA_PTR_SET_VALUE(contentDesc_, contentDesc) };


      // createAt Field Functions 
      bool hasCreateAt() const { return this->createAt_ != nullptr;};
      void deleteCreateAt() { this->createAt_ = nullptr;};
      inline int64_t getCreateAt() const { DARABONBA_PTR_GET_DEFAULT(createAt_, 0L) };
      inline Messages& setCreateAt(int64_t createAt) { DARABONBA_PTR_SET_VALUE(createAt_, createAt) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline Messages& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // role Field Functions 
      bool hasRole() const { return this->role_ != nullptr;};
      void deleteRole() { this->role_ = nullptr;};
      inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
      inline Messages& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


      // runId Field Functions 
      bool hasRunId() const { return this->runId_ != nullptr;};
      void deleteRunId() { this->runId_ = nullptr;};
      inline string getRunId() const { DARABONBA_PTR_GET_DEFAULT(runId_, "") };
      inline Messages& setRunId(string runId) { DARABONBA_PTR_SET_VALUE(runId_, runId) };


      // threadId Field Functions 
      bool hasThreadId() const { return this->threadId_ != nullptr;};
      void deleteThreadId() { this->threadId_ = nullptr;};
      inline string getThreadId() const { DARABONBA_PTR_GET_DEFAULT(threadId_, "") };
      inline Messages& setThreadId(string threadId) { DARABONBA_PTR_SET_VALUE(threadId_, threadId) };


    protected:
      shared_ptr<Messages::Content> content_ {};
      shared_ptr<string> contentDesc_ {};
      shared_ptr<int64_t> createAt_ {};
      shared_ptr<string> id_ {};
      shared_ptr<string> role_ {};
      shared_ptr<string> runId_ {};
      shared_ptr<string> threadId_ {};
    };

    virtual bool empty() const override { return this->messages_ == nullptr
        && this->requestId_ == nullptr; };
    // messages Field Functions 
    bool hasMessages() const { return this->messages_ != nullptr;};
    void deleteMessages() { this->messages_ = nullptr;};
    inline const vector<ListMessageResponseBody::Messages> & getMessages() const { DARABONBA_PTR_GET_CONST(messages_, vector<ListMessageResponseBody::Messages>) };
    inline vector<ListMessageResponseBody::Messages> getMessages() { DARABONBA_PTR_GET(messages_, vector<ListMessageResponseBody::Messages>) };
    inline ListMessageResponseBody& setMessages(const vector<ListMessageResponseBody::Messages> & messages) { DARABONBA_PTR_SET_VALUE(messages_, messages) };
    inline ListMessageResponseBody& setMessages(vector<ListMessageResponseBody::Messages> && messages) { DARABONBA_PTR_SET_RVALUE(messages_, messages) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListMessageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<ListMessageResponseBody::Messages>> messages_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
