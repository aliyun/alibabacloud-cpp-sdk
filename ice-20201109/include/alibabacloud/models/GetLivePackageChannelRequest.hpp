// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLIVEPACKAGECHANNELREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETLIVEPACKAGECHANNELREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetLivePackageChannelRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLivePackageChannelRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ChannelName, channelName_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
    };
    friend void from_json(const Darabonba::Json& j, GetLivePackageChannelRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ChannelName, channelName_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
    };
    GetLivePackageChannelRequest() = default ;
    GetLivePackageChannelRequest(const GetLivePackageChannelRequest &) = default ;
    GetLivePackageChannelRequest(GetLivePackageChannelRequest &&) = default ;
    GetLivePackageChannelRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLivePackageChannelRequest() = default ;
    GetLivePackageChannelRequest& operator=(const GetLivePackageChannelRequest &) = default ;
    GetLivePackageChannelRequest& operator=(GetLivePackageChannelRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->channelName_ == nullptr
        && this->groupName_ == nullptr; };
    // channelName Field Functions 
    bool hasChannelName() const { return this->channelName_ != nullptr;};
    void deleteChannelName() { this->channelName_ = nullptr;};
    inline string getChannelName() const { DARABONBA_PTR_GET_DEFAULT(channelName_, "") };
    inline GetLivePackageChannelRequest& setChannelName(string channelName) { DARABONBA_PTR_SET_VALUE(channelName_, channelName) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline GetLivePackageChannelRequest& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


  protected:
    // The channel name.
    // 
    // This parameter is required.
    shared_ptr<string> channelName_ {};
    // The channel group name.
    // 
    // This parameter is required.
    shared_ptr<string> groupName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
