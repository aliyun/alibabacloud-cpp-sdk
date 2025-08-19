// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ATTACHINSTANCESRESPONSEBODYLIST_HPP_
#define ALIBABACLOUD_MODELS_ATTACHINSTANCESRESPONSEBODYLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class AttachInstancesResponseBodyList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AttachInstancesResponseBodyList& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(message, message_);
    };
    friend void from_json(const Darabonba::Json& j, AttachInstancesResponseBodyList& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(message, message_);
    };
    AttachInstancesResponseBodyList() = default ;
    AttachInstancesResponseBodyList(const AttachInstancesResponseBodyList &) = default ;
    AttachInstancesResponseBodyList(AttachInstancesResponseBodyList &&) = default ;
    AttachInstancesResponseBodyList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AttachInstancesResponseBodyList() = default ;
    AttachInstancesResponseBodyList& operator=(const AttachInstancesResponseBodyList &) = default ;
    AttachInstancesResponseBodyList& operator=(AttachInstancesResponseBodyList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->instanceId_ != nullptr && this->message_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline AttachInstancesResponseBodyList& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline AttachInstancesResponseBodyList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline AttachInstancesResponseBodyList& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


  protected:
    // The code that indicates the task result.
    std::shared_ptr<string> code_ = nullptr;
    // The ID of the ECS instance.
    std::shared_ptr<string> instanceId_ = nullptr;
    // Indicates whether the ECS instance is successfully added to the ACK cluster.
    std::shared_ptr<string> message_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
