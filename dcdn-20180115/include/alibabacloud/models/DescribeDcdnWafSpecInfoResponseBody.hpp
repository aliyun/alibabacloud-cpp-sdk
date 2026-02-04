// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNWAFSPECINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNWAFSPECINFORESPONSEBODY_HPP_
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
  class DescribeDcdnWafSpecInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnWafSpecInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Edition, edition_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SpecInfos, specInfos_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnWafSpecInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Edition, edition_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SpecInfos, specInfos_);
    };
    DescribeDcdnWafSpecInfoResponseBody() = default ;
    DescribeDcdnWafSpecInfoResponseBody(const DescribeDcdnWafSpecInfoResponseBody &) = default ;
    DescribeDcdnWafSpecInfoResponseBody(DescribeDcdnWafSpecInfoResponseBody &&) = default ;
    DescribeDcdnWafSpecInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnWafSpecInfoResponseBody() = default ;
    DescribeDcdnWafSpecInfoResponseBody& operator=(const DescribeDcdnWafSpecInfoResponseBody &) = default ;
    DescribeDcdnWafSpecInfoResponseBody& operator=(DescribeDcdnWafSpecInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SpecInfos : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SpecInfos& obj) { 
        DARABONBA_PTR_TO_JSON(Configs, configs_);
        DARABONBA_PTR_TO_JSON(DefenseScene, defenseScene_);
      };
      friend void from_json(const Darabonba::Json& j, SpecInfos& obj) { 
        DARABONBA_PTR_FROM_JSON(Configs, configs_);
        DARABONBA_PTR_FROM_JSON(DefenseScene, defenseScene_);
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
        // The configuration code of the protection rule.
        shared_ptr<string> config_ {};
        // The configuration expression of the protection rule.
        shared_ptr<string> expr_ {};
        // The value of the configuration expression of the protection rule.
        shared_ptr<string> value_ {};
      };

      virtual bool empty() const override { return this->configs_ == nullptr
        && this->defenseScene_ == nullptr; };
      // configs Field Functions 
      bool hasConfigs() const { return this->configs_ != nullptr;};
      void deleteConfigs() { this->configs_ = nullptr;};
      inline const vector<SpecInfos::Configs> & getConfigs() const { DARABONBA_PTR_GET_CONST(configs_, vector<SpecInfos::Configs>) };
      inline vector<SpecInfos::Configs> getConfigs() { DARABONBA_PTR_GET(configs_, vector<SpecInfos::Configs>) };
      inline SpecInfos& setConfigs(const vector<SpecInfos::Configs> & configs) { DARABONBA_PTR_SET_VALUE(configs_, configs) };
      inline SpecInfos& setConfigs(vector<SpecInfos::Configs> && configs) { DARABONBA_PTR_SET_RVALUE(configs_, configs) };


      // defenseScene Field Functions 
      bool hasDefenseScene() const { return this->defenseScene_ != nullptr;};
      void deleteDefenseScene() { this->defenseScene_ = nullptr;};
      inline string getDefenseScene() const { DARABONBA_PTR_GET_DEFAULT(defenseScene_, "") };
      inline SpecInfos& setDefenseScene(string defenseScene) { DARABONBA_PTR_SET_VALUE(defenseScene_, defenseScene) };


    protected:
      // The configuration information of the protection rule.
      shared_ptr<vector<SpecInfos::Configs>> configs_ {};
      // The type of the protection policy. Valid values:
      // 
      // *   waf_group: basic web protection
      // *   custom_acl: custom
      // *   whitelist: whitelist
      // *   ip_blacklist: IP address blacklist
      // *   region_block: region blacklist
      // *   bot: bot management
      shared_ptr<string> defenseScene_ {};
    };

    virtual bool empty() const override { return this->edition_ == nullptr
        && this->requestId_ == nullptr && this->specInfos_ == nullptr; };
    // edition Field Functions 
    bool hasEdition() const { return this->edition_ != nullptr;};
    void deleteEdition() { this->edition_ = nullptr;};
    inline string getEdition() const { DARABONBA_PTR_GET_DEFAULT(edition_, "") };
    inline DescribeDcdnWafSpecInfoResponseBody& setEdition(string edition) { DARABONBA_PTR_SET_VALUE(edition_, edition) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDcdnWafSpecInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // specInfos Field Functions 
    bool hasSpecInfos() const { return this->specInfos_ != nullptr;};
    void deleteSpecInfos() { this->specInfos_ = nullptr;};
    inline const vector<DescribeDcdnWafSpecInfoResponseBody::SpecInfos> & getSpecInfos() const { DARABONBA_PTR_GET_CONST(specInfos_, vector<DescribeDcdnWafSpecInfoResponseBody::SpecInfos>) };
    inline vector<DescribeDcdnWafSpecInfoResponseBody::SpecInfos> getSpecInfos() { DARABONBA_PTR_GET(specInfos_, vector<DescribeDcdnWafSpecInfoResponseBody::SpecInfos>) };
    inline DescribeDcdnWafSpecInfoResponseBody& setSpecInfos(const vector<DescribeDcdnWafSpecInfoResponseBody::SpecInfos> & specInfos) { DARABONBA_PTR_SET_VALUE(specInfos_, specInfos) };
    inline DescribeDcdnWafSpecInfoResponseBody& setSpecInfos(vector<DescribeDcdnWafSpecInfoResponseBody::SpecInfos> && specInfos) { DARABONBA_PTR_SET_RVALUE(specInfos_, specInfos) };


  protected:
    // The version of WAF.
    shared_ptr<string> edition_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The supported types of protection policies and the configuration information of protection rules.
    shared_ptr<vector<DescribeDcdnWafSpecInfoResponseBody::SpecInfos>> specInfos_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
