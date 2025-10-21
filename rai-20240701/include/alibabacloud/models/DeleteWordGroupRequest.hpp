// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEWORDGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEWORDGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RAI20240701
{
namespace Models
{
  class DeleteWordGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteWordGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(GroupIdList, groupIdList_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteWordGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupIdList, groupIdList_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DeleteWordGroupRequest() = default ;
    DeleteWordGroupRequest(const DeleteWordGroupRequest &) = default ;
    DeleteWordGroupRequest(DeleteWordGroupRequest &&) = default ;
    DeleteWordGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteWordGroupRequest() = default ;
    DeleteWordGroupRequest& operator=(const DeleteWordGroupRequest &) = default ;
    DeleteWordGroupRequest& operator=(DeleteWordGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->groupIdList_ == nullptr
        && return this->regionId_ == nullptr; };
    // groupIdList Field Functions 
    bool hasGroupIdList() const { return this->groupIdList_ != nullptr;};
    void deleteGroupIdList() { this->groupIdList_ = nullptr;};
    inline const vector<int64_t> & groupIdList() const { DARABONBA_PTR_GET_CONST(groupIdList_, vector<int64_t>) };
    inline vector<int64_t> groupIdList() { DARABONBA_PTR_GET(groupIdList_, vector<int64_t>) };
    inline DeleteWordGroupRequest& setGroupIdList(const vector<int64_t> & groupIdList) { DARABONBA_PTR_SET_VALUE(groupIdList_, groupIdList) };
    inline DeleteWordGroupRequest& setGroupIdList(vector<int64_t> && groupIdList) { DARABONBA_PTR_SET_RVALUE(groupIdList_, groupIdList) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteWordGroupRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // List of keyword strategy IDs.
    std::shared_ptr<vector<int64_t>> groupIdList_ = nullptr;
    // Region ID.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RAI20240701
#endif
