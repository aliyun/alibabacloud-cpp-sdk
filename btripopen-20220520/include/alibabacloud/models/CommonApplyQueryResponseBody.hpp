// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COMMONAPPLYQUERYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_COMMONAPPLYQUERYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class CommonApplyQueryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CommonApplyQueryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(module, module_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(traceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, CommonApplyQueryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(module, module_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(traceId, traceId_);
    };
    CommonApplyQueryResponseBody() = default ;
    CommonApplyQueryResponseBody(const CommonApplyQueryResponseBody &) = default ;
    CommonApplyQueryResponseBody(CommonApplyQueryResponseBody &&) = default ;
    CommonApplyQueryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CommonApplyQueryResponseBody() = default ;
    CommonApplyQueryResponseBody& operator=(const CommonApplyQueryResponseBody &) = default ;
    CommonApplyQueryResponseBody& operator=(CommonApplyQueryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Module : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Module& obj) { 
        DARABONBA_PTR_TO_JSON(apply_id, applyId_);
        DARABONBA_PTR_TO_JSON(biz_category, bizCategory_);
        DARABONBA_PTR_TO_JSON(cause, cause_);
        DARABONBA_PTR_TO_JSON(corp_id, corpId_);
        DARABONBA_PTR_TO_JSON(extend_value, extendValue_);
        DARABONBA_PTR_TO_JSON(gmt_create, gmtCreate_);
        DARABONBA_PTR_TO_JSON(order_id, orderId_);
        DARABONBA_PTR_TO_JSON(status, status_);
        DARABONBA_PTR_TO_JSON(thirdpart_corp_id, thirdpartCorpId_);
        DARABONBA_PTR_TO_JSON(thirdpart_id, thirdpartId_);
        DARABONBA_PTR_TO_JSON(trip_cause, tripCause_);
        DARABONBA_PTR_TO_JSON(user_id, userId_);
        DARABONBA_PTR_TO_JSON(user_name, userName_);
      };
      friend void from_json(const Darabonba::Json& j, Module& obj) { 
        DARABONBA_PTR_FROM_JSON(apply_id, applyId_);
        DARABONBA_PTR_FROM_JSON(biz_category, bizCategory_);
        DARABONBA_PTR_FROM_JSON(cause, cause_);
        DARABONBA_PTR_FROM_JSON(corp_id, corpId_);
        DARABONBA_PTR_FROM_JSON(extend_value, extendValue_);
        DARABONBA_PTR_FROM_JSON(gmt_create, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(order_id, orderId_);
        DARABONBA_PTR_FROM_JSON(status, status_);
        DARABONBA_PTR_FROM_JSON(thirdpart_corp_id, thirdpartCorpId_);
        DARABONBA_PTR_FROM_JSON(thirdpart_id, thirdpartId_);
        DARABONBA_PTR_FROM_JSON(trip_cause, tripCause_);
        DARABONBA_PTR_FROM_JSON(user_id, userId_);
        DARABONBA_PTR_FROM_JSON(user_name, userName_);
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
      virtual bool empty() const override { return this->applyId_ == nullptr
        && this->bizCategory_ == nullptr && this->cause_ == nullptr && this->corpId_ == nullptr && this->extendValue_ == nullptr && this->gmtCreate_ == nullptr
        && this->orderId_ == nullptr && this->status_ == nullptr && this->thirdpartCorpId_ == nullptr && this->thirdpartId_ == nullptr && this->tripCause_ == nullptr
        && this->userId_ == nullptr && this->userName_ == nullptr; };
      // applyId Field Functions 
      bool hasApplyId() const { return this->applyId_ != nullptr;};
      void deleteApplyId() { this->applyId_ = nullptr;};
      inline int64_t getApplyId() const { DARABONBA_PTR_GET_DEFAULT(applyId_, 0L) };
      inline Module& setApplyId(int64_t applyId) { DARABONBA_PTR_SET_VALUE(applyId_, applyId) };


      // bizCategory Field Functions 
      bool hasBizCategory() const { return this->bizCategory_ != nullptr;};
      void deleteBizCategory() { this->bizCategory_ = nullptr;};
      inline int32_t getBizCategory() const { DARABONBA_PTR_GET_DEFAULT(bizCategory_, 0) };
      inline Module& setBizCategory(int32_t bizCategory) { DARABONBA_PTR_SET_VALUE(bizCategory_, bizCategory) };


      // cause Field Functions 
      bool hasCause() const { return this->cause_ != nullptr;};
      void deleteCause() { this->cause_ = nullptr;};
      inline string getCause() const { DARABONBA_PTR_GET_DEFAULT(cause_, "") };
      inline Module& setCause(string cause) { DARABONBA_PTR_SET_VALUE(cause_, cause) };


      // corpId Field Functions 
      bool hasCorpId() const { return this->corpId_ != nullptr;};
      void deleteCorpId() { this->corpId_ = nullptr;};
      inline string getCorpId() const { DARABONBA_PTR_GET_DEFAULT(corpId_, "") };
      inline Module& setCorpId(string corpId) { DARABONBA_PTR_SET_VALUE(corpId_, corpId) };


      // extendValue Field Functions 
      bool hasExtendValue() const { return this->extendValue_ != nullptr;};
      void deleteExtendValue() { this->extendValue_ = nullptr;};
      inline string getExtendValue() const { DARABONBA_PTR_GET_DEFAULT(extendValue_, "") };
      inline Module& setExtendValue(string extendValue) { DARABONBA_PTR_SET_VALUE(extendValue_, extendValue) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
      inline Module& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // orderId Field Functions 
      bool hasOrderId() const { return this->orderId_ != nullptr;};
      void deleteOrderId() { this->orderId_ = nullptr;};
      inline int64_t getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, 0L) };
      inline Module& setOrderId(int64_t orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline Module& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // thirdpartCorpId Field Functions 
      bool hasThirdpartCorpId() const { return this->thirdpartCorpId_ != nullptr;};
      void deleteThirdpartCorpId() { this->thirdpartCorpId_ = nullptr;};
      inline string getThirdpartCorpId() const { DARABONBA_PTR_GET_DEFAULT(thirdpartCorpId_, "") };
      inline Module& setThirdpartCorpId(string thirdpartCorpId) { DARABONBA_PTR_SET_VALUE(thirdpartCorpId_, thirdpartCorpId) };


      // thirdpartId Field Functions 
      bool hasThirdpartId() const { return this->thirdpartId_ != nullptr;};
      void deleteThirdpartId() { this->thirdpartId_ = nullptr;};
      inline string getThirdpartId() const { DARABONBA_PTR_GET_DEFAULT(thirdpartId_, "") };
      inline Module& setThirdpartId(string thirdpartId) { DARABONBA_PTR_SET_VALUE(thirdpartId_, thirdpartId) };


      // tripCause Field Functions 
      bool hasTripCause() const { return this->tripCause_ != nullptr;};
      void deleteTripCause() { this->tripCause_ = nullptr;};
      inline string getTripCause() const { DARABONBA_PTR_GET_DEFAULT(tripCause_, "") };
      inline Module& setTripCause(string tripCause) { DARABONBA_PTR_SET_VALUE(tripCause_, tripCause) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline Module& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      // userName Field Functions 
      bool hasUserName() const { return this->userName_ != nullptr;};
      void deleteUserName() { this->userName_ = nullptr;};
      inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
      inline Module& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


    protected:
      shared_ptr<int64_t> applyId_ {};
      shared_ptr<int32_t> bizCategory_ {};
      shared_ptr<string> cause_ {};
      shared_ptr<string> corpId_ {};
      shared_ptr<string> extendValue_ {};
      shared_ptr<string> gmtCreate_ {};
      shared_ptr<int64_t> orderId_ {};
      shared_ptr<int32_t> status_ {};
      shared_ptr<string> thirdpartCorpId_ {};
      shared_ptr<string> thirdpartId_ {};
      shared_ptr<string> tripCause_ {};
      shared_ptr<string> userId_ {};
      shared_ptr<string> userName_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->module_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->traceId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CommonApplyQueryResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CommonApplyQueryResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const CommonApplyQueryResponseBody::Module & getModule() const { DARABONBA_PTR_GET_CONST(module_, CommonApplyQueryResponseBody::Module) };
    inline CommonApplyQueryResponseBody::Module getModule() { DARABONBA_PTR_GET(module_, CommonApplyQueryResponseBody::Module) };
    inline CommonApplyQueryResponseBody& setModule(const CommonApplyQueryResponseBody::Module & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline CommonApplyQueryResponseBody& setModule(CommonApplyQueryResponseBody::Module && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CommonApplyQueryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline CommonApplyQueryResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline CommonApplyQueryResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<string> message_ {};
    shared_ptr<CommonApplyQueryResponseBody::Module> module_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<string> traceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
