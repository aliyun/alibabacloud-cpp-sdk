// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDLASERVICERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDLASERVICERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dbs20190306
{
namespace Models
{
  class DescribeDLAServiceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDLAServiceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AutoAdd, autoAdd_);
      DARABONBA_PTR_TO_JSON(ErrCode, errCode_);
      DARABONBA_PTR_TO_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_TO_JSON(HaveJobFailed, haveJobFailed_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(State, state_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDLAServiceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoAdd, autoAdd_);
      DARABONBA_PTR_FROM_JSON(ErrCode, errCode_);
      DARABONBA_PTR_FROM_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_FROM_JSON(HaveJobFailed, haveJobFailed_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(State, state_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeDLAServiceResponseBody() = default ;
    DescribeDLAServiceResponseBody(const DescribeDLAServiceResponseBody &) = default ;
    DescribeDLAServiceResponseBody(DescribeDLAServiceResponseBody &&) = default ;
    DescribeDLAServiceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDLAServiceResponseBody() = default ;
    DescribeDLAServiceResponseBody& operator=(const DescribeDLAServiceResponseBody &) = default ;
    DescribeDLAServiceResponseBody& operator=(DescribeDLAServiceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoAdd_ == nullptr
        && return this->errCode_ == nullptr && return this->errMessage_ == nullptr && return this->haveJobFailed_ == nullptr && return this->httpStatusCode_ == nullptr && return this->requestId_ == nullptr
        && return this->state_ == nullptr && return this->success_ == nullptr; };
    // autoAdd Field Functions 
    bool hasAutoAdd() const { return this->autoAdd_ != nullptr;};
    void deleteAutoAdd() { this->autoAdd_ = nullptr;};
    inline bool autoAdd() const { DARABONBA_PTR_GET_DEFAULT(autoAdd_, false) };
    inline DescribeDLAServiceResponseBody& setAutoAdd(bool autoAdd) { DARABONBA_PTR_SET_VALUE(autoAdd_, autoAdd) };


    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline string errCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
    inline DescribeDLAServiceResponseBody& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // errMessage Field Functions 
    bool hasErrMessage() const { return this->errMessage_ != nullptr;};
    void deleteErrMessage() { this->errMessage_ = nullptr;};
    inline string errMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
    inline DescribeDLAServiceResponseBody& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


    // haveJobFailed Field Functions 
    bool hasHaveJobFailed() const { return this->haveJobFailed_ != nullptr;};
    void deleteHaveJobFailed() { this->haveJobFailed_ = nullptr;};
    inline bool haveJobFailed() const { DARABONBA_PTR_GET_DEFAULT(haveJobFailed_, false) };
    inline DescribeDLAServiceResponseBody& setHaveJobFailed(bool haveJobFailed) { DARABONBA_PTR_SET_VALUE(haveJobFailed_, haveJobFailed) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t httpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline DescribeDLAServiceResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDLAServiceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline DescribeDLAServiceResponseBody& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeDLAServiceResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // Specifies whether to enable the feature of automatically adding incremental data to a data lake. If this feature is enabled, DBS adds the backup sets that are newly generated to the data lake that is created for the backup schedule. Valid values:
    // 
    // *   **true**: enables the feature.
    // *   **false**: disables the feature.
    std::shared_ptr<bool> autoAdd_ = nullptr;
    // The error code.
    std::shared_ptr<string> errCode_ = nullptr;
    // The error message.
    std::shared_ptr<string> errMessage_ = nullptr;
    // Indicates whether a failed DLA task exists in the return result. Valid values:
    // 
    // *   **true**: A failed DLA task exists.
    // *   **false**: No failed DLA task exists.
    std::shared_ptr<bool> haveJobFailed_ = nullptr;
    // The HTTP status code.
    std::shared_ptr<int32_t> httpStatusCode_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The status of the DLA service for the backup schedule. Valid values:
    // 
    // *   **Running**: DLA is running.
    // *   **Closing**: DLA is being disabled.
    // *   **Closed**: DLA is disabled.
    std::shared_ptr<string> state_ = nullptr;
    // Indicates whether the request is successful.
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dbs20190306
#endif
