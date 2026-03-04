// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AGUIMESSAGE_HPP_
#define ALIBABACLOUD_MODELS_AGUIMESSAGE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class AguiMessage : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AguiMessage& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Metadata, metadata_);
      DARABONBA_PTR_TO_JSON(Role, role_);
      DARABONBA_PTR_TO_JSON(ToolCallId, toolCallId_);
      DARABONBA_PTR_TO_JSON(ToolCalls, toolCalls_);
    };
    friend void from_json(const Darabonba::Json& j, AguiMessage& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Metadata, metadata_);
      DARABONBA_PTR_FROM_JSON(Role, role_);
      DARABONBA_PTR_FROM_JSON(ToolCallId, toolCallId_);
      DARABONBA_PTR_FROM_JSON(ToolCalls, toolCalls_);
    };
    AguiMessage() = default ;
    AguiMessage(const AguiMessage &) = default ;
    AguiMessage(AguiMessage &&) = default ;
    AguiMessage(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AguiMessage() = default ;
    AguiMessage& operator=(const AguiMessage &) = default ;
    AguiMessage& operator=(AguiMessage &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ToolCalls : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ToolCalls& obj) { 
        DARABONBA_PTR_TO_JSON(Function, function_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, ToolCalls& obj) { 
        DARABONBA_PTR_FROM_JSON(Function, function_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      ToolCalls() = default ;
      ToolCalls(const ToolCalls &) = default ;
      ToolCalls(ToolCalls &&) = default ;
      ToolCalls(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ToolCalls() = default ;
      ToolCalls& operator=(const ToolCalls &) = default ;
      ToolCalls& operator=(ToolCalls &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Function : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Function& obj) { 
          DARABONBA_PTR_TO_JSON(Arguments, arguments_);
          DARABONBA_PTR_TO_JSON(Name, name_);
        };
        friend void from_json(const Darabonba::Json& j, Function& obj) { 
          DARABONBA_PTR_FROM_JSON(Arguments, arguments_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
        };
        Function() = default ;
        Function(const Function &) = default ;
        Function(Function &&) = default ;
        Function(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Function() = default ;
        Function& operator=(const Function &) = default ;
        Function& operator=(Function &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->arguments_ == nullptr
        && this->name_ == nullptr; };
        // arguments Field Functions 
        bool hasArguments() const { return this->arguments_ != nullptr;};
        void deleteArguments() { this->arguments_ = nullptr;};
        inline string getArguments() const { DARABONBA_PTR_GET_DEFAULT(arguments_, "") };
        inline Function& setArguments(string arguments) { DARABONBA_PTR_SET_VALUE(arguments_, arguments) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Function& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      protected:
        shared_ptr<string> arguments_ {};
        shared_ptr<string> name_ {};
      };

      virtual bool empty() const override { return this->function_ == nullptr
        && this->id_ == nullptr && this->type_ == nullptr; };
      // function Field Functions 
      bool hasFunction() const { return this->function_ != nullptr;};
      void deleteFunction() { this->function_ = nullptr;};
      inline const ToolCalls::Function & getFunction() const { DARABONBA_PTR_GET_CONST(function_, ToolCalls::Function) };
      inline ToolCalls::Function getFunction() { DARABONBA_PTR_GET(function_, ToolCalls::Function) };
      inline ToolCalls& setFunction(const ToolCalls::Function & function) { DARABONBA_PTR_SET_VALUE(function_, function) };
      inline ToolCalls& setFunction(ToolCalls::Function && function) { DARABONBA_PTR_SET_RVALUE(function_, function) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline ToolCalls& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline ToolCalls& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      shared_ptr<ToolCalls::Function> function_ {};
      shared_ptr<string> id_ {};
      shared_ptr<string> type_ {};
    };

    class Metadata : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Metadata& obj) { 
        DARABONBA_PTR_TO_JSON(Attachments, attachments_);
      };
      friend void from_json(const Darabonba::Json& j, Metadata& obj) { 
        DARABONBA_PTR_FROM_JSON(Attachments, attachments_);
      };
      Metadata() = default ;
      Metadata(const Metadata &) = default ;
      Metadata(Metadata &&) = default ;
      Metadata(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Metadata() = default ;
      Metadata& operator=(const Metadata &) = default ;
      Metadata& operator=(Metadata &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Attachments : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Attachments& obj) { 
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, Attachments& obj) { 
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        Attachments() = default ;
        Attachments(const Attachments &) = default ;
        Attachments(Attachments &&) = default ;
        Attachments(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Attachments() = default ;
        Attachments& operator=(const Attachments &) = default ;
        Attachments& operator=(Attachments &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->name_ == nullptr
        && this->type_ == nullptr; };
        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Attachments& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Attachments& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        shared_ptr<string> name_ {};
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->attachments_ == nullptr; };
      // attachments Field Functions 
      bool hasAttachments() const { return this->attachments_ != nullptr;};
      void deleteAttachments() { this->attachments_ = nullptr;};
      inline const Metadata::Attachments & getAttachments() const { DARABONBA_PTR_GET_CONST(attachments_, Metadata::Attachments) };
      inline Metadata::Attachments getAttachments() { DARABONBA_PTR_GET(attachments_, Metadata::Attachments) };
      inline Metadata& setAttachments(const Metadata::Attachments & attachments) { DARABONBA_PTR_SET_VALUE(attachments_, attachments) };
      inline Metadata& setAttachments(Metadata::Attachments && attachments) { DARABONBA_PTR_SET_RVALUE(attachments_, attachments) };


    protected:
      shared_ptr<Metadata::Attachments> attachments_ {};
    };

    virtual bool empty() const override { return this->content_ == nullptr
        && this->id_ == nullptr && this->metadata_ == nullptr && this->role_ == nullptr && this->toolCallId_ == nullptr && this->toolCalls_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline AguiMessage& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline AguiMessage& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // metadata Field Functions 
    bool hasMetadata() const { return this->metadata_ != nullptr;};
    void deleteMetadata() { this->metadata_ = nullptr;};
    inline const AguiMessage::Metadata & getMetadata() const { DARABONBA_PTR_GET_CONST(metadata_, AguiMessage::Metadata) };
    inline AguiMessage::Metadata getMetadata() { DARABONBA_PTR_GET(metadata_, AguiMessage::Metadata) };
    inline AguiMessage& setMetadata(const AguiMessage::Metadata & metadata) { DARABONBA_PTR_SET_VALUE(metadata_, metadata) };
    inline AguiMessage& setMetadata(AguiMessage::Metadata && metadata) { DARABONBA_PTR_SET_RVALUE(metadata_, metadata) };


    // role Field Functions 
    bool hasRole() const { return this->role_ != nullptr;};
    void deleteRole() { this->role_ = nullptr;};
    inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
    inline AguiMessage& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


    // toolCallId Field Functions 
    bool hasToolCallId() const { return this->toolCallId_ != nullptr;};
    void deleteToolCallId() { this->toolCallId_ = nullptr;};
    inline string getToolCallId() const { DARABONBA_PTR_GET_DEFAULT(toolCallId_, "") };
    inline AguiMessage& setToolCallId(string toolCallId) { DARABONBA_PTR_SET_VALUE(toolCallId_, toolCallId) };


    // toolCalls Field Functions 
    bool hasToolCalls() const { return this->toolCalls_ != nullptr;};
    void deleteToolCalls() { this->toolCalls_ = nullptr;};
    inline const vector<AguiMessage::ToolCalls> & getToolCalls() const { DARABONBA_PTR_GET_CONST(toolCalls_, vector<AguiMessage::ToolCalls>) };
    inline vector<AguiMessage::ToolCalls> getToolCalls() { DARABONBA_PTR_GET(toolCalls_, vector<AguiMessage::ToolCalls>) };
    inline AguiMessage& setToolCalls(const vector<AguiMessage::ToolCalls> & toolCalls) { DARABONBA_PTR_SET_VALUE(toolCalls_, toolCalls) };
    inline AguiMessage& setToolCalls(vector<AguiMessage::ToolCalls> && toolCalls) { DARABONBA_PTR_SET_RVALUE(toolCalls_, toolCalls) };


  protected:
    shared_ptr<string> content_ {};
    shared_ptr<string> id_ {};
    shared_ptr<AguiMessage::Metadata> metadata_ {};
    shared_ptr<string> role_ {};
    shared_ptr<string> toolCallId_ {};
    shared_ptr<vector<AguiMessage::ToolCalls>> toolCalls_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
