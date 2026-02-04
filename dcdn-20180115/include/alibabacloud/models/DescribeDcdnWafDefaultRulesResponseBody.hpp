// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNWAFDEFAULTRULESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNWAFDEFAULTRULESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnWafDefaultRulesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnWafDefaultRulesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnWafDefaultRulesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDcdnWafDefaultRulesResponseBody() = default ;
    DescribeDcdnWafDefaultRulesResponseBody(const DescribeDcdnWafDefaultRulesResponseBody &) = default ;
    DescribeDcdnWafDefaultRulesResponseBody(DescribeDcdnWafDefaultRulesResponseBody &&) = default ;
    DescribeDcdnWafDefaultRulesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnWafDefaultRulesResponseBody() = default ;
    DescribeDcdnWafDefaultRulesResponseBody& operator=(const DescribeDcdnWafDefaultRulesResponseBody &) = default ;
    DescribeDcdnWafDefaultRulesResponseBody& operator=(DescribeDcdnWafDefaultRulesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Content : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Content& obj) { 
        DARABONBA_PTR_TO_JSON(DefenseScene, defenseScene_);
        DARABONBA_PTR_TO_JSON(Rules, rules_);
      };
      friend void from_json(const Darabonba::Json& j, Content& obj) { 
        DARABONBA_PTR_FROM_JSON(DefenseScene, defenseScene_);
        DARABONBA_PTR_FROM_JSON(Rules, rules_);
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
      class Rules : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Rules& obj) { 
          DARABONBA_PTR_TO_JSON(Action, action_);
          DARABONBA_PTR_TO_JSON(Config, config_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, Rules& obj) { 
          DARABONBA_PTR_FROM_JSON(Action, action_);
          DARABONBA_PTR_FROM_JSON(Config, config_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        Rules() = default ;
        Rules(const Rules &) = default ;
        Rules(Rules &&) = default ;
        Rules(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Rules() = default ;
        Rules& operator=(const Rules &) = default ;
        Rules& operator=(Rules &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->action_ == nullptr
        && this->config_ == nullptr && this->name_ == nullptr && this->status_ == nullptr && this->type_ == nullptr; };
        // action Field Functions 
        bool hasAction() const { return this->action_ != nullptr;};
        void deleteAction() { this->action_ = nullptr;};
        inline string getAction() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
        inline Rules& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


        // config Field Functions 
        bool hasConfig() const { return this->config_ != nullptr;};
        void deleteConfig() { this->config_ = nullptr;};
        inline string getConfig() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
        inline Rules& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Rules& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Rules& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Rules& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // The default action of the rule. Valid values:
        // 
        // *   **monitor**
        // *   **deny**
        // *   **block**
        shared_ptr<string> action_ {};
        // The default configuration of the rule.
        shared_ptr<string> config_ {};
        // The default name of the rule.
        shared_ptr<string> name_ {};
        // The default status of the rule. Valid values:
        // 
        // *   **on**
        // *   **off**
        shared_ptr<string> status_ {};
        // The type of the rule. Valid values:
        // 
        // *   **waf_group**: basic web protection.
        // *   **high_frequency**: high-frequency scanning blocking.
        // *   **directory_traversal**: directory traversal blocking.
        // *   **scan_tools**: scanner blocking.
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->defenseScene_ == nullptr
        && this->rules_ == nullptr; };
      // defenseScene Field Functions 
      bool hasDefenseScene() const { return this->defenseScene_ != nullptr;};
      void deleteDefenseScene() { this->defenseScene_ = nullptr;};
      inline string getDefenseScene() const { DARABONBA_PTR_GET_DEFAULT(defenseScene_, "") };
      inline Content& setDefenseScene(string defenseScene) { DARABONBA_PTR_SET_VALUE(defenseScene_, defenseScene) };


      // rules Field Functions 
      bool hasRules() const { return this->rules_ != nullptr;};
      void deleteRules() { this->rules_ = nullptr;};
      inline const vector<Content::Rules> & getRules() const { DARABONBA_PTR_GET_CONST(rules_, vector<Content::Rules>) };
      inline vector<Content::Rules> getRules() { DARABONBA_PTR_GET(rules_, vector<Content::Rules>) };
      inline Content& setRules(const vector<Content::Rules> & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
      inline Content& setRules(vector<Content::Rules> && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


    protected:
      // The protection scenario. Valid values:
      // 
      // *   **waf_group**: basic web protection.
      // *   **anti_scan**: scan protection.
      shared_ptr<string> defenseScene_ {};
      // The rules.
      shared_ptr<vector<Content::Rules>> rules_ {};
    };

    virtual bool empty() const override { return this->content_ == nullptr
        && this->requestId_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline const vector<DescribeDcdnWafDefaultRulesResponseBody::Content> & getContent() const { DARABONBA_PTR_GET_CONST(content_, vector<DescribeDcdnWafDefaultRulesResponseBody::Content>) };
    inline vector<DescribeDcdnWafDefaultRulesResponseBody::Content> getContent() { DARABONBA_PTR_GET(content_, vector<DescribeDcdnWafDefaultRulesResponseBody::Content>) };
    inline DescribeDcdnWafDefaultRulesResponseBody& setContent(const vector<DescribeDcdnWafDefaultRulesResponseBody::Content> & content) { DARABONBA_PTR_SET_VALUE(content_, content) };
    inline DescribeDcdnWafDefaultRulesResponseBody& setContent(vector<DescribeDcdnWafDefaultRulesResponseBody::Content> && content) { DARABONBA_PTR_SET_RVALUE(content_, content) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDcdnWafDefaultRulesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The rule configurations.
    shared_ptr<vector<DescribeDcdnWafDefaultRulesResponseBody::Content>> content_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
