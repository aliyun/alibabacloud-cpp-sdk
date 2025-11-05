// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTREPLICAEDGESUPPORTEDRESPONSEBODYSUPPORTEDREGIONS_HPP_
#define ALIBABACLOUD_MODELS_LISTREPLICAEDGESUPPORTEDRESPONSEBODYSUPPORTEDREGIONS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListReplicaEdgeSupportedResponseBodySupportedRegionsZones.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ebs20210730
{
namespace Models
{
  class ListReplicaEdgeSupportedResponseBodySupportedRegions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListReplicaEdgeSupportedResponseBodySupportedRegions& obj) { 
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Zones, zones_);
    };
    friend void from_json(const Darabonba::Json& j, ListReplicaEdgeSupportedResponseBodySupportedRegions& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Zones, zones_);
    };
    ListReplicaEdgeSupportedResponseBodySupportedRegions() = default ;
    ListReplicaEdgeSupportedResponseBodySupportedRegions(const ListReplicaEdgeSupportedResponseBodySupportedRegions &) = default ;
    ListReplicaEdgeSupportedResponseBodySupportedRegions(ListReplicaEdgeSupportedResponseBodySupportedRegions &&) = default ;
    ListReplicaEdgeSupportedResponseBodySupportedRegions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListReplicaEdgeSupportedResponseBodySupportedRegions() = default ;
    ListReplicaEdgeSupportedResponseBodySupportedRegions& operator=(const ListReplicaEdgeSupportedResponseBodySupportedRegions &) = default ;
    ListReplicaEdgeSupportedResponseBodySupportedRegions& operator=(ListReplicaEdgeSupportedResponseBodySupportedRegions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->regionId_ == nullptr
        && return this->zones_ == nullptr; };
    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListReplicaEdgeSupportedResponseBodySupportedRegions& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // zones Field Functions 
    bool hasZones() const { return this->zones_ != nullptr;};
    void deleteZones() { this->zones_ = nullptr;};
    inline const vector<Models::ListReplicaEdgeSupportedResponseBodySupportedRegionsZones> & zones() const { DARABONBA_PTR_GET_CONST(zones_, vector<Models::ListReplicaEdgeSupportedResponseBodySupportedRegionsZones>) };
    inline vector<Models::ListReplicaEdgeSupportedResponseBodySupportedRegionsZones> zones() { DARABONBA_PTR_GET(zones_, vector<Models::ListReplicaEdgeSupportedResponseBodySupportedRegionsZones>) };
    inline ListReplicaEdgeSupportedResponseBodySupportedRegions& setZones(const vector<Models::ListReplicaEdgeSupportedResponseBodySupportedRegionsZones> & zones) { DARABONBA_PTR_SET_VALUE(zones_, zones) };
    inline ListReplicaEdgeSupportedResponseBodySupportedRegions& setZones(vector<Models::ListReplicaEdgeSupportedResponseBodySupportedRegionsZones> && zones) { DARABONBA_PTR_SET_RVALUE(zones_, zones) };


  protected:
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<vector<Models::ListReplicaEdgeSupportedResponseBodySupportedRegionsZones>> zones_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ebs20210730
#endif
