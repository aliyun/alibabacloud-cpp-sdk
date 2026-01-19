// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPURCHASEDAPIGROUPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPURCHASEDAPIGROUPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribePurchasedApiGroupsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePurchasedApiGroupsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PurchasedApiGroupAttributes, purchasedApiGroupAttributes_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePurchasedApiGroupsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PurchasedApiGroupAttributes, purchasedApiGroupAttributes_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribePurchasedApiGroupsResponseBody() = default ;
    DescribePurchasedApiGroupsResponseBody(const DescribePurchasedApiGroupsResponseBody &) = default ;
    DescribePurchasedApiGroupsResponseBody(DescribePurchasedApiGroupsResponseBody &&) = default ;
    DescribePurchasedApiGroupsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePurchasedApiGroupsResponseBody() = default ;
    DescribePurchasedApiGroupsResponseBody& operator=(const DescribePurchasedApiGroupsResponseBody &) = default ;
    DescribePurchasedApiGroupsResponseBody& operator=(DescribePurchasedApiGroupsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PurchasedApiGroupAttributes : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PurchasedApiGroupAttributes& obj) { 
        DARABONBA_PTR_TO_JSON(PurchasedApiGroupAttribute, purchasedApiGroupAttribute_);
      };
      friend void from_json(const Darabonba::Json& j, PurchasedApiGroupAttributes& obj) { 
        DARABONBA_PTR_FROM_JSON(PurchasedApiGroupAttribute, purchasedApiGroupAttribute_);
      };
      PurchasedApiGroupAttributes() = default ;
      PurchasedApiGroupAttributes(const PurchasedApiGroupAttributes &) = default ;
      PurchasedApiGroupAttributes(PurchasedApiGroupAttributes &&) = default ;
      PurchasedApiGroupAttributes(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PurchasedApiGroupAttributes() = default ;
      PurchasedApiGroupAttributes& operator=(const PurchasedApiGroupAttributes &) = default ;
      PurchasedApiGroupAttributes& operator=(PurchasedApiGroupAttributes &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class PurchasedApiGroupAttribute : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PurchasedApiGroupAttribute& obj) { 
          DARABONBA_PTR_TO_JSON(BillingType, billingType_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
          DARABONBA_PTR_TO_JSON(GroupId, groupId_);
          DARABONBA_PTR_TO_JSON(GroupName, groupName_);
          DARABONBA_PTR_TO_JSON(InvokeTimesMax, invokeTimesMax_);
          DARABONBA_PTR_TO_JSON(InvokeTimesNow, invokeTimesNow_);
          DARABONBA_PTR_TO_JSON(PurchasedTime, purchasedTime_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, PurchasedApiGroupAttribute& obj) { 
          DARABONBA_PTR_FROM_JSON(BillingType, billingType_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
          DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
          DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
          DARABONBA_PTR_FROM_JSON(InvokeTimesMax, invokeTimesMax_);
          DARABONBA_PTR_FROM_JSON(InvokeTimesNow, invokeTimesNow_);
          DARABONBA_PTR_FROM_JSON(PurchasedTime, purchasedTime_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        PurchasedApiGroupAttribute() = default ;
        PurchasedApiGroupAttribute(const PurchasedApiGroupAttribute &) = default ;
        PurchasedApiGroupAttribute(PurchasedApiGroupAttribute &&) = default ;
        PurchasedApiGroupAttribute(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PurchasedApiGroupAttribute() = default ;
        PurchasedApiGroupAttribute& operator=(const PurchasedApiGroupAttribute &) = default ;
        PurchasedApiGroupAttribute& operator=(PurchasedApiGroupAttribute &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->billingType_ == nullptr
        && this->description_ == nullptr && this->expireTime_ == nullptr && this->groupId_ == nullptr && this->groupName_ == nullptr && this->invokeTimesMax_ == nullptr
        && this->invokeTimesNow_ == nullptr && this->purchasedTime_ == nullptr && this->regionId_ == nullptr && this->status_ == nullptr; };
        // billingType Field Functions 
        bool hasBillingType() const { return this->billingType_ != nullptr;};
        void deleteBillingType() { this->billingType_ = nullptr;};
        inline string getBillingType() const { DARABONBA_PTR_GET_DEFAULT(billingType_, "") };
        inline PurchasedApiGroupAttribute& setBillingType(string billingType) { DARABONBA_PTR_SET_VALUE(billingType_, billingType) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline PurchasedApiGroupAttribute& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // expireTime Field Functions 
        bool hasExpireTime() const { return this->expireTime_ != nullptr;};
        void deleteExpireTime() { this->expireTime_ = nullptr;};
        inline string getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
        inline PurchasedApiGroupAttribute& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


        // groupId Field Functions 
        bool hasGroupId() const { return this->groupId_ != nullptr;};
        void deleteGroupId() { this->groupId_ = nullptr;};
        inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
        inline PurchasedApiGroupAttribute& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


        // groupName Field Functions 
        bool hasGroupName() const { return this->groupName_ != nullptr;};
        void deleteGroupName() { this->groupName_ = nullptr;};
        inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
        inline PurchasedApiGroupAttribute& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


        // invokeTimesMax Field Functions 
        bool hasInvokeTimesMax() const { return this->invokeTimesMax_ != nullptr;};
        void deleteInvokeTimesMax() { this->invokeTimesMax_ = nullptr;};
        inline int64_t getInvokeTimesMax() const { DARABONBA_PTR_GET_DEFAULT(invokeTimesMax_, 0L) };
        inline PurchasedApiGroupAttribute& setInvokeTimesMax(int64_t invokeTimesMax) { DARABONBA_PTR_SET_VALUE(invokeTimesMax_, invokeTimesMax) };


        // invokeTimesNow Field Functions 
        bool hasInvokeTimesNow() const { return this->invokeTimesNow_ != nullptr;};
        void deleteInvokeTimesNow() { this->invokeTimesNow_ = nullptr;};
        inline int64_t getInvokeTimesNow() const { DARABONBA_PTR_GET_DEFAULT(invokeTimesNow_, 0L) };
        inline PurchasedApiGroupAttribute& setInvokeTimesNow(int64_t invokeTimesNow) { DARABONBA_PTR_SET_VALUE(invokeTimesNow_, invokeTimesNow) };


        // purchasedTime Field Functions 
        bool hasPurchasedTime() const { return this->purchasedTime_ != nullptr;};
        void deletePurchasedTime() { this->purchasedTime_ = nullptr;};
        inline string getPurchasedTime() const { DARABONBA_PTR_GET_DEFAULT(purchasedTime_, "") };
        inline PurchasedApiGroupAttribute& setPurchasedTime(string purchasedTime) { DARABONBA_PTR_SET_VALUE(purchasedTime_, purchasedTime) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline PurchasedApiGroupAttribute& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline PurchasedApiGroupAttribute& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        // The billing method.
        shared_ptr<string> billingType_ {};
        // The description of the API group.
        shared_ptr<string> description_ {};
        // The time when the API group expires.
        shared_ptr<string> expireTime_ {};
        // The ID of the API group.
        shared_ptr<string> groupId_ {};
        // The name of the API group.
        shared_ptr<string> groupName_ {};
        // The maximum number of calls.
        shared_ptr<int64_t> invokeTimesMax_ {};
        // The current number of calls.
        shared_ptr<int64_t> invokeTimesNow_ {};
        // The time when the API group was purchased.
        shared_ptr<string> purchasedTime_ {};
        // The ID of the region where the API group is located.
        shared_ptr<string> regionId_ {};
        // The status of the API group.
        // 
        // *   **NORMAL**: The API group is normal.
        // *   **DELETE**: The API group is deleted.
        shared_ptr<string> status_ {};
      };

      virtual bool empty() const override { return this->purchasedApiGroupAttribute_ == nullptr; };
      // purchasedApiGroupAttribute Field Functions 
      bool hasPurchasedApiGroupAttribute() const { return this->purchasedApiGroupAttribute_ != nullptr;};
      void deletePurchasedApiGroupAttribute() { this->purchasedApiGroupAttribute_ = nullptr;};
      inline const vector<PurchasedApiGroupAttributes::PurchasedApiGroupAttribute> & getPurchasedApiGroupAttribute() const { DARABONBA_PTR_GET_CONST(purchasedApiGroupAttribute_, vector<PurchasedApiGroupAttributes::PurchasedApiGroupAttribute>) };
      inline vector<PurchasedApiGroupAttributes::PurchasedApiGroupAttribute> getPurchasedApiGroupAttribute() { DARABONBA_PTR_GET(purchasedApiGroupAttribute_, vector<PurchasedApiGroupAttributes::PurchasedApiGroupAttribute>) };
      inline PurchasedApiGroupAttributes& setPurchasedApiGroupAttribute(const vector<PurchasedApiGroupAttributes::PurchasedApiGroupAttribute> & purchasedApiGroupAttribute) { DARABONBA_PTR_SET_VALUE(purchasedApiGroupAttribute_, purchasedApiGroupAttribute) };
      inline PurchasedApiGroupAttributes& setPurchasedApiGroupAttribute(vector<PurchasedApiGroupAttributes::PurchasedApiGroupAttribute> && purchasedApiGroupAttribute) { DARABONBA_PTR_SET_RVALUE(purchasedApiGroupAttribute_, purchasedApiGroupAttribute) };


    protected:
      shared_ptr<vector<PurchasedApiGroupAttributes::PurchasedApiGroupAttribute>> purchasedApiGroupAttribute_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->purchasedApiGroupAttributes_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribePurchasedApiGroupsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribePurchasedApiGroupsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // purchasedApiGroupAttributes Field Functions 
    bool hasPurchasedApiGroupAttributes() const { return this->purchasedApiGroupAttributes_ != nullptr;};
    void deletePurchasedApiGroupAttributes() { this->purchasedApiGroupAttributes_ = nullptr;};
    inline const DescribePurchasedApiGroupsResponseBody::PurchasedApiGroupAttributes & getPurchasedApiGroupAttributes() const { DARABONBA_PTR_GET_CONST(purchasedApiGroupAttributes_, DescribePurchasedApiGroupsResponseBody::PurchasedApiGroupAttributes) };
    inline DescribePurchasedApiGroupsResponseBody::PurchasedApiGroupAttributes getPurchasedApiGroupAttributes() { DARABONBA_PTR_GET(purchasedApiGroupAttributes_, DescribePurchasedApiGroupsResponseBody::PurchasedApiGroupAttributes) };
    inline DescribePurchasedApiGroupsResponseBody& setPurchasedApiGroupAttributes(const DescribePurchasedApiGroupsResponseBody::PurchasedApiGroupAttributes & purchasedApiGroupAttributes) { DARABONBA_PTR_SET_VALUE(purchasedApiGroupAttributes_, purchasedApiGroupAttributes) };
    inline DescribePurchasedApiGroupsResponseBody& setPurchasedApiGroupAttributes(DescribePurchasedApiGroupsResponseBody::PurchasedApiGroupAttributes && purchasedApiGroupAttributes) { DARABONBA_PTR_SET_RVALUE(purchasedApiGroupAttributes_, purchasedApiGroupAttributes) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePurchasedApiGroupsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribePurchasedApiGroupsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The page number of the returned page.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned on each page.
    shared_ptr<int32_t> pageSize_ {};
    // The attributes of the API group.
    shared_ptr<DescribePurchasedApiGroupsResponseBody::PurchasedApiGroupAttributes> purchasedApiGroupAttributes_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
