// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETECTVEHICLEICONGESTIONRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DETECTVEHICLEICONGESTIONRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DetectVehicleICongestionResponseBodyDataElements.hpp>
#include <alibabacloud/models/DetectVehicleICongestionResponseBodyDataRegionIntersectFeatures.hpp>
#include <alibabacloud/models/DetectVehicleICongestionResponseBodyDataRegionIntersectMatched.hpp>
#include <alibabacloud/models/DetectVehicleICongestionResponseBodyDataRegionIntersects.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Objectdet20191230
{
namespace Models
{
  class DetectVehicleICongestionResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetectVehicleICongestionResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Elements, elements_);
      DARABONBA_PTR_TO_JSON(RegionIntersectFeatures, regionIntersectFeatures_);
      DARABONBA_PTR_TO_JSON(RegionIntersectMatched, regionIntersectMatched_);
      DARABONBA_PTR_TO_JSON(RegionIntersects, regionIntersects_);
    };
    friend void from_json(const Darabonba::Json& j, DetectVehicleICongestionResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Elements, elements_);
      DARABONBA_PTR_FROM_JSON(RegionIntersectFeatures, regionIntersectFeatures_);
      DARABONBA_PTR_FROM_JSON(RegionIntersectMatched, regionIntersectMatched_);
      DARABONBA_PTR_FROM_JSON(RegionIntersects, regionIntersects_);
    };
    DetectVehicleICongestionResponseBodyData() = default ;
    DetectVehicleICongestionResponseBodyData(const DetectVehicleICongestionResponseBodyData &) = default ;
    DetectVehicleICongestionResponseBodyData(DetectVehicleICongestionResponseBodyData &&) = default ;
    DetectVehicleICongestionResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetectVehicleICongestionResponseBodyData() = default ;
    DetectVehicleICongestionResponseBodyData& operator=(const DetectVehicleICongestionResponseBodyData &) = default ;
    DetectVehicleICongestionResponseBodyData& operator=(DetectVehicleICongestionResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->elements_ != nullptr
        && this->regionIntersectFeatures_ != nullptr && this->regionIntersectMatched_ != nullptr && this->regionIntersects_ != nullptr; };
    // elements Field Functions 
    bool hasElements() const { return this->elements_ != nullptr;};
    void deleteElements() { this->elements_ = nullptr;};
    inline const vector<Models::DetectVehicleICongestionResponseBodyDataElements> & elements() const { DARABONBA_PTR_GET_CONST(elements_, vector<Models::DetectVehicleICongestionResponseBodyDataElements>) };
    inline vector<Models::DetectVehicleICongestionResponseBodyDataElements> elements() { DARABONBA_PTR_GET(elements_, vector<Models::DetectVehicleICongestionResponseBodyDataElements>) };
    inline DetectVehicleICongestionResponseBodyData& setElements(const vector<Models::DetectVehicleICongestionResponseBodyDataElements> & elements) { DARABONBA_PTR_SET_VALUE(elements_, elements) };
    inline DetectVehicleICongestionResponseBodyData& setElements(vector<Models::DetectVehicleICongestionResponseBodyDataElements> && elements) { DARABONBA_PTR_SET_RVALUE(elements_, elements) };


    // regionIntersectFeatures Field Functions 
    bool hasRegionIntersectFeatures() const { return this->regionIntersectFeatures_ != nullptr;};
    void deleteRegionIntersectFeatures() { this->regionIntersectFeatures_ = nullptr;};
    inline const vector<Models::DetectVehicleICongestionResponseBodyDataRegionIntersectFeatures> & regionIntersectFeatures() const { DARABONBA_PTR_GET_CONST(regionIntersectFeatures_, vector<Models::DetectVehicleICongestionResponseBodyDataRegionIntersectFeatures>) };
    inline vector<Models::DetectVehicleICongestionResponseBodyDataRegionIntersectFeatures> regionIntersectFeatures() { DARABONBA_PTR_GET(regionIntersectFeatures_, vector<Models::DetectVehicleICongestionResponseBodyDataRegionIntersectFeatures>) };
    inline DetectVehicleICongestionResponseBodyData& setRegionIntersectFeatures(const vector<Models::DetectVehicleICongestionResponseBodyDataRegionIntersectFeatures> & regionIntersectFeatures) { DARABONBA_PTR_SET_VALUE(regionIntersectFeatures_, regionIntersectFeatures) };
    inline DetectVehicleICongestionResponseBodyData& setRegionIntersectFeatures(vector<Models::DetectVehicleICongestionResponseBodyDataRegionIntersectFeatures> && regionIntersectFeatures) { DARABONBA_PTR_SET_RVALUE(regionIntersectFeatures_, regionIntersectFeatures) };


    // regionIntersectMatched Field Functions 
    bool hasRegionIntersectMatched() const { return this->regionIntersectMatched_ != nullptr;};
    void deleteRegionIntersectMatched() { this->regionIntersectMatched_ = nullptr;};
    inline const vector<Models::DetectVehicleICongestionResponseBodyDataRegionIntersectMatched> & regionIntersectMatched() const { DARABONBA_PTR_GET_CONST(regionIntersectMatched_, vector<Models::DetectVehicleICongestionResponseBodyDataRegionIntersectMatched>) };
    inline vector<Models::DetectVehicleICongestionResponseBodyDataRegionIntersectMatched> regionIntersectMatched() { DARABONBA_PTR_GET(regionIntersectMatched_, vector<Models::DetectVehicleICongestionResponseBodyDataRegionIntersectMatched>) };
    inline DetectVehicleICongestionResponseBodyData& setRegionIntersectMatched(const vector<Models::DetectVehicleICongestionResponseBodyDataRegionIntersectMatched> & regionIntersectMatched) { DARABONBA_PTR_SET_VALUE(regionIntersectMatched_, regionIntersectMatched) };
    inline DetectVehicleICongestionResponseBodyData& setRegionIntersectMatched(vector<Models::DetectVehicleICongestionResponseBodyDataRegionIntersectMatched> && regionIntersectMatched) { DARABONBA_PTR_SET_RVALUE(regionIntersectMatched_, regionIntersectMatched) };


    // regionIntersects Field Functions 
    bool hasRegionIntersects() const { return this->regionIntersects_ != nullptr;};
    void deleteRegionIntersects() { this->regionIntersects_ = nullptr;};
    inline const vector<Models::DetectVehicleICongestionResponseBodyDataRegionIntersects> & regionIntersects() const { DARABONBA_PTR_GET_CONST(regionIntersects_, vector<Models::DetectVehicleICongestionResponseBodyDataRegionIntersects>) };
    inline vector<Models::DetectVehicleICongestionResponseBodyDataRegionIntersects> regionIntersects() { DARABONBA_PTR_GET(regionIntersects_, vector<Models::DetectVehicleICongestionResponseBodyDataRegionIntersects>) };
    inline DetectVehicleICongestionResponseBodyData& setRegionIntersects(const vector<Models::DetectVehicleICongestionResponseBodyDataRegionIntersects> & regionIntersects) { DARABONBA_PTR_SET_VALUE(regionIntersects_, regionIntersects) };
    inline DetectVehicleICongestionResponseBodyData& setRegionIntersects(vector<Models::DetectVehicleICongestionResponseBodyDataRegionIntersects> && regionIntersects) { DARABONBA_PTR_SET_RVALUE(regionIntersects_, regionIntersects) };


  protected:
    std::shared_ptr<vector<Models::DetectVehicleICongestionResponseBodyDataElements>> elements_ = nullptr;
    std::shared_ptr<vector<Models::DetectVehicleICongestionResponseBodyDataRegionIntersectFeatures>> regionIntersectFeatures_ = nullptr;
    std::shared_ptr<vector<Models::DetectVehicleICongestionResponseBodyDataRegionIntersectMatched>> regionIntersectMatched_ = nullptr;
    std::shared_ptr<vector<Models::DetectVehicleICongestionResponseBodyDataRegionIntersects>> regionIntersects_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Objectdet20191230
#endif
