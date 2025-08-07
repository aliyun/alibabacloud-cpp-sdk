// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETJOBRESPONSEBODYJOBINFOTASKSEXECUTORPOLICYARRAYSPEC_HPP_
#define ALIBABACLOUD_MODELS_GETJOBRESPONSEBODYJOBINFOTASKSEXECUTORPOLICYARRAYSPEC_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EhpcInstant20230701
{
namespace Models
{
  class GetJobResponseBodyJobInfoTasksExecutorPolicyArraySpec : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetJobResponseBodyJobInfoTasksExecutorPolicyArraySpec& obj) { 
      DARABONBA_PTR_TO_JSON(IndexEnd, indexEnd_);
      DARABONBA_PTR_TO_JSON(IndexStart, indexStart_);
      DARABONBA_PTR_TO_JSON(IndexStep, indexStep_);
    };
    friend void from_json(const Darabonba::Json& j, GetJobResponseBodyJobInfoTasksExecutorPolicyArraySpec& obj) { 
      DARABONBA_PTR_FROM_JSON(IndexEnd, indexEnd_);
      DARABONBA_PTR_FROM_JSON(IndexStart, indexStart_);
      DARABONBA_PTR_FROM_JSON(IndexStep, indexStep_);
    };
    GetJobResponseBodyJobInfoTasksExecutorPolicyArraySpec() = default ;
    GetJobResponseBodyJobInfoTasksExecutorPolicyArraySpec(const GetJobResponseBodyJobInfoTasksExecutorPolicyArraySpec &) = default ;
    GetJobResponseBodyJobInfoTasksExecutorPolicyArraySpec(GetJobResponseBodyJobInfoTasksExecutorPolicyArraySpec &&) = default ;
    GetJobResponseBodyJobInfoTasksExecutorPolicyArraySpec(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetJobResponseBodyJobInfoTasksExecutorPolicyArraySpec() = default ;
    GetJobResponseBodyJobInfoTasksExecutorPolicyArraySpec& operator=(const GetJobResponseBodyJobInfoTasksExecutorPolicyArraySpec &) = default ;
    GetJobResponseBodyJobInfoTasksExecutorPolicyArraySpec& operator=(GetJobResponseBodyJobInfoTasksExecutorPolicyArraySpec &&) = default ;
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
    inline GetJobResponseBodyJobInfoTasksExecutorPolicyArraySpec& setIndexEnd(int32_t indexEnd) { DARABONBA_PTR_SET_VALUE(indexEnd_, indexEnd) };


    // indexStart Field Functions 
    bool hasIndexStart() const { return this->indexStart_ != nullptr;};
    void deleteIndexStart() { this->indexStart_ = nullptr;};
    inline int32_t indexStart() const { DARABONBA_PTR_GET_DEFAULT(indexStart_, 0) };
    inline GetJobResponseBodyJobInfoTasksExecutorPolicyArraySpec& setIndexStart(int32_t indexStart) { DARABONBA_PTR_SET_VALUE(indexStart_, indexStart) };


    // indexStep Field Functions 
    bool hasIndexStep() const { return this->indexStep_ != nullptr;};
    void deleteIndexStep() { this->indexStep_ = nullptr;};
    inline int32_t indexStep() const { DARABONBA_PTR_GET_DEFAULT(indexStep_, 0) };
    inline GetJobResponseBodyJobInfoTasksExecutorPolicyArraySpec& setIndexStep(int32_t indexStep) { DARABONBA_PTR_SET_VALUE(indexStep_, indexStep) };


  protected:
    std::shared_ptr<int32_t> indexEnd_ = nullptr;
    std::shared_ptr<int32_t> indexStart_ = nullptr;
    std::shared_ptr<int32_t> indexStep_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EhpcInstant20230701
#endif
