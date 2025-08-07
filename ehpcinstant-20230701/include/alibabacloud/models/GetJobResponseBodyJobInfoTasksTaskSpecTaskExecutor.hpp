// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETJOBRESPONSEBODYJOBINFOTASKSTASKSPECTASKEXECUTOR_HPP_
#define ALIBABACLOUD_MODELS_GETJOBRESPONSEBODYJOBINFOTASKSTASKSPECTASKEXECUTOR_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetJobResponseBodyJobInfoTasksTaskSpecTaskExecutorVM.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EhpcInstant20230701
{
namespace Models
{
  class GetJobResponseBodyJobInfoTasksTaskSpecTaskExecutor : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetJobResponseBodyJobInfoTasksTaskSpecTaskExecutor& obj) { 
      DARABONBA_PTR_TO_JSON(VM, VM_);
    };
    friend void from_json(const Darabonba::Json& j, GetJobResponseBodyJobInfoTasksTaskSpecTaskExecutor& obj) { 
      DARABONBA_PTR_FROM_JSON(VM, VM_);
    };
    GetJobResponseBodyJobInfoTasksTaskSpecTaskExecutor() = default ;
    GetJobResponseBodyJobInfoTasksTaskSpecTaskExecutor(const GetJobResponseBodyJobInfoTasksTaskSpecTaskExecutor &) = default ;
    GetJobResponseBodyJobInfoTasksTaskSpecTaskExecutor(GetJobResponseBodyJobInfoTasksTaskSpecTaskExecutor &&) = default ;
    GetJobResponseBodyJobInfoTasksTaskSpecTaskExecutor(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetJobResponseBodyJobInfoTasksTaskSpecTaskExecutor() = default ;
    GetJobResponseBodyJobInfoTasksTaskSpecTaskExecutor& operator=(const GetJobResponseBodyJobInfoTasksTaskSpecTaskExecutor &) = default ;
    GetJobResponseBodyJobInfoTasksTaskSpecTaskExecutor& operator=(GetJobResponseBodyJobInfoTasksTaskSpecTaskExecutor &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->VM_ != nullptr; };
    // VM Field Functions 
    bool hasVM() const { return this->VM_ != nullptr;};
    void deleteVM() { this->VM_ = nullptr;};
    inline const Models::GetJobResponseBodyJobInfoTasksTaskSpecTaskExecutorVM & VM() const { DARABONBA_PTR_GET_CONST(VM_, Models::GetJobResponseBodyJobInfoTasksTaskSpecTaskExecutorVM) };
    inline Models::GetJobResponseBodyJobInfoTasksTaskSpecTaskExecutorVM VM() { DARABONBA_PTR_GET(VM_, Models::GetJobResponseBodyJobInfoTasksTaskSpecTaskExecutorVM) };
    inline GetJobResponseBodyJobInfoTasksTaskSpecTaskExecutor& setVM(const Models::GetJobResponseBodyJobInfoTasksTaskSpecTaskExecutorVM & VM) { DARABONBA_PTR_SET_VALUE(VM_, VM) };
    inline GetJobResponseBodyJobInfoTasksTaskSpecTaskExecutor& setVM(Models::GetJobResponseBodyJobInfoTasksTaskSpecTaskExecutorVM && VM) { DARABONBA_PTR_SET_RVALUE(VM_, VM) };


  protected:
    std::shared_ptr<Models::GetJobResponseBodyJobInfoTasksTaskSpecTaskExecutorVM> VM_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EhpcInstant20230701
#endif
