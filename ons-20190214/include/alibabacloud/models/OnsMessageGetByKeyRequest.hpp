// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ONSMESSAGEGETBYKEYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ONSMESSAGEGETBYKEYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ons20190214
{
namespace Models
{
  class OnsMessageGetByKeyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OnsMessageGetByKeyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Topic, topic_);
    };
    friend void from_json(const Darabonba::Json& j, OnsMessageGetByKeyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Topic, topic_);
    };
    OnsMessageGetByKeyRequest() = default ;
    OnsMessageGetByKeyRequest(const OnsMessageGetByKeyRequest &) = default ;
    OnsMessageGetByKeyRequest(OnsMessageGetByKeyRequest &&) = default ;
    OnsMessageGetByKeyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OnsMessageGetByKeyRequest() = default ;
    OnsMessageGetByKeyRequest& operator=(const OnsMessageGetByKeyRequest &) = default ;
    OnsMessageGetByKeyRequest& operator=(OnsMessageGetByKeyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->key_ == nullptr && this->topic_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline OnsMessageGetByKeyRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline OnsMessageGetByKeyRequest& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // topic Field Functions 
    bool hasTopic() const { return this->topic_ != nullptr;};
    void deleteTopic() { this->topic_ = nullptr;};
    inline string getTopic() const { DARABONBA_PTR_GET_DEFAULT(topic_, "") };
    inline OnsMessageGetByKeyRequest& setTopic(string topic) { DARABONBA_PTR_SET_VALUE(topic_, topic) };


  protected:
    // The ID of the instance to which the messages that you want to query belong.
    shared_ptr<string> instanceId_ {};
    // The key of the messages that you want to query.
    // 
    // This parameter is required.
    shared_ptr<string> key_ {};
    // The topic that contains the messages that you want to query.
    // 
    // This parameter is required.
    shared_ptr<string> topic_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ons20190214
#endif
