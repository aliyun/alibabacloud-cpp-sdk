// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COSTCENTERQUERYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_COSTCENTERQUERYRESPONSEBODY_HPP_
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
  class CostCenterQueryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CostCenterQueryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(module, module_);
      DARABONBA_PTR_TO_JSON(more_page, morePage_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(traceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, CostCenterQueryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(module, module_);
      DARABONBA_PTR_FROM_JSON(more_page, morePage_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(traceId, traceId_);
    };
    CostCenterQueryResponseBody() = default ;
    CostCenterQueryResponseBody(const CostCenterQueryResponseBody &) = default ;
    CostCenterQueryResponseBody(CostCenterQueryResponseBody &&) = default ;
    CostCenterQueryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CostCenterQueryResponseBody() = default ;
    CostCenterQueryResponseBody& operator=(const CostCenterQueryResponseBody &) = default ;
    CostCenterQueryResponseBody& operator=(CostCenterQueryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Module : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Module& obj) { 
        DARABONBA_PTR_TO_JSON(alipay_no, alipayNo_);
        DARABONBA_PTR_TO_JSON(corp_id, corpId_);
        DARABONBA_PTR_TO_JSON(disable, disable_);
        DARABONBA_PTR_TO_JSON(entity_d_o_s, entityDOS_);
        DARABONBA_PTR_TO_JSON(id, id_);
        DARABONBA_PTR_TO_JSON(number, number_);
        DARABONBA_PTR_TO_JSON(rule_code, ruleCode_);
        DARABONBA_PTR_TO_JSON(scope, scope_);
        DARABONBA_PTR_TO_JSON(thirdpart_id, thirdpartId_);
        DARABONBA_PTR_TO_JSON(title, title_);
      };
      friend void from_json(const Darabonba::Json& j, Module& obj) { 
        DARABONBA_PTR_FROM_JSON(alipay_no, alipayNo_);
        DARABONBA_PTR_FROM_JSON(corp_id, corpId_);
        DARABONBA_PTR_FROM_JSON(disable, disable_);
        DARABONBA_PTR_FROM_JSON(entity_d_o_s, entityDOS_);
        DARABONBA_PTR_FROM_JSON(id, id_);
        DARABONBA_PTR_FROM_JSON(number, number_);
        DARABONBA_PTR_FROM_JSON(rule_code, ruleCode_);
        DARABONBA_PTR_FROM_JSON(scope, scope_);
        DARABONBA_PTR_FROM_JSON(thirdpart_id, thirdpartId_);
        DARABONBA_PTR_FROM_JSON(title, title_);
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
      class EntityDOS : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const EntityDOS& obj) { 
          DARABONBA_PTR_TO_JSON(corp_id, corpId_);
          DARABONBA_PTR_TO_JSON(entity_id, entityId_);
          DARABONBA_PTR_TO_JSON(entity_type, entityType_);
          DARABONBA_PTR_TO_JSON(name, name_);
          DARABONBA_PTR_TO_JSON(user_num, userNum_);
        };
        friend void from_json(const Darabonba::Json& j, EntityDOS& obj) { 
          DARABONBA_PTR_FROM_JSON(corp_id, corpId_);
          DARABONBA_PTR_FROM_JSON(entity_id, entityId_);
          DARABONBA_PTR_FROM_JSON(entity_type, entityType_);
          DARABONBA_PTR_FROM_JSON(name, name_);
          DARABONBA_PTR_FROM_JSON(user_num, userNum_);
        };
        EntityDOS() = default ;
        EntityDOS(const EntityDOS &) = default ;
        EntityDOS(EntityDOS &&) = default ;
        EntityDOS(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~EntityDOS() = default ;
        EntityDOS& operator=(const EntityDOS &) = default ;
        EntityDOS& operator=(EntityDOS &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->corpId_ == nullptr
        && this->entityId_ == nullptr && this->entityType_ == nullptr && this->name_ == nullptr && this->userNum_ == nullptr; };
        // corpId Field Functions 
        bool hasCorpId() const { return this->corpId_ != nullptr;};
        void deleteCorpId() { this->corpId_ = nullptr;};
        inline string getCorpId() const { DARABONBA_PTR_GET_DEFAULT(corpId_, "") };
        inline EntityDOS& setCorpId(string corpId) { DARABONBA_PTR_SET_VALUE(corpId_, corpId) };


        // entityId Field Functions 
        bool hasEntityId() const { return this->entityId_ != nullptr;};
        void deleteEntityId() { this->entityId_ = nullptr;};
        inline string getEntityId() const { DARABONBA_PTR_GET_DEFAULT(entityId_, "") };
        inline EntityDOS& setEntityId(string entityId) { DARABONBA_PTR_SET_VALUE(entityId_, entityId) };


        // entityType Field Functions 
        bool hasEntityType() const { return this->entityType_ != nullptr;};
        void deleteEntityType() { this->entityType_ = nullptr;};
        inline string getEntityType() const { DARABONBA_PTR_GET_DEFAULT(entityType_, "") };
        inline EntityDOS& setEntityType(string entityType) { DARABONBA_PTR_SET_VALUE(entityType_, entityType) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline EntityDOS& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // userNum Field Functions 
        bool hasUserNum() const { return this->userNum_ != nullptr;};
        void deleteUserNum() { this->userNum_ = nullptr;};
        inline int32_t getUserNum() const { DARABONBA_PTR_GET_DEFAULT(userNum_, 0) };
        inline EntityDOS& setUserNum(int32_t userNum) { DARABONBA_PTR_SET_VALUE(userNum_, userNum) };


      protected:
        shared_ptr<string> corpId_ {};
        shared_ptr<string> entityId_ {};
        shared_ptr<string> entityType_ {};
        shared_ptr<string> name_ {};
        shared_ptr<int32_t> userNum_ {};
      };

      virtual bool empty() const override { return this->alipayNo_ == nullptr
        && this->corpId_ == nullptr && this->disable_ == nullptr && this->entityDOS_ == nullptr && this->id_ == nullptr && this->number_ == nullptr
        && this->ruleCode_ == nullptr && this->scope_ == nullptr && this->thirdpartId_ == nullptr && this->title_ == nullptr; };
      // alipayNo Field Functions 
      bool hasAlipayNo() const { return this->alipayNo_ != nullptr;};
      void deleteAlipayNo() { this->alipayNo_ = nullptr;};
      inline string getAlipayNo() const { DARABONBA_PTR_GET_DEFAULT(alipayNo_, "") };
      inline Module& setAlipayNo(string alipayNo) { DARABONBA_PTR_SET_VALUE(alipayNo_, alipayNo) };


      // corpId Field Functions 
      bool hasCorpId() const { return this->corpId_ != nullptr;};
      void deleteCorpId() { this->corpId_ = nullptr;};
      inline string getCorpId() const { DARABONBA_PTR_GET_DEFAULT(corpId_, "") };
      inline Module& setCorpId(string corpId) { DARABONBA_PTR_SET_VALUE(corpId_, corpId) };


      // disable Field Functions 
      bool hasDisable() const { return this->disable_ != nullptr;};
      void deleteDisable() { this->disable_ = nullptr;};
      inline int64_t getDisable() const { DARABONBA_PTR_GET_DEFAULT(disable_, 0L) };
      inline Module& setDisable(int64_t disable) { DARABONBA_PTR_SET_VALUE(disable_, disable) };


      // entityDOS Field Functions 
      bool hasEntityDOS() const { return this->entityDOS_ != nullptr;};
      void deleteEntityDOS() { this->entityDOS_ = nullptr;};
      inline const vector<Module::EntityDOS> & getEntityDOS() const { DARABONBA_PTR_GET_CONST(entityDOS_, vector<Module::EntityDOS>) };
      inline vector<Module::EntityDOS> getEntityDOS() { DARABONBA_PTR_GET(entityDOS_, vector<Module::EntityDOS>) };
      inline Module& setEntityDOS(const vector<Module::EntityDOS> & entityDOS) { DARABONBA_PTR_SET_VALUE(entityDOS_, entityDOS) };
      inline Module& setEntityDOS(vector<Module::EntityDOS> && entityDOS) { DARABONBA_PTR_SET_RVALUE(entityDOS_, entityDOS) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline Module& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // number Field Functions 
      bool hasNumber() const { return this->number_ != nullptr;};
      void deleteNumber() { this->number_ = nullptr;};
      inline string getNumber() const { DARABONBA_PTR_GET_DEFAULT(number_, "") };
      inline Module& setNumber(string number) { DARABONBA_PTR_SET_VALUE(number_, number) };


      // ruleCode Field Functions 
      bool hasRuleCode() const { return this->ruleCode_ != nullptr;};
      void deleteRuleCode() { this->ruleCode_ = nullptr;};
      inline int64_t getRuleCode() const { DARABONBA_PTR_GET_DEFAULT(ruleCode_, 0L) };
      inline Module& setRuleCode(int64_t ruleCode) { DARABONBA_PTR_SET_VALUE(ruleCode_, ruleCode) };


      // scope Field Functions 
      bool hasScope() const { return this->scope_ != nullptr;};
      void deleteScope() { this->scope_ = nullptr;};
      inline int64_t getScope() const { DARABONBA_PTR_GET_DEFAULT(scope_, 0L) };
      inline Module& setScope(int64_t scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };


      // thirdpartId Field Functions 
      bool hasThirdpartId() const { return this->thirdpartId_ != nullptr;};
      void deleteThirdpartId() { this->thirdpartId_ = nullptr;};
      inline string getThirdpartId() const { DARABONBA_PTR_GET_DEFAULT(thirdpartId_, "") };
      inline Module& setThirdpartId(string thirdpartId) { DARABONBA_PTR_SET_VALUE(thirdpartId_, thirdpartId) };


      // title Field Functions 
      bool hasTitle() const { return this->title_ != nullptr;};
      void deleteTitle() { this->title_ = nullptr;};
      inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
      inline Module& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    protected:
      shared_ptr<string> alipayNo_ {};
      shared_ptr<string> corpId_ {};
      shared_ptr<int64_t> disable_ {};
      shared_ptr<vector<Module::EntityDOS>> entityDOS_ {};
      shared_ptr<int64_t> id_ {};
      shared_ptr<string> number_ {};
      // rule code
      shared_ptr<int64_t> ruleCode_ {};
      shared_ptr<int64_t> scope_ {};
      shared_ptr<string> thirdpartId_ {};
      shared_ptr<string> title_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->module_ == nullptr && this->morePage_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr
        && this->traceId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CostCenterQueryResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CostCenterQueryResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const vector<CostCenterQueryResponseBody::Module> & getModule() const { DARABONBA_PTR_GET_CONST(module_, vector<CostCenterQueryResponseBody::Module>) };
    inline vector<CostCenterQueryResponseBody::Module> getModule() { DARABONBA_PTR_GET(module_, vector<CostCenterQueryResponseBody::Module>) };
    inline CostCenterQueryResponseBody& setModule(const vector<CostCenterQueryResponseBody::Module> & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline CostCenterQueryResponseBody& setModule(vector<CostCenterQueryResponseBody::Module> && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


    // morePage Field Functions 
    bool hasMorePage() const { return this->morePage_ != nullptr;};
    void deleteMorePage() { this->morePage_ = nullptr;};
    inline bool getMorePage() const { DARABONBA_PTR_GET_DEFAULT(morePage_, false) };
    inline CostCenterQueryResponseBody& setMorePage(bool morePage) { DARABONBA_PTR_SET_VALUE(morePage_, morePage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CostCenterQueryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline CostCenterQueryResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline CostCenterQueryResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<string> message_ {};
    shared_ptr<vector<CostCenterQueryResponseBody::Module>> module_ {};
    shared_ptr<bool> morePage_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    // traceId
    shared_ptr<string> traceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
