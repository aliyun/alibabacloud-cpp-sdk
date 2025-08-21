// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCODEENHANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETCODEENHANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetCodeEnhanceRequestChannelInfo.hpp>
#include <alibabacloud/models/GetCodeEnhanceRequestUserInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class GetCodeEnhanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCodeEnhanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ChannelInfo, channelInfo_);
      DARABONBA_PTR_TO_JSON(UserInfo, userInfo_);
    };
    friend void from_json(const Darabonba::Json& j, GetCodeEnhanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ChannelInfo, channelInfo_);
      DARABONBA_PTR_FROM_JSON(UserInfo, userInfo_);
    };
    GetCodeEnhanceRequest() = default ;
    GetCodeEnhanceRequest(const GetCodeEnhanceRequest &) = default ;
    GetCodeEnhanceRequest(GetCodeEnhanceRequest &&) = default ;
    GetCodeEnhanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCodeEnhanceRequest() = default ;
    GetCodeEnhanceRequest& operator=(const GetCodeEnhanceRequest &) = default ;
    GetCodeEnhanceRequest& operator=(GetCodeEnhanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->channelInfo_ != nullptr
        && this->userInfo_ != nullptr; };
    // channelInfo Field Functions 
    bool hasChannelInfo() const { return this->channelInfo_ != nullptr;};
    void deleteChannelInfo() { this->channelInfo_ = nullptr;};
    inline const GetCodeEnhanceRequestChannelInfo & channelInfo() const { DARABONBA_PTR_GET_CONST(channelInfo_, GetCodeEnhanceRequestChannelInfo) };
    inline GetCodeEnhanceRequestChannelInfo channelInfo() { DARABONBA_PTR_GET(channelInfo_, GetCodeEnhanceRequestChannelInfo) };
    inline GetCodeEnhanceRequest& setChannelInfo(const GetCodeEnhanceRequestChannelInfo & channelInfo) { DARABONBA_PTR_SET_VALUE(channelInfo_, channelInfo) };
    inline GetCodeEnhanceRequest& setChannelInfo(GetCodeEnhanceRequestChannelInfo && channelInfo) { DARABONBA_PTR_SET_RVALUE(channelInfo_, channelInfo) };


    // userInfo Field Functions 
    bool hasUserInfo() const { return this->userInfo_ != nullptr;};
    void deleteUserInfo() { this->userInfo_ = nullptr;};
    inline const GetCodeEnhanceRequestUserInfo & userInfo() const { DARABONBA_PTR_GET_CONST(userInfo_, GetCodeEnhanceRequestUserInfo) };
    inline GetCodeEnhanceRequestUserInfo userInfo() { DARABONBA_PTR_GET(userInfo_, GetCodeEnhanceRequestUserInfo) };
    inline GetCodeEnhanceRequest& setUserInfo(const GetCodeEnhanceRequestUserInfo & userInfo) { DARABONBA_PTR_SET_VALUE(userInfo_, userInfo) };
    inline GetCodeEnhanceRequest& setUserInfo(GetCodeEnhanceRequestUserInfo && userInfo) { DARABONBA_PTR_SET_RVALUE(userInfo_, userInfo) };


  protected:
    // This parameter is required.
    std::shared_ptr<GetCodeEnhanceRequestChannelInfo> channelInfo_ = nullptr;
    // This parameter is required.
    std::shared_ptr<GetCodeEnhanceRequestUserInfo> userInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
