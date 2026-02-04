// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNDDOSSPECINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNDDOSSPECINFORESPONSEBODY_HPP_
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
  class DescribeDcdnDdosSpecInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnDdosSpecInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BandwidthLimit, bandwidthLimit_);
      DARABONBA_PTR_TO_JSON(Edition, edition_);
      DARABONBA_PTR_TO_JSON(Enable, enable_);
      DARABONBA_PTR_TO_JSON(IsSpecialPort, isSpecialPort_);
      DARABONBA_PTR_TO_JSON(ProtectedArea, protectedArea_);
      DARABONBA_PTR_TO_JSON(QpsLimit, qpsLimit_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SpecInfos, specInfos_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnDdosSpecInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BandwidthLimit, bandwidthLimit_);
      DARABONBA_PTR_FROM_JSON(Edition, edition_);
      DARABONBA_PTR_FROM_JSON(Enable, enable_);
      DARABONBA_PTR_FROM_JSON(IsSpecialPort, isSpecialPort_);
      DARABONBA_PTR_FROM_JSON(ProtectedArea, protectedArea_);
      DARABONBA_PTR_FROM_JSON(QpsLimit, qpsLimit_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SpecInfos, specInfos_);
    };
    DescribeDcdnDdosSpecInfoResponseBody() = default ;
    DescribeDcdnDdosSpecInfoResponseBody(const DescribeDcdnDdosSpecInfoResponseBody &) = default ;
    DescribeDcdnDdosSpecInfoResponseBody(DescribeDcdnDdosSpecInfoResponseBody &&) = default ;
    DescribeDcdnDdosSpecInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnDdosSpecInfoResponseBody() = default ;
    DescribeDcdnDdosSpecInfoResponseBody& operator=(const DescribeDcdnDdosSpecInfoResponseBody &) = default ;
    DescribeDcdnDdosSpecInfoResponseBody& operator=(DescribeDcdnDdosSpecInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SpecInfos : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SpecInfos& obj) { 
        DARABONBA_PTR_TO_JSON(Configs, configs_);
        DARABONBA_PTR_TO_JSON(Rule, rule_);
      };
      friend void from_json(const Darabonba::Json& j, SpecInfos& obj) { 
        DARABONBA_PTR_FROM_JSON(Configs, configs_);
        DARABONBA_PTR_FROM_JSON(Rule, rule_);
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
      class Configs : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Configs& obj) { 
          DARABONBA_PTR_TO_JSON(Config, config_);
          DARABONBA_PTR_TO_JSON(Expr, expr_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, Configs& obj) { 
          DARABONBA_PTR_FROM_JSON(Config, config_);
          DARABONBA_PTR_FROM_JSON(Expr, expr_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        Configs() = default ;
        Configs(const Configs &) = default ;
        Configs(Configs &&) = default ;
        Configs(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Configs() = default ;
        Configs& operator=(const Configs &) = default ;
        Configs& operator=(Configs &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->config_ == nullptr
        && this->expr_ == nullptr && this->value_ == nullptr; };
        // config Field Functions 
        bool hasConfig() const { return this->config_ != nullptr;};
        void deleteConfig() { this->config_ = nullptr;};
        inline string getConfig() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
        inline Configs& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


        // expr Field Functions 
        bool hasExpr() const { return this->expr_ != nullptr;};
        void deleteExpr() { this->expr_ = nullptr;};
        inline string getExpr() const { DARABONBA_PTR_GET_DEFAULT(expr_, "") };
        inline Configs& setExpr(string expr) { DARABONBA_PTR_SET_VALUE(expr_, expr) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline Configs& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // The configuration code of the version rule. Valid values:
        // 
        // *   **total_defense_num**: the total number of mitigation sessions of the version.
        // *   **consume_defense_num**: the number of used mitigation sessions of the version.
        // *   **max_domain_num**: the limit on the number of added domain names.
        // *   **emain_domain_num**: the number of added domain names.
        // *   **defence_package_num**: the total number of purchased additional mitigation sessions.
        // *   **consume_defence_package_num**: the number of used additional mitigation sessions.
        shared_ptr<string> config_ {};
        // The configuration expression of the version rule.
        shared_ptr<string> expr_ {};
        // The value of the configuration expression of the version rule.
        shared_ptr<string> value_ {};
      };

      virtual bool empty() const override { return this->configs_ == nullptr
        && this->rule_ == nullptr; };
      // configs Field Functions 
      bool hasConfigs() const { return this->configs_ != nullptr;};
      void deleteConfigs() { this->configs_ = nullptr;};
      inline const vector<SpecInfos::Configs> & getConfigs() const { DARABONBA_PTR_GET_CONST(configs_, vector<SpecInfos::Configs>) };
      inline vector<SpecInfos::Configs> getConfigs() { DARABONBA_PTR_GET(configs_, vector<SpecInfos::Configs>) };
      inline SpecInfos& setConfigs(const vector<SpecInfos::Configs> & configs) { DARABONBA_PTR_SET_VALUE(configs_, configs) };
      inline SpecInfos& setConfigs(vector<SpecInfos::Configs> && configs) { DARABONBA_PTR_SET_RVALUE(configs_, configs) };


      // rule Field Functions 
      bool hasRule() const { return this->rule_ != nullptr;};
      void deleteRule() { this->rule_ = nullptr;};
      inline string getRule() const { DARABONBA_PTR_GET_DEFAULT(rule_, "") };
      inline SpecInfos& setRule(string rule) { DARABONBA_PTR_SET_VALUE(rule_, rule) };


    protected:
      // The configurations of the version rule.
      shared_ptr<vector<SpecInfos::Configs>> configs_ {};
      // The version rule. Valid values:
      // 
      // *   **version_defense_num**: the rule for the number of version mitigation sessions
      // *   **domain_num**: the rule for the limit on the number of domain names
      // *   **defence_package_num**: the rule for extra mitigation session plans
      shared_ptr<string> rule_ {};
    };

    virtual bool empty() const override { return this->bandwidthLimit_ == nullptr
        && this->edition_ == nullptr && this->enable_ == nullptr && this->isSpecialPort_ == nullptr && this->protectedArea_ == nullptr && this->qpsLimit_ == nullptr
        && this->requestId_ == nullptr && this->specInfos_ == nullptr; };
    // bandwidthLimit Field Functions 
    bool hasBandwidthLimit() const { return this->bandwidthLimit_ != nullptr;};
    void deleteBandwidthLimit() { this->bandwidthLimit_ = nullptr;};
    inline string getBandwidthLimit() const { DARABONBA_PTR_GET_DEFAULT(bandwidthLimit_, "") };
    inline DescribeDcdnDdosSpecInfoResponseBody& setBandwidthLimit(string bandwidthLimit) { DARABONBA_PTR_SET_VALUE(bandwidthLimit_, bandwidthLimit) };


    // edition Field Functions 
    bool hasEdition() const { return this->edition_ != nullptr;};
    void deleteEdition() { this->edition_ = nullptr;};
    inline string getEdition() const { DARABONBA_PTR_GET_DEFAULT(edition_, "") };
    inline DescribeDcdnDdosSpecInfoResponseBody& setEdition(string edition) { DARABONBA_PTR_SET_VALUE(edition_, edition) };


    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline string getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, "") };
    inline DescribeDcdnDdosSpecInfoResponseBody& setEnable(string enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // isSpecialPort Field Functions 
    bool hasIsSpecialPort() const { return this->isSpecialPort_ != nullptr;};
    void deleteIsSpecialPort() { this->isSpecialPort_ = nullptr;};
    inline string getIsSpecialPort() const { DARABONBA_PTR_GET_DEFAULT(isSpecialPort_, "") };
    inline DescribeDcdnDdosSpecInfoResponseBody& setIsSpecialPort(string isSpecialPort) { DARABONBA_PTR_SET_VALUE(isSpecialPort_, isSpecialPort) };


    // protectedArea Field Functions 
    bool hasProtectedArea() const { return this->protectedArea_ != nullptr;};
    void deleteProtectedArea() { this->protectedArea_ = nullptr;};
    inline string getProtectedArea() const { DARABONBA_PTR_GET_DEFAULT(protectedArea_, "") };
    inline DescribeDcdnDdosSpecInfoResponseBody& setProtectedArea(string protectedArea) { DARABONBA_PTR_SET_VALUE(protectedArea_, protectedArea) };


    // qpsLimit Field Functions 
    bool hasQpsLimit() const { return this->qpsLimit_ != nullptr;};
    void deleteQpsLimit() { this->qpsLimit_ = nullptr;};
    inline string getQpsLimit() const { DARABONBA_PTR_GET_DEFAULT(qpsLimit_, "") };
    inline DescribeDcdnDdosSpecInfoResponseBody& setQpsLimit(string qpsLimit) { DARABONBA_PTR_SET_VALUE(qpsLimit_, qpsLimit) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDcdnDdosSpecInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // specInfos Field Functions 
    bool hasSpecInfos() const { return this->specInfos_ != nullptr;};
    void deleteSpecInfos() { this->specInfos_ = nullptr;};
    inline const vector<DescribeDcdnDdosSpecInfoResponseBody::SpecInfos> & getSpecInfos() const { DARABONBA_PTR_GET_CONST(specInfos_, vector<DescribeDcdnDdosSpecInfoResponseBody::SpecInfos>) };
    inline vector<DescribeDcdnDdosSpecInfoResponseBody::SpecInfos> getSpecInfos() { DARABONBA_PTR_GET(specInfos_, vector<DescribeDcdnDdosSpecInfoResponseBody::SpecInfos>) };
    inline DescribeDcdnDdosSpecInfoResponseBody& setSpecInfos(const vector<DescribeDcdnDdosSpecInfoResponseBody::SpecInfos> & specInfos) { DARABONBA_PTR_SET_VALUE(specInfos_, specInfos) };
    inline DescribeDcdnDdosSpecInfoResponseBody& setSpecInfos(vector<DescribeDcdnDdosSpecInfoResponseBody::SpecInfos> && specInfos) { DARABONBA_PTR_SET_RVALUE(specInfos_, specInfos) };


  protected:
    // The bandwidth limit of a single instance.
    shared_ptr<string> bandwidthLimit_ {};
    // The version. Valid values:
    // 
    // * **poc**: POC Edition
    // * **basic**: Basic Edition
    // * **insurance**: Insurance Edition
    // * **unlimited**: Unlimited Edition
    // * **port_enhancement**: Special Port Enhanced Edition
    shared_ptr<string> edition_ {};
    // Specifies whether to enable DDoS mitigation. Valid values:
    // 
    // *   **on:**
    // *   **off**.
    shared_ptr<string> enable_ {};
    // Specifies whether custom ports are supported. Valid values:
    // 
    // *   **yes**
    // *   **no**
    shared_ptr<string> isSpecialPort_ {};
    // Protected region. Valid values:
    // 
    // * **global**: global
    // * **chinese_mainland**: Chinese mainland
    // * **global_excluding_the_chinese_mainland**: outside the Chinese mainland
    shared_ptr<string> protectedArea_ {};
    // The QPS limit.
    shared_ptr<string> qpsLimit_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The code and configurations of the security rules.
    shared_ptr<vector<DescribeDcdnDdosSpecInfoResponseBody::SpecInfos>> specInfos_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
