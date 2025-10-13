// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETRAININGJOBREQUESTCOMPUTERESOURCESPOTSPEC_HPP_
#define ALIBABACLOUD_MODELS_CREATETRAININGJOBREQUESTCOMPUTERESOURCESPOTSPEC_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class CreateTrainingJobRequestComputeResourceSpotSpec : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTrainingJobRequestComputeResourceSpotSpec& obj) { 
      DARABONBA_PTR_TO_JSON(SpotDiscountLimit, spotDiscountLimit_);
      DARABONBA_PTR_TO_JSON(SpotStrategy, spotStrategy_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTrainingJobRequestComputeResourceSpotSpec& obj) { 
      DARABONBA_PTR_FROM_JSON(SpotDiscountLimit, spotDiscountLimit_);
      DARABONBA_PTR_FROM_JSON(SpotStrategy, spotStrategy_);
    };
    CreateTrainingJobRequestComputeResourceSpotSpec() = default ;
    CreateTrainingJobRequestComputeResourceSpotSpec(const CreateTrainingJobRequestComputeResourceSpotSpec &) = default ;
    CreateTrainingJobRequestComputeResourceSpotSpec(CreateTrainingJobRequestComputeResourceSpotSpec &&) = default ;
    CreateTrainingJobRequestComputeResourceSpotSpec(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTrainingJobRequestComputeResourceSpotSpec() = default ;
    CreateTrainingJobRequestComputeResourceSpotSpec& operator=(const CreateTrainingJobRequestComputeResourceSpotSpec &) = default ;
    CreateTrainingJobRequestComputeResourceSpotSpec& operator=(CreateTrainingJobRequestComputeResourceSpotSpec &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->spotDiscountLimit_ == nullptr
        && return this->spotStrategy_ == nullptr; };
    // spotDiscountLimit Field Functions 
    bool hasSpotDiscountLimit() const { return this->spotDiscountLimit_ != nullptr;};
    void deleteSpotDiscountLimit() { this->spotDiscountLimit_ = nullptr;};
    inline float spotDiscountLimit() const { DARABONBA_PTR_GET_DEFAULT(spotDiscountLimit_, 0.0) };
    inline CreateTrainingJobRequestComputeResourceSpotSpec& setSpotDiscountLimit(float spotDiscountLimit) { DARABONBA_PTR_SET_VALUE(spotDiscountLimit_, spotDiscountLimit) };


    // spotStrategy Field Functions 
    bool hasSpotStrategy() const { return this->spotStrategy_ != nullptr;};
    void deleteSpotStrategy() { this->spotStrategy_ = nullptr;};
    inline string spotStrategy() const { DARABONBA_PTR_GET_DEFAULT(spotStrategy_, "") };
    inline CreateTrainingJobRequestComputeResourceSpotSpec& setSpotStrategy(string spotStrategy) { DARABONBA_PTR_SET_VALUE(spotStrategy_, spotStrategy) };


  protected:
    std::shared_ptr<float> spotDiscountLimit_ = nullptr;
    std::shared_ptr<string> spotStrategy_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
