// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMEDIALIVECHANNELREQUESTOUTPUTGROUPSMEDIAPACKAGEGROUPSETTING_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMEDIALIVECHANNELREQUESTOUTPUTGROUPSMEDIAPACKAGEGROUPSETTING_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class UpdateMediaLiveChannelRequestOutputGroupsMediaPackageGroupSetting : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateMediaLiveChannelRequestOutputGroupsMediaPackageGroupSetting& obj) { 
      DARABONBA_PTR_TO_JSON(ChannelName, channelName_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateMediaLiveChannelRequestOutputGroupsMediaPackageGroupSetting& obj) { 
      DARABONBA_PTR_FROM_JSON(ChannelName, channelName_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
    };
    UpdateMediaLiveChannelRequestOutputGroupsMediaPackageGroupSetting() = default ;
    UpdateMediaLiveChannelRequestOutputGroupsMediaPackageGroupSetting(const UpdateMediaLiveChannelRequestOutputGroupsMediaPackageGroupSetting &) = default ;
    UpdateMediaLiveChannelRequestOutputGroupsMediaPackageGroupSetting(UpdateMediaLiveChannelRequestOutputGroupsMediaPackageGroupSetting &&) = default ;
    UpdateMediaLiveChannelRequestOutputGroupsMediaPackageGroupSetting(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateMediaLiveChannelRequestOutputGroupsMediaPackageGroupSetting() = default ;
    UpdateMediaLiveChannelRequestOutputGroupsMediaPackageGroupSetting& operator=(const UpdateMediaLiveChannelRequestOutputGroupsMediaPackageGroupSetting &) = default ;
    UpdateMediaLiveChannelRequestOutputGroupsMediaPackageGroupSetting& operator=(UpdateMediaLiveChannelRequestOutputGroupsMediaPackageGroupSetting &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->channelName_ == nullptr
        && return this->groupName_ == nullptr; };
    // channelName Field Functions 
    bool hasChannelName() const { return this->channelName_ != nullptr;};
    void deleteChannelName() { this->channelName_ = nullptr;};
    inline string channelName() const { DARABONBA_PTR_GET_DEFAULT(channelName_, "") };
    inline UpdateMediaLiveChannelRequestOutputGroupsMediaPackageGroupSetting& setChannelName(string channelName) { DARABONBA_PTR_SET_VALUE(channelName_, channelName) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline UpdateMediaLiveChannelRequestOutputGroupsMediaPackageGroupSetting& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


  protected:
    // ChannelName in MediaPackage.
    // 
    // This parameter is required.
    std::shared_ptr<string> channelName_ = nullptr;
    // GroupName in MediaPackage.
    // 
    // This parameter is required.
    std::shared_ptr<string> groupName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
