// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUSERBUYSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUSERBUYSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class DescribeUserBuyStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUserBuyStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUserBuyStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeUserBuyStatusResponseBody() = default ;
    DescribeUserBuyStatusResponseBody(const DescribeUserBuyStatusResponseBody &) = default ;
    DescribeUserBuyStatusResponseBody(DescribeUserBuyStatusResponseBody &&) = default ;
    DescribeUserBuyStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUserBuyStatusResponseBody() = default ;
    DescribeUserBuyStatusResponseBody& operator=(const DescribeUserBuyStatusResponseBody &) = default ;
    DescribeUserBuyStatusResponseBody& operator=(DescribeUserBuyStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(CanBuy, canBuy_);
        DARABONBA_PTR_TO_JSON(Capacity, capacity_);
        DARABONBA_PTR_TO_JSON(DurationDays, durationDays_);
        DARABONBA_PTR_TO_JSON(EndTime, endTime_);
        DARABONBA_PTR_TO_JSON(MainUserId, mainUserId_);
        DARABONBA_PTR_TO_JSON(MainUserName, mainUserName_);
        DARABONBA_PTR_TO_JSON(MasterUserId, masterUserId_);
        DARABONBA_PTR_TO_JSON(MasterUserName, masterUserName_);
        DARABONBA_PTR_TO_JSON(RdOrder, rdOrder_);
        DARABONBA_PTR_TO_JSON(SasInstanceId, sasInstanceId_);
        DARABONBA_PTR_TO_JSON(SubUserId, subUserId_);
        DARABONBA_PTR_TO_JSON(SubUserName, subUserName_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(CanBuy, canBuy_);
        DARABONBA_PTR_FROM_JSON(Capacity, capacity_);
        DARABONBA_PTR_FROM_JSON(DurationDays, durationDays_);
        DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
        DARABONBA_PTR_FROM_JSON(MainUserId, mainUserId_);
        DARABONBA_PTR_FROM_JSON(MainUserName, mainUserName_);
        DARABONBA_PTR_FROM_JSON(MasterUserId, masterUserId_);
        DARABONBA_PTR_FROM_JSON(MasterUserName, masterUserName_);
        DARABONBA_PTR_FROM_JSON(RdOrder, rdOrder_);
        DARABONBA_PTR_FROM_JSON(SasInstanceId, sasInstanceId_);
        DARABONBA_PTR_FROM_JSON(SubUserId, subUserId_);
        DARABONBA_PTR_FROM_JSON(SubUserName, subUserName_);
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
      virtual bool empty() const override { return this->canBuy_ == nullptr
        && this->capacity_ == nullptr && this->durationDays_ == nullptr && this->endTime_ == nullptr && this->mainUserId_ == nullptr && this->mainUserName_ == nullptr
        && this->masterUserId_ == nullptr && this->masterUserName_ == nullptr && this->rdOrder_ == nullptr && this->sasInstanceId_ == nullptr && this->subUserId_ == nullptr
        && this->subUserName_ == nullptr; };
      // canBuy Field Functions 
      bool hasCanBuy() const { return this->canBuy_ != nullptr;};
      void deleteCanBuy() { this->canBuy_ = nullptr;};
      inline bool getCanBuy() const { DARABONBA_PTR_GET_DEFAULT(canBuy_, false) };
      inline Data& setCanBuy(bool canBuy) { DARABONBA_PTR_SET_VALUE(canBuy_, canBuy) };


      // capacity Field Functions 
      bool hasCapacity() const { return this->capacity_ != nullptr;};
      void deleteCapacity() { this->capacity_ = nullptr;};
      inline int32_t getCapacity() const { DARABONBA_PTR_GET_DEFAULT(capacity_, 0) };
      inline Data& setCapacity(int32_t capacity) { DARABONBA_PTR_SET_VALUE(capacity_, capacity) };


      // durationDays Field Functions 
      bool hasDurationDays() const { return this->durationDays_ != nullptr;};
      void deleteDurationDays() { this->durationDays_ = nullptr;};
      inline int64_t getDurationDays() const { DARABONBA_PTR_GET_DEFAULT(durationDays_, 0L) };
      inline Data& setDurationDays(int64_t durationDays) { DARABONBA_PTR_SET_VALUE(durationDays_, durationDays) };


      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
      inline Data& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // mainUserId Field Functions 
      bool hasMainUserId() const { return this->mainUserId_ != nullptr;};
      void deleteMainUserId() { this->mainUserId_ = nullptr;};
      inline int64_t getMainUserId() const { DARABONBA_PTR_GET_DEFAULT(mainUserId_, 0L) };
      inline Data& setMainUserId(int64_t mainUserId) { DARABONBA_PTR_SET_VALUE(mainUserId_, mainUserId) };


      // mainUserName Field Functions 
      bool hasMainUserName() const { return this->mainUserName_ != nullptr;};
      void deleteMainUserName() { this->mainUserName_ = nullptr;};
      inline string getMainUserName() const { DARABONBA_PTR_GET_DEFAULT(mainUserName_, "") };
      inline Data& setMainUserName(string mainUserName) { DARABONBA_PTR_SET_VALUE(mainUserName_, mainUserName) };


      // masterUserId Field Functions 
      bool hasMasterUserId() const { return this->masterUserId_ != nullptr;};
      void deleteMasterUserId() { this->masterUserId_ = nullptr;};
      inline int64_t getMasterUserId() const { DARABONBA_PTR_GET_DEFAULT(masterUserId_, 0L) };
      inline Data& setMasterUserId(int64_t masterUserId) { DARABONBA_PTR_SET_VALUE(masterUserId_, masterUserId) };


      // masterUserName Field Functions 
      bool hasMasterUserName() const { return this->masterUserName_ != nullptr;};
      void deleteMasterUserName() { this->masterUserName_ = nullptr;};
      inline string getMasterUserName() const { DARABONBA_PTR_GET_DEFAULT(masterUserName_, "") };
      inline Data& setMasterUserName(string masterUserName) { DARABONBA_PTR_SET_VALUE(masterUserName_, masterUserName) };


      // rdOrder Field Functions 
      bool hasRdOrder() const { return this->rdOrder_ != nullptr;};
      void deleteRdOrder() { this->rdOrder_ = nullptr;};
      inline int32_t getRdOrder() const { DARABONBA_PTR_GET_DEFAULT(rdOrder_, 0) };
      inline Data& setRdOrder(int32_t rdOrder) { DARABONBA_PTR_SET_VALUE(rdOrder_, rdOrder) };


      // sasInstanceId Field Functions 
      bool hasSasInstanceId() const { return this->sasInstanceId_ != nullptr;};
      void deleteSasInstanceId() { this->sasInstanceId_ = nullptr;};
      inline string getSasInstanceId() const { DARABONBA_PTR_GET_DEFAULT(sasInstanceId_, "") };
      inline Data& setSasInstanceId(string sasInstanceId) { DARABONBA_PTR_SET_VALUE(sasInstanceId_, sasInstanceId) };


      // subUserId Field Functions 
      bool hasSubUserId() const { return this->subUserId_ != nullptr;};
      void deleteSubUserId() { this->subUserId_ = nullptr;};
      inline int64_t getSubUserId() const { DARABONBA_PTR_GET_DEFAULT(subUserId_, 0L) };
      inline Data& setSubUserId(int64_t subUserId) { DARABONBA_PTR_SET_VALUE(subUserId_, subUserId) };


      // subUserName Field Functions 
      bool hasSubUserName() const { return this->subUserName_ != nullptr;};
      void deleteSubUserName() { this->subUserName_ = nullptr;};
      inline string getSubUserName() const { DARABONBA_PTR_GET_DEFAULT(subUserName_, "") };
      inline Data& setSubUserName(string subUserName) { DARABONBA_PTR_SET_VALUE(subUserName_, subUserName) };


    protected:
      // Indicates whether the logon Alibaba Cloud account can be used to place orders for the threat analysis feature, such as purchase, upgrade, and specifications change orders. Valid values:
      // 
      // *   true
      // *   false
      shared_ptr<bool> canBuy_ {};
      // The log storage capacity that is purchased for the threat analysis feature. Unit: GB.
      shared_ptr<int32_t> capacity_ {};
      // The number of days before the expiration time of the threat analysis feature.
      shared_ptr<int64_t> durationDays_ {};
      // The timestamp when the threat analysis feature expires. Unit: milliseconds.
      shared_ptr<int64_t> endTime_ {};
      // The ID of the Alibaba Cloud account that is used to purchase the threat analysis feature.
      shared_ptr<int64_t> mainUserId_ {};
      // The username of the Alibaba Cloud account that is used to purchase the threat analysis feature.
      shared_ptr<string> mainUserName_ {};
      // The ID of the management account of the resource directory.
      shared_ptr<int64_t> masterUserId_ {};
      // The display name of the management account of the resource directory.
      shared_ptr<string> masterUserName_ {};
      shared_ptr<int32_t> rdOrder_ {};
      // The instance ID of Security Center.
      shared_ptr<string> sasInstanceId_ {};
      // The ID of the logon Alibaba Cloud account.
      shared_ptr<int64_t> subUserId_ {};
      // The username of the logon Alibaba Cloud account.
      shared_ptr<string> subUserName_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeUserBuyStatusResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeUserBuyStatusResponseBody::Data) };
    inline DescribeUserBuyStatusResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeUserBuyStatusResponseBody::Data) };
    inline DescribeUserBuyStatusResponseBody& setData(const DescribeUserBuyStatusResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeUserBuyStatusResponseBody& setData(DescribeUserBuyStatusResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeUserBuyStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The data returned.
    shared_ptr<DescribeUserBuyStatusResponseBody::Data> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
