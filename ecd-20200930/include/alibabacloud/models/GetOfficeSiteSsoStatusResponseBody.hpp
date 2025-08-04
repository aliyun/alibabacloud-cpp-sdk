// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETOFFICESITESSOSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETOFFICESITESSOSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class GetOfficeSiteSsoStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOfficeSiteSsoStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SsoStatus, ssoStatus_);
    };
    friend void from_json(const Darabonba::Json& j, GetOfficeSiteSsoStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SsoStatus, ssoStatus_);
    };
    GetOfficeSiteSsoStatusResponseBody() = default ;
    GetOfficeSiteSsoStatusResponseBody(const GetOfficeSiteSsoStatusResponseBody &) = default ;
    GetOfficeSiteSsoStatusResponseBody(GetOfficeSiteSsoStatusResponseBody &&) = default ;
    GetOfficeSiteSsoStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOfficeSiteSsoStatusResponseBody() = default ;
    GetOfficeSiteSsoStatusResponseBody& operator=(const GetOfficeSiteSsoStatusResponseBody &) = default ;
    GetOfficeSiteSsoStatusResponseBody& operator=(GetOfficeSiteSsoStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->ssoStatus_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetOfficeSiteSsoStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // ssoStatus Field Functions 
    bool hasSsoStatus() const { return this->ssoStatus_ != nullptr;};
    void deleteSsoStatus() { this->ssoStatus_ = nullptr;};
    inline bool ssoStatus() const { DARABONBA_PTR_GET_DEFAULT(ssoStatus_, false) };
    inline GetOfficeSiteSsoStatusResponseBody& setSsoStatus(bool ssoStatus) { DARABONBA_PTR_SET_VALUE(ssoStatus_, ssoStatus) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether SSO is enabled.
    std::shared_ptr<bool> ssoStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
