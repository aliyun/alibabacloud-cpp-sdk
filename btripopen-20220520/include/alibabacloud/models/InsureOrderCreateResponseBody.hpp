// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INSUREORDERCREATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_INSUREORDERCREATERESPONSEBODY_HPP_
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
  class InsureOrderCreateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InsureOrderCreateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(module, module_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(traceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, InsureOrderCreateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(module, module_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(traceId, traceId_);
    };
    InsureOrderCreateResponseBody() = default ;
    InsureOrderCreateResponseBody(const InsureOrderCreateResponseBody &) = default ;
    InsureOrderCreateResponseBody(InsureOrderCreateResponseBody &&) = default ;
    InsureOrderCreateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InsureOrderCreateResponseBody() = default ;
    InsureOrderCreateResponseBody& operator=(const InsureOrderCreateResponseBody &) = default ;
    InsureOrderCreateResponseBody& operator=(InsureOrderCreateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Module : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Module& obj) { 
        DARABONBA_PTR_TO_JSON(copies, copies_);
        DARABONBA_PTR_TO_JSON(insure_order_detail_list, insureOrderDetailList_);
        DARABONBA_PTR_TO_JSON(insure_order_id, insureOrderId_);
        DARABONBA_PTR_TO_JSON(premium, premium_);
      };
      friend void from_json(const Darabonba::Json& j, Module& obj) { 
        DARABONBA_PTR_FROM_JSON(copies, copies_);
        DARABONBA_PTR_FROM_JSON(insure_order_detail_list, insureOrderDetailList_);
        DARABONBA_PTR_FROM_JSON(insure_order_id, insureOrderId_);
        DARABONBA_PTR_FROM_JSON(premium, premium_);
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
      class InsureOrderDetailList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const InsureOrderDetailList& obj) { 
          DARABONBA_PTR_TO_JSON(out_sub_ins_order_id, outSubInsOrderId_);
          DARABONBA_PTR_TO_JSON(policy_no, policyNo_);
          DARABONBA_PTR_TO_JSON(status, status_);
          DARABONBA_PTR_TO_JSON(sub_ins_order_id, subInsOrderId_);
        };
        friend void from_json(const Darabonba::Json& j, InsureOrderDetailList& obj) { 
          DARABONBA_PTR_FROM_JSON(out_sub_ins_order_id, outSubInsOrderId_);
          DARABONBA_PTR_FROM_JSON(policy_no, policyNo_);
          DARABONBA_PTR_FROM_JSON(status, status_);
          DARABONBA_PTR_FROM_JSON(sub_ins_order_id, subInsOrderId_);
        };
        InsureOrderDetailList() = default ;
        InsureOrderDetailList(const InsureOrderDetailList &) = default ;
        InsureOrderDetailList(InsureOrderDetailList &&) = default ;
        InsureOrderDetailList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~InsureOrderDetailList() = default ;
        InsureOrderDetailList& operator=(const InsureOrderDetailList &) = default ;
        InsureOrderDetailList& operator=(InsureOrderDetailList &&) = default ;
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
        inline InsureOrderDetailList& setOutSubInsOrderId(string outSubInsOrderId) { DARABONBA_PTR_SET_VALUE(outSubInsOrderId_, outSubInsOrderId) };


        // policyNo Field Functions 
        bool hasPolicyNo() const { return this->policyNo_ != nullptr;};
        void deletePolicyNo() { this->policyNo_ = nullptr;};
        inline string getPolicyNo() const { DARABONBA_PTR_GET_DEFAULT(policyNo_, "") };
        inline InsureOrderDetailList& setPolicyNo(string policyNo) { DARABONBA_PTR_SET_VALUE(policyNo_, policyNo) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline InsureOrderDetailList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // subInsOrderId Field Functions 
        bool hasSubInsOrderId() const { return this->subInsOrderId_ != nullptr;};
        void deleteSubInsOrderId() { this->subInsOrderId_ = nullptr;};
        inline string getSubInsOrderId() const { DARABONBA_PTR_GET_DEFAULT(subInsOrderId_, "") };
        inline InsureOrderDetailList& setSubInsOrderId(string subInsOrderId) { DARABONBA_PTR_SET_VALUE(subInsOrderId_, subInsOrderId) };


      protected:
        shared_ptr<string> outSubInsOrderId_ {};
        shared_ptr<string> policyNo_ {};
        shared_ptr<string> status_ {};
        shared_ptr<string> subInsOrderId_ {};
      };

      virtual bool empty() const override { return this->copies_ == nullptr
        && this->insureOrderDetailList_ == nullptr && this->insureOrderId_ == nullptr && this->premium_ == nullptr; };
      // copies Field Functions 
      bool hasCopies() const { return this->copies_ != nullptr;};
      void deleteCopies() { this->copies_ = nullptr;};
      inline int32_t getCopies() const { DARABONBA_PTR_GET_DEFAULT(copies_, 0) };
      inline Module& setCopies(int32_t copies) { DARABONBA_PTR_SET_VALUE(copies_, copies) };


      // insureOrderDetailList Field Functions 
      bool hasInsureOrderDetailList() const { return this->insureOrderDetailList_ != nullptr;};
      void deleteInsureOrderDetailList() { this->insureOrderDetailList_ = nullptr;};
      inline const vector<Module::InsureOrderDetailList> & getInsureOrderDetailList() const { DARABONBA_PTR_GET_CONST(insureOrderDetailList_, vector<Module::InsureOrderDetailList>) };
      inline vector<Module::InsureOrderDetailList> getInsureOrderDetailList() { DARABONBA_PTR_GET(insureOrderDetailList_, vector<Module::InsureOrderDetailList>) };
      inline Module& setInsureOrderDetailList(const vector<Module::InsureOrderDetailList> & insureOrderDetailList) { DARABONBA_PTR_SET_VALUE(insureOrderDetailList_, insureOrderDetailList) };
      inline Module& setInsureOrderDetailList(vector<Module::InsureOrderDetailList> && insureOrderDetailList) { DARABONBA_PTR_SET_RVALUE(insureOrderDetailList_, insureOrderDetailList) };


      // insureOrderId Field Functions 
      bool hasInsureOrderId() const { return this->insureOrderId_ != nullptr;};
      void deleteInsureOrderId() { this->insureOrderId_ = nullptr;};
      inline string getInsureOrderId() const { DARABONBA_PTR_GET_DEFAULT(insureOrderId_, "") };
      inline Module& setInsureOrderId(string insureOrderId) { DARABONBA_PTR_SET_VALUE(insureOrderId_, insureOrderId) };


      // premium Field Functions 
      bool hasPremium() const { return this->premium_ != nullptr;};
      void deletePremium() { this->premium_ = nullptr;};
      inline int64_t getPremium() const { DARABONBA_PTR_GET_DEFAULT(premium_, 0L) };
      inline Module& setPremium(int64_t premium) { DARABONBA_PTR_SET_VALUE(premium_, premium) };


    protected:
      shared_ptr<int32_t> copies_ {};
      shared_ptr<vector<Module::InsureOrderDetailList>> insureOrderDetailList_ {};
      shared_ptr<string> insureOrderId_ {};
      shared_ptr<int64_t> premium_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->module_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->traceId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline InsureOrderCreateResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline InsureOrderCreateResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const InsureOrderCreateResponseBody::Module & getModule() const { DARABONBA_PTR_GET_CONST(module_, InsureOrderCreateResponseBody::Module) };
    inline InsureOrderCreateResponseBody::Module getModule() { DARABONBA_PTR_GET(module_, InsureOrderCreateResponseBody::Module) };
    inline InsureOrderCreateResponseBody& setModule(const InsureOrderCreateResponseBody::Module & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline InsureOrderCreateResponseBody& setModule(InsureOrderCreateResponseBody::Module && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline InsureOrderCreateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline InsureOrderCreateResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline InsureOrderCreateResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<string> message_ {};
    shared_ptr<InsureOrderCreateResponseBody::Module> module_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<string> traceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
