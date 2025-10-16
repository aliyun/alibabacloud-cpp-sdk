// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RELEASEPOSTINSTANCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_RELEASEPOSTINSTANCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class ReleasePostInstanceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ReleasePostInstanceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(ReleaseStatus, releaseStatus_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ReleasePostInstanceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(ReleaseStatus, releaseStatus_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ReleasePostInstanceResponseBody() = default ;
    ReleasePostInstanceResponseBody(const ReleasePostInstanceResponseBody &) = default ;
    ReleasePostInstanceResponseBody(ReleasePostInstanceResponseBody &&) = default ;
    ReleasePostInstanceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ReleasePostInstanceResponseBody() = default ;
    ReleasePostInstanceResponseBody& operator=(const ReleasePostInstanceResponseBody &) = default ;
    ReleasePostInstanceResponseBody& operator=(ReleasePostInstanceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->httpStatusCode_ == nullptr
        && return this->releaseStatus_ == nullptr && return this->requestId_ == nullptr && return this->success_ == nullptr; };
    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t httpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ReleasePostInstanceResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // releaseStatus Field Functions 
    bool hasReleaseStatus() const { return this->releaseStatus_ != nullptr;};
    void deleteReleaseStatus() { this->releaseStatus_ = nullptr;};
    inline bool releaseStatus() const { DARABONBA_PTR_GET_DEFAULT(releaseStatus_, false) };
    inline ReleasePostInstanceResponseBody& setReleaseStatus(bool releaseStatus) { DARABONBA_PTR_SET_VALUE(releaseStatus_, releaseStatus) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ReleasePostInstanceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ReleasePostInstanceResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The HTTP status code.
    std::shared_ptr<int32_t> httpStatusCode_ = nullptr;
    // Indicates whether the release was successful. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> releaseStatus_ = nullptr;
    // The request ID, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request was successful.
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
