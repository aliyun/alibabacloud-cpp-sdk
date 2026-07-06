// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTOPICSUBSCRIBESTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETTOPICSUBSCRIBESTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alikafka20190916
{
namespace Models
{
  class GetTopicSubscribeStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTopicSubscribeStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Topic, topic_);
    };
    friend void from_json(const Darabonba::Json& j, GetTopicSubscribeStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Topic, topic_);
    };
    GetTopicSubscribeStatusRequest() = default ;
    GetTopicSubscribeStatusRequest(const GetTopicSubscribeStatusRequest &) = default ;
    GetTopicSubscribeStatusRequest(GetTopicSubscribeStatusRequest &&) = default ;
    GetTopicSubscribeStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTopicSubscribeStatusRequest() = default ;
    GetTopicSubscribeStatusRequest& operator=(const GetTopicSubscribeStatusRequest &) = default ;
    GetTopicSubscribeStatusRequest& operator=(GetTopicSubscribeStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->regionId_ == nullptr && this->topic_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetTopicSubscribeStatusRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetTopicSubscribeStatusRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // topic Field Functions 
    bool hasTopic() const { return this->topic_ != nullptr;};
    void deleteTopic() { this->topic_ = nullptr;};
    inline string getTopic() const { DARABONBA_PTR_GET_DEFAULT(topic_, "") };
    inline GetTopicSubscribeStatusRequest& setTopic(string topic) { DARABONBA_PTR_SET_VALUE(topic_, topic) };


  protected:
    // Instance ID.
    // 
    // You can call [GetInstanceList](https://help.aliyun.com/document_detail/437663.html) to obtain it.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // Region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // Topic name.
    // 
    // You can call [GetTopicList](https://help.aliyun.com/document_detail/437677.html) to obtain it.
    // 
    // This parameter is required.
    shared_ptr<string> topic_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alikafka20190916
#endif
