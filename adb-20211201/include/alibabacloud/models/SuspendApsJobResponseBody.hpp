// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUSPENDAPSJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SUSPENDAPSJOBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class SuspendApsJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SuspendApsJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ApsJobId, apsJobId_);
      DARABONBA_PTR_TO_JSON(ErrCode, errCode_);
      DARABONBA_PTR_TO_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, SuspendApsJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ApsJobId, apsJobId_);
      DARABONBA_PTR_FROM_JSON(ErrCode, errCode_);
      DARABONBA_PTR_FROM_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    SuspendApsJobResponseBody() = default ;
    SuspendApsJobResponseBody(const SuspendApsJobResponseBody &) = default ;
    SuspendApsJobResponseBody(SuspendApsJobResponseBody &&) = default ;
    SuspendApsJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SuspendApsJobResponseBody() = default ;
    SuspendApsJobResponseBody& operator=(const SuspendApsJobResponseBody &) = default ;
    SuspendApsJobResponseBody& operator=(SuspendApsJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apsJobId_ == nullptr
        && return this->errCode_ == nullptr && return this->errMessage_ == nullptr && return this->httpStatusCode_ == nullptr && return this->requestId_ == nullptr && return this->success_ == nullptr; };
    // apsJobId Field Functions 
    bool hasApsJobId() const { return this->apsJobId_ != nullptr;};
    void deleteApsJobId() { this->apsJobId_ = nullptr;};
    inline string apsJobId() const { DARABONBA_PTR_GET_DEFAULT(apsJobId_, "") };
    inline SuspendApsJobResponseBody& setApsJobId(string apsJobId) { DARABONBA_PTR_SET_VALUE(apsJobId_, apsJobId) };


    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline string errCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
    inline SuspendApsJobResponseBody& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // errMessage Field Functions 
    bool hasErrMessage() const { return this->errMessage_ != nullptr;};
    void deleteErrMessage() { this->errMessage_ = nullptr;};
    inline string errMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
    inline SuspendApsJobResponseBody& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t httpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline SuspendApsJobResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SuspendApsJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline SuspendApsJobResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The job ID.
    std::shared_ptr<string> apsJobId_ = nullptr;
    // The HTTP status code or the error code.
    std::shared_ptr<string> errCode_ = nullptr;
    // The error code returned when the request fails.
    std::shared_ptr<string> errMessage_ = nullptr;
    // The response code. The status code 200 indicates that the request was successful.
    std::shared_ptr<int32_t> httpStatusCode_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
