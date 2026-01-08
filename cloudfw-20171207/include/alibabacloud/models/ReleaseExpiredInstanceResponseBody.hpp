// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RELEASEEXPIREDINSTANCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_RELEASEEXPIREDINSTANCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class ReleaseExpiredInstanceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ReleaseExpiredInstanceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(ReleaseStatus, releaseStatus_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ReleaseExpiredInstanceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(ReleaseStatus, releaseStatus_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ReleaseExpiredInstanceResponseBody() = default ;
    ReleaseExpiredInstanceResponseBody(const ReleaseExpiredInstanceResponseBody &) = default ;
    ReleaseExpiredInstanceResponseBody(ReleaseExpiredInstanceResponseBody &&) = default ;
    ReleaseExpiredInstanceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ReleaseExpiredInstanceResponseBody() = default ;
    ReleaseExpiredInstanceResponseBody& operator=(const ReleaseExpiredInstanceResponseBody &) = default ;
    ReleaseExpiredInstanceResponseBody& operator=(ReleaseExpiredInstanceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->httpStatusCode_ == nullptr
        && this->releaseStatus_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ReleaseExpiredInstanceResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // releaseStatus Field Functions 
    bool hasReleaseStatus() const { return this->releaseStatus_ != nullptr;};
    void deleteReleaseStatus() { this->releaseStatus_ = nullptr;};
    inline string getReleaseStatus() const { DARABONBA_PTR_GET_DEFAULT(releaseStatus_, "") };
    inline ReleaseExpiredInstanceResponseBody& setReleaseStatus(string releaseStatus) { DARABONBA_PTR_SET_VALUE(releaseStatus_, releaseStatus) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ReleaseExpiredInstanceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ReleaseExpiredInstanceResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> releaseStatus_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
