// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REJECTRESOURCESHAREINVITATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REJECTRESOURCESHAREINVITATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceSharing20200110
{
namespace Models
{
  class RejectResourceShareInvitationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RejectResourceShareInvitationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ResourceShareInvitationId, resourceShareInvitationId_);
    };
    friend void from_json(const Darabonba::Json& j, RejectResourceShareInvitationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ResourceShareInvitationId, resourceShareInvitationId_);
    };
    RejectResourceShareInvitationRequest() = default ;
    RejectResourceShareInvitationRequest(const RejectResourceShareInvitationRequest &) = default ;
    RejectResourceShareInvitationRequest(RejectResourceShareInvitationRequest &&) = default ;
    RejectResourceShareInvitationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RejectResourceShareInvitationRequest() = default ;
    RejectResourceShareInvitationRequest& operator=(const RejectResourceShareInvitationRequest &) = default ;
    RejectResourceShareInvitationRequest& operator=(RejectResourceShareInvitationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->resourceShareInvitationId_ == nullptr; };
    // resourceShareInvitationId Field Functions 
    bool hasResourceShareInvitationId() const { return this->resourceShareInvitationId_ != nullptr;};
    void deleteResourceShareInvitationId() { this->resourceShareInvitationId_ = nullptr;};
    inline string getResourceShareInvitationId() const { DARABONBA_PTR_GET_DEFAULT(resourceShareInvitationId_, "") };
    inline RejectResourceShareInvitationRequest& setResourceShareInvitationId(string resourceShareInvitationId) { DARABONBA_PTR_SET_VALUE(resourceShareInvitationId_, resourceShareInvitationId) };


  protected:
    // The ID of the resource sharing invitation.
    // 
    // You can call the [ListResourceShareInvitations](https://help.aliyun.com/document_detail/450564.html) operation to obtain the ID of a resource sharing invitation.
    // 
    // This parameter is required.
    shared_ptr<string> resourceShareInvitationId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceSharing20200110
#endif
