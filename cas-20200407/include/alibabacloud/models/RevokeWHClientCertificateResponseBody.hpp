// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REVOKEWHCLIENTCERTIFICATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_REVOKEWHCLIENTCERTIFICATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cas20200407
{
namespace Models
{
  class RevokeWHClientCertificateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RevokeWHClientCertificateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, RevokeWHClientCertificateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    RevokeWHClientCertificateResponseBody() = default ;
    RevokeWHClientCertificateResponseBody(const RevokeWHClientCertificateResponseBody &) = default ;
    RevokeWHClientCertificateResponseBody(RevokeWHClientCertificateResponseBody &&) = default ;
    RevokeWHClientCertificateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RevokeWHClientCertificateResponseBody() = default ;
    RevokeWHClientCertificateResponseBody& operator=(const RevokeWHClientCertificateResponseBody &) = default ;
    RevokeWHClientCertificateResponseBody& operator=(RevokeWHClientCertificateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RevokeWHClientCertificateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200407
#endif
