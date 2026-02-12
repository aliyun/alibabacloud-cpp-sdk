// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ONSTOPICUPDATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ONSTOPICUPDATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ons20190214
{
namespace Models
{
  class OnsTopicUpdateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OnsTopicUpdateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Perm, perm_);
      DARABONBA_PTR_TO_JSON(Topic, topic_);
    };
    friend void from_json(const Darabonba::Json& j, OnsTopicUpdateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Perm, perm_);
      DARABONBA_PTR_FROM_JSON(Topic, topic_);
    };
    OnsTopicUpdateRequest() = default ;
    OnsTopicUpdateRequest(const OnsTopicUpdateRequest &) = default ;
    OnsTopicUpdateRequest(OnsTopicUpdateRequest &&) = default ;
    OnsTopicUpdateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OnsTopicUpdateRequest() = default ;
    OnsTopicUpdateRequest& operator=(const OnsTopicUpdateRequest &) = default ;
    OnsTopicUpdateRequest& operator=(OnsTopicUpdateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->perm_ == nullptr && this->topic_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline OnsTopicUpdateRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // perm Field Functions 
    bool hasPerm() const { return this->perm_ != nullptr;};
    void deletePerm() { this->perm_ = nullptr;};
    inline int32_t getPerm() const { DARABONBA_PTR_GET_DEFAULT(perm_, 0) };
    inline OnsTopicUpdateRequest& setPerm(int32_t perm) { DARABONBA_PTR_SET_VALUE(perm_, perm) };


    // topic Field Functions 
    bool hasTopic() const { return this->topic_ != nullptr;};
    void deleteTopic() { this->topic_ = nullptr;};
    inline string getTopic() const { DARABONBA_PTR_GET_DEFAULT(topic_, "") };
    inline OnsTopicUpdateRequest& setTopic(string topic) { DARABONBA_PTR_SET_VALUE(topic_, topic) };


  protected:
    // The ID of the instance to which the topic belongs.
    shared_ptr<string> instanceId_ {};
    // The read/write mode that you want to configure for the topic. Valid values:
    // 
    // *   **6**: Both read and write operations are allowed.
    // *   **4**: Write operations are forbidden.
    // *   **2**: Read operations are forbidden.
    // 
    // This parameter is required.
    shared_ptr<int32_t> perm_ {};
    // The name of the topic that you want to manage.
    // 
    // This parameter is required.
    shared_ptr<string> topic_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ons20190214
#endif
