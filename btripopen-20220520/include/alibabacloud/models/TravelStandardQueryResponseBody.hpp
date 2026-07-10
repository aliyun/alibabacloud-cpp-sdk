// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRAVELSTANDARDQUERYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_TRAVELSTANDARDQUERYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class TravelStandardQueryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TravelStandardQueryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(module, module_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(traceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, TravelStandardQueryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(module, module_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(traceId, traceId_);
    };
    TravelStandardQueryResponseBody() = default ;
    TravelStandardQueryResponseBody(const TravelStandardQueryResponseBody &) = default ;
    TravelStandardQueryResponseBody(TravelStandardQueryResponseBody &&) = default ;
    TravelStandardQueryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TravelStandardQueryResponseBody() = default ;
    TravelStandardQueryResponseBody& operator=(const TravelStandardQueryResponseBody &) = default ;
    TravelStandardQueryResponseBody& operator=(TravelStandardQueryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Module : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Module& obj) { 
        DARABONBA_PTR_TO_JSON(activated_service_type_list, activatedServiceTypeList_);
        DARABONBA_PTR_TO_JSON(reserve_rule, reserveRule_);
      };
      friend void from_json(const Darabonba::Json& j, Module& obj) { 
        DARABONBA_PTR_FROM_JSON(activated_service_type_list, activatedServiceTypeList_);
        DARABONBA_PTR_FROM_JSON(reserve_rule, reserveRule_);
      };
      Module() = default ;
      Module(const Module &) = default ;
      Module(Module &&) = default ;
      Module(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Module() = default ;
      Module& operator=(const Module &) = default ;
      Module& operator=(Module &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ReserveRule : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ReserveRule& obj) { 
          DARABONBA_PTR_TO_JSON(main_reserve_rule, mainReserveRule_);
          DARABONBA_PTR_TO_JSON(module_config_list, moduleConfigList_);
        };
        friend void from_json(const Darabonba::Json& j, ReserveRule& obj) { 
          DARABONBA_PTR_FROM_JSON(main_reserve_rule, mainReserveRule_);
          DARABONBA_PTR_FROM_JSON(module_config_list, moduleConfigList_);
        };
        ReserveRule() = default ;
        ReserveRule(const ReserveRule &) = default ;
        ReserveRule(ReserveRule &&) = default ;
        ReserveRule(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ReserveRule() = default ;
        ReserveRule& operator=(const ReserveRule &) = default ;
        ReserveRule& operator=(ReserveRule &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class ModuleConfigList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ModuleConfigList& obj) { 
            DARABONBA_PTR_TO_JSON(code, code_);
            DARABONBA_PTR_TO_JSON(value, value_);
          };
          friend void from_json(const Darabonba::Json& j, ModuleConfigList& obj) { 
            DARABONBA_PTR_FROM_JSON(code, code_);
            DARABONBA_PTR_FROM_JSON(value, value_);
          };
          ModuleConfigList() = default ;
          ModuleConfigList(const ModuleConfigList &) = default ;
          ModuleConfigList(ModuleConfigList &&) = default ;
          ModuleConfigList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ModuleConfigList() = default ;
          ModuleConfigList& operator=(const ModuleConfigList &) = default ;
          ModuleConfigList& operator=(ModuleConfigList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->code_ == nullptr
        && this->value_ == nullptr; };
          // code Field Functions 
          bool hasCode() const { return this->code_ != nullptr;};
          void deleteCode() { this->code_ = nullptr;};
          inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
          inline ModuleConfigList& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline ModuleConfigList& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          shared_ptr<string> code_ {};
          shared_ptr<string> value_ {};
        };

        class MainReserveRule : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const MainReserveRule& obj) { 
            DARABONBA_PTR_TO_JSON(open_service_type_list, openServiceTypeList_);
            DARABONBA_PTR_TO_JSON(rule_code, ruleCode_);
            DARABONBA_PTR_TO_JSON(rule_desc, ruleDesc_);
            DARABONBA_PTR_TO_JSON(rule_id, ruleId_);
            DARABONBA_PTR_TO_JSON(rule_name, ruleName_);
          };
          friend void from_json(const Darabonba::Json& j, MainReserveRule& obj) { 
            DARABONBA_PTR_FROM_JSON(open_service_type_list, openServiceTypeList_);
            DARABONBA_PTR_FROM_JSON(rule_code, ruleCode_);
            DARABONBA_PTR_FROM_JSON(rule_desc, ruleDesc_);
            DARABONBA_PTR_FROM_JSON(rule_id, ruleId_);
            DARABONBA_PTR_FROM_JSON(rule_name, ruleName_);
          };
          MainReserveRule() = default ;
          MainReserveRule(const MainReserveRule &) = default ;
          MainReserveRule(MainReserveRule &&) = default ;
          MainReserveRule(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~MainReserveRule() = default ;
          MainReserveRule& operator=(const MainReserveRule &) = default ;
          MainReserveRule& operator=(MainReserveRule &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->openServiceTypeList_ == nullptr
        && this->ruleCode_ == nullptr && this->ruleDesc_ == nullptr && this->ruleId_ == nullptr && this->ruleName_ == nullptr; };
          // openServiceTypeList Field Functions 
          bool hasOpenServiceTypeList() const { return this->openServiceTypeList_ != nullptr;};
          void deleteOpenServiceTypeList() { this->openServiceTypeList_ = nullptr;};
          inline const vector<string> & getOpenServiceTypeList() const { DARABONBA_PTR_GET_CONST(openServiceTypeList_, vector<string>) };
          inline vector<string> getOpenServiceTypeList() { DARABONBA_PTR_GET(openServiceTypeList_, vector<string>) };
          inline MainReserveRule& setOpenServiceTypeList(const vector<string> & openServiceTypeList) { DARABONBA_PTR_SET_VALUE(openServiceTypeList_, openServiceTypeList) };
          inline MainReserveRule& setOpenServiceTypeList(vector<string> && openServiceTypeList) { DARABONBA_PTR_SET_RVALUE(openServiceTypeList_, openServiceTypeList) };


          // ruleCode Field Functions 
          bool hasRuleCode() const { return this->ruleCode_ != nullptr;};
          void deleteRuleCode() { this->ruleCode_ = nullptr;};
          inline int64_t getRuleCode() const { DARABONBA_PTR_GET_DEFAULT(ruleCode_, 0L) };
          inline MainReserveRule& setRuleCode(int64_t ruleCode) { DARABONBA_PTR_SET_VALUE(ruleCode_, ruleCode) };


          // ruleDesc Field Functions 
          bool hasRuleDesc() const { return this->ruleDesc_ != nullptr;};
          void deleteRuleDesc() { this->ruleDesc_ = nullptr;};
          inline string getRuleDesc() const { DARABONBA_PTR_GET_DEFAULT(ruleDesc_, "") };
          inline MainReserveRule& setRuleDesc(string ruleDesc) { DARABONBA_PTR_SET_VALUE(ruleDesc_, ruleDesc) };


          // ruleId Field Functions 
          bool hasRuleId() const { return this->ruleId_ != nullptr;};
          void deleteRuleId() { this->ruleId_ = nullptr;};
          inline int64_t getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, 0L) };
          inline MainReserveRule& setRuleId(int64_t ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


          // ruleName Field Functions 
          bool hasRuleName() const { return this->ruleName_ != nullptr;};
          void deleteRuleName() { this->ruleName_ = nullptr;};
          inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
          inline MainReserveRule& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


        protected:
          shared_ptr<vector<string>> openServiceTypeList_ {};
          shared_ptr<int64_t> ruleCode_ {};
          shared_ptr<string> ruleDesc_ {};
          shared_ptr<int64_t> ruleId_ {};
          shared_ptr<string> ruleName_ {};
        };

        virtual bool empty() const override { return this->mainReserveRule_ == nullptr
        && this->moduleConfigList_ == nullptr; };
        // mainReserveRule Field Functions 
        bool hasMainReserveRule() const { return this->mainReserveRule_ != nullptr;};
        void deleteMainReserveRule() { this->mainReserveRule_ = nullptr;};
        inline const ReserveRule::MainReserveRule & getMainReserveRule() const { DARABONBA_PTR_GET_CONST(mainReserveRule_, ReserveRule::MainReserveRule) };
        inline ReserveRule::MainReserveRule getMainReserveRule() { DARABONBA_PTR_GET(mainReserveRule_, ReserveRule::MainReserveRule) };
        inline ReserveRule& setMainReserveRule(const ReserveRule::MainReserveRule & mainReserveRule) { DARABONBA_PTR_SET_VALUE(mainReserveRule_, mainReserveRule) };
        inline ReserveRule& setMainReserveRule(ReserveRule::MainReserveRule && mainReserveRule) { DARABONBA_PTR_SET_RVALUE(mainReserveRule_, mainReserveRule) };


        // moduleConfigList Field Functions 
        bool hasModuleConfigList() const { return this->moduleConfigList_ != nullptr;};
        void deleteModuleConfigList() { this->moduleConfigList_ = nullptr;};
        inline const vector<ReserveRule::ModuleConfigList> & getModuleConfigList() const { DARABONBA_PTR_GET_CONST(moduleConfigList_, vector<ReserveRule::ModuleConfigList>) };
        inline vector<ReserveRule::ModuleConfigList> getModuleConfigList() { DARABONBA_PTR_GET(moduleConfigList_, vector<ReserveRule::ModuleConfigList>) };
        inline ReserveRule& setModuleConfigList(const vector<ReserveRule::ModuleConfigList> & moduleConfigList) { DARABONBA_PTR_SET_VALUE(moduleConfigList_, moduleConfigList) };
        inline ReserveRule& setModuleConfigList(vector<ReserveRule::ModuleConfigList> && moduleConfigList) { DARABONBA_PTR_SET_RVALUE(moduleConfigList_, moduleConfigList) };


      protected:
        shared_ptr<ReserveRule::MainReserveRule> mainReserveRule_ {};
        shared_ptr<vector<ReserveRule::ModuleConfigList>> moduleConfigList_ {};
      };

      virtual bool empty() const override { return this->activatedServiceTypeList_ == nullptr
        && this->reserveRule_ == nullptr; };
      // activatedServiceTypeList Field Functions 
      bool hasActivatedServiceTypeList() const { return this->activatedServiceTypeList_ != nullptr;};
      void deleteActivatedServiceTypeList() { this->activatedServiceTypeList_ = nullptr;};
      inline const vector<string> & getActivatedServiceTypeList() const { DARABONBA_PTR_GET_CONST(activatedServiceTypeList_, vector<string>) };
      inline vector<string> getActivatedServiceTypeList() { DARABONBA_PTR_GET(activatedServiceTypeList_, vector<string>) };
      inline Module& setActivatedServiceTypeList(const vector<string> & activatedServiceTypeList) { DARABONBA_PTR_SET_VALUE(activatedServiceTypeList_, activatedServiceTypeList) };
      inline Module& setActivatedServiceTypeList(vector<string> && activatedServiceTypeList) { DARABONBA_PTR_SET_RVALUE(activatedServiceTypeList_, activatedServiceTypeList) };


      // reserveRule Field Functions 
      bool hasReserveRule() const { return this->reserveRule_ != nullptr;};
      void deleteReserveRule() { this->reserveRule_ = nullptr;};
      inline const Module::ReserveRule & getReserveRule() const { DARABONBA_PTR_GET_CONST(reserveRule_, Module::ReserveRule) };
      inline Module::ReserveRule getReserveRule() { DARABONBA_PTR_GET(reserveRule_, Module::ReserveRule) };
      inline Module& setReserveRule(const Module::ReserveRule & reserveRule) { DARABONBA_PTR_SET_VALUE(reserveRule_, reserveRule) };
      inline Module& setReserveRule(Module::ReserveRule && reserveRule) { DARABONBA_PTR_SET_RVALUE(reserveRule_, reserveRule) };


    protected:
      shared_ptr<vector<string>> activatedServiceTypeList_ {};
      shared_ptr<Module::ReserveRule> reserveRule_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->module_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->traceId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline TravelStandardQueryResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline TravelStandardQueryResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const TravelStandardQueryResponseBody::Module & getModule() const { DARABONBA_PTR_GET_CONST(module_, TravelStandardQueryResponseBody::Module) };
    inline TravelStandardQueryResponseBody::Module getModule() { DARABONBA_PTR_GET(module_, TravelStandardQueryResponseBody::Module) };
    inline TravelStandardQueryResponseBody& setModule(const TravelStandardQueryResponseBody::Module & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline TravelStandardQueryResponseBody& setModule(TravelStandardQueryResponseBody::Module && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline TravelStandardQueryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline TravelStandardQueryResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline TravelStandardQueryResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<string> message_ {};
    shared_ptr<TravelStandardQueryResponseBody::Module> module_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<string> traceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
