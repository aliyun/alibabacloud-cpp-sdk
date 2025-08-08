// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUSPENDOUTBOUNDTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUSPENDOUTBOUNDTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class SuspendOutboundTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SuspendOutboundTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(OutboundTaskId, outboundTaskId_);
    };
    friend void from_json(const Darabonba::Json& j, SuspendOutboundTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(OutboundTaskId, outboundTaskId_);
    };
    SuspendOutboundTaskRequest() = default ;
    SuspendOutboundTaskRequest(const SuspendOutboundTaskRequest &) = default ;
    SuspendOutboundTaskRequest(SuspendOutboundTaskRequest &&) = default ;
    SuspendOutboundTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SuspendOutboundTaskRequest() = default ;
    SuspendOutboundTaskRequest& operator=(const SuspendOutboundTaskRequest &) = default ;
    SuspendOutboundTaskRequest& operator=(SuspendOutboundTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceId_ != nullptr
        && this->outboundTaskId_ != nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline SuspendOutboundTaskRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // outboundTaskId Field Functions 
    bool hasOutboundTaskId() const { return this->outboundTaskId_ != nullptr;};
    void deleteOutboundTaskId() { this->outboundTaskId_ = nullptr;};
    inline int64_t outboundTaskId() const { DARABONBA_PTR_GET_DEFAULT(outboundTaskId_, 0L) };
    inline SuspendOutboundTaskRequest& setOutboundTaskId(int64_t outboundTaskId) { DARABONBA_PTR_SET_VALUE(outboundTaskId_, outboundTaskId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> outboundTaskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
