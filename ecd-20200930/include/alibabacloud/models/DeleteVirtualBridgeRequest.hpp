// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEVIRTUALBRIDGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEVIRTUALBRIDGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DeleteVirtualBridgeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteVirtualBridgeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BridgeId, bridgeId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteVirtualBridgeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BridgeId, bridgeId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DeleteVirtualBridgeRequest() = default ;
    DeleteVirtualBridgeRequest(const DeleteVirtualBridgeRequest &) = default ;
    DeleteVirtualBridgeRequest(DeleteVirtualBridgeRequest &&) = default ;
    DeleteVirtualBridgeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteVirtualBridgeRequest() = default ;
    DeleteVirtualBridgeRequest& operator=(const DeleteVirtualBridgeRequest &) = default ;
    DeleteVirtualBridgeRequest& operator=(DeleteVirtualBridgeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bridgeId_ == nullptr
        && this->regionId_ == nullptr; };
    // bridgeId Field Functions 
    bool hasBridgeId() const { return this->bridgeId_ != nullptr;};
    void deleteBridgeId() { this->bridgeId_ = nullptr;};
    inline string getBridgeId() const { DARABONBA_PTR_GET_DEFAULT(bridgeId_, "") };
    inline DeleteVirtualBridgeRequest& setBridgeId(string bridgeId) { DARABONBA_PTR_SET_VALUE(bridgeId_, bridgeId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteVirtualBridgeRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The virtual bridge ID.
    // 
    // This parameter is required.
    shared_ptr<string> bridgeId_ {};
    // The region ID. Call [DescribeRegions](~~DescribeRegions~~) to query the regions supported by WUYING Workspace.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
