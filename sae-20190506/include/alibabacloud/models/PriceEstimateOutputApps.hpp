// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PRICEESTIMATEOUTPUTAPPS_HPP_
#define ALIBABACLOUD_MODELS_PRICEESTIMATEOUTPUTAPPS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/PriceEstimateFeature.hpp>
#include <vector>
#include <alibabacloud/models/PriceEstimateOutputAppsUsages.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class PriceEstimateOutputApps : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PriceEstimateOutputApps& obj) { 
      DARABONBA_PTR_TO_JSON(Feature, feature_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Usages, usages_);
    };
    friend void from_json(const Darabonba::Json& j, PriceEstimateOutputApps& obj) { 
      DARABONBA_PTR_FROM_JSON(Feature, feature_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Usages, usages_);
    };
    PriceEstimateOutputApps() = default ;
    PriceEstimateOutputApps(const PriceEstimateOutputApps &) = default ;
    PriceEstimateOutputApps(PriceEstimateOutputApps &&) = default ;
    PriceEstimateOutputApps(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PriceEstimateOutputApps() = default ;
    PriceEstimateOutputApps& operator=(const PriceEstimateOutputApps &) = default ;
    PriceEstimateOutputApps& operator=(PriceEstimateOutputApps &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->feature_ == nullptr
        && return this->id_ == nullptr && return this->usages_ == nullptr; };
    // feature Field Functions 
    bool hasFeature() const { return this->feature_ != nullptr;};
    void deleteFeature() { this->feature_ = nullptr;};
    inline const Models::PriceEstimateFeature & feature() const { DARABONBA_PTR_GET_CONST(feature_, Models::PriceEstimateFeature) };
    inline Models::PriceEstimateFeature feature() { DARABONBA_PTR_GET(feature_, Models::PriceEstimateFeature) };
    inline PriceEstimateOutputApps& setFeature(const Models::PriceEstimateFeature & feature) { DARABONBA_PTR_SET_VALUE(feature_, feature) };
    inline PriceEstimateOutputApps& setFeature(Models::PriceEstimateFeature && feature) { DARABONBA_PTR_SET_RVALUE(feature_, feature) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline PriceEstimateOutputApps& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // usages Field Functions 
    bool hasUsages() const { return this->usages_ != nullptr;};
    void deleteUsages() { this->usages_ = nullptr;};
    inline const vector<Models::PriceEstimateOutputAppsUsages> & usages() const { DARABONBA_PTR_GET_CONST(usages_, vector<Models::PriceEstimateOutputAppsUsages>) };
    inline vector<Models::PriceEstimateOutputAppsUsages> usages() { DARABONBA_PTR_GET(usages_, vector<Models::PriceEstimateOutputAppsUsages>) };
    inline PriceEstimateOutputApps& setUsages(const vector<Models::PriceEstimateOutputAppsUsages> & usages) { DARABONBA_PTR_SET_VALUE(usages_, usages) };
    inline PriceEstimateOutputApps& setUsages(vector<Models::PriceEstimateOutputAppsUsages> && usages) { DARABONBA_PTR_SET_RVALUE(usages_, usages) };


  protected:
    std::shared_ptr<Models::PriceEstimateFeature> feature_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<vector<Models::PriceEstimateOutputAppsUsages>> usages_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
