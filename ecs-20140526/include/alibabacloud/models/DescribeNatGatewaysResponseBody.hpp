// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENATGATEWAYSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENATGATEWAYSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeNatGatewaysResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNatGatewaysResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NatGateways, natGateways_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNatGatewaysResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NatGateways, natGateways_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeNatGatewaysResponseBody() = default ;
    DescribeNatGatewaysResponseBody(const DescribeNatGatewaysResponseBody &) = default ;
    DescribeNatGatewaysResponseBody(DescribeNatGatewaysResponseBody &&) = default ;
    DescribeNatGatewaysResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNatGatewaysResponseBody() = default ;
    DescribeNatGatewaysResponseBody& operator=(const DescribeNatGatewaysResponseBody &) = default ;
    DescribeNatGatewaysResponseBody& operator=(DescribeNatGatewaysResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class NatGateways : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const NatGateways& obj) { 
        DARABONBA_PTR_TO_JSON(NatGateway, natGateway_);
      };
      friend void from_json(const Darabonba::Json& j, NatGateways& obj) { 
        DARABONBA_PTR_FROM_JSON(NatGateway, natGateway_);
      };
      NatGateways() = default ;
      NatGateways(const NatGateways &) = default ;
      NatGateways(NatGateways &&) = default ;
      NatGateways(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~NatGateways() = default ;
      NatGateways& operator=(const NatGateways &) = default ;
      NatGateways& operator=(NatGateways &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class NatGateway : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const NatGateway& obj) { 
          DARABONBA_PTR_TO_JSON(BandwidthPackageIds, bandwidthPackageIds_);
          DARABONBA_PTR_TO_JSON(BusinessStatus, businessStatus_);
          DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(ForwardTableIds, forwardTableIds_);
          DARABONBA_PTR_TO_JSON(InstanceChargeType, instanceChargeType_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(NatGatewayId, natGatewayId_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(Spec, spec_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
        };
        friend void from_json(const Darabonba::Json& j, NatGateway& obj) { 
          DARABONBA_PTR_FROM_JSON(BandwidthPackageIds, bandwidthPackageIds_);
          DARABONBA_PTR_FROM_JSON(BusinessStatus, businessStatus_);
          DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(ForwardTableIds, forwardTableIds_);
          DARABONBA_PTR_FROM_JSON(InstanceChargeType, instanceChargeType_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(NatGatewayId, natGatewayId_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(Spec, spec_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
        };
        NatGateway() = default ;
        NatGateway(const NatGateway &) = default ;
        NatGateway(NatGateway &&) = default ;
        NatGateway(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~NatGateway() = default ;
        NatGateway& operator=(const NatGateway &) = default ;
        NatGateway& operator=(NatGateway &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class ForwardTableIds : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ForwardTableIds& obj) { 
            DARABONBA_PTR_TO_JSON(ForwardTableId, forwardTableId_);
          };
          friend void from_json(const Darabonba::Json& j, ForwardTableIds& obj) { 
            DARABONBA_PTR_FROM_JSON(ForwardTableId, forwardTableId_);
          };
          ForwardTableIds() = default ;
          ForwardTableIds(const ForwardTableIds &) = default ;
          ForwardTableIds(ForwardTableIds &&) = default ;
          ForwardTableIds(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ForwardTableIds() = default ;
          ForwardTableIds& operator=(const ForwardTableIds &) = default ;
          ForwardTableIds& operator=(ForwardTableIds &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->forwardTableId_ == nullptr; };
          // forwardTableId Field Functions 
          bool hasForwardTableId() const { return this->forwardTableId_ != nullptr;};
          void deleteForwardTableId() { this->forwardTableId_ = nullptr;};
          inline const vector<string> & getForwardTableId() const { DARABONBA_PTR_GET_CONST(forwardTableId_, vector<string>) };
          inline vector<string> getForwardTableId() { DARABONBA_PTR_GET(forwardTableId_, vector<string>) };
          inline ForwardTableIds& setForwardTableId(const vector<string> & forwardTableId) { DARABONBA_PTR_SET_VALUE(forwardTableId_, forwardTableId) };
          inline ForwardTableIds& setForwardTableId(vector<string> && forwardTableId) { DARABONBA_PTR_SET_RVALUE(forwardTableId_, forwardTableId) };


        protected:
          shared_ptr<vector<string>> forwardTableId_ {};
        };

        class BandwidthPackageIds : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const BandwidthPackageIds& obj) { 
            DARABONBA_PTR_TO_JSON(BandwidthPackageId, bandwidthPackageId_);
          };
          friend void from_json(const Darabonba::Json& j, BandwidthPackageIds& obj) { 
            DARABONBA_PTR_FROM_JSON(BandwidthPackageId, bandwidthPackageId_);
          };
          BandwidthPackageIds() = default ;
          BandwidthPackageIds(const BandwidthPackageIds &) = default ;
          BandwidthPackageIds(BandwidthPackageIds &&) = default ;
          BandwidthPackageIds(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~BandwidthPackageIds() = default ;
          BandwidthPackageIds& operator=(const BandwidthPackageIds &) = default ;
          BandwidthPackageIds& operator=(BandwidthPackageIds &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->bandwidthPackageId_ == nullptr; };
          // bandwidthPackageId Field Functions 
          bool hasBandwidthPackageId() const { return this->bandwidthPackageId_ != nullptr;};
          void deleteBandwidthPackageId() { this->bandwidthPackageId_ = nullptr;};
          inline const vector<string> & getBandwidthPackageId() const { DARABONBA_PTR_GET_CONST(bandwidthPackageId_, vector<string>) };
          inline vector<string> getBandwidthPackageId() { DARABONBA_PTR_GET(bandwidthPackageId_, vector<string>) };
          inline BandwidthPackageIds& setBandwidthPackageId(const vector<string> & bandwidthPackageId) { DARABONBA_PTR_SET_VALUE(bandwidthPackageId_, bandwidthPackageId) };
          inline BandwidthPackageIds& setBandwidthPackageId(vector<string> && bandwidthPackageId) { DARABONBA_PTR_SET_RVALUE(bandwidthPackageId_, bandwidthPackageId) };


        protected:
          shared_ptr<vector<string>> bandwidthPackageId_ {};
        };

        virtual bool empty() const override { return this->bandwidthPackageIds_ == nullptr
        && this->businessStatus_ == nullptr && this->creationTime_ == nullptr && this->description_ == nullptr && this->forwardTableIds_ == nullptr && this->instanceChargeType_ == nullptr
        && this->name_ == nullptr && this->natGatewayId_ == nullptr && this->regionId_ == nullptr && this->spec_ == nullptr && this->status_ == nullptr
        && this->vpcId_ == nullptr; };
        // bandwidthPackageIds Field Functions 
        bool hasBandwidthPackageIds() const { return this->bandwidthPackageIds_ != nullptr;};
        void deleteBandwidthPackageIds() { this->bandwidthPackageIds_ = nullptr;};
        inline const NatGateway::BandwidthPackageIds & getBandwidthPackageIds() const { DARABONBA_PTR_GET_CONST(bandwidthPackageIds_, NatGateway::BandwidthPackageIds) };
        inline NatGateway::BandwidthPackageIds getBandwidthPackageIds() { DARABONBA_PTR_GET(bandwidthPackageIds_, NatGateway::BandwidthPackageIds) };
        inline NatGateway& setBandwidthPackageIds(const NatGateway::BandwidthPackageIds & bandwidthPackageIds) { DARABONBA_PTR_SET_VALUE(bandwidthPackageIds_, bandwidthPackageIds) };
        inline NatGateway& setBandwidthPackageIds(NatGateway::BandwidthPackageIds && bandwidthPackageIds) { DARABONBA_PTR_SET_RVALUE(bandwidthPackageIds_, bandwidthPackageIds) };


        // businessStatus Field Functions 
        bool hasBusinessStatus() const { return this->businessStatus_ != nullptr;};
        void deleteBusinessStatus() { this->businessStatus_ = nullptr;};
        inline string getBusinessStatus() const { DARABONBA_PTR_GET_DEFAULT(businessStatus_, "") };
        inline NatGateway& setBusinessStatus(string businessStatus) { DARABONBA_PTR_SET_VALUE(businessStatus_, businessStatus) };


        // creationTime Field Functions 
        bool hasCreationTime() const { return this->creationTime_ != nullptr;};
        void deleteCreationTime() { this->creationTime_ = nullptr;};
        inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
        inline NatGateway& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline NatGateway& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // forwardTableIds Field Functions 
        bool hasForwardTableIds() const { return this->forwardTableIds_ != nullptr;};
        void deleteForwardTableIds() { this->forwardTableIds_ = nullptr;};
        inline const NatGateway::ForwardTableIds & getForwardTableIds() const { DARABONBA_PTR_GET_CONST(forwardTableIds_, NatGateway::ForwardTableIds) };
        inline NatGateway::ForwardTableIds getForwardTableIds() { DARABONBA_PTR_GET(forwardTableIds_, NatGateway::ForwardTableIds) };
        inline NatGateway& setForwardTableIds(const NatGateway::ForwardTableIds & forwardTableIds) { DARABONBA_PTR_SET_VALUE(forwardTableIds_, forwardTableIds) };
        inline NatGateway& setForwardTableIds(NatGateway::ForwardTableIds && forwardTableIds) { DARABONBA_PTR_SET_RVALUE(forwardTableIds_, forwardTableIds) };


        // instanceChargeType Field Functions 
        bool hasInstanceChargeType() const { return this->instanceChargeType_ != nullptr;};
        void deleteInstanceChargeType() { this->instanceChargeType_ = nullptr;};
        inline string getInstanceChargeType() const { DARABONBA_PTR_GET_DEFAULT(instanceChargeType_, "") };
        inline NatGateway& setInstanceChargeType(string instanceChargeType) { DARABONBA_PTR_SET_VALUE(instanceChargeType_, instanceChargeType) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline NatGateway& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // natGatewayId Field Functions 
        bool hasNatGatewayId() const { return this->natGatewayId_ != nullptr;};
        void deleteNatGatewayId() { this->natGatewayId_ = nullptr;};
        inline string getNatGatewayId() const { DARABONBA_PTR_GET_DEFAULT(natGatewayId_, "") };
        inline NatGateway& setNatGatewayId(string natGatewayId) { DARABONBA_PTR_SET_VALUE(natGatewayId_, natGatewayId) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline NatGateway& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // spec Field Functions 
        bool hasSpec() const { return this->spec_ != nullptr;};
        void deleteSpec() { this->spec_ = nullptr;};
        inline string getSpec() const { DARABONBA_PTR_GET_DEFAULT(spec_, "") };
        inline NatGateway& setSpec(string spec) { DARABONBA_PTR_SET_VALUE(spec_, spec) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline NatGateway& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // vpcId Field Functions 
        bool hasVpcId() const { return this->vpcId_ != nullptr;};
        void deleteVpcId() { this->vpcId_ = nullptr;};
        inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
        inline NatGateway& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


      protected:
        shared_ptr<NatGateway::BandwidthPackageIds> bandwidthPackageIds_ {};
        shared_ptr<string> businessStatus_ {};
        shared_ptr<string> creationTime_ {};
        shared_ptr<string> description_ {};
        shared_ptr<NatGateway::ForwardTableIds> forwardTableIds_ {};
        shared_ptr<string> instanceChargeType_ {};
        shared_ptr<string> name_ {};
        shared_ptr<string> natGatewayId_ {};
        shared_ptr<string> regionId_ {};
        shared_ptr<string> spec_ {};
        shared_ptr<string> status_ {};
        shared_ptr<string> vpcId_ {};
      };

      virtual bool empty() const override { return this->natGateway_ == nullptr; };
      // natGateway Field Functions 
      bool hasNatGateway() const { return this->natGateway_ != nullptr;};
      void deleteNatGateway() { this->natGateway_ = nullptr;};
      inline const vector<NatGateways::NatGateway> & getNatGateway() const { DARABONBA_PTR_GET_CONST(natGateway_, vector<NatGateways::NatGateway>) };
      inline vector<NatGateways::NatGateway> getNatGateway() { DARABONBA_PTR_GET(natGateway_, vector<NatGateways::NatGateway>) };
      inline NatGateways& setNatGateway(const vector<NatGateways::NatGateway> & natGateway) { DARABONBA_PTR_SET_VALUE(natGateway_, natGateway) };
      inline NatGateways& setNatGateway(vector<NatGateways::NatGateway> && natGateway) { DARABONBA_PTR_SET_RVALUE(natGateway_, natGateway) };


    protected:
      shared_ptr<vector<NatGateways::NatGateway>> natGateway_ {};
    };

    virtual bool empty() const override { return this->natGateways_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // natGateways Field Functions 
    bool hasNatGateways() const { return this->natGateways_ != nullptr;};
    void deleteNatGateways() { this->natGateways_ = nullptr;};
    inline const DescribeNatGatewaysResponseBody::NatGateways & getNatGateways() const { DARABONBA_PTR_GET_CONST(natGateways_, DescribeNatGatewaysResponseBody::NatGateways) };
    inline DescribeNatGatewaysResponseBody::NatGateways getNatGateways() { DARABONBA_PTR_GET(natGateways_, DescribeNatGatewaysResponseBody::NatGateways) };
    inline DescribeNatGatewaysResponseBody& setNatGateways(const DescribeNatGatewaysResponseBody::NatGateways & natGateways) { DARABONBA_PTR_SET_VALUE(natGateways_, natGateways) };
    inline DescribeNatGatewaysResponseBody& setNatGateways(DescribeNatGatewaysResponseBody::NatGateways && natGateways) { DARABONBA_PTR_SET_RVALUE(natGateways_, natGateways) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeNatGatewaysResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeNatGatewaysResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeNatGatewaysResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeNatGatewaysResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<DescribeNatGatewaysResponseBody::NatGateways> natGateways_ {};
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
