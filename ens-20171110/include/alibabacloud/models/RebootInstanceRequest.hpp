// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REBOOTINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REBOOTINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class RebootInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RebootInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ForceStop, forceStop_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, RebootInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ForceStop, forceStop_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    RebootInstanceRequest() = default ;
    RebootInstanceRequest(const RebootInstanceRequest &) = default ;
    RebootInstanceRequest(RebootInstanceRequest &&) = default ;
    RebootInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RebootInstanceRequest() = default ;
    RebootInstanceRequest& operator=(const RebootInstanceRequest &) = default ;
    RebootInstanceRequest& operator=(RebootInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->forceStop_ != nullptr
        && this->instanceId_ != nullptr; };
    // forceStop Field Functions 
    bool hasForceStop() const { return this->forceStop_ != nullptr;};
    void deleteForceStop() { this->forceStop_ = nullptr;};
    inline string forceStop() const { DARABONBA_PTR_GET_DEFAULT(forceStop_, "") };
    inline RebootInstanceRequest& setForceStop(string forceStop) { DARABONBA_PTR_SET_VALUE(forceStop_, forceStop) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline RebootInstanceRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    // Specifies whether to forcefully stop the instance before you restart it.
    // 
    // *   **true**
    // *   **false** (default)
    std::shared_ptr<string> forceStop_ = nullptr;
    // The ID of the instance that you want to reboot. You can specify only one instance ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
