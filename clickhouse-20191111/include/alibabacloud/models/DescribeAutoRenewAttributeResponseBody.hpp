// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAUTORENEWATTRIBUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAUTORENEWATTRIBUTERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20191111
{
namespace Models
{
  class DescribeAutoRenewAttributeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAutoRenewAttributeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalRecordCount, totalRecordCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAutoRenewAttributeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalRecordCount, totalRecordCount_);
    };
    DescribeAutoRenewAttributeResponseBody() = default ;
    DescribeAutoRenewAttributeResponseBody(const DescribeAutoRenewAttributeResponseBody &) = default ;
    DescribeAutoRenewAttributeResponseBody(DescribeAutoRenewAttributeResponseBody &&) = default ;
    DescribeAutoRenewAttributeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAutoRenewAttributeResponseBody() = default ;
    DescribeAutoRenewAttributeResponseBody& operator=(const DescribeAutoRenewAttributeResponseBody &) = default ;
    DescribeAutoRenewAttributeResponseBody& operator=(DescribeAutoRenewAttributeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(AutoRenewAttribute, autoRenewAttribute_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(AutoRenewAttribute, autoRenewAttribute_);
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
      class AutoRenewAttribute : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AutoRenewAttribute& obj) { 
          DARABONBA_PTR_TO_JSON(AutoRenewEnabled, autoRenewEnabled_);
          DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
          DARABONBA_PTR_TO_JSON(Duration, duration_);
          DARABONBA_PTR_TO_JSON(PeriodUnit, periodUnit_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(RenewalStatus, renewalStatus_);
        };
        friend void from_json(const Darabonba::Json& j, AutoRenewAttribute& obj) { 
          DARABONBA_PTR_FROM_JSON(AutoRenewEnabled, autoRenewEnabled_);
          DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
          DARABONBA_PTR_FROM_JSON(Duration, duration_);
          DARABONBA_PTR_FROM_JSON(PeriodUnit, periodUnit_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(RenewalStatus, renewalStatus_);
        };
        AutoRenewAttribute() = default ;
        AutoRenewAttribute(const AutoRenewAttribute &) = default ;
        AutoRenewAttribute(AutoRenewAttribute &&) = default ;
        AutoRenewAttribute(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AutoRenewAttribute() = default ;
        AutoRenewAttribute& operator=(const AutoRenewAttribute &) = default ;
        AutoRenewAttribute& operator=(AutoRenewAttribute &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->autoRenewEnabled_ == nullptr
        && this->DBClusterId_ == nullptr && this->duration_ == nullptr && this->periodUnit_ == nullptr && this->regionId_ == nullptr && this->renewalStatus_ == nullptr; };
        // autoRenewEnabled Field Functions 
        bool hasAutoRenewEnabled() const { return this->autoRenewEnabled_ != nullptr;};
        void deleteAutoRenewEnabled() { this->autoRenewEnabled_ = nullptr;};
        inline bool getAutoRenewEnabled() const { DARABONBA_PTR_GET_DEFAULT(autoRenewEnabled_, false) };
        inline AutoRenewAttribute& setAutoRenewEnabled(bool autoRenewEnabled) { DARABONBA_PTR_SET_VALUE(autoRenewEnabled_, autoRenewEnabled) };


        // DBClusterId Field Functions 
        bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
        void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
        inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
        inline AutoRenewAttribute& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


        // duration Field Functions 
        bool hasDuration() const { return this->duration_ != nullptr;};
        void deleteDuration() { this->duration_ = nullptr;};
        inline int32_t getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0) };
        inline AutoRenewAttribute& setDuration(int32_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


        // periodUnit Field Functions 
        bool hasPeriodUnit() const { return this->periodUnit_ != nullptr;};
        void deletePeriodUnit() { this->periodUnit_ = nullptr;};
        inline string getPeriodUnit() const { DARABONBA_PTR_GET_DEFAULT(periodUnit_, "") };
        inline AutoRenewAttribute& setPeriodUnit(string periodUnit) { DARABONBA_PTR_SET_VALUE(periodUnit_, periodUnit) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline AutoRenewAttribute& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // renewalStatus Field Functions 
        bool hasRenewalStatus() const { return this->renewalStatus_ != nullptr;};
        void deleteRenewalStatus() { this->renewalStatus_ = nullptr;};
        inline string getRenewalStatus() const { DARABONBA_PTR_GET_DEFAULT(renewalStatus_, "") };
        inline AutoRenewAttribute& setRenewalStatus(string renewalStatus) { DARABONBA_PTR_SET_VALUE(renewalStatus_, renewalStatus) };


      protected:
        shared_ptr<bool> autoRenewEnabled_ {};
        shared_ptr<string> DBClusterId_ {};
        shared_ptr<int32_t> duration_ {};
        shared_ptr<string> periodUnit_ {};
        shared_ptr<string> regionId_ {};
        shared_ptr<string> renewalStatus_ {};
      };

      virtual bool empty() const override { return this->autoRenewAttribute_ == nullptr; };
      // autoRenewAttribute Field Functions 
      bool hasAutoRenewAttribute() const { return this->autoRenewAttribute_ != nullptr;};
      void deleteAutoRenewAttribute() { this->autoRenewAttribute_ = nullptr;};
      inline const vector<Items::AutoRenewAttribute> & getAutoRenewAttribute() const { DARABONBA_PTR_GET_CONST(autoRenewAttribute_, vector<Items::AutoRenewAttribute>) };
      inline vector<Items::AutoRenewAttribute> getAutoRenewAttribute() { DARABONBA_PTR_GET(autoRenewAttribute_, vector<Items::AutoRenewAttribute>) };
      inline Items& setAutoRenewAttribute(const vector<Items::AutoRenewAttribute> & autoRenewAttribute) { DARABONBA_PTR_SET_VALUE(autoRenewAttribute_, autoRenewAttribute) };
      inline Items& setAutoRenewAttribute(vector<Items::AutoRenewAttribute> && autoRenewAttribute) { DARABONBA_PTR_SET_RVALUE(autoRenewAttribute_, autoRenewAttribute) };


    protected:
      shared_ptr<vector<Items::AutoRenewAttribute>> autoRenewAttribute_ {};
    };

    virtual bool empty() const override { return this->items_ == nullptr
        && this->pageNumber_ == nullptr && this->pageRecordCount_ == nullptr && this->requestId_ == nullptr && this->totalRecordCount_ == nullptr; };
    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const DescribeAutoRenewAttributeResponseBody::Items & getItems() const { DARABONBA_PTR_GET_CONST(items_, DescribeAutoRenewAttributeResponseBody::Items) };
    inline DescribeAutoRenewAttributeResponseBody::Items getItems() { DARABONBA_PTR_GET(items_, DescribeAutoRenewAttributeResponseBody::Items) };
    inline DescribeAutoRenewAttributeResponseBody& setItems(const DescribeAutoRenewAttributeResponseBody::Items & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeAutoRenewAttributeResponseBody& setItems(DescribeAutoRenewAttributeResponseBody::Items && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeAutoRenewAttributeResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageRecordCount Field Functions 
    bool hasPageRecordCount() const { return this->pageRecordCount_ != nullptr;};
    void deletePageRecordCount() { this->pageRecordCount_ = nullptr;};
    inline int32_t getPageRecordCount() const { DARABONBA_PTR_GET_DEFAULT(pageRecordCount_, 0) };
    inline DescribeAutoRenewAttributeResponseBody& setPageRecordCount(int32_t pageRecordCount) { DARABONBA_PTR_SET_VALUE(pageRecordCount_, pageRecordCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAutoRenewAttributeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalRecordCount Field Functions 
    bool hasTotalRecordCount() const { return this->totalRecordCount_ != nullptr;};
    void deleteTotalRecordCount() { this->totalRecordCount_ = nullptr;};
    inline int32_t getTotalRecordCount() const { DARABONBA_PTR_GET_DEFAULT(totalRecordCount_, 0) };
    inline DescribeAutoRenewAttributeResponseBody& setTotalRecordCount(int32_t totalRecordCount) { DARABONBA_PTR_SET_VALUE(totalRecordCount_, totalRecordCount) };


  protected:
    shared_ptr<DescribeAutoRenewAttributeResponseBody::Items> items_ {};
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageRecordCount_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalRecordCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20191111
#endif
