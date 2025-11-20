// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVAULTREPLICATIONREGIONSRESPONSEBODYREGIONS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVAULTREPLICATIONREGIONSRESPONSEBODYREGIONS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class DescribeVaultReplicationRegionsResponseBodyRegions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVaultReplicationRegionsResponseBodyRegions& obj) { 
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVaultReplicationRegionsResponseBodyRegions& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DescribeVaultReplicationRegionsResponseBodyRegions() = default ;
    DescribeVaultReplicationRegionsResponseBodyRegions(const DescribeVaultReplicationRegionsResponseBodyRegions &) = default ;
    DescribeVaultReplicationRegionsResponseBodyRegions(DescribeVaultReplicationRegionsResponseBodyRegions &&) = default ;
    DescribeVaultReplicationRegionsResponseBodyRegions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVaultReplicationRegionsResponseBodyRegions() = default ;
    DescribeVaultReplicationRegionsResponseBodyRegions& operator=(const DescribeVaultReplicationRegionsResponseBodyRegions &) = default ;
    DescribeVaultReplicationRegionsResponseBodyRegions& operator=(DescribeVaultReplicationRegionsResponseBodyRegions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->regionId_ == nullptr; };
    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline const vector<string> & regionId() const { DARABONBA_PTR_GET_CONST(regionId_, vector<string>) };
    inline vector<string> regionId() { DARABONBA_PTR_GET(regionId_, vector<string>) };
    inline DescribeVaultReplicationRegionsResponseBodyRegions& setRegionId(const vector<string> & regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };
    inline DescribeVaultReplicationRegionsResponseBodyRegions& setRegionId(vector<string> && regionId) { DARABONBA_PTR_SET_RVALUE(regionId_, regionId) };


  protected:
    std::shared_ptr<vector<string>> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
