// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMASKINGRULESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMASKINGRULESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeMaskingRulesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMaskingRulesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMaskingRulesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeMaskingRulesResponseBody() = default ;
    DescribeMaskingRulesResponseBody(const DescribeMaskingRulesResponseBody &) = default ;
    DescribeMaskingRulesResponseBody(DescribeMaskingRulesResponseBody &&) = default ;
    DescribeMaskingRulesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMaskingRulesResponseBody() = default ;
    DescribeMaskingRulesResponseBody& operator=(const DescribeMaskingRulesResponseBody &) = default ;
    DescribeMaskingRulesResponseBody& operator=(DescribeMaskingRulesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Rules, rules_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Rules, rules_);
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
      class Rules : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Rules& obj) { 
          DARABONBA_PTR_TO_JSON(DefaultAlgo, defaultAlgo_);
          DARABONBA_PTR_TO_JSON(Enabled, enabled_);
          DARABONBA_PTR_TO_JSON(MaskingAlgo, maskingAlgo_);
          DARABONBA_PTR_TO_JSON(RuleConfig, ruleConfig_);
          DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
        };
        friend void from_json(const Darabonba::Json& j, Rules& obj) { 
          DARABONBA_PTR_FROM_JSON(DefaultAlgo, defaultAlgo_);
          DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
          DARABONBA_PTR_FROM_JSON(MaskingAlgo, maskingAlgo_);
          DARABONBA_PTR_FROM_JSON(RuleConfig, ruleConfig_);
          DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
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
        class RuleConfig : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const RuleConfig& obj) { 
            DARABONBA_PTR_TO_JSON(Columns, columns_);
            DARABONBA_PTR_TO_JSON(Databases, databases_);
            DARABONBA_PTR_TO_JSON(Tables, tables_);
          };
          friend void from_json(const Darabonba::Json& j, RuleConfig& obj) { 
            DARABONBA_PTR_FROM_JSON(Columns, columns_);
            DARABONBA_PTR_FROM_JSON(Databases, databases_);
            DARABONBA_PTR_FROM_JSON(Tables, tables_);
          };
          RuleConfig() = default ;
          RuleConfig(const RuleConfig &) = default ;
          RuleConfig(RuleConfig &&) = default ;
          RuleConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~RuleConfig() = default ;
          RuleConfig& operator=(const RuleConfig &) = default ;
          RuleConfig& operator=(RuleConfig &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->columns_ == nullptr
        && this->databases_ == nullptr && this->tables_ == nullptr; };
          // columns Field Functions 
          bool hasColumns() const { return this->columns_ != nullptr;};
          void deleteColumns() { this->columns_ = nullptr;};
          inline const vector<string> & getColumns() const { DARABONBA_PTR_GET_CONST(columns_, vector<string>) };
          inline vector<string> getColumns() { DARABONBA_PTR_GET(columns_, vector<string>) };
          inline RuleConfig& setColumns(const vector<string> & columns) { DARABONBA_PTR_SET_VALUE(columns_, columns) };
          inline RuleConfig& setColumns(vector<string> && columns) { DARABONBA_PTR_SET_RVALUE(columns_, columns) };


          // databases Field Functions 
          bool hasDatabases() const { return this->databases_ != nullptr;};
          void deleteDatabases() { this->databases_ = nullptr;};
          inline const vector<string> & getDatabases() const { DARABONBA_PTR_GET_CONST(databases_, vector<string>) };
          inline vector<string> getDatabases() { DARABONBA_PTR_GET(databases_, vector<string>) };
          inline RuleConfig& setDatabases(const vector<string> & databases) { DARABONBA_PTR_SET_VALUE(databases_, databases) };
          inline RuleConfig& setDatabases(vector<string> && databases) { DARABONBA_PTR_SET_RVALUE(databases_, databases) };


          // tables Field Functions 
          bool hasTables() const { return this->tables_ != nullptr;};
          void deleteTables() { this->tables_ = nullptr;};
          inline const vector<string> & getTables() const { DARABONBA_PTR_GET_CONST(tables_, vector<string>) };
          inline vector<string> getTables() { DARABONBA_PTR_GET(tables_, vector<string>) };
          inline RuleConfig& setTables(const vector<string> & tables) { DARABONBA_PTR_SET_VALUE(tables_, tables) };
          inline RuleConfig& setTables(vector<string> && tables) { DARABONBA_PTR_SET_RVALUE(tables_, tables) };


        protected:
          shared_ptr<vector<string>> columns_ {};
          shared_ptr<vector<string>> databases_ {};
          shared_ptr<vector<string>> tables_ {};
        };

        virtual bool empty() const override { return this->defaultAlgo_ == nullptr
        && this->enabled_ == nullptr && this->maskingAlgo_ == nullptr && this->ruleConfig_ == nullptr && this->ruleName_ == nullptr; };
        // defaultAlgo Field Functions 
        bool hasDefaultAlgo() const { return this->defaultAlgo_ != nullptr;};
        void deleteDefaultAlgo() { this->defaultAlgo_ = nullptr;};
        inline string getDefaultAlgo() const { DARABONBA_PTR_GET_DEFAULT(defaultAlgo_, "") };
        inline Rules& setDefaultAlgo(string defaultAlgo) { DARABONBA_PTR_SET_VALUE(defaultAlgo_, defaultAlgo) };


        // enabled Field Functions 
        bool hasEnabled() const { return this->enabled_ != nullptr;};
        void deleteEnabled() { this->enabled_ = nullptr;};
        inline string getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, "") };
        inline Rules& setEnabled(string enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


        // maskingAlgo Field Functions 
        bool hasMaskingAlgo() const { return this->maskingAlgo_ != nullptr;};
        void deleteMaskingAlgo() { this->maskingAlgo_ = nullptr;};
        inline string getMaskingAlgo() const { DARABONBA_PTR_GET_DEFAULT(maskingAlgo_, "") };
        inline Rules& setMaskingAlgo(string maskingAlgo) { DARABONBA_PTR_SET_VALUE(maskingAlgo_, maskingAlgo) };


        // ruleConfig Field Functions 
        bool hasRuleConfig() const { return this->ruleConfig_ != nullptr;};
        void deleteRuleConfig() { this->ruleConfig_ = nullptr;};
        inline const Rules::RuleConfig & getRuleConfig() const { DARABONBA_PTR_GET_CONST(ruleConfig_, Rules::RuleConfig) };
        inline Rules::RuleConfig getRuleConfig() { DARABONBA_PTR_GET(ruleConfig_, Rules::RuleConfig) };
        inline Rules& setRuleConfig(const Rules::RuleConfig & ruleConfig) { DARABONBA_PTR_SET_VALUE(ruleConfig_, ruleConfig) };
        inline Rules& setRuleConfig(Rules::RuleConfig && ruleConfig) { DARABONBA_PTR_SET_RVALUE(ruleConfig_, ruleConfig) };


        // ruleName Field Functions 
        bool hasRuleName() const { return this->ruleName_ != nullptr;};
        void deleteRuleName() { this->ruleName_ = nullptr;};
        inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
        inline Rules& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


      protected:
        shared_ptr<string> defaultAlgo_ {};
        shared_ptr<string> enabled_ {};
        shared_ptr<string> maskingAlgo_ {};
        shared_ptr<Rules::RuleConfig> ruleConfig_ {};
        shared_ptr<string> ruleName_ {};
      };

      virtual bool empty() const override { return this->rules_ == nullptr; };
      // rules Field Functions 
      bool hasRules() const { return this->rules_ != nullptr;};
      void deleteRules() { this->rules_ = nullptr;};
      inline const vector<Data::Rules> & getRules() const { DARABONBA_PTR_GET_CONST(rules_, vector<Data::Rules>) };
      inline vector<Data::Rules> getRules() { DARABONBA_PTR_GET(rules_, vector<Data::Rules>) };
      inline Data& setRules(const vector<Data::Rules> & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
      inline Data& setRules(vector<Data::Rules> && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


    protected:
      shared_ptr<vector<Data::Rules>> rules_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeMaskingRulesResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeMaskingRulesResponseBody::Data) };
    inline DescribeMaskingRulesResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeMaskingRulesResponseBody::Data) };
    inline DescribeMaskingRulesResponseBody& setData(const DescribeMaskingRulesResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeMaskingRulesResponseBody& setData(DescribeMaskingRulesResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeMaskingRulesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<DescribeMaskingRulesResponseBody::Data> data_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
