// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEJOBREQUESTTASKSTASKSPECTASKEXECUTOR_HPP_
#define ALIBABACLOUD_MODELS_CREATEJOBREQUESTTASKSTASKSPECTASKEXECUTOR_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateJobRequestTasksTaskSpecTaskExecutorContainer.hpp>
#include <alibabacloud/models/CreateJobRequestTasksTaskSpecTaskExecutorVM.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EhpcInstant20230701
{
namespace Models
{
  class CreateJobRequestTasksTaskSpecTaskExecutor : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateJobRequestTasksTaskSpecTaskExecutor& obj) { 
      DARABONBA_PTR_TO_JSON(Container, container_);
      DARABONBA_PTR_TO_JSON(VM, VM_);
    };
    friend void from_json(const Darabonba::Json& j, CreateJobRequestTasksTaskSpecTaskExecutor& obj) { 
      DARABONBA_PTR_FROM_JSON(Container, container_);
      DARABONBA_PTR_FROM_JSON(VM, VM_);
    };
    CreateJobRequestTasksTaskSpecTaskExecutor() = default ;
    CreateJobRequestTasksTaskSpecTaskExecutor(const CreateJobRequestTasksTaskSpecTaskExecutor &) = default ;
    CreateJobRequestTasksTaskSpecTaskExecutor(CreateJobRequestTasksTaskSpecTaskExecutor &&) = default ;
    CreateJobRequestTasksTaskSpecTaskExecutor(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateJobRequestTasksTaskSpecTaskExecutor() = default ;
    CreateJobRequestTasksTaskSpecTaskExecutor& operator=(const CreateJobRequestTasksTaskSpecTaskExecutor &) = default ;
    CreateJobRequestTasksTaskSpecTaskExecutor& operator=(CreateJobRequestTasksTaskSpecTaskExecutor &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->container_ == nullptr
        && return this->VM_ == nullptr; };
    // container Field Functions 
    bool hasContainer() const { return this->container_ != nullptr;};
    void deleteContainer() { this->container_ = nullptr;};
    inline const Models::CreateJobRequestTasksTaskSpecTaskExecutorContainer & container() const { DARABONBA_PTR_GET_CONST(container_, Models::CreateJobRequestTasksTaskSpecTaskExecutorContainer) };
    inline Models::CreateJobRequestTasksTaskSpecTaskExecutorContainer container() { DARABONBA_PTR_GET(container_, Models::CreateJobRequestTasksTaskSpecTaskExecutorContainer) };
    inline CreateJobRequestTasksTaskSpecTaskExecutor& setContainer(const Models::CreateJobRequestTasksTaskSpecTaskExecutorContainer & container) { DARABONBA_PTR_SET_VALUE(container_, container) };
    inline CreateJobRequestTasksTaskSpecTaskExecutor& setContainer(Models::CreateJobRequestTasksTaskSpecTaskExecutorContainer && container) { DARABONBA_PTR_SET_RVALUE(container_, container) };


    // VM Field Functions 
    bool hasVM() const { return this->VM_ != nullptr;};
    void deleteVM() { this->VM_ = nullptr;};
    inline const Models::CreateJobRequestTasksTaskSpecTaskExecutorVM & VM() const { DARABONBA_PTR_GET_CONST(VM_, Models::CreateJobRequestTasksTaskSpecTaskExecutorVM) };
    inline Models::CreateJobRequestTasksTaskSpecTaskExecutorVM VM() { DARABONBA_PTR_GET(VM_, Models::CreateJobRequestTasksTaskSpecTaskExecutorVM) };
    inline CreateJobRequestTasksTaskSpecTaskExecutor& setVM(const Models::CreateJobRequestTasksTaskSpecTaskExecutorVM & VM) { DARABONBA_PTR_SET_VALUE(VM_, VM) };
    inline CreateJobRequestTasksTaskSpecTaskExecutor& setVM(Models::CreateJobRequestTasksTaskSpecTaskExecutorVM && VM) { DARABONBA_PTR_SET_RVALUE(VM_, VM) };


  protected:
    // Use the container environment.
    std::shared_ptr<Models::CreateJobRequestTasksTaskSpecTaskExecutorContainer> container_ = nullptr;
    // Use a virtual machine environment.
    std::shared_ptr<Models::CreateJobRequestTasksTaskSpecTaskExecutorVM> VM_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EhpcInstant20230701
#endif
