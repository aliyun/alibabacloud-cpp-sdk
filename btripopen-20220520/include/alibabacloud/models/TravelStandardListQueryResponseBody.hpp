// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRAVELSTANDARDLISTQUERYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_TRAVELSTANDARDLISTQUERYRESPONSEBODY_HPP_
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
  class TravelStandardListQueryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TravelStandardListQueryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(module, module_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(traceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, TravelStandardListQueryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(module, module_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(traceId, traceId_);
    };
    TravelStandardListQueryResponseBody() = default ;
    TravelStandardListQueryResponseBody(const TravelStandardListQueryResponseBody &) = default ;
    TravelStandardListQueryResponseBody(TravelStandardListQueryResponseBody &&) = default ;
    TravelStandardListQueryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TravelStandardListQueryResponseBody() = default ;
    TravelStandardListQueryResponseBody& operator=(const TravelStandardListQueryResponseBody &) = default ;
    TravelStandardListQueryResponseBody& operator=(TravelStandardListQueryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Module : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Module& obj) { 
        DARABONBA_PTR_TO_JSON(items, items_);
        DARABONBA_PTR_TO_JSON(total_size, totalSize_);
      };
      friend void from_json(const Darabonba::Json& j, Module& obj) { 
        DARABONBA_PTR_FROM_JSON(items, items_);
        DARABONBA_PTR_FROM_JSON(total_size, totalSize_);
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
      class Items : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Items& obj) { 
          DARABONBA_PTR_TO_JSON(main_reserve_rule, mainReserveRule_);
          DARABONBA_PTR_TO_JSON(reserve_rule_desc, reserveRuleDesc_);
          DARABONBA_PTR_TO_JSON(scope, scope_);
        };
        friend void from_json(const Darabonba::Json& j, Items& obj) { 
          DARABONBA_PTR_FROM_JSON(main_reserve_rule, mainReserveRule_);
          DARABONBA_PTR_FROM_JSON(reserve_rule_desc, reserveRuleDesc_);
          DARABONBA_PTR_FROM_JSON(scope, scope_);
        };
        Items() = default ;
        Items(const Items &) = default ;
        Items(Items &&) = default ;
        Items(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Items() = default ;
        Items& operator=(const Items &) = default ;
        Items& operator=(Items &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class ReserveRuleDesc : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ReserveRuleDesc& obj) { 
            DARABONBA_PTR_TO_JSON(data_list, dataList_);
            DARABONBA_PTR_TO_JSON(title, title_);
            DARABONBA_PTR_TO_JSON(type, type_);
          };
          friend void from_json(const Darabonba::Json& j, ReserveRuleDesc& obj) { 
            DARABONBA_PTR_FROM_JSON(data_list, dataList_);
            DARABONBA_PTR_FROM_JSON(title, title_);
            DARABONBA_PTR_FROM_JSON(type, type_);
          };
          ReserveRuleDesc() = default ;
          ReserveRuleDesc(const ReserveRuleDesc &) = default ;
          ReserveRuleDesc(ReserveRuleDesc &&) = default ;
          ReserveRuleDesc(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ReserveRuleDesc() = default ;
          ReserveRuleDesc& operator=(const ReserveRuleDesc &) = default ;
          ReserveRuleDesc& operator=(ReserveRuleDesc &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class DataList : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const DataList& obj) { 
              DARABONBA_PTR_TO_JSON(key, key_);
              DARABONBA_PTR_TO_JSON(value, value_);
            };
            friend void from_json(const Darabonba::Json& j, DataList& obj) { 
              DARABONBA_PTR_FROM_JSON(key, key_);
              DARABONBA_PTR_FROM_JSON(value, value_);
            };
            DataList() = default ;
            DataList(const DataList &) = default ;
            DataList(DataList &&) = default ;
            DataList(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~DataList() = default ;
            DataList& operator=(const DataList &) = default ;
            DataList& operator=(DataList &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
            // key Field Functions 
            bool hasKey() const { return this->key_ != nullptr;};
            void deleteKey() { this->key_ = nullptr;};
            inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
            inline DataList& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


            // value Field Functions 
            bool hasValue() const { return this->value_ != nullptr;};
            void deleteValue() { this->value_ = nullptr;};
            inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
            inline DataList& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


          protected:
            shared_ptr<string> key_ {};
            shared_ptr<string> value_ {};
          };

          virtual bool empty() const override { return this->dataList_ == nullptr
        && this->title_ == nullptr && this->type_ == nullptr; };
          // dataList Field Functions 
          bool hasDataList() const { return this->dataList_ != nullptr;};
          void deleteDataList() { this->dataList_ = nullptr;};
          inline const vector<ReserveRuleDesc::DataList> & getDataList() const { DARABONBA_PTR_GET_CONST(dataList_, vector<ReserveRuleDesc::DataList>) };
          inline vector<ReserveRuleDesc::DataList> getDataList() { DARABONBA_PTR_GET(dataList_, vector<ReserveRuleDesc::DataList>) };
          inline ReserveRuleDesc& setDataList(const vector<ReserveRuleDesc::DataList> & dataList) { DARABONBA_PTR_SET_VALUE(dataList_, dataList) };
          inline ReserveRuleDesc& setDataList(vector<ReserveRuleDesc::DataList> && dataList) { DARABONBA_PTR_SET_RVALUE(dataList_, dataList) };


          // title Field Functions 
          bool hasTitle() const { return this->title_ != nullptr;};
          void deleteTitle() { this->title_ = nullptr;};
          inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
          inline ReserveRuleDesc& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline ReserveRuleDesc& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        protected:
          shared_ptr<vector<ReserveRuleDesc::DataList>> dataList_ {};
          shared_ptr<string> title_ {};
          shared_ptr<string> type_ {};
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
        && this->reserveRuleDesc_ == nullptr && this->scope_ == nullptr; };
        // mainReserveRule Field Functions 
        bool hasMainReserveRule() const { return this->mainReserveRule_ != nullptr;};
        void deleteMainReserveRule() { this->mainReserveRule_ = nullptr;};
        inline const Items::MainReserveRule & getMainReserveRule() const { DARABONBA_PTR_GET_CONST(mainReserveRule_, Items::MainReserveRule) };
        inline Items::MainReserveRule getMainReserveRule() { DARABONBA_PTR_GET(mainReserveRule_, Items::MainReserveRule) };
        inline Items& setMainReserveRule(const Items::MainReserveRule & mainReserveRule) { DARABONBA_PTR_SET_VALUE(mainReserveRule_, mainReserveRule) };
        inline Items& setMainReserveRule(Items::MainReserveRule && mainReserveRule) { DARABONBA_PTR_SET_RVALUE(mainReserveRule_, mainReserveRule) };


        // reserveRuleDesc Field Functions 
        bool hasReserveRuleDesc() const { return this->reserveRuleDesc_ != nullptr;};
        void deleteReserveRuleDesc() { this->reserveRuleDesc_ = nullptr;};
        inline const vector<Items::ReserveRuleDesc> & getReserveRuleDesc() const { DARABONBA_PTR_GET_CONST(reserveRuleDesc_, vector<Items::ReserveRuleDesc>) };
        inline vector<Items::ReserveRuleDesc> getReserveRuleDesc() { DARABONBA_PTR_GET(reserveRuleDesc_, vector<Items::ReserveRuleDesc>) };
        inline Items& setReserveRuleDesc(const vector<Items::ReserveRuleDesc> & reserveRuleDesc) { DARABONBA_PTR_SET_VALUE(reserveRuleDesc_, reserveRuleDesc) };
        inline Items& setReserveRuleDesc(vector<Items::ReserveRuleDesc> && reserveRuleDesc) { DARABONBA_PTR_SET_RVALUE(reserveRuleDesc_, reserveRuleDesc) };


        // scope Field Functions 
        bool hasScope() const { return this->scope_ != nullptr;};
        void deleteScope() { this->scope_ = nullptr;};
        inline int32_t getScope() const { DARABONBA_PTR_GET_DEFAULT(scope_, 0) };
        inline Items& setScope(int32_t scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };


      protected:
        shared_ptr<Items::MainReserveRule> mainReserveRule_ {};
        shared_ptr<vector<Items::ReserveRuleDesc>> reserveRuleDesc_ {};
        shared_ptr<int32_t> scope_ {};
      };

      virtual bool empty() const override { return this->items_ == nullptr
        && this->totalSize_ == nullptr; };
      // items Field Functions 
      bool hasItems() const { return this->items_ != nullptr;};
      void deleteItems() { this->items_ = nullptr;};
      inline const vector<Module::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<Module::Items>) };
      inline vector<Module::Items> getItems() { DARABONBA_PTR_GET(items_, vector<Module::Items>) };
      inline Module& setItems(const vector<Module::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
      inline Module& setItems(vector<Module::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


      // totalSize Field Functions 
      bool hasTotalSize() const { return this->totalSize_ != nullptr;};
      void deleteTotalSize() { this->totalSize_ = nullptr;};
      inline int32_t getTotalSize() const { DARABONBA_PTR_GET_DEFAULT(totalSize_, 0) };
      inline Module& setTotalSize(int32_t totalSize) { DARABONBA_PTR_SET_VALUE(totalSize_, totalSize) };


    protected:
      shared_ptr<vector<Module::Items>> items_ {};
      shared_ptr<int32_t> totalSize_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->module_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->traceId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline TravelStandardListQueryResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline TravelStandardListQueryResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const TravelStandardListQueryResponseBody::Module & getModule() const { DARABONBA_PTR_GET_CONST(module_, TravelStandardListQueryResponseBody::Module) };
    inline TravelStandardListQueryResponseBody::Module getModule() { DARABONBA_PTR_GET(module_, TravelStandardListQueryResponseBody::Module) };
    inline TravelStandardListQueryResponseBody& setModule(const TravelStandardListQueryResponseBody::Module & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline TravelStandardListQueryResponseBody& setModule(TravelStandardListQueryResponseBody::Module && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline TravelStandardListQueryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline TravelStandardListQueryResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline TravelStandardListQueryResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    shared_ptr<int32_t> code_ {};
    shared_ptr<string> message_ {};
    shared_ptr<TravelStandardListQueryResponseBody::Module> module_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<string> traceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
