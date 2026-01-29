// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYRESOURCEPACKAGEINSTANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYRESOURCEPACKAGEINSTANCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class QueryResourcePackageInstancesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryResourcePackageInstancesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Page, page_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, QueryResourcePackageInstancesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Page, page_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    QueryResourcePackageInstancesResponseBody() = default ;
    QueryResourcePackageInstancesResponseBody(const QueryResourcePackageInstancesResponseBody &) = default ;
    QueryResourcePackageInstancesResponseBody(QueryResourcePackageInstancesResponseBody &&) = default ;
    QueryResourcePackageInstancesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryResourcePackageInstancesResponseBody() = default ;
    QueryResourcePackageInstancesResponseBody& operator=(const QueryResourcePackageInstancesResponseBody &) = default ;
    QueryResourcePackageInstancesResponseBody& operator=(QueryResourcePackageInstancesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(HostId, hostId_);
        DARABONBA_PTR_TO_JSON(Instances, instances_);
        DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(HostId, hostId_);
        DARABONBA_PTR_FROM_JSON(Instances, instances_);
        DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Instances : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Instances& obj) { 
          DARABONBA_PTR_TO_JSON(Instance, instance_);
        };
        friend void from_json(const Darabonba::Json& j, Instances& obj) { 
          DARABONBA_PTR_FROM_JSON(Instance, instance_);
        };
        Instances() = default ;
        Instances(const Instances &) = default ;
        Instances(Instances &&) = default ;
        Instances(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Instances() = default ;
        Instances& operator=(const Instances &) = default ;
        Instances& operator=(Instances &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Instance : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Instance& obj) { 
            DARABONBA_PTR_TO_JSON(ApplicableProducts, applicableProducts_);
            DARABONBA_PTR_TO_JSON(CommodityCode, commodityCode_);
            DARABONBA_PTR_TO_JSON(DeductType, deductType_);
            DARABONBA_PTR_TO_JSON(EffectiveTime, effectiveTime_);
            DARABONBA_PTR_TO_JSON(ExpiryTime, expiryTime_);
            DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
            DARABONBA_PTR_TO_JSON(PackageType, packageType_);
            DARABONBA_PTR_TO_JSON(Region, region_);
            DARABONBA_PTR_TO_JSON(RemainingAmount, remainingAmount_);
            DARABONBA_PTR_TO_JSON(RemainingAmountUnit, remainingAmountUnit_);
            DARABONBA_PTR_TO_JSON(Remark, remark_);
            DARABONBA_PTR_TO_JSON(Status, status_);
            DARABONBA_PTR_TO_JSON(TotalAmount, totalAmount_);
            DARABONBA_PTR_TO_JSON(TotalAmountUnit, totalAmountUnit_);
          };
          friend void from_json(const Darabonba::Json& j, Instance& obj) { 
            DARABONBA_PTR_FROM_JSON(ApplicableProducts, applicableProducts_);
            DARABONBA_PTR_FROM_JSON(CommodityCode, commodityCode_);
            DARABONBA_PTR_FROM_JSON(DeductType, deductType_);
            DARABONBA_PTR_FROM_JSON(EffectiveTime, effectiveTime_);
            DARABONBA_PTR_FROM_JSON(ExpiryTime, expiryTime_);
            DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
            DARABONBA_PTR_FROM_JSON(PackageType, packageType_);
            DARABONBA_PTR_FROM_JSON(Region, region_);
            DARABONBA_PTR_FROM_JSON(RemainingAmount, remainingAmount_);
            DARABONBA_PTR_FROM_JSON(RemainingAmountUnit, remainingAmountUnit_);
            DARABONBA_PTR_FROM_JSON(Remark, remark_);
            DARABONBA_PTR_FROM_JSON(Status, status_);
            DARABONBA_PTR_FROM_JSON(TotalAmount, totalAmount_);
            DARABONBA_PTR_FROM_JSON(TotalAmountUnit, totalAmountUnit_);
          };
          Instance() = default ;
          Instance(const Instance &) = default ;
          Instance(Instance &&) = default ;
          Instance(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Instance() = default ;
          Instance& operator=(const Instance &) = default ;
          Instance& operator=(Instance &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class ApplicableProducts : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const ApplicableProducts& obj) { 
              DARABONBA_PTR_TO_JSON(Product, product_);
            };
            friend void from_json(const Darabonba::Json& j, ApplicableProducts& obj) { 
              DARABONBA_PTR_FROM_JSON(Product, product_);
            };
            ApplicableProducts() = default ;
            ApplicableProducts(const ApplicableProducts &) = default ;
            ApplicableProducts(ApplicableProducts &&) = default ;
            ApplicableProducts(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~ApplicableProducts() = default ;
            ApplicableProducts& operator=(const ApplicableProducts &) = default ;
            ApplicableProducts& operator=(ApplicableProducts &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->product_ == nullptr; };
            // product Field Functions 
            bool hasProduct() const { return this->product_ != nullptr;};
            void deleteProduct() { this->product_ = nullptr;};
            inline const vector<string> & getProduct() const { DARABONBA_PTR_GET_CONST(product_, vector<string>) };
            inline vector<string> getProduct() { DARABONBA_PTR_GET(product_, vector<string>) };
            inline ApplicableProducts& setProduct(const vector<string> & product) { DARABONBA_PTR_SET_VALUE(product_, product) };
            inline ApplicableProducts& setProduct(vector<string> && product) { DARABONBA_PTR_SET_RVALUE(product_, product) };


          protected:
            shared_ptr<vector<string>> product_ {};
          };

          virtual bool empty() const override { return this->applicableProducts_ == nullptr
        && this->commodityCode_ == nullptr && this->deductType_ == nullptr && this->effectiveTime_ == nullptr && this->expiryTime_ == nullptr && this->instanceId_ == nullptr
        && this->packageType_ == nullptr && this->region_ == nullptr && this->remainingAmount_ == nullptr && this->remainingAmountUnit_ == nullptr && this->remark_ == nullptr
        && this->status_ == nullptr && this->totalAmount_ == nullptr && this->totalAmountUnit_ == nullptr; };
          // applicableProducts Field Functions 
          bool hasApplicableProducts() const { return this->applicableProducts_ != nullptr;};
          void deleteApplicableProducts() { this->applicableProducts_ = nullptr;};
          inline const Instance::ApplicableProducts & getApplicableProducts() const { DARABONBA_PTR_GET_CONST(applicableProducts_, Instance::ApplicableProducts) };
          inline Instance::ApplicableProducts getApplicableProducts() { DARABONBA_PTR_GET(applicableProducts_, Instance::ApplicableProducts) };
          inline Instance& setApplicableProducts(const Instance::ApplicableProducts & applicableProducts) { DARABONBA_PTR_SET_VALUE(applicableProducts_, applicableProducts) };
          inline Instance& setApplicableProducts(Instance::ApplicableProducts && applicableProducts) { DARABONBA_PTR_SET_RVALUE(applicableProducts_, applicableProducts) };


          // commodityCode Field Functions 
          bool hasCommodityCode() const { return this->commodityCode_ != nullptr;};
          void deleteCommodityCode() { this->commodityCode_ = nullptr;};
          inline string getCommodityCode() const { DARABONBA_PTR_GET_DEFAULT(commodityCode_, "") };
          inline Instance& setCommodityCode(string commodityCode) { DARABONBA_PTR_SET_VALUE(commodityCode_, commodityCode) };


          // deductType Field Functions 
          bool hasDeductType() const { return this->deductType_ != nullptr;};
          void deleteDeductType() { this->deductType_ = nullptr;};
          inline string getDeductType() const { DARABONBA_PTR_GET_DEFAULT(deductType_, "") };
          inline Instance& setDeductType(string deductType) { DARABONBA_PTR_SET_VALUE(deductType_, deductType) };


          // effectiveTime Field Functions 
          bool hasEffectiveTime() const { return this->effectiveTime_ != nullptr;};
          void deleteEffectiveTime() { this->effectiveTime_ = nullptr;};
          inline string getEffectiveTime() const { DARABONBA_PTR_GET_DEFAULT(effectiveTime_, "") };
          inline Instance& setEffectiveTime(string effectiveTime) { DARABONBA_PTR_SET_VALUE(effectiveTime_, effectiveTime) };


          // expiryTime Field Functions 
          bool hasExpiryTime() const { return this->expiryTime_ != nullptr;};
          void deleteExpiryTime() { this->expiryTime_ = nullptr;};
          inline string getExpiryTime() const { DARABONBA_PTR_GET_DEFAULT(expiryTime_, "") };
          inline Instance& setExpiryTime(string expiryTime) { DARABONBA_PTR_SET_VALUE(expiryTime_, expiryTime) };


          // instanceId Field Functions 
          bool hasInstanceId() const { return this->instanceId_ != nullptr;};
          void deleteInstanceId() { this->instanceId_ = nullptr;};
          inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
          inline Instance& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


          // packageType Field Functions 
          bool hasPackageType() const { return this->packageType_ != nullptr;};
          void deletePackageType() { this->packageType_ = nullptr;};
          inline string getPackageType() const { DARABONBA_PTR_GET_DEFAULT(packageType_, "") };
          inline Instance& setPackageType(string packageType) { DARABONBA_PTR_SET_VALUE(packageType_, packageType) };


          // region Field Functions 
          bool hasRegion() const { return this->region_ != nullptr;};
          void deleteRegion() { this->region_ = nullptr;};
          inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
          inline Instance& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


          // remainingAmount Field Functions 
          bool hasRemainingAmount() const { return this->remainingAmount_ != nullptr;};
          void deleteRemainingAmount() { this->remainingAmount_ = nullptr;};
          inline string getRemainingAmount() const { DARABONBA_PTR_GET_DEFAULT(remainingAmount_, "") };
          inline Instance& setRemainingAmount(string remainingAmount) { DARABONBA_PTR_SET_VALUE(remainingAmount_, remainingAmount) };


          // remainingAmountUnit Field Functions 
          bool hasRemainingAmountUnit() const { return this->remainingAmountUnit_ != nullptr;};
          void deleteRemainingAmountUnit() { this->remainingAmountUnit_ = nullptr;};
          inline string getRemainingAmountUnit() const { DARABONBA_PTR_GET_DEFAULT(remainingAmountUnit_, "") };
          inline Instance& setRemainingAmountUnit(string remainingAmountUnit) { DARABONBA_PTR_SET_VALUE(remainingAmountUnit_, remainingAmountUnit) };


          // remark Field Functions 
          bool hasRemark() const { return this->remark_ != nullptr;};
          void deleteRemark() { this->remark_ = nullptr;};
          inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
          inline Instance& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


          // status Field Functions 
          bool hasStatus() const { return this->status_ != nullptr;};
          void deleteStatus() { this->status_ = nullptr;};
          inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
          inline Instance& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


          // totalAmount Field Functions 
          bool hasTotalAmount() const { return this->totalAmount_ != nullptr;};
          void deleteTotalAmount() { this->totalAmount_ = nullptr;};
          inline string getTotalAmount() const { DARABONBA_PTR_GET_DEFAULT(totalAmount_, "") };
          inline Instance& setTotalAmount(string totalAmount) { DARABONBA_PTR_SET_VALUE(totalAmount_, totalAmount) };


          // totalAmountUnit Field Functions 
          bool hasTotalAmountUnit() const { return this->totalAmountUnit_ != nullptr;};
          void deleteTotalAmountUnit() { this->totalAmountUnit_ = nullptr;};
          inline string getTotalAmountUnit() const { DARABONBA_PTR_GET_DEFAULT(totalAmountUnit_, "") };
          inline Instance& setTotalAmountUnit(string totalAmountUnit) { DARABONBA_PTR_SET_VALUE(totalAmountUnit_, totalAmountUnit) };


        protected:
          // The services to which the resource plan is applicable.
          shared_ptr<Instance::ApplicableProducts> applicableProducts_ {};
          // The commodity code.
          shared_ptr<string> commodityCode_ {};
          // The deduction type. Example: Absolute.
          shared_ptr<string> deductType_ {};
          // The time when the resource plan took effect.
          shared_ptr<string> effectiveTime_ {};
          // The time when the resource plan expired.
          shared_ptr<string> expiryTime_ {};
          // The ID of the instance.
          shared_ptr<string> instanceId_ {};
          // The type of the resource plan.
          shared_ptr<string> packageType_ {};
          // The ID of the region.
          shared_ptr<string> region_ {};
          // The remaining quota.
          shared_ptr<string> remainingAmount_ {};
          // The unit of the remaining quota.
          shared_ptr<string> remainingAmountUnit_ {};
          // The remarks on the resource plan. The remarks must be made in Chinese.
          shared_ptr<string> remark_ {};
          // The status of the resource plan. Valid values:
          // 
          // *   Available
          // *   Expired
          shared_ptr<string> status_ {};
          // The total quota of the resource plan.
          shared_ptr<string> totalAmount_ {};
          // The unit of the total quota.
          shared_ptr<string> totalAmountUnit_ {};
        };

        virtual bool empty() const override { return this->instance_ == nullptr; };
        // instance Field Functions 
        bool hasInstance() const { return this->instance_ != nullptr;};
        void deleteInstance() { this->instance_ = nullptr;};
        inline const vector<Instances::Instance> & getInstance() const { DARABONBA_PTR_GET_CONST(instance_, vector<Instances::Instance>) };
        inline vector<Instances::Instance> getInstance() { DARABONBA_PTR_GET(instance_, vector<Instances::Instance>) };
        inline Instances& setInstance(const vector<Instances::Instance> & instance) { DARABONBA_PTR_SET_VALUE(instance_, instance) };
        inline Instances& setInstance(vector<Instances::Instance> && instance) { DARABONBA_PTR_SET_RVALUE(instance_, instance) };


      protected:
        shared_ptr<vector<Instances::Instance>> instance_ {};
      };

      virtual bool empty() const override { return this->hostId_ == nullptr
        && this->instances_ == nullptr && this->pageNum_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // hostId Field Functions 
      bool hasHostId() const { return this->hostId_ != nullptr;};
      void deleteHostId() { this->hostId_ = nullptr;};
      inline string getHostId() const { DARABONBA_PTR_GET_DEFAULT(hostId_, "") };
      inline Data& setHostId(string hostId) { DARABONBA_PTR_SET_VALUE(hostId_, hostId) };


      // instances Field Functions 
      bool hasInstances() const { return this->instances_ != nullptr;};
      void deleteInstances() { this->instances_ = nullptr;};
      inline const Data::Instances & getInstances() const { DARABONBA_PTR_GET_CONST(instances_, Data::Instances) };
      inline Data::Instances getInstances() { DARABONBA_PTR_GET(instances_, Data::Instances) };
      inline Data& setInstances(const Data::Instances & instances) { DARABONBA_PTR_SET_VALUE(instances_, instances) };
      inline Data& setInstances(Data::Instances && instances) { DARABONBA_PTR_SET_RVALUE(instances_, instances) };


      // pageNum Field Functions 
      bool hasPageNum() const { return this->pageNum_ != nullptr;};
      void deletePageNum() { this->pageNum_ = nullptr;};
      inline string getPageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, "") };
      inline Data& setPageNum(string pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline string getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
      inline Data& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline string getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, "") };
      inline Data& setTotalCount(string totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The ID of the host.
      shared_ptr<string> hostId_ {};
      // The details of the instances.
      shared_ptr<Data::Instances> instances_ {};
      // The page number of the returned page.
      shared_ptr<string> pageNum_ {};
      // The number of entries returned per page.
      shared_ptr<string> pageSize_ {};
      // The total number of returned entries.
      shared_ptr<string> totalCount_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->page_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr
        && this->success_ == nullptr && this->total_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QueryResourcePackageInstancesResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const QueryResourcePackageInstancesResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, QueryResourcePackageInstancesResponseBody::Data) };
    inline QueryResourcePackageInstancesResponseBody::Data getData() { DARABONBA_PTR_GET(data_, QueryResourcePackageInstancesResponseBody::Data) };
    inline QueryResourcePackageInstancesResponseBody& setData(const QueryResourcePackageInstancesResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryResourcePackageInstancesResponseBody& setData(QueryResourcePackageInstancesResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryResourcePackageInstancesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline int32_t getPage() const { DARABONBA_PTR_GET_DEFAULT(page_, 0) };
    inline QueryResourcePackageInstancesResponseBody& setPage(int32_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline QueryResourcePackageInstancesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryResourcePackageInstancesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryResourcePackageInstancesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline QueryResourcePackageInstancesResponseBody& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The status code returned.
    shared_ptr<string> code_ {};
    // The data returned.
    shared_ptr<QueryResourcePackageInstancesResponseBody::Data> data_ {};
    // The message returned.
    shared_ptr<string> message_ {};
    // The page number of the returned page.
    shared_ptr<int32_t> page_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request is successful.
    shared_ptr<bool> success_ {};
    // The total number of returned entries.
    shared_ptr<int32_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
