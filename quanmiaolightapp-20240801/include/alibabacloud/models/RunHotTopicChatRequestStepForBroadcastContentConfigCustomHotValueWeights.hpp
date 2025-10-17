// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNHOTTOPICCHATREQUESTSTEPFORBROADCASTCONTENTCONFIGCUSTOMHOTVALUEWEIGHTS_HPP_
#define ALIBABACLOUD_MODELS_RUNHOTTOPICCHATREQUESTSTEPFORBROADCASTCONTENTCONFIGCUSTOMHOTVALUEWEIGHTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuanMiaoLightApp20240801
{
namespace Models
{
  class RunHotTopicChatRequestStepForBroadcastContentConfigCustomHotValueWeights : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunHotTopicChatRequestStepForBroadcastContentConfigCustomHotValueWeights& obj) { 
      DARABONBA_PTR_TO_JSON(dimension, dimension_);
      DARABONBA_PTR_TO_JSON(weight, weight_);
    };
    friend void from_json(const Darabonba::Json& j, RunHotTopicChatRequestStepForBroadcastContentConfigCustomHotValueWeights& obj) { 
      DARABONBA_PTR_FROM_JSON(dimension, dimension_);
      DARABONBA_PTR_FROM_JSON(weight, weight_);
    };
    RunHotTopicChatRequestStepForBroadcastContentConfigCustomHotValueWeights() = default ;
    RunHotTopicChatRequestStepForBroadcastContentConfigCustomHotValueWeights(const RunHotTopicChatRequestStepForBroadcastContentConfigCustomHotValueWeights &) = default ;
    RunHotTopicChatRequestStepForBroadcastContentConfigCustomHotValueWeights(RunHotTopicChatRequestStepForBroadcastContentConfigCustomHotValueWeights &&) = default ;
    RunHotTopicChatRequestStepForBroadcastContentConfigCustomHotValueWeights(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunHotTopicChatRequestStepForBroadcastContentConfigCustomHotValueWeights() = default ;
    RunHotTopicChatRequestStepForBroadcastContentConfigCustomHotValueWeights& operator=(const RunHotTopicChatRequestStepForBroadcastContentConfigCustomHotValueWeights &) = default ;
    RunHotTopicChatRequestStepForBroadcastContentConfigCustomHotValueWeights& operator=(RunHotTopicChatRequestStepForBroadcastContentConfigCustomHotValueWeights &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dimension_ == nullptr
        && return this->weight_ == nullptr; };
    // dimension Field Functions 
    bool hasDimension() const { return this->dimension_ != nullptr;};
    void deleteDimension() { this->dimension_ = nullptr;};
    inline string dimension() const { DARABONBA_PTR_GET_DEFAULT(dimension_, "") };
    inline RunHotTopicChatRequestStepForBroadcastContentConfigCustomHotValueWeights& setDimension(string dimension) { DARABONBA_PTR_SET_VALUE(dimension_, dimension) };


    // weight Field Functions 
    bool hasWeight() const { return this->weight_ != nullptr;};
    void deleteWeight() { this->weight_ = nullptr;};
    inline int32_t weight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0) };
    inline RunHotTopicChatRequestStepForBroadcastContentConfigCustomHotValueWeights& setWeight(int32_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


  protected:
    std::shared_ptr<string> dimension_ = nullptr;
    std::shared_ptr<int32_t> weight_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuanMiaoLightApp20240801
#endif
