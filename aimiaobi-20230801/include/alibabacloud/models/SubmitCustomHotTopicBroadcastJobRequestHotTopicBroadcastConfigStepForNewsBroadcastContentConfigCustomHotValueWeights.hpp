// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITCUSTOMHOTTOPICBROADCASTJOBREQUESTHOTTOPICBROADCASTCONFIGSTEPFORNEWSBROADCASTCONTENTCONFIGCUSTOMHOTVALUEWEIGHTS_HPP_
#define ALIBABACLOUD_MODELS_SUBMITCUSTOMHOTTOPICBROADCASTJOBREQUESTHOTTOPICBROADCASTCONFIGSTEPFORNEWSBROADCASTCONTENTCONFIGCUSTOMHOTVALUEWEIGHTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class SubmitCustomHotTopicBroadcastJobRequestHotTopicBroadcastConfigStepForNewsBroadcastContentConfigCustomHotValueWeights : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitCustomHotTopicBroadcastJobRequestHotTopicBroadcastConfigStepForNewsBroadcastContentConfigCustomHotValueWeights& obj) { 
      DARABONBA_PTR_TO_JSON(Dimension, dimension_);
      DARABONBA_PTR_TO_JSON(DimensionName, dimensionName_);
      DARABONBA_PTR_TO_JSON(Weight, weight_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitCustomHotTopicBroadcastJobRequestHotTopicBroadcastConfigStepForNewsBroadcastContentConfigCustomHotValueWeights& obj) { 
      DARABONBA_PTR_FROM_JSON(Dimension, dimension_);
      DARABONBA_PTR_FROM_JSON(DimensionName, dimensionName_);
      DARABONBA_PTR_FROM_JSON(Weight, weight_);
    };
    SubmitCustomHotTopicBroadcastJobRequestHotTopicBroadcastConfigStepForNewsBroadcastContentConfigCustomHotValueWeights() = default ;
    SubmitCustomHotTopicBroadcastJobRequestHotTopicBroadcastConfigStepForNewsBroadcastContentConfigCustomHotValueWeights(const SubmitCustomHotTopicBroadcastJobRequestHotTopicBroadcastConfigStepForNewsBroadcastContentConfigCustomHotValueWeights &) = default ;
    SubmitCustomHotTopicBroadcastJobRequestHotTopicBroadcastConfigStepForNewsBroadcastContentConfigCustomHotValueWeights(SubmitCustomHotTopicBroadcastJobRequestHotTopicBroadcastConfigStepForNewsBroadcastContentConfigCustomHotValueWeights &&) = default ;
    SubmitCustomHotTopicBroadcastJobRequestHotTopicBroadcastConfigStepForNewsBroadcastContentConfigCustomHotValueWeights(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitCustomHotTopicBroadcastJobRequestHotTopicBroadcastConfigStepForNewsBroadcastContentConfigCustomHotValueWeights() = default ;
    SubmitCustomHotTopicBroadcastJobRequestHotTopicBroadcastConfigStepForNewsBroadcastContentConfigCustomHotValueWeights& operator=(const SubmitCustomHotTopicBroadcastJobRequestHotTopicBroadcastConfigStepForNewsBroadcastContentConfigCustomHotValueWeights &) = default ;
    SubmitCustomHotTopicBroadcastJobRequestHotTopicBroadcastConfigStepForNewsBroadcastContentConfigCustomHotValueWeights& operator=(SubmitCustomHotTopicBroadcastJobRequestHotTopicBroadcastConfigStepForNewsBroadcastContentConfigCustomHotValueWeights &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dimension_ != nullptr
        && this->dimensionName_ != nullptr && this->weight_ != nullptr; };
    // dimension Field Functions 
    bool hasDimension() const { return this->dimension_ != nullptr;};
    void deleteDimension() { this->dimension_ = nullptr;};
    inline string dimension() const { DARABONBA_PTR_GET_DEFAULT(dimension_, "") };
    inline SubmitCustomHotTopicBroadcastJobRequestHotTopicBroadcastConfigStepForNewsBroadcastContentConfigCustomHotValueWeights& setDimension(string dimension) { DARABONBA_PTR_SET_VALUE(dimension_, dimension) };


    // dimensionName Field Functions 
    bool hasDimensionName() const { return this->dimensionName_ != nullptr;};
    void deleteDimensionName() { this->dimensionName_ = nullptr;};
    inline string dimensionName() const { DARABONBA_PTR_GET_DEFAULT(dimensionName_, "") };
    inline SubmitCustomHotTopicBroadcastJobRequestHotTopicBroadcastConfigStepForNewsBroadcastContentConfigCustomHotValueWeights& setDimensionName(string dimensionName) { DARABONBA_PTR_SET_VALUE(dimensionName_, dimensionName) };


    // weight Field Functions 
    bool hasWeight() const { return this->weight_ != nullptr;};
    void deleteWeight() { this->weight_ = nullptr;};
    inline int32_t weight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0) };
    inline SubmitCustomHotTopicBroadcastJobRequestHotTopicBroadcastConfigStepForNewsBroadcastContentConfigCustomHotValueWeights& setWeight(int32_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


  protected:
    std::shared_ptr<string> dimension_ = nullptr;
    std::shared_ptr<string> dimensionName_ = nullptr;
    std::shared_ptr<int32_t> weight_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
