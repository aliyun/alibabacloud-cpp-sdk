// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYAUTOSHUTDOWNPOLICIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYAUTOSHUTDOWNPOLICIESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDsw20220101
{
namespace Models
{
  class QueryAutoShutdownPoliciesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryAutoShutdownPoliciesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AutoShutdownPolicies, autoShutdownPolicies_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryAutoShutdownPoliciesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoShutdownPolicies, autoShutdownPolicies_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    QueryAutoShutdownPoliciesResponseBody() = default ;
    QueryAutoShutdownPoliciesResponseBody(const QueryAutoShutdownPoliciesResponseBody &) = default ;
    QueryAutoShutdownPoliciesResponseBody(QueryAutoShutdownPoliciesResponseBody &&) = default ;
    QueryAutoShutdownPoliciesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryAutoShutdownPoliciesResponseBody() = default ;
    QueryAutoShutdownPoliciesResponseBody& operator=(const QueryAutoShutdownPoliciesResponseBody &) = default ;
    QueryAutoShutdownPoliciesResponseBody& operator=(QueryAutoShutdownPoliciesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AutoShutdownPolicies : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AutoShutdownPolicies& obj) { 
        DARABONBA_PTR_TO_JSON(Conditions, conditions_);
        DARABONBA_ANY_TO_JSON(Context, context_);
        DARABONBA_PTR_TO_JSON(Expression, expression_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
      };
      friend void from_json(const Darabonba::Json& j, AutoShutdownPolicies& obj) { 
        DARABONBA_PTR_FROM_JSON(Conditions, conditions_);
        DARABONBA_ANY_FROM_JSON(Context, context_);
        DARABONBA_PTR_FROM_JSON(Expression, expression_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
      };
      AutoShutdownPolicies() = default ;
      AutoShutdownPolicies(const AutoShutdownPolicies &) = default ;
      AutoShutdownPolicies(AutoShutdownPolicies &&) = default ;
      AutoShutdownPolicies(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AutoShutdownPolicies() = default ;
      AutoShutdownPolicies& operator=(const AutoShutdownPolicies &) = default ;
      AutoShutdownPolicies& operator=(AutoShutdownPolicies &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Conditions : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Conditions& obj) { 
          DARABONBA_ANY_TO_JSON(Context, context_);
          DARABONBA_PTR_TO_JSON(Expression, expression_);
          DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
        };
        friend void from_json(const Darabonba::Json& j, Conditions& obj) { 
          DARABONBA_ANY_FROM_JSON(Context, context_);
          DARABONBA_PTR_FROM_JSON(Expression, expression_);
          DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
        };
        Conditions() = default ;
        Conditions(const Conditions &) = default ;
        Conditions(Conditions &&) = default ;
        Conditions(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Conditions() = default ;
        Conditions& operator=(const Conditions &) = default ;
        Conditions& operator=(Conditions &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->context_ == nullptr
        && this->expression_ == nullptr && this->sourceType_ == nullptr; };
        // context Field Functions 
        bool hasContext() const { return this->context_ != nullptr;};
        void deleteContext() { this->context_ = nullptr;};
        inline         const Darabonba::Json & getContext() const { DARABONBA_GET(context_) };
        Darabonba::Json & getContext() { DARABONBA_GET(context_) };
        inline Conditions& setContext(const Darabonba::Json & context) { DARABONBA_SET_VALUE(context_, context) };
        inline Conditions& setContext(Darabonba::Json && context) { DARABONBA_SET_RVALUE(context_, context) };


        // expression Field Functions 
        bool hasExpression() const { return this->expression_ != nullptr;};
        void deleteExpression() { this->expression_ = nullptr;};
        inline string getExpression() const { DARABONBA_PTR_GET_DEFAULT(expression_, "") };
        inline Conditions& setExpression(string expression) { DARABONBA_PTR_SET_VALUE(expression_, expression) };


        // sourceType Field Functions 
        bool hasSourceType() const { return this->sourceType_ != nullptr;};
        void deleteSourceType() { this->sourceType_ = nullptr;};
        inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
        inline Conditions& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


      protected:
        Darabonba::Json context_ {};
        shared_ptr<string> expression_ {};
        shared_ptr<string> sourceType_ {};
      };

      virtual bool empty() const override { return this->conditions_ == nullptr
        && this->context_ == nullptr && this->expression_ == nullptr && this->instanceId_ == nullptr && this->sourceType_ == nullptr; };
      // conditions Field Functions 
      bool hasConditions() const { return this->conditions_ != nullptr;};
      void deleteConditions() { this->conditions_ = nullptr;};
      inline const vector<AutoShutdownPolicies::Conditions> & getConditions() const { DARABONBA_PTR_GET_CONST(conditions_, vector<AutoShutdownPolicies::Conditions>) };
      inline vector<AutoShutdownPolicies::Conditions> getConditions() { DARABONBA_PTR_GET(conditions_, vector<AutoShutdownPolicies::Conditions>) };
      inline AutoShutdownPolicies& setConditions(const vector<AutoShutdownPolicies::Conditions> & conditions) { DARABONBA_PTR_SET_VALUE(conditions_, conditions) };
      inline AutoShutdownPolicies& setConditions(vector<AutoShutdownPolicies::Conditions> && conditions) { DARABONBA_PTR_SET_RVALUE(conditions_, conditions) };


      // context Field Functions 
      bool hasContext() const { return this->context_ != nullptr;};
      void deleteContext() { this->context_ = nullptr;};
      inline       const Darabonba::Json & getContext() const { DARABONBA_GET(context_) };
      Darabonba::Json & getContext() { DARABONBA_GET(context_) };
      inline AutoShutdownPolicies& setContext(const Darabonba::Json & context) { DARABONBA_SET_VALUE(context_, context) };
      inline AutoShutdownPolicies& setContext(Darabonba::Json && context) { DARABONBA_SET_RVALUE(context_, context) };


      // expression Field Functions 
      bool hasExpression() const { return this->expression_ != nullptr;};
      void deleteExpression() { this->expression_ = nullptr;};
      inline string getExpression() const { DARABONBA_PTR_GET_DEFAULT(expression_, "") };
      inline AutoShutdownPolicies& setExpression(string expression) { DARABONBA_PTR_SET_VALUE(expression_, expression) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline AutoShutdownPolicies& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // sourceType Field Functions 
      bool hasSourceType() const { return this->sourceType_ != nullptr;};
      void deleteSourceType() { this->sourceType_ = nullptr;};
      inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
      inline AutoShutdownPolicies& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    protected:
      shared_ptr<vector<AutoShutdownPolicies::Conditions>> conditions_ {};
      Darabonba::Json context_ {};
      shared_ptr<string> expression_ {};
      shared_ptr<string> instanceId_ {};
      shared_ptr<string> sourceType_ {};
    };

    virtual bool empty() const override { return this->autoShutdownPolicies_ == nullptr
        && this->requestId_ == nullptr; };
    // autoShutdownPolicies Field Functions 
    bool hasAutoShutdownPolicies() const { return this->autoShutdownPolicies_ != nullptr;};
    void deleteAutoShutdownPolicies() { this->autoShutdownPolicies_ = nullptr;};
    inline const vector<QueryAutoShutdownPoliciesResponseBody::AutoShutdownPolicies> & getAutoShutdownPolicies() const { DARABONBA_PTR_GET_CONST(autoShutdownPolicies_, vector<QueryAutoShutdownPoliciesResponseBody::AutoShutdownPolicies>) };
    inline vector<QueryAutoShutdownPoliciesResponseBody::AutoShutdownPolicies> getAutoShutdownPolicies() { DARABONBA_PTR_GET(autoShutdownPolicies_, vector<QueryAutoShutdownPoliciesResponseBody::AutoShutdownPolicies>) };
    inline QueryAutoShutdownPoliciesResponseBody& setAutoShutdownPolicies(const vector<QueryAutoShutdownPoliciesResponseBody::AutoShutdownPolicies> & autoShutdownPolicies) { DARABONBA_PTR_SET_VALUE(autoShutdownPolicies_, autoShutdownPolicies) };
    inline QueryAutoShutdownPoliciesResponseBody& setAutoShutdownPolicies(vector<QueryAutoShutdownPoliciesResponseBody::AutoShutdownPolicies> && autoShutdownPolicies) { DARABONBA_PTR_SET_RVALUE(autoShutdownPolicies_, autoShutdownPolicies) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryAutoShutdownPoliciesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<QueryAutoShutdownPoliciesResponseBody::AutoShutdownPolicies>> autoShutdownPolicies_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDsw20220101
#endif
