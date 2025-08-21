// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEELBAVAILABLERESOURCEINFORESPONSEBODYELBAVAILABLERESOURCEINFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEELBAVAILABLERESOURCEINFORESPONSEBODYELBAVAILABLERESOURCEINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeElbAvailableResourceInfoResponseBodyElbAvailableResourceInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeElbAvailableResourceInfoResponseBodyElbAvailableResourceInfo& obj) { 
      DARABONBA_PTR_TO_JSON(Ability, ability_);
      DARABONBA_PTR_TO_JSON(Area, area_);
      DARABONBA_PTR_TO_JSON(CanBuyCount, canBuyCount_);
      DARABONBA_PTR_TO_JSON(EnName, enName_);
      DARABONBA_PTR_TO_JSON(EnsRegionId, ensRegionId_);
      DARABONBA_PTR_TO_JSON(LoadBalancerSpec, loadBalancerSpec_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Province, province_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeElbAvailableResourceInfoResponseBodyElbAvailableResourceInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(Ability, ability_);
      DARABONBA_PTR_FROM_JSON(Area, area_);
      DARABONBA_PTR_FROM_JSON(CanBuyCount, canBuyCount_);
      DARABONBA_PTR_FROM_JSON(EnName, enName_);
      DARABONBA_PTR_FROM_JSON(EnsRegionId, ensRegionId_);
      DARABONBA_PTR_FROM_JSON(LoadBalancerSpec, loadBalancerSpec_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Province, province_);
    };
    DescribeElbAvailableResourceInfoResponseBodyElbAvailableResourceInfo() = default ;
    DescribeElbAvailableResourceInfoResponseBodyElbAvailableResourceInfo(const DescribeElbAvailableResourceInfoResponseBodyElbAvailableResourceInfo &) = default ;
    DescribeElbAvailableResourceInfoResponseBodyElbAvailableResourceInfo(DescribeElbAvailableResourceInfoResponseBodyElbAvailableResourceInfo &&) = default ;
    DescribeElbAvailableResourceInfoResponseBodyElbAvailableResourceInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeElbAvailableResourceInfoResponseBodyElbAvailableResourceInfo() = default ;
    DescribeElbAvailableResourceInfoResponseBodyElbAvailableResourceInfo& operator=(const DescribeElbAvailableResourceInfoResponseBodyElbAvailableResourceInfo &) = default ;
    DescribeElbAvailableResourceInfoResponseBodyElbAvailableResourceInfo& operator=(DescribeElbAvailableResourceInfoResponseBodyElbAvailableResourceInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ability_ != nullptr
        && this->area_ != nullptr && this->canBuyCount_ != nullptr && this->enName_ != nullptr && this->ensRegionId_ != nullptr && this->loadBalancerSpec_ != nullptr
        && this->name_ != nullptr && this->province_ != nullptr; };
    // ability Field Functions 
    bool hasAbility() const { return this->ability_ != nullptr;};
    void deleteAbility() { this->ability_ = nullptr;};
    inline const vector<string> & ability() const { DARABONBA_PTR_GET_CONST(ability_, vector<string>) };
    inline vector<string> ability() { DARABONBA_PTR_GET(ability_, vector<string>) };
    inline DescribeElbAvailableResourceInfoResponseBodyElbAvailableResourceInfo& setAbility(const vector<string> & ability) { DARABONBA_PTR_SET_VALUE(ability_, ability) };
    inline DescribeElbAvailableResourceInfoResponseBodyElbAvailableResourceInfo& setAbility(vector<string> && ability) { DARABONBA_PTR_SET_RVALUE(ability_, ability) };


    // area Field Functions 
    bool hasArea() const { return this->area_ != nullptr;};
    void deleteArea() { this->area_ = nullptr;};
    inline string area() const { DARABONBA_PTR_GET_DEFAULT(area_, "") };
    inline DescribeElbAvailableResourceInfoResponseBodyElbAvailableResourceInfo& setArea(string area) { DARABONBA_PTR_SET_VALUE(area_, area) };


    // canBuyCount Field Functions 
    bool hasCanBuyCount() const { return this->canBuyCount_ != nullptr;};
    void deleteCanBuyCount() { this->canBuyCount_ = nullptr;};
    inline string canBuyCount() const { DARABONBA_PTR_GET_DEFAULT(canBuyCount_, "") };
    inline DescribeElbAvailableResourceInfoResponseBodyElbAvailableResourceInfo& setCanBuyCount(string canBuyCount) { DARABONBA_PTR_SET_VALUE(canBuyCount_, canBuyCount) };


    // enName Field Functions 
    bool hasEnName() const { return this->enName_ != nullptr;};
    void deleteEnName() { this->enName_ = nullptr;};
    inline string enName() const { DARABONBA_PTR_GET_DEFAULT(enName_, "") };
    inline DescribeElbAvailableResourceInfoResponseBodyElbAvailableResourceInfo& setEnName(string enName) { DARABONBA_PTR_SET_VALUE(enName_, enName) };


    // ensRegionId Field Functions 
    bool hasEnsRegionId() const { return this->ensRegionId_ != nullptr;};
    void deleteEnsRegionId() { this->ensRegionId_ = nullptr;};
    inline string ensRegionId() const { DARABONBA_PTR_GET_DEFAULT(ensRegionId_, "") };
    inline DescribeElbAvailableResourceInfoResponseBodyElbAvailableResourceInfo& setEnsRegionId(string ensRegionId) { DARABONBA_PTR_SET_VALUE(ensRegionId_, ensRegionId) };


    // loadBalancerSpec Field Functions 
    bool hasLoadBalancerSpec() const { return this->loadBalancerSpec_ != nullptr;};
    void deleteLoadBalancerSpec() { this->loadBalancerSpec_ = nullptr;};
    inline const vector<string> & loadBalancerSpec() const { DARABONBA_PTR_GET_CONST(loadBalancerSpec_, vector<string>) };
    inline vector<string> loadBalancerSpec() { DARABONBA_PTR_GET(loadBalancerSpec_, vector<string>) };
    inline DescribeElbAvailableResourceInfoResponseBodyElbAvailableResourceInfo& setLoadBalancerSpec(const vector<string> & loadBalancerSpec) { DARABONBA_PTR_SET_VALUE(loadBalancerSpec_, loadBalancerSpec) };
    inline DescribeElbAvailableResourceInfoResponseBodyElbAvailableResourceInfo& setLoadBalancerSpec(vector<string> && loadBalancerSpec) { DARABONBA_PTR_SET_RVALUE(loadBalancerSpec_, loadBalancerSpec) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeElbAvailableResourceInfoResponseBodyElbAvailableResourceInfo& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // province Field Functions 
    bool hasProvince() const { return this->province_ != nullptr;};
    void deleteProvince() { this->province_ = nullptr;};
    inline string province() const { DARABONBA_PTR_GET_DEFAULT(province_, "") };
    inline DescribeElbAvailableResourceInfoResponseBodyElbAvailableResourceInfo& setProvince(string province) { DARABONBA_PTR_SET_VALUE(province_, province) };


  protected:
    std::shared_ptr<vector<string>> ability_ = nullptr;
    // The ID of the region.
    std::shared_ptr<string> area_ = nullptr;
    // The number of resources that you can purchase.
    std::shared_ptr<string> canBuyCount_ = nullptr;
    // The name of the node.
    std::shared_ptr<string> enName_ = nullptr;
    // The ID of the Edge Node Service (ENS) node.
    std::shared_ptr<string> ensRegionId_ = nullptr;
    // The specifications of the ELB instances.
    std::shared_ptr<vector<string>> loadBalancerSpec_ = nullptr;
    // The Chinese name of the node.
    std::shared_ptr<string> name_ = nullptr;
    // The province where the node is deployed.
    std::shared_ptr<string> province_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
