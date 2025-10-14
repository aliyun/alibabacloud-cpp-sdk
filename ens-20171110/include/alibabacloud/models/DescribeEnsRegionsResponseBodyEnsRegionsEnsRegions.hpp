// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEENSREGIONSRESPONSEBODYENSREGIONSENSREGIONS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEENSREGIONSRESPONSEBODYENSREGIONSENSREGIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeEnsRegionsResponseBodyEnsRegionsEnsRegions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEnsRegionsResponseBodyEnsRegionsEnsRegions& obj) { 
      DARABONBA_PTR_TO_JSON(Area, area_);
      DARABONBA_PTR_TO_JSON(EnName, enName_);
      DARABONBA_PTR_TO_JSON(EnsRegionId, ensRegionId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Province, province_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEnsRegionsResponseBodyEnsRegionsEnsRegions& obj) { 
      DARABONBA_PTR_FROM_JSON(Area, area_);
      DARABONBA_PTR_FROM_JSON(EnName, enName_);
      DARABONBA_PTR_FROM_JSON(EnsRegionId, ensRegionId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Province, province_);
    };
    DescribeEnsRegionsResponseBodyEnsRegionsEnsRegions() = default ;
    DescribeEnsRegionsResponseBodyEnsRegionsEnsRegions(const DescribeEnsRegionsResponseBodyEnsRegionsEnsRegions &) = default ;
    DescribeEnsRegionsResponseBodyEnsRegionsEnsRegions(DescribeEnsRegionsResponseBodyEnsRegionsEnsRegions &&) = default ;
    DescribeEnsRegionsResponseBodyEnsRegionsEnsRegions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEnsRegionsResponseBodyEnsRegionsEnsRegions() = default ;
    DescribeEnsRegionsResponseBodyEnsRegionsEnsRegions& operator=(const DescribeEnsRegionsResponseBodyEnsRegionsEnsRegions &) = default ;
    DescribeEnsRegionsResponseBodyEnsRegionsEnsRegions& operator=(DescribeEnsRegionsResponseBodyEnsRegionsEnsRegions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->area_ == nullptr
        && return this->enName_ == nullptr && return this->ensRegionId_ == nullptr && return this->name_ == nullptr && return this->province_ == nullptr; };
    // area Field Functions 
    bool hasArea() const { return this->area_ != nullptr;};
    void deleteArea() { this->area_ = nullptr;};
    inline string area() const { DARABONBA_PTR_GET_DEFAULT(area_, "") };
    inline DescribeEnsRegionsResponseBodyEnsRegionsEnsRegions& setArea(string area) { DARABONBA_PTR_SET_VALUE(area_, area) };


    // enName Field Functions 
    bool hasEnName() const { return this->enName_ != nullptr;};
    void deleteEnName() { this->enName_ = nullptr;};
    inline string enName() const { DARABONBA_PTR_GET_DEFAULT(enName_, "") };
    inline DescribeEnsRegionsResponseBodyEnsRegionsEnsRegions& setEnName(string enName) { DARABONBA_PTR_SET_VALUE(enName_, enName) };


    // ensRegionId Field Functions 
    bool hasEnsRegionId() const { return this->ensRegionId_ != nullptr;};
    void deleteEnsRegionId() { this->ensRegionId_ = nullptr;};
    inline string ensRegionId() const { DARABONBA_PTR_GET_DEFAULT(ensRegionId_, "") };
    inline DescribeEnsRegionsResponseBodyEnsRegionsEnsRegions& setEnsRegionId(string ensRegionId) { DARABONBA_PTR_SET_VALUE(ensRegionId_, ensRegionId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeEnsRegionsResponseBodyEnsRegionsEnsRegions& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // province Field Functions 
    bool hasProvince() const { return this->province_ != nullptr;};
    void deleteProvince() { this->province_ = nullptr;};
    inline string province() const { DARABONBA_PTR_GET_DEFAULT(province_, "") };
    inline DescribeEnsRegionsResponseBodyEnsRegionsEnsRegions& setProvince(string province) { DARABONBA_PTR_SET_VALUE(province_, province) };


  protected:
    // The code of the region.
    std::shared_ptr<string> area_ = nullptr;
    // The name of the node.
    std::shared_ptr<string> enName_ = nullptr;
    // The ID of the node.
    std::shared_ptr<string> ensRegionId_ = nullptr;
    // The name of the node.
    std::shared_ptr<string> name_ = nullptr;
    // The province where the node is deployed.
    std::shared_ptr<string> province_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
