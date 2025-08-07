// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEJOBREQUESTTASKSEXECUTORPOLICYARRAYSPEC_HPP_
#define ALIBABACLOUD_MODELS_CREATEJOBREQUESTTASKSEXECUTORPOLICYARRAYSPEC_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EhpcInstant20230701
{
namespace Models
{
  class CreateJobRequestTasksExecutorPolicyArraySpec : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateJobRequestTasksExecutorPolicyArraySpec& obj) { 
      DARABONBA_PTR_TO_JSON(IndexEnd, indexEnd_);
      DARABONBA_PTR_TO_JSON(IndexStart, indexStart_);
      DARABONBA_PTR_TO_JSON(IndexStep, indexStep_);
    };
    friend void from_json(const Darabonba::Json& j, CreateJobRequestTasksExecutorPolicyArraySpec& obj) { 
      DARABONBA_PTR_FROM_JSON(IndexEnd, indexEnd_);
      DARABONBA_PTR_FROM_JSON(IndexStart, indexStart_);
      DARABONBA_PTR_FROM_JSON(IndexStep, indexStep_);
    };
    CreateJobRequestTasksExecutorPolicyArraySpec() = default ;
    CreateJobRequestTasksExecutorPolicyArraySpec(const CreateJobRequestTasksExecutorPolicyArraySpec &) = default ;
    CreateJobRequestTasksExecutorPolicyArraySpec(CreateJobRequestTasksExecutorPolicyArraySpec &&) = default ;
    CreateJobRequestTasksExecutorPolicyArraySpec(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateJobRequestTasksExecutorPolicyArraySpec() = default ;
    CreateJobRequestTasksExecutorPolicyArraySpec& operator=(const CreateJobRequestTasksExecutorPolicyArraySpec &) = default ;
    CreateJobRequestTasksExecutorPolicyArraySpec& operator=(CreateJobRequestTasksExecutorPolicyArraySpec &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->indexEnd_ != nullptr
        && this->indexStart_ != nullptr && this->indexStep_ != nullptr; };
    // indexEnd Field Functions 
    bool hasIndexEnd() const { return this->indexEnd_ != nullptr;};
    void deleteIndexEnd() { this->indexEnd_ = nullptr;};
    inline int32_t indexEnd() const { DARABONBA_PTR_GET_DEFAULT(indexEnd_, 0) };
    inline CreateJobRequestTasksExecutorPolicyArraySpec& setIndexEnd(int32_t indexEnd) { DARABONBA_PTR_SET_VALUE(indexEnd_, indexEnd) };


    // indexStart Field Functions 
    bool hasIndexStart() const { return this->indexStart_ != nullptr;};
    void deleteIndexStart() { this->indexStart_ = nullptr;};
    inline int32_t indexStart() const { DARABONBA_PTR_GET_DEFAULT(indexStart_, 0) };
    inline CreateJobRequestTasksExecutorPolicyArraySpec& setIndexStart(int32_t indexStart) { DARABONBA_PTR_SET_VALUE(indexStart_, indexStart) };


    // indexStep Field Functions 
    bool hasIndexStep() const { return this->indexStep_ != nullptr;};
    void deleteIndexStep() { this->indexStep_ = nullptr;};
    inline int32_t indexStep() const { DARABONBA_PTR_GET_DEFAULT(indexStep_, 0) };
    inline CreateJobRequestTasksExecutorPolicyArraySpec& setIndexStep(int32_t indexStep) { DARABONBA_PTR_SET_VALUE(indexStep_, indexStep) };


  protected:
    std::shared_ptr<int32_t> indexEnd_ = nullptr;
    std::shared_ptr<int32_t> indexStart_ = nullptr;
    std::shared_ptr<int32_t> indexStep_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EhpcInstant20230701
#endif
