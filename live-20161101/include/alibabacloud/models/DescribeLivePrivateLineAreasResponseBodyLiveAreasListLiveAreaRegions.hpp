// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEPRIVATELINEAREASRESPONSEBODYLIVEAREASLISTLIVEAREAREGIONS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEPRIVATELINEAREASRESPONSEBODYLIVEAREASLISTLIVEAREAREGIONS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeLivePrivateLineAreasResponseBodyLiveAreasListLiveAreaRegionsRegion.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLivePrivateLineAreasResponseBodyLiveAreasListLiveAreaRegions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLivePrivateLineAreasResponseBodyLiveAreasListLiveAreaRegions& obj) { 
      DARABONBA_PTR_TO_JSON(Region, region_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLivePrivateLineAreasResponseBodyLiveAreasListLiveAreaRegions& obj) { 
      DARABONBA_PTR_FROM_JSON(Region, region_);
    };
    DescribeLivePrivateLineAreasResponseBodyLiveAreasListLiveAreaRegions() = default ;
    DescribeLivePrivateLineAreasResponseBodyLiveAreasListLiveAreaRegions(const DescribeLivePrivateLineAreasResponseBodyLiveAreasListLiveAreaRegions &) = default ;
    DescribeLivePrivateLineAreasResponseBodyLiveAreasListLiveAreaRegions(DescribeLivePrivateLineAreasResponseBodyLiveAreasListLiveAreaRegions &&) = default ;
    DescribeLivePrivateLineAreasResponseBodyLiveAreasListLiveAreaRegions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLivePrivateLineAreasResponseBodyLiveAreasListLiveAreaRegions() = default ;
    DescribeLivePrivateLineAreasResponseBodyLiveAreasListLiveAreaRegions& operator=(const DescribeLivePrivateLineAreasResponseBodyLiveAreasListLiveAreaRegions &) = default ;
    DescribeLivePrivateLineAreasResponseBodyLiveAreasListLiveAreaRegions& operator=(DescribeLivePrivateLineAreasResponseBodyLiveAreasListLiveAreaRegions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->region_ == nullptr; };
    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline const vector<Models::DescribeLivePrivateLineAreasResponseBodyLiveAreasListLiveAreaRegionsRegion> & region() const { DARABONBA_PTR_GET_CONST(region_, vector<Models::DescribeLivePrivateLineAreasResponseBodyLiveAreasListLiveAreaRegionsRegion>) };
    inline vector<Models::DescribeLivePrivateLineAreasResponseBodyLiveAreasListLiveAreaRegionsRegion> region() { DARABONBA_PTR_GET(region_, vector<Models::DescribeLivePrivateLineAreasResponseBodyLiveAreasListLiveAreaRegionsRegion>) };
    inline DescribeLivePrivateLineAreasResponseBodyLiveAreasListLiveAreaRegions& setRegion(const vector<Models::DescribeLivePrivateLineAreasResponseBodyLiveAreasListLiveAreaRegionsRegion> & region) { DARABONBA_PTR_SET_VALUE(region_, region) };
    inline DescribeLivePrivateLineAreasResponseBodyLiveAreasListLiveAreaRegions& setRegion(vector<Models::DescribeLivePrivateLineAreasResponseBodyLiveAreasListLiveAreaRegionsRegion> && region) { DARABONBA_PTR_SET_RVALUE(region_, region) };


  protected:
    std::shared_ptr<vector<Models::DescribeLivePrivateLineAreasResponseBodyLiveAreasListLiveAreaRegionsRegion>> region_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
