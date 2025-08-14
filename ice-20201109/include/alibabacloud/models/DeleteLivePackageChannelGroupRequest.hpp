// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETELIVEPACKAGECHANNELGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETELIVEPACKAGECHANNELGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class DeleteLivePackageChannelGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteLivePackageChannelGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteLivePackageChannelGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
    };
    DeleteLivePackageChannelGroupRequest() = default ;
    DeleteLivePackageChannelGroupRequest(const DeleteLivePackageChannelGroupRequest &) = default ;
    DeleteLivePackageChannelGroupRequest(DeleteLivePackageChannelGroupRequest &&) = default ;
    DeleteLivePackageChannelGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteLivePackageChannelGroupRequest() = default ;
    DeleteLivePackageChannelGroupRequest& operator=(const DeleteLivePackageChannelGroupRequest &) = default ;
    DeleteLivePackageChannelGroupRequest& operator=(DeleteLivePackageChannelGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->groupName_ != nullptr; };
    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline DeleteLivePackageChannelGroupRequest& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


  protected:
    // The channel group name.
    // 
    // This parameter is required.
    std::shared_ptr<string> groupName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
