// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STAGEWITHWEIGHT_HPP_
#define ALIBABACLOUD_MODELS_STAGEWITHWEIGHT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Foasconsole20211028
{
namespace Models
{
  class StageWithWeight : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StageWithWeight& obj) { 
      DARABONBA_PTR_TO_JSON(StepIndex, stepIndex_);
      DARABONBA_PTR_TO_JSON(StepName, stepName_);
      DARABONBA_PTR_TO_JSON(Weight, weight_);
    };
    friend void from_json(const Darabonba::Json& j, StageWithWeight& obj) { 
      DARABONBA_PTR_FROM_JSON(StepIndex, stepIndex_);
      DARABONBA_PTR_FROM_JSON(StepName, stepName_);
      DARABONBA_PTR_FROM_JSON(Weight, weight_);
    };
    StageWithWeight() = default ;
    StageWithWeight(const StageWithWeight &) = default ;
    StageWithWeight(StageWithWeight &&) = default ;
    StageWithWeight(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StageWithWeight() = default ;
    StageWithWeight& operator=(const StageWithWeight &) = default ;
    StageWithWeight& operator=(StageWithWeight &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->stepIndex_ == nullptr
        && return this->stepName_ == nullptr && return this->weight_ == nullptr; };
    // stepIndex Field Functions 
    bool hasStepIndex() const { return this->stepIndex_ != nullptr;};
    void deleteStepIndex() { this->stepIndex_ = nullptr;};
    inline int32_t stepIndex() const { DARABONBA_PTR_GET_DEFAULT(stepIndex_, 0) };
    inline StageWithWeight& setStepIndex(int32_t stepIndex) { DARABONBA_PTR_SET_VALUE(stepIndex_, stepIndex) };


    // stepName Field Functions 
    bool hasStepName() const { return this->stepName_ != nullptr;};
    void deleteStepName() { this->stepName_ = nullptr;};
    inline string stepName() const { DARABONBA_PTR_GET_DEFAULT(stepName_, "") };
    inline StageWithWeight& setStepName(string stepName) { DARABONBA_PTR_SET_VALUE(stepName_, stepName) };


    // weight Field Functions 
    bool hasWeight() const { return this->weight_ != nullptr;};
    void deleteWeight() { this->weight_ = nullptr;};
    inline int32_t weight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0) };
    inline StageWithWeight& setWeight(int32_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


  protected:
    std::shared_ptr<int32_t> stepIndex_ = nullptr;
    std::shared_ptr<string> stepName_ = nullptr;
    std::shared_ptr<int32_t> weight_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Foasconsole20211028
#endif
