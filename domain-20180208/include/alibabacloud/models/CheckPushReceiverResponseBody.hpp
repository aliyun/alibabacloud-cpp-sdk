// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKPUSHRECEIVERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CHECKPUSHRECEIVERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180208
{
namespace Models
{
  class CheckPushReceiverResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckPushReceiverResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Module, module_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CheckPushReceiverResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Module, module_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CheckPushReceiverResponseBody() = default ;
    CheckPushReceiverResponseBody(const CheckPushReceiverResponseBody &) = default ;
    CheckPushReceiverResponseBody(CheckPushReceiverResponseBody &&) = default ;
    CheckPushReceiverResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckPushReceiverResponseBody() = default ;
    CheckPushReceiverResponseBody& operator=(const CheckPushReceiverResponseBody &) = default ;
    CheckPushReceiverResponseBody& operator=(CheckPushReceiverResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Module : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Module& obj) { 
        DARABONBA_PTR_TO_JSON(CanReceivePush, canReceivePush_);
        DARABONBA_PTR_TO_JSON(MaskedMobile, maskedMobile_);
        DARABONBA_PTR_TO_JSON(ReasonCode, reasonCode_);
      };
      friend void from_json(const Darabonba::Json& j, Module& obj) { 
        DARABONBA_PTR_FROM_JSON(CanReceivePush, canReceivePush_);
        DARABONBA_PTR_FROM_JSON(MaskedMobile, maskedMobile_);
        DARABONBA_PTR_FROM_JSON(ReasonCode, reasonCode_);
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
      virtual bool empty() const override { return this->canReceivePush_ == nullptr
        && this->maskedMobile_ == nullptr && this->reasonCode_ == nullptr; };
      // canReceivePush Field Functions 
      bool hasCanReceivePush() const { return this->canReceivePush_ != nullptr;};
      void deleteCanReceivePush() { this->canReceivePush_ = nullptr;};
      inline bool getCanReceivePush() const { DARABONBA_PTR_GET_DEFAULT(canReceivePush_, false) };
      inline Module& setCanReceivePush(bool canReceivePush) { DARABONBA_PTR_SET_VALUE(canReceivePush_, canReceivePush) };


      // maskedMobile Field Functions 
      bool hasMaskedMobile() const { return this->maskedMobile_ != nullptr;};
      void deleteMaskedMobile() { this->maskedMobile_ = nullptr;};
      inline string getMaskedMobile() const { DARABONBA_PTR_GET_DEFAULT(maskedMobile_, "") };
      inline Module& setMaskedMobile(string maskedMobile) { DARABONBA_PTR_SET_VALUE(maskedMobile_, maskedMobile) };


      // reasonCode Field Functions 
      bool hasReasonCode() const { return this->reasonCode_ != nullptr;};
      void deleteReasonCode() { this->reasonCode_ = nullptr;};
      inline string getReasonCode() const { DARABONBA_PTR_GET_DEFAULT(reasonCode_, "") };
      inline Module& setReasonCode(string reasonCode) { DARABONBA_PTR_SET_VALUE(reasonCode_, reasonCode) };


    protected:
      shared_ptr<bool> canReceivePush_ {};
      shared_ptr<string> maskedMobile_ {};
      shared_ptr<string> reasonCode_ {};
    };

    virtual bool empty() const override { return this->module_ == nullptr
        && this->requestId_ == nullptr; };
    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const CheckPushReceiverResponseBody::Module & getModule() const { DARABONBA_PTR_GET_CONST(module_, CheckPushReceiverResponseBody::Module) };
    inline CheckPushReceiverResponseBody::Module getModule() { DARABONBA_PTR_GET(module_, CheckPushReceiverResponseBody::Module) };
    inline CheckPushReceiverResponseBody& setModule(const CheckPushReceiverResponseBody::Module & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline CheckPushReceiverResponseBody& setModule(CheckPushReceiverResponseBody::Module && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CheckPushReceiverResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<CheckPushReceiverResponseBody::Module> module_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180208
#endif
