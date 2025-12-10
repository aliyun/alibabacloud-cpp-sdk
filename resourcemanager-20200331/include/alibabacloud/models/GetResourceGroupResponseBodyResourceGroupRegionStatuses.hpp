// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESOURCEGROUPRESPONSEBODYRESOURCEGROUPREGIONSTATUSES_HPP_
#define ALIBABACLOUD_MODELS_GETRESOURCEGROUPRESPONSEBODYRESOURCEGROUPREGIONSTATUSES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetResourceGroupResponseBodyResourceGroupRegionStatusesRegionStatus.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceManager20200331
{
namespace Models
{
  class GetResourceGroupResponseBodyResourceGroupRegionStatuses : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResourceGroupResponseBodyResourceGroupRegionStatuses& obj) { 
      DARABONBA_PTR_TO_JSON(RegionStatus, regionStatus_);
    };
    friend void from_json(const Darabonba::Json& j, GetResourceGroupResponseBodyResourceGroupRegionStatuses& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionStatus, regionStatus_);
    };
    GetResourceGroupResponseBodyResourceGroupRegionStatuses() = default ;
    GetResourceGroupResponseBodyResourceGroupRegionStatuses(const GetResourceGroupResponseBodyResourceGroupRegionStatuses &) = default ;
    GetResourceGroupResponseBodyResourceGroupRegionStatuses(GetResourceGroupResponseBodyResourceGroupRegionStatuses &&) = default ;
    GetResourceGroupResponseBodyResourceGroupRegionStatuses(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResourceGroupResponseBodyResourceGroupRegionStatuses() = default ;
    GetResourceGroupResponseBodyResourceGroupRegionStatuses& operator=(const GetResourceGroupResponseBodyResourceGroupRegionStatuses &) = default ;
    GetResourceGroupResponseBodyResourceGroupRegionStatuses& operator=(GetResourceGroupResponseBodyResourceGroupRegionStatuses &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->regionStatus_ == nullptr; };
    // regionStatus Field Functions 
    bool hasRegionStatus() const { return this->regionStatus_ != nullptr;};
    void deleteRegionStatus() { this->regionStatus_ = nullptr;};
    inline const vector<Models::GetResourceGroupResponseBodyResourceGroupRegionStatusesRegionStatus> & regionStatus() const { DARABONBA_PTR_GET_CONST(regionStatus_, vector<Models::GetResourceGroupResponseBodyResourceGroupRegionStatusesRegionStatus>) };
    inline vector<Models::GetResourceGroupResponseBodyResourceGroupRegionStatusesRegionStatus> regionStatus() { DARABONBA_PTR_GET(regionStatus_, vector<Models::GetResourceGroupResponseBodyResourceGroupRegionStatusesRegionStatus>) };
    inline GetResourceGroupResponseBodyResourceGroupRegionStatuses& setRegionStatus(const vector<Models::GetResourceGroupResponseBodyResourceGroupRegionStatusesRegionStatus> & regionStatus) { DARABONBA_PTR_SET_VALUE(regionStatus_, regionStatus) };
    inline GetResourceGroupResponseBodyResourceGroupRegionStatuses& setRegionStatus(vector<Models::GetResourceGroupResponseBodyResourceGroupRegionStatusesRegionStatus> && regionStatus) { DARABONBA_PTR_SET_RVALUE(regionStatus_, regionStatus) };


  protected:
    std::shared_ptr<vector<Models::GetResourceGroupResponseBodyResourceGroupRegionStatusesRegionStatus>> regionStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceManager20200331
#endif
