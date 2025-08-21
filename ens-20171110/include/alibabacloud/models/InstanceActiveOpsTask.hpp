// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INSTANCEACTIVEOPSTASK_HPP_
#define ALIBABACLOUD_MODELS_INSTANCEACTIVEOPSTASK_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class InstanceActiveOpsTask : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InstanceActiveOpsTask& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceActiveOpsTaskId, instanceActiveOpsTaskId_);
      DARABONBA_PTR_TO_JSON(InstanceActiveOpsTaskStatus, instanceActiveOpsTaskStatus_);
    };
    friend void from_json(const Darabonba::Json& j, InstanceActiveOpsTask& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceActiveOpsTaskId, instanceActiveOpsTaskId_);
      DARABONBA_PTR_FROM_JSON(InstanceActiveOpsTaskStatus, instanceActiveOpsTaskStatus_);
    };
    InstanceActiveOpsTask() = default ;
    InstanceActiveOpsTask(const InstanceActiveOpsTask &) = default ;
    InstanceActiveOpsTask(InstanceActiveOpsTask &&) = default ;
    InstanceActiveOpsTask(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InstanceActiveOpsTask() = default ;
    InstanceActiveOpsTask& operator=(const InstanceActiveOpsTask &) = default ;
    InstanceActiveOpsTask& operator=(InstanceActiveOpsTask &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceActiveOpsTaskId_ != nullptr
        && this->instanceActiveOpsTaskStatus_ != nullptr; };
    // instanceActiveOpsTaskId Field Functions 
    bool hasInstanceActiveOpsTaskId() const { return this->instanceActiveOpsTaskId_ != nullptr;};
    void deleteInstanceActiveOpsTaskId() { this->instanceActiveOpsTaskId_ = nullptr;};
    inline string instanceActiveOpsTaskId() const { DARABONBA_PTR_GET_DEFAULT(instanceActiveOpsTaskId_, "") };
    inline InstanceActiveOpsTask& setInstanceActiveOpsTaskId(string instanceActiveOpsTaskId) { DARABONBA_PTR_SET_VALUE(instanceActiveOpsTaskId_, instanceActiveOpsTaskId) };


    // instanceActiveOpsTaskStatus Field Functions 
    bool hasInstanceActiveOpsTaskStatus() const { return this->instanceActiveOpsTaskStatus_ != nullptr;};
    void deleteInstanceActiveOpsTaskStatus() { this->instanceActiveOpsTaskStatus_ = nullptr;};
    inline string instanceActiveOpsTaskStatus() const { DARABONBA_PTR_GET_DEFAULT(instanceActiveOpsTaskStatus_, "") };
    inline InstanceActiveOpsTask& setInstanceActiveOpsTaskStatus(string instanceActiveOpsTaskStatus) { DARABONBA_PTR_SET_VALUE(instanceActiveOpsTaskStatus_, instanceActiveOpsTaskStatus) };


  protected:
    std::shared_ptr<string> instanceActiveOpsTaskId_ = nullptr;
    std::shared_ptr<string> instanceActiveOpsTaskStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
