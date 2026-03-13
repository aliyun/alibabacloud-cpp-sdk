// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INSUREORDERAPPLYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_INSUREORDERAPPLYRESPONSEBODY_HPP_
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
  class InsureOrderApplyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InsureOrderApplyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(module, module_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(traceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, InsureOrderApplyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(module, module_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(traceId, traceId_);
    };
    InsureOrderApplyResponseBody() = default ;
    InsureOrderApplyResponseBody(const InsureOrderApplyResponseBody &) = default ;
    InsureOrderApplyResponseBody(InsureOrderApplyResponseBody &&) = default ;
    InsureOrderApplyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InsureOrderApplyResponseBody() = default ;
    InsureOrderApplyResponseBody& operator=(const InsureOrderApplyResponseBody &) = default ;
    InsureOrderApplyResponseBody& operator=(InsureOrderApplyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Module : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Module& obj) { 
        DARABONBA_PTR_TO_JSON(ins_order_id, insOrderId_);
        DARABONBA_PTR_TO_JSON(ins_order_policy_list, insOrderPolicyList_);
      };
      friend void from_json(const Darabonba::Json& j, Module& obj) { 
        DARABONBA_PTR_FROM_JSON(ins_order_id, insOrderId_);
        DARABONBA_PTR_FROM_JSON(ins_order_policy_list, insOrderPolicyList_);
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
      class InsOrderPolicyList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const InsOrderPolicyList& obj) { 
          DARABONBA_PTR_TO_JSON(out_sub_ins_order_id, outSubInsOrderId_);
          DARABONBA_PTR_TO_JSON(policy_no, policyNo_);
          DARABONBA_PTR_TO_JSON(status, status_);
          DARABONBA_PTR_TO_JSON(sub_ins_order_id, subInsOrderId_);
        };
        friend void from_json(const Darabonba::Json& j, InsOrderPolicyList& obj) { 
          DARABONBA_PTR_FROM_JSON(out_sub_ins_order_id, outSubInsOrderId_);
          DARABONBA_PTR_FROM_JSON(policy_no, policyNo_);
          DARABONBA_PTR_FROM_JSON(status, status_);
          DARABONBA_PTR_FROM_JSON(sub_ins_order_id, subInsOrderId_);
        };
        InsOrderPolicyList() = default ;
        InsOrderPolicyList(const InsOrderPolicyList &) = default ;
        InsOrderPolicyList(InsOrderPolicyList &&) = default ;
        InsOrderPolicyList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~InsOrderPolicyList() = default ;
        InsOrderPolicyList& operator=(const InsOrderPolicyList &) = default ;
        InsOrderPolicyList& operator=(InsOrderPolicyList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->outSubInsOrderId_ == nullptr
        && this->policyNo_ == nullptr && this->status_ == nullptr && this->subInsOrderId_ == nullptr; };
        // outSubInsOrderId Field Functions 
        bool hasOutSubInsOrderId() const { return this->outSubInsOrderId_ != nullptr;};
        void deleteOutSubInsOrderId() { this->outSubInsOrderId_ = nullptr;};
        inline string getOutSubInsOrderId() const { DARABONBA_PTR_GET_DEFAULT(outSubInsOrderId_, "") };
        inline InsOrderPolicyList& setOutSubInsOrderId(string outSubInsOrderId) { DARABONBA_PTR_SET_VALUE(outSubInsOrderId_, outSubInsOrderId) };


        // policyNo Field Functions 
        bool hasPolicyNo() const { return this->policyNo_ != nullptr;};
        void deletePolicyNo() { this->policyNo_ = nullptr;};
        inline string getPolicyNo() const { DARABONBA_PTR_GET_DEFAULT(policyNo_, "") };
        inline InsOrderPolicyList& setPolicyNo(string policyNo) { DARABONBA_PTR_SET_VALUE(policyNo_, policyNo) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline InsOrderPolicyList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // subInsOrderId Field Functions 
        bool hasSubInsOrderId() const { return this->subInsOrderId_ != nullptr;};
        void deleteSubInsOrderId() { this->subInsOrderId_ = nullptr;};
        inline string getSubInsOrderId() const { DARABONBA_PTR_GET_DEFAULT(subInsOrderId_, "") };
        inline InsOrderPolicyList& setSubInsOrderId(string subInsOrderId) { DARABONBA_PTR_SET_VALUE(subInsOrderId_, subInsOrderId) };


      protected:
        shared_ptr<string> outSubInsOrderId_ {};
        shared_ptr<string> policyNo_ {};
        shared_ptr<string> status_ {};
        shared_ptr<string> subInsOrderId_ {};
      };

      virtual bool empty() const override { return this->insOrderId_ == nullptr
        && this->insOrderPolicyList_ == nullptr; };
      // insOrderId Field Functions 
      bool hasInsOrderId() const { return this->insOrderId_ != nullptr;};
      void deleteInsOrderId() { this->insOrderId_ = nullptr;};
      inline string getInsOrderId() const { DARABONBA_PTR_GET_DEFAULT(insOrderId_, "") };
      inline Module& setInsOrderId(string insOrderId) { DARABONBA_PTR_SET_VALUE(insOrderId_, insOrderId) };


      // insOrderPolicyList Field Functions 
      bool hasInsOrderPolicyList() const { return this->insOrderPolicyList_ != nullptr;};
      void deleteInsOrderPolicyList() { this->insOrderPolicyList_ = nullptr;};
      inline const vector<Module::InsOrderPolicyList> & getInsOrderPolicyList() const { DARABONBA_PTR_GET_CONST(insOrderPolicyList_, vector<Module::InsOrderPolicyList>) };
      inline vector<Module::InsOrderPolicyList> getInsOrderPolicyList() { DARABONBA_PTR_GET(insOrderPolicyList_, vector<Module::InsOrderPolicyList>) };
      inline Module& setInsOrderPolicyList(const vector<Module::InsOrderPolicyList> & insOrderPolicyList) { DARABONBA_PTR_SET_VALUE(insOrderPolicyList_, insOrderPolicyList) };
      inline Module& setInsOrderPolicyList(vector<Module::InsOrderPolicyList> && insOrderPolicyList) { DARABONBA_PTR_SET_RVALUE(insOrderPolicyList_, insOrderPolicyList) };


    protected:
      shared_ptr<string> insOrderId_ {};
      shared_ptr<vector<Module::InsOrderPolicyList>> insOrderPolicyList_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->module_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->traceId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline InsureOrderApplyResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline InsureOrderApplyResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const InsureOrderApplyResponseBody::Module & getModule() const { DARABONBA_PTR_GET_CONST(module_, InsureOrderApplyResponseBody::Module) };
    inline InsureOrderApplyResponseBody::Module getModule() { DARABONBA_PTR_GET(module_, InsureOrderApplyResponseBody::Module) };
    inline InsureOrderApplyResponseBody& setModule(const InsureOrderApplyResponseBody::Module & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline InsureOrderApplyResponseBody& setModule(InsureOrderApplyResponseBody::Module && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline InsureOrderApplyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline InsureOrderApplyResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline InsureOrderApplyResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<string> message_ {};
    shared_ptr<InsureOrderApplyResponseBody::Module> module_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<string> traceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
