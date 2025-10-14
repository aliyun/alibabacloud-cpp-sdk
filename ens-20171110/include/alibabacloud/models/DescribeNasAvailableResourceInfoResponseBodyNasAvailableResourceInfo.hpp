// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENASAVAILABLERESOURCEINFORESPONSEBODYNASAVAILABLERESOURCEINFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENASAVAILABLERESOURCEINFORESPONSEBODYNASAVAILABLERESOURCEINFO_HPP_
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
  class DescribeNASAvailableResourceInfoResponseBodyNasAvailableResourceInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNASAvailableResourceInfoResponseBodyNasAvailableResourceInfo& obj) { 
      DARABONBA_PTR_TO_JSON(Ability, ability_);
      DARABONBA_PTR_TO_JSON(Area, area_);
      DARABONBA_PTR_TO_JSON(EnName, enName_);
      DARABONBA_PTR_TO_JSON(EnsRegionId, ensRegionId_);
      DARABONBA_PTR_TO_JSON(EnsRegionName, ensRegionName_);
      DARABONBA_PTR_TO_JSON(NasAvailableAmount, nasAvailableAmount_);
      DARABONBA_PTR_TO_JSON(NasAvailableStorgeType, nasAvailableStorgeType_);
      DARABONBA_PTR_TO_JSON(Province, province_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNASAvailableResourceInfoResponseBodyNasAvailableResourceInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(Ability, ability_);
      DARABONBA_PTR_FROM_JSON(Area, area_);
      DARABONBA_PTR_FROM_JSON(EnName, enName_);
      DARABONBA_PTR_FROM_JSON(EnsRegionId, ensRegionId_);
      DARABONBA_PTR_FROM_JSON(EnsRegionName, ensRegionName_);
      DARABONBA_PTR_FROM_JSON(NasAvailableAmount, nasAvailableAmount_);
      DARABONBA_PTR_FROM_JSON(NasAvailableStorgeType, nasAvailableStorgeType_);
      DARABONBA_PTR_FROM_JSON(Province, province_);
    };
    DescribeNASAvailableResourceInfoResponseBodyNasAvailableResourceInfo() = default ;
    DescribeNASAvailableResourceInfoResponseBodyNasAvailableResourceInfo(const DescribeNASAvailableResourceInfoResponseBodyNasAvailableResourceInfo &) = default ;
    DescribeNASAvailableResourceInfoResponseBodyNasAvailableResourceInfo(DescribeNASAvailableResourceInfoResponseBodyNasAvailableResourceInfo &&) = default ;
    DescribeNASAvailableResourceInfoResponseBodyNasAvailableResourceInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNASAvailableResourceInfoResponseBodyNasAvailableResourceInfo() = default ;
    DescribeNASAvailableResourceInfoResponseBodyNasAvailableResourceInfo& operator=(const DescribeNASAvailableResourceInfoResponseBodyNasAvailableResourceInfo &) = default ;
    DescribeNASAvailableResourceInfoResponseBodyNasAvailableResourceInfo& operator=(DescribeNASAvailableResourceInfoResponseBodyNasAvailableResourceInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ability_ == nullptr
        && return this->area_ == nullptr && return this->enName_ == nullptr && return this->ensRegionId_ == nullptr && return this->ensRegionName_ == nullptr && return this->nasAvailableAmount_ == nullptr
        && return this->nasAvailableStorgeType_ == nullptr && return this->province_ == nullptr; };
    // ability Field Functions 
    bool hasAbility() const { return this->ability_ != nullptr;};
    void deleteAbility() { this->ability_ = nullptr;};
    inline const vector<string> & ability() const { DARABONBA_PTR_GET_CONST(ability_, vector<string>) };
    inline vector<string> ability() { DARABONBA_PTR_GET(ability_, vector<string>) };
    inline DescribeNASAvailableResourceInfoResponseBodyNasAvailableResourceInfo& setAbility(const vector<string> & ability) { DARABONBA_PTR_SET_VALUE(ability_, ability) };
    inline DescribeNASAvailableResourceInfoResponseBodyNasAvailableResourceInfo& setAbility(vector<string> && ability) { DARABONBA_PTR_SET_RVALUE(ability_, ability) };


    // area Field Functions 
    bool hasArea() const { return this->area_ != nullptr;};
    void deleteArea() { this->area_ = nullptr;};
    inline string area() const { DARABONBA_PTR_GET_DEFAULT(area_, "") };
    inline DescribeNASAvailableResourceInfoResponseBodyNasAvailableResourceInfo& setArea(string area) { DARABONBA_PTR_SET_VALUE(area_, area) };


    // enName Field Functions 
    bool hasEnName() const { return this->enName_ != nullptr;};
    void deleteEnName() { this->enName_ = nullptr;};
    inline string enName() const { DARABONBA_PTR_GET_DEFAULT(enName_, "") };
    inline DescribeNASAvailableResourceInfoResponseBodyNasAvailableResourceInfo& setEnName(string enName) { DARABONBA_PTR_SET_VALUE(enName_, enName) };


    // ensRegionId Field Functions 
    bool hasEnsRegionId() const { return this->ensRegionId_ != nullptr;};
    void deleteEnsRegionId() { this->ensRegionId_ = nullptr;};
    inline string ensRegionId() const { DARABONBA_PTR_GET_DEFAULT(ensRegionId_, "") };
    inline DescribeNASAvailableResourceInfoResponseBodyNasAvailableResourceInfo& setEnsRegionId(string ensRegionId) { DARABONBA_PTR_SET_VALUE(ensRegionId_, ensRegionId) };


    // ensRegionName Field Functions 
    bool hasEnsRegionName() const { return this->ensRegionName_ != nullptr;};
    void deleteEnsRegionName() { this->ensRegionName_ = nullptr;};
    inline string ensRegionName() const { DARABONBA_PTR_GET_DEFAULT(ensRegionName_, "") };
    inline DescribeNASAvailableResourceInfoResponseBodyNasAvailableResourceInfo& setEnsRegionName(string ensRegionName) { DARABONBA_PTR_SET_VALUE(ensRegionName_, ensRegionName) };


    // nasAvailableAmount Field Functions 
    bool hasNasAvailableAmount() const { return this->nasAvailableAmount_ != nullptr;};
    void deleteNasAvailableAmount() { this->nasAvailableAmount_ = nullptr;};
    inline int32_t nasAvailableAmount() const { DARABONBA_PTR_GET_DEFAULT(nasAvailableAmount_, 0) };
    inline DescribeNASAvailableResourceInfoResponseBodyNasAvailableResourceInfo& setNasAvailableAmount(int32_t nasAvailableAmount) { DARABONBA_PTR_SET_VALUE(nasAvailableAmount_, nasAvailableAmount) };


    // nasAvailableStorgeType Field Functions 
    bool hasNasAvailableStorgeType() const { return this->nasAvailableStorgeType_ != nullptr;};
    void deleteNasAvailableStorgeType() { this->nasAvailableStorgeType_ = nullptr;};
    inline string nasAvailableStorgeType() const { DARABONBA_PTR_GET_DEFAULT(nasAvailableStorgeType_, "") };
    inline DescribeNASAvailableResourceInfoResponseBodyNasAvailableResourceInfo& setNasAvailableStorgeType(string nasAvailableStorgeType) { DARABONBA_PTR_SET_VALUE(nasAvailableStorgeType_, nasAvailableStorgeType) };


    // province Field Functions 
    bool hasProvince() const { return this->province_ != nullptr;};
    void deleteProvince() { this->province_ = nullptr;};
    inline string province() const { DARABONBA_PTR_GET_DEFAULT(province_, "") };
    inline DescribeNASAvailableResourceInfoResponseBodyNasAvailableResourceInfo& setProvince(string province) { DARABONBA_PTR_SET_VALUE(province_, province) };


  protected:
    // The product supported by the edge node.
    std::shared_ptr<vector<string>> ability_ = nullptr;
    // The region to which the ENS node belongs.
    std::shared_ptr<string> area_ = nullptr;
    // The English name.
    std::shared_ptr<string> enName_ = nullptr;
    // The ID of the ENS node.
    std::shared_ptr<string> ensRegionId_ = nullptr;
    // The name of the ENS node.
    std::shared_ptr<string> ensRegionName_ = nullptr;
    // the number of available NAS resources.
    std::shared_ptr<int32_t> nasAvailableAmount_ = nullptr;
    // The types of available NAS resources.
    std::shared_ptr<string> nasAvailableStorgeType_ = nullptr;
    // The province to which the ENS node belongs.
    std::shared_ptr<string> province_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
