// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETECTVEHICLEICONGESTIONADVANCEREQUESTPREREGIONINTERSECTFEATURES_HPP_
#define ALIBABACLOUD_MODELS_DETECTVEHICLEICONGESTIONADVANCEREQUESTPREREGIONINTERSECTFEATURES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Objectdet20191230
{
namespace Models
{
  class DetectVehicleICongestionAdvanceRequestPreRegionIntersectFeatures : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetectVehicleICongestionAdvanceRequestPreRegionIntersectFeatures& obj) { 
      DARABONBA_PTR_TO_JSON(Features, features_);
    };
    friend void from_json(const Darabonba::Json& j, DetectVehicleICongestionAdvanceRequestPreRegionIntersectFeatures& obj) { 
      DARABONBA_PTR_FROM_JSON(Features, features_);
    };
    DetectVehicleICongestionAdvanceRequestPreRegionIntersectFeatures() = default ;
    DetectVehicleICongestionAdvanceRequestPreRegionIntersectFeatures(const DetectVehicleICongestionAdvanceRequestPreRegionIntersectFeatures &) = default ;
    DetectVehicleICongestionAdvanceRequestPreRegionIntersectFeatures(DetectVehicleICongestionAdvanceRequestPreRegionIntersectFeatures &&) = default ;
    DetectVehicleICongestionAdvanceRequestPreRegionIntersectFeatures(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetectVehicleICongestionAdvanceRequestPreRegionIntersectFeatures() = default ;
    DetectVehicleICongestionAdvanceRequestPreRegionIntersectFeatures& operator=(const DetectVehicleICongestionAdvanceRequestPreRegionIntersectFeatures &) = default ;
    DetectVehicleICongestionAdvanceRequestPreRegionIntersectFeatures& operator=(DetectVehicleICongestionAdvanceRequestPreRegionIntersectFeatures &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->features_ != nullptr; };
    // features Field Functions 
    bool hasFeatures() const { return this->features_ != nullptr;};
    void deleteFeatures() { this->features_ = nullptr;};
    inline const vector<string> & features() const { DARABONBA_PTR_GET_CONST(features_, vector<string>) };
    inline vector<string> features() { DARABONBA_PTR_GET(features_, vector<string>) };
    inline DetectVehicleICongestionAdvanceRequestPreRegionIntersectFeatures& setFeatures(const vector<string> & features) { DARABONBA_PTR_SET_VALUE(features_, features) };
    inline DetectVehicleICongestionAdvanceRequestPreRegionIntersectFeatures& setFeatures(vector<string> && features) { DARABONBA_PTR_SET_RVALUE(features_, features) };


  protected:
    std::shared_ptr<vector<string>> features_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Objectdet20191230
#endif
