// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETRANSITROUTERVPNATTACHMENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATETRANSITROUTERVPNATTACHMENTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class CreateTransitRouterVpnAttachmentResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTransitRouterVpnAttachmentResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TransitRouterAttachmentId, transitRouterAttachmentId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTransitRouterVpnAttachmentResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TransitRouterAttachmentId, transitRouterAttachmentId_);
    };
    CreateTransitRouterVpnAttachmentResponseBody() = default ;
    CreateTransitRouterVpnAttachmentResponseBody(const CreateTransitRouterVpnAttachmentResponseBody &) = default ;
    CreateTransitRouterVpnAttachmentResponseBody(CreateTransitRouterVpnAttachmentResponseBody &&) = default ;
    CreateTransitRouterVpnAttachmentResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTransitRouterVpnAttachmentResponseBody() = default ;
    CreateTransitRouterVpnAttachmentResponseBody& operator=(const CreateTransitRouterVpnAttachmentResponseBody &) = default ;
    CreateTransitRouterVpnAttachmentResponseBody& operator=(CreateTransitRouterVpnAttachmentResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->transitRouterAttachmentId_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateTransitRouterVpnAttachmentResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // transitRouterAttachmentId Field Functions 
    bool hasTransitRouterAttachmentId() const { return this->transitRouterAttachmentId_ != nullptr;};
    void deleteTransitRouterAttachmentId() { this->transitRouterAttachmentId_ = nullptr;};
    inline string transitRouterAttachmentId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterAttachmentId_, "") };
    inline CreateTransitRouterVpnAttachmentResponseBody& setTransitRouterAttachmentId(string transitRouterAttachmentId) { DARABONBA_PTR_SET_VALUE(transitRouterAttachmentId_, transitRouterAttachmentId) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The ID of the VPN attachment.
    std::shared_ptr<string> transitRouterAttachmentId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
