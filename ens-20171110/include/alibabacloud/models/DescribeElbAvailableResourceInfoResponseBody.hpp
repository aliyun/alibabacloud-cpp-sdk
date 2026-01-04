// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEELBAVAILABLERESOURCEINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEELBAVAILABLERESOURCEINFORESPONSEBODY_HPP_
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
  class DescribeElbAvailableResourceInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeElbAvailableResourceInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ElbAvailableResourceInfo, elbAvailableResourceInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeElbAvailableResourceInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ElbAvailableResourceInfo, elbAvailableResourceInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeElbAvailableResourceInfoResponseBody() = default ;
    DescribeElbAvailableResourceInfoResponseBody(const DescribeElbAvailableResourceInfoResponseBody &) = default ;
    DescribeElbAvailableResourceInfoResponseBody(DescribeElbAvailableResourceInfoResponseBody &&) = default ;
    DescribeElbAvailableResourceInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeElbAvailableResourceInfoResponseBody() = default ;
    DescribeElbAvailableResourceInfoResponseBody& operator=(const DescribeElbAvailableResourceInfoResponseBody &) = default ;
    DescribeElbAvailableResourceInfoResponseBody& operator=(DescribeElbAvailableResourceInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ElbAvailableResourceInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ElbAvailableResourceInfo& obj) { 
        DARABONBA_PTR_TO_JSON(Ability, ability_);
        DARABONBA_PTR_TO_JSON(Area, area_);
        DARABONBA_PTR_TO_JSON(CanBuyCount, canBuyCount_);
        DARABONBA_PTR_TO_JSON(EnName, enName_);
        DARABONBA_PTR_TO_JSON(EnsRegionId, ensRegionId_);
        DARABONBA_PTR_TO_JSON(LoadBalancerSpec, loadBalancerSpec_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Province, province_);
      };
      friend void from_json(const Darabonba::Json& j, ElbAvailableResourceInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(Ability, ability_);
        DARABONBA_PTR_FROM_JSON(Area, area_);
        DARABONBA_PTR_FROM_JSON(CanBuyCount, canBuyCount_);
        DARABONBA_PTR_FROM_JSON(EnName, enName_);
        DARABONBA_PTR_FROM_JSON(EnsRegionId, ensRegionId_);
        DARABONBA_PTR_FROM_JSON(LoadBalancerSpec, loadBalancerSpec_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Province, province_);
      };
      ElbAvailableResourceInfo() = default ;
      ElbAvailableResourceInfo(const ElbAvailableResourceInfo &) = default ;
      ElbAvailableResourceInfo(ElbAvailableResourceInfo &&) = default ;
      ElbAvailableResourceInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ElbAvailableResourceInfo() = default ;
      ElbAvailableResourceInfo& operator=(const ElbAvailableResourceInfo &) = default ;
      ElbAvailableResourceInfo& operator=(ElbAvailableResourceInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->ability_ == nullptr
        && this->area_ == nullptr && this->canBuyCount_ == nullptr && this->enName_ == nullptr && this->ensRegionId_ == nullptr && this->loadBalancerSpec_ == nullptr
        && this->name_ == nullptr && this->province_ == nullptr; };
      // ability Field Functions 
      bool hasAbility() const { return this->ability_ != nullptr;};
      void deleteAbility() { this->ability_ = nullptr;};
      inline const vector<string> & getAbility() const { DARABONBA_PTR_GET_CONST(ability_, vector<string>) };
      inline vector<string> getAbility() { DARABONBA_PTR_GET(ability_, vector<string>) };
      inline ElbAvailableResourceInfo& setAbility(const vector<string> & ability) { DARABONBA_PTR_SET_VALUE(ability_, ability) };
      inline ElbAvailableResourceInfo& setAbility(vector<string> && ability) { DARABONBA_PTR_SET_RVALUE(ability_, ability) };


      // area Field Functions 
      bool hasArea() const { return this->area_ != nullptr;};
      void deleteArea() { this->area_ = nullptr;};
      inline string getArea() const { DARABONBA_PTR_GET_DEFAULT(area_, "") };
      inline ElbAvailableResourceInfo& setArea(string area) { DARABONBA_PTR_SET_VALUE(area_, area) };


      // canBuyCount Field Functions 
      bool hasCanBuyCount() const { return this->canBuyCount_ != nullptr;};
      void deleteCanBuyCount() { this->canBuyCount_ = nullptr;};
      inline string getCanBuyCount() const { DARABONBA_PTR_GET_DEFAULT(canBuyCount_, "") };
      inline ElbAvailableResourceInfo& setCanBuyCount(string canBuyCount) { DARABONBA_PTR_SET_VALUE(canBuyCount_, canBuyCount) };


      // enName Field Functions 
      bool hasEnName() const { return this->enName_ != nullptr;};
      void deleteEnName() { this->enName_ = nullptr;};
      inline string getEnName() const { DARABONBA_PTR_GET_DEFAULT(enName_, "") };
      inline ElbAvailableResourceInfo& setEnName(string enName) { DARABONBA_PTR_SET_VALUE(enName_, enName) };


      // ensRegionId Field Functions 
      bool hasEnsRegionId() const { return this->ensRegionId_ != nullptr;};
      void deleteEnsRegionId() { this->ensRegionId_ = nullptr;};
      inline string getEnsRegionId() const { DARABONBA_PTR_GET_DEFAULT(ensRegionId_, "") };
      inline ElbAvailableResourceInfo& setEnsRegionId(string ensRegionId) { DARABONBA_PTR_SET_VALUE(ensRegionId_, ensRegionId) };


      // loadBalancerSpec Field Functions 
      bool hasLoadBalancerSpec() const { return this->loadBalancerSpec_ != nullptr;};
      void deleteLoadBalancerSpec() { this->loadBalancerSpec_ = nullptr;};
      inline const vector<string> & getLoadBalancerSpec() const { DARABONBA_PTR_GET_CONST(loadBalancerSpec_, vector<string>) };
      inline vector<string> getLoadBalancerSpec() { DARABONBA_PTR_GET(loadBalancerSpec_, vector<string>) };
      inline ElbAvailableResourceInfo& setLoadBalancerSpec(const vector<string> & loadBalancerSpec) { DARABONBA_PTR_SET_VALUE(loadBalancerSpec_, loadBalancerSpec) };
      inline ElbAvailableResourceInfo& setLoadBalancerSpec(vector<string> && loadBalancerSpec) { DARABONBA_PTR_SET_RVALUE(loadBalancerSpec_, loadBalancerSpec) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline ElbAvailableResourceInfo& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // province Field Functions 
      bool hasProvince() const { return this->province_ != nullptr;};
      void deleteProvince() { this->province_ = nullptr;};
      inline string getProvince() const { DARABONBA_PTR_GET_DEFAULT(province_, "") };
      inline ElbAvailableResourceInfo& setProvince(string province) { DARABONBA_PTR_SET_VALUE(province_, province) };


    protected:
      shared_ptr<vector<string>> ability_ {};
      // The ID of the region.
      shared_ptr<string> area_ {};
      // The number of resources that you can purchase.
      shared_ptr<string> canBuyCount_ {};
      // The name of the node.
      shared_ptr<string> enName_ {};
      // The ID of the Edge Node Service (ENS) node.
      shared_ptr<string> ensRegionId_ {};
      // The specifications of the ELB instances.
      shared_ptr<vector<string>> loadBalancerSpec_ {};
      // The Chinese name of the node.
      shared_ptr<string> name_ {};
      // The province where the node is deployed.
      shared_ptr<string> province_ {};
    };

    virtual bool empty() const override { return this->elbAvailableResourceInfo_ == nullptr
        && this->requestId_ == nullptr; };
    // elbAvailableResourceInfo Field Functions 
    bool hasElbAvailableResourceInfo() const { return this->elbAvailableResourceInfo_ != nullptr;};
    void deleteElbAvailableResourceInfo() { this->elbAvailableResourceInfo_ = nullptr;};
    inline const vector<DescribeElbAvailableResourceInfoResponseBody::ElbAvailableResourceInfo> & getElbAvailableResourceInfo() const { DARABONBA_PTR_GET_CONST(elbAvailableResourceInfo_, vector<DescribeElbAvailableResourceInfoResponseBody::ElbAvailableResourceInfo>) };
    inline vector<DescribeElbAvailableResourceInfoResponseBody::ElbAvailableResourceInfo> getElbAvailableResourceInfo() { DARABONBA_PTR_GET(elbAvailableResourceInfo_, vector<DescribeElbAvailableResourceInfoResponseBody::ElbAvailableResourceInfo>) };
    inline DescribeElbAvailableResourceInfoResponseBody& setElbAvailableResourceInfo(const vector<DescribeElbAvailableResourceInfoResponseBody::ElbAvailableResourceInfo> & elbAvailableResourceInfo) { DARABONBA_PTR_SET_VALUE(elbAvailableResourceInfo_, elbAvailableResourceInfo) };
    inline DescribeElbAvailableResourceInfoResponseBody& setElbAvailableResourceInfo(vector<DescribeElbAvailableResourceInfoResponseBody::ElbAvailableResourceInfo> && elbAvailableResourceInfo) { DARABONBA_PTR_SET_RVALUE(elbAvailableResourceInfo_, elbAvailableResourceInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeElbAvailableResourceInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about resources.
    shared_ptr<vector<DescribeElbAvailableResourceInfoResponseBody::ElbAvailableResourceInfo>> elbAvailableResourceInfo_ {};
    // The ID of the request. This parameter is a common parameter. Each request has a unique ID. You can use the ID to troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
