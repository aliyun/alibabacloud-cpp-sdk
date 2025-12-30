// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETECONFIGGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETECONFIGGROUPREQUEST_HPP_
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
  class DeleteConfigGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteConfigGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(GroupIds, groupIds_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteConfigGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupIds, groupIds_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DeleteConfigGroupRequest() = default ;
    DeleteConfigGroupRequest(const DeleteConfigGroupRequest &) = default ;
    DeleteConfigGroupRequest(DeleteConfigGroupRequest &&) = default ;
    DeleteConfigGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteConfigGroupRequest() = default ;
    DeleteConfigGroupRequest& operator=(const DeleteConfigGroupRequest &) = default ;
    DeleteConfigGroupRequest& operator=(DeleteConfigGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->groupIds_ == nullptr
        && this->regionId_ == nullptr; };
    // groupIds Field Functions 
    bool hasGroupIds() const { return this->groupIds_ != nullptr;};
    void deleteGroupIds() { this->groupIds_ = nullptr;};
    inline const vector<string> & getGroupIds() const { DARABONBA_PTR_GET_CONST(groupIds_, vector<string>) };
    inline vector<string> getGroupIds() { DARABONBA_PTR_GET(groupIds_, vector<string>) };
    inline DeleteConfigGroupRequest& setGroupIds(const vector<string> & groupIds) { DARABONBA_PTR_SET_VALUE(groupIds_, groupIds) };
    inline DeleteConfigGroupRequest& setGroupIds(vector<string> && groupIds) { DARABONBA_PTR_SET_RVALUE(groupIds_, groupIds) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteConfigGroupRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The IDs of the configuration groups that you want to delete.
    shared_ptr<vector<string>> groupIds_ {};
    // The ID of the region. Set the value to `cn-shanghai`.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
