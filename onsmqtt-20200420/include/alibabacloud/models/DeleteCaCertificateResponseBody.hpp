// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETECACERTIFICATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETECACERTIFICATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OnsMqtt20200420
{
namespace Models
{
  class DeleteCaCertificateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteCaCertificateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Sn, sn_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteCaCertificateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Sn, sn_);
    };
    DeleteCaCertificateResponseBody() = default ;
    DeleteCaCertificateResponseBody(const DeleteCaCertificateResponseBody &) = default ;
    DeleteCaCertificateResponseBody(DeleteCaCertificateResponseBody &&) = default ;
    DeleteCaCertificateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteCaCertificateResponseBody() = default ;
    DeleteCaCertificateResponseBody& operator=(const DeleteCaCertificateResponseBody &) = default ;
    DeleteCaCertificateResponseBody& operator=(DeleteCaCertificateResponseBody &&) = default ;
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
    inline DeleteCaCertificateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sn Field Functions 
    bool hasSn() const { return this->sn_ != nullptr;};
    void deleteSn() { this->sn_ = nullptr;};
    inline string getSn() const { DARABONBA_PTR_GET_DEFAULT(sn_, "") };
    inline DeleteCaCertificateResponseBody& setSn(string sn) { DARABONBA_PTR_SET_VALUE(sn_, sn) };


  protected:
    // The common parameter. The ID of each request is unique and can be used for troubleshooting.
    shared_ptr<string> requestId_ {};
    // The SN of the deleted CA certificate. The SN uniquely identifies a CA certificate.
    shared_ptr<string> sn_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OnsMqtt20200420
#endif
