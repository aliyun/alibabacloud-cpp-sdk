// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETESTACKGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETESTACKGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class DeleteStackGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteStackGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(StackGroupName, stackGroupName_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteStackGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(StackGroupName, stackGroupName_);
    };
    DeleteStackGroupRequest() = default ;
    DeleteStackGroupRequest(const DeleteStackGroupRequest &) = default ;
    DeleteStackGroupRequest(DeleteStackGroupRequest &&) = default ;
    DeleteStackGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteStackGroupRequest() = default ;
    DeleteStackGroupRequest& operator=(const DeleteStackGroupRequest &) = default ;
    DeleteStackGroupRequest& operator=(DeleteStackGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->regionId_ != nullptr
        && this->stackGroupName_ != nullptr; };
    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteStackGroupRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // stackGroupName Field Functions 
    bool hasStackGroupName() const { return this->stackGroupName_ != nullptr;};
    void deleteStackGroupName() { this->stackGroupName_ = nullptr;};
    inline string stackGroupName() const { DARABONBA_PTR_GET_DEFAULT(stackGroupName_, "") };
    inline DeleteStackGroupRequest& setStackGroupName(string stackGroupName) { DARABONBA_PTR_SET_VALUE(stackGroupName_, stackGroupName) };


  protected:
    // The ID of the region to which the stack group belongs. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/131035.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The name of the stack group. The name must be unique in a region.
    // 
    // The name can be up to 255 characters in length and can contain digits, letters, hyphens (-), and underscores (_). The name must start with a digit or a letter.
    // 
    // This parameter is required.
    std::shared_ptr<string> stackGroupName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
