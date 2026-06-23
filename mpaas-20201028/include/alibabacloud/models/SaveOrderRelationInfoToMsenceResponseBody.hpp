// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SAVEORDERRELATIONINFOTOMSENCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SAVEORDERRELATIONINFOTOMSENCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class SaveOrderRelationInfoToMsenceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SaveOrderRelationInfoToMsenceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MpaasSaveOrderRelationResponse, mpaasSaveOrderRelationResponse_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_TO_JSON(ResultMsg, resultMsg_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, SaveOrderRelationInfoToMsenceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MpaasSaveOrderRelationResponse, mpaasSaveOrderRelationResponse_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_FROM_JSON(ResultMsg, resultMsg_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    SaveOrderRelationInfoToMsenceResponseBody() = default ;
    SaveOrderRelationInfoToMsenceResponseBody(const SaveOrderRelationInfoToMsenceResponseBody &) = default ;
    SaveOrderRelationInfoToMsenceResponseBody(SaveOrderRelationInfoToMsenceResponseBody &&) = default ;
    SaveOrderRelationInfoToMsenceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SaveOrderRelationInfoToMsenceResponseBody() = default ;
    SaveOrderRelationInfoToMsenceResponseBody& operator=(const SaveOrderRelationInfoToMsenceResponseBody &) = default ;
    SaveOrderRelationInfoToMsenceResponseBody& operator=(SaveOrderRelationInfoToMsenceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class MpaasSaveOrderRelationResponse : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MpaasSaveOrderRelationResponse& obj) { 
        DARABONBA_PTR_TO_JSON(Success, success_);
      };
      friend void from_json(const Darabonba::Json& j, MpaasSaveOrderRelationResponse& obj) { 
        DARABONBA_PTR_FROM_JSON(Success, success_);
      };
      MpaasSaveOrderRelationResponse() = default ;
      MpaasSaveOrderRelationResponse(const MpaasSaveOrderRelationResponse &) = default ;
      MpaasSaveOrderRelationResponse(MpaasSaveOrderRelationResponse &&) = default ;
      MpaasSaveOrderRelationResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MpaasSaveOrderRelationResponse() = default ;
      MpaasSaveOrderRelationResponse& operator=(const MpaasSaveOrderRelationResponse &) = default ;
      MpaasSaveOrderRelationResponse& operator=(MpaasSaveOrderRelationResponse &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->success_ == nullptr; };
      // success Field Functions 
      bool hasSuccess() const { return this->success_ != nullptr;};
      void deleteSuccess() { this->success_ = nullptr;};
      inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
      inline MpaasSaveOrderRelationResponse& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    protected:
      shared_ptr<bool> success_ {};
    };

    virtual bool empty() const override { return this->mpaasSaveOrderRelationResponse_ == nullptr
        && this->requestId_ == nullptr && this->resultCode_ == nullptr && this->resultMsg_ == nullptr && this->success_ == nullptr; };
    // mpaasSaveOrderRelationResponse Field Functions 
    bool hasMpaasSaveOrderRelationResponse() const { return this->mpaasSaveOrderRelationResponse_ != nullptr;};
    void deleteMpaasSaveOrderRelationResponse() { this->mpaasSaveOrderRelationResponse_ = nullptr;};
    inline const SaveOrderRelationInfoToMsenceResponseBody::MpaasSaveOrderRelationResponse & getMpaasSaveOrderRelationResponse() const { DARABONBA_PTR_GET_CONST(mpaasSaveOrderRelationResponse_, SaveOrderRelationInfoToMsenceResponseBody::MpaasSaveOrderRelationResponse) };
    inline SaveOrderRelationInfoToMsenceResponseBody::MpaasSaveOrderRelationResponse getMpaasSaveOrderRelationResponse() { DARABONBA_PTR_GET(mpaasSaveOrderRelationResponse_, SaveOrderRelationInfoToMsenceResponseBody::MpaasSaveOrderRelationResponse) };
    inline SaveOrderRelationInfoToMsenceResponseBody& setMpaasSaveOrderRelationResponse(const SaveOrderRelationInfoToMsenceResponseBody::MpaasSaveOrderRelationResponse & mpaasSaveOrderRelationResponse) { DARABONBA_PTR_SET_VALUE(mpaasSaveOrderRelationResponse_, mpaasSaveOrderRelationResponse) };
    inline SaveOrderRelationInfoToMsenceResponseBody& setMpaasSaveOrderRelationResponse(SaveOrderRelationInfoToMsenceResponseBody::MpaasSaveOrderRelationResponse && mpaasSaveOrderRelationResponse) { DARABONBA_PTR_SET_RVALUE(mpaasSaveOrderRelationResponse_, mpaasSaveOrderRelationResponse) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SaveOrderRelationInfoToMsenceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultCode Field Functions 
    bool hasResultCode() const { return this->resultCode_ != nullptr;};
    void deleteResultCode() { this->resultCode_ = nullptr;};
    inline string getResultCode() const { DARABONBA_PTR_GET_DEFAULT(resultCode_, "") };
    inline SaveOrderRelationInfoToMsenceResponseBody& setResultCode(string resultCode) { DARABONBA_PTR_SET_VALUE(resultCode_, resultCode) };


    // resultMsg Field Functions 
    bool hasResultMsg() const { return this->resultMsg_ != nullptr;};
    void deleteResultMsg() { this->resultMsg_ = nullptr;};
    inline string getResultMsg() const { DARABONBA_PTR_GET_DEFAULT(resultMsg_, "") };
    inline SaveOrderRelationInfoToMsenceResponseBody& setResultMsg(string resultMsg) { DARABONBA_PTR_SET_VALUE(resultMsg_, resultMsg) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline SaveOrderRelationInfoToMsenceResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<SaveOrderRelationInfoToMsenceResponseBody::MpaasSaveOrderRelationResponse> mpaasSaveOrderRelationResponse_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> resultCode_ {};
    shared_ptr<string> resultMsg_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
