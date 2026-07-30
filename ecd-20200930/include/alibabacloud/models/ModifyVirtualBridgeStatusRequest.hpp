// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYVIRTUALBRIDGESTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYVIRTUALBRIDGESTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class ModifyVirtualBridgeStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyVirtualBridgeStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BridgeId, bridgeId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyVirtualBridgeStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BridgeId, bridgeId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ModifyVirtualBridgeStatusRequest() = default ;
    ModifyVirtualBridgeStatusRequest(const ModifyVirtualBridgeStatusRequest &) = default ;
    ModifyVirtualBridgeStatusRequest(ModifyVirtualBridgeStatusRequest &&) = default ;
    ModifyVirtualBridgeStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyVirtualBridgeStatusRequest() = default ;
    ModifyVirtualBridgeStatusRequest& operator=(const ModifyVirtualBridgeStatusRequest &) = default ;
    ModifyVirtualBridgeStatusRequest& operator=(ModifyVirtualBridgeStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bridgeId_ == nullptr
        && this->regionId_ == nullptr && this->status_ == nullptr; };
    // bridgeId Field Functions 
    bool hasBridgeId() const { return this->bridgeId_ != nullptr;};
    void deleteBridgeId() { this->bridgeId_ = nullptr;};
    inline string getBridgeId() const { DARABONBA_PTR_GET_DEFAULT(bridgeId_, "") };
    inline ModifyVirtualBridgeStatusRequest& setBridgeId(string bridgeId) { DARABONBA_PTR_SET_VALUE(bridgeId_, bridgeId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyVirtualBridgeStatusRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ModifyVirtualBridgeStatusRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The virtual bridge ID.
    // 
    // This parameter is required.
    shared_ptr<string> bridgeId_ {};
    // The region ID. You can call [DescribeRegions](https://help.aliyun.com/document_detail/196646.html) to query the regions supported by Elastic Desktop Service.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The virtual bridge status.
    // 
    // This parameter is required.
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
