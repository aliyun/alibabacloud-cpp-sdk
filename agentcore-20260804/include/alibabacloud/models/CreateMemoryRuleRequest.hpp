// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMEMORYRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEMEMORYRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentCore20260804
{
namespace Models
{
  class CreateMemoryRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMemoryRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMemoryRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    CreateMemoryRuleRequest() = default ;
    CreateMemoryRuleRequest(const CreateMemoryRuleRequest &) = default ;
    CreateMemoryRuleRequest(CreateMemoryRuleRequest &&) = default ;
    CreateMemoryRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMemoryRuleRequest() = default ;
    CreateMemoryRuleRequest& operator=(const CreateMemoryRuleRequest &) = default ;
    CreateMemoryRuleRequest& operator=(CreateMemoryRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Body : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Body& obj) { 
        DARABONBA_PTR_TO_JSON(description, description_);
        DARABONBA_PTR_TO_JSON(enabled, enabled_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(strategy, strategy_);
      };
      friend void from_json(const Darabonba::Json& j, Body& obj) { 
        DARABONBA_PTR_FROM_JSON(description, description_);
        DARABONBA_PTR_FROM_JSON(enabled, enabled_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(strategy, strategy_);
      };
      Body() = default ;
      Body(const Body &) = default ;
      Body(Body &&) = default ;
      Body(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Body() = default ;
      Body& operator=(const Body &) = default ;
      Body& operator=(Body &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Strategy : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Strategy& obj) { 
          DARABONBA_PTR_TO_JSON(instruction, instruction_);
          DARABONBA_PTR_TO_JSON(type, type_);
        };
        friend void from_json(const Darabonba::Json& j, Strategy& obj) { 
          DARABONBA_PTR_FROM_JSON(instruction, instruction_);
          DARABONBA_PTR_FROM_JSON(type, type_);
        };
        Strategy() = default ;
        Strategy(const Strategy &) = default ;
        Strategy(Strategy &&) = default ;
        Strategy(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Strategy() = default ;
        Strategy& operator=(const Strategy &) = default ;
        Strategy& operator=(Strategy &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->instruction_ == nullptr
        && this->type_ == nullptr; };
        // instruction Field Functions 
        bool hasInstruction() const { return this->instruction_ != nullptr;};
        void deleteInstruction() { this->instruction_ = nullptr;};
        inline string getInstruction() const { DARABONBA_PTR_GET_DEFAULT(instruction_, "") };
        inline Strategy& setInstruction(string instruction) { DARABONBA_PTR_SET_VALUE(instruction_, instruction) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Strategy& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // The strategy-level instruction. It takes effect together with the store-level instruction. If a conflict occurs, this field takes precedence.
        shared_ptr<string> instruction_ {};
        // type
        // 
        // This parameter is required.
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->description_ == nullptr
        && this->enabled_ == nullptr && this->name_ == nullptr && this->strategy_ == nullptr; };
      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Body& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // enabled Field Functions 
      bool hasEnabled() const { return this->enabled_ != nullptr;};
      void deleteEnabled() { this->enabled_ = nullptr;};
      inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
      inline Body& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Body& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // strategy Field Functions 
      bool hasStrategy() const { return this->strategy_ != nullptr;};
      void deleteStrategy() { this->strategy_ = nullptr;};
      inline const Body::Strategy & getStrategy() const { DARABONBA_PTR_GET_CONST(strategy_, Body::Strategy) };
      inline Body::Strategy getStrategy() { DARABONBA_PTR_GET(strategy_, Body::Strategy) };
      inline Body& setStrategy(const Body::Strategy & strategy) { DARABONBA_PTR_SET_VALUE(strategy_, strategy) };
      inline Body& setStrategy(Body::Strategy && strategy) { DARABONBA_PTR_SET_RVALUE(strategy_, strategy) };


    protected:
      // description
      shared_ptr<string> description_ {};
      // enabled
      shared_ptr<bool> enabled_ {};
      // name
      // 
      // This parameter is required.
      shared_ptr<string> name_ {};
      // strategy
      // 
      // This parameter is required.
      shared_ptr<Body::Strategy> strategy_ {};
    };

    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const CreateMemoryRuleRequest::Body & getBody() const { DARABONBA_PTR_GET_CONST(body_, CreateMemoryRuleRequest::Body) };
    inline CreateMemoryRuleRequest::Body getBody() { DARABONBA_PTR_GET(body_, CreateMemoryRuleRequest::Body) };
    inline CreateMemoryRuleRequest& setBody(const CreateMemoryRuleRequest::Body & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline CreateMemoryRuleRequest& setBody(CreateMemoryRuleRequest::Body && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    // The JSON request body.
    // 
    // This parameter is required.
    shared_ptr<CreateMemoryRuleRequest::Body> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentCore20260804
#endif
