// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEWEBAPPLICATIONSCALINGCONFIGINPUT_HPP_
#define ALIBABACLOUD_MODELS_UPDATEWEBAPPLICATIONSCALINGCONFIGINPUT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class UpdateWebApplicationScalingConfigInput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateWebApplicationScalingConfigInput& obj) { 
      DARABONBA_PTR_TO_JSON(MaximumInstanceCount, maximumInstanceCount_);
      DARABONBA_PTR_TO_JSON(MinimumInstanceCount, minimumInstanceCount_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateWebApplicationScalingConfigInput& obj) { 
      DARABONBA_PTR_FROM_JSON(MaximumInstanceCount, maximumInstanceCount_);
      DARABONBA_PTR_FROM_JSON(MinimumInstanceCount, minimumInstanceCount_);
    };
    UpdateWebApplicationScalingConfigInput() = default ;
    UpdateWebApplicationScalingConfigInput(const UpdateWebApplicationScalingConfigInput &) = default ;
    UpdateWebApplicationScalingConfigInput(UpdateWebApplicationScalingConfigInput &&) = default ;
    UpdateWebApplicationScalingConfigInput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateWebApplicationScalingConfigInput() = default ;
    UpdateWebApplicationScalingConfigInput& operator=(const UpdateWebApplicationScalingConfigInput &) = default ;
    UpdateWebApplicationScalingConfigInput& operator=(UpdateWebApplicationScalingConfigInput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maximumInstanceCount_ == nullptr
        && this->minimumInstanceCount_ == nullptr; };
    // maximumInstanceCount Field Functions 
    bool hasMaximumInstanceCount() const { return this->maximumInstanceCount_ != nullptr;};
    void deleteMaximumInstanceCount() { this->maximumInstanceCount_ = nullptr;};
    inline int64_t getMaximumInstanceCount() const { DARABONBA_PTR_GET_DEFAULT(maximumInstanceCount_, 0L) };
    inline UpdateWebApplicationScalingConfigInput& setMaximumInstanceCount(int64_t maximumInstanceCount) { DARABONBA_PTR_SET_VALUE(maximumInstanceCount_, maximumInstanceCount) };


    // minimumInstanceCount Field Functions 
    bool hasMinimumInstanceCount() const { return this->minimumInstanceCount_ != nullptr;};
    void deleteMinimumInstanceCount() { this->minimumInstanceCount_ = nullptr;};
    inline int64_t getMinimumInstanceCount() const { DARABONBA_PTR_GET_DEFAULT(minimumInstanceCount_, 0L) };
    inline UpdateWebApplicationScalingConfigInput& setMinimumInstanceCount(int64_t minimumInstanceCount) { DARABONBA_PTR_SET_VALUE(minimumInstanceCount_, minimumInstanceCount) };


  protected:
    // This parameter is required.
    shared_ptr<int64_t> maximumInstanceCount_ {};
    // This parameter is required.
    shared_ptr<int64_t> minimumInstanceCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
