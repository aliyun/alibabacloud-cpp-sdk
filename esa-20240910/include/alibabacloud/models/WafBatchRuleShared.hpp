// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_WAFBATCHRULESHARED_HPP_
#define ALIBABACLOUD_MODELS_WAFBATCHRULESHARED_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/WafRuleMatch2.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class WafBatchRuleShared : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const WafBatchRuleShared& obj) { 
      DARABONBA_PTR_TO_JSON(Action, action_);
      DARABONBA_PTR_TO_JSON(Actions, actions_);
      DARABONBA_PTR_TO_JSON(CrossSiteId, crossSiteId_);
      DARABONBA_PTR_TO_JSON(Expression, expression_);
      DARABONBA_PTR_TO_JSON(Match, match_);
      DARABONBA_PTR_TO_JSON(Mode, mode_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Target, target_);
    };
    friend void from_json(const Darabonba::Json& j, WafBatchRuleShared& obj) { 
      DARABONBA_PTR_FROM_JSON(Action, action_);
      DARABONBA_PTR_FROM_JSON(Actions, actions_);
      DARABONBA_PTR_FROM_JSON(CrossSiteId, crossSiteId_);
      DARABONBA_PTR_FROM_JSON(Expression, expression_);
      DARABONBA_PTR_FROM_JSON(Match, match_);
      DARABONBA_PTR_FROM_JSON(Mode, mode_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Target, target_);
    };
    WafBatchRuleShared() = default ;
    WafBatchRuleShared(const WafBatchRuleShared &) = default ;
    WafBatchRuleShared(WafBatchRuleShared &&) = default ;
    WafBatchRuleShared(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~WafBatchRuleShared() = default ;
    WafBatchRuleShared& operator=(const WafBatchRuleShared &) = default ;
    WafBatchRuleShared& operator=(WafBatchRuleShared &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Actions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Actions& obj) { 
        DARABONBA_PTR_TO_JSON(Response, response_);
      };
      friend void from_json(const Darabonba::Json& j, Actions& obj) { 
        DARABONBA_PTR_FROM_JSON(Response, response_);
      };
      Actions() = default ;
      Actions(const Actions &) = default ;
      Actions(Actions &&) = default ;
      Actions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Actions() = default ;
      Actions& operator=(const Actions &) = default ;
      Actions& operator=(Actions &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Response : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Response& obj) { 
          DARABONBA_PTR_TO_JSON(Code, code_);
          DARABONBA_PTR_TO_JSON(Id, id_);
        };
        friend void from_json(const Darabonba::Json& j, Response& obj) { 
          DARABONBA_PTR_FROM_JSON(Code, code_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
        };
        Response() = default ;
        Response(const Response &) = default ;
        Response(Response &&) = default ;
        Response(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Response() = default ;
        Response& operator=(const Response &) = default ;
        Response& operator=(Response &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->code_ == nullptr
        && this->id_ == nullptr; };
        // code Field Functions 
        bool hasCode() const { return this->code_ != nullptr;};
        void deleteCode() { this->code_ = nullptr;};
        inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
        inline Response& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline Response& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      protected:
        shared_ptr<int32_t> code_ {};
        shared_ptr<int64_t> id_ {};
      };

      virtual bool empty() const override { return this->response_ == nullptr; };
      // response Field Functions 
      bool hasResponse() const { return this->response_ != nullptr;};
      void deleteResponse() { this->response_ = nullptr;};
      inline const Actions::Response & getResponse() const { DARABONBA_PTR_GET_CONST(response_, Actions::Response) };
      inline Actions::Response getResponse() { DARABONBA_PTR_GET(response_, Actions::Response) };
      inline Actions& setResponse(const Actions::Response & response) { DARABONBA_PTR_SET_VALUE(response_, response) };
      inline Actions& setResponse(Actions::Response && response) { DARABONBA_PTR_SET_RVALUE(response_, response) };


    protected:
      shared_ptr<Actions::Response> response_ {};
    };

    virtual bool empty() const override { return this->action_ == nullptr
        && this->actions_ == nullptr && this->crossSiteId_ == nullptr && this->expression_ == nullptr && this->match_ == nullptr && this->mode_ == nullptr
        && this->name_ == nullptr && this->target_ == nullptr; };
    // action Field Functions 
    bool hasAction() const { return this->action_ != nullptr;};
    void deleteAction() { this->action_ = nullptr;};
    inline string getAction() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
    inline WafBatchRuleShared& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


    // actions Field Functions 
    bool hasActions() const { return this->actions_ != nullptr;};
    void deleteActions() { this->actions_ = nullptr;};
    inline const WafBatchRuleShared::Actions & getActions() const { DARABONBA_PTR_GET_CONST(actions_, WafBatchRuleShared::Actions) };
    inline WafBatchRuleShared::Actions getActions() { DARABONBA_PTR_GET(actions_, WafBatchRuleShared::Actions) };
    inline WafBatchRuleShared& setActions(const WafBatchRuleShared::Actions & actions) { DARABONBA_PTR_SET_VALUE(actions_, actions) };
    inline WafBatchRuleShared& setActions(WafBatchRuleShared::Actions && actions) { DARABONBA_PTR_SET_RVALUE(actions_, actions) };


    // crossSiteId Field Functions 
    bool hasCrossSiteId() const { return this->crossSiteId_ != nullptr;};
    void deleteCrossSiteId() { this->crossSiteId_ = nullptr;};
    inline int64_t getCrossSiteId() const { DARABONBA_PTR_GET_DEFAULT(crossSiteId_, 0L) };
    inline WafBatchRuleShared& setCrossSiteId(int64_t crossSiteId) { DARABONBA_PTR_SET_VALUE(crossSiteId_, crossSiteId) };


    // expression Field Functions 
    bool hasExpression() const { return this->expression_ != nullptr;};
    void deleteExpression() { this->expression_ = nullptr;};
    inline string getExpression() const { DARABONBA_PTR_GET_DEFAULT(expression_, "") };
    inline WafBatchRuleShared& setExpression(string expression) { DARABONBA_PTR_SET_VALUE(expression_, expression) };


    // match Field Functions 
    bool hasMatch() const { return this->match_ != nullptr;};
    void deleteMatch() { this->match_ = nullptr;};
    inline const WafRuleMatch2 & getMatch() const { DARABONBA_PTR_GET_CONST(match_, WafRuleMatch2) };
    inline WafRuleMatch2 getMatch() { DARABONBA_PTR_GET(match_, WafRuleMatch2) };
    inline WafBatchRuleShared& setMatch(const WafRuleMatch2 & match) { DARABONBA_PTR_SET_VALUE(match_, match) };
    inline WafBatchRuleShared& setMatch(WafRuleMatch2 && match) { DARABONBA_PTR_SET_RVALUE(match_, match) };


    // mode Field Functions 
    bool hasMode() const { return this->mode_ != nullptr;};
    void deleteMode() { this->mode_ = nullptr;};
    inline string getMode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
    inline WafBatchRuleShared& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline WafBatchRuleShared& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // target Field Functions 
    bool hasTarget() const { return this->target_ != nullptr;};
    void deleteTarget() { this->target_ = nullptr;};
    inline string getTarget() const { DARABONBA_PTR_GET_DEFAULT(target_, "") };
    inline WafBatchRuleShared& setTarget(string target) { DARABONBA_PTR_SET_VALUE(target_, target) };


  protected:
    shared_ptr<string> action_ {};
    shared_ptr<WafBatchRuleShared::Actions> actions_ {};
    shared_ptr<int64_t> crossSiteId_ {};
    shared_ptr<string> expression_ {};
    shared_ptr<WafRuleMatch2> match_ {};
    shared_ptr<string> mode_ {};
    shared_ptr<string> name_ {};
    shared_ptr<string> target_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
