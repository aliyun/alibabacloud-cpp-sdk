// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ONSCONSUMERACCUMULATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ONSCONSUMERACCUMULATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ons20190214
{
namespace Models
{
  class OnsConsumerAccumulateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OnsConsumerAccumulateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Detail, detail_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, OnsConsumerAccumulateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Detail, detail_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    OnsConsumerAccumulateRequest() = default ;
    OnsConsumerAccumulateRequest(const OnsConsumerAccumulateRequest &) = default ;
    OnsConsumerAccumulateRequest(OnsConsumerAccumulateRequest &&) = default ;
    OnsConsumerAccumulateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OnsConsumerAccumulateRequest() = default ;
    OnsConsumerAccumulateRequest& operator=(const OnsConsumerAccumulateRequest &) = default ;
    OnsConsumerAccumulateRequest& operator=(OnsConsumerAccumulateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->detail_ == nullptr
        && this->groupId_ == nullptr && this->instanceId_ == nullptr; };
    // detail Field Functions 
    bool hasDetail() const { return this->detail_ != nullptr;};
    void deleteDetail() { this->detail_ = nullptr;};
    inline bool getDetail() const { DARABONBA_PTR_GET_DEFAULT(detail_, false) };
    inline OnsConsumerAccumulateRequest& setDetail(bool detail) { DARABONBA_PTR_SET_VALUE(detail_, detail) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline OnsConsumerAccumulateRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline OnsConsumerAccumulateRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    // Specifies whether to query the details of each topic to which the consumer group subscribes. Valid values:
    // 
    // *   **true**: The details of each topic are queried. You can obtain the details from the **DetailInTopicList** response parameter.
    // *   **false**: The details of each topic are not queried. This is the default value. If you use this value, the value of the **DetailInTopicList** response parameter is empty.
    shared_ptr<bool> detail_ {};
    // The ID of the consumer group.
    // 
    // This parameter is required.
    shared_ptr<string> groupId_ {};
    // The ID of the instance.
    shared_ptr<string> instanceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ons20190214
#endif
