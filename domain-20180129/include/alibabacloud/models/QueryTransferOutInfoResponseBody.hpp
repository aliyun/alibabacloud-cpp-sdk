// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYTRANSFEROUTINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYTRANSFEROUTINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class QueryTransferOutInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryTransferOutInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Email, email_);
      DARABONBA_PTR_TO_JSON(ExpirationDate, expirationDate_);
      DARABONBA_PTR_TO_JSON(PendingRequestDate, pendingRequestDate_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_TO_JSON(ResultMsg, resultMsg_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TransferAuthorizationCodeSendDate, transferAuthorizationCodeSendDate_);
    };
    friend void from_json(const Darabonba::Json& j, QueryTransferOutInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Email, email_);
      DARABONBA_PTR_FROM_JSON(ExpirationDate, expirationDate_);
      DARABONBA_PTR_FROM_JSON(PendingRequestDate, pendingRequestDate_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_FROM_JSON(ResultMsg, resultMsg_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TransferAuthorizationCodeSendDate, transferAuthorizationCodeSendDate_);
    };
    QueryTransferOutInfoResponseBody() = default ;
    QueryTransferOutInfoResponseBody(const QueryTransferOutInfoResponseBody &) = default ;
    QueryTransferOutInfoResponseBody(QueryTransferOutInfoResponseBody &&) = default ;
    QueryTransferOutInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryTransferOutInfoResponseBody() = default ;
    QueryTransferOutInfoResponseBody& operator=(const QueryTransferOutInfoResponseBody &) = default ;
    QueryTransferOutInfoResponseBody& operator=(QueryTransferOutInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->email_ == nullptr
        && this->expirationDate_ == nullptr && this->pendingRequestDate_ == nullptr && this->requestId_ == nullptr && this->resultCode_ == nullptr && this->resultMsg_ == nullptr
        && this->status_ == nullptr && this->transferAuthorizationCodeSendDate_ == nullptr; };
    // email Field Functions 
    bool hasEmail() const { return this->email_ != nullptr;};
    void deleteEmail() { this->email_ = nullptr;};
    inline string getEmail() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
    inline QueryTransferOutInfoResponseBody& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


    // expirationDate Field Functions 
    bool hasExpirationDate() const { return this->expirationDate_ != nullptr;};
    void deleteExpirationDate() { this->expirationDate_ = nullptr;};
    inline string getExpirationDate() const { DARABONBA_PTR_GET_DEFAULT(expirationDate_, "") };
    inline QueryTransferOutInfoResponseBody& setExpirationDate(string expirationDate) { DARABONBA_PTR_SET_VALUE(expirationDate_, expirationDate) };


    // pendingRequestDate Field Functions 
    bool hasPendingRequestDate() const { return this->pendingRequestDate_ != nullptr;};
    void deletePendingRequestDate() { this->pendingRequestDate_ = nullptr;};
    inline string getPendingRequestDate() const { DARABONBA_PTR_GET_DEFAULT(pendingRequestDate_, "") };
    inline QueryTransferOutInfoResponseBody& setPendingRequestDate(string pendingRequestDate) { DARABONBA_PTR_SET_VALUE(pendingRequestDate_, pendingRequestDate) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryTransferOutInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultCode Field Functions 
    bool hasResultCode() const { return this->resultCode_ != nullptr;};
    void deleteResultCode() { this->resultCode_ = nullptr;};
    inline string getResultCode() const { DARABONBA_PTR_GET_DEFAULT(resultCode_, "") };
    inline QueryTransferOutInfoResponseBody& setResultCode(string resultCode) { DARABONBA_PTR_SET_VALUE(resultCode_, resultCode) };


    // resultMsg Field Functions 
    bool hasResultMsg() const { return this->resultMsg_ != nullptr;};
    void deleteResultMsg() { this->resultMsg_ = nullptr;};
    inline string getResultMsg() const { DARABONBA_PTR_GET_DEFAULT(resultMsg_, "") };
    inline QueryTransferOutInfoResponseBody& setResultMsg(string resultMsg) { DARABONBA_PTR_SET_VALUE(resultMsg_, resultMsg) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline QueryTransferOutInfoResponseBody& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // transferAuthorizationCodeSendDate Field Functions 
    bool hasTransferAuthorizationCodeSendDate() const { return this->transferAuthorizationCodeSendDate_ != nullptr;};
    void deleteTransferAuthorizationCodeSendDate() { this->transferAuthorizationCodeSendDate_ = nullptr;};
    inline string getTransferAuthorizationCodeSendDate() const { DARABONBA_PTR_GET_DEFAULT(transferAuthorizationCodeSendDate_, "") };
    inline QueryTransferOutInfoResponseBody& setTransferAuthorizationCodeSendDate(string transferAuthorizationCodeSendDate) { DARABONBA_PTR_SET_VALUE(transferAuthorizationCodeSendDate_, transferAuthorizationCodeSendDate) };


  protected:
    shared_ptr<string> email_ {};
    shared_ptr<string> expirationDate_ {};
    shared_ptr<string> pendingRequestDate_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> resultCode_ {};
    shared_ptr<string> resultMsg_ {};
    shared_ptr<int32_t> status_ {};
    shared_ptr<string> transferAuthorizationCodeSendDate_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
