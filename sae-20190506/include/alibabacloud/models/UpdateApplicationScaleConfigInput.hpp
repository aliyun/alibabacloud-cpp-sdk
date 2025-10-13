// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAPPLICATIONSCALECONFIGINPUT_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAPPLICATIONSCALECONFIGINPUT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class UpdateApplicationScaleConfigInput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateApplicationScaleConfigInput& obj) { 
      DARABONBA_PTR_TO_JSON(alwaysAllocateCPU, alwaysAllocateCPU_);
      DARABONBA_PTR_TO_JSON(maximumInstanceCount, maximumInstanceCount_);
      DARABONBA_PTR_TO_JSON(minimumInstanceCount, minimumInstanceCount_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateApplicationScaleConfigInput& obj) { 
      DARABONBA_PTR_FROM_JSON(alwaysAllocateCPU, alwaysAllocateCPU_);
      DARABONBA_PTR_FROM_JSON(maximumInstanceCount, maximumInstanceCount_);
      DARABONBA_PTR_FROM_JSON(minimumInstanceCount, minimumInstanceCount_);
    };
    UpdateApplicationScaleConfigInput() = default ;
    UpdateApplicationScaleConfigInput(const UpdateApplicationScaleConfigInput &) = default ;
    UpdateApplicationScaleConfigInput(UpdateApplicationScaleConfigInput &&) = default ;
    UpdateApplicationScaleConfigInput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateApplicationScaleConfigInput() = default ;
    UpdateApplicationScaleConfigInput& operator=(const UpdateApplicationScaleConfigInput &) = default ;
    UpdateApplicationScaleConfigInput& operator=(UpdateApplicationScaleConfigInput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alwaysAllocateCPU_ == nullptr
        && return this->maximumInstanceCount_ == nullptr && return this->minimumInstanceCount_ == nullptr; };
    // alwaysAllocateCPU Field Functions 
    bool hasAlwaysAllocateCPU() const { return this->alwaysAllocateCPU_ != nullptr;};
    void deleteAlwaysAllocateCPU() { this->alwaysAllocateCPU_ = nullptr;};
    inline bool alwaysAllocateCPU() const { DARABONBA_PTR_GET_DEFAULT(alwaysAllocateCPU_, false) };
    inline UpdateApplicationScaleConfigInput& setAlwaysAllocateCPU(bool alwaysAllocateCPU) { DARABONBA_PTR_SET_VALUE(alwaysAllocateCPU_, alwaysAllocateCPU) };


    // maximumInstanceCount Field Functions 
    bool hasMaximumInstanceCount() const { return this->maximumInstanceCount_ != nullptr;};
    void deleteMaximumInstanceCount() { this->maximumInstanceCount_ = nullptr;};
    inline int64_t maximumInstanceCount() const { DARABONBA_PTR_GET_DEFAULT(maximumInstanceCount_, 0L) };
    inline UpdateApplicationScaleConfigInput& setMaximumInstanceCount(int64_t maximumInstanceCount) { DARABONBA_PTR_SET_VALUE(maximumInstanceCount_, maximumInstanceCount) };


    // minimumInstanceCount Field Functions 
    bool hasMinimumInstanceCount() const { return this->minimumInstanceCount_ != nullptr;};
    void deleteMinimumInstanceCount() { this->minimumInstanceCount_ = nullptr;};
    inline int64_t minimumInstanceCount() const { DARABONBA_PTR_GET_DEFAULT(minimumInstanceCount_, 0L) };
    inline UpdateApplicationScaleConfigInput& setMinimumInstanceCount(int64_t minimumInstanceCount) { DARABONBA_PTR_SET_VALUE(minimumInstanceCount_, minimumInstanceCount) };


  protected:
    std::shared_ptr<bool> alwaysAllocateCPU_ = nullptr;
    std::shared_ptr<int64_t> maximumInstanceCount_ = nullptr;
    std::shared_ptr<int64_t> minimumInstanceCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
