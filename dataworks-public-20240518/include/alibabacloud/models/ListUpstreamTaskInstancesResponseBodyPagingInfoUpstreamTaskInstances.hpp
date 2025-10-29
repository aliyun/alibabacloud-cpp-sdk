// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUPSTREAMTASKINSTANCESRESPONSEBODYPAGINGINFOUPSTREAMTASKINSTANCES_HPP_
#define ALIBABACLOUD_MODELS_LISTUPSTREAMTASKINSTANCESRESPONSEBODYPAGINGINFOUPSTREAMTASKINSTANCES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListUpstreamTaskInstancesResponseBodyPagingInfoUpstreamTaskInstancesTaskInstance.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListUpstreamTaskInstancesResponseBodyPagingInfoUpstreamTaskInstances : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUpstreamTaskInstancesResponseBodyPagingInfoUpstreamTaskInstances& obj) { 
      DARABONBA_PTR_TO_JSON(DependencyType, dependencyType_);
      DARABONBA_PTR_TO_JSON(TaskInstance, taskInstance_);
    };
    friend void from_json(const Darabonba::Json& j, ListUpstreamTaskInstancesResponseBodyPagingInfoUpstreamTaskInstances& obj) { 
      DARABONBA_PTR_FROM_JSON(DependencyType, dependencyType_);
      DARABONBA_PTR_FROM_JSON(TaskInstance, taskInstance_);
    };
    ListUpstreamTaskInstancesResponseBodyPagingInfoUpstreamTaskInstances() = default ;
    ListUpstreamTaskInstancesResponseBodyPagingInfoUpstreamTaskInstances(const ListUpstreamTaskInstancesResponseBodyPagingInfoUpstreamTaskInstances &) = default ;
    ListUpstreamTaskInstancesResponseBodyPagingInfoUpstreamTaskInstances(ListUpstreamTaskInstancesResponseBodyPagingInfoUpstreamTaskInstances &&) = default ;
    ListUpstreamTaskInstancesResponseBodyPagingInfoUpstreamTaskInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUpstreamTaskInstancesResponseBodyPagingInfoUpstreamTaskInstances() = default ;
    ListUpstreamTaskInstancesResponseBodyPagingInfoUpstreamTaskInstances& operator=(const ListUpstreamTaskInstancesResponseBodyPagingInfoUpstreamTaskInstances &) = default ;
    ListUpstreamTaskInstancesResponseBodyPagingInfoUpstreamTaskInstances& operator=(ListUpstreamTaskInstancesResponseBodyPagingInfoUpstreamTaskInstances &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dependencyType_ == nullptr
        && return this->taskInstance_ == nullptr; };
    // dependencyType Field Functions 
    bool hasDependencyType() const { return this->dependencyType_ != nullptr;};
    void deleteDependencyType() { this->dependencyType_ = nullptr;};
    inline string dependencyType() const { DARABONBA_PTR_GET_DEFAULT(dependencyType_, "") };
    inline ListUpstreamTaskInstancesResponseBodyPagingInfoUpstreamTaskInstances& setDependencyType(string dependencyType) { DARABONBA_PTR_SET_VALUE(dependencyType_, dependencyType) };


    // taskInstance Field Functions 
    bool hasTaskInstance() const { return this->taskInstance_ != nullptr;};
    void deleteTaskInstance() { this->taskInstance_ = nullptr;};
    inline const Models::ListUpstreamTaskInstancesResponseBodyPagingInfoUpstreamTaskInstancesTaskInstance & taskInstance() const { DARABONBA_PTR_GET_CONST(taskInstance_, Models::ListUpstreamTaskInstancesResponseBodyPagingInfoUpstreamTaskInstancesTaskInstance) };
    inline Models::ListUpstreamTaskInstancesResponseBodyPagingInfoUpstreamTaskInstancesTaskInstance taskInstance() { DARABONBA_PTR_GET(taskInstance_, Models::ListUpstreamTaskInstancesResponseBodyPagingInfoUpstreamTaskInstancesTaskInstance) };
    inline ListUpstreamTaskInstancesResponseBodyPagingInfoUpstreamTaskInstances& setTaskInstance(const Models::ListUpstreamTaskInstancesResponseBodyPagingInfoUpstreamTaskInstancesTaskInstance & taskInstance) { DARABONBA_PTR_SET_VALUE(taskInstance_, taskInstance) };
    inline ListUpstreamTaskInstancesResponseBodyPagingInfoUpstreamTaskInstances& setTaskInstance(Models::ListUpstreamTaskInstancesResponseBodyPagingInfoUpstreamTaskInstancesTaskInstance && taskInstance) { DARABONBA_PTR_SET_RVALUE(taskInstance_, taskInstance) };


  protected:
    // The scheduling dependency type. Valid values:
    // 
    // *   Normal
    // *   CrossCycle
    std::shared_ptr<string> dependencyType_ = nullptr;
    // The information about a task instance.
    std::shared_ptr<Models::ListUpstreamTaskInstancesResponseBodyPagingInfoUpstreamTaskInstancesTaskInstance> taskInstance_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
