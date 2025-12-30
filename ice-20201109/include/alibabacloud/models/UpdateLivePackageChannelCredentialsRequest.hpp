// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATELIVEPACKAGECHANNELCREDENTIALSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATELIVEPACKAGECHANNELCREDENTIALSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class UpdateLivePackageChannelCredentialsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateLivePackageChannelCredentialsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ChannelName, channelName_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(RotateCredentials, rotateCredentials_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateLivePackageChannelCredentialsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ChannelName, channelName_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(RotateCredentials, rotateCredentials_);
    };
    UpdateLivePackageChannelCredentialsRequest() = default ;
    UpdateLivePackageChannelCredentialsRequest(const UpdateLivePackageChannelCredentialsRequest &) = default ;
    UpdateLivePackageChannelCredentialsRequest(UpdateLivePackageChannelCredentialsRequest &&) = default ;
    UpdateLivePackageChannelCredentialsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateLivePackageChannelCredentialsRequest() = default ;
    UpdateLivePackageChannelCredentialsRequest& operator=(const UpdateLivePackageChannelCredentialsRequest &) = default ;
    UpdateLivePackageChannelCredentialsRequest& operator=(UpdateLivePackageChannelCredentialsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->channelName_ == nullptr
        && this->groupName_ == nullptr && this->rotateCredentials_ == nullptr; };
    // channelName Field Functions 
    bool hasChannelName() const { return this->channelName_ != nullptr;};
    void deleteChannelName() { this->channelName_ = nullptr;};
    inline string getChannelName() const { DARABONBA_PTR_GET_DEFAULT(channelName_, "") };
    inline UpdateLivePackageChannelCredentialsRequest& setChannelName(string channelName) { DARABONBA_PTR_SET_VALUE(channelName_, channelName) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline UpdateLivePackageChannelCredentialsRequest& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // rotateCredentials Field Functions 
    bool hasRotateCredentials() const { return this->rotateCredentials_ != nullptr;};
    void deleteRotateCredentials() { this->rotateCredentials_ = nullptr;};
    inline int32_t getRotateCredentials() const { DARABONBA_PTR_GET_DEFAULT(rotateCredentials_, 0) };
    inline UpdateLivePackageChannelCredentialsRequest& setRotateCredentials(int32_t rotateCredentials) { DARABONBA_PTR_SET_VALUE(rotateCredentials_, rotateCredentials) };


  protected:
    // The channel name.
    // 
    // This parameter is required.
    shared_ptr<string> channelName_ {};
    // The channel group name.
    // 
    // This parameter is required.
    shared_ptr<string> groupName_ {};
    // Specifies whether to update the credentials. 1: updates the credentials of endpoint 1. 2: updates the credentials of endpoint 2. 3: updates the credentials of endpoints 1 and 2.
    // 
    // This parameter is required.
    shared_ptr<int32_t> rotateCredentials_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
