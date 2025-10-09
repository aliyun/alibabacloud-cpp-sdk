// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDOWNSTREAMTASKINSTANCESRESPONSEBODYPAGINGINFODOWNSTREAMTASKINSTANCES_HPP_
#define ALIBABACLOUD_MODELS_LISTDOWNSTREAMTASKINSTANCESRESPONSEBODYPAGINGINFODOWNSTREAMTASKINSTANCES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListDownstreamTaskInstancesResponseBodyPagingInfoDownstreamTaskInstancesTaskInstance.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListDownstreamTaskInstancesResponseBodyPagingInfoDownstreamTaskInstances : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDownstreamTaskInstancesResponseBodyPagingInfoDownstreamTaskInstances& obj) { 
      DARABONBA_PTR_TO_JSON(DependencyType, dependencyType_);
      DARABONBA_PTR_TO_JSON(TaskInstance, taskInstance_);
    };
    friend void from_json(const Darabonba::Json& j, ListDownstreamTaskInstancesResponseBodyPagingInfoDownstreamTaskInstances& obj) { 
      DARABONBA_PTR_FROM_JSON(DependencyType, dependencyType_);
      DARABONBA_PTR_FROM_JSON(TaskInstance, taskInstance_);
    };
    ListDownstreamTaskInstancesResponseBodyPagingInfoDownstreamTaskInstances() = default ;
    ListDownstreamTaskInstancesResponseBodyPagingInfoDownstreamTaskInstances(const ListDownstreamTaskInstancesResponseBodyPagingInfoDownstreamTaskInstances &) = default ;
    ListDownstreamTaskInstancesResponseBodyPagingInfoDownstreamTaskInstances(ListDownstreamTaskInstancesResponseBodyPagingInfoDownstreamTaskInstances &&) = default ;
    ListDownstreamTaskInstancesResponseBodyPagingInfoDownstreamTaskInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDownstreamTaskInstancesResponseBodyPagingInfoDownstreamTaskInstances() = default ;
    ListDownstreamTaskInstancesResponseBodyPagingInfoDownstreamTaskInstances& operator=(const ListDownstreamTaskInstancesResponseBodyPagingInfoDownstreamTaskInstances &) = default ;
    ListDownstreamTaskInstancesResponseBodyPagingInfoDownstreamTaskInstances& operator=(ListDownstreamTaskInstancesResponseBodyPagingInfoDownstreamTaskInstances &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dependencyType_ != nullptr
        && this->taskInstance_ != nullptr; };
    // dependencyType Field Functions 
    bool hasDependencyType() const { return this->dependencyType_ != nullptr;};
    void deleteDependencyType() { this->dependencyType_ = nullptr;};
    inline string dependencyType() const { DARABONBA_PTR_GET_DEFAULT(dependencyType_, "") };
    inline ListDownstreamTaskInstancesResponseBodyPagingInfoDownstreamTaskInstances& setDependencyType(string dependencyType) { DARABONBA_PTR_SET_VALUE(dependencyType_, dependencyType) };


    // taskInstance Field Functions 
    bool hasTaskInstance() const { return this->taskInstance_ != nullptr;};
    void deleteTaskInstance() { this->taskInstance_ = nullptr;};
    inline const Models::ListDownstreamTaskInstancesResponseBodyPagingInfoDownstreamTaskInstancesTaskInstance & taskInstance() const { DARABONBA_PTR_GET_CONST(taskInstance_, Models::ListDownstreamTaskInstancesResponseBodyPagingInfoDownstreamTaskInstancesTaskInstance) };
    inline Models::ListDownstreamTaskInstancesResponseBodyPagingInfoDownstreamTaskInstancesTaskInstance taskInstance() { DARABONBA_PTR_GET(taskInstance_, Models::ListDownstreamTaskInstancesResponseBodyPagingInfoDownstreamTaskInstancesTaskInstance) };
    inline ListDownstreamTaskInstancesResponseBodyPagingInfoDownstreamTaskInstances& setTaskInstance(const Models::ListDownstreamTaskInstancesResponseBodyPagingInfoDownstreamTaskInstancesTaskInstance & taskInstance) { DARABONBA_PTR_SET_VALUE(taskInstance_, taskInstance) };
    inline ListDownstreamTaskInstancesResponseBodyPagingInfoDownstreamTaskInstances& setTaskInstance(Models::ListDownstreamTaskInstancesResponseBodyPagingInfoDownstreamTaskInstancesTaskInstance && taskInstance) { DARABONBA_PTR_SET_RVALUE(taskInstance_, taskInstance) };


  protected:
    // The scheduling dependency type. Valid values:
    // 
    // *   Normal
    // *   CrossCycle
    std::shared_ptr<string> dependencyType_ = nullptr;
    // The information about a task instance.
    std::shared_ptr<Models::ListDownstreamTaskInstancesResponseBodyPagingInfoDownstreamTaskInstancesTaskInstance> taskInstance_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
