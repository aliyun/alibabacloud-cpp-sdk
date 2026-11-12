// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPLANSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPLANSRESPONSEBODY_HPP_
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
  class ListPlansResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPlansResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Plans, plans_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListPlansResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Plans, plans_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListPlansResponseBody() = default ;
    ListPlansResponseBody(const ListPlansResponseBody &) = default ;
    ListPlansResponseBody(ListPlansResponseBody &&) = default ;
    ListPlansResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPlansResponseBody() = default ;
    ListPlansResponseBody& operator=(const ListPlansResponseBody &) = default ;
    ListPlansResponseBody& operator=(ListPlansResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Plans : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Plans& obj) { 
        DARABONBA_PTR_TO_JSON(Bandwidth, bandwidth_);
        DARABONBA_PTR_TO_JSON(Core, core_);
        DARABONBA_PTR_TO_JSON(Credits, credits_);
        DARABONBA_PTR_TO_JSON(Currency, currency_);
        DARABONBA_PTR_TO_JSON(DiskSize, diskSize_);
        DARABONBA_PTR_TO_JSON(DiskType, diskType_);
        DARABONBA_PTR_TO_JSON(Flow, flow_);
        DARABONBA_PTR_TO_JSON(IspType, ispType_);
        DARABONBA_PTR_TO_JSON(Memory, memory_);
        DARABONBA_PTR_TO_JSON(OriginPrice, originPrice_);
        DARABONBA_PTR_TO_JSON(PlanId, planId_);
        DARABONBA_PTR_TO_JSON(PlanType, planType_);
        DARABONBA_PTR_TO_JSON(PublicIpNum, publicIpNum_);
        DARABONBA_PTR_TO_JSON(SupportPlatform, supportPlatform_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
        DARABONBA_PTR_TO_JSON(Tokens, tokens_);
      };
      friend void from_json(const Darabonba::Json& j, Plans& obj) { 
        DARABONBA_PTR_FROM_JSON(Bandwidth, bandwidth_);
        DARABONBA_PTR_FROM_JSON(Core, core_);
        DARABONBA_PTR_FROM_JSON(Credits, credits_);
        DARABONBA_PTR_FROM_JSON(Currency, currency_);
        DARABONBA_PTR_FROM_JSON(DiskSize, diskSize_);
        DARABONBA_PTR_FROM_JSON(DiskType, diskType_);
        DARABONBA_PTR_FROM_JSON(Flow, flow_);
        DARABONBA_PTR_FROM_JSON(IspType, ispType_);
        DARABONBA_PTR_FROM_JSON(Memory, memory_);
        DARABONBA_PTR_FROM_JSON(OriginPrice, originPrice_);
        DARABONBA_PTR_FROM_JSON(PlanId, planId_);
        DARABONBA_PTR_FROM_JSON(PlanType, planType_);
        DARABONBA_PTR_FROM_JSON(PublicIpNum, publicIpNum_);
        DARABONBA_PTR_FROM_JSON(SupportPlatform, supportPlatform_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
        DARABONBA_PTR_FROM_JSON(Tokens, tokens_);
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
      class Tags : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Tags& obj) { 
          DARABONBA_PTR_TO_JSON(CnTitle, cnTitle_);
          DARABONBA_PTR_TO_JSON(Color, color_);
          DARABONBA_PTR_TO_JSON(EnTitle, enTitle_);
        };
        friend void from_json(const Darabonba::Json& j, Tags& obj) { 
          DARABONBA_PTR_FROM_JSON(CnTitle, cnTitle_);
          DARABONBA_PTR_FROM_JSON(Color, color_);
          DARABONBA_PTR_FROM_JSON(EnTitle, enTitle_);
        };
        Tags() = default ;
        Tags(const Tags &) = default ;
        Tags(Tags &&) = default ;
        Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Tags() = default ;
        Tags& operator=(const Tags &) = default ;
        Tags& operator=(Tags &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->cnTitle_ == nullptr
        && this->color_ == nullptr && this->enTitle_ == nullptr; };
        // cnTitle Field Functions 
        bool hasCnTitle() const { return this->cnTitle_ != nullptr;};
        void deleteCnTitle() { this->cnTitle_ = nullptr;};
        inline string getCnTitle() const { DARABONBA_PTR_GET_DEFAULT(cnTitle_, "") };
        inline Tags& setCnTitle(string cnTitle) { DARABONBA_PTR_SET_VALUE(cnTitle_, cnTitle) };


        // color Field Functions 
        bool hasColor() const { return this->color_ != nullptr;};
        void deleteColor() { this->color_ = nullptr;};
        inline string getColor() const { DARABONBA_PTR_GET_DEFAULT(color_, "") };
        inline Tags& setColor(string color) { DARABONBA_PTR_SET_VALUE(color_, color) };


        // enTitle Field Functions 
        bool hasEnTitle() const { return this->enTitle_ != nullptr;};
        void deleteEnTitle() { this->enTitle_ = nullptr;};
        inline string getEnTitle() const { DARABONBA_PTR_GET_DEFAULT(enTitle_, "") };
        inline Tags& setEnTitle(string enTitle) { DARABONBA_PTR_SET_VALUE(enTitle_, enTitle) };


      protected:
        // The Chinese title.
        shared_ptr<string> cnTitle_ {};
        // The color.
        shared_ptr<string> color_ {};
        // The English title.
        shared_ptr<string> enTitle_ {};
      };

      virtual bool empty() const override { return this->bandwidth_ == nullptr
        && this->core_ == nullptr && this->credits_ == nullptr && this->currency_ == nullptr && this->diskSize_ == nullptr && this->diskType_ == nullptr
        && this->flow_ == nullptr && this->ispType_ == nullptr && this->memory_ == nullptr && this->originPrice_ == nullptr && this->planId_ == nullptr
        && this->planType_ == nullptr && this->publicIpNum_ == nullptr && this->supportPlatform_ == nullptr && this->tags_ == nullptr && this->tokens_ == nullptr; };
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


      // credits Field Functions 
      bool hasCredits() const { return this->credits_ != nullptr;};
      void deleteCredits() { this->credits_ = nullptr;};
      inline int32_t getCredits() const { DARABONBA_PTR_GET_DEFAULT(credits_, 0) };
      inline Plans& setCredits(int32_t credits) { DARABONBA_PTR_SET_VALUE(credits_, credits) };


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


      // ispType Field Functions 
      bool hasIspType() const { return this->ispType_ != nullptr;};
      void deleteIspType() { this->ispType_ = nullptr;};
      inline string getIspType() const { DARABONBA_PTR_GET_DEFAULT(ispType_, "") };
      inline Plans& setIspType(string ispType) { DARABONBA_PTR_SET_VALUE(ispType_, ispType) };


      // memory Field Functions 
      bool hasMemory() const { return this->memory_ != nullptr;};
      void deleteMemory() { this->memory_ = nullptr;};
      inline float getMemory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0.0) };
      inline Plans& setMemory(float memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


      // originPrice Field Functions 
      bool hasOriginPrice() const { return this->originPrice_ != nullptr;};
      void deleteOriginPrice() { this->originPrice_ = nullptr;};
      inline string getOriginPrice() const { DARABONBA_PTR_GET_DEFAULT(originPrice_, "") };
      inline Plans& setOriginPrice(string originPrice) { DARABONBA_PTR_SET_VALUE(originPrice_, originPrice) };


      // planId Field Functions 
      bool hasPlanId() const { return this->planId_ != nullptr;};
      void deletePlanId() { this->planId_ = nullptr;};
      inline string getPlanId() const { DARABONBA_PTR_GET_DEFAULT(planId_, "") };
      inline Plans& setPlanId(string planId) { DARABONBA_PTR_SET_VALUE(planId_, planId) };


      // planType Field Functions 
      bool hasPlanType() const { return this->planType_ != nullptr;};
      void deletePlanType() { this->planType_ = nullptr;};
      inline string getPlanType() const { DARABONBA_PTR_GET_DEFAULT(planType_, "") };
      inline Plans& setPlanType(string planType) { DARABONBA_PTR_SET_VALUE(planType_, planType) };


      // publicIpNum Field Functions 
      bool hasPublicIpNum() const { return this->publicIpNum_ != nullptr;};
      void deletePublicIpNum() { this->publicIpNum_ = nullptr;};
      inline string getPublicIpNum() const { DARABONBA_PTR_GET_DEFAULT(publicIpNum_, "") };
      inline Plans& setPublicIpNum(string publicIpNum) { DARABONBA_PTR_SET_VALUE(publicIpNum_, publicIpNum) };


      // supportPlatform Field Functions 
      bool hasSupportPlatform() const { return this->supportPlatform_ != nullptr;};
      void deleteSupportPlatform() { this->supportPlatform_ = nullptr;};
      inline string getSupportPlatform() const { DARABONBA_PTR_GET_DEFAULT(supportPlatform_, "") };
      inline Plans& setSupportPlatform(string supportPlatform) { DARABONBA_PTR_SET_VALUE(supportPlatform_, supportPlatform) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<Plans::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Plans::Tags>) };
      inline vector<Plans::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<Plans::Tags>) };
      inline Plans& setTags(const vector<Plans::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline Plans& setTags(vector<Plans::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      // tokens Field Functions 
      bool hasTokens() const { return this->tokens_ != nullptr;};
      void deleteTokens() { this->tokens_ = nullptr;};
      inline int32_t getTokens() const { DARABONBA_PTR_GET_DEFAULT(tokens_, 0) };
      inline Plans& setTokens(int32_t tokens) { DARABONBA_PTR_SET_VALUE(tokens_, tokens) };


    protected:
      // The peak bandwidth. Unit: Mbps.
      shared_ptr<int32_t> bandwidth_ {};
      // The number of vCPUs.
      shared_ptr<int32_t> core_ {};
      // The number of credits.
      shared_ptr<int32_t> credits_ {};
      // The currency unit. Valid values:
      // 
      // - CNY: Chinese Yuan.
      // 
      // - USD: US Dollar.
      // 
      // > The currency unit is CNY on the China site and USD on the international site.
      shared_ptr<string> currency_ {};
      // The disk capacity. Unit: GiB.
      shared_ptr<int32_t> diskSize_ {};
      // The disk type. Valid values:
      // 
      // - ESSD: Enterprise SSD (ESSD) at performance level (PL) 0.
      // - SSD: standard SSD.
      // - CLOUD_EFFICIENCY: ultra cloud disk.
      shared_ptr<string> diskType_ {};
      // The monthly data transfer quota. Unit: GB.
      shared_ptr<int32_t> flow_ {};
      // The public network line type. Valid values:
      // - **BGP** (default): BGP line.
      // - **BGP_NCO**: BGP (outside the Chinese mainland optimized) line.
      shared_ptr<string> ispType_ {};
      // The memory size. Unit: GiB.
      shared_ptr<float> memory_ {};
      // The monthly price of the simple application server plan.
      shared_ptr<string> originPrice_ {};
      // The plan ID.
      shared_ptr<string> planId_ {};
      // The plan type. Valid values:
      // 
      // - NORMAL: general-purpose.
      // - CAPACITY: storage-optimized.
      // - PREVIOUS: previous generation.
      // - MULTI_IP: multiple public IP addresses.
      // - INTERNATIONAL: international.
      // 
      // > For more information, see [Instance families](https://help.aliyun.com/document_detail/2861773.html).
      shared_ptr<string> planType_ {};
      // The number of public IP addresses.
      shared_ptr<string> publicIpNum_ {};
      // The operating system type supported by the plan.
      shared_ptr<string> supportPlatform_ {};
      // The tags.
      shared_ptr<vector<Plans::Tags>> tags_ {};
      // The number of tokens.
      shared_ptr<int32_t> tokens_ {};
    };

    virtual bool empty() const override { return this->plans_ == nullptr
        && this->requestId_ == nullptr; };
    // plans Field Functions 
    bool hasPlans() const { return this->plans_ != nullptr;};
    void deletePlans() { this->plans_ = nullptr;};
    inline const vector<ListPlansResponseBody::Plans> & getPlans() const { DARABONBA_PTR_GET_CONST(plans_, vector<ListPlansResponseBody::Plans>) };
    inline vector<ListPlansResponseBody::Plans> getPlans() { DARABONBA_PTR_GET(plans_, vector<ListPlansResponseBody::Plans>) };
    inline ListPlansResponseBody& setPlans(const vector<ListPlansResponseBody::Plans> & plans) { DARABONBA_PTR_SET_VALUE(plans_, plans) };
    inline ListPlansResponseBody& setPlans(vector<ListPlansResponseBody::Plans> && plans) { DARABONBA_PTR_SET_RVALUE(plans_, plans) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListPlansResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The plan information.
    shared_ptr<vector<ListPlansResponseBody::Plans>> plans_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SWASOPEN20200601
#endif
