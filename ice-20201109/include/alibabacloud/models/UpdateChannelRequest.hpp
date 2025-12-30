// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECHANNELREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECHANNELREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class UpdateChannelRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateChannelRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccessPolicy, accessPolicy_);
      DARABONBA_PTR_TO_JSON(AccessToken, accessToken_);
      DARABONBA_PTR_TO_JSON(ChannelName, channelName_);
      DARABONBA_PTR_TO_JSON(FillerSourceLocationName, fillerSourceLocationName_);
      DARABONBA_PTR_TO_JSON(FillerSourceName, fillerSourceName_);
      DARABONBA_PTR_TO_JSON(OutPutConfigList, outPutConfigList_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateChannelRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessPolicy, accessPolicy_);
      DARABONBA_PTR_FROM_JSON(AccessToken, accessToken_);
      DARABONBA_PTR_FROM_JSON(ChannelName, channelName_);
      DARABONBA_PTR_FROM_JSON(FillerSourceLocationName, fillerSourceLocationName_);
      DARABONBA_PTR_FROM_JSON(FillerSourceName, fillerSourceName_);
      DARABONBA_PTR_FROM_JSON(OutPutConfigList, outPutConfigList_);
    };
    UpdateChannelRequest() = default ;
    UpdateChannelRequest(const UpdateChannelRequest &) = default ;
    UpdateChannelRequest(UpdateChannelRequest &&) = default ;
    UpdateChannelRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateChannelRequest() = default ;
    UpdateChannelRequest& operator=(const UpdateChannelRequest &) = default ;
    UpdateChannelRequest& operator=(UpdateChannelRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessPolicy_ == nullptr
        && this->accessToken_ == nullptr && this->channelName_ == nullptr && this->fillerSourceLocationName_ == nullptr && this->fillerSourceName_ == nullptr && this->outPutConfigList_ == nullptr; };
    // accessPolicy Field Functions 
    bool hasAccessPolicy() const { return this->accessPolicy_ != nullptr;};
    void deleteAccessPolicy() { this->accessPolicy_ = nullptr;};
    inline bool getAccessPolicy() const { DARABONBA_PTR_GET_DEFAULT(accessPolicy_, false) };
    inline UpdateChannelRequest& setAccessPolicy(bool accessPolicy) { DARABONBA_PTR_SET_VALUE(accessPolicy_, accessPolicy) };


    // accessToken Field Functions 
    bool hasAccessToken() const { return this->accessToken_ != nullptr;};
    void deleteAccessToken() { this->accessToken_ = nullptr;};
    inline string getAccessToken() const { DARABONBA_PTR_GET_DEFAULT(accessToken_, "") };
    inline UpdateChannelRequest& setAccessToken(string accessToken) { DARABONBA_PTR_SET_VALUE(accessToken_, accessToken) };


    // channelName Field Functions 
    bool hasChannelName() const { return this->channelName_ != nullptr;};
    void deleteChannelName() { this->channelName_ = nullptr;};
    inline string getChannelName() const { DARABONBA_PTR_GET_DEFAULT(channelName_, "") };
    inline UpdateChannelRequest& setChannelName(string channelName) { DARABONBA_PTR_SET_VALUE(channelName_, channelName) };


    // fillerSourceLocationName Field Functions 
    bool hasFillerSourceLocationName() const { return this->fillerSourceLocationName_ != nullptr;};
    void deleteFillerSourceLocationName() { this->fillerSourceLocationName_ = nullptr;};
    inline string getFillerSourceLocationName() const { DARABONBA_PTR_GET_DEFAULT(fillerSourceLocationName_, "") };
    inline UpdateChannelRequest& setFillerSourceLocationName(string fillerSourceLocationName) { DARABONBA_PTR_SET_VALUE(fillerSourceLocationName_, fillerSourceLocationName) };


    // fillerSourceName Field Functions 
    bool hasFillerSourceName() const { return this->fillerSourceName_ != nullptr;};
    void deleteFillerSourceName() { this->fillerSourceName_ = nullptr;};
    inline string getFillerSourceName() const { DARABONBA_PTR_GET_DEFAULT(fillerSourceName_, "") };
    inline UpdateChannelRequest& setFillerSourceName(string fillerSourceName) { DARABONBA_PTR_SET_VALUE(fillerSourceName_, fillerSourceName) };


    // outPutConfigList Field Functions 
    bool hasOutPutConfigList() const { return this->outPutConfigList_ != nullptr;};
    void deleteOutPutConfigList() { this->outPutConfigList_ = nullptr;};
    inline string getOutPutConfigList() const { DARABONBA_PTR_GET_DEFAULT(outPutConfigList_, "") };
    inline UpdateChannelRequest& setOutPutConfigList(string outPutConfigList) { DARABONBA_PTR_SET_VALUE(outPutConfigList_, outPutConfigList) };


  protected:
    // Specifies whether to enable access control.
    shared_ptr<bool> accessPolicy_ {};
    // The token for accessing the channel.
    shared_ptr<string> accessToken_ {};
    // The name of the channel.
    // 
    // This parameter is required.
    shared_ptr<string> channelName_ {};
    // The source location of the filler slate.
    shared_ptr<string> fillerSourceLocationName_ {};
    // The name of the filler slate.
    shared_ptr<string> fillerSourceName_ {};
    // The channel output configurations.
    // 
    // This parameter is required.
    shared_ptr<string> outPutConfigList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
