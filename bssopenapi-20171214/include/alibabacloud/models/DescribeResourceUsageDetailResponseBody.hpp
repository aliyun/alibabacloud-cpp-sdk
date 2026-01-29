// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERESOURCEUSAGEDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERESOURCEUSAGEDETAILRESPONSEBODY_HPP_
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
  class DescribeResourceUsageDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeResourceUsageDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeResourceUsageDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeResourceUsageDetailResponseBody() = default ;
    DescribeResourceUsageDetailResponseBody(const DescribeResourceUsageDetailResponseBody &) = default ;
    DescribeResourceUsageDetailResponseBody(DescribeResourceUsageDetailResponseBody &&) = default ;
    DescribeResourceUsageDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeResourceUsageDetailResponseBody() = default ;
    DescribeResourceUsageDetailResponseBody& operator=(const DescribeResourceUsageDetailResponseBody &) = default ;
    DescribeResourceUsageDetailResponseBody& operator=(DescribeResourceUsageDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Items, items_);
        DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
        DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Items, items_);
        DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
        DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
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
      class Items : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Items& obj) { 
          DARABONBA_PTR_TO_JSON(CapacityUnit, capacityUnit_);
          DARABONBA_PTR_TO_JSON(Currency, currency_);
          DARABONBA_PTR_TO_JSON(DeductQuantity, deductQuantity_);
          DARABONBA_PTR_TO_JSON(EndTime, endTime_);
          DARABONBA_PTR_TO_JSON(ImageType, imageType_);
          DARABONBA_PTR_TO_JSON(InstanceSpec, instanceSpec_);
          DARABONBA_PTR_TO_JSON(PostpaidCost, postpaidCost_);
          DARABONBA_PTR_TO_JSON(PotentialSavedCost, potentialSavedCost_);
          DARABONBA_PTR_TO_JSON(Quantity, quantity_);
          DARABONBA_PTR_TO_JSON(Region, region_);
          DARABONBA_PTR_TO_JSON(RegionNo, regionNo_);
          DARABONBA_PTR_TO_JSON(ReservationCost, reservationCost_);
          DARABONBA_PTR_TO_JSON(ResourceInstanceId, resourceInstanceId_);
          DARABONBA_PTR_TO_JSON(SavedCost, savedCost_);
          DARABONBA_PTR_TO_JSON(StartTime, startTime_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(StatusName, statusName_);
          DARABONBA_PTR_TO_JSON(TotalQuantity, totalQuantity_);
          DARABONBA_PTR_TO_JSON(UsagePercentage, usagePercentage_);
          DARABONBA_PTR_TO_JSON(UserId, userId_);
          DARABONBA_PTR_TO_JSON(UserName, userName_);
          DARABONBA_PTR_TO_JSON(Zone, zone_);
          DARABONBA_PTR_TO_JSON(ZoneName, zoneName_);
        };
        friend void from_json(const Darabonba::Json& j, Items& obj) { 
          DARABONBA_PTR_FROM_JSON(CapacityUnit, capacityUnit_);
          DARABONBA_PTR_FROM_JSON(Currency, currency_);
          DARABONBA_PTR_FROM_JSON(DeductQuantity, deductQuantity_);
          DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
          DARABONBA_PTR_FROM_JSON(ImageType, imageType_);
          DARABONBA_PTR_FROM_JSON(InstanceSpec, instanceSpec_);
          DARABONBA_PTR_FROM_JSON(PostpaidCost, postpaidCost_);
          DARABONBA_PTR_FROM_JSON(PotentialSavedCost, potentialSavedCost_);
          DARABONBA_PTR_FROM_JSON(Quantity, quantity_);
          DARABONBA_PTR_FROM_JSON(Region, region_);
          DARABONBA_PTR_FROM_JSON(RegionNo, regionNo_);
          DARABONBA_PTR_FROM_JSON(ReservationCost, reservationCost_);
          DARABONBA_PTR_FROM_JSON(ResourceInstanceId, resourceInstanceId_);
          DARABONBA_PTR_FROM_JSON(SavedCost, savedCost_);
          DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(StatusName, statusName_);
          DARABONBA_PTR_FROM_JSON(TotalQuantity, totalQuantity_);
          DARABONBA_PTR_FROM_JSON(UsagePercentage, usagePercentage_);
          DARABONBA_PTR_FROM_JSON(UserId, userId_);
          DARABONBA_PTR_FROM_JSON(UserName, userName_);
          DARABONBA_PTR_FROM_JSON(Zone, zone_);
          DARABONBA_PTR_FROM_JSON(ZoneName, zoneName_);
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
        virtual bool empty() const override { return this->capacityUnit_ == nullptr
        && this->currency_ == nullptr && this->deductQuantity_ == nullptr && this->endTime_ == nullptr && this->imageType_ == nullptr && this->instanceSpec_ == nullptr
        && this->postpaidCost_ == nullptr && this->potentialSavedCost_ == nullptr && this->quantity_ == nullptr && this->region_ == nullptr && this->regionNo_ == nullptr
        && this->reservationCost_ == nullptr && this->resourceInstanceId_ == nullptr && this->savedCost_ == nullptr && this->startTime_ == nullptr && this->status_ == nullptr
        && this->statusName_ == nullptr && this->totalQuantity_ == nullptr && this->usagePercentage_ == nullptr && this->userId_ == nullptr && this->userName_ == nullptr
        && this->zone_ == nullptr && this->zoneName_ == nullptr; };
        // capacityUnit Field Functions 
        bool hasCapacityUnit() const { return this->capacityUnit_ != nullptr;};
        void deleteCapacityUnit() { this->capacityUnit_ = nullptr;};
        inline string getCapacityUnit() const { DARABONBA_PTR_GET_DEFAULT(capacityUnit_, "") };
        inline Items& setCapacityUnit(string capacityUnit) { DARABONBA_PTR_SET_VALUE(capacityUnit_, capacityUnit) };


        // currency Field Functions 
        bool hasCurrency() const { return this->currency_ != nullptr;};
        void deleteCurrency() { this->currency_ = nullptr;};
        inline string getCurrency() const { DARABONBA_PTR_GET_DEFAULT(currency_, "") };
        inline Items& setCurrency(string currency) { DARABONBA_PTR_SET_VALUE(currency_, currency) };


        // deductQuantity Field Functions 
        bool hasDeductQuantity() const { return this->deductQuantity_ != nullptr;};
        void deleteDeductQuantity() { this->deductQuantity_ = nullptr;};
        inline float getDeductQuantity() const { DARABONBA_PTR_GET_DEFAULT(deductQuantity_, 0.0) };
        inline Items& setDeductQuantity(float deductQuantity) { DARABONBA_PTR_SET_VALUE(deductQuantity_, deductQuantity) };


        // endTime Field Functions 
        bool hasEndTime() const { return this->endTime_ != nullptr;};
        void deleteEndTime() { this->endTime_ = nullptr;};
        inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
        inline Items& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


        // imageType Field Functions 
        bool hasImageType() const { return this->imageType_ != nullptr;};
        void deleteImageType() { this->imageType_ = nullptr;};
        inline string getImageType() const { DARABONBA_PTR_GET_DEFAULT(imageType_, "") };
        inline Items& setImageType(string imageType) { DARABONBA_PTR_SET_VALUE(imageType_, imageType) };


        // instanceSpec Field Functions 
        bool hasInstanceSpec() const { return this->instanceSpec_ != nullptr;};
        void deleteInstanceSpec() { this->instanceSpec_ = nullptr;};
        inline string getInstanceSpec() const { DARABONBA_PTR_GET_DEFAULT(instanceSpec_, "") };
        inline Items& setInstanceSpec(string instanceSpec) { DARABONBA_PTR_SET_VALUE(instanceSpec_, instanceSpec) };


        // postpaidCost Field Functions 
        bool hasPostpaidCost() const { return this->postpaidCost_ != nullptr;};
        void deletePostpaidCost() { this->postpaidCost_ = nullptr;};
        inline string getPostpaidCost() const { DARABONBA_PTR_GET_DEFAULT(postpaidCost_, "") };
        inline Items& setPostpaidCost(string postpaidCost) { DARABONBA_PTR_SET_VALUE(postpaidCost_, postpaidCost) };


        // potentialSavedCost Field Functions 
        bool hasPotentialSavedCost() const { return this->potentialSavedCost_ != nullptr;};
        void deletePotentialSavedCost() { this->potentialSavedCost_ = nullptr;};
        inline string getPotentialSavedCost() const { DARABONBA_PTR_GET_DEFAULT(potentialSavedCost_, "") };
        inline Items& setPotentialSavedCost(string potentialSavedCost) { DARABONBA_PTR_SET_VALUE(potentialSavedCost_, potentialSavedCost) };


        // quantity Field Functions 
        bool hasQuantity() const { return this->quantity_ != nullptr;};
        void deleteQuantity() { this->quantity_ = nullptr;};
        inline int64_t getQuantity() const { DARABONBA_PTR_GET_DEFAULT(quantity_, 0L) };
        inline Items& setQuantity(int64_t quantity) { DARABONBA_PTR_SET_VALUE(quantity_, quantity) };


        // region Field Functions 
        bool hasRegion() const { return this->region_ != nullptr;};
        void deleteRegion() { this->region_ = nullptr;};
        inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
        inline Items& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


        // regionNo Field Functions 
        bool hasRegionNo() const { return this->regionNo_ != nullptr;};
        void deleteRegionNo() { this->regionNo_ = nullptr;};
        inline string getRegionNo() const { DARABONBA_PTR_GET_DEFAULT(regionNo_, "") };
        inline Items& setRegionNo(string regionNo) { DARABONBA_PTR_SET_VALUE(regionNo_, regionNo) };


        // reservationCost Field Functions 
        bool hasReservationCost() const { return this->reservationCost_ != nullptr;};
        void deleteReservationCost() { this->reservationCost_ = nullptr;};
        inline string getReservationCost() const { DARABONBA_PTR_GET_DEFAULT(reservationCost_, "") };
        inline Items& setReservationCost(string reservationCost) { DARABONBA_PTR_SET_VALUE(reservationCost_, reservationCost) };


        // resourceInstanceId Field Functions 
        bool hasResourceInstanceId() const { return this->resourceInstanceId_ != nullptr;};
        void deleteResourceInstanceId() { this->resourceInstanceId_ = nullptr;};
        inline string getResourceInstanceId() const { DARABONBA_PTR_GET_DEFAULT(resourceInstanceId_, "") };
        inline Items& setResourceInstanceId(string resourceInstanceId) { DARABONBA_PTR_SET_VALUE(resourceInstanceId_, resourceInstanceId) };


        // savedCost Field Functions 
        bool hasSavedCost() const { return this->savedCost_ != nullptr;};
        void deleteSavedCost() { this->savedCost_ = nullptr;};
        inline string getSavedCost() const { DARABONBA_PTR_GET_DEFAULT(savedCost_, "") };
        inline Items& setSavedCost(string savedCost) { DARABONBA_PTR_SET_VALUE(savedCost_, savedCost) };


        // startTime Field Functions 
        bool hasStartTime() const { return this->startTime_ != nullptr;};
        void deleteStartTime() { this->startTime_ = nullptr;};
        inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
        inline Items& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Items& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // statusName Field Functions 
        bool hasStatusName() const { return this->statusName_ != nullptr;};
        void deleteStatusName() { this->statusName_ = nullptr;};
        inline string getStatusName() const { DARABONBA_PTR_GET_DEFAULT(statusName_, "") };
        inline Items& setStatusName(string statusName) { DARABONBA_PTR_SET_VALUE(statusName_, statusName) };


        // totalQuantity Field Functions 
        bool hasTotalQuantity() const { return this->totalQuantity_ != nullptr;};
        void deleteTotalQuantity() { this->totalQuantity_ = nullptr;};
        inline float getTotalQuantity() const { DARABONBA_PTR_GET_DEFAULT(totalQuantity_, 0.0) };
        inline Items& setTotalQuantity(float totalQuantity) { DARABONBA_PTR_SET_VALUE(totalQuantity_, totalQuantity) };


        // usagePercentage Field Functions 
        bool hasUsagePercentage() const { return this->usagePercentage_ != nullptr;};
        void deleteUsagePercentage() { this->usagePercentage_ = nullptr;};
        inline float getUsagePercentage() const { DARABONBA_PTR_GET_DEFAULT(usagePercentage_, 0.0) };
        inline Items& setUsagePercentage(float usagePercentage) { DARABONBA_PTR_SET_VALUE(usagePercentage_, usagePercentage) };


        // userId Field Functions 
        bool hasUserId() const { return this->userId_ != nullptr;};
        void deleteUserId() { this->userId_ = nullptr;};
        inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
        inline Items& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


        // userName Field Functions 
        bool hasUserName() const { return this->userName_ != nullptr;};
        void deleteUserName() { this->userName_ = nullptr;};
        inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
        inline Items& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


        // zone Field Functions 
        bool hasZone() const { return this->zone_ != nullptr;};
        void deleteZone() { this->zone_ = nullptr;};
        inline string getZone() const { DARABONBA_PTR_GET_DEFAULT(zone_, "") };
        inline Items& setZone(string zone) { DARABONBA_PTR_SET_VALUE(zone_, zone) };


        // zoneName Field Functions 
        bool hasZoneName() const { return this->zoneName_ != nullptr;};
        void deleteZoneName() { this->zoneName_ = nullptr;};
        inline string getZoneName() const { DARABONBA_PTR_GET_DEFAULT(zoneName_, "") };
        inline Items& setZoneName(string zoneName) { DARABONBA_PTR_SET_VALUE(zoneName_, zoneName) };


      protected:
        // The unit that is used to measure the resources that are deducted.
        shared_ptr<string> capacityUnit_ {};
        // The type of the currency.
        shared_ptr<string> currency_ {};
        // The amount of the deducted resources.
        shared_ptr<float> deductQuantity_ {};
        // The end of the time range in which the usage details were queried.
        shared_ptr<string> endTime_ {};
        // The operating system.
        shared_ptr<string> imageType_ {};
        // The instance type.
        shared_ptr<string> instanceSpec_ {};
        // The equivalent of pay-as-you-go costs.
        shared_ptr<string> postpaidCost_ {};
        // The potential net savings.
        shared_ptr<string> potentialSavedCost_ {};
        // The number of deduction plans.
        shared_ptr<int64_t> quantity_ {};
        // The region.
        shared_ptr<string> region_ {};
        // The code of the region.
        shared_ptr<string> regionNo_ {};
        // The fee of the deduction plan.
        shared_ptr<string> reservationCost_ {};
        // The ID of the deduction plan.
        shared_ptr<string> resourceInstanceId_ {};
        // The net savings.
        shared_ptr<string> savedCost_ {};
        // The beginning of the time range in which the usage details were queried.
        shared_ptr<string> startTime_ {};
        // The status of the deduction plan.
        shared_ptr<string> status_ {};
        // The name of the status.
        shared_ptr<string> statusName_ {};
        // The total capacity of the deduction plan.
        shared_ptr<float> totalQuantity_ {};
        // The usage rate of the deduction plan.
        shared_ptr<float> usagePercentage_ {};
        // The account ID.
        shared_ptr<string> userId_ {};
        // The username of the account.
        shared_ptr<string> userName_ {};
        // The zone.
        shared_ptr<string> zone_ {};
        // The code of the zone.
        shared_ptr<string> zoneName_ {};
      };

      virtual bool empty() const override { return this->items_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->totalCount_ == nullptr; };
      // items Field Functions 
      bool hasItems() const { return this->items_ != nullptr;};
      void deleteItems() { this->items_ = nullptr;};
      inline const vector<Data::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<Data::Items>) };
      inline vector<Data::Items> getItems() { DARABONBA_PTR_GET(items_, vector<Data::Items>) };
      inline Data& setItems(const vector<Data::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
      inline Data& setItems(vector<Data::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


      // maxResults Field Functions 
      bool hasMaxResults() const { return this->maxResults_ != nullptr;};
      void deleteMaxResults() { this->maxResults_ = nullptr;};
      inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
      inline Data& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


      // nextToken Field Functions 
      bool hasNextToken() const { return this->nextToken_ != nullptr;};
      void deleteNextToken() { this->nextToken_ = nullptr;};
      inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
      inline Data& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline Data& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The data entries.
      shared_ptr<vector<Data::Items>> items_ {};
      // The number of entries returned on the current page.
      shared_ptr<int32_t> maxResults_ {};
      // A pagination token. It can be used in the next request to retrieve a new page of results.
      shared_ptr<string> nextToken_ {};
      // The total number of entries returned.
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeResourceUsageDetailResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeResourceUsageDetailResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeResourceUsageDetailResponseBody::Data) };
    inline DescribeResourceUsageDetailResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeResourceUsageDetailResponseBody::Data) };
    inline DescribeResourceUsageDetailResponseBody& setData(const DescribeResourceUsageDetailResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeResourceUsageDetailResponseBody& setData(DescribeResourceUsageDetailResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeResourceUsageDetailResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeResourceUsageDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeResourceUsageDetailResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The response code.
    shared_ptr<string> code_ {};
    // The returned data.
    shared_ptr<DescribeResourceUsageDetailResponseBody::Data> data_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
