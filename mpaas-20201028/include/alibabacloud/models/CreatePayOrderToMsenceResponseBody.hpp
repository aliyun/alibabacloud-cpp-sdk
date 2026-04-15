// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPAYORDERTOMSENCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEPAYORDERTOMSENCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class CreatePayOrderToMsenceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePayOrderToMsenceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MpaasOrderCreateResponse, mpaasOrderCreateResponse_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_TO_JSON(ResultMsg, resultMsg_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePayOrderToMsenceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MpaasOrderCreateResponse, mpaasOrderCreateResponse_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_FROM_JSON(ResultMsg, resultMsg_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    CreatePayOrderToMsenceResponseBody() = default ;
    CreatePayOrderToMsenceResponseBody(const CreatePayOrderToMsenceResponseBody &) = default ;
    CreatePayOrderToMsenceResponseBody(CreatePayOrderToMsenceResponseBody &&) = default ;
    CreatePayOrderToMsenceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePayOrderToMsenceResponseBody() = default ;
    CreatePayOrderToMsenceResponseBody& operator=(const CreatePayOrderToMsenceResponseBody &) = default ;
    CreatePayOrderToMsenceResponseBody& operator=(CreatePayOrderToMsenceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class MpaasOrderCreateResponse : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MpaasOrderCreateResponse& obj) { 
        DARABONBA_PTR_TO_JSON(BizOrderId, bizOrderId_);
        DARABONBA_PTR_TO_JSON(Success, success_);
      };
      friend void from_json(const Darabonba::Json& j, MpaasOrderCreateResponse& obj) { 
        DARABONBA_PTR_FROM_JSON(BizOrderId, bizOrderId_);
        DARABONBA_PTR_FROM_JSON(Success, success_);
      };
      MpaasOrderCreateResponse() = default ;
      MpaasOrderCreateResponse(const MpaasOrderCreateResponse &) = default ;
      MpaasOrderCreateResponse(MpaasOrderCreateResponse &&) = default ;
      MpaasOrderCreateResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MpaasOrderCreateResponse() = default ;
      MpaasOrderCreateResponse& operator=(const MpaasOrderCreateResponse &) = default ;
      MpaasOrderCreateResponse& operator=(MpaasOrderCreateResponse &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->bizOrderId_ == nullptr
        && this->success_ == nullptr; };
      // bizOrderId Field Functions 
      bool hasBizOrderId() const { return this->bizOrderId_ != nullptr;};
      void deleteBizOrderId() { this->bizOrderId_ = nullptr;};
      inline string getBizOrderId() const { DARABONBA_PTR_GET_DEFAULT(bizOrderId_, "") };
      inline MpaasOrderCreateResponse& setBizOrderId(string bizOrderId) { DARABONBA_PTR_SET_VALUE(bizOrderId_, bizOrderId) };


      // success Field Functions 
      bool hasSuccess() const { return this->success_ != nullptr;};
      void deleteSuccess() { this->success_ = nullptr;};
      inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
      inline MpaasOrderCreateResponse& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    protected:
      shared_ptr<string> bizOrderId_ {};
      shared_ptr<bool> success_ {};
    };

    virtual bool empty() const override { return this->mpaasOrderCreateResponse_ == nullptr
        && this->requestId_ == nullptr && this->resultCode_ == nullptr && this->resultMsg_ == nullptr && this->success_ == nullptr; };
    // mpaasOrderCreateResponse Field Functions 
    bool hasMpaasOrderCreateResponse() const { return this->mpaasOrderCreateResponse_ != nullptr;};
    void deleteMpaasOrderCreateResponse() { this->mpaasOrderCreateResponse_ = nullptr;};
    inline const CreatePayOrderToMsenceResponseBody::MpaasOrderCreateResponse & getMpaasOrderCreateResponse() const { DARABONBA_PTR_GET_CONST(mpaasOrderCreateResponse_, CreatePayOrderToMsenceResponseBody::MpaasOrderCreateResponse) };
    inline CreatePayOrderToMsenceResponseBody::MpaasOrderCreateResponse getMpaasOrderCreateResponse() { DARABONBA_PTR_GET(mpaasOrderCreateResponse_, CreatePayOrderToMsenceResponseBody::MpaasOrderCreateResponse) };
    inline CreatePayOrderToMsenceResponseBody& setMpaasOrderCreateResponse(const CreatePayOrderToMsenceResponseBody::MpaasOrderCreateResponse & mpaasOrderCreateResponse) { DARABONBA_PTR_SET_VALUE(mpaasOrderCreateResponse_, mpaasOrderCreateResponse) };
    inline CreatePayOrderToMsenceResponseBody& setMpaasOrderCreateResponse(CreatePayOrderToMsenceResponseBody::MpaasOrderCreateResponse && mpaasOrderCreateResponse) { DARABONBA_PTR_SET_RVALUE(mpaasOrderCreateResponse_, mpaasOrderCreateResponse) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreatePayOrderToMsenceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultCode Field Functions 
    bool hasResultCode() const { return this->resultCode_ != nullptr;};
    void deleteResultCode() { this->resultCode_ = nullptr;};
    inline string getResultCode() const { DARABONBA_PTR_GET_DEFAULT(resultCode_, "") };
    inline CreatePayOrderToMsenceResponseBody& setResultCode(string resultCode) { DARABONBA_PTR_SET_VALUE(resultCode_, resultCode) };


    // resultMsg Field Functions 
    bool hasResultMsg() const { return this->resultMsg_ != nullptr;};
    void deleteResultMsg() { this->resultMsg_ = nullptr;};
    inline string getResultMsg() const { DARABONBA_PTR_GET_DEFAULT(resultMsg_, "") };
    inline CreatePayOrderToMsenceResponseBody& setResultMsg(string resultMsg) { DARABONBA_PTR_SET_VALUE(resultMsg_, resultMsg) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline CreatePayOrderToMsenceResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<CreatePayOrderToMsenceResponseBody::MpaasOrderCreateResponse> mpaasOrderCreateResponse_ {};
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
