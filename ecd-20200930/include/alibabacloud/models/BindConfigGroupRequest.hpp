// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BINDCONFIGGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BINDCONFIGGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/BindConfigGroupRequestResourceInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class BindConfigGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BindConfigGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceInfos, resourceInfos_);
    };
    friend void from_json(const Darabonba::Json& j, BindConfigGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceInfos, resourceInfos_);
    };
    BindConfigGroupRequest() = default ;
    BindConfigGroupRequest(const BindConfigGroupRequest &) = default ;
    BindConfigGroupRequest(BindConfigGroupRequest &&) = default ;
    BindConfigGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BindConfigGroupRequest() = default ;
    BindConfigGroupRequest& operator=(const BindConfigGroupRequest &) = default ;
    BindConfigGroupRequest& operator=(BindConfigGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->groupId_ != nullptr
        && this->regionId_ != nullptr && this->resourceInfos_ != nullptr; };
    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline BindConfigGroupRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline BindConfigGroupRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceInfos Field Functions 
    bool hasResourceInfos() const { return this->resourceInfos_ != nullptr;};
    void deleteResourceInfos() { this->resourceInfos_ = nullptr;};
    inline const vector<BindConfigGroupRequestResourceInfos> & resourceInfos() const { DARABONBA_PTR_GET_CONST(resourceInfos_, vector<BindConfigGroupRequestResourceInfos>) };
    inline vector<BindConfigGroupRequestResourceInfos> resourceInfos() { DARABONBA_PTR_GET(resourceInfos_, vector<BindConfigGroupRequestResourceInfos>) };
    inline BindConfigGroupRequest& setResourceInfos(const vector<BindConfigGroupRequestResourceInfos> & resourceInfos) { DARABONBA_PTR_SET_VALUE(resourceInfos_, resourceInfos) };
    inline BindConfigGroupRequest& setResourceInfos(vector<BindConfigGroupRequestResourceInfos> && resourceInfos) { DARABONBA_PTR_SET_RVALUE(resourceInfos_, resourceInfos) };


  protected:
    // The ID of the configuration group.
    // 
    // This parameter is required.
    std::shared_ptr<string> groupId_ = nullptr;
    // The ID of the region. Set the value to `cn-shanghai`.
    std::shared_ptr<string> regionId_ = nullptr;
    // The resources to which you want to bind the configuration group.
    // 
    // This parameter is required.
    std::shared_ptr<vector<BindConfigGroupRequestResourceInfos>> resourceInfos_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
