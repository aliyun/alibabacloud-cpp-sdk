// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEPRIVATEDNSENDPOINTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEPRIVATEDNSENDPOINTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DeletePrivateDnsEndpointRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeletePrivateDnsEndpointRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccessInstanceId, accessInstanceId_);
      DARABONBA_PTR_TO_JSON(RegionNo, regionNo_);
    };
    friend void from_json(const Darabonba::Json& j, DeletePrivateDnsEndpointRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessInstanceId, accessInstanceId_);
      DARABONBA_PTR_FROM_JSON(RegionNo, regionNo_);
    };
    DeletePrivateDnsEndpointRequest() = default ;
    DeletePrivateDnsEndpointRequest(const DeletePrivateDnsEndpointRequest &) = default ;
    DeletePrivateDnsEndpointRequest(DeletePrivateDnsEndpointRequest &&) = default ;
    DeletePrivateDnsEndpointRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeletePrivateDnsEndpointRequest() = default ;
    DeletePrivateDnsEndpointRequest& operator=(const DeletePrivateDnsEndpointRequest &) = default ;
    DeletePrivateDnsEndpointRequest& operator=(DeletePrivateDnsEndpointRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessInstanceId_ == nullptr
        && return this->regionNo_ == nullptr; };
    // accessInstanceId Field Functions 
    bool hasAccessInstanceId() const { return this->accessInstanceId_ != nullptr;};
    void deleteAccessInstanceId() { this->accessInstanceId_ = nullptr;};
    inline string accessInstanceId() const { DARABONBA_PTR_GET_DEFAULT(accessInstanceId_, "") };
    inline DeletePrivateDnsEndpointRequest& setAccessInstanceId(string accessInstanceId) { DARABONBA_PTR_SET_VALUE(accessInstanceId_, accessInstanceId) };


    // regionNo Field Functions 
    bool hasRegionNo() const { return this->regionNo_ != nullptr;};
    void deleteRegionNo() { this->regionNo_ = nullptr;};
    inline string regionNo() const { DARABONBA_PTR_GET_DEFAULT(regionNo_, "") };
    inline DeletePrivateDnsEndpointRequest& setRegionNo(string regionNo) { DARABONBA_PTR_SET_VALUE(regionNo_, regionNo) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> accessInstanceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> regionNo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
