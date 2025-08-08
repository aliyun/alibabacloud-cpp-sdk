// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAIOUTBOUNDTASKBIZDATAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETAIOUTBOUNDTASKBIZDATAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class GetAiOutboundTaskBizDataRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAiOutboundTaskBizDataRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ChannelId, channelId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAiOutboundTaskBizDataRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ChannelId, channelId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    GetAiOutboundTaskBizDataRequest() = default ;
    GetAiOutboundTaskBizDataRequest(const GetAiOutboundTaskBizDataRequest &) = default ;
    GetAiOutboundTaskBizDataRequest(GetAiOutboundTaskBizDataRequest &&) = default ;
    GetAiOutboundTaskBizDataRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAiOutboundTaskBizDataRequest() = default ;
    GetAiOutboundTaskBizDataRequest& operator=(const GetAiOutboundTaskBizDataRequest &) = default ;
    GetAiOutboundTaskBizDataRequest& operator=(GetAiOutboundTaskBizDataRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->channelId_ != nullptr
        && this->instanceId_ != nullptr; };
    // channelId Field Functions 
    bool hasChannelId() const { return this->channelId_ != nullptr;};
    void deleteChannelId() { this->channelId_ = nullptr;};
    inline string channelId() const { DARABONBA_PTR_GET_DEFAULT(channelId_, "") };
    inline GetAiOutboundTaskBizDataRequest& setChannelId(string channelId) { DARABONBA_PTR_SET_VALUE(channelId_, channelId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetAiOutboundTaskBizDataRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> channelId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
