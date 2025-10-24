// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNCOMMANDRESPONSEBODYRUNCOMMANDINFOS_HPP_
#define ALIBABACLOUD_MODELS_RUNCOMMANDRESPONSEBODYRUNCOMMANDINFOS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class RunCommandResponseBodyRunCommandInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunCommandResponseBodyRunCommandInfos& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InvokeId, invokeId_);
    };
    friend void from_json(const Darabonba::Json& j, RunCommandResponseBodyRunCommandInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InvokeId, invokeId_);
    };
    RunCommandResponseBodyRunCommandInfos() = default ;
    RunCommandResponseBodyRunCommandInfos(const RunCommandResponseBodyRunCommandInfos &) = default ;
    RunCommandResponseBodyRunCommandInfos(RunCommandResponseBodyRunCommandInfos &&) = default ;
    RunCommandResponseBodyRunCommandInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunCommandResponseBodyRunCommandInfos() = default ;
    RunCommandResponseBodyRunCommandInfos& operator=(const RunCommandResponseBodyRunCommandInfos &) = default ;
    RunCommandResponseBodyRunCommandInfos& operator=(RunCommandResponseBodyRunCommandInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && return this->invokeId_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline RunCommandResponseBodyRunCommandInfos& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // invokeId Field Functions 
    bool hasInvokeId() const { return this->invokeId_ != nullptr;};
    void deleteInvokeId() { this->invokeId_ = nullptr;};
    inline string invokeId() const { DARABONBA_PTR_GET_DEFAULT(invokeId_, "") };
    inline RunCommandResponseBodyRunCommandInfos& setInvokeId(string invokeId) { DARABONBA_PTR_SET_VALUE(invokeId_, invokeId) };


  protected:
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> invokeId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
