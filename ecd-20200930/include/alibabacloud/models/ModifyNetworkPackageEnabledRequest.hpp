// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYNETWORKPACKAGEENABLEDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYNETWORKPACKAGEENABLEDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class ModifyNetworkPackageEnabledRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyNetworkPackageEnabledRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Enabled, enabled_);
      DARABONBA_PTR_TO_JSON(NetworkPackageId, networkPackageId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyNetworkPackageEnabledRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(NetworkPackageId, networkPackageId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ModifyNetworkPackageEnabledRequest() = default ;
    ModifyNetworkPackageEnabledRequest(const ModifyNetworkPackageEnabledRequest &) = default ;
    ModifyNetworkPackageEnabledRequest(ModifyNetworkPackageEnabledRequest &&) = default ;
    ModifyNetworkPackageEnabledRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyNetworkPackageEnabledRequest() = default ;
    ModifyNetworkPackageEnabledRequest& operator=(const ModifyNetworkPackageEnabledRequest &) = default ;
    ModifyNetworkPackageEnabledRequest& operator=(ModifyNetworkPackageEnabledRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->enabled_ == nullptr
        && return this->networkPackageId_ == nullptr && return this->regionId_ == nullptr; };
    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool enabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline ModifyNetworkPackageEnabledRequest& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // networkPackageId Field Functions 
    bool hasNetworkPackageId() const { return this->networkPackageId_ != nullptr;};
    void deleteNetworkPackageId() { this->networkPackageId_ = nullptr;};
    inline string networkPackageId() const { DARABONBA_PTR_GET_DEFAULT(networkPackageId_, "") };
    inline ModifyNetworkPackageEnabledRequest& setNetworkPackageId(string networkPackageId) { DARABONBA_PTR_SET_VALUE(networkPackageId_, networkPackageId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyNetworkPackageEnabledRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // Specifies whether to restore the premium bandwidth plan of the cloud computer.
    // 
    // Valid values:
    // 
    // *   true
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   false
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    std::shared_ptr<bool> enabled_ = nullptr;
    // The ID of the premium bandwidth plan.
    // 
    // This parameter is required.
    std::shared_ptr<string> networkPackageId_ = nullptr;
    // The region ID. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/196646.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
