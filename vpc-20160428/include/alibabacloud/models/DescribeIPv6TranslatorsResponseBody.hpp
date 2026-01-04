// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIPV6TRANSLATORSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIPV6TRANSLATORSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeIPv6TranslatorsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeIPv6TranslatorsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Ipv6Translators, ipv6Translators_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeIPv6TranslatorsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Ipv6Translators, ipv6Translators_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeIPv6TranslatorsResponseBody() = default ;
    DescribeIPv6TranslatorsResponseBody(const DescribeIPv6TranslatorsResponseBody &) = default ;
    DescribeIPv6TranslatorsResponseBody(DescribeIPv6TranslatorsResponseBody &&) = default ;
    DescribeIPv6TranslatorsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeIPv6TranslatorsResponseBody() = default ;
    DescribeIPv6TranslatorsResponseBody& operator=(const DescribeIPv6TranslatorsResponseBody &) = default ;
    DescribeIPv6TranslatorsResponseBody& operator=(DescribeIPv6TranslatorsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Ipv6Translators : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Ipv6Translators& obj) { 
        DARABONBA_PTR_TO_JSON(Ipv6Translator, ipv6Translator_);
      };
      friend void from_json(const Darabonba::Json& j, Ipv6Translators& obj) { 
        DARABONBA_PTR_FROM_JSON(Ipv6Translator, ipv6Translator_);
      };
      Ipv6Translators() = default ;
      Ipv6Translators(const Ipv6Translators &) = default ;
      Ipv6Translators(Ipv6Translators &&) = default ;
      Ipv6Translators(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Ipv6Translators() = default ;
      Ipv6Translators& operator=(const Ipv6Translators &) = default ;
      Ipv6Translators& operator=(Ipv6Translators &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Ipv6Translator : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Ipv6Translator& obj) { 
          DARABONBA_PTR_TO_JSON(AllocateIpv4Addr, allocateIpv4Addr_);
          DARABONBA_PTR_TO_JSON(AllocateIpv6Addr, allocateIpv6Addr_);
          DARABONBA_PTR_TO_JSON(AvailableBandwidth, availableBandwidth_);
          DARABONBA_PTR_TO_JSON(Bandwidth, bandwidth_);
          DARABONBA_PTR_TO_JSON(BusinessStatus, businessStatus_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(EndTime, endTime_);
          DARABONBA_PTR_TO_JSON(Ipv6TranslatorEntryIds, ipv6TranslatorEntryIds_);
          DARABONBA_PTR_TO_JSON(Ipv6TranslatorId, ipv6TranslatorId_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(PayType, payType_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(Spec, spec_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, Ipv6Translator& obj) { 
          DARABONBA_PTR_FROM_JSON(AllocateIpv4Addr, allocateIpv4Addr_);
          DARABONBA_PTR_FROM_JSON(AllocateIpv6Addr, allocateIpv6Addr_);
          DARABONBA_PTR_FROM_JSON(AvailableBandwidth, availableBandwidth_);
          DARABONBA_PTR_FROM_JSON(Bandwidth, bandwidth_);
          DARABONBA_PTR_FROM_JSON(BusinessStatus, businessStatus_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
          DARABONBA_PTR_FROM_JSON(Ipv6TranslatorEntryIds, ipv6TranslatorEntryIds_);
          DARABONBA_PTR_FROM_JSON(Ipv6TranslatorId, ipv6TranslatorId_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(PayType, payType_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(Spec, spec_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        Ipv6Translator() = default ;
        Ipv6Translator(const Ipv6Translator &) = default ;
        Ipv6Translator(Ipv6Translator &&) = default ;
        Ipv6Translator(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Ipv6Translator() = default ;
        Ipv6Translator& operator=(const Ipv6Translator &) = default ;
        Ipv6Translator& operator=(Ipv6Translator &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Ipv6TranslatorEntryIds : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Ipv6TranslatorEntryIds& obj) { 
            DARABONBA_PTR_TO_JSON(Ipv6TranslatorEntryId, ipv6TranslatorEntryId_);
          };
          friend void from_json(const Darabonba::Json& j, Ipv6TranslatorEntryIds& obj) { 
            DARABONBA_PTR_FROM_JSON(Ipv6TranslatorEntryId, ipv6TranslatorEntryId_);
          };
          Ipv6TranslatorEntryIds() = default ;
          Ipv6TranslatorEntryIds(const Ipv6TranslatorEntryIds &) = default ;
          Ipv6TranslatorEntryIds(Ipv6TranslatorEntryIds &&) = default ;
          Ipv6TranslatorEntryIds(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Ipv6TranslatorEntryIds() = default ;
          Ipv6TranslatorEntryIds& operator=(const Ipv6TranslatorEntryIds &) = default ;
          Ipv6TranslatorEntryIds& operator=(Ipv6TranslatorEntryIds &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->ipv6TranslatorEntryId_ == nullptr; };
          // ipv6TranslatorEntryId Field Functions 
          bool hasIpv6TranslatorEntryId() const { return this->ipv6TranslatorEntryId_ != nullptr;};
          void deleteIpv6TranslatorEntryId() { this->ipv6TranslatorEntryId_ = nullptr;};
          inline const vector<string> & getIpv6TranslatorEntryId() const { DARABONBA_PTR_GET_CONST(ipv6TranslatorEntryId_, vector<string>) };
          inline vector<string> getIpv6TranslatorEntryId() { DARABONBA_PTR_GET(ipv6TranslatorEntryId_, vector<string>) };
          inline Ipv6TranslatorEntryIds& setIpv6TranslatorEntryId(const vector<string> & ipv6TranslatorEntryId) { DARABONBA_PTR_SET_VALUE(ipv6TranslatorEntryId_, ipv6TranslatorEntryId) };
          inline Ipv6TranslatorEntryIds& setIpv6TranslatorEntryId(vector<string> && ipv6TranslatorEntryId) { DARABONBA_PTR_SET_RVALUE(ipv6TranslatorEntryId_, ipv6TranslatorEntryId) };


        protected:
          shared_ptr<vector<string>> ipv6TranslatorEntryId_ {};
        };

        virtual bool empty() const override { return this->allocateIpv4Addr_ == nullptr
        && this->allocateIpv6Addr_ == nullptr && this->availableBandwidth_ == nullptr && this->bandwidth_ == nullptr && this->businessStatus_ == nullptr && this->createTime_ == nullptr
        && this->description_ == nullptr && this->endTime_ == nullptr && this->ipv6TranslatorEntryIds_ == nullptr && this->ipv6TranslatorId_ == nullptr && this->name_ == nullptr
        && this->payType_ == nullptr && this->regionId_ == nullptr && this->spec_ == nullptr && this->status_ == nullptr; };
        // allocateIpv4Addr Field Functions 
        bool hasAllocateIpv4Addr() const { return this->allocateIpv4Addr_ != nullptr;};
        void deleteAllocateIpv4Addr() { this->allocateIpv4Addr_ = nullptr;};
        inline string getAllocateIpv4Addr() const { DARABONBA_PTR_GET_DEFAULT(allocateIpv4Addr_, "") };
        inline Ipv6Translator& setAllocateIpv4Addr(string allocateIpv4Addr) { DARABONBA_PTR_SET_VALUE(allocateIpv4Addr_, allocateIpv4Addr) };


        // allocateIpv6Addr Field Functions 
        bool hasAllocateIpv6Addr() const { return this->allocateIpv6Addr_ != nullptr;};
        void deleteAllocateIpv6Addr() { this->allocateIpv6Addr_ = nullptr;};
        inline string getAllocateIpv6Addr() const { DARABONBA_PTR_GET_DEFAULT(allocateIpv6Addr_, "") };
        inline Ipv6Translator& setAllocateIpv6Addr(string allocateIpv6Addr) { DARABONBA_PTR_SET_VALUE(allocateIpv6Addr_, allocateIpv6Addr) };


        // availableBandwidth Field Functions 
        bool hasAvailableBandwidth() const { return this->availableBandwidth_ != nullptr;};
        void deleteAvailableBandwidth() { this->availableBandwidth_ = nullptr;};
        inline string getAvailableBandwidth() const { DARABONBA_PTR_GET_DEFAULT(availableBandwidth_, "") };
        inline Ipv6Translator& setAvailableBandwidth(string availableBandwidth) { DARABONBA_PTR_SET_VALUE(availableBandwidth_, availableBandwidth) };


        // bandwidth Field Functions 
        bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
        void deleteBandwidth() { this->bandwidth_ = nullptr;};
        inline int32_t getBandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, 0) };
        inline Ipv6Translator& setBandwidth(int32_t bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


        // businessStatus Field Functions 
        bool hasBusinessStatus() const { return this->businessStatus_ != nullptr;};
        void deleteBusinessStatus() { this->businessStatus_ = nullptr;};
        inline string getBusinessStatus() const { DARABONBA_PTR_GET_DEFAULT(businessStatus_, "") };
        inline Ipv6Translator& setBusinessStatus(string businessStatus) { DARABONBA_PTR_SET_VALUE(businessStatus_, businessStatus) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
        inline Ipv6Translator& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline Ipv6Translator& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // endTime Field Functions 
        bool hasEndTime() const { return this->endTime_ != nullptr;};
        void deleteEndTime() { this->endTime_ = nullptr;};
        inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
        inline Ipv6Translator& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


        // ipv6TranslatorEntryIds Field Functions 
        bool hasIpv6TranslatorEntryIds() const { return this->ipv6TranslatorEntryIds_ != nullptr;};
        void deleteIpv6TranslatorEntryIds() { this->ipv6TranslatorEntryIds_ = nullptr;};
        inline const Ipv6Translator::Ipv6TranslatorEntryIds & getIpv6TranslatorEntryIds() const { DARABONBA_PTR_GET_CONST(ipv6TranslatorEntryIds_, Ipv6Translator::Ipv6TranslatorEntryIds) };
        inline Ipv6Translator::Ipv6TranslatorEntryIds getIpv6TranslatorEntryIds() { DARABONBA_PTR_GET(ipv6TranslatorEntryIds_, Ipv6Translator::Ipv6TranslatorEntryIds) };
        inline Ipv6Translator& setIpv6TranslatorEntryIds(const Ipv6Translator::Ipv6TranslatorEntryIds & ipv6TranslatorEntryIds) { DARABONBA_PTR_SET_VALUE(ipv6TranslatorEntryIds_, ipv6TranslatorEntryIds) };
        inline Ipv6Translator& setIpv6TranslatorEntryIds(Ipv6Translator::Ipv6TranslatorEntryIds && ipv6TranslatorEntryIds) { DARABONBA_PTR_SET_RVALUE(ipv6TranslatorEntryIds_, ipv6TranslatorEntryIds) };


        // ipv6TranslatorId Field Functions 
        bool hasIpv6TranslatorId() const { return this->ipv6TranslatorId_ != nullptr;};
        void deleteIpv6TranslatorId() { this->ipv6TranslatorId_ = nullptr;};
        inline string getIpv6TranslatorId() const { DARABONBA_PTR_GET_DEFAULT(ipv6TranslatorId_, "") };
        inline Ipv6Translator& setIpv6TranslatorId(string ipv6TranslatorId) { DARABONBA_PTR_SET_VALUE(ipv6TranslatorId_, ipv6TranslatorId) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Ipv6Translator& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // payType Field Functions 
        bool hasPayType() const { return this->payType_ != nullptr;};
        void deletePayType() { this->payType_ = nullptr;};
        inline string getPayType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
        inline Ipv6Translator& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline Ipv6Translator& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // spec Field Functions 
        bool hasSpec() const { return this->spec_ != nullptr;};
        void deleteSpec() { this->spec_ = nullptr;};
        inline string getSpec() const { DARABONBA_PTR_GET_DEFAULT(spec_, "") };
        inline Ipv6Translator& setSpec(string spec) { DARABONBA_PTR_SET_VALUE(spec_, spec) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Ipv6Translator& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        // The IPv4 address allocated to the IPv6 Translation Service instance.
        shared_ptr<string> allocateIpv4Addr_ {};
        // The IPv6 address allocated to the IPv6 Translation Service instance.
        shared_ptr<string> allocateIpv6Addr_ {};
        // The bandwidth of the IPv6 Translation Service instance.
        shared_ptr<string> availableBandwidth_ {};
        // The bandwidth of the IPv6 Translation Service instance. Unit: Mbit/s.
        shared_ptr<int32_t> bandwidth_ {};
        // The business status of the IPv6 Translation Service instance. Valid values:
        // 
        // *   **Normal**
        // *   **FinancialLocked**
        shared_ptr<string> businessStatus_ {};
        // The timestamp when the IPv6 Translation Service instance was created.
        shared_ptr<int64_t> createTime_ {};
        // The description of the IPv6 Translation Service instance.
        shared_ptr<string> description_ {};
        // The timestamp when IPv6 Translation Service instance expires.
        shared_ptr<int64_t> endTime_ {};
        // The IDs of IPv6 mapping entries of the IPv6 Translation Service instance.
        shared_ptr<Ipv6Translator::Ipv6TranslatorEntryIds> ipv6TranslatorEntryIds_ {};
        // The ID of the IPv6 Translation Service instance.
        shared_ptr<string> ipv6TranslatorId_ {};
        // The name of the IPv6 Translation Service instance.
        shared_ptr<string> name_ {};
        // The billing method of the IPv6 Translation Service instance.
        // 
        // *   **Prepay**: subscription
        // *   **Postpay**: pay-as-you-go
        shared_ptr<string> payType_ {};
        // The region of the IPv6 Translation Service instance.
        shared_ptr<string> regionId_ {};
        // The specification of the IPv6 Translation Service instance.
        shared_ptr<string> spec_ {};
        // The status of the IPv6 Translation Service instance.
        shared_ptr<string> status_ {};
      };

      virtual bool empty() const override { return this->ipv6Translator_ == nullptr; };
      // ipv6Translator Field Functions 
      bool hasIpv6Translator() const { return this->ipv6Translator_ != nullptr;};
      void deleteIpv6Translator() { this->ipv6Translator_ = nullptr;};
      inline const vector<Ipv6Translators::Ipv6Translator> & getIpv6Translator() const { DARABONBA_PTR_GET_CONST(ipv6Translator_, vector<Ipv6Translators::Ipv6Translator>) };
      inline vector<Ipv6Translators::Ipv6Translator> getIpv6Translator() { DARABONBA_PTR_GET(ipv6Translator_, vector<Ipv6Translators::Ipv6Translator>) };
      inline Ipv6Translators& setIpv6Translator(const vector<Ipv6Translators::Ipv6Translator> & ipv6Translator) { DARABONBA_PTR_SET_VALUE(ipv6Translator_, ipv6Translator) };
      inline Ipv6Translators& setIpv6Translator(vector<Ipv6Translators::Ipv6Translator> && ipv6Translator) { DARABONBA_PTR_SET_RVALUE(ipv6Translator_, ipv6Translator) };


    protected:
      shared_ptr<vector<Ipv6Translators::Ipv6Translator>> ipv6Translator_ {};
    };

    virtual bool empty() const override { return this->ipv6Translators_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // ipv6Translators Field Functions 
    bool hasIpv6Translators() const { return this->ipv6Translators_ != nullptr;};
    void deleteIpv6Translators() { this->ipv6Translators_ = nullptr;};
    inline const DescribeIPv6TranslatorsResponseBody::Ipv6Translators & getIpv6Translators() const { DARABONBA_PTR_GET_CONST(ipv6Translators_, DescribeIPv6TranslatorsResponseBody::Ipv6Translators) };
    inline DescribeIPv6TranslatorsResponseBody::Ipv6Translators getIpv6Translators() { DARABONBA_PTR_GET(ipv6Translators_, DescribeIPv6TranslatorsResponseBody::Ipv6Translators) };
    inline DescribeIPv6TranslatorsResponseBody& setIpv6Translators(const DescribeIPv6TranslatorsResponseBody::Ipv6Translators & ipv6Translators) { DARABONBA_PTR_SET_VALUE(ipv6Translators_, ipv6Translators) };
    inline DescribeIPv6TranslatorsResponseBody& setIpv6Translators(DescribeIPv6TranslatorsResponseBody::Ipv6Translators && ipv6Translators) { DARABONBA_PTR_SET_RVALUE(ipv6Translators_, ipv6Translators) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeIPv6TranslatorsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeIPv6TranslatorsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeIPv6TranslatorsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeIPv6TranslatorsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The list of IPv6 Translation Service instances.
    shared_ptr<DescribeIPv6TranslatorsResponseBody::Ipv6Translators> ipv6Translators_ {};
    // The page number of the returned page.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The number of returned entries.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
