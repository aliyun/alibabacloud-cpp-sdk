// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCEPLANSMODIFICATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCEPLANSMODIFICATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SWASOPEN20200601
{
namespace Models
{
  class ListInstancePlansModificationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstancePlansModificationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Plans, plans_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstancePlansModificationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Plans, plans_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListInstancePlansModificationResponseBody() = default ;
    ListInstancePlansModificationResponseBody(const ListInstancePlansModificationResponseBody &) = default ;
    ListInstancePlansModificationResponseBody(ListInstancePlansModificationResponseBody &&) = default ;
    ListInstancePlansModificationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstancePlansModificationResponseBody() = default ;
    ListInstancePlansModificationResponseBody& operator=(const ListInstancePlansModificationResponseBody &) = default ;
    ListInstancePlansModificationResponseBody& operator=(ListInstancePlansModificationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Plans : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Plans& obj) { 
        DARABONBA_PTR_TO_JSON(Bandwidth, bandwidth_);
        DARABONBA_PTR_TO_JSON(Core, core_);
        DARABONBA_PTR_TO_JSON(Currency, currency_);
        DARABONBA_PTR_TO_JSON(DiskSize, diskSize_);
        DARABONBA_PTR_TO_JSON(DiskType, diskType_);
        DARABONBA_PTR_TO_JSON(Flow, flow_);
        DARABONBA_PTR_TO_JSON(Memory, memory_);
        DARABONBA_PTR_TO_JSON(OriginPrice, originPrice_);
        DARABONBA_PTR_TO_JSON(PlanId, planId_);
        DARABONBA_PTR_TO_JSON(SupportPlatform, supportPlatform_);
      };
      friend void from_json(const Darabonba::Json& j, Plans& obj) { 
        DARABONBA_PTR_FROM_JSON(Bandwidth, bandwidth_);
        DARABONBA_PTR_FROM_JSON(Core, core_);
        DARABONBA_PTR_FROM_JSON(Currency, currency_);
        DARABONBA_PTR_FROM_JSON(DiskSize, diskSize_);
        DARABONBA_PTR_FROM_JSON(DiskType, diskType_);
        DARABONBA_PTR_FROM_JSON(Flow, flow_);
        DARABONBA_PTR_FROM_JSON(Memory, memory_);
        DARABONBA_PTR_FROM_JSON(OriginPrice, originPrice_);
        DARABONBA_PTR_FROM_JSON(PlanId, planId_);
        DARABONBA_PTR_FROM_JSON(SupportPlatform, supportPlatform_);
      };
      Plans() = default ;
      Plans(const Plans &) = default ;
      Plans(Plans &&) = default ;
      Plans(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Plans() = default ;
      Plans& operator=(const Plans &) = default ;
      Plans& operator=(Plans &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->bandwidth_ == nullptr
        && this->core_ == nullptr && this->currency_ == nullptr && this->diskSize_ == nullptr && this->diskType_ == nullptr && this->flow_ == nullptr
        && this->memory_ == nullptr && this->originPrice_ == nullptr && this->planId_ == nullptr && this->supportPlatform_ == nullptr; };
      // bandwidth Field Functions 
      bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
      void deleteBandwidth() { this->bandwidth_ = nullptr;};
      inline int32_t getBandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, 0) };
      inline Plans& setBandwidth(int32_t bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


      // core Field Functions 
      bool hasCore() const { return this->core_ != nullptr;};
      void deleteCore() { this->core_ = nullptr;};
      inline int32_t getCore() const { DARABONBA_PTR_GET_DEFAULT(core_, 0) };
      inline Plans& setCore(int32_t core) { DARABONBA_PTR_SET_VALUE(core_, core) };


      // currency Field Functions 
      bool hasCurrency() const { return this->currency_ != nullptr;};
      void deleteCurrency() { this->currency_ = nullptr;};
      inline string getCurrency() const { DARABONBA_PTR_GET_DEFAULT(currency_, "") };
      inline Plans& setCurrency(string currency) { DARABONBA_PTR_SET_VALUE(currency_, currency) };


      // diskSize Field Functions 
      bool hasDiskSize() const { return this->diskSize_ != nullptr;};
      void deleteDiskSize() { this->diskSize_ = nullptr;};
      inline int32_t getDiskSize() const { DARABONBA_PTR_GET_DEFAULT(diskSize_, 0) };
      inline Plans& setDiskSize(int32_t diskSize) { DARABONBA_PTR_SET_VALUE(diskSize_, diskSize) };


      // diskType Field Functions 
      bool hasDiskType() const { return this->diskType_ != nullptr;};
      void deleteDiskType() { this->diskType_ = nullptr;};
      inline string getDiskType() const { DARABONBA_PTR_GET_DEFAULT(diskType_, "") };
      inline Plans& setDiskType(string diskType) { DARABONBA_PTR_SET_VALUE(diskType_, diskType) };


      // flow Field Functions 
      bool hasFlow() const { return this->flow_ != nullptr;};
      void deleteFlow() { this->flow_ = nullptr;};
      inline int32_t getFlow() const { DARABONBA_PTR_GET_DEFAULT(flow_, 0) };
      inline Plans& setFlow(int32_t flow) { DARABONBA_PTR_SET_VALUE(flow_, flow) };


      // memory Field Functions 
      bool hasMemory() const { return this->memory_ != nullptr;};
      void deleteMemory() { this->memory_ = nullptr;};
      inline int32_t getMemory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0) };
      inline Plans& setMemory(int32_t memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


      // originPrice Field Functions 
      bool hasOriginPrice() const { return this->originPrice_ != nullptr;};
      void deleteOriginPrice() { this->originPrice_ = nullptr;};
      inline double getOriginPrice() const { DARABONBA_PTR_GET_DEFAULT(originPrice_, 0.0) };
      inline Plans& setOriginPrice(double originPrice) { DARABONBA_PTR_SET_VALUE(originPrice_, originPrice) };


      // planId Field Functions 
      bool hasPlanId() const { return this->planId_ != nullptr;};
      void deletePlanId() { this->planId_ = nullptr;};
      inline string getPlanId() const { DARABONBA_PTR_GET_DEFAULT(planId_, "") };
      inline Plans& setPlanId(string planId) { DARABONBA_PTR_SET_VALUE(planId_, planId) };


      // supportPlatform Field Functions 
      bool hasSupportPlatform() const { return this->supportPlatform_ != nullptr;};
      void deleteSupportPlatform() { this->supportPlatform_ = nullptr;};
      inline string getSupportPlatform() const { DARABONBA_PTR_GET_DEFAULT(supportPlatform_, "") };
      inline Plans& setSupportPlatform(string supportPlatform) { DARABONBA_PTR_SET_VALUE(supportPlatform_, supportPlatform) };


    protected:
      // The peak bandwidth. Unit: Mbps.
      shared_ptr<int32_t> bandwidth_ {};
      // The number of vCPU cores.
      shared_ptr<int32_t> core_ {};
      // The unit of the price. Valid values:
      // 
      // - CNY: Chinese Yuan
      // 
      // - USD: US Dollar
      shared_ptr<string> currency_ {};
      // The disk capacity. Unit: GiB.
      shared_ptr<int32_t> diskSize_ {};
      // The disk type. Valid values:
      // 
      // - SSD: a standard SSD.
      // 
      // - ESSD: an Enhanced SSD (ESSD) at performance level (PL) 0.
      // 
      // - CLOUD_EFFICIENCY: an ultra disk.
      shared_ptr<string> diskType_ {};
      // The monthly traffic. Unit: GB.
      shared_ptr<int32_t> flow_ {};
      // The memory size. Unit: GiB.
      shared_ptr<int32_t> memory_ {};
      // The price of the plan.
      shared_ptr<double> originPrice_ {};
      // The plan ID.
      shared_ptr<string> planId_ {};
      // The operating systems supported by the plan.
      shared_ptr<string> supportPlatform_ {};
    };

    virtual bool empty() const override { return this->plans_ == nullptr
        && this->requestId_ == nullptr; };
    // plans Field Functions 
    bool hasPlans() const { return this->plans_ != nullptr;};
    void deletePlans() { this->plans_ = nullptr;};
    inline const vector<ListInstancePlansModificationResponseBody::Plans> & getPlans() const { DARABONBA_PTR_GET_CONST(plans_, vector<ListInstancePlansModificationResponseBody::Plans>) };
    inline vector<ListInstancePlansModificationResponseBody::Plans> getPlans() { DARABONBA_PTR_GET(plans_, vector<ListInstancePlansModificationResponseBody::Plans>) };
    inline ListInstancePlansModificationResponseBody& setPlans(const vector<ListInstancePlansModificationResponseBody::Plans> & plans) { DARABONBA_PTR_SET_VALUE(plans_, plans) };
    inline ListInstancePlansModificationResponseBody& setPlans(vector<ListInstancePlansModificationResponseBody::Plans> && plans) { DARABONBA_PTR_SET_RVALUE(plans_, plans) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListInstancePlansModificationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The array of plans.
    shared_ptr<vector<ListInstancePlansModificationResponseBody::Plans>> plans_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SWASOPEN20200601
#endif
