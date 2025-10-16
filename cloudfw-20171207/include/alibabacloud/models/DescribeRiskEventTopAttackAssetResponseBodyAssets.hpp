// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERISKEVENTTOPATTACKASSETRESPONSEBODYASSETS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERISKEVENTTOPATTACKASSETRESPONSEBODYASSETS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeRiskEventTopAttackAssetResponseBodyAssets : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRiskEventTopAttackAssetResponseBodyAssets& obj) { 
      DARABONBA_PTR_TO_JSON(AttackCnt, attackCnt_);
      DARABONBA_PTR_TO_JSON(DropCnt, dropCnt_);
      DARABONBA_PTR_TO_JSON(Ip, ip_);
      DARABONBA_PTR_TO_JSON(RegionNo, regionNo_);
      DARABONBA_PTR_TO_JSON(ResourceInstanceId, resourceInstanceId_);
      DARABONBA_PTR_TO_JSON(ResourceInstanceName, resourceInstanceName_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRiskEventTopAttackAssetResponseBodyAssets& obj) { 
      DARABONBA_PTR_FROM_JSON(AttackCnt, attackCnt_);
      DARABONBA_PTR_FROM_JSON(DropCnt, dropCnt_);
      DARABONBA_PTR_FROM_JSON(Ip, ip_);
      DARABONBA_PTR_FROM_JSON(RegionNo, regionNo_);
      DARABONBA_PTR_FROM_JSON(ResourceInstanceId, resourceInstanceId_);
      DARABONBA_PTR_FROM_JSON(ResourceInstanceName, resourceInstanceName_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
    };
    DescribeRiskEventTopAttackAssetResponseBodyAssets() = default ;
    DescribeRiskEventTopAttackAssetResponseBodyAssets(const DescribeRiskEventTopAttackAssetResponseBodyAssets &) = default ;
    DescribeRiskEventTopAttackAssetResponseBodyAssets(DescribeRiskEventTopAttackAssetResponseBodyAssets &&) = default ;
    DescribeRiskEventTopAttackAssetResponseBodyAssets(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRiskEventTopAttackAssetResponseBodyAssets() = default ;
    DescribeRiskEventTopAttackAssetResponseBodyAssets& operator=(const DescribeRiskEventTopAttackAssetResponseBodyAssets &) = default ;
    DescribeRiskEventTopAttackAssetResponseBodyAssets& operator=(DescribeRiskEventTopAttackAssetResponseBodyAssets &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->attackCnt_ == nullptr
        && return this->dropCnt_ == nullptr && return this->ip_ == nullptr && return this->regionNo_ == nullptr && return this->resourceInstanceId_ == nullptr && return this->resourceInstanceName_ == nullptr
        && return this->resourceType_ == nullptr; };
    // attackCnt Field Functions 
    bool hasAttackCnt() const { return this->attackCnt_ != nullptr;};
    void deleteAttackCnt() { this->attackCnt_ = nullptr;};
    inline int32_t attackCnt() const { DARABONBA_PTR_GET_DEFAULT(attackCnt_, 0) };
    inline DescribeRiskEventTopAttackAssetResponseBodyAssets& setAttackCnt(int32_t attackCnt) { DARABONBA_PTR_SET_VALUE(attackCnt_, attackCnt) };


    // dropCnt Field Functions 
    bool hasDropCnt() const { return this->dropCnt_ != nullptr;};
    void deleteDropCnt() { this->dropCnt_ = nullptr;};
    inline int32_t dropCnt() const { DARABONBA_PTR_GET_DEFAULT(dropCnt_, 0) };
    inline DescribeRiskEventTopAttackAssetResponseBodyAssets& setDropCnt(int32_t dropCnt) { DARABONBA_PTR_SET_VALUE(dropCnt_, dropCnt) };


    // ip Field Functions 
    bool hasIp() const { return this->ip_ != nullptr;};
    void deleteIp() { this->ip_ = nullptr;};
    inline string ip() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
    inline DescribeRiskEventTopAttackAssetResponseBodyAssets& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


    // regionNo Field Functions 
    bool hasRegionNo() const { return this->regionNo_ != nullptr;};
    void deleteRegionNo() { this->regionNo_ = nullptr;};
    inline string regionNo() const { DARABONBA_PTR_GET_DEFAULT(regionNo_, "") };
    inline DescribeRiskEventTopAttackAssetResponseBodyAssets& setRegionNo(string regionNo) { DARABONBA_PTR_SET_VALUE(regionNo_, regionNo) };


    // resourceInstanceId Field Functions 
    bool hasResourceInstanceId() const { return this->resourceInstanceId_ != nullptr;};
    void deleteResourceInstanceId() { this->resourceInstanceId_ = nullptr;};
    inline string resourceInstanceId() const { DARABONBA_PTR_GET_DEFAULT(resourceInstanceId_, "") };
    inline DescribeRiskEventTopAttackAssetResponseBodyAssets& setResourceInstanceId(string resourceInstanceId) { DARABONBA_PTR_SET_VALUE(resourceInstanceId_, resourceInstanceId) };


    // resourceInstanceName Field Functions 
    bool hasResourceInstanceName() const { return this->resourceInstanceName_ != nullptr;};
    void deleteResourceInstanceName() { this->resourceInstanceName_ = nullptr;};
    inline string resourceInstanceName() const { DARABONBA_PTR_GET_DEFAULT(resourceInstanceName_, "") };
    inline DescribeRiskEventTopAttackAssetResponseBodyAssets& setResourceInstanceName(string resourceInstanceName) { DARABONBA_PTR_SET_VALUE(resourceInstanceName_, resourceInstanceName) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline DescribeRiskEventTopAttackAssetResponseBodyAssets& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


  protected:
    std::shared_ptr<int32_t> attackCnt_ = nullptr;
    std::shared_ptr<int32_t> dropCnt_ = nullptr;
    std::shared_ptr<string> ip_ = nullptr;
    std::shared_ptr<string> regionNo_ = nullptr;
    std::shared_ptr<string> resourceInstanceId_ = nullptr;
    std::shared_ptr<string> resourceInstanceName_ = nullptr;
    std::shared_ptr<string> resourceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
