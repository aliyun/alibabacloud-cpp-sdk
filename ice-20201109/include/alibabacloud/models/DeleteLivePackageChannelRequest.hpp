// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETELIVEPACKAGECHANNELREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETELIVEPACKAGECHANNELREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class DeleteLivePackageChannelRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteLivePackageChannelRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ChannelName, channelName_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteLivePackageChannelRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ChannelName, channelName_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
    };
    DeleteLivePackageChannelRequest() = default ;
    DeleteLivePackageChannelRequest(const DeleteLivePackageChannelRequest &) = default ;
    DeleteLivePackageChannelRequest(DeleteLivePackageChannelRequest &&) = default ;
    DeleteLivePackageChannelRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteLivePackageChannelRequest() = default ;
    DeleteLivePackageChannelRequest& operator=(const DeleteLivePackageChannelRequest &) = default ;
    DeleteLivePackageChannelRequest& operator=(DeleteLivePackageChannelRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->channelName_ != nullptr
        && this->groupName_ != nullptr; };
    // channelName Field Functions 
    bool hasChannelName() const { return this->channelName_ != nullptr;};
    void deleteChannelName() { this->channelName_ = nullptr;};
    inline string channelName() const { DARABONBA_PTR_GET_DEFAULT(channelName_, "") };
    inline DeleteLivePackageChannelRequest& setChannelName(string channelName) { DARABONBA_PTR_SET_VALUE(channelName_, channelName) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline DeleteLivePackageChannelRequest& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


  protected:
    // The channel name.
    // 
    // This parameter is required.
    std::shared_ptr<string> channelName_ = nullptr;
    // The channel group name.
    // 
    // This parameter is required.
    std::shared_ptr<string> groupName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
