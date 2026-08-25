// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMFAAUTHENTICATIONSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMFAAUTHENTICATIONSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudsso20210515
{
namespace Models
{
  class GetMFAAuthenticationStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMFAAuthenticationStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MFAAuthenticationStatus, MFAAuthenticationStatus_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetMFAAuthenticationStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MFAAuthenticationStatus, MFAAuthenticationStatus_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetMFAAuthenticationStatusResponseBody() = default ;
    GetMFAAuthenticationStatusResponseBody(const GetMFAAuthenticationStatusResponseBody &) = default ;
    GetMFAAuthenticationStatusResponseBody(GetMFAAuthenticationStatusResponseBody &&) = default ;
    GetMFAAuthenticationStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMFAAuthenticationStatusResponseBody() = default ;
    GetMFAAuthenticationStatusResponseBody& operator=(const GetMFAAuthenticationStatusResponseBody &) = default ;
    GetMFAAuthenticationStatusResponseBody& operator=(GetMFAAuthenticationStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->MFAAuthenticationStatus_ == nullptr
        && this->requestId_ == nullptr; };
    // MFAAuthenticationStatus Field Functions 
    bool hasMFAAuthenticationStatus() const { return this->MFAAuthenticationStatus_ != nullptr;};
    void deleteMFAAuthenticationStatus() { this->MFAAuthenticationStatus_ = nullptr;};
    inline string getMFAAuthenticationStatus() const { DARABONBA_PTR_GET_DEFAULT(MFAAuthenticationStatus_, "") };
    inline GetMFAAuthenticationStatusResponseBody& setMFAAuthenticationStatus(string MFAAuthenticationStatus) { DARABONBA_PTR_SET_VALUE(MFAAuthenticationStatus_, MFAAuthenticationStatus) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetMFAAuthenticationStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Indicates whether MFA is enabled for users. Valid values:
    // 
    // *   Enabled
    // *   Disabled
    shared_ptr<string> MFAAuthenticationStatus_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudsso20210515
#endif
