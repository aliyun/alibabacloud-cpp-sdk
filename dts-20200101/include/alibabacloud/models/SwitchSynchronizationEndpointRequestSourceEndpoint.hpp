// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SWITCHSYNCHRONIZATIONENDPOINTREQUESTSOURCEENDPOINT_HPP_
#define ALIBABACLOUD_MODELS_SWITCHSYNCHRONIZATIONENDPOINTREQUESTSOURCEENDPOINT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class SwitchSynchronizationEndpointRequestSourceEndpoint : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SwitchSynchronizationEndpointRequestSourceEndpoint& obj) { 
      DARABONBA_PTR_TO_JSON(OwnerID, ownerID_);
      DARABONBA_PTR_TO_JSON(Role, role_);
    };
    friend void from_json(const Darabonba::Json& j, SwitchSynchronizationEndpointRequestSourceEndpoint& obj) { 
      DARABONBA_PTR_FROM_JSON(OwnerID, ownerID_);
      DARABONBA_PTR_FROM_JSON(Role, role_);
    };
    SwitchSynchronizationEndpointRequestSourceEndpoint() = default ;
    SwitchSynchronizationEndpointRequestSourceEndpoint(const SwitchSynchronizationEndpointRequestSourceEndpoint &) = default ;
    SwitchSynchronizationEndpointRequestSourceEndpoint(SwitchSynchronizationEndpointRequestSourceEndpoint &&) = default ;
    SwitchSynchronizationEndpointRequestSourceEndpoint(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SwitchSynchronizationEndpointRequestSourceEndpoint() = default ;
    SwitchSynchronizationEndpointRequestSourceEndpoint& operator=(const SwitchSynchronizationEndpointRequestSourceEndpoint &) = default ;
    SwitchSynchronizationEndpointRequestSourceEndpoint& operator=(SwitchSynchronizationEndpointRequestSourceEndpoint &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ownerID_ != nullptr
        && this->role_ != nullptr; };
    // ownerID Field Functions 
    bool hasOwnerID() const { return this->ownerID_ != nullptr;};
    void deleteOwnerID() { this->ownerID_ = nullptr;};
    inline string ownerID() const { DARABONBA_PTR_GET_DEFAULT(ownerID_, "") };
    inline SwitchSynchronizationEndpointRequestSourceEndpoint& setOwnerID(string ownerID) { DARABONBA_PTR_SET_VALUE(ownerID_, ownerID) };


    // role Field Functions 
    bool hasRole() const { return this->role_ != nullptr;};
    void deleteRole() { this->role_ = nullptr;};
    inline string role() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
    inline SwitchSynchronizationEndpointRequestSourceEndpoint& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


  protected:
    // The ID of the Alibaba Cloud account to which the source instance belongs. You must specify this parameter only if the source instance and the destination instance belong to different Alibaba Cloud accounts.
    std::shared_ptr<string> ownerID_ = nullptr;
    // The authorized Resource Access Management (RAM) role of the source instance. You must specify the RAM role only if the source instance and the destination instance belong to different Alibaba Cloud accounts. You can use the RAM role to allow the Alibaba Cloud account that owns the destination instance to access the source instance.
    // 
    // >  For information about the permissions and authorization methods of the RAM role, see [Configure RAM authorization for cross-account data migration and synchronization](https://help.aliyun.com/document_detail/48468.html).
    std::shared_ptr<string> role_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
