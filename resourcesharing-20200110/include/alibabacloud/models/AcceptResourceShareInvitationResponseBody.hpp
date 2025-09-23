// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ACCEPTRESOURCESHAREINVITATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ACCEPTRESOURCESHAREINVITATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/AcceptResourceShareInvitationResponseBodyResourceShareInvitation.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceSharing20200110
{
namespace Models
{
  class AcceptResourceShareInvitationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AcceptResourceShareInvitationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceShareInvitation, resourceShareInvitation_);
    };
    friend void from_json(const Darabonba::Json& j, AcceptResourceShareInvitationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceShareInvitation, resourceShareInvitation_);
    };
    AcceptResourceShareInvitationResponseBody() = default ;
    AcceptResourceShareInvitationResponseBody(const AcceptResourceShareInvitationResponseBody &) = default ;
    AcceptResourceShareInvitationResponseBody(AcceptResourceShareInvitationResponseBody &&) = default ;
    AcceptResourceShareInvitationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AcceptResourceShareInvitationResponseBody() = default ;
    AcceptResourceShareInvitationResponseBody& operator=(const AcceptResourceShareInvitationResponseBody &) = default ;
    AcceptResourceShareInvitationResponseBody& operator=(AcceptResourceShareInvitationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->resourceShareInvitation_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AcceptResourceShareInvitationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceShareInvitation Field Functions 
    bool hasResourceShareInvitation() const { return this->resourceShareInvitation_ != nullptr;};
    void deleteResourceShareInvitation() { this->resourceShareInvitation_ = nullptr;};
    inline const AcceptResourceShareInvitationResponseBodyResourceShareInvitation & resourceShareInvitation() const { DARABONBA_PTR_GET_CONST(resourceShareInvitation_, AcceptResourceShareInvitationResponseBodyResourceShareInvitation) };
    inline AcceptResourceShareInvitationResponseBodyResourceShareInvitation resourceShareInvitation() { DARABONBA_PTR_GET(resourceShareInvitation_, AcceptResourceShareInvitationResponseBodyResourceShareInvitation) };
    inline AcceptResourceShareInvitationResponseBody& setResourceShareInvitation(const AcceptResourceShareInvitationResponseBodyResourceShareInvitation & resourceShareInvitation) { DARABONBA_PTR_SET_VALUE(resourceShareInvitation_, resourceShareInvitation) };
    inline AcceptResourceShareInvitationResponseBody& setResourceShareInvitation(AcceptResourceShareInvitationResponseBodyResourceShareInvitation && resourceShareInvitation) { DARABONBA_PTR_SET_RVALUE(resourceShareInvitation_, resourceShareInvitation) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The information about the resource sharing invitation.
    std::shared_ptr<AcceptResourceShareInvitationResponseBodyResourceShareInvitation> resourceShareInvitation_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceSharing20200110
#endif
