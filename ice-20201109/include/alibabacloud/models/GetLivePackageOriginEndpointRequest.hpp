// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLIVEPACKAGEORIGINENDPOINTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETLIVEPACKAGEORIGINENDPOINTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetLivePackageOriginEndpointRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLivePackageOriginEndpointRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ChannelName, channelName_);
      DARABONBA_PTR_TO_JSON(EndpointName, endpointName_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
    };
    friend void from_json(const Darabonba::Json& j, GetLivePackageOriginEndpointRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ChannelName, channelName_);
      DARABONBA_PTR_FROM_JSON(EndpointName, endpointName_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
    };
    GetLivePackageOriginEndpointRequest() = default ;
    GetLivePackageOriginEndpointRequest(const GetLivePackageOriginEndpointRequest &) = default ;
    GetLivePackageOriginEndpointRequest(GetLivePackageOriginEndpointRequest &&) = default ;
    GetLivePackageOriginEndpointRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLivePackageOriginEndpointRequest() = default ;
    GetLivePackageOriginEndpointRequest& operator=(const GetLivePackageOriginEndpointRequest &) = default ;
    GetLivePackageOriginEndpointRequest& operator=(GetLivePackageOriginEndpointRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->channelName_ == nullptr
        && this->endpointName_ == nullptr && this->groupName_ == nullptr; };
    // channelName Field Functions 
    bool hasChannelName() const { return this->channelName_ != nullptr;};
    void deleteChannelName() { this->channelName_ = nullptr;};
    inline string getChannelName() const { DARABONBA_PTR_GET_DEFAULT(channelName_, "") };
    inline GetLivePackageOriginEndpointRequest& setChannelName(string channelName) { DARABONBA_PTR_SET_VALUE(channelName_, channelName) };


    // endpointName Field Functions 
    bool hasEndpointName() const { return this->endpointName_ != nullptr;};
    void deleteEndpointName() { this->endpointName_ = nullptr;};
    inline string getEndpointName() const { DARABONBA_PTR_GET_DEFAULT(endpointName_, "") };
    inline GetLivePackageOriginEndpointRequest& setEndpointName(string endpointName) { DARABONBA_PTR_SET_VALUE(endpointName_, endpointName) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline GetLivePackageOriginEndpointRequest& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


  protected:
    // The channel name.
    // 
    // This parameter is required.
    shared_ptr<string> channelName_ {};
    // The endpoint name.
    // 
    // This parameter is required.
    shared_ptr<string> endpointName_ {};
    // The channel group name.
    // 
    // This parameter is required.
    shared_ptr<string> groupName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
