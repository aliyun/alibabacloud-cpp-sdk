// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETSYNCREFRESHREGIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETSYNCREFRESHREGIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class SetSyncRefreshRegionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetSyncRefreshRegionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DefaultRegion, defaultRegion_);
      DARABONBA_PTR_TO_JSON(RegionIds, regionIds_);
      DARABONBA_PTR_TO_JSON(Vendor, vendor_);
    };
    friend void from_json(const Darabonba::Json& j, SetSyncRefreshRegionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DefaultRegion, defaultRegion_);
      DARABONBA_PTR_FROM_JSON(RegionIds, regionIds_);
      DARABONBA_PTR_FROM_JSON(Vendor, vendor_);
    };
    SetSyncRefreshRegionRequest() = default ;
    SetSyncRefreshRegionRequest(const SetSyncRefreshRegionRequest &) = default ;
    SetSyncRefreshRegionRequest(SetSyncRefreshRegionRequest &&) = default ;
    SetSyncRefreshRegionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetSyncRefreshRegionRequest() = default ;
    SetSyncRefreshRegionRequest& operator=(const SetSyncRefreshRegionRequest &) = default ;
    SetSyncRefreshRegionRequest& operator=(SetSyncRefreshRegionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->defaultRegion_ == nullptr
        && return this->regionIds_ == nullptr && return this->vendor_ == nullptr; };
    // defaultRegion Field Functions 
    bool hasDefaultRegion() const { return this->defaultRegion_ != nullptr;};
    void deleteDefaultRegion() { this->defaultRegion_ = nullptr;};
    inline int32_t defaultRegion() const { DARABONBA_PTR_GET_DEFAULT(defaultRegion_, 0) };
    inline SetSyncRefreshRegionRequest& setDefaultRegion(int32_t defaultRegion) { DARABONBA_PTR_SET_VALUE(defaultRegion_, defaultRegion) };


    // regionIds Field Functions 
    bool hasRegionIds() const { return this->regionIds_ != nullptr;};
    void deleteRegionIds() { this->regionIds_ = nullptr;};
    inline const vector<string> & regionIds() const { DARABONBA_PTR_GET_CONST(regionIds_, vector<string>) };
    inline vector<string> regionIds() { DARABONBA_PTR_GET(regionIds_, vector<string>) };
    inline SetSyncRefreshRegionRequest& setRegionIds(const vector<string> & regionIds) { DARABONBA_PTR_SET_VALUE(regionIds_, regionIds) };
    inline SetSyncRefreshRegionRequest& setRegionIds(vector<string> && regionIds) { DARABONBA_PTR_SET_RVALUE(regionIds_, regionIds) };


    // vendor Field Functions 
    bool hasVendor() const { return this->vendor_ != nullptr;};
    void deleteVendor() { this->vendor_ = nullptr;};
    inline string vendor() const { DARABONBA_PTR_GET_DEFAULT(vendor_, "") };
    inline SetSyncRefreshRegionRequest& setVendor(string vendor) { DARABONBA_PTR_SET_VALUE(vendor_, vendor) };


  protected:
    // The access type of the multi-cloud site. Valid values:
    // 
    // *   **0**: The current site is not the default site of multi-cloud site. You can specify the current site as the default site of the multi-cloud site.
    // *   **1**: The current site is the default site of multi-cloud site.
    std::shared_ptr<int32_t> defaultRegion_ = nullptr;
    // The regions from which you want to synchronize assets at the current site.
    std::shared_ptr<vector<string>> regionIds_ = nullptr;
    // The cloud service provider. Valid values:
    // 
    // *   **Tencent**: Tencent Cloud
    // *   **HUAWEICLOUD**: Huawei Cloud
    // *   **Azure**: Microsoft Azure
    // *   **AWS**: Amazon Web Services (AWS)
    std::shared_ptr<string> vendor_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
