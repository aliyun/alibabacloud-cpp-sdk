// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STOPDESKTOPSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STOPDESKTOPSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class StopDesktopsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StopDesktopsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DesktopId, desktopId_);
      DARABONBA_PTR_TO_JSON(OsUpdate, osUpdate_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(StoppedMode, stoppedMode_);
    };
    friend void from_json(const Darabonba::Json& j, StopDesktopsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DesktopId, desktopId_);
      DARABONBA_PTR_FROM_JSON(OsUpdate, osUpdate_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(StoppedMode, stoppedMode_);
    };
    StopDesktopsRequest() = default ;
    StopDesktopsRequest(const StopDesktopsRequest &) = default ;
    StopDesktopsRequest(StopDesktopsRequest &&) = default ;
    StopDesktopsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StopDesktopsRequest() = default ;
    StopDesktopsRequest& operator=(const StopDesktopsRequest &) = default ;
    StopDesktopsRequest& operator=(StopDesktopsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->desktopId_ == nullptr
        && return this->osUpdate_ == nullptr && return this->regionId_ == nullptr && return this->stoppedMode_ == nullptr; };
    // desktopId Field Functions 
    bool hasDesktopId() const { return this->desktopId_ != nullptr;};
    void deleteDesktopId() { this->desktopId_ = nullptr;};
    inline const vector<string> & desktopId() const { DARABONBA_PTR_GET_CONST(desktopId_, vector<string>) };
    inline vector<string> desktopId() { DARABONBA_PTR_GET(desktopId_, vector<string>) };
    inline StopDesktopsRequest& setDesktopId(const vector<string> & desktopId) { DARABONBA_PTR_SET_VALUE(desktopId_, desktopId) };
    inline StopDesktopsRequest& setDesktopId(vector<string> && desktopId) { DARABONBA_PTR_SET_RVALUE(desktopId_, desktopId) };


    // osUpdate Field Functions 
    bool hasOsUpdate() const { return this->osUpdate_ != nullptr;};
    void deleteOsUpdate() { this->osUpdate_ = nullptr;};
    inline bool osUpdate() const { DARABONBA_PTR_GET_DEFAULT(osUpdate_, false) };
    inline StopDesktopsRequest& setOsUpdate(bool osUpdate) { DARABONBA_PTR_SET_VALUE(osUpdate_, osUpdate) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline StopDesktopsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // stoppedMode Field Functions 
    bool hasStoppedMode() const { return this->stoppedMode_ != nullptr;};
    void deleteStoppedMode() { this->stoppedMode_ = nullptr;};
    inline string stoppedMode() const { DARABONBA_PTR_GET_DEFAULT(stoppedMode_, "") };
    inline StopDesktopsRequest& setStoppedMode(string stoppedMode) { DARABONBA_PTR_SET_VALUE(stoppedMode_, stoppedMode) };


  protected:
    // The cloud computer IDs. You can specify the IDs of 1 to 100 cloud computers.
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> desktopId_ = nullptr;
    // Whether to perform a patch update when the update is ready. A value of true indicates that a patch update is performed.
    std::shared_ptr<bool> osUpdate_ = nullptr;
    // The region ID. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/196646.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The billing mode after you stop the cloud computer.
    // 
    // Default value: StopCharging. Valid values:
    // 
    // *   StopCharging: After the cloud computer is stopped, the system automatically reclaims computing resources. You are no longer charged for computing resources. However, you are still charged for storage resources.
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   KeepCharging: After the cloud computer is stopped, the system does not reclaim resources to prevent insufficient resources and startup failures. You are still charged for the resources.
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    std::shared_ptr<string> stoppedMode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
