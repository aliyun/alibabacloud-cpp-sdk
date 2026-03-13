// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INSUREORDERREFUNDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_INSUREORDERREFUNDRESPONSEBODY_HPP_
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
  class InsureOrderRefundResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InsureOrderRefundResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(module, module_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(traceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, InsureOrderRefundResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(module, module_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(traceId, traceId_);
    };
    InsureOrderRefundResponseBody() = default ;
    InsureOrderRefundResponseBody(const InsureOrderRefundResponseBody &) = default ;
    InsureOrderRefundResponseBody(InsureOrderRefundResponseBody &&) = default ;
    InsureOrderRefundResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InsureOrderRefundResponseBody() = default ;
    InsureOrderRefundResponseBody& operator=(const InsureOrderRefundResponseBody &) = default ;
    InsureOrderRefundResponseBody& operator=(InsureOrderRefundResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Module : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Module& obj) { 
        DARABONBA_PTR_TO_JSON(apply_id, applyId_);
        DARABONBA_PTR_TO_JSON(ins_order_id, insOrderId_);
        DARABONBA_PTR_TO_JSON(ins_refund_list, insRefundList_);
        DARABONBA_PTR_TO_JSON(out_apply_id, outApplyId_);
      };
      friend void from_json(const Darabonba::Json& j, Module& obj) { 
        DARABONBA_PTR_FROM_JSON(apply_id, applyId_);
        DARABONBA_PTR_FROM_JSON(ins_order_id, insOrderId_);
        DARABONBA_PTR_FROM_JSON(ins_refund_list, insRefundList_);
        DARABONBA_PTR_FROM_JSON(out_apply_id, outApplyId_);
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
      class InsRefundList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const InsRefundList& obj) { 
          DARABONBA_PTR_TO_JSON(policy_refund_no, policyRefundNo_);
          DARABONBA_PTR_TO_JSON(refund_status, refundStatus_);
          DARABONBA_PTR_TO_JSON(sub_ins_order_id, subInsOrderId_);
        };
        friend void from_json(const Darabonba::Json& j, InsRefundList& obj) { 
          DARABONBA_PTR_FROM_JSON(policy_refund_no, policyRefundNo_);
          DARABONBA_PTR_FROM_JSON(refund_status, refundStatus_);
          DARABONBA_PTR_FROM_JSON(sub_ins_order_id, subInsOrderId_);
        };
        InsRefundList() = default ;
        InsRefundList(const InsRefundList &) = default ;
        InsRefundList(InsRefundList &&) = default ;
        InsRefundList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~InsRefundList() = default ;
        InsRefundList& operator=(const InsRefundList &) = default ;
        InsRefundList& operator=(InsRefundList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->policyRefundNo_ == nullptr
        && this->refundStatus_ == nullptr && this->subInsOrderId_ == nullptr; };
        // policyRefundNo Field Functions 
        bool hasPolicyRefundNo() const { return this->policyRefundNo_ != nullptr;};
        void deletePolicyRefundNo() { this->policyRefundNo_ = nullptr;};
        inline string getPolicyRefundNo() const { DARABONBA_PTR_GET_DEFAULT(policyRefundNo_, "") };
        inline InsRefundList& setPolicyRefundNo(string policyRefundNo) { DARABONBA_PTR_SET_VALUE(policyRefundNo_, policyRefundNo) };


        // refundStatus Field Functions 
        bool hasRefundStatus() const { return this->refundStatus_ != nullptr;};
        void deleteRefundStatus() { this->refundStatus_ = nullptr;};
        inline string getRefundStatus() const { DARABONBA_PTR_GET_DEFAULT(refundStatus_, "") };
        inline InsRefundList& setRefundStatus(string refundStatus) { DARABONBA_PTR_SET_VALUE(refundStatus_, refundStatus) };


        // subInsOrderId Field Functions 
        bool hasSubInsOrderId() const { return this->subInsOrderId_ != nullptr;};
        void deleteSubInsOrderId() { this->subInsOrderId_ = nullptr;};
        inline string getSubInsOrderId() const { DARABONBA_PTR_GET_DEFAULT(subInsOrderId_, "") };
        inline InsRefundList& setSubInsOrderId(string subInsOrderId) { DARABONBA_PTR_SET_VALUE(subInsOrderId_, subInsOrderId) };


      protected:
        shared_ptr<string> policyRefundNo_ {};
        shared_ptr<string> refundStatus_ {};
        shared_ptr<string> subInsOrderId_ {};
      };

      virtual bool empty() const override { return this->applyId_ == nullptr
        && this->insOrderId_ == nullptr && this->insRefundList_ == nullptr && this->outApplyId_ == nullptr; };
      // applyId Field Functions 
      bool hasApplyId() const { return this->applyId_ != nullptr;};
      void deleteApplyId() { this->applyId_ = nullptr;};
      inline string getApplyId() const { DARABONBA_PTR_GET_DEFAULT(applyId_, "") };
      inline Module& setApplyId(string applyId) { DARABONBA_PTR_SET_VALUE(applyId_, applyId) };


      // insOrderId Field Functions 
      bool hasInsOrderId() const { return this->insOrderId_ != nullptr;};
      void deleteInsOrderId() { this->insOrderId_ = nullptr;};
      inline string getInsOrderId() const { DARABONBA_PTR_GET_DEFAULT(insOrderId_, "") };
      inline Module& setInsOrderId(string insOrderId) { DARABONBA_PTR_SET_VALUE(insOrderId_, insOrderId) };


      // insRefundList Field Functions 
      bool hasInsRefundList() const { return this->insRefundList_ != nullptr;};
      void deleteInsRefundList() { this->insRefundList_ = nullptr;};
      inline const vector<Module::InsRefundList> & getInsRefundList() const { DARABONBA_PTR_GET_CONST(insRefundList_, vector<Module::InsRefundList>) };
      inline vector<Module::InsRefundList> getInsRefundList() { DARABONBA_PTR_GET(insRefundList_, vector<Module::InsRefundList>) };
      inline Module& setInsRefundList(const vector<Module::InsRefundList> & insRefundList) { DARABONBA_PTR_SET_VALUE(insRefundList_, insRefundList) };
      inline Module& setInsRefundList(vector<Module::InsRefundList> && insRefundList) { DARABONBA_PTR_SET_RVALUE(insRefundList_, insRefundList) };


      // outApplyId Field Functions 
      bool hasOutApplyId() const { return this->outApplyId_ != nullptr;};
      void deleteOutApplyId() { this->outApplyId_ = nullptr;};
      inline string getOutApplyId() const { DARABONBA_PTR_GET_DEFAULT(outApplyId_, "") };
      inline Module& setOutApplyId(string outApplyId) { DARABONBA_PTR_SET_VALUE(outApplyId_, outApplyId) };


    protected:
      shared_ptr<string> applyId_ {};
      shared_ptr<string> insOrderId_ {};
      shared_ptr<vector<Module::InsRefundList>> insRefundList_ {};
      shared_ptr<string> outApplyId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->module_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->traceId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline InsureOrderRefundResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline InsureOrderRefundResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const InsureOrderRefundResponseBody::Module & getModule() const { DARABONBA_PTR_GET_CONST(module_, InsureOrderRefundResponseBody::Module) };
    inline InsureOrderRefundResponseBody::Module getModule() { DARABONBA_PTR_GET(module_, InsureOrderRefundResponseBody::Module) };
    inline InsureOrderRefundResponseBody& setModule(const InsureOrderRefundResponseBody::Module & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline InsureOrderRefundResponseBody& setModule(InsureOrderRefundResponseBody::Module && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline InsureOrderRefundResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline InsureOrderRefundResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline InsureOrderRefundResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<string> message_ {};
    shared_ptr<InsureOrderRefundResponseBody::Module> module_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<string> traceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
