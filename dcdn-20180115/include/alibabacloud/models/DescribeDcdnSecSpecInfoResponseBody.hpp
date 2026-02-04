// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNSECSPECINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNSECSPECINFORESPONSEBODY_HPP_
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
  class DescribeDcdnSecSpecInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnSecSpecInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SpecInfos, specInfos_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnSecSpecInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SpecInfos, specInfos_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    DescribeDcdnSecSpecInfoResponseBody() = default ;
    DescribeDcdnSecSpecInfoResponseBody(const DescribeDcdnSecSpecInfoResponseBody &) = default ;
    DescribeDcdnSecSpecInfoResponseBody(DescribeDcdnSecSpecInfoResponseBody &&) = default ;
    DescribeDcdnSecSpecInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnSecSpecInfoResponseBody() = default ;
    DescribeDcdnSecSpecInfoResponseBody& operator=(const DescribeDcdnSecSpecInfoResponseBody &) = default ;
    DescribeDcdnSecSpecInfoResponseBody& operator=(DescribeDcdnSecSpecInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SpecInfos : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SpecInfos& obj) { 
        DARABONBA_PTR_TO_JSON(RuleCode, ruleCode_);
        DARABONBA_PTR_TO_JSON(RuleConfigs, ruleConfigs_);
      };
      friend void from_json(const Darabonba::Json& j, SpecInfos& obj) { 
        DARABONBA_PTR_FROM_JSON(RuleCode, ruleCode_);
        DARABONBA_PTR_FROM_JSON(RuleConfigs, ruleConfigs_);
      };
      SpecInfos() = default ;
      SpecInfos(const SpecInfos &) = default ;
      SpecInfos(SpecInfos &&) = default ;
      SpecInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SpecInfos() = default ;
      SpecInfos& operator=(const SpecInfos &) = default ;
      SpecInfos& operator=(SpecInfos &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class RuleConfigs : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RuleConfigs& obj) { 
          DARABONBA_PTR_TO_JSON(Code, code_);
          DARABONBA_PTR_TO_JSON(Expr, expr_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, RuleConfigs& obj) { 
          DARABONBA_PTR_FROM_JSON(Code, code_);
          DARABONBA_PTR_FROM_JSON(Expr, expr_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        RuleConfigs() = default ;
        RuleConfigs(const RuleConfigs &) = default ;
        RuleConfigs(RuleConfigs &&) = default ;
        RuleConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RuleConfigs() = default ;
        RuleConfigs& operator=(const RuleConfigs &) = default ;
        RuleConfigs& operator=(RuleConfigs &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->code_ == nullptr
        && this->expr_ == nullptr && this->value_ == nullptr; };
        // code Field Functions 
        bool hasCode() const { return this->code_ != nullptr;};
        void deleteCode() { this->code_ = nullptr;};
        inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
        inline RuleConfigs& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


        // expr Field Functions 
        bool hasExpr() const { return this->expr_ != nullptr;};
        void deleteExpr() { this->expr_ = nullptr;};
        inline string getExpr() const { DARABONBA_PTR_GET_DEFAULT(expr_, "") };
        inline RuleConfigs& setExpr(string expr) { DARABONBA_PTR_SET_VALUE(expr_, expr) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline RuleConfigs& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // The configuration code of the security rule.
        shared_ptr<string> code_ {};
        // The configuration expression of the security rule.
        shared_ptr<string> expr_ {};
        // The value of the configuration expression of the security rule.
        shared_ptr<string> value_ {};
      };

      virtual bool empty() const override { return this->ruleCode_ == nullptr
        && this->ruleConfigs_ == nullptr; };
      // ruleCode Field Functions 
      bool hasRuleCode() const { return this->ruleCode_ != nullptr;};
      void deleteRuleCode() { this->ruleCode_ = nullptr;};
      inline string getRuleCode() const { DARABONBA_PTR_GET_DEFAULT(ruleCode_, "") };
      inline SpecInfos& setRuleCode(string ruleCode) { DARABONBA_PTR_SET_VALUE(ruleCode_, ruleCode) };


      // ruleConfigs Field Functions 
      bool hasRuleConfigs() const { return this->ruleConfigs_ != nullptr;};
      void deleteRuleConfigs() { this->ruleConfigs_ = nullptr;};
      inline const vector<SpecInfos::RuleConfigs> & getRuleConfigs() const { DARABONBA_PTR_GET_CONST(ruleConfigs_, vector<SpecInfos::RuleConfigs>) };
      inline vector<SpecInfos::RuleConfigs> getRuleConfigs() { DARABONBA_PTR_GET(ruleConfigs_, vector<SpecInfos::RuleConfigs>) };
      inline SpecInfos& setRuleConfigs(const vector<SpecInfos::RuleConfigs> & ruleConfigs) { DARABONBA_PTR_SET_VALUE(ruleConfigs_, ruleConfigs) };
      inline SpecInfos& setRuleConfigs(vector<SpecInfos::RuleConfigs> && ruleConfigs) { DARABONBA_PTR_SET_RVALUE(ruleConfigs_, ruleConfigs) };


    protected:
      // The code of the security rule.
      shared_ptr<string> ruleCode_ {};
      // The configurations of the security rule.
      shared_ptr<vector<SpecInfos::RuleConfigs>> ruleConfigs_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->specInfos_ == nullptr && this->version_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDcdnSecSpecInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // specInfos Field Functions 
    bool hasSpecInfos() const { return this->specInfos_ != nullptr;};
    void deleteSpecInfos() { this->specInfos_ = nullptr;};
    inline const vector<DescribeDcdnSecSpecInfoResponseBody::SpecInfos> & getSpecInfos() const { DARABONBA_PTR_GET_CONST(specInfos_, vector<DescribeDcdnSecSpecInfoResponseBody::SpecInfos>) };
    inline vector<DescribeDcdnSecSpecInfoResponseBody::SpecInfos> getSpecInfos() { DARABONBA_PTR_GET(specInfos_, vector<DescribeDcdnSecSpecInfoResponseBody::SpecInfos>) };
    inline DescribeDcdnSecSpecInfoResponseBody& setSpecInfos(const vector<DescribeDcdnSecSpecInfoResponseBody::SpecInfos> & specInfos) { DARABONBA_PTR_SET_VALUE(specInfos_, specInfos) };
    inline DescribeDcdnSecSpecInfoResponseBody& setSpecInfos(vector<DescribeDcdnSecSpecInfoResponseBody::SpecInfos> && specInfos) { DARABONBA_PTR_SET_RVALUE(specInfos_, specInfos) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline DescribeDcdnSecSpecInfoResponseBody& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The code and configurations of the security rules.
    shared_ptr<vector<DescribeDcdnSecSpecInfoResponseBody::SpecInfos>> specInfos_ {};
    // The version of secure DCDN.
    shared_ptr<string> version_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
