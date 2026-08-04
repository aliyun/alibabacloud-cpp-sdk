// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDEVICEBYUSERIDANDCHANELREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTDEVICEBYUSERIDANDCHANELREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class ListDeviceByUserIdAndChanelRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDeviceByUserIdAndChanelRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ChannelInfo, channelInfo_);
      DARABONBA_PTR_TO_JSON(UserInfo, userInfo_);
    };
    friend void from_json(const Darabonba::Json& j, ListDeviceByUserIdAndChanelRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ChannelInfo, channelInfo_);
      DARABONBA_PTR_FROM_JSON(UserInfo, userInfo_);
    };
    ListDeviceByUserIdAndChanelRequest() = default ;
    ListDeviceByUserIdAndChanelRequest(const ListDeviceByUserIdAndChanelRequest &) = default ;
    ListDeviceByUserIdAndChanelRequest(ListDeviceByUserIdAndChanelRequest &&) = default ;
    ListDeviceByUserIdAndChanelRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDeviceByUserIdAndChanelRequest() = default ;
    ListDeviceByUserIdAndChanelRequest& operator=(const ListDeviceByUserIdAndChanelRequest &) = default ;
    ListDeviceByUserIdAndChanelRequest& operator=(ListDeviceByUserIdAndChanelRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UserInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UserInfo& obj) { 
        DARABONBA_PTR_TO_JSON(EncodeKey, encodeKey_);
        DARABONBA_PTR_TO_JSON(EncodeType, encodeType_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(IdType, idType_);
        DARABONBA_PTR_TO_JSON(OrganizationId, organizationId_);
      };
      friend void from_json(const Darabonba::Json& j, UserInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(EncodeKey, encodeKey_);
        DARABONBA_PTR_FROM_JSON(EncodeType, encodeType_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(IdType, idType_);
        DARABONBA_PTR_FROM_JSON(OrganizationId, organizationId_);
      };
      UserInfo() = default ;
      UserInfo(const UserInfo &) = default ;
      UserInfo(UserInfo &&) = default ;
      UserInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UserInfo() = default ;
      UserInfo& operator=(const UserInfo &) = default ;
      UserInfo& operator=(UserInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->encodeKey_ == nullptr
        && this->encodeType_ == nullptr && this->id_ == nullptr && this->idType_ == nullptr && this->organizationId_ == nullptr; };
      // encodeKey Field Functions 
      bool hasEncodeKey() const { return this->encodeKey_ != nullptr;};
      void deleteEncodeKey() { this->encodeKey_ = nullptr;};
      inline string getEncodeKey() const { DARABONBA_PTR_GET_DEFAULT(encodeKey_, "") };
      inline UserInfo& setEncodeKey(string encodeKey) { DARABONBA_PTR_SET_VALUE(encodeKey_, encodeKey) };


      // encodeType Field Functions 
      bool hasEncodeType() const { return this->encodeType_ != nullptr;};
      void deleteEncodeType() { this->encodeType_ = nullptr;};
      inline string getEncodeType() const { DARABONBA_PTR_GET_DEFAULT(encodeType_, "") };
      inline UserInfo& setEncodeType(string encodeType) { DARABONBA_PTR_SET_VALUE(encodeType_, encodeType) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline UserInfo& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // idType Field Functions 
      bool hasIdType() const { return this->idType_ != nullptr;};
      void deleteIdType() { this->idType_ = nullptr;};
      inline string getIdType() const { DARABONBA_PTR_GET_DEFAULT(idType_, "") };
      inline UserInfo& setIdType(string idType) { DARABONBA_PTR_SET_VALUE(idType_, idType) };


      // organizationId Field Functions 
      bool hasOrganizationId() const { return this->organizationId_ != nullptr;};
      void deleteOrganizationId() { this->organizationId_ = nullptr;};
      inline string getOrganizationId() const { DARABONBA_PTR_GET_DEFAULT(organizationId_, "") };
      inline UserInfo& setOrganizationId(string organizationId) { DARABONBA_PTR_SET_VALUE(organizationId_, organizationId) };


    protected:
      // The value corresponding to the encoding type; enter the Project ID of the project to which the product belongs. You can view this in the Tmall Genie AI platform console.
      // 
      // This parameter is required.
      shared_ptr<string> encodeKey_ {};
      // Encoding Type; enter PROJECT_ID here.
      // 
      // This parameter is required.
      shared_ptr<string> encodeType_ {};
      // User Identifier; enter the value of userOpenId or userUnionId.
      // 
      // This parameter is required.
      shared_ptr<string> id_ {};
      // The Type of the User ID:  
      // OPEN_ID: The default User ID identity.  
      // UNION_ID: The User ID identity at the organization dimension, which requires you to request an organization in advance on the Open Platform.
      // 
      // This parameter is required.
      shared_ptr<string> idType_ {};
      // Organization ID; required if IdType is UNION_ID.
      shared_ptr<string> organizationId_ {};
    };

    class ChannelInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ChannelInfo& obj) { 
        DARABONBA_PTR_TO_JSON(Channel, channel_);
        DARABONBA_PTR_TO_JSON(ExtInfo, extInfo_);
      };
      friend void from_json(const Darabonba::Json& j, ChannelInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(Channel, channel_);
        DARABONBA_PTR_FROM_JSON(ExtInfo, extInfo_);
      };
      ChannelInfo() = default ;
      ChannelInfo(const ChannelInfo &) = default ;
      ChannelInfo(ChannelInfo &&) = default ;
      ChannelInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ChannelInfo() = default ;
      ChannelInfo& operator=(const ChannelInfo &) = default ;
      ChannelInfo& operator=(ChannelInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->channel_ == nullptr
        && this->extInfo_ == nullptr; };
      // channel Field Functions 
      bool hasChannel() const { return this->channel_ != nullptr;};
      void deleteChannel() { this->channel_ = nullptr;};
      inline string getChannel() const { DARABONBA_PTR_GET_DEFAULT(channel_, "") };
      inline ChannelInfo& setChannel(string channel) { DARABONBA_PTR_SET_VALUE(channel_, channel) };


      // extInfo Field Functions 
      bool hasExtInfo() const { return this->extInfo_ != nullptr;};
      void deleteExtInfo() { this->extInfo_ = nullptr;};
      inline string getExtInfo() const { DARABONBA_PTR_GET_DEFAULT(extInfo_, "") };
      inline ChannelInfo& setExtInfo(string extInfo) { DARABONBA_PTR_SET_VALUE(extInfo_, extInfo) };


    protected:
      // Activation provisioning channel, such as WeChat or ThirdApp.
      // 
      // This parameter is required.
      shared_ptr<string> channel_ {};
      // Extension information.
      shared_ptr<string> extInfo_ {};
    };

    virtual bool empty() const override { return this->channelInfo_ == nullptr
        && this->userInfo_ == nullptr; };
    // channelInfo Field Functions 
    bool hasChannelInfo() const { return this->channelInfo_ != nullptr;};
    void deleteChannelInfo() { this->channelInfo_ = nullptr;};
    inline const ListDeviceByUserIdAndChanelRequest::ChannelInfo & getChannelInfo() const { DARABONBA_PTR_GET_CONST(channelInfo_, ListDeviceByUserIdAndChanelRequest::ChannelInfo) };
    inline ListDeviceByUserIdAndChanelRequest::ChannelInfo getChannelInfo() { DARABONBA_PTR_GET(channelInfo_, ListDeviceByUserIdAndChanelRequest::ChannelInfo) };
    inline ListDeviceByUserIdAndChanelRequest& setChannelInfo(const ListDeviceByUserIdAndChanelRequest::ChannelInfo & channelInfo) { DARABONBA_PTR_SET_VALUE(channelInfo_, channelInfo) };
    inline ListDeviceByUserIdAndChanelRequest& setChannelInfo(ListDeviceByUserIdAndChanelRequest::ChannelInfo && channelInfo) { DARABONBA_PTR_SET_RVALUE(channelInfo_, channelInfo) };


    // userInfo Field Functions 
    bool hasUserInfo() const { return this->userInfo_ != nullptr;};
    void deleteUserInfo() { this->userInfo_ = nullptr;};
    inline const ListDeviceByUserIdAndChanelRequest::UserInfo & getUserInfo() const { DARABONBA_PTR_GET_CONST(userInfo_, ListDeviceByUserIdAndChanelRequest::UserInfo) };
    inline ListDeviceByUserIdAndChanelRequest::UserInfo getUserInfo() { DARABONBA_PTR_GET(userInfo_, ListDeviceByUserIdAndChanelRequest::UserInfo) };
    inline ListDeviceByUserIdAndChanelRequest& setUserInfo(const ListDeviceByUserIdAndChanelRequest::UserInfo & userInfo) { DARABONBA_PTR_SET_VALUE(userInfo_, userInfo) };
    inline ListDeviceByUserIdAndChanelRequest& setUserInfo(ListDeviceByUserIdAndChanelRequest::UserInfo && userInfo) { DARABONBA_PTR_SET_RVALUE(userInfo_, userInfo) };


  protected:
    // Activation channel, such as WeChat mini program or third-party app.
    // 
    // This parameter is required.
    shared_ptr<ListDeviceByUserIdAndChanelRequest::ChannelInfo> channelInfo_ {};
    // List of User Identifier information.
    // 
    // This parameter is required.
    shared_ptr<ListDeviceByUserIdAndChanelRequest::UserInfo> userInfo_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
