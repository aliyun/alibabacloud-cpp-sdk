// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEGUESTCLUSTERCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEGUESTCLUSTERCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class UpdateGuestClusterConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateGuestClusterConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(GuestClusterId, guestClusterId_);
      DARABONBA_PTR_TO_JSON(SMCEnabled, SMCEnabled_);
      DARABONBA_PTR_TO_JSON(ServiceMeshId, serviceMeshId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateGuestClusterConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(GuestClusterId, guestClusterId_);
      DARABONBA_PTR_FROM_JSON(SMCEnabled, SMCEnabled_);
      DARABONBA_PTR_FROM_JSON(ServiceMeshId, serviceMeshId_);
    };
    UpdateGuestClusterConfigRequest() = default ;
    UpdateGuestClusterConfigRequest(const UpdateGuestClusterConfigRequest &) = default ;
    UpdateGuestClusterConfigRequest(UpdateGuestClusterConfigRequest &&) = default ;
    UpdateGuestClusterConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateGuestClusterConfigRequest() = default ;
    UpdateGuestClusterConfigRequest& operator=(const UpdateGuestClusterConfigRequest &) = default ;
    UpdateGuestClusterConfigRequest& operator=(UpdateGuestClusterConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->guestClusterId_ == nullptr
        && return this->SMCEnabled_ == nullptr && return this->serviceMeshId_ == nullptr; };
    // guestClusterId Field Functions 
    bool hasGuestClusterId() const { return this->guestClusterId_ != nullptr;};
    void deleteGuestClusterId() { this->guestClusterId_ = nullptr;};
    inline string guestClusterId() const { DARABONBA_PTR_GET_DEFAULT(guestClusterId_, "") };
    inline UpdateGuestClusterConfigRequest& setGuestClusterId(string guestClusterId) { DARABONBA_PTR_SET_VALUE(guestClusterId_, guestClusterId) };


    // SMCEnabled Field Functions 
    bool hasSMCEnabled() const { return this->SMCEnabled_ != nullptr;};
    void deleteSMCEnabled() { this->SMCEnabled_ = nullptr;};
    inline bool SMCEnabled() const { DARABONBA_PTR_GET_DEFAULT(SMCEnabled_, false) };
    inline UpdateGuestClusterConfigRequest& setSMCEnabled(bool SMCEnabled) { DARABONBA_PTR_SET_VALUE(SMCEnabled_, SMCEnabled) };


    // serviceMeshId Field Functions 
    bool hasServiceMeshId() const { return this->serviceMeshId_ != nullptr;};
    void deleteServiceMeshId() { this->serviceMeshId_ = nullptr;};
    inline string serviceMeshId() const { DARABONBA_PTR_GET_DEFAULT(serviceMeshId_, "") };
    inline UpdateGuestClusterConfigRequest& setServiceMeshId(string serviceMeshId) { DARABONBA_PTR_SET_VALUE(serviceMeshId_, serviceMeshId) };


  protected:
    std::shared_ptr<string> guestClusterId_ = nullptr;
    std::shared_ptr<bool> SMCEnabled_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> serviceMeshId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
