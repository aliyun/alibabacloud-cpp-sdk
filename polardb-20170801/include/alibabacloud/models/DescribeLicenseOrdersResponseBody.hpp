// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELICENSEORDERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELICENSEORDERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeLicenseOrdersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLicenseOrdersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalRecordCount, totalRecordCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLicenseOrdersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalRecordCount, totalRecordCount_);
    };
    DescribeLicenseOrdersResponseBody() = default ;
    DescribeLicenseOrdersResponseBody(const DescribeLicenseOrdersResponseBody &) = default ;
    DescribeLicenseOrdersResponseBody(DescribeLicenseOrdersResponseBody &&) = default ;
    DescribeLicenseOrdersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLicenseOrdersResponseBody() = default ;
    DescribeLicenseOrdersResponseBody& operator=(const DescribeLicenseOrdersResponseBody &) = default ;
    DescribeLicenseOrdersResponseBody& operator=(DescribeLicenseOrdersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(ActivatedCodeCount, activatedCodeCount_);
        DARABONBA_PTR_TO_JSON(ActivationCodeQuota, activationCodeQuota_);
        DARABONBA_PTR_TO_JSON(AliyunOrderId, aliyunOrderId_);
        DARABONBA_PTR_TO_JSON(AllowEmptySystemIdentifier, allowEmptySystemIdentifier_);
        DARABONBA_PTR_TO_JSON(Engine, engine_);
        DARABONBA_PTR_TO_JSON(GmtCreated, gmtCreated_);
        DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(IsVirtualOrder, isVirtualOrder_);
        DARABONBA_PTR_TO_JSON(IsVirtualOrderFrozen, isVirtualOrderFrozen_);
        DARABONBA_PTR_TO_JSON(PackageType, packageType_);
        DARABONBA_PTR_TO_JSON(PackageValidity, packageValidity_);
        DARABONBA_PTR_TO_JSON(PurchaseChannel, purchaseChannel_);
        DARABONBA_PTR_TO_JSON(VirtualAliyunOrderId, virtualAliyunOrderId_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(ActivatedCodeCount, activatedCodeCount_);
        DARABONBA_PTR_FROM_JSON(ActivationCodeQuota, activationCodeQuota_);
        DARABONBA_PTR_FROM_JSON(AliyunOrderId, aliyunOrderId_);
        DARABONBA_PTR_FROM_JSON(AllowEmptySystemIdentifier, allowEmptySystemIdentifier_);
        DARABONBA_PTR_FROM_JSON(Engine, engine_);
        DARABONBA_PTR_FROM_JSON(GmtCreated, gmtCreated_);
        DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(IsVirtualOrder, isVirtualOrder_);
        DARABONBA_PTR_FROM_JSON(IsVirtualOrderFrozen, isVirtualOrderFrozen_);
        DARABONBA_PTR_FROM_JSON(PackageType, packageType_);
        DARABONBA_PTR_FROM_JSON(PackageValidity, packageValidity_);
        DARABONBA_PTR_FROM_JSON(PurchaseChannel, purchaseChannel_);
        DARABONBA_PTR_FROM_JSON(VirtualAliyunOrderId, virtualAliyunOrderId_);
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
      virtual bool empty() const override { return this->activatedCodeCount_ == nullptr
        && this->activationCodeQuota_ == nullptr && this->aliyunOrderId_ == nullptr && this->allowEmptySystemIdentifier_ == nullptr && this->engine_ == nullptr && this->gmtCreated_ == nullptr
        && this->gmtModified_ == nullptr && this->isVirtualOrder_ == nullptr && this->isVirtualOrderFrozen_ == nullptr && this->packageType_ == nullptr && this->packageValidity_ == nullptr
        && this->purchaseChannel_ == nullptr && this->virtualAliyunOrderId_ == nullptr; };
      // activatedCodeCount Field Functions 
      bool hasActivatedCodeCount() const { return this->activatedCodeCount_ != nullptr;};
      void deleteActivatedCodeCount() { this->activatedCodeCount_ = nullptr;};
      inline int32_t getActivatedCodeCount() const { DARABONBA_PTR_GET_DEFAULT(activatedCodeCount_, 0) };
      inline Items& setActivatedCodeCount(int32_t activatedCodeCount) { DARABONBA_PTR_SET_VALUE(activatedCodeCount_, activatedCodeCount) };


      // activationCodeQuota Field Functions 
      bool hasActivationCodeQuota() const { return this->activationCodeQuota_ != nullptr;};
      void deleteActivationCodeQuota() { this->activationCodeQuota_ = nullptr;};
      inline int32_t getActivationCodeQuota() const { DARABONBA_PTR_GET_DEFAULT(activationCodeQuota_, 0) };
      inline Items& setActivationCodeQuota(int32_t activationCodeQuota) { DARABONBA_PTR_SET_VALUE(activationCodeQuota_, activationCodeQuota) };


      // aliyunOrderId Field Functions 
      bool hasAliyunOrderId() const { return this->aliyunOrderId_ != nullptr;};
      void deleteAliyunOrderId() { this->aliyunOrderId_ = nullptr;};
      inline string getAliyunOrderId() const { DARABONBA_PTR_GET_DEFAULT(aliyunOrderId_, "") };
      inline Items& setAliyunOrderId(string aliyunOrderId) { DARABONBA_PTR_SET_VALUE(aliyunOrderId_, aliyunOrderId) };


      // allowEmptySystemIdentifier Field Functions 
      bool hasAllowEmptySystemIdentifier() const { return this->allowEmptySystemIdentifier_ != nullptr;};
      void deleteAllowEmptySystemIdentifier() { this->allowEmptySystemIdentifier_ = nullptr;};
      inline bool getAllowEmptySystemIdentifier() const { DARABONBA_PTR_GET_DEFAULT(allowEmptySystemIdentifier_, false) };
      inline Items& setAllowEmptySystemIdentifier(bool allowEmptySystemIdentifier) { DARABONBA_PTR_SET_VALUE(allowEmptySystemIdentifier_, allowEmptySystemIdentifier) };


      // engine Field Functions 
      bool hasEngine() const { return this->engine_ != nullptr;};
      void deleteEngine() { this->engine_ = nullptr;};
      inline string getEngine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
      inline Items& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


      // gmtCreated Field Functions 
      bool hasGmtCreated() const { return this->gmtCreated_ != nullptr;};
      void deleteGmtCreated() { this->gmtCreated_ = nullptr;};
      inline string getGmtCreated() const { DARABONBA_PTR_GET_DEFAULT(gmtCreated_, "") };
      inline Items& setGmtCreated(string gmtCreated) { DARABONBA_PTR_SET_VALUE(gmtCreated_, gmtCreated) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
      inline Items& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // isVirtualOrder Field Functions 
      bool hasIsVirtualOrder() const { return this->isVirtualOrder_ != nullptr;};
      void deleteIsVirtualOrder() { this->isVirtualOrder_ = nullptr;};
      inline bool getIsVirtualOrder() const { DARABONBA_PTR_GET_DEFAULT(isVirtualOrder_, false) };
      inline Items& setIsVirtualOrder(bool isVirtualOrder) { DARABONBA_PTR_SET_VALUE(isVirtualOrder_, isVirtualOrder) };


      // isVirtualOrderFrozen Field Functions 
      bool hasIsVirtualOrderFrozen() const { return this->isVirtualOrderFrozen_ != nullptr;};
      void deleteIsVirtualOrderFrozen() { this->isVirtualOrderFrozen_ = nullptr;};
      inline bool getIsVirtualOrderFrozen() const { DARABONBA_PTR_GET_DEFAULT(isVirtualOrderFrozen_, false) };
      inline Items& setIsVirtualOrderFrozen(bool isVirtualOrderFrozen) { DARABONBA_PTR_SET_VALUE(isVirtualOrderFrozen_, isVirtualOrderFrozen) };


      // packageType Field Functions 
      bool hasPackageType() const { return this->packageType_ != nullptr;};
      void deletePackageType() { this->packageType_ = nullptr;};
      inline string getPackageType() const { DARABONBA_PTR_GET_DEFAULT(packageType_, "") };
      inline Items& setPackageType(string packageType) { DARABONBA_PTR_SET_VALUE(packageType_, packageType) };


      // packageValidity Field Functions 
      bool hasPackageValidity() const { return this->packageValidity_ != nullptr;};
      void deletePackageValidity() { this->packageValidity_ = nullptr;};
      inline string getPackageValidity() const { DARABONBA_PTR_GET_DEFAULT(packageValidity_, "") };
      inline Items& setPackageValidity(string packageValidity) { DARABONBA_PTR_SET_VALUE(packageValidity_, packageValidity) };


      // purchaseChannel Field Functions 
      bool hasPurchaseChannel() const { return this->purchaseChannel_ != nullptr;};
      void deletePurchaseChannel() { this->purchaseChannel_ = nullptr;};
      inline string getPurchaseChannel() const { DARABONBA_PTR_GET_DEFAULT(purchaseChannel_, "") };
      inline Items& setPurchaseChannel(string purchaseChannel) { DARABONBA_PTR_SET_VALUE(purchaseChannel_, purchaseChannel) };


      // virtualAliyunOrderId Field Functions 
      bool hasVirtualAliyunOrderId() const { return this->virtualAliyunOrderId_ != nullptr;};
      void deleteVirtualAliyunOrderId() { this->virtualAliyunOrderId_ = nullptr;};
      inline string getVirtualAliyunOrderId() const { DARABONBA_PTR_GET_DEFAULT(virtualAliyunOrderId_, "") };
      inline Items& setVirtualAliyunOrderId(string virtualAliyunOrderId) { DARABONBA_PTR_SET_VALUE(virtualAliyunOrderId_, virtualAliyunOrderId) };


    protected:
      // The number of generated activation codes.
      shared_ptr<int32_t> activatedCodeCount_ {};
      // The maximum number of activation codes that you can apply for.
      shared_ptr<int32_t> activationCodeQuota_ {};
      // The ID of the Alibaba Cloud order. The ID of a virtual order may be returned.
      shared_ptr<string> aliyunOrderId_ {};
      // Indicates whether the SystemIdentifier parameter can be left empty when the system generates an activation code.
      shared_ptr<bool> allowEmptySystemIdentifier_ {};
      // The engine of the PolarDB cluster. Valid values: PG, Oracle, and MySQL.
      shared_ptr<string> engine_ {};
      // The time when the order was created.
      shared_ptr<string> gmtCreated_ {};
      // The time when the order was updated.
      shared_ptr<string> gmtModified_ {};
      // Indicates whether the order is a virtual order. Pre-generation of activation codes is allowed for virtual orders.
      shared_ptr<bool> isVirtualOrder_ {};
      // Indicates whether the virtual order is frozen. Generation of activation codes is not allowed for frozen virtual orders.
      shared_ptr<bool> isVirtualOrderFrozen_ {};
      // The type of the package. Valid values:
      // 
      // *   single_node_subscribe: Single-node Edition (Subscription).
      // *   single_node_long_term: Single-node Edition (Long-term).
      // *   primary_backup_subscribe: HA Edition (Subscription).
      // *   primary_backup_long_term: HA Edition (Long-term).
      // *   pre_generation_long_term: Pre-generated (Long-term).
      shared_ptr<string> packageType_ {};
      // The validity period of the package. Valid values: 1 year and 30 years.
      shared_ptr<string> packageValidity_ {};
      // The purchase channel. Valid values: aliyun_market and aliyun_public. aliyun_market indicates Alibaba Cloud Marketplace. aliyun_public indicates the PolarDB buy page.
      shared_ptr<string> purchaseChannel_ {};
      // The ID of the virtual order.
      shared_ptr<string> virtualAliyunOrderId_ {};
    };

    virtual bool empty() const override { return this->items_ == nullptr
        && this->pageNumber_ == nullptr && this->pageRecordCount_ == nullptr && this->requestId_ == nullptr && this->totalRecordCount_ == nullptr; };
    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<DescribeLicenseOrdersResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<DescribeLicenseOrdersResponseBody::Items>) };
    inline vector<DescribeLicenseOrdersResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<DescribeLicenseOrdersResponseBody::Items>) };
    inline DescribeLicenseOrdersResponseBody& setItems(const vector<DescribeLicenseOrdersResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeLicenseOrdersResponseBody& setItems(vector<DescribeLicenseOrdersResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeLicenseOrdersResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageRecordCount Field Functions 
    bool hasPageRecordCount() const { return this->pageRecordCount_ != nullptr;};
    void deletePageRecordCount() { this->pageRecordCount_ = nullptr;};
    inline int32_t getPageRecordCount() const { DARABONBA_PTR_GET_DEFAULT(pageRecordCount_, 0) };
    inline DescribeLicenseOrdersResponseBody& setPageRecordCount(int32_t pageRecordCount) { DARABONBA_PTR_SET_VALUE(pageRecordCount_, pageRecordCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLicenseOrdersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalRecordCount Field Functions 
    bool hasTotalRecordCount() const { return this->totalRecordCount_ != nullptr;};
    void deleteTotalRecordCount() { this->totalRecordCount_ = nullptr;};
    inline int32_t getTotalRecordCount() const { DARABONBA_PTR_GET_DEFAULT(totalRecordCount_, 0) };
    inline DescribeLicenseOrdersResponseBody& setTotalRecordCount(int32_t totalRecordCount) { DARABONBA_PTR_SET_VALUE(totalRecordCount_, totalRecordCount) };


  protected:
    // The queried orders.
    shared_ptr<vector<DescribeLicenseOrdersResponseBody::Items>> items_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned on the current page.
    shared_ptr<int32_t> pageRecordCount_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalRecordCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
