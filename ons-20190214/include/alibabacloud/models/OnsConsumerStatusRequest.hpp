// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ONSCONSUMERSTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ONSCONSUMERSTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ons20190214
{
namespace Models
{
  class OnsConsumerStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OnsConsumerStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Detail, detail_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(NeedJstack, needJstack_);
    };
    friend void from_json(const Darabonba::Json& j, OnsConsumerStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Detail, detail_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(NeedJstack, needJstack_);
    };
    OnsConsumerStatusRequest() = default ;
    OnsConsumerStatusRequest(const OnsConsumerStatusRequest &) = default ;
    OnsConsumerStatusRequest(OnsConsumerStatusRequest &&) = default ;
    OnsConsumerStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OnsConsumerStatusRequest() = default ;
    OnsConsumerStatusRequest& operator=(const OnsConsumerStatusRequest &) = default ;
    OnsConsumerStatusRequest& operator=(OnsConsumerStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->detail_ == nullptr
        && this->groupId_ == nullptr && this->instanceId_ == nullptr && this->needJstack_ == nullptr; };
    // detail Field Functions 
    bool hasDetail() const { return this->detail_ != nullptr;};
    void deleteDetail() { this->detail_ = nullptr;};
    inline bool getDetail() const { DARABONBA_PTR_GET_DEFAULT(detail_, false) };
    inline OnsConsumerStatusRequest& setDetail(bool detail) { DARABONBA_PTR_SET_VALUE(detail_, detail) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline OnsConsumerStatusRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline OnsConsumerStatusRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // needJstack Field Functions 
    bool hasNeedJstack() const { return this->needJstack_ != nullptr;};
    void deleteNeedJstack() { this->needJstack_ = nullptr;};
    inline bool getNeedJstack() const { DARABONBA_PTR_GET_DEFAULT(needJstack_, false) };
    inline OnsConsumerStatusRequest& setNeedJstack(bool needJstack) { DARABONBA_PTR_SET_VALUE(needJstack_, needJstack) };


  protected:
    // Specifies whether to query the details of the consumer group. Valid values:
    // 
    // *   **true**: The details of the consumer group are queried. You can obtain details from the **ConsumerConnectionInfoList** and **DetailInTopicList** response parameters.
    // *   **false**: The details of the consumer group are not queried. The values of the **ConsumerConnectionInfoList** and **DetailInTopicList** response parameters are empty. This value is the default value of the Detail parameter.
    shared_ptr<bool> detail_ {};
    // The ID of the consumer group whose details you want to query.
    // 
    // This parameter is required.
    shared_ptr<string> groupId_ {};
    // The ID of the instance to which the consumer group belongs.
    shared_ptr<string> instanceId_ {};
    // Specifies whether to query the information about thread stack traces. Valid values:
    // 
    // *   **true**: The information about thread stack traces is queried. You can obtain the information from the **Jstack** response parameter.
    // 
    // > If you want to obtain the information about thread stack traces, make sure that the **Detail** parameter in the request is set to **true**.
    // 
    // *   **false**: The information about thread stack traces is not queried. The value of the **Jstack** response parameter is empty. This value is the default value of the NeedJstack parameter.
    shared_ptr<bool> needJstack_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ons20190214
#endif
