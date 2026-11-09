// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INACTIVATECACERTIFICATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_INACTIVATECACERTIFICATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OnsMqtt20200420
{
namespace Models
{
  class InactivateCaCertificateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InactivateCaCertificateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Sn, sn_);
    };
    friend void from_json(const Darabonba::Json& j, InactivateCaCertificateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Sn, sn_);
    };
    InactivateCaCertificateResponseBody() = default ;
    InactivateCaCertificateResponseBody(const InactivateCaCertificateResponseBody &) = default ;
    InactivateCaCertificateResponseBody(InactivateCaCertificateResponseBody &&) = default ;
    InactivateCaCertificateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InactivateCaCertificateResponseBody() = default ;
    InactivateCaCertificateResponseBody& operator=(const InactivateCaCertificateResponseBody &) = default ;
    InactivateCaCertificateResponseBody& operator=(InactivateCaCertificateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->sn_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline InactivateCaCertificateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sn Field Functions 
    bool hasSn() const { return this->sn_ != nullptr;};
    void deleteSn() { this->sn_ = nullptr;};
    inline string getSn() const { DARABONBA_PTR_GET_DEFAULT(sn_, "") };
    inline InactivateCaCertificateResponseBody& setSn(string sn) { DARABONBA_PTR_SET_VALUE(sn_, sn) };


  protected:
    // The ID of the request. This ID is unique for each request. You can use it to troubleshoot and locate issues.
    shared_ptr<string> requestId_ {};
    // The serial number (SN) of the unregistered CA certificate. The SN uniquely identifies a CA certificate.
    shared_ptr<string> sn_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OnsMqtt20200420
#endif
