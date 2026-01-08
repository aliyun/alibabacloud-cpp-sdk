// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERISKEVENTTOPATTACKASSETRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERISKEVENTTOPATTACKASSETRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeRiskEventTopAttackAssetResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRiskEventTopAttackAssetResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Assets, assets_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRiskEventTopAttackAssetResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Assets, assets_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeRiskEventTopAttackAssetResponseBody() = default ;
    DescribeRiskEventTopAttackAssetResponseBody(const DescribeRiskEventTopAttackAssetResponseBody &) = default ;
    DescribeRiskEventTopAttackAssetResponseBody(DescribeRiskEventTopAttackAssetResponseBody &&) = default ;
    DescribeRiskEventTopAttackAssetResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRiskEventTopAttackAssetResponseBody() = default ;
    DescribeRiskEventTopAttackAssetResponseBody& operator=(const DescribeRiskEventTopAttackAssetResponseBody &) = default ;
    DescribeRiskEventTopAttackAssetResponseBody& operator=(DescribeRiskEventTopAttackAssetResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Assets : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Assets& obj) { 
        DARABONBA_PTR_TO_JSON(AttackCnt, attackCnt_);
        DARABONBA_PTR_TO_JSON(DropCnt, dropCnt_);
        DARABONBA_PTR_TO_JSON(Ip, ip_);
        DARABONBA_PTR_TO_JSON(RegionNo, regionNo_);
        DARABONBA_PTR_TO_JSON(ResourceInstanceId, resourceInstanceId_);
        DARABONBA_PTR_TO_JSON(ResourceInstanceName, resourceInstanceName_);
        DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      };
      friend void from_json(const Darabonba::Json& j, Assets& obj) { 
        DARABONBA_PTR_FROM_JSON(AttackCnt, attackCnt_);
        DARABONBA_PTR_FROM_JSON(DropCnt, dropCnt_);
        DARABONBA_PTR_FROM_JSON(Ip, ip_);
        DARABONBA_PTR_FROM_JSON(RegionNo, regionNo_);
        DARABONBA_PTR_FROM_JSON(ResourceInstanceId, resourceInstanceId_);
        DARABONBA_PTR_FROM_JSON(ResourceInstanceName, resourceInstanceName_);
        DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      };
      Assets() = default ;
      Assets(const Assets &) = default ;
      Assets(Assets &&) = default ;
      Assets(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Assets() = default ;
      Assets& operator=(const Assets &) = default ;
      Assets& operator=(Assets &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->attackCnt_ == nullptr
        && this->dropCnt_ == nullptr && this->ip_ == nullptr && this->regionNo_ == nullptr && this->resourceInstanceId_ == nullptr && this->resourceInstanceName_ == nullptr
        && this->resourceType_ == nullptr; };
      // attackCnt Field Functions 
      bool hasAttackCnt() const { return this->attackCnt_ != nullptr;};
      void deleteAttackCnt() { this->attackCnt_ = nullptr;};
      inline int32_t getAttackCnt() const { DARABONBA_PTR_GET_DEFAULT(attackCnt_, 0) };
      inline Assets& setAttackCnt(int32_t attackCnt) { DARABONBA_PTR_SET_VALUE(attackCnt_, attackCnt) };


      // dropCnt Field Functions 
      bool hasDropCnt() const { return this->dropCnt_ != nullptr;};
      void deleteDropCnt() { this->dropCnt_ = nullptr;};
      inline int32_t getDropCnt() const { DARABONBA_PTR_GET_DEFAULT(dropCnt_, 0) };
      inline Assets& setDropCnt(int32_t dropCnt) { DARABONBA_PTR_SET_VALUE(dropCnt_, dropCnt) };


      // ip Field Functions 
      bool hasIp() const { return this->ip_ != nullptr;};
      void deleteIp() { this->ip_ = nullptr;};
      inline string getIp() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
      inline Assets& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


      // regionNo Field Functions 
      bool hasRegionNo() const { return this->regionNo_ != nullptr;};
      void deleteRegionNo() { this->regionNo_ = nullptr;};
      inline string getRegionNo() const { DARABONBA_PTR_GET_DEFAULT(regionNo_, "") };
      inline Assets& setRegionNo(string regionNo) { DARABONBA_PTR_SET_VALUE(regionNo_, regionNo) };


      // resourceInstanceId Field Functions 
      bool hasResourceInstanceId() const { return this->resourceInstanceId_ != nullptr;};
      void deleteResourceInstanceId() { this->resourceInstanceId_ = nullptr;};
      inline string getResourceInstanceId() const { DARABONBA_PTR_GET_DEFAULT(resourceInstanceId_, "") };
      inline Assets& setResourceInstanceId(string resourceInstanceId) { DARABONBA_PTR_SET_VALUE(resourceInstanceId_, resourceInstanceId) };


      // resourceInstanceName Field Functions 
      bool hasResourceInstanceName() const { return this->resourceInstanceName_ != nullptr;};
      void deleteResourceInstanceName() { this->resourceInstanceName_ = nullptr;};
      inline string getResourceInstanceName() const { DARABONBA_PTR_GET_DEFAULT(resourceInstanceName_, "") };
      inline Assets& setResourceInstanceName(string resourceInstanceName) { DARABONBA_PTR_SET_VALUE(resourceInstanceName_, resourceInstanceName) };


      // resourceType Field Functions 
      bool hasResourceType() const { return this->resourceType_ != nullptr;};
      void deleteResourceType() { this->resourceType_ = nullptr;};
      inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
      inline Assets& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    protected:
      shared_ptr<int32_t> attackCnt_ {};
      shared_ptr<int32_t> dropCnt_ {};
      shared_ptr<string> ip_ {};
      shared_ptr<string> regionNo_ {};
      shared_ptr<string> resourceInstanceId_ {};
      shared_ptr<string> resourceInstanceName_ {};
      shared_ptr<string> resourceType_ {};
    };

    virtual bool empty() const override { return this->assets_ == nullptr
        && this->requestId_ == nullptr; };
    // assets Field Functions 
    bool hasAssets() const { return this->assets_ != nullptr;};
    void deleteAssets() { this->assets_ = nullptr;};
    inline const vector<DescribeRiskEventTopAttackAssetResponseBody::Assets> & getAssets() const { DARABONBA_PTR_GET_CONST(assets_, vector<DescribeRiskEventTopAttackAssetResponseBody::Assets>) };
    inline vector<DescribeRiskEventTopAttackAssetResponseBody::Assets> getAssets() { DARABONBA_PTR_GET(assets_, vector<DescribeRiskEventTopAttackAssetResponseBody::Assets>) };
    inline DescribeRiskEventTopAttackAssetResponseBody& setAssets(const vector<DescribeRiskEventTopAttackAssetResponseBody::Assets> & assets) { DARABONBA_PTR_SET_VALUE(assets_, assets) };
    inline DescribeRiskEventTopAttackAssetResponseBody& setAssets(vector<DescribeRiskEventTopAttackAssetResponseBody::Assets> && assets) { DARABONBA_PTR_SET_RVALUE(assets_, assets) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRiskEventTopAttackAssetResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<DescribeRiskEventTopAttackAssetResponseBody::Assets>> assets_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
