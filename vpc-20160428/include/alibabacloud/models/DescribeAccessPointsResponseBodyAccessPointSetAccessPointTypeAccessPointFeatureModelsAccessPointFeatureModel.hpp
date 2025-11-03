// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACCESSPOINTSRESPONSEBODYACCESSPOINTSETACCESSPOINTTYPEACCESSPOINTFEATUREMODELSACCESSPOINTFEATUREMODEL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACCESSPOINTSRESPONSEBODYACCESSPOINTSETACCESSPOINTTYPEACCESSPOINTFEATUREMODELSACCESSPOINTFEATUREMODEL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeAccessPointsResponseBodyAccessPointSetAccessPointTypeAccessPointFeatureModelsAccessPointFeatureModel : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAccessPointsResponseBodyAccessPointSetAccessPointTypeAccessPointFeatureModelsAccessPointFeatureModel& obj) { 
      DARABONBA_PTR_TO_JSON(FeatureKey, featureKey_);
      DARABONBA_PTR_TO_JSON(FeatureValue, featureValue_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAccessPointsResponseBodyAccessPointSetAccessPointTypeAccessPointFeatureModelsAccessPointFeatureModel& obj) { 
      DARABONBA_PTR_FROM_JSON(FeatureKey, featureKey_);
      DARABONBA_PTR_FROM_JSON(FeatureValue, featureValue_);
    };
    DescribeAccessPointsResponseBodyAccessPointSetAccessPointTypeAccessPointFeatureModelsAccessPointFeatureModel() = default ;
    DescribeAccessPointsResponseBodyAccessPointSetAccessPointTypeAccessPointFeatureModelsAccessPointFeatureModel(const DescribeAccessPointsResponseBodyAccessPointSetAccessPointTypeAccessPointFeatureModelsAccessPointFeatureModel &) = default ;
    DescribeAccessPointsResponseBodyAccessPointSetAccessPointTypeAccessPointFeatureModelsAccessPointFeatureModel(DescribeAccessPointsResponseBodyAccessPointSetAccessPointTypeAccessPointFeatureModelsAccessPointFeatureModel &&) = default ;
    DescribeAccessPointsResponseBodyAccessPointSetAccessPointTypeAccessPointFeatureModelsAccessPointFeatureModel(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAccessPointsResponseBodyAccessPointSetAccessPointTypeAccessPointFeatureModelsAccessPointFeatureModel() = default ;
    DescribeAccessPointsResponseBodyAccessPointSetAccessPointTypeAccessPointFeatureModelsAccessPointFeatureModel& operator=(const DescribeAccessPointsResponseBodyAccessPointSetAccessPointTypeAccessPointFeatureModelsAccessPointFeatureModel &) = default ;
    DescribeAccessPointsResponseBodyAccessPointSetAccessPointTypeAccessPointFeatureModelsAccessPointFeatureModel& operator=(DescribeAccessPointsResponseBodyAccessPointSetAccessPointTypeAccessPointFeatureModelsAccessPointFeatureModel &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->featureKey_ == nullptr
        && return this->featureValue_ == nullptr; };
    // featureKey Field Functions 
    bool hasFeatureKey() const { return this->featureKey_ != nullptr;};
    void deleteFeatureKey() { this->featureKey_ = nullptr;};
    inline string featureKey() const { DARABONBA_PTR_GET_DEFAULT(featureKey_, "") };
    inline DescribeAccessPointsResponseBodyAccessPointSetAccessPointTypeAccessPointFeatureModelsAccessPointFeatureModel& setFeatureKey(string featureKey) { DARABONBA_PTR_SET_VALUE(featureKey_, featureKey) };


    // featureValue Field Functions 
    bool hasFeatureValue() const { return this->featureValue_ != nullptr;};
    void deleteFeatureValue() { this->featureValue_ = nullptr;};
    inline string featureValue() const { DARABONBA_PTR_GET_DEFAULT(featureValue_, "") };
    inline DescribeAccessPointsResponseBodyAccessPointSetAccessPointTypeAccessPointFeatureModelsAccessPointFeatureModel& setFeatureValue(string featureValue) { DARABONBA_PTR_SET_VALUE(featureValue_, featureValue) };


  protected:
    // The feature of the access point.
    std::shared_ptr<string> featureKey_ = nullptr;
    // The feature value of the access point.
    std::shared_ptr<string> featureValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
