// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIPV6GATEWAYSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIPV6GATEWAYSRESPONSEBODY_HPP_
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
  class DescribeIpv6GatewaysResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeIpv6GatewaysResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Ipv6Gateways, ipv6Gateways_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeIpv6GatewaysResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Ipv6Gateways, ipv6Gateways_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeIpv6GatewaysResponseBody() = default ;
    DescribeIpv6GatewaysResponseBody(const DescribeIpv6GatewaysResponseBody &) = default ;
    DescribeIpv6GatewaysResponseBody(DescribeIpv6GatewaysResponseBody &&) = default ;
    DescribeIpv6GatewaysResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeIpv6GatewaysResponseBody() = default ;
    DescribeIpv6GatewaysResponseBody& operator=(const DescribeIpv6GatewaysResponseBody &) = default ;
    DescribeIpv6GatewaysResponseBody& operator=(DescribeIpv6GatewaysResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Ipv6Gateways : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Ipv6Gateways& obj) { 
        DARABONBA_PTR_TO_JSON(Ipv6Gateway, ipv6Gateway_);
      };
      friend void from_json(const Darabonba::Json& j, Ipv6Gateways& obj) { 
        DARABONBA_PTR_FROM_JSON(Ipv6Gateway, ipv6Gateway_);
      };
      Ipv6Gateways() = default ;
      Ipv6Gateways(const Ipv6Gateways &) = default ;
      Ipv6Gateways(Ipv6Gateways &&) = default ;
      Ipv6Gateways(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Ipv6Gateways() = default ;
      Ipv6Gateways& operator=(const Ipv6Gateways &) = default ;
      Ipv6Gateways& operator=(Ipv6Gateways &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Ipv6Gateway : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Ipv6Gateway& obj) { 
          DARABONBA_PTR_TO_JSON(BusinessStatus, businessStatus_);
          DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(ExpiredTime, expiredTime_);
          DARABONBA_PTR_TO_JSON(InstanceChargeType, instanceChargeType_);
          DARABONBA_PTR_TO_JSON(Ipv6GatewayId, ipv6GatewayId_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(Tags, tags_);
          DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
        };
        friend void from_json(const Darabonba::Json& j, Ipv6Gateway& obj) { 
          DARABONBA_PTR_FROM_JSON(BusinessStatus, businessStatus_);
          DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(ExpiredTime, expiredTime_);
          DARABONBA_PTR_FROM_JSON(InstanceChargeType, instanceChargeType_);
          DARABONBA_PTR_FROM_JSON(Ipv6GatewayId, ipv6GatewayId_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(Tags, tags_);
          DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
        };
        Ipv6Gateway() = default ;
        Ipv6Gateway(const Ipv6Gateway &) = default ;
        Ipv6Gateway(Ipv6Gateway &&) = default ;
        Ipv6Gateway(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Ipv6Gateway() = default ;
        Ipv6Gateway& operator=(const Ipv6Gateway &) = default ;
        Ipv6Gateway& operator=(Ipv6Gateway &&) = default ;
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
              DARABONBA_PTR_TO_JSON(Value, value_);
            };
            friend void from_json(const Darabonba::Json& j, Tag& obj) { 
              DARABONBA_PTR_FROM_JSON(Key, key_);
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
        && this->value_ == nullptr; };
            // key Field Functions 
            bool hasKey() const { return this->key_ != nullptr;};
            void deleteKey() { this->key_ = nullptr;};
            inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
            inline Tag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


            // value Field Functions 
            bool hasValue() const { return this->value_ != nullptr;};
            void deleteValue() { this->value_ = nullptr;};
            inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
            inline Tag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


          protected:
            // The tag key.
            shared_ptr<string> key_ {};
            // The tag value.
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

        virtual bool empty() const override { return this->businessStatus_ == nullptr
        && this->creationTime_ == nullptr && this->description_ == nullptr && this->expiredTime_ == nullptr && this->instanceChargeType_ == nullptr && this->ipv6GatewayId_ == nullptr
        && this->name_ == nullptr && this->ownerId_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr && this->status_ == nullptr
        && this->tags_ == nullptr && this->vpcId_ == nullptr; };
        // businessStatus Field Functions 
        bool hasBusinessStatus() const { return this->businessStatus_ != nullptr;};
        void deleteBusinessStatus() { this->businessStatus_ = nullptr;};
        inline string getBusinessStatus() const { DARABONBA_PTR_GET_DEFAULT(businessStatus_, "") };
        inline Ipv6Gateway& setBusinessStatus(string businessStatus) { DARABONBA_PTR_SET_VALUE(businessStatus_, businessStatus) };


        // creationTime Field Functions 
        bool hasCreationTime() const { return this->creationTime_ != nullptr;};
        void deleteCreationTime() { this->creationTime_ = nullptr;};
        inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
        inline Ipv6Gateway& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline Ipv6Gateway& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // expiredTime Field Functions 
        bool hasExpiredTime() const { return this->expiredTime_ != nullptr;};
        void deleteExpiredTime() { this->expiredTime_ = nullptr;};
        inline string getExpiredTime() const { DARABONBA_PTR_GET_DEFAULT(expiredTime_, "") };
        inline Ipv6Gateway& setExpiredTime(string expiredTime) { DARABONBA_PTR_SET_VALUE(expiredTime_, expiredTime) };


        // instanceChargeType Field Functions 
        bool hasInstanceChargeType() const { return this->instanceChargeType_ != nullptr;};
        void deleteInstanceChargeType() { this->instanceChargeType_ = nullptr;};
        inline string getInstanceChargeType() const { DARABONBA_PTR_GET_DEFAULT(instanceChargeType_, "") };
        inline Ipv6Gateway& setInstanceChargeType(string instanceChargeType) { DARABONBA_PTR_SET_VALUE(instanceChargeType_, instanceChargeType) };


        // ipv6GatewayId Field Functions 
        bool hasIpv6GatewayId() const { return this->ipv6GatewayId_ != nullptr;};
        void deleteIpv6GatewayId() { this->ipv6GatewayId_ = nullptr;};
        inline string getIpv6GatewayId() const { DARABONBA_PTR_GET_DEFAULT(ipv6GatewayId_, "") };
        inline Ipv6Gateway& setIpv6GatewayId(string ipv6GatewayId) { DARABONBA_PTR_SET_VALUE(ipv6GatewayId_, ipv6GatewayId) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Ipv6Gateway& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // ownerId Field Functions 
        bool hasOwnerId() const { return this->ownerId_ != nullptr;};
        void deleteOwnerId() { this->ownerId_ = nullptr;};
        inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
        inline Ipv6Gateway& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline Ipv6Gateway& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // resourceGroupId Field Functions 
        bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
        void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
        inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
        inline Ipv6Gateway& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Ipv6Gateway& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // tags Field Functions 
        bool hasTags() const { return this->tags_ != nullptr;};
        void deleteTags() { this->tags_ = nullptr;};
        inline const Ipv6Gateway::Tags & getTags() const { DARABONBA_PTR_GET_CONST(tags_, Ipv6Gateway::Tags) };
        inline Ipv6Gateway::Tags getTags() { DARABONBA_PTR_GET(tags_, Ipv6Gateway::Tags) };
        inline Ipv6Gateway& setTags(const Ipv6Gateway::Tags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
        inline Ipv6Gateway& setTags(Ipv6Gateway::Tags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


        // vpcId Field Functions 
        bool hasVpcId() const { return this->vpcId_ != nullptr;};
        void deleteVpcId() { this->vpcId_ = nullptr;};
        inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
        inline Ipv6Gateway& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


      protected:
        // The status of the IPv6 gateway. Valid values:
        // 
        // *   **Normal**
        // *   **FinancialLocked**
        // *   **SecurityLocked**
        shared_ptr<string> businessStatus_ {};
        // The time when the IPv6 gateway was created.
        shared_ptr<string> creationTime_ {};
        // The description of the IPv6 gateway.
        shared_ptr<string> description_ {};
        // The time when the IPv6 gateway expires.
        shared_ptr<string> expiredTime_ {};
        // The billing method of the IPv6 gateway.
        // 
        // Only **PostPaid** may be returned, which indicates that the IPv6 gateway uses the pay-as-you-go billing method.
        shared_ptr<string> instanceChargeType_ {};
        // The ID of the IPv6 gateway.
        shared_ptr<string> ipv6GatewayId_ {};
        // The name of the IPv6 gateway.
        shared_ptr<string> name_ {};
        shared_ptr<int64_t> ownerId_ {};
        // The ID of the region in which the IPv6 gateway is deployed.
        shared_ptr<string> regionId_ {};
        // The resource group ID.
        shared_ptr<string> resourceGroupId_ {};
        // The status of the IPv6 gateway. Valid values:
        // 
        // *   **Pending**
        // *   **Available**
        shared_ptr<string> status_ {};
        // The information about the tags.
        shared_ptr<Ipv6Gateway::Tags> tags_ {};
        // The ID of the VPC to which the IPv6 gateway belongs.
        shared_ptr<string> vpcId_ {};
      };

      virtual bool empty() const override { return this->ipv6Gateway_ == nullptr; };
      // ipv6Gateway Field Functions 
      bool hasIpv6Gateway() const { return this->ipv6Gateway_ != nullptr;};
      void deleteIpv6Gateway() { this->ipv6Gateway_ = nullptr;};
      inline const vector<Ipv6Gateways::Ipv6Gateway> & getIpv6Gateway() const { DARABONBA_PTR_GET_CONST(ipv6Gateway_, vector<Ipv6Gateways::Ipv6Gateway>) };
      inline vector<Ipv6Gateways::Ipv6Gateway> getIpv6Gateway() { DARABONBA_PTR_GET(ipv6Gateway_, vector<Ipv6Gateways::Ipv6Gateway>) };
      inline Ipv6Gateways& setIpv6Gateway(const vector<Ipv6Gateways::Ipv6Gateway> & ipv6Gateway) { DARABONBA_PTR_SET_VALUE(ipv6Gateway_, ipv6Gateway) };
      inline Ipv6Gateways& setIpv6Gateway(vector<Ipv6Gateways::Ipv6Gateway> && ipv6Gateway) { DARABONBA_PTR_SET_RVALUE(ipv6Gateway_, ipv6Gateway) };


    protected:
      shared_ptr<vector<Ipv6Gateways::Ipv6Gateway>> ipv6Gateway_ {};
    };

    virtual bool empty() const override { return this->ipv6Gateways_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // ipv6Gateways Field Functions 
    bool hasIpv6Gateways() const { return this->ipv6Gateways_ != nullptr;};
    void deleteIpv6Gateways() { this->ipv6Gateways_ = nullptr;};
    inline const DescribeIpv6GatewaysResponseBody::Ipv6Gateways & getIpv6Gateways() const { DARABONBA_PTR_GET_CONST(ipv6Gateways_, DescribeIpv6GatewaysResponseBody::Ipv6Gateways) };
    inline DescribeIpv6GatewaysResponseBody::Ipv6Gateways getIpv6Gateways() { DARABONBA_PTR_GET(ipv6Gateways_, DescribeIpv6GatewaysResponseBody::Ipv6Gateways) };
    inline DescribeIpv6GatewaysResponseBody& setIpv6Gateways(const DescribeIpv6GatewaysResponseBody::Ipv6Gateways & ipv6Gateways) { DARABONBA_PTR_SET_VALUE(ipv6Gateways_, ipv6Gateways) };
    inline DescribeIpv6GatewaysResponseBody& setIpv6Gateways(DescribeIpv6GatewaysResponseBody::Ipv6Gateways && ipv6Gateways) { DARABONBA_PTR_SET_RVALUE(ipv6Gateways_, ipv6Gateways) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeIpv6GatewaysResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeIpv6GatewaysResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeIpv6GatewaysResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeIpv6GatewaysResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The information about the IPv6 gateway.
    shared_ptr<DescribeIpv6GatewaysResponseBody::Ipv6Gateways> ipv6Gateways_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
