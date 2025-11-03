// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACCESSPOINTSRESPONSEBODYACCESSPOINTSETACCESSPOINTTYPEACCESSPOINTFEATUREMODELS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACCESSPOINTSRESPONSEBODYACCESSPOINTSETACCESSPOINTTYPEACCESSPOINTFEATUREMODELS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeAccessPointsResponseBodyAccessPointSetAccessPointTypeAccessPointFeatureModelsAccessPointFeatureModel.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeAccessPointsResponseBodyAccessPointSetAccessPointTypeAccessPointFeatureModels : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAccessPointsResponseBodyAccessPointSetAccessPointTypeAccessPointFeatureModels& obj) { 
      DARABONBA_PTR_TO_JSON(AccessPointFeatureModel, accessPointFeatureModel_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAccessPointsResponseBodyAccessPointSetAccessPointTypeAccessPointFeatureModels& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessPointFeatureModel, accessPointFeatureModel_);
    };
    DescribeAccessPointsResponseBodyAccessPointSetAccessPointTypeAccessPointFeatureModels() = default ;
    DescribeAccessPointsResponseBodyAccessPointSetAccessPointTypeAccessPointFeatureModels(const DescribeAccessPointsResponseBodyAccessPointSetAccessPointTypeAccessPointFeatureModels &) = default ;
    DescribeAccessPointsResponseBodyAccessPointSetAccessPointTypeAccessPointFeatureModels(DescribeAccessPointsResponseBodyAccessPointSetAccessPointTypeAccessPointFeatureModels &&) = default ;
    DescribeAccessPointsResponseBodyAccessPointSetAccessPointTypeAccessPointFeatureModels(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAccessPointsResponseBodyAccessPointSetAccessPointTypeAccessPointFeatureModels() = default ;
    DescribeAccessPointsResponseBodyAccessPointSetAccessPointTypeAccessPointFeatureModels& operator=(const DescribeAccessPointsResponseBodyAccessPointSetAccessPointTypeAccessPointFeatureModels &) = default ;
    DescribeAccessPointsResponseBodyAccessPointSetAccessPointTypeAccessPointFeatureModels& operator=(DescribeAccessPointsResponseBodyAccessPointSetAccessPointTypeAccessPointFeatureModels &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessPointFeatureModel_ == nullptr; };
    // accessPointFeatureModel Field Functions 
    bool hasAccessPointFeatureModel() const { return this->accessPointFeatureModel_ != nullptr;};
    void deleteAccessPointFeatureModel() { this->accessPointFeatureModel_ = nullptr;};
    inline const vector<Models::DescribeAccessPointsResponseBodyAccessPointSetAccessPointTypeAccessPointFeatureModelsAccessPointFeatureModel> & accessPointFeatureModel() const { DARABONBA_PTR_GET_CONST(accessPointFeatureModel_, vector<Models::DescribeAccessPointsResponseBodyAccessPointSetAccessPointTypeAccessPointFeatureModelsAccessPointFeatureModel>) };
    inline vector<Models::DescribeAccessPointsResponseBodyAccessPointSetAccessPointTypeAccessPointFeatureModelsAccessPointFeatureModel> accessPointFeatureModel() { DARABONBA_PTR_GET(accessPointFeatureModel_, vector<Models::DescribeAccessPointsResponseBodyAccessPointSetAccessPointTypeAccessPointFeatureModelsAccessPointFeatureModel>) };
    inline DescribeAccessPointsResponseBodyAccessPointSetAccessPointTypeAccessPointFeatureModels& setAccessPointFeatureModel(const vector<Models::DescribeAccessPointsResponseBodyAccessPointSetAccessPointTypeAccessPointFeatureModelsAccessPointFeatureModel> & accessPointFeatureModel) { DARABONBA_PTR_SET_VALUE(accessPointFeatureModel_, accessPointFeatureModel) };
    inline DescribeAccessPointsResponseBodyAccessPointSetAccessPointTypeAccessPointFeatureModels& setAccessPointFeatureModel(vector<Models::DescribeAccessPointsResponseBodyAccessPointSetAccessPointTypeAccessPointFeatureModelsAccessPointFeatureModel> && accessPointFeatureModel) { DARABONBA_PTR_SET_RVALUE(accessPointFeatureModel_, accessPointFeatureModel) };


  protected:
    std::shared_ptr<vector<Models::DescribeAccessPointsResponseBodyAccessPointSetAccessPointTypeAccessPointFeatureModelsAccessPointFeatureModel>> accessPointFeatureModel_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
