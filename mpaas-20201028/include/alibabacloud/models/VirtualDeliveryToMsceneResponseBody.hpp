// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VIRTUALDELIVERYTOMSCENERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_VIRTUALDELIVERYTOMSCENERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class VirtualDeliveryToMsceneResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const VirtualDeliveryToMsceneResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(MpaasUserGamecenterPaymentVirtualdeliveryResponse, mpaasUserGamecenterPaymentVirtualdeliveryResponse_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_TO_JSON(ResultMsg, resultMsg_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, VirtualDeliveryToMsceneResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(MpaasUserGamecenterPaymentVirtualdeliveryResponse, mpaasUserGamecenterPaymentVirtualdeliveryResponse_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_FROM_JSON(ResultMsg, resultMsg_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    VirtualDeliveryToMsceneResponseBody() = default ;
    VirtualDeliveryToMsceneResponseBody(const VirtualDeliveryToMsceneResponseBody &) = default ;
    VirtualDeliveryToMsceneResponseBody(VirtualDeliveryToMsceneResponseBody &&) = default ;
    VirtualDeliveryToMsceneResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~VirtualDeliveryToMsceneResponseBody() = default ;
    VirtualDeliveryToMsceneResponseBody& operator=(const VirtualDeliveryToMsceneResponseBody &) = default ;
    VirtualDeliveryToMsceneResponseBody& operator=(VirtualDeliveryToMsceneResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class MpaasUserGamecenterPaymentVirtualdeliveryResponse : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MpaasUserGamecenterPaymentVirtualdeliveryResponse& obj) { 
        DARABONBA_PTR_TO_JSON(Success, success_);
      };
      friend void from_json(const Darabonba::Json& j, MpaasUserGamecenterPaymentVirtualdeliveryResponse& obj) { 
        DARABONBA_PTR_FROM_JSON(Success, success_);
      };
      MpaasUserGamecenterPaymentVirtualdeliveryResponse() = default ;
      MpaasUserGamecenterPaymentVirtualdeliveryResponse(const MpaasUserGamecenterPaymentVirtualdeliveryResponse &) = default ;
      MpaasUserGamecenterPaymentVirtualdeliveryResponse(MpaasUserGamecenterPaymentVirtualdeliveryResponse &&) = default ;
      MpaasUserGamecenterPaymentVirtualdeliveryResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MpaasUserGamecenterPaymentVirtualdeliveryResponse() = default ;
      MpaasUserGamecenterPaymentVirtualdeliveryResponse& operator=(const MpaasUserGamecenterPaymentVirtualdeliveryResponse &) = default ;
      MpaasUserGamecenterPaymentVirtualdeliveryResponse& operator=(MpaasUserGamecenterPaymentVirtualdeliveryResponse &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->success_ == nullptr; };
      // success Field Functions 
      bool hasSuccess() const { return this->success_ != nullptr;};
      void deleteSuccess() { this->success_ = nullptr;};
      inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
      inline MpaasUserGamecenterPaymentVirtualdeliveryResponse& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    protected:
      shared_ptr<bool> success_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->mpaasUserGamecenterPaymentVirtualdeliveryResponse_ == nullptr && this->requestId_ == nullptr && this->resultCode_ == nullptr && this->resultMsg_ == nullptr && this->success_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline VirtualDeliveryToMsceneResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // mpaasUserGamecenterPaymentVirtualdeliveryResponse Field Functions 
    bool hasMpaasUserGamecenterPaymentVirtualdeliveryResponse() const { return this->mpaasUserGamecenterPaymentVirtualdeliveryResponse_ != nullptr;};
    void deleteMpaasUserGamecenterPaymentVirtualdeliveryResponse() { this->mpaasUserGamecenterPaymentVirtualdeliveryResponse_ = nullptr;};
    inline const VirtualDeliveryToMsceneResponseBody::MpaasUserGamecenterPaymentVirtualdeliveryResponse & getMpaasUserGamecenterPaymentVirtualdeliveryResponse() const { DARABONBA_PTR_GET_CONST(mpaasUserGamecenterPaymentVirtualdeliveryResponse_, VirtualDeliveryToMsceneResponseBody::MpaasUserGamecenterPaymentVirtualdeliveryResponse) };
    inline VirtualDeliveryToMsceneResponseBody::MpaasUserGamecenterPaymentVirtualdeliveryResponse getMpaasUserGamecenterPaymentVirtualdeliveryResponse() { DARABONBA_PTR_GET(mpaasUserGamecenterPaymentVirtualdeliveryResponse_, VirtualDeliveryToMsceneResponseBody::MpaasUserGamecenterPaymentVirtualdeliveryResponse) };
    inline VirtualDeliveryToMsceneResponseBody& setMpaasUserGamecenterPaymentVirtualdeliveryResponse(const VirtualDeliveryToMsceneResponseBody::MpaasUserGamecenterPaymentVirtualdeliveryResponse & mpaasUserGamecenterPaymentVirtualdeliveryResponse) { DARABONBA_PTR_SET_VALUE(mpaasUserGamecenterPaymentVirtualdeliveryResponse_, mpaasUserGamecenterPaymentVirtualdeliveryResponse) };
    inline VirtualDeliveryToMsceneResponseBody& setMpaasUserGamecenterPaymentVirtualdeliveryResponse(VirtualDeliveryToMsceneResponseBody::MpaasUserGamecenterPaymentVirtualdeliveryResponse && mpaasUserGamecenterPaymentVirtualdeliveryResponse) { DARABONBA_PTR_SET_RVALUE(mpaasUserGamecenterPaymentVirtualdeliveryResponse_, mpaasUserGamecenterPaymentVirtualdeliveryResponse) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline VirtualDeliveryToMsceneResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultCode Field Functions 
    bool hasResultCode() const { return this->resultCode_ != nullptr;};
    void deleteResultCode() { this->resultCode_ = nullptr;};
    inline string getResultCode() const { DARABONBA_PTR_GET_DEFAULT(resultCode_, "") };
    inline VirtualDeliveryToMsceneResponseBody& setResultCode(string resultCode) { DARABONBA_PTR_SET_VALUE(resultCode_, resultCode) };


    // resultMsg Field Functions 
    bool hasResultMsg() const { return this->resultMsg_ != nullptr;};
    void deleteResultMsg() { this->resultMsg_ = nullptr;};
    inline string getResultMsg() const { DARABONBA_PTR_GET_DEFAULT(resultMsg_, "") };
    inline VirtualDeliveryToMsceneResponseBody& setResultMsg(string resultMsg) { DARABONBA_PTR_SET_VALUE(resultMsg_, resultMsg) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline VirtualDeliveryToMsceneResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> accessDeniedDetail_ {};
    shared_ptr<VirtualDeliveryToMsceneResponseBody::MpaasUserGamecenterPaymentVirtualdeliveryResponse> mpaasUserGamecenterPaymentVirtualdeliveryResponse_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> resultCode_ {};
    shared_ptr<string> resultMsg_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
