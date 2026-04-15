// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYPAYORDERTOMSENCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYPAYORDERTOMSENCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class QueryPayOrderToMsenceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryPayOrderToMsenceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MpaasUserGamecenterPaymentQuerystatusResponse, mpaasUserGamecenterPaymentQuerystatusResponse_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_TO_JSON(ResultMsg, resultMsg_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryPayOrderToMsenceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MpaasUserGamecenterPaymentQuerystatusResponse, mpaasUserGamecenterPaymentQuerystatusResponse_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_FROM_JSON(ResultMsg, resultMsg_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryPayOrderToMsenceResponseBody() = default ;
    QueryPayOrderToMsenceResponseBody(const QueryPayOrderToMsenceResponseBody &) = default ;
    QueryPayOrderToMsenceResponseBody(QueryPayOrderToMsenceResponseBody &&) = default ;
    QueryPayOrderToMsenceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryPayOrderToMsenceResponseBody() = default ;
    QueryPayOrderToMsenceResponseBody& operator=(const QueryPayOrderToMsenceResponseBody &) = default ;
    QueryPayOrderToMsenceResponseBody& operator=(QueryPayOrderToMsenceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class MpaasUserGamecenterPaymentQuerystatusResponse : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MpaasUserGamecenterPaymentQuerystatusResponse& obj) { 
        DARABONBA_PTR_TO_JSON(OrderStatus, orderStatus_);
      };
      friend void from_json(const Darabonba::Json& j, MpaasUserGamecenterPaymentQuerystatusResponse& obj) { 
        DARABONBA_PTR_FROM_JSON(OrderStatus, orderStatus_);
      };
      MpaasUserGamecenterPaymentQuerystatusResponse() = default ;
      MpaasUserGamecenterPaymentQuerystatusResponse(const MpaasUserGamecenterPaymentQuerystatusResponse &) = default ;
      MpaasUserGamecenterPaymentQuerystatusResponse(MpaasUserGamecenterPaymentQuerystatusResponse &&) = default ;
      MpaasUserGamecenterPaymentQuerystatusResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MpaasUserGamecenterPaymentQuerystatusResponse() = default ;
      MpaasUserGamecenterPaymentQuerystatusResponse& operator=(const MpaasUserGamecenterPaymentQuerystatusResponse &) = default ;
      MpaasUserGamecenterPaymentQuerystatusResponse& operator=(MpaasUserGamecenterPaymentQuerystatusResponse &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->orderStatus_ == nullptr; };
      // orderStatus Field Functions 
      bool hasOrderStatus() const { return this->orderStatus_ != nullptr;};
      void deleteOrderStatus() { this->orderStatus_ = nullptr;};
      inline string getOrderStatus() const { DARABONBA_PTR_GET_DEFAULT(orderStatus_, "") };
      inline MpaasUserGamecenterPaymentQuerystatusResponse& setOrderStatus(string orderStatus) { DARABONBA_PTR_SET_VALUE(orderStatus_, orderStatus) };


    protected:
      shared_ptr<string> orderStatus_ {};
    };

    virtual bool empty() const override { return this->mpaasUserGamecenterPaymentQuerystatusResponse_ == nullptr
        && this->requestId_ == nullptr && this->resultCode_ == nullptr && this->resultMsg_ == nullptr && this->success_ == nullptr; };
    // mpaasUserGamecenterPaymentQuerystatusResponse Field Functions 
    bool hasMpaasUserGamecenterPaymentQuerystatusResponse() const { return this->mpaasUserGamecenterPaymentQuerystatusResponse_ != nullptr;};
    void deleteMpaasUserGamecenterPaymentQuerystatusResponse() { this->mpaasUserGamecenterPaymentQuerystatusResponse_ = nullptr;};
    inline const QueryPayOrderToMsenceResponseBody::MpaasUserGamecenterPaymentQuerystatusResponse & getMpaasUserGamecenterPaymentQuerystatusResponse() const { DARABONBA_PTR_GET_CONST(mpaasUserGamecenterPaymentQuerystatusResponse_, QueryPayOrderToMsenceResponseBody::MpaasUserGamecenterPaymentQuerystatusResponse) };
    inline QueryPayOrderToMsenceResponseBody::MpaasUserGamecenterPaymentQuerystatusResponse getMpaasUserGamecenterPaymentQuerystatusResponse() { DARABONBA_PTR_GET(mpaasUserGamecenterPaymentQuerystatusResponse_, QueryPayOrderToMsenceResponseBody::MpaasUserGamecenterPaymentQuerystatusResponse) };
    inline QueryPayOrderToMsenceResponseBody& setMpaasUserGamecenterPaymentQuerystatusResponse(const QueryPayOrderToMsenceResponseBody::MpaasUserGamecenterPaymentQuerystatusResponse & mpaasUserGamecenterPaymentQuerystatusResponse) { DARABONBA_PTR_SET_VALUE(mpaasUserGamecenterPaymentQuerystatusResponse_, mpaasUserGamecenterPaymentQuerystatusResponse) };
    inline QueryPayOrderToMsenceResponseBody& setMpaasUserGamecenterPaymentQuerystatusResponse(QueryPayOrderToMsenceResponseBody::MpaasUserGamecenterPaymentQuerystatusResponse && mpaasUserGamecenterPaymentQuerystatusResponse) { DARABONBA_PTR_SET_RVALUE(mpaasUserGamecenterPaymentQuerystatusResponse_, mpaasUserGamecenterPaymentQuerystatusResponse) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryPayOrderToMsenceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultCode Field Functions 
    bool hasResultCode() const { return this->resultCode_ != nullptr;};
    void deleteResultCode() { this->resultCode_ = nullptr;};
    inline string getResultCode() const { DARABONBA_PTR_GET_DEFAULT(resultCode_, "") };
    inline QueryPayOrderToMsenceResponseBody& setResultCode(string resultCode) { DARABONBA_PTR_SET_VALUE(resultCode_, resultCode) };


    // resultMsg Field Functions 
    bool hasResultMsg() const { return this->resultMsg_ != nullptr;};
    void deleteResultMsg() { this->resultMsg_ = nullptr;};
    inline string getResultMsg() const { DARABONBA_PTR_GET_DEFAULT(resultMsg_, "") };
    inline QueryPayOrderToMsenceResponseBody& setResultMsg(string resultMsg) { DARABONBA_PTR_SET_VALUE(resultMsg_, resultMsg) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryPayOrderToMsenceResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<QueryPayOrderToMsenceResponseBody::MpaasUserGamecenterPaymentQuerystatusResponse> mpaasUserGamecenterPaymentQuerystatusResponse_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<string> resultCode_ {};
    shared_ptr<string> resultMsg_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
