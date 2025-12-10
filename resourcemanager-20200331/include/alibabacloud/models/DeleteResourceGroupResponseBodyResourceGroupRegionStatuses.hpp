// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETERESOURCEGROUPRESPONSEBODYRESOURCEGROUPREGIONSTATUSES_HPP_
#define ALIBABACLOUD_MODELS_DELETERESOURCEGROUPRESPONSEBODYRESOURCEGROUPREGIONSTATUSES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DeleteResourceGroupResponseBodyResourceGroupRegionStatusesRegionStatus.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceManager20200331
{
namespace Models
{
  class DeleteResourceGroupResponseBodyResourceGroupRegionStatuses : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteResourceGroupResponseBodyResourceGroupRegionStatuses& obj) { 
      DARABONBA_PTR_TO_JSON(RegionStatus, regionStatus_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteResourceGroupResponseBodyResourceGroupRegionStatuses& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionStatus, regionStatus_);
    };
    DeleteResourceGroupResponseBodyResourceGroupRegionStatuses() = default ;
    DeleteResourceGroupResponseBodyResourceGroupRegionStatuses(const DeleteResourceGroupResponseBodyResourceGroupRegionStatuses &) = default ;
    DeleteResourceGroupResponseBodyResourceGroupRegionStatuses(DeleteResourceGroupResponseBodyResourceGroupRegionStatuses &&) = default ;
    DeleteResourceGroupResponseBodyResourceGroupRegionStatuses(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteResourceGroupResponseBodyResourceGroupRegionStatuses() = default ;
    DeleteResourceGroupResponseBodyResourceGroupRegionStatuses& operator=(const DeleteResourceGroupResponseBodyResourceGroupRegionStatuses &) = default ;
    DeleteResourceGroupResponseBodyResourceGroupRegionStatuses& operator=(DeleteResourceGroupResponseBodyResourceGroupRegionStatuses &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->regionStatus_ == nullptr; };
    // regionStatus Field Functions 
    bool hasRegionStatus() const { return this->regionStatus_ != nullptr;};
    void deleteRegionStatus() { this->regionStatus_ = nullptr;};
    inline const vector<Models::DeleteResourceGroupResponseBodyResourceGroupRegionStatusesRegionStatus> & regionStatus() const { DARABONBA_PTR_GET_CONST(regionStatus_, vector<Models::DeleteResourceGroupResponseBodyResourceGroupRegionStatusesRegionStatus>) };
    inline vector<Models::DeleteResourceGroupResponseBodyResourceGroupRegionStatusesRegionStatus> regionStatus() { DARABONBA_PTR_GET(regionStatus_, vector<Models::DeleteResourceGroupResponseBodyResourceGroupRegionStatusesRegionStatus>) };
    inline DeleteResourceGroupResponseBodyResourceGroupRegionStatuses& setRegionStatus(const vector<Models::DeleteResourceGroupResponseBodyResourceGroupRegionStatusesRegionStatus> & regionStatus) { DARABONBA_PTR_SET_VALUE(regionStatus_, regionStatus) };
    inline DeleteResourceGroupResponseBodyResourceGroupRegionStatuses& setRegionStatus(vector<Models::DeleteResourceGroupResponseBodyResourceGroupRegionStatusesRegionStatus> && regionStatus) { DARABONBA_PTR_SET_RVALUE(regionStatus_, regionStatus) };


  protected:
    std::shared_ptr<vector<Models::DeleteResourceGroupResponseBodyResourceGroupRegionStatusesRegionStatus>> regionStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceManager20200331
#endif
