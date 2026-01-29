// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSAVINGSPLANSDISCOUNTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYSAVINGSPLANSDISCOUNTRESPONSEBODY_HPP_
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
  class QuerySavingsPlansDiscountResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuerySavingsPlansDiscountResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QuerySavingsPlansDiscountResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QuerySavingsPlansDiscountResponseBody() = default ;
    QuerySavingsPlansDiscountResponseBody(const QuerySavingsPlansDiscountResponseBody &) = default ;
    QuerySavingsPlansDiscountResponseBody(QuerySavingsPlansDiscountResponseBody &&) = default ;
    QuerySavingsPlansDiscountResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuerySavingsPlansDiscountResponseBody() = default ;
    QuerySavingsPlansDiscountResponseBody& operator=(const QuerySavingsPlansDiscountResponseBody &) = default ;
    QuerySavingsPlansDiscountResponseBody& operator=(QuerySavingsPlansDiscountResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(HostId, hostId_);
        DARABONBA_PTR_TO_JSON(Items, items_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(HostId, hostId_);
        DARABONBA_PTR_FROM_JSON(Items, items_);
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
      class Items : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Items& obj) { 
          DARABONBA_PTR_TO_JSON(CommodityName, commodityName_);
          DARABONBA_PTR_TO_JSON(ContractDiscountRate, contractDiscountRate_);
          DARABONBA_PTR_TO_JSON(Cycle, cycle_);
          DARABONBA_PTR_TO_JSON(DiscountRate, discountRate_);
          DARABONBA_PTR_TO_JSON(ModuleName, moduleName_);
          DARABONBA_PTR_TO_JSON(PayMode, payMode_);
          DARABONBA_PTR_TO_JSON(Region, region_);
          DARABONBA_PTR_TO_JSON(RegionCode, regionCode_);
          DARABONBA_PTR_TO_JSON(Spec, spec_);
          DARABONBA_PTR_TO_JSON(SpnType, spnType_);
        };
        friend void from_json(const Darabonba::Json& j, Items& obj) { 
          DARABONBA_PTR_FROM_JSON(CommodityName, commodityName_);
          DARABONBA_PTR_FROM_JSON(ContractDiscountRate, contractDiscountRate_);
          DARABONBA_PTR_FROM_JSON(Cycle, cycle_);
          DARABONBA_PTR_FROM_JSON(DiscountRate, discountRate_);
          DARABONBA_PTR_FROM_JSON(ModuleName, moduleName_);
          DARABONBA_PTR_FROM_JSON(PayMode, payMode_);
          DARABONBA_PTR_FROM_JSON(Region, region_);
          DARABONBA_PTR_FROM_JSON(RegionCode, regionCode_);
          DARABONBA_PTR_FROM_JSON(Spec, spec_);
          DARABONBA_PTR_FROM_JSON(SpnType, spnType_);
        };
        Items() = default ;
        Items(const Items &) = default ;
        Items(Items &&) = default ;
        Items(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Items() = default ;
        Items& operator=(const Items &) = default ;
        Items& operator=(Items &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->commodityName_ == nullptr
        && this->contractDiscountRate_ == nullptr && this->cycle_ == nullptr && this->discountRate_ == nullptr && this->moduleName_ == nullptr && this->payMode_ == nullptr
        && this->region_ == nullptr && this->regionCode_ == nullptr && this->spec_ == nullptr && this->spnType_ == nullptr; };
        // commodityName Field Functions 
        bool hasCommodityName() const { return this->commodityName_ != nullptr;};
        void deleteCommodityName() { this->commodityName_ = nullptr;};
        inline string getCommodityName() const { DARABONBA_PTR_GET_DEFAULT(commodityName_, "") };
        inline Items& setCommodityName(string commodityName) { DARABONBA_PTR_SET_VALUE(commodityName_, commodityName) };


        // contractDiscountRate Field Functions 
        bool hasContractDiscountRate() const { return this->contractDiscountRate_ != nullptr;};
        void deleteContractDiscountRate() { this->contractDiscountRate_ = nullptr;};
        inline string getContractDiscountRate() const { DARABONBA_PTR_GET_DEFAULT(contractDiscountRate_, "") };
        inline Items& setContractDiscountRate(string contractDiscountRate) { DARABONBA_PTR_SET_VALUE(contractDiscountRate_, contractDiscountRate) };


        // cycle Field Functions 
        bool hasCycle() const { return this->cycle_ != nullptr;};
        void deleteCycle() { this->cycle_ = nullptr;};
        inline string getCycle() const { DARABONBA_PTR_GET_DEFAULT(cycle_, "") };
        inline Items& setCycle(string cycle) { DARABONBA_PTR_SET_VALUE(cycle_, cycle) };


        // discountRate Field Functions 
        bool hasDiscountRate() const { return this->discountRate_ != nullptr;};
        void deleteDiscountRate() { this->discountRate_ = nullptr;};
        inline string getDiscountRate() const { DARABONBA_PTR_GET_DEFAULT(discountRate_, "") };
        inline Items& setDiscountRate(string discountRate) { DARABONBA_PTR_SET_VALUE(discountRate_, discountRate) };


        // moduleName Field Functions 
        bool hasModuleName() const { return this->moduleName_ != nullptr;};
        void deleteModuleName() { this->moduleName_ = nullptr;};
        inline string getModuleName() const { DARABONBA_PTR_GET_DEFAULT(moduleName_, "") };
        inline Items& setModuleName(string moduleName) { DARABONBA_PTR_SET_VALUE(moduleName_, moduleName) };


        // payMode Field Functions 
        bool hasPayMode() const { return this->payMode_ != nullptr;};
        void deletePayMode() { this->payMode_ = nullptr;};
        inline string getPayMode() const { DARABONBA_PTR_GET_DEFAULT(payMode_, "") };
        inline Items& setPayMode(string payMode) { DARABONBA_PTR_SET_VALUE(payMode_, payMode) };


        // region Field Functions 
        bool hasRegion() const { return this->region_ != nullptr;};
        void deleteRegion() { this->region_ = nullptr;};
        inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
        inline Items& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


        // regionCode Field Functions 
        bool hasRegionCode() const { return this->regionCode_ != nullptr;};
        void deleteRegionCode() { this->regionCode_ = nullptr;};
        inline string getRegionCode() const { DARABONBA_PTR_GET_DEFAULT(regionCode_, "") };
        inline Items& setRegionCode(string regionCode) { DARABONBA_PTR_SET_VALUE(regionCode_, regionCode) };


        // spec Field Functions 
        bool hasSpec() const { return this->spec_ != nullptr;};
        void deleteSpec() { this->spec_ = nullptr;};
        inline string getSpec() const { DARABONBA_PTR_GET_DEFAULT(spec_, "") };
        inline Items& setSpec(string spec) { DARABONBA_PTR_SET_VALUE(spec_, spec) };


        // spnType Field Functions 
        bool hasSpnType() const { return this->spnType_ != nullptr;};
        void deleteSpnType() { this->spnType_ = nullptr;};
        inline string getSpnType() const { DARABONBA_PTR_GET_DEFAULT(spnType_, "") };
        inline Items& setSpnType(string spnType) { DARABONBA_PTR_SET_VALUE(spnType_, spnType) };


      protected:
        // The details of the service.
        shared_ptr<string> commodityName_ {};
        // The contracted discount.
        shared_ptr<string> contractDiscountRate_ {};
        // The cycle based on which queries were performed.
        shared_ptr<string> cycle_ {};
        // The discount provided by the official website.
        shared_ptr<string> discountRate_ {};
        // The name of the pricing module.
        shared_ptr<string> moduleName_ {};
        // The payment mode. Valid values:
        // 
        // *   total: all upfront
        // *   half: half upfront
        // *   zero: no upfront
        shared_ptr<string> payMode_ {};
        // The ID of the region.
        shared_ptr<string> region_ {};
        // The region ID of the instance. You can call the [DescribeDBInstanceAttribute](https://help.aliyun.com/document_detail/26231.html) operation to query the region ID of the instance.
        shared_ptr<string> regionCode_ {};
        // The type of the resource.
        shared_ptr<string> spec_ {};
        // The type of the savings plan.
        shared_ptr<string> spnType_ {};
      };

      virtual bool empty() const override { return this->hostId_ == nullptr
        && this->items_ == nullptr; };
      // hostId Field Functions 
      bool hasHostId() const { return this->hostId_ != nullptr;};
      void deleteHostId() { this->hostId_ = nullptr;};
      inline string getHostId() const { DARABONBA_PTR_GET_DEFAULT(hostId_, "") };
      inline Data& setHostId(string hostId) { DARABONBA_PTR_SET_VALUE(hostId_, hostId) };


      // items Field Functions 
      bool hasItems() const { return this->items_ != nullptr;};
      void deleteItems() { this->items_ = nullptr;};
      inline const vector<Data::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<Data::Items>) };
      inline vector<Data::Items> getItems() { DARABONBA_PTR_GET(items_, vector<Data::Items>) };
      inline Data& setItems(const vector<Data::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
      inline Data& setItems(vector<Data::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    protected:
      // The IP address of the request.
      shared_ptr<string> hostId_ {};
      // The information about the discounts on saving plans.
      shared_ptr<vector<Data::Items>> items_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QuerySavingsPlansDiscountResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const QuerySavingsPlansDiscountResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, QuerySavingsPlansDiscountResponseBody::Data) };
    inline QuerySavingsPlansDiscountResponseBody::Data getData() { DARABONBA_PTR_GET(data_, QuerySavingsPlansDiscountResponseBody::Data) };
    inline QuerySavingsPlansDiscountResponseBody& setData(const QuerySavingsPlansDiscountResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QuerySavingsPlansDiscountResponseBody& setData(QuerySavingsPlansDiscountResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QuerySavingsPlansDiscountResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QuerySavingsPlansDiscountResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QuerySavingsPlansDiscountResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The error code returned.
    shared_ptr<string> code_ {};
    // data
    shared_ptr<QuerySavingsPlansDiscountResponseBody::Data> data_ {};
    // The error message returned.
    shared_ptr<string> message_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request is successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
