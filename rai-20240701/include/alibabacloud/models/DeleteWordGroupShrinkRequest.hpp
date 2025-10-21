// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEWORDGROUPSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEWORDGROUPSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RAI20240701
{
namespace Models
{
  class DeleteWordGroupShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteWordGroupShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(GroupIdList, groupIdListShrink_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteWordGroupShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupIdList, groupIdListShrink_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DeleteWordGroupShrinkRequest() = default ;
    DeleteWordGroupShrinkRequest(const DeleteWordGroupShrinkRequest &) = default ;
    DeleteWordGroupShrinkRequest(DeleteWordGroupShrinkRequest &&) = default ;
    DeleteWordGroupShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteWordGroupShrinkRequest() = default ;
    DeleteWordGroupShrinkRequest& operator=(const DeleteWordGroupShrinkRequest &) = default ;
    DeleteWordGroupShrinkRequest& operator=(DeleteWordGroupShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->groupIdListShrink_ == nullptr
        && return this->regionId_ == nullptr; };
    // groupIdListShrink Field Functions 
    bool hasGroupIdListShrink() const { return this->groupIdListShrink_ != nullptr;};
    void deleteGroupIdListShrink() { this->groupIdListShrink_ = nullptr;};
    inline string groupIdListShrink() const { DARABONBA_PTR_GET_DEFAULT(groupIdListShrink_, "") };
    inline DeleteWordGroupShrinkRequest& setGroupIdListShrink(string groupIdListShrink) { DARABONBA_PTR_SET_VALUE(groupIdListShrink_, groupIdListShrink) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteWordGroupShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // List of keyword strategy IDs.
    std::shared_ptr<string> groupIdListShrink_ = nullptr;
    // Region ID.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RAI20240701
#endif
