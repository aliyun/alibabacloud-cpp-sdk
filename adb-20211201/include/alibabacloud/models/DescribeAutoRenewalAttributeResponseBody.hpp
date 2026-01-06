// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAUTORENEWALATTRIBUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAUTORENEWALATTRIBUTERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeAutoRenewalAttributeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAutoRenewalAttributeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalRecordCount, totalRecordCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAutoRenewalAttributeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalRecordCount, totalRecordCount_);
    };
    DescribeAutoRenewalAttributeResponseBody() = default ;
    DescribeAutoRenewalAttributeResponseBody(const DescribeAutoRenewalAttributeResponseBody &) = default ;
    DescribeAutoRenewalAttributeResponseBody(DescribeAutoRenewalAttributeResponseBody &&) = default ;
    DescribeAutoRenewalAttributeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAutoRenewalAttributeResponseBody() = default ;
    DescribeAutoRenewalAttributeResponseBody& operator=(const DescribeAutoRenewalAttributeResponseBody &) = default ;
    DescribeAutoRenewalAttributeResponseBody& operator=(DescribeAutoRenewalAttributeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(AutoRenewalAttribute, autoRenewalAttribute_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(AutoRenewalAttribute, autoRenewalAttribute_);
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
      class AutoRenewalAttribute : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AutoRenewalAttribute& obj) { 
          DARABONBA_PTR_TO_JSON(AutoRenewalEnabled, autoRenewalEnabled_);
          DARABONBA_PTR_TO_JSON(AutoRenewalPeriod, autoRenewalPeriod_);
          DARABONBA_PTR_TO_JSON(AutoRenewalPeriodUnit, autoRenewalPeriodUnit_);
          DARABONBA_PTR_TO_JSON(AutoRenewalStatus, autoRenewalStatus_);
          DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        };
        friend void from_json(const Darabonba::Json& j, AutoRenewalAttribute& obj) { 
          DARABONBA_PTR_FROM_JSON(AutoRenewalEnabled, autoRenewalEnabled_);
          DARABONBA_PTR_FROM_JSON(AutoRenewalPeriod, autoRenewalPeriod_);
          DARABONBA_PTR_FROM_JSON(AutoRenewalPeriodUnit, autoRenewalPeriodUnit_);
          DARABONBA_PTR_FROM_JSON(AutoRenewalStatus, autoRenewalStatus_);
          DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        };
        AutoRenewalAttribute() = default ;
        AutoRenewalAttribute(const AutoRenewalAttribute &) = default ;
        AutoRenewalAttribute(AutoRenewalAttribute &&) = default ;
        AutoRenewalAttribute(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AutoRenewalAttribute() = default ;
        AutoRenewalAttribute& operator=(const AutoRenewalAttribute &) = default ;
        AutoRenewalAttribute& operator=(AutoRenewalAttribute &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->autoRenewalEnabled_ == nullptr
        && this->autoRenewalPeriod_ == nullptr && this->autoRenewalPeriodUnit_ == nullptr && this->autoRenewalStatus_ == nullptr && this->DBClusterId_ == nullptr && this->regionId_ == nullptr; };
        // autoRenewalEnabled Field Functions 
        bool hasAutoRenewalEnabled() const { return this->autoRenewalEnabled_ != nullptr;};
        void deleteAutoRenewalEnabled() { this->autoRenewalEnabled_ = nullptr;};
        inline bool getAutoRenewalEnabled() const { DARABONBA_PTR_GET_DEFAULT(autoRenewalEnabled_, false) };
        inline AutoRenewalAttribute& setAutoRenewalEnabled(bool autoRenewalEnabled) { DARABONBA_PTR_SET_VALUE(autoRenewalEnabled_, autoRenewalEnabled) };


        // autoRenewalPeriod Field Functions 
        bool hasAutoRenewalPeriod() const { return this->autoRenewalPeriod_ != nullptr;};
        void deleteAutoRenewalPeriod() { this->autoRenewalPeriod_ = nullptr;};
        inline int64_t getAutoRenewalPeriod() const { DARABONBA_PTR_GET_DEFAULT(autoRenewalPeriod_, 0L) };
        inline AutoRenewalAttribute& setAutoRenewalPeriod(int64_t autoRenewalPeriod) { DARABONBA_PTR_SET_VALUE(autoRenewalPeriod_, autoRenewalPeriod) };


        // autoRenewalPeriodUnit Field Functions 
        bool hasAutoRenewalPeriodUnit() const { return this->autoRenewalPeriodUnit_ != nullptr;};
        void deleteAutoRenewalPeriodUnit() { this->autoRenewalPeriodUnit_ = nullptr;};
        inline string getAutoRenewalPeriodUnit() const { DARABONBA_PTR_GET_DEFAULT(autoRenewalPeriodUnit_, "") };
        inline AutoRenewalAttribute& setAutoRenewalPeriodUnit(string autoRenewalPeriodUnit) { DARABONBA_PTR_SET_VALUE(autoRenewalPeriodUnit_, autoRenewalPeriodUnit) };


        // autoRenewalStatus Field Functions 
        bool hasAutoRenewalStatus() const { return this->autoRenewalStatus_ != nullptr;};
        void deleteAutoRenewalStatus() { this->autoRenewalStatus_ = nullptr;};
        inline string getAutoRenewalStatus() const { DARABONBA_PTR_GET_DEFAULT(autoRenewalStatus_, "") };
        inline AutoRenewalAttribute& setAutoRenewalStatus(string autoRenewalStatus) { DARABONBA_PTR_SET_VALUE(autoRenewalStatus_, autoRenewalStatus) };


        // DBClusterId Field Functions 
        bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
        void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
        inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
        inline AutoRenewalAttribute& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline AutoRenewalAttribute& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      protected:
        // Indicates whether auto-renewal is enabled for the cluster. Valid values:
        // 
        // *   **true**: Enables.
        // *   **false**: Disables.
        shared_ptr<bool> autoRenewalEnabled_ {};
        // The auto-renewal duration.
        shared_ptr<int64_t> autoRenewalPeriod_ {};
        // The unit of auto-renewal duration. Valid values:
        // 
        // *   **Year**
        // *   **Month**
        shared_ptr<string> autoRenewalPeriodUnit_ {};
        // The renewal method. Valid values:
        // 
        // *   **AutoRenewal**: The cluster is automatically renewed.
        // *   **Normal**: The cluster is manually renewed. Before the cluster expires, the system sends you a reminder by SMS message.
        // *   **NotRenewal**: The cluster is not renewed. Reminders are only sent three days before cluster expiration.
        shared_ptr<string> autoRenewalStatus_ {};
        // The cluster ID.
        shared_ptr<string> DBClusterId_ {};
        // The region ID.
        shared_ptr<string> regionId_ {};
      };

      virtual bool empty() const override { return this->autoRenewalAttribute_ == nullptr; };
      // autoRenewalAttribute Field Functions 
      bool hasAutoRenewalAttribute() const { return this->autoRenewalAttribute_ != nullptr;};
      void deleteAutoRenewalAttribute() { this->autoRenewalAttribute_ = nullptr;};
      inline const vector<Items::AutoRenewalAttribute> & getAutoRenewalAttribute() const { DARABONBA_PTR_GET_CONST(autoRenewalAttribute_, vector<Items::AutoRenewalAttribute>) };
      inline vector<Items::AutoRenewalAttribute> getAutoRenewalAttribute() { DARABONBA_PTR_GET(autoRenewalAttribute_, vector<Items::AutoRenewalAttribute>) };
      inline Items& setAutoRenewalAttribute(const vector<Items::AutoRenewalAttribute> & autoRenewalAttribute) { DARABONBA_PTR_SET_VALUE(autoRenewalAttribute_, autoRenewalAttribute) };
      inline Items& setAutoRenewalAttribute(vector<Items::AutoRenewalAttribute> && autoRenewalAttribute) { DARABONBA_PTR_SET_RVALUE(autoRenewalAttribute_, autoRenewalAttribute) };


    protected:
      shared_ptr<vector<Items::AutoRenewalAttribute>> autoRenewalAttribute_ {};
    };

    virtual bool empty() const override { return this->items_ == nullptr
        && this->pageNumber_ == nullptr && this->pageRecordCount_ == nullptr && this->requestId_ == nullptr && this->totalRecordCount_ == nullptr; };
    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const DescribeAutoRenewalAttributeResponseBody::Items & getItems() const { DARABONBA_PTR_GET_CONST(items_, DescribeAutoRenewalAttributeResponseBody::Items) };
    inline DescribeAutoRenewalAttributeResponseBody::Items getItems() { DARABONBA_PTR_GET(items_, DescribeAutoRenewalAttributeResponseBody::Items) };
    inline DescribeAutoRenewalAttributeResponseBody& setItems(const DescribeAutoRenewalAttributeResponseBody::Items & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeAutoRenewalAttributeResponseBody& setItems(DescribeAutoRenewalAttributeResponseBody::Items && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeAutoRenewalAttributeResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageRecordCount Field Functions 
    bool hasPageRecordCount() const { return this->pageRecordCount_ != nullptr;};
    void deletePageRecordCount() { this->pageRecordCount_ = nullptr;};
    inline int32_t getPageRecordCount() const { DARABONBA_PTR_GET_DEFAULT(pageRecordCount_, 0) };
    inline DescribeAutoRenewalAttributeResponseBody& setPageRecordCount(int32_t pageRecordCount) { DARABONBA_PTR_SET_VALUE(pageRecordCount_, pageRecordCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAutoRenewalAttributeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalRecordCount Field Functions 
    bool hasTotalRecordCount() const { return this->totalRecordCount_ != nullptr;};
    void deleteTotalRecordCount() { this->totalRecordCount_ = nullptr;};
    inline int32_t getTotalRecordCount() const { DARABONBA_PTR_GET_DEFAULT(totalRecordCount_, 0) };
    inline DescribeAutoRenewalAttributeResponseBody& setTotalRecordCount(int32_t totalRecordCount) { DARABONBA_PTR_SET_VALUE(totalRecordCount_, totalRecordCount) };


  protected:
    // The list of auto-renewal details.
    shared_ptr<DescribeAutoRenewalAttributeResponseBody::Items> items_ {};
    // The page number of the returned page.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned on each page.
    shared_ptr<int32_t> pageRecordCount_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalRecordCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
