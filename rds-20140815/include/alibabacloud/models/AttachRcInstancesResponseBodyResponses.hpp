// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ATTACHRCINSTANCESRESPONSEBODYRESPONSES_HPP_
#define ALIBABACLOUD_MODELS_ATTACHRCINSTANCESRESPONSEBODYRESPONSES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class AttachRCInstancesResponseBodyResponses : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AttachRCInstancesResponseBodyResponses& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Message, message_);
    };
    friend void from_json(const Darabonba::Json& j, AttachRCInstancesResponseBodyResponses& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
    };
    AttachRCInstancesResponseBodyResponses() = default ;
    AttachRCInstancesResponseBodyResponses(const AttachRCInstancesResponseBodyResponses &) = default ;
    AttachRCInstancesResponseBodyResponses(AttachRCInstancesResponseBodyResponses &&) = default ;
    AttachRCInstancesResponseBodyResponses(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AttachRCInstancesResponseBodyResponses() = default ;
    AttachRCInstancesResponseBodyResponses& operator=(const AttachRCInstancesResponseBodyResponses &) = default ;
    AttachRCInstancesResponseBodyResponses& operator=(AttachRCInstancesResponseBodyResponses &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->instanceId_ == nullptr && return this->message_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline AttachRCInstancesResponseBodyResponses& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline AttachRCInstancesResponseBodyResponses& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline AttachRCInstancesResponseBodyResponses& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


  protected:
    // The HTTP status code returned.
    std::shared_ptr<string> code_ = nullptr;
    // The node ID.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The message returned.
    // 
    // >  If the request is successful, **Successful** is returned. If the request fails, an error message that contains information such as an error code is returned.
    std::shared_ptr<string> message_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
