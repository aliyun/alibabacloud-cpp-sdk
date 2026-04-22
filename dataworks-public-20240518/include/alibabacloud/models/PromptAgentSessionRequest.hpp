// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PROMPTAGENTSESSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PROMPTAGENTSESSIONREQUEST_HPP_
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
  class PromptAgentSessionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PromptAgentSessionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Jsonrpc, jsonrpc_);
      DARABONBA_PTR_TO_JSON(Params, params_);
    };
    friend void from_json(const Darabonba::Json& j, PromptAgentSessionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Jsonrpc, jsonrpc_);
      DARABONBA_PTR_FROM_JSON(Params, params_);
    };
    PromptAgentSessionRequest() = default ;
    PromptAgentSessionRequest(const PromptAgentSessionRequest &) = default ;
    PromptAgentSessionRequest(PromptAgentSessionRequest &&) = default ;
    PromptAgentSessionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PromptAgentSessionRequest() = default ;
    PromptAgentSessionRequest& operator=(const PromptAgentSessionRequest &) = default ;
    PromptAgentSessionRequest& operator=(PromptAgentSessionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Params : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Params& obj) { 
        DARABONBA_PTR_TO_JSON(Meta, meta_);
        DARABONBA_PTR_TO_JSON(Prompt, prompt_);
        DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
      };
      friend void from_json(const Darabonba::Json& j, Params& obj) { 
        DARABONBA_PTR_FROM_JSON(Meta, meta_);
        DARABONBA_PTR_FROM_JSON(Prompt, prompt_);
        DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
      };
      Params() = default ;
      Params(const Params &) = default ;
      Params(Params &&) = default ;
      Params(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Params() = default ;
      Params& operator=(const Params &) = default ;
      Params& operator=(Params &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Prompt : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Prompt& obj) { 
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(Meta, meta_);
          DARABONBA_PTR_TO_JSON(MimeType, mimeType_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Size, size_);
          DARABONBA_PTR_TO_JSON(Text, text_);
          DARABONBA_PTR_TO_JSON(Title, title_);
          DARABONBA_PTR_TO_JSON(Type, type_);
          DARABONBA_PTR_TO_JSON(Uri, uri_);
        };
        friend void from_json(const Darabonba::Json& j, Prompt& obj) { 
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(Meta, meta_);
          DARABONBA_PTR_FROM_JSON(MimeType, mimeType_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Size, size_);
          DARABONBA_PTR_FROM_JSON(Text, text_);
          DARABONBA_PTR_FROM_JSON(Title, title_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
          DARABONBA_PTR_FROM_JSON(Uri, uri_);
        };
        Prompt() = default ;
        Prompt(const Prompt &) = default ;
        Prompt(Prompt &&) = default ;
        Prompt(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Prompt() = default ;
        Prompt& operator=(const Prompt &) = default ;
        Prompt& operator=(Prompt &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Meta : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Meta& obj) { 
            DARABONBA_PTR_TO_JSON(Hide, hide_);
          };
          friend void from_json(const Darabonba::Json& j, Meta& obj) { 
            DARABONBA_PTR_FROM_JSON(Hide, hide_);
          };
          Meta() = default ;
          Meta(const Meta &) = default ;
          Meta(Meta &&) = default ;
          Meta(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Meta() = default ;
          Meta& operator=(const Meta &) = default ;
          Meta& operator=(Meta &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->hide_ == nullptr; };
          // hide Field Functions 
          bool hasHide() const { return this->hide_ != nullptr;};
          void deleteHide() { this->hide_ = nullptr;};
          inline bool getHide() const { DARABONBA_PTR_GET_DEFAULT(hide_, false) };
          inline Meta& setHide(bool hide) { DARABONBA_PTR_SET_VALUE(hide_, hide) };


        protected:
          shared_ptr<bool> hide_ {};
        };

        virtual bool empty() const override { return this->description_ == nullptr
        && this->meta_ == nullptr && this->mimeType_ == nullptr && this->name_ == nullptr && this->size_ == nullptr && this->text_ == nullptr
        && this->title_ == nullptr && this->type_ == nullptr && this->uri_ == nullptr; };
        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline Prompt& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // meta Field Functions 
        bool hasMeta() const { return this->meta_ != nullptr;};
        void deleteMeta() { this->meta_ = nullptr;};
        inline const Prompt::Meta & getMeta() const { DARABONBA_PTR_GET_CONST(meta_, Prompt::Meta) };
        inline Prompt::Meta getMeta() { DARABONBA_PTR_GET(meta_, Prompt::Meta) };
        inline Prompt& setMeta(const Prompt::Meta & meta) { DARABONBA_PTR_SET_VALUE(meta_, meta) };
        inline Prompt& setMeta(Prompt::Meta && meta) { DARABONBA_PTR_SET_RVALUE(meta_, meta) };


        // mimeType Field Functions 
        bool hasMimeType() const { return this->mimeType_ != nullptr;};
        void deleteMimeType() { this->mimeType_ = nullptr;};
        inline string getMimeType() const { DARABONBA_PTR_GET_DEFAULT(mimeType_, "") };
        inline Prompt& setMimeType(string mimeType) { DARABONBA_PTR_SET_VALUE(mimeType_, mimeType) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Prompt& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // size Field Functions 
        bool hasSize() const { return this->size_ != nullptr;};
        void deleteSize() { this->size_ = nullptr;};
        inline int64_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
        inline Prompt& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


        // text Field Functions 
        bool hasText() const { return this->text_ != nullptr;};
        void deleteText() { this->text_ = nullptr;};
        inline string getText() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
        inline Prompt& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


        // title Field Functions 
        bool hasTitle() const { return this->title_ != nullptr;};
        void deleteTitle() { this->title_ = nullptr;};
        inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
        inline Prompt& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Prompt& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // uri Field Functions 
        bool hasUri() const { return this->uri_ != nullptr;};
        void deleteUri() { this->uri_ = nullptr;};
        inline string getUri() const { DARABONBA_PTR_GET_DEFAULT(uri_, "") };
        inline Prompt& setUri(string uri) { DARABONBA_PTR_SET_VALUE(uri_, uri) };


      protected:
        shared_ptr<string> description_ {};
        shared_ptr<Prompt::Meta> meta_ {};
        shared_ptr<string> mimeType_ {};
        shared_ptr<string> name_ {};
        shared_ptr<int64_t> size_ {};
        shared_ptr<string> text_ {};
        shared_ptr<string> title_ {};
        shared_ptr<string> type_ {};
        shared_ptr<string> uri_ {};
      };

      class Meta : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Meta& obj) { 
          DARABONBA_ANY_TO_JSON(Context, context_);
        };
        friend void from_json(const Darabonba::Json& j, Meta& obj) { 
          DARABONBA_ANY_FROM_JSON(Context, context_);
        };
        Meta() = default ;
        Meta(const Meta &) = default ;
        Meta(Meta &&) = default ;
        Meta(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Meta() = default ;
        Meta& operator=(const Meta &) = default ;
        Meta& operator=(Meta &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->context_ == nullptr; };
        // context Field Functions 
        bool hasContext() const { return this->context_ != nullptr;};
        void deleteContext() { this->context_ = nullptr;};
        inline         const Darabonba::Json & getContext() const { DARABONBA_GET(context_) };
        Darabonba::Json & getContext() { DARABONBA_GET(context_) };
        inline Meta& setContext(const Darabonba::Json & context) { DARABONBA_SET_VALUE(context_, context) };
        inline Meta& setContext(Darabonba::Json && context) { DARABONBA_SET_RVALUE(context_, context) };


      protected:
        Darabonba::Json context_ {};
      };

      virtual bool empty() const override { return this->meta_ == nullptr
        && this->prompt_ == nullptr && this->sessionId_ == nullptr; };
      // meta Field Functions 
      bool hasMeta() const { return this->meta_ != nullptr;};
      void deleteMeta() { this->meta_ = nullptr;};
      inline const Params::Meta & getMeta() const { DARABONBA_PTR_GET_CONST(meta_, Params::Meta) };
      inline Params::Meta getMeta() { DARABONBA_PTR_GET(meta_, Params::Meta) };
      inline Params& setMeta(const Params::Meta & meta) { DARABONBA_PTR_SET_VALUE(meta_, meta) };
      inline Params& setMeta(Params::Meta && meta) { DARABONBA_PTR_SET_RVALUE(meta_, meta) };


      // prompt Field Functions 
      bool hasPrompt() const { return this->prompt_ != nullptr;};
      void deletePrompt() { this->prompt_ = nullptr;};
      inline const vector<Params::Prompt> & getPrompt() const { DARABONBA_PTR_GET_CONST(prompt_, vector<Params::Prompt>) };
      inline vector<Params::Prompt> getPrompt() { DARABONBA_PTR_GET(prompt_, vector<Params::Prompt>) };
      inline Params& setPrompt(const vector<Params::Prompt> & prompt) { DARABONBA_PTR_SET_VALUE(prompt_, prompt) };
      inline Params& setPrompt(vector<Params::Prompt> && prompt) { DARABONBA_PTR_SET_RVALUE(prompt_, prompt) };


      // sessionId Field Functions 
      bool hasSessionId() const { return this->sessionId_ != nullptr;};
      void deleteSessionId() { this->sessionId_ = nullptr;};
      inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
      inline Params& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    protected:
      shared_ptr<Params::Meta> meta_ {};
      shared_ptr<vector<Params::Prompt>> prompt_ {};
      shared_ptr<string> sessionId_ {};
    };

    virtual bool empty() const override { return this->id_ == nullptr
        && this->jsonrpc_ == nullptr && this->params_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline PromptAgentSessionRequest& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // jsonrpc Field Functions 
    bool hasJsonrpc() const { return this->jsonrpc_ != nullptr;};
    void deleteJsonrpc() { this->jsonrpc_ = nullptr;};
    inline string getJsonrpc() const { DARABONBA_PTR_GET_DEFAULT(jsonrpc_, "") };
    inline PromptAgentSessionRequest& setJsonrpc(string jsonrpc) { DARABONBA_PTR_SET_VALUE(jsonrpc_, jsonrpc) };


    // params Field Functions 
    bool hasParams() const { return this->params_ != nullptr;};
    void deleteParams() { this->params_ = nullptr;};
    inline const PromptAgentSessionRequest::Params & getParams() const { DARABONBA_PTR_GET_CONST(params_, PromptAgentSessionRequest::Params) };
    inline PromptAgentSessionRequest::Params getParams() { DARABONBA_PTR_GET(params_, PromptAgentSessionRequest::Params) };
    inline PromptAgentSessionRequest& setParams(const PromptAgentSessionRequest::Params & params) { DARABONBA_PTR_SET_VALUE(params_, params) };
    inline PromptAgentSessionRequest& setParams(PromptAgentSessionRequest::Params && params) { DARABONBA_PTR_SET_RVALUE(params_, params) };


  protected:
    shared_ptr<string> id_ {};
    shared_ptr<string> jsonrpc_ {};
    shared_ptr<PromptAgentSessionRequest::Params> params_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
