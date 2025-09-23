// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REJECTRESOURCESHAREINVITATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_REJECTRESOURCESHAREINVITATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RejectResourceShareInvitationResponseBodyResourceShareInvitation.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceSharing20200110
{
namespace Models
{
  class RejectResourceShareInvitationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RejectResourceShareInvitationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceShareInvitation, resourceShareInvitation_);
    };
    friend void from_json(const Darabonba::Json& j, RejectResourceShareInvitationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceShareInvitation, resourceShareInvitation_);
    };
    RejectResourceShareInvitationResponseBody() = default ;
    RejectResourceShareInvitationResponseBody(const RejectResourceShareInvitationResponseBody &) = default ;
    RejectResourceShareInvitationResponseBody(RejectResourceShareInvitationResponseBody &&) = default ;
    RejectResourceShareInvitationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RejectResourceShareInvitationResponseBody() = default ;
    RejectResourceShareInvitationResponseBody& operator=(const RejectResourceShareInvitationResponseBody &) = default ;
    RejectResourceShareInvitationResponseBody& operator=(RejectResourceShareInvitationResponseBody &&) = default ;
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
    inline RejectResourceShareInvitationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceShareInvitation Field Functions 
    bool hasResourceShareInvitation() const { return this->resourceShareInvitation_ != nullptr;};
    void deleteResourceShareInvitation() { this->resourceShareInvitation_ = nullptr;};
    inline const RejectResourceShareInvitationResponseBodyResourceShareInvitation & resourceShareInvitation() const { DARABONBA_PTR_GET_CONST(resourceShareInvitation_, RejectResourceShareInvitationResponseBodyResourceShareInvitation) };
    inline RejectResourceShareInvitationResponseBodyResourceShareInvitation resourceShareInvitation() { DARABONBA_PTR_GET(resourceShareInvitation_, RejectResourceShareInvitationResponseBodyResourceShareInvitation) };
    inline RejectResourceShareInvitationResponseBody& setResourceShareInvitation(const RejectResourceShareInvitationResponseBodyResourceShareInvitation & resourceShareInvitation) { DARABONBA_PTR_SET_VALUE(resourceShareInvitation_, resourceShareInvitation) };
    inline RejectResourceShareInvitationResponseBody& setResourceShareInvitation(RejectResourceShareInvitationResponseBodyResourceShareInvitation && resourceShareInvitation) { DARABONBA_PTR_SET_RVALUE(resourceShareInvitation_, resourceShareInvitation) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The information of the resource sharing invitation.
    std::shared_ptr<RejectResourceShareInvitationResponseBodyResourceShareInvitation> resourceShareInvitation_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceSharing20200110
#endif
