// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSKILLGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSKILLGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class ListSkillGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSkillGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ChannelType, channelType_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, ListSkillGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ChannelType, channelType_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    ListSkillGroupRequest() = default ;
    ListSkillGroupRequest(const ListSkillGroupRequest &) = default ;
    ListSkillGroupRequest(ListSkillGroupRequest &&) = default ;
    ListSkillGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSkillGroupRequest() = default ;
    ListSkillGroupRequest& operator=(const ListSkillGroupRequest &) = default ;
    ListSkillGroupRequest& operator=(ListSkillGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->channelType_ == nullptr
        && return this->clientToken_ == nullptr && return this->instanceId_ == nullptr; };
    // channelType Field Functions 
    bool hasChannelType() const { return this->channelType_ != nullptr;};
    void deleteChannelType() { this->channelType_ = nullptr;};
    inline int32_t channelType() const { DARABONBA_PTR_GET_DEFAULT(channelType_, 0) };
    inline ListSkillGroupRequest& setChannelType(int32_t channelType) { DARABONBA_PTR_SET_VALUE(channelType_, channelType) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline ListSkillGroupRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListSkillGroupRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    std::shared_ptr<int32_t> channelType_ = nullptr;
    std::shared_ptr<string> clientToken_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
