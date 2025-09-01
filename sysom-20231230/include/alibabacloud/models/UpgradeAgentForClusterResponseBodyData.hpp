// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPGRADEAGENTFORCLUSTERRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_UPGRADEAGENTFORCLUSTERRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SysOM20231230
{
namespace Models
{
  class UpgradeAgentForClusterResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpgradeAgentForClusterResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(task_id, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, UpgradeAgentForClusterResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(task_id, taskId_);
    };
    UpgradeAgentForClusterResponseBodyData() = default ;
    UpgradeAgentForClusterResponseBodyData(const UpgradeAgentForClusterResponseBodyData &) = default ;
    UpgradeAgentForClusterResponseBodyData(UpgradeAgentForClusterResponseBodyData &&) = default ;
    UpgradeAgentForClusterResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpgradeAgentForClusterResponseBodyData() = default ;
    UpgradeAgentForClusterResponseBodyData& operator=(const UpgradeAgentForClusterResponseBodyData &) = default ;
    UpgradeAgentForClusterResponseBodyData& operator=(UpgradeAgentForClusterResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->taskId_ != nullptr; };
    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline UpgradeAgentForClusterResponseBodyData& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    std::shared_ptr<string> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif
