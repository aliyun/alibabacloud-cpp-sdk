// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEENSEIPADDRESSESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEENSEIPADDRESSESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeEnsEipAddressesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEnsEipAddressesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(EipAddresses, eipAddresses_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEnsEipAddressesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(EipAddresses, eipAddresses_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeEnsEipAddressesResponseBody() = default ;
    DescribeEnsEipAddressesResponseBody(const DescribeEnsEipAddressesResponseBody &) = default ;
    DescribeEnsEipAddressesResponseBody(DescribeEnsEipAddressesResponseBody &&) = default ;
    DescribeEnsEipAddressesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEnsEipAddressesResponseBody() = default ;
    DescribeEnsEipAddressesResponseBody& operator=(const DescribeEnsEipAddressesResponseBody &) = default ;
    DescribeEnsEipAddressesResponseBody& operator=(DescribeEnsEipAddressesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class EipAddresses : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const EipAddresses& obj) { 
        DARABONBA_PTR_TO_JSON(EipAddress, eipAddress_);
      };
      friend void from_json(const Darabonba::Json& j, EipAddresses& obj) { 
        DARABONBA_PTR_FROM_JSON(EipAddress, eipAddress_);
      };
      EipAddresses() = default ;
      EipAddresses(const EipAddresses &) = default ;
      EipAddresses(EipAddresses &&) = default ;
      EipAddresses(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~EipAddresses() = default ;
      EipAddresses& operator=(const EipAddresses &) = default ;
      EipAddresses& operator=(EipAddresses &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class EipAddress : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const EipAddress& obj) { 
          DARABONBA_PTR_TO_JSON(AllocationId, allocationId_);
          DARABONBA_PTR_TO_JSON(AllocationTime, allocationTime_);
          DARABONBA_PTR_TO_JSON(Bandwidth, bandwidth_);
          DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(EnsRegionId, ensRegionId_);
          DARABONBA_PTR_TO_JSON(IcmpReplyEnabled, icmpReplyEnabled_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
          DARABONBA_PTR_TO_JSON(InternetChargeType, internetChargeType_);
          DARABONBA_PTR_TO_JSON(IpAddress, ipAddress_);
          DARABONBA_PTR_TO_JSON(IpStatus, ipStatus_);
          DARABONBA_PTR_TO_JSON(Isp, isp_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Standby, standby_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(Tags, tags_);
        };
        friend void from_json(const Darabonba::Json& j, EipAddress& obj) { 
          DARABONBA_PTR_FROM_JSON(AllocationId, allocationId_);
          DARABONBA_PTR_FROM_JSON(AllocationTime, allocationTime_);
          DARABONBA_PTR_FROM_JSON(Bandwidth, bandwidth_);
          DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(EnsRegionId, ensRegionId_);
          DARABONBA_PTR_FROM_JSON(IcmpReplyEnabled, icmpReplyEnabled_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
          DARABONBA_PTR_FROM_JSON(InternetChargeType, internetChargeType_);
          DARABONBA_PTR_FROM_JSON(IpAddress, ipAddress_);
          DARABONBA_PTR_FROM_JSON(IpStatus, ipStatus_);
          DARABONBA_PTR_FROM_JSON(Isp, isp_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Standby, standby_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(Tags, tags_);
        };
        EipAddress() = default ;
        EipAddress(const EipAddress &) = default ;
        EipAddress(EipAddress &&) = default ;
        EipAddress(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~EipAddress() = default ;
        EipAddress& operator=(const EipAddress &) = default ;
        EipAddress& operator=(EipAddress &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Tags : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Tags& obj) { 
            DARABONBA_PTR_TO_JSON(Tag, tag_);
          };
          friend void from_json(const Darabonba::Json& j, Tags& obj) { 
            DARABONBA_PTR_FROM_JSON(Tag, tag_);
          };
          Tags() = default ;
          Tags(const Tags &) = default ;
          Tags(Tags &&) = default ;
          Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Tags() = default ;
          Tags& operator=(const Tags &) = default ;
          Tags& operator=(Tags &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Tag : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Tag& obj) { 
              DARABONBA_PTR_TO_JSON(Key, key_);
              DARABONBA_PTR_TO_JSON(TagKey, tagKey_);
              DARABONBA_PTR_TO_JSON(TagValue, tagValue_);
              DARABONBA_PTR_TO_JSON(Value, value_);
            };
            friend void from_json(const Darabonba::Json& j, Tag& obj) { 
              DARABONBA_PTR_FROM_JSON(Key, key_);
              DARABONBA_PTR_FROM_JSON(TagKey, tagKey_);
              DARABONBA_PTR_FROM_JSON(TagValue, tagValue_);
              DARABONBA_PTR_FROM_JSON(Value, value_);
            };
            Tag() = default ;
            Tag(const Tag &) = default ;
            Tag(Tag &&) = default ;
            Tag(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Tag() = default ;
            Tag& operator=(const Tag &) = default ;
            Tag& operator=(Tag &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->key_ == nullptr
        && this->tagKey_ == nullptr && this->tagValue_ == nullptr && this->value_ == nullptr; };
            // key Field Functions 
            bool hasKey() const { return this->key_ != nullptr;};
            void deleteKey() { this->key_ = nullptr;};
            inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
            inline Tag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


            // tagKey Field Functions 
            bool hasTagKey() const { return this->tagKey_ != nullptr;};
            void deleteTagKey() { this->tagKey_ = nullptr;};
            inline string getTagKey() const { DARABONBA_PTR_GET_DEFAULT(tagKey_, "") };
            inline Tag& setTagKey(string tagKey) { DARABONBA_PTR_SET_VALUE(tagKey_, tagKey) };


            // tagValue Field Functions 
            bool hasTagValue() const { return this->tagValue_ != nullptr;};
            void deleteTagValue() { this->tagValue_ = nullptr;};
            inline string getTagValue() const { DARABONBA_PTR_GET_DEFAULT(tagValue_, "") };
            inline Tag& setTagValue(string tagValue) { DARABONBA_PTR_SET_VALUE(tagValue_, tagValue) };


            // value Field Functions 
            bool hasValue() const { return this->value_ != nullptr;};
            void deleteValue() { this->value_ = nullptr;};
            inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
            inline Tag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


          protected:
            shared_ptr<string> key_ {};
            shared_ptr<string> tagKey_ {};
            shared_ptr<string> tagValue_ {};
            shared_ptr<string> value_ {};
          };

          virtual bool empty() const override { return this->tag_ == nullptr; };
          // tag Field Functions 
          bool hasTag() const { return this->tag_ != nullptr;};
          void deleteTag() { this->tag_ = nullptr;};
          inline const vector<Tags::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<Tags::Tag>) };
          inline vector<Tags::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<Tags::Tag>) };
          inline Tags& setTag(const vector<Tags::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
          inline Tags& setTag(vector<Tags::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


        protected:
          shared_ptr<vector<Tags::Tag>> tag_ {};
        };

        virtual bool empty() const override { return this->allocationId_ == nullptr
        && this->allocationTime_ == nullptr && this->bandwidth_ == nullptr && this->chargeType_ == nullptr && this->description_ == nullptr && this->ensRegionId_ == nullptr
        && this->icmpReplyEnabled_ == nullptr && this->instanceId_ == nullptr && this->instanceType_ == nullptr && this->internetChargeType_ == nullptr && this->ipAddress_ == nullptr
        && this->ipStatus_ == nullptr && this->isp_ == nullptr && this->name_ == nullptr && this->standby_ == nullptr && this->status_ == nullptr
        && this->tags_ == nullptr; };
        // allocationId Field Functions 
        bool hasAllocationId() const { return this->allocationId_ != nullptr;};
        void deleteAllocationId() { this->allocationId_ = nullptr;};
        inline string getAllocationId() const { DARABONBA_PTR_GET_DEFAULT(allocationId_, "") };
        inline EipAddress& setAllocationId(string allocationId) { DARABONBA_PTR_SET_VALUE(allocationId_, allocationId) };


        // allocationTime Field Functions 
        bool hasAllocationTime() const { return this->allocationTime_ != nullptr;};
        void deleteAllocationTime() { this->allocationTime_ = nullptr;};
        inline string getAllocationTime() const { DARABONBA_PTR_GET_DEFAULT(allocationTime_, "") };
        inline EipAddress& setAllocationTime(string allocationTime) { DARABONBA_PTR_SET_VALUE(allocationTime_, allocationTime) };


        // bandwidth Field Functions 
        bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
        void deleteBandwidth() { this->bandwidth_ = nullptr;};
        inline int32_t getBandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, 0) };
        inline EipAddress& setBandwidth(int32_t bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


        // chargeType Field Functions 
        bool hasChargeType() const { return this->chargeType_ != nullptr;};
        void deleteChargeType() { this->chargeType_ = nullptr;};
        inline string getChargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
        inline EipAddress& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline EipAddress& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // ensRegionId Field Functions 
        bool hasEnsRegionId() const { return this->ensRegionId_ != nullptr;};
        void deleteEnsRegionId() { this->ensRegionId_ = nullptr;};
        inline string getEnsRegionId() const { DARABONBA_PTR_GET_DEFAULT(ensRegionId_, "") };
        inline EipAddress& setEnsRegionId(string ensRegionId) { DARABONBA_PTR_SET_VALUE(ensRegionId_, ensRegionId) };


        // icmpReplyEnabled Field Functions 
        bool hasIcmpReplyEnabled() const { return this->icmpReplyEnabled_ != nullptr;};
        void deleteIcmpReplyEnabled() { this->icmpReplyEnabled_ = nullptr;};
        inline bool getIcmpReplyEnabled() const { DARABONBA_PTR_GET_DEFAULT(icmpReplyEnabled_, false) };
        inline EipAddress& setIcmpReplyEnabled(bool icmpReplyEnabled) { DARABONBA_PTR_SET_VALUE(icmpReplyEnabled_, icmpReplyEnabled) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline EipAddress& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // instanceType Field Functions 
        bool hasInstanceType() const { return this->instanceType_ != nullptr;};
        void deleteInstanceType() { this->instanceType_ = nullptr;};
        inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
        inline EipAddress& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


        // internetChargeType Field Functions 
        bool hasInternetChargeType() const { return this->internetChargeType_ != nullptr;};
        void deleteInternetChargeType() { this->internetChargeType_ = nullptr;};
        inline string getInternetChargeType() const { DARABONBA_PTR_GET_DEFAULT(internetChargeType_, "") };
        inline EipAddress& setInternetChargeType(string internetChargeType) { DARABONBA_PTR_SET_VALUE(internetChargeType_, internetChargeType) };


        // ipAddress Field Functions 
        bool hasIpAddress() const { return this->ipAddress_ != nullptr;};
        void deleteIpAddress() { this->ipAddress_ = nullptr;};
        inline string getIpAddress() const { DARABONBA_PTR_GET_DEFAULT(ipAddress_, "") };
        inline EipAddress& setIpAddress(string ipAddress) { DARABONBA_PTR_SET_VALUE(ipAddress_, ipAddress) };


        // ipStatus Field Functions 
        bool hasIpStatus() const { return this->ipStatus_ != nullptr;};
        void deleteIpStatus() { this->ipStatus_ = nullptr;};
        inline string getIpStatus() const { DARABONBA_PTR_GET_DEFAULT(ipStatus_, "") };
        inline EipAddress& setIpStatus(string ipStatus) { DARABONBA_PTR_SET_VALUE(ipStatus_, ipStatus) };


        // isp Field Functions 
        bool hasIsp() const { return this->isp_ != nullptr;};
        void deleteIsp() { this->isp_ = nullptr;};
        inline string getIsp() const { DARABONBA_PTR_GET_DEFAULT(isp_, "") };
        inline EipAddress& setIsp(string isp) { DARABONBA_PTR_SET_VALUE(isp_, isp) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline EipAddress& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // standby Field Functions 
        bool hasStandby() const { return this->standby_ != nullptr;};
        void deleteStandby() { this->standby_ = nullptr;};
        inline bool getStandby() const { DARABONBA_PTR_GET_DEFAULT(standby_, false) };
        inline EipAddress& setStandby(bool standby) { DARABONBA_PTR_SET_VALUE(standby_, standby) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline EipAddress& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // tags Field Functions 
        bool hasTags() const { return this->tags_ != nullptr;};
        void deleteTags() { this->tags_ = nullptr;};
        inline const EipAddress::Tags & getTags() const { DARABONBA_PTR_GET_CONST(tags_, EipAddress::Tags) };
        inline EipAddress::Tags getTags() { DARABONBA_PTR_GET(tags_, EipAddress::Tags) };
        inline EipAddress& setTags(const EipAddress::Tags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
        inline EipAddress& setTags(EipAddress::Tags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      protected:
        shared_ptr<string> allocationId_ {};
        shared_ptr<string> allocationTime_ {};
        shared_ptr<int32_t> bandwidth_ {};
        shared_ptr<string> chargeType_ {};
        shared_ptr<string> description_ {};
        shared_ptr<string> ensRegionId_ {};
        shared_ptr<bool> icmpReplyEnabled_ {};
        shared_ptr<string> instanceId_ {};
        shared_ptr<string> instanceType_ {};
        shared_ptr<string> internetChargeType_ {};
        shared_ptr<string> ipAddress_ {};
        shared_ptr<string> ipStatus_ {};
        shared_ptr<string> isp_ {};
        shared_ptr<string> name_ {};
        shared_ptr<bool> standby_ {};
        shared_ptr<string> status_ {};
        shared_ptr<EipAddress::Tags> tags_ {};
      };

      virtual bool empty() const override { return this->eipAddress_ == nullptr; };
      // eipAddress Field Functions 
      bool hasEipAddress() const { return this->eipAddress_ != nullptr;};
      void deleteEipAddress() { this->eipAddress_ = nullptr;};
      inline const vector<EipAddresses::EipAddress> & getEipAddress() const { DARABONBA_PTR_GET_CONST(eipAddress_, vector<EipAddresses::EipAddress>) };
      inline vector<EipAddresses::EipAddress> getEipAddress() { DARABONBA_PTR_GET(eipAddress_, vector<EipAddresses::EipAddress>) };
      inline EipAddresses& setEipAddress(const vector<EipAddresses::EipAddress> & eipAddress) { DARABONBA_PTR_SET_VALUE(eipAddress_, eipAddress) };
      inline EipAddresses& setEipAddress(vector<EipAddresses::EipAddress> && eipAddress) { DARABONBA_PTR_SET_RVALUE(eipAddress_, eipAddress) };


    protected:
      shared_ptr<vector<EipAddresses::EipAddress>> eipAddress_ {};
    };

    virtual bool empty() const override { return this->eipAddresses_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // eipAddresses Field Functions 
    bool hasEipAddresses() const { return this->eipAddresses_ != nullptr;};
    void deleteEipAddresses() { this->eipAddresses_ = nullptr;};
    inline const DescribeEnsEipAddressesResponseBody::EipAddresses & getEipAddresses() const { DARABONBA_PTR_GET_CONST(eipAddresses_, DescribeEnsEipAddressesResponseBody::EipAddresses) };
    inline DescribeEnsEipAddressesResponseBody::EipAddresses getEipAddresses() { DARABONBA_PTR_GET(eipAddresses_, DescribeEnsEipAddressesResponseBody::EipAddresses) };
    inline DescribeEnsEipAddressesResponseBody& setEipAddresses(const DescribeEnsEipAddressesResponseBody::EipAddresses & eipAddresses) { DARABONBA_PTR_SET_VALUE(eipAddresses_, eipAddresses) };
    inline DescribeEnsEipAddressesResponseBody& setEipAddresses(DescribeEnsEipAddressesResponseBody::EipAddresses && eipAddresses) { DARABONBA_PTR_SET_RVALUE(eipAddresses_, eipAddresses) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeEnsEipAddressesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeEnsEipAddressesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeEnsEipAddressesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeEnsEipAddressesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // Details of the EIPs.
    shared_ptr<DescribeEnsEipAddressesResponseBody::EipAddresses> eipAddresses_ {};
    // The page number. Valid values: an integer that is greater than 0. Default value: 1.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page. Default value: 10. Valid values: **10** to **100**.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
