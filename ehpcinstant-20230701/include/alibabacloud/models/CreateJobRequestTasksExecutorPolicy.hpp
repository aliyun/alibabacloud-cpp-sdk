// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEJOBREQUESTTASKSEXECUTORPOLICY_HPP_
#define ALIBABACLOUD_MODELS_CREATEJOBREQUESTTASKSEXECUTORPOLICY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateJobRequestTasksExecutorPolicyArraySpec.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EhpcInstant20230701
{
namespace Models
{
  class CreateJobRequestTasksExecutorPolicy : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateJobRequestTasksExecutorPolicy& obj) { 
      DARABONBA_PTR_TO_JSON(ArraySpec, arraySpec_);
      DARABONBA_PTR_TO_JSON(MaxCount, maxCount_);
    };
    friend void from_json(const Darabonba::Json& j, CreateJobRequestTasksExecutorPolicy& obj) { 
      DARABONBA_PTR_FROM_JSON(ArraySpec, arraySpec_);
      DARABONBA_PTR_FROM_JSON(MaxCount, maxCount_);
    };
    CreateJobRequestTasksExecutorPolicy() = default ;
    CreateJobRequestTasksExecutorPolicy(const CreateJobRequestTasksExecutorPolicy &) = default ;
    CreateJobRequestTasksExecutorPolicy(CreateJobRequestTasksExecutorPolicy &&) = default ;
    CreateJobRequestTasksExecutorPolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateJobRequestTasksExecutorPolicy() = default ;
    CreateJobRequestTasksExecutorPolicy& operator=(const CreateJobRequestTasksExecutorPolicy &) = default ;
    CreateJobRequestTasksExecutorPolicy& operator=(CreateJobRequestTasksExecutorPolicy &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->arraySpec_ != nullptr
        && this->maxCount_ != nullptr; };
    // arraySpec Field Functions 
    bool hasArraySpec() const { return this->arraySpec_ != nullptr;};
    void deleteArraySpec() { this->arraySpec_ = nullptr;};
    inline const Models::CreateJobRequestTasksExecutorPolicyArraySpec & arraySpec() const { DARABONBA_PTR_GET_CONST(arraySpec_, Models::CreateJobRequestTasksExecutorPolicyArraySpec) };
    inline Models::CreateJobRequestTasksExecutorPolicyArraySpec arraySpec() { DARABONBA_PTR_GET(arraySpec_, Models::CreateJobRequestTasksExecutorPolicyArraySpec) };
    inline CreateJobRequestTasksExecutorPolicy& setArraySpec(const Models::CreateJobRequestTasksExecutorPolicyArraySpec & arraySpec) { DARABONBA_PTR_SET_VALUE(arraySpec_, arraySpec) };
    inline CreateJobRequestTasksExecutorPolicy& setArraySpec(Models::CreateJobRequestTasksExecutorPolicyArraySpec && arraySpec) { DARABONBA_PTR_SET_RVALUE(arraySpec_, arraySpec) };


    // maxCount Field Functions 
    bool hasMaxCount() const { return this->maxCount_ != nullptr;};
    void deleteMaxCount() { this->maxCount_ = nullptr;};
    inline int32_t maxCount() const { DARABONBA_PTR_GET_DEFAULT(maxCount_, 0) };
    inline CreateJobRequestTasksExecutorPolicy& setMaxCount(int32_t maxCount) { DARABONBA_PTR_SET_VALUE(maxCount_, maxCount) };


  protected:
    std::shared_ptr<Models::CreateJobRequestTasksExecutorPolicyArraySpec> arraySpec_ = nullptr;
    std::shared_ptr<int32_t> maxCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EhpcInstant20230701
#endif
