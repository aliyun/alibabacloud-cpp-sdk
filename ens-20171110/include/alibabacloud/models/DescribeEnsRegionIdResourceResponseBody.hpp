// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEENSREGIONIDRESOURCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEENSREGIONIDRESOURCERESPONSEBODY_HPP_
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
  class DescribeEnsRegionIdResourceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEnsRegionIdResourceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(EnsRegionIdResources, ensRegionIdResources_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEnsRegionIdResourceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(EnsRegionIdResources, ensRegionIdResources_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeEnsRegionIdResourceResponseBody() = default ;
    DescribeEnsRegionIdResourceResponseBody(const DescribeEnsRegionIdResourceResponseBody &) = default ;
    DescribeEnsRegionIdResourceResponseBody(DescribeEnsRegionIdResourceResponseBody &&) = default ;
    DescribeEnsRegionIdResourceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEnsRegionIdResourceResponseBody() = default ;
    DescribeEnsRegionIdResourceResponseBody& operator=(const DescribeEnsRegionIdResourceResponseBody &) = default ;
    DescribeEnsRegionIdResourceResponseBody& operator=(DescribeEnsRegionIdResourceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class EnsRegionIdResources : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const EnsRegionIdResources& obj) { 
        DARABONBA_PTR_TO_JSON(EnsRegionIdResource, ensRegionIdResource_);
      };
      friend void from_json(const Darabonba::Json& j, EnsRegionIdResources& obj) { 
        DARABONBA_PTR_FROM_JSON(EnsRegionIdResource, ensRegionIdResource_);
      };
      EnsRegionIdResources() = default ;
      EnsRegionIdResources(const EnsRegionIdResources &) = default ;
      EnsRegionIdResources(EnsRegionIdResources &&) = default ;
      EnsRegionIdResources(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~EnsRegionIdResources() = default ;
      EnsRegionIdResources& operator=(const EnsRegionIdResources &) = default ;
      EnsRegionIdResources& operator=(EnsRegionIdResources &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class EnsRegionIdResource : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const EnsRegionIdResource& obj) { 
          DARABONBA_PTR_TO_JSON(Area, area_);
          DARABONBA_PTR_TO_JSON(AreaCode, areaCode_);
          DARABONBA_PTR_TO_JSON(BizDate, bizDate_);
          DARABONBA_PTR_TO_JSON(EnsRegionId, ensRegionId_);
          DARABONBA_PTR_TO_JSON(EnsRegionIdName, ensRegionIdName_);
          DARABONBA_PTR_TO_JSON(InstanceCount, instanceCount_);
          DARABONBA_PTR_TO_JSON(InternetBandwidth, internetBandwidth_);
          DARABONBA_PTR_TO_JSON(Isp, isp_);
          DARABONBA_PTR_TO_JSON(VCpu, VCpu_);
        };
        friend void from_json(const Darabonba::Json& j, EnsRegionIdResource& obj) { 
          DARABONBA_PTR_FROM_JSON(Area, area_);
          DARABONBA_PTR_FROM_JSON(AreaCode, areaCode_);
          DARABONBA_PTR_FROM_JSON(BizDate, bizDate_);
          DARABONBA_PTR_FROM_JSON(EnsRegionId, ensRegionId_);
          DARABONBA_PTR_FROM_JSON(EnsRegionIdName, ensRegionIdName_);
          DARABONBA_PTR_FROM_JSON(InstanceCount, instanceCount_);
          DARABONBA_PTR_FROM_JSON(InternetBandwidth, internetBandwidth_);
          DARABONBA_PTR_FROM_JSON(Isp, isp_);
          DARABONBA_PTR_FROM_JSON(VCpu, VCpu_);
        };
        EnsRegionIdResource() = default ;
        EnsRegionIdResource(const EnsRegionIdResource &) = default ;
        EnsRegionIdResource(EnsRegionIdResource &&) = default ;
        EnsRegionIdResource(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~EnsRegionIdResource() = default ;
        EnsRegionIdResource& operator=(const EnsRegionIdResource &) = default ;
        EnsRegionIdResource& operator=(EnsRegionIdResource &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->area_ == nullptr
        && this->areaCode_ == nullptr && this->bizDate_ == nullptr && this->ensRegionId_ == nullptr && this->ensRegionIdName_ == nullptr && this->instanceCount_ == nullptr
        && this->internetBandwidth_ == nullptr && this->isp_ == nullptr && this->VCpu_ == nullptr; };
        // area Field Functions 
        bool hasArea() const { return this->area_ != nullptr;};
        void deleteArea() { this->area_ = nullptr;};
        inline string getArea() const { DARABONBA_PTR_GET_DEFAULT(area_, "") };
        inline EnsRegionIdResource& setArea(string area) { DARABONBA_PTR_SET_VALUE(area_, area) };


        // areaCode Field Functions 
        bool hasAreaCode() const { return this->areaCode_ != nullptr;};
        void deleteAreaCode() { this->areaCode_ = nullptr;};
        inline string getAreaCode() const { DARABONBA_PTR_GET_DEFAULT(areaCode_, "") };
        inline EnsRegionIdResource& setAreaCode(string areaCode) { DARABONBA_PTR_SET_VALUE(areaCode_, areaCode) };


        // bizDate Field Functions 
        bool hasBizDate() const { return this->bizDate_ != nullptr;};
        void deleteBizDate() { this->bizDate_ = nullptr;};
        inline string getBizDate() const { DARABONBA_PTR_GET_DEFAULT(bizDate_, "") };
        inline EnsRegionIdResource& setBizDate(string bizDate) { DARABONBA_PTR_SET_VALUE(bizDate_, bizDate) };


        // ensRegionId Field Functions 
        bool hasEnsRegionId() const { return this->ensRegionId_ != nullptr;};
        void deleteEnsRegionId() { this->ensRegionId_ = nullptr;};
        inline string getEnsRegionId() const { DARABONBA_PTR_GET_DEFAULT(ensRegionId_, "") };
        inline EnsRegionIdResource& setEnsRegionId(string ensRegionId) { DARABONBA_PTR_SET_VALUE(ensRegionId_, ensRegionId) };


        // ensRegionIdName Field Functions 
        bool hasEnsRegionIdName() const { return this->ensRegionIdName_ != nullptr;};
        void deleteEnsRegionIdName() { this->ensRegionIdName_ = nullptr;};
        inline string getEnsRegionIdName() const { DARABONBA_PTR_GET_DEFAULT(ensRegionIdName_, "") };
        inline EnsRegionIdResource& setEnsRegionIdName(string ensRegionIdName) { DARABONBA_PTR_SET_VALUE(ensRegionIdName_, ensRegionIdName) };


        // instanceCount Field Functions 
        bool hasInstanceCount() const { return this->instanceCount_ != nullptr;};
        void deleteInstanceCount() { this->instanceCount_ = nullptr;};
        inline int32_t getInstanceCount() const { DARABONBA_PTR_GET_DEFAULT(instanceCount_, 0) };
        inline EnsRegionIdResource& setInstanceCount(int32_t instanceCount) { DARABONBA_PTR_SET_VALUE(instanceCount_, instanceCount) };


        // internetBandwidth Field Functions 
        bool hasInternetBandwidth() const { return this->internetBandwidth_ != nullptr;};
        void deleteInternetBandwidth() { this->internetBandwidth_ = nullptr;};
        inline int64_t getInternetBandwidth() const { DARABONBA_PTR_GET_DEFAULT(internetBandwidth_, 0L) };
        inline EnsRegionIdResource& setInternetBandwidth(int64_t internetBandwidth) { DARABONBA_PTR_SET_VALUE(internetBandwidth_, internetBandwidth) };


        // isp Field Functions 
        bool hasIsp() const { return this->isp_ != nullptr;};
        void deleteIsp() { this->isp_ = nullptr;};
        inline string getIsp() const { DARABONBA_PTR_GET_DEFAULT(isp_, "") };
        inline EnsRegionIdResource& setIsp(string isp) { DARABONBA_PTR_SET_VALUE(isp_, isp) };


        // VCpu Field Functions 
        bool hasVCpu() const { return this->VCpu_ != nullptr;};
        void deleteVCpu() { this->VCpu_ = nullptr;};
        inline int32_t getVCpu() const { DARABONBA_PTR_GET_DEFAULT(VCpu_, 0) };
        inline EnsRegionIdResource& setVCpu(int32_t VCpu) { DARABONBA_PTR_SET_VALUE(VCpu_, VCpu) };


      protected:
        // The region. Set the value to West.
        shared_ptr<string> area_ {};
        // The code of the region.
        shared_ptr<string> areaCode_ {};
        // The date when the transaction was processed.
        shared_ptr<string> bizDate_ {};
        // The ID of the node.
        shared_ptr<string> ensRegionId_ {};
        // The name of the node.
        shared_ptr<string> ensRegionIdName_ {};
        // The number of instances.
        shared_ptr<int32_t> instanceCount_ {};
        // The public bandwidth of the instance. Unit: Bits/s.
        shared_ptr<int64_t> internetBandwidth_ {};
        // The ISP. Valid values:
        // 
        // *   cmcc: China Mobile
        // *   unicom: China Unicom
        // *   telecom: China Telecom
        // *   multiCarrier: multi-line ISP
        shared_ptr<string> isp_ {};
        // The number of vCPUs.
        shared_ptr<int32_t> VCpu_ {};
      };

      virtual bool empty() const override { return this->ensRegionIdResource_ == nullptr; };
      // ensRegionIdResource Field Functions 
      bool hasEnsRegionIdResource() const { return this->ensRegionIdResource_ != nullptr;};
      void deleteEnsRegionIdResource() { this->ensRegionIdResource_ = nullptr;};
      inline const vector<EnsRegionIdResources::EnsRegionIdResource> & getEnsRegionIdResource() const { DARABONBA_PTR_GET_CONST(ensRegionIdResource_, vector<EnsRegionIdResources::EnsRegionIdResource>) };
      inline vector<EnsRegionIdResources::EnsRegionIdResource> getEnsRegionIdResource() { DARABONBA_PTR_GET(ensRegionIdResource_, vector<EnsRegionIdResources::EnsRegionIdResource>) };
      inline EnsRegionIdResources& setEnsRegionIdResource(const vector<EnsRegionIdResources::EnsRegionIdResource> & ensRegionIdResource) { DARABONBA_PTR_SET_VALUE(ensRegionIdResource_, ensRegionIdResource) };
      inline EnsRegionIdResources& setEnsRegionIdResource(vector<EnsRegionIdResources::EnsRegionIdResource> && ensRegionIdResource) { DARABONBA_PTR_SET_RVALUE(ensRegionIdResource_, ensRegionIdResource) };


    protected:
      shared_ptr<vector<EnsRegionIdResources::EnsRegionIdResource>> ensRegionIdResource_ {};
    };

    virtual bool empty() const override { return this->ensRegionIdResources_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // ensRegionIdResources Field Functions 
    bool hasEnsRegionIdResources() const { return this->ensRegionIdResources_ != nullptr;};
    void deleteEnsRegionIdResources() { this->ensRegionIdResources_ = nullptr;};
    inline const DescribeEnsRegionIdResourceResponseBody::EnsRegionIdResources & getEnsRegionIdResources() const { DARABONBA_PTR_GET_CONST(ensRegionIdResources_, DescribeEnsRegionIdResourceResponseBody::EnsRegionIdResources) };
    inline DescribeEnsRegionIdResourceResponseBody::EnsRegionIdResources getEnsRegionIdResources() { DARABONBA_PTR_GET(ensRegionIdResources_, DescribeEnsRegionIdResourceResponseBody::EnsRegionIdResources) };
    inline DescribeEnsRegionIdResourceResponseBody& setEnsRegionIdResources(const DescribeEnsRegionIdResourceResponseBody::EnsRegionIdResources & ensRegionIdResources) { DARABONBA_PTR_SET_VALUE(ensRegionIdResources_, ensRegionIdResources) };
    inline DescribeEnsRegionIdResourceResponseBody& setEnsRegionIdResources(DescribeEnsRegionIdResourceResponseBody::EnsRegionIdResources && ensRegionIdResources) { DARABONBA_PTR_SET_RVALUE(ensRegionIdResources_, ensRegionIdResources) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeEnsRegionIdResourceResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeEnsRegionIdResourceResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeEnsRegionIdResourceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeEnsRegionIdResourceResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The returned data. For more information, see EnsRegionIdResources in sample JSON responses.
    shared_ptr<DescribeEnsRegionIdResourceResponseBody::EnsRegionIdResources> ensRegionIdResources_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of queried nodes.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
