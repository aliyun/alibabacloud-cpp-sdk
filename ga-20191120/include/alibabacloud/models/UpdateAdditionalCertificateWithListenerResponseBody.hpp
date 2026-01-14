// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEADDITIONALCERTIFICATEWITHLISTENERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATEADDITIONALCERTIFICATEWITHLISTENERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ga20191120
{
namespace Models
{
  class UpdateAdditionalCertificateWithListenerResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAdditionalCertificateWithListenerResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ListenerId, listenerId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAdditionalCertificateWithListenerResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ListenerId, listenerId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    UpdateAdditionalCertificateWithListenerResponseBody() = default ;
    UpdateAdditionalCertificateWithListenerResponseBody(const UpdateAdditionalCertificateWithListenerResponseBody &) = default ;
    UpdateAdditionalCertificateWithListenerResponseBody(UpdateAdditionalCertificateWithListenerResponseBody &&) = default ;
    UpdateAdditionalCertificateWithListenerResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAdditionalCertificateWithListenerResponseBody() = default ;
    UpdateAdditionalCertificateWithListenerResponseBody& operator=(const UpdateAdditionalCertificateWithListenerResponseBody &) = default ;
    UpdateAdditionalCertificateWithListenerResponseBody& operator=(UpdateAdditionalCertificateWithListenerResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->listenerId_ == nullptr
        && this->requestId_ == nullptr; };
    // listenerId Field Functions 
    bool hasListenerId() const { return this->listenerId_ != nullptr;};
    void deleteListenerId() { this->listenerId_ = nullptr;};
    inline string getListenerId() const { DARABONBA_PTR_GET_DEFAULT(listenerId_, "") };
    inline UpdateAdditionalCertificateWithListenerResponseBody& setListenerId(string listenerId) { DARABONBA_PTR_SET_VALUE(listenerId_, listenerId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateAdditionalCertificateWithListenerResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the listener.
    shared_ptr<string> listenerId_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ga20191120
#endif
