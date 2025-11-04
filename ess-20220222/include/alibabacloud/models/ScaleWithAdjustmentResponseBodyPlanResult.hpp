// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SCALEWITHADJUSTMENTRESPONSEBODYPLANRESULT_HPP_
#define ALIBABACLOUD_MODELS_SCALEWITHADJUSTMENTRESPONSEBODYPLANRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ScaleWithAdjustmentResponseBodyPlanResultResourceAllocations.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class ScaleWithAdjustmentResponseBodyPlanResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ScaleWithAdjustmentResponseBodyPlanResult& obj) { 
      DARABONBA_PTR_TO_JSON(ResourceAllocations, resourceAllocations_);
    };
    friend void from_json(const Darabonba::Json& j, ScaleWithAdjustmentResponseBodyPlanResult& obj) { 
      DARABONBA_PTR_FROM_JSON(ResourceAllocations, resourceAllocations_);
    };
    ScaleWithAdjustmentResponseBodyPlanResult() = default ;
    ScaleWithAdjustmentResponseBodyPlanResult(const ScaleWithAdjustmentResponseBodyPlanResult &) = default ;
    ScaleWithAdjustmentResponseBodyPlanResult(ScaleWithAdjustmentResponseBodyPlanResult &&) = default ;
    ScaleWithAdjustmentResponseBodyPlanResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ScaleWithAdjustmentResponseBodyPlanResult() = default ;
    ScaleWithAdjustmentResponseBodyPlanResult& operator=(const ScaleWithAdjustmentResponseBodyPlanResult &) = default ;
    ScaleWithAdjustmentResponseBodyPlanResult& operator=(ScaleWithAdjustmentResponseBodyPlanResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->resourceAllocations_ == nullptr; };
    // resourceAllocations Field Functions 
    bool hasResourceAllocations() const { return this->resourceAllocations_ != nullptr;};
    void deleteResourceAllocations() { this->resourceAllocations_ = nullptr;};
    inline const vector<Models::ScaleWithAdjustmentResponseBodyPlanResultResourceAllocations> & resourceAllocations() const { DARABONBA_PTR_GET_CONST(resourceAllocations_, vector<Models::ScaleWithAdjustmentResponseBodyPlanResultResourceAllocations>) };
    inline vector<Models::ScaleWithAdjustmentResponseBodyPlanResultResourceAllocations> resourceAllocations() { DARABONBA_PTR_GET(resourceAllocations_, vector<Models::ScaleWithAdjustmentResponseBodyPlanResultResourceAllocations>) };
    inline ScaleWithAdjustmentResponseBodyPlanResult& setResourceAllocations(const vector<Models::ScaleWithAdjustmentResponseBodyPlanResultResourceAllocations> & resourceAllocations) { DARABONBA_PTR_SET_VALUE(resourceAllocations_, resourceAllocations) };
    inline ScaleWithAdjustmentResponseBodyPlanResult& setResourceAllocations(vector<Models::ScaleWithAdjustmentResponseBodyPlanResultResourceAllocations> && resourceAllocations) { DARABONBA_PTR_SET_RVALUE(resourceAllocations_, resourceAllocations) };


  protected:
    // The resource allocation information in the elastic planning result.
    std::shared_ptr<vector<Models::ScaleWithAdjustmentResponseBodyPlanResultResourceAllocations>> resourceAllocations_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
