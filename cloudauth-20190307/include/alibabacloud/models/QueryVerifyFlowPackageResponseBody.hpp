// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYVERIFYFLOWPACKAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYVERIFYFLOWPACKAGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class QueryVerifyFlowPackageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryVerifyFlowPackageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, QueryVerifyFlowPackageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    QueryVerifyFlowPackageResponseBody() = default ;
    QueryVerifyFlowPackageResponseBody(const QueryVerifyFlowPackageResponseBody &) = default ;
    QueryVerifyFlowPackageResponseBody(QueryVerifyFlowPackageResponseBody &&) = default ;
    QueryVerifyFlowPackageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryVerifyFlowPackageResponseBody() = default ;
    QueryVerifyFlowPackageResponseBody& operator=(const QueryVerifyFlowPackageResponseBody &) = default ;
    QueryVerifyFlowPackageResponseBody& operator=(QueryVerifyFlowPackageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(CommodityName, commodityName_);
        DARABONBA_PTR_TO_JSON(CurrCapacity, currCapacity_);
        DARABONBA_PTR_TO_JSON(CurrProportion, currProportion_);
        DARABONBA_PTR_TO_JSON(FlowDetails, flowDetails_);
        DARABONBA_PTR_TO_JSON(TotalCapacity, totalCapacity_);
        DARABONBA_PTR_TO_JSON(UsedCapacity, usedCapacity_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(CommodityName, commodityName_);
        DARABONBA_PTR_FROM_JSON(CurrCapacity, currCapacity_);
        DARABONBA_PTR_FROM_JSON(CurrProportion, currProportion_);
        DARABONBA_PTR_FROM_JSON(FlowDetails, flowDetails_);
        DARABONBA_PTR_FROM_JSON(TotalCapacity, totalCapacity_);
        DARABONBA_PTR_FROM_JSON(UsedCapacity, usedCapacity_);
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
      class FlowDetails : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const FlowDetails& obj) { 
          DARABONBA_PTR_TO_JSON(Capacity, capacity_);
          DARABONBA_PTR_TO_JSON(CommodityName, commodityName_);
          DARABONBA_PTR_TO_JSON(CurrCapacity, currCapacity_);
          DARABONBA_PTR_TO_JSON(CurrProportion, currProportion_);
          DARABONBA_PTR_TO_JSON(ExpireDate, expireDate_);
          DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(TakeEffectDate, takeEffectDate_);
        };
        friend void from_json(const Darabonba::Json& j, FlowDetails& obj) { 
          DARABONBA_PTR_FROM_JSON(Capacity, capacity_);
          DARABONBA_PTR_FROM_JSON(CommodityName, commodityName_);
          DARABONBA_PTR_FROM_JSON(CurrCapacity, currCapacity_);
          DARABONBA_PTR_FROM_JSON(CurrProportion, currProportion_);
          DARABONBA_PTR_FROM_JSON(ExpireDate, expireDate_);
          DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(TakeEffectDate, takeEffectDate_);
        };
        FlowDetails() = default ;
        FlowDetails(const FlowDetails &) = default ;
        FlowDetails(FlowDetails &&) = default ;
        FlowDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~FlowDetails() = default ;
        FlowDetails& operator=(const FlowDetails &) = default ;
        FlowDetails& operator=(FlowDetails &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->capacity_ == nullptr
        && this->commodityName_ == nullptr && this->currCapacity_ == nullptr && this->currProportion_ == nullptr && this->expireDate_ == nullptr && this->instanceName_ == nullptr
        && this->status_ == nullptr && this->takeEffectDate_ == nullptr; };
        // capacity Field Functions 
        bool hasCapacity() const { return this->capacity_ != nullptr;};
        void deleteCapacity() { this->capacity_ = nullptr;};
        inline double getCapacity() const { DARABONBA_PTR_GET_DEFAULT(capacity_, 0.0) };
        inline FlowDetails& setCapacity(double capacity) { DARABONBA_PTR_SET_VALUE(capacity_, capacity) };


        // commodityName Field Functions 
        bool hasCommodityName() const { return this->commodityName_ != nullptr;};
        void deleteCommodityName() { this->commodityName_ = nullptr;};
        inline string getCommodityName() const { DARABONBA_PTR_GET_DEFAULT(commodityName_, "") };
        inline FlowDetails& setCommodityName(string commodityName) { DARABONBA_PTR_SET_VALUE(commodityName_, commodityName) };


        // currCapacity Field Functions 
        bool hasCurrCapacity() const { return this->currCapacity_ != nullptr;};
        void deleteCurrCapacity() { this->currCapacity_ = nullptr;};
        inline double getCurrCapacity() const { DARABONBA_PTR_GET_DEFAULT(currCapacity_, 0.0) };
        inline FlowDetails& setCurrCapacity(double currCapacity) { DARABONBA_PTR_SET_VALUE(currCapacity_, currCapacity) };


        // currProportion Field Functions 
        bool hasCurrProportion() const { return this->currProportion_ != nullptr;};
        void deleteCurrProportion() { this->currProportion_ = nullptr;};
        inline string getCurrProportion() const { DARABONBA_PTR_GET_DEFAULT(currProportion_, "") };
        inline FlowDetails& setCurrProportion(string currProportion) { DARABONBA_PTR_SET_VALUE(currProportion_, currProportion) };


        // expireDate Field Functions 
        bool hasExpireDate() const { return this->expireDate_ != nullptr;};
        void deleteExpireDate() { this->expireDate_ = nullptr;};
        inline string getExpireDate() const { DARABONBA_PTR_GET_DEFAULT(expireDate_, "") };
        inline FlowDetails& setExpireDate(string expireDate) { DARABONBA_PTR_SET_VALUE(expireDate_, expireDate) };


        // instanceName Field Functions 
        bool hasInstanceName() const { return this->instanceName_ != nullptr;};
        void deleteInstanceName() { this->instanceName_ = nullptr;};
        inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
        inline FlowDetails& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline FlowDetails& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // takeEffectDate Field Functions 
        bool hasTakeEffectDate() const { return this->takeEffectDate_ != nullptr;};
        void deleteTakeEffectDate() { this->takeEffectDate_ = nullptr;};
        inline string getTakeEffectDate() const { DARABONBA_PTR_GET_DEFAULT(takeEffectDate_, "") };
        inline FlowDetails& setTakeEffectDate(string takeEffectDate) { DARABONBA_PTR_SET_VALUE(takeEffectDate_, takeEffectDate) };


      protected:
        // Total amount.
        shared_ptr<double> capacity_ {};
        // Name of the flow package.
        shared_ptr<string> commodityName_ {};
        // Remaining amount.
        shared_ptr<double> currCapacity_ {};
        // Proportion of remaining amount.
        shared_ptr<string> currProportion_ {};
        // Expiration date.
        shared_ptr<string> expireDate_ {};
        // Instance name
        shared_ptr<string> instanceName_ {};
        // Status.
        shared_ptr<string> status_ {};
        // Effective date.
        shared_ptr<string> takeEffectDate_ {};
      };

      virtual bool empty() const override { return this->commodityName_ == nullptr
        && this->currCapacity_ == nullptr && this->currProportion_ == nullptr && this->flowDetails_ == nullptr && this->totalCapacity_ == nullptr && this->usedCapacity_ == nullptr; };
      // commodityName Field Functions 
      bool hasCommodityName() const { return this->commodityName_ != nullptr;};
      void deleteCommodityName() { this->commodityName_ = nullptr;};
      inline string getCommodityName() const { DARABONBA_PTR_GET_DEFAULT(commodityName_, "") };
      inline Items& setCommodityName(string commodityName) { DARABONBA_PTR_SET_VALUE(commodityName_, commodityName) };


      // currCapacity Field Functions 
      bool hasCurrCapacity() const { return this->currCapacity_ != nullptr;};
      void deleteCurrCapacity() { this->currCapacity_ = nullptr;};
      inline double getCurrCapacity() const { DARABONBA_PTR_GET_DEFAULT(currCapacity_, 0.0) };
      inline Items& setCurrCapacity(double currCapacity) { DARABONBA_PTR_SET_VALUE(currCapacity_, currCapacity) };


      // currProportion Field Functions 
      bool hasCurrProportion() const { return this->currProportion_ != nullptr;};
      void deleteCurrProportion() { this->currProportion_ = nullptr;};
      inline string getCurrProportion() const { DARABONBA_PTR_GET_DEFAULT(currProportion_, "") };
      inline Items& setCurrProportion(string currProportion) { DARABONBA_PTR_SET_VALUE(currProportion_, currProportion) };


      // flowDetails Field Functions 
      bool hasFlowDetails() const { return this->flowDetails_ != nullptr;};
      void deleteFlowDetails() { this->flowDetails_ = nullptr;};
      inline const vector<Items::FlowDetails> & getFlowDetails() const { DARABONBA_PTR_GET_CONST(flowDetails_, vector<Items::FlowDetails>) };
      inline vector<Items::FlowDetails> getFlowDetails() { DARABONBA_PTR_GET(flowDetails_, vector<Items::FlowDetails>) };
      inline Items& setFlowDetails(const vector<Items::FlowDetails> & flowDetails) { DARABONBA_PTR_SET_VALUE(flowDetails_, flowDetails) };
      inline Items& setFlowDetails(vector<Items::FlowDetails> && flowDetails) { DARABONBA_PTR_SET_RVALUE(flowDetails_, flowDetails) };


      // totalCapacity Field Functions 
      bool hasTotalCapacity() const { return this->totalCapacity_ != nullptr;};
      void deleteTotalCapacity() { this->totalCapacity_ = nullptr;};
      inline double getTotalCapacity() const { DARABONBA_PTR_GET_DEFAULT(totalCapacity_, 0.0) };
      inline Items& setTotalCapacity(double totalCapacity) { DARABONBA_PTR_SET_VALUE(totalCapacity_, totalCapacity) };


      // usedCapacity Field Functions 
      bool hasUsedCapacity() const { return this->usedCapacity_ != nullptr;};
      void deleteUsedCapacity() { this->usedCapacity_ = nullptr;};
      inline double getUsedCapacity() const { DARABONBA_PTR_GET_DEFAULT(usedCapacity_, 0.0) };
      inline Items& setUsedCapacity(double usedCapacity) { DARABONBA_PTR_SET_VALUE(usedCapacity_, usedCapacity) };


    protected:
      // Name of the resource package.
      shared_ptr<string> commodityName_ {};
      // Current available capacity.
      shared_ptr<double> currCapacity_ {};
      // Proportion of current remaining capacity to total capacity.
      shared_ptr<string> currProportion_ {};
      // Details of the flow package.
      shared_ptr<vector<Items::FlowDetails>> flowDetails_ {};
      // Total quota.
      shared_ptr<double> totalCapacity_ {};
      // Used capacity.
      shared_ptr<double> usedCapacity_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->items_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->totalCount_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QueryVerifyFlowPackageResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int64_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0L) };
    inline QueryVerifyFlowPackageResponseBody& setHttpStatusCode(int64_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<QueryVerifyFlowPackageResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<QueryVerifyFlowPackageResponseBody::Items>) };
    inline vector<QueryVerifyFlowPackageResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<QueryVerifyFlowPackageResponseBody::Items>) };
    inline QueryVerifyFlowPackageResponseBody& setItems(const vector<QueryVerifyFlowPackageResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline QueryVerifyFlowPackageResponseBody& setItems(vector<QueryVerifyFlowPackageResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryVerifyFlowPackageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryVerifyFlowPackageResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline string getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, "") };
    inline QueryVerifyFlowPackageResponseBody& setTotalCount(string totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // Return code
    shared_ptr<string> code_ {};
    // HTTP status code.
    shared_ptr<int64_t> httpStatusCode_ {};
    // List of returned data.
    shared_ptr<vector<QueryVerifyFlowPackageResponseBody::Items>> items_ {};
    // ID of the request
    shared_ptr<string> requestId_ {};
    // Indicates whether the response was successful.
    shared_ptr<bool> success_ {};
    // Total count.
    shared_ptr<string> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
