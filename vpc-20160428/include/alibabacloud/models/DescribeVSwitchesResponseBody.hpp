// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVSWITCHESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVSWITCHESRESPONSEBODY_HPP_
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
  class DescribeVSwitchesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVSwitchesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(VSwitches, vSwitches_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVSwitchesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(VSwitches, vSwitches_);
    };
    DescribeVSwitchesResponseBody() = default ;
    DescribeVSwitchesResponseBody(const DescribeVSwitchesResponseBody &) = default ;
    DescribeVSwitchesResponseBody(DescribeVSwitchesResponseBody &&) = default ;
    DescribeVSwitchesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVSwitchesResponseBody() = default ;
    DescribeVSwitchesResponseBody& operator=(const DescribeVSwitchesResponseBody &) = default ;
    DescribeVSwitchesResponseBody& operator=(DescribeVSwitchesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class VSwitches : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const VSwitches& obj) { 
        DARABONBA_PTR_TO_JSON(VSwitch, vSwitch_);
      };
      friend void from_json(const Darabonba::Json& j, VSwitches& obj) { 
        DARABONBA_PTR_FROM_JSON(VSwitch, vSwitch_);
      };
      VSwitches() = default ;
      VSwitches(const VSwitches &) = default ;
      VSwitches(VSwitches &&) = default ;
      VSwitches(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~VSwitches() = default ;
      VSwitches& operator=(const VSwitches &) = default ;
      VSwitches& operator=(VSwitches &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class VSwitch : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const VSwitch& obj) { 
          DARABONBA_PTR_TO_JSON(AvailableIpAddressCount, availableIpAddressCount_);
          DARABONBA_PTR_TO_JSON(CidrBlock, cidrBlock_);
          DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(EnabledIpv6, enabledIpv6_);
          DARABONBA_PTR_TO_JSON(Ipv6CidrBlock, ipv6CidrBlock_);
          DARABONBA_PTR_TO_JSON(IsDefault, isDefault_);
          DARABONBA_PTR_TO_JSON(NetworkAclId, networkAclId_);
          DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
          DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_TO_JSON(RouteTable, routeTable_);
          DARABONBA_PTR_TO_JSON(ShareType, shareType_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(Tags, tags_);
          DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
          DARABONBA_PTR_TO_JSON(VSwitchName, vSwitchName_);
          DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
          DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
        };
        friend void from_json(const Darabonba::Json& j, VSwitch& obj) { 
          DARABONBA_PTR_FROM_JSON(AvailableIpAddressCount, availableIpAddressCount_);
          DARABONBA_PTR_FROM_JSON(CidrBlock, cidrBlock_);
          DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(EnabledIpv6, enabledIpv6_);
          DARABONBA_PTR_FROM_JSON(Ipv6CidrBlock, ipv6CidrBlock_);
          DARABONBA_PTR_FROM_JSON(IsDefault, isDefault_);
          DARABONBA_PTR_FROM_JSON(NetworkAclId, networkAclId_);
          DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
          DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_FROM_JSON(RouteTable, routeTable_);
          DARABONBA_PTR_FROM_JSON(ShareType, shareType_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(Tags, tags_);
          DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
          DARABONBA_PTR_FROM_JSON(VSwitchName, vSwitchName_);
          DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
          DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
        };
        VSwitch() = default ;
        VSwitch(const VSwitch &) = default ;
        VSwitch(VSwitch &&) = default ;
        VSwitch(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~VSwitch() = default ;
        VSwitch& operator=(const VSwitch &) = default ;
        VSwitch& operator=(VSwitch &&) = default ;
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

        class RouteTable : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const RouteTable& obj) { 
            DARABONBA_PTR_TO_JSON(RouteTableId, routeTableId_);
            DARABONBA_PTR_TO_JSON(RouteTableType, routeTableType_);
          };
          friend void from_json(const Darabonba::Json& j, RouteTable& obj) { 
            DARABONBA_PTR_FROM_JSON(RouteTableId, routeTableId_);
            DARABONBA_PTR_FROM_JSON(RouteTableType, routeTableType_);
          };
          RouteTable() = default ;
          RouteTable(const RouteTable &) = default ;
          RouteTable(RouteTable &&) = default ;
          RouteTable(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~RouteTable() = default ;
          RouteTable& operator=(const RouteTable &) = default ;
          RouteTable& operator=(RouteTable &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->routeTableId_ == nullptr
        && this->routeTableType_ == nullptr; };
          // routeTableId Field Functions 
          bool hasRouteTableId() const { return this->routeTableId_ != nullptr;};
          void deleteRouteTableId() { this->routeTableId_ = nullptr;};
          inline string getRouteTableId() const { DARABONBA_PTR_GET_DEFAULT(routeTableId_, "") };
          inline RouteTable& setRouteTableId(string routeTableId) { DARABONBA_PTR_SET_VALUE(routeTableId_, routeTableId) };


          // routeTableType Field Functions 
          bool hasRouteTableType() const { return this->routeTableType_ != nullptr;};
          void deleteRouteTableType() { this->routeTableType_ = nullptr;};
          inline string getRouteTableType() const { DARABONBA_PTR_GET_DEFAULT(routeTableType_, "") };
          inline RouteTable& setRouteTableType(string routeTableType) { DARABONBA_PTR_SET_VALUE(routeTableType_, routeTableType) };


        protected:
          // The ID of the route table that is associated with the vSwitch.
          shared_ptr<string> routeTableId_ {};
          // The type of the route table. Valid values:
          // 
          // *   **System**
          // *   **Custom**
          shared_ptr<string> routeTableType_ {};
        };

        virtual bool empty() const override { return this->availableIpAddressCount_ == nullptr
        && this->cidrBlock_ == nullptr && this->creationTime_ == nullptr && this->description_ == nullptr && this->enabledIpv6_ == nullptr && this->ipv6CidrBlock_ == nullptr
        && this->isDefault_ == nullptr && this->networkAclId_ == nullptr && this->ownerId_ == nullptr && this->resourceGroupId_ == nullptr && this->routeTable_ == nullptr
        && this->shareType_ == nullptr && this->status_ == nullptr && this->tags_ == nullptr && this->vSwitchId_ == nullptr && this->vSwitchName_ == nullptr
        && this->vpcId_ == nullptr && this->zoneId_ == nullptr; };
        // availableIpAddressCount Field Functions 
        bool hasAvailableIpAddressCount() const { return this->availableIpAddressCount_ != nullptr;};
        void deleteAvailableIpAddressCount() { this->availableIpAddressCount_ = nullptr;};
        inline int64_t getAvailableIpAddressCount() const { DARABONBA_PTR_GET_DEFAULT(availableIpAddressCount_, 0L) };
        inline VSwitch& setAvailableIpAddressCount(int64_t availableIpAddressCount) { DARABONBA_PTR_SET_VALUE(availableIpAddressCount_, availableIpAddressCount) };


        // cidrBlock Field Functions 
        bool hasCidrBlock() const { return this->cidrBlock_ != nullptr;};
        void deleteCidrBlock() { this->cidrBlock_ = nullptr;};
        inline string getCidrBlock() const { DARABONBA_PTR_GET_DEFAULT(cidrBlock_, "") };
        inline VSwitch& setCidrBlock(string cidrBlock) { DARABONBA_PTR_SET_VALUE(cidrBlock_, cidrBlock) };


        // creationTime Field Functions 
        bool hasCreationTime() const { return this->creationTime_ != nullptr;};
        void deleteCreationTime() { this->creationTime_ = nullptr;};
        inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
        inline VSwitch& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline VSwitch& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // enabledIpv6 Field Functions 
        bool hasEnabledIpv6() const { return this->enabledIpv6_ != nullptr;};
        void deleteEnabledIpv6() { this->enabledIpv6_ = nullptr;};
        inline bool getEnabledIpv6() const { DARABONBA_PTR_GET_DEFAULT(enabledIpv6_, false) };
        inline VSwitch& setEnabledIpv6(bool enabledIpv6) { DARABONBA_PTR_SET_VALUE(enabledIpv6_, enabledIpv6) };


        // ipv6CidrBlock Field Functions 
        bool hasIpv6CidrBlock() const { return this->ipv6CidrBlock_ != nullptr;};
        void deleteIpv6CidrBlock() { this->ipv6CidrBlock_ = nullptr;};
        inline string getIpv6CidrBlock() const { DARABONBA_PTR_GET_DEFAULT(ipv6CidrBlock_, "") };
        inline VSwitch& setIpv6CidrBlock(string ipv6CidrBlock) { DARABONBA_PTR_SET_VALUE(ipv6CidrBlock_, ipv6CidrBlock) };


        // isDefault Field Functions 
        bool hasIsDefault() const { return this->isDefault_ != nullptr;};
        void deleteIsDefault() { this->isDefault_ = nullptr;};
        inline bool getIsDefault() const { DARABONBA_PTR_GET_DEFAULT(isDefault_, false) };
        inline VSwitch& setIsDefault(bool isDefault) { DARABONBA_PTR_SET_VALUE(isDefault_, isDefault) };


        // networkAclId Field Functions 
        bool hasNetworkAclId() const { return this->networkAclId_ != nullptr;};
        void deleteNetworkAclId() { this->networkAclId_ = nullptr;};
        inline string getNetworkAclId() const { DARABONBA_PTR_GET_DEFAULT(networkAclId_, "") };
        inline VSwitch& setNetworkAclId(string networkAclId) { DARABONBA_PTR_SET_VALUE(networkAclId_, networkAclId) };


        // ownerId Field Functions 
        bool hasOwnerId() const { return this->ownerId_ != nullptr;};
        void deleteOwnerId() { this->ownerId_ = nullptr;};
        inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
        inline VSwitch& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


        // resourceGroupId Field Functions 
        bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
        void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
        inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
        inline VSwitch& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


        // routeTable Field Functions 
        bool hasRouteTable() const { return this->routeTable_ != nullptr;};
        void deleteRouteTable() { this->routeTable_ = nullptr;};
        inline const VSwitch::RouteTable & getRouteTable() const { DARABONBA_PTR_GET_CONST(routeTable_, VSwitch::RouteTable) };
        inline VSwitch::RouteTable getRouteTable() { DARABONBA_PTR_GET(routeTable_, VSwitch::RouteTable) };
        inline VSwitch& setRouteTable(const VSwitch::RouteTable & routeTable) { DARABONBA_PTR_SET_VALUE(routeTable_, routeTable) };
        inline VSwitch& setRouteTable(VSwitch::RouteTable && routeTable) { DARABONBA_PTR_SET_RVALUE(routeTable_, routeTable) };


        // shareType Field Functions 
        bool hasShareType() const { return this->shareType_ != nullptr;};
        void deleteShareType() { this->shareType_ = nullptr;};
        inline string getShareType() const { DARABONBA_PTR_GET_DEFAULT(shareType_, "") };
        inline VSwitch& setShareType(string shareType) { DARABONBA_PTR_SET_VALUE(shareType_, shareType) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline VSwitch& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // tags Field Functions 
        bool hasTags() const { return this->tags_ != nullptr;};
        void deleteTags() { this->tags_ = nullptr;};
        inline const VSwitch::Tags & getTags() const { DARABONBA_PTR_GET_CONST(tags_, VSwitch::Tags) };
        inline VSwitch::Tags getTags() { DARABONBA_PTR_GET(tags_, VSwitch::Tags) };
        inline VSwitch& setTags(const VSwitch::Tags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
        inline VSwitch& setTags(VSwitch::Tags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


        // vSwitchId Field Functions 
        bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
        void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
        inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
        inline VSwitch& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


        // vSwitchName Field Functions 
        bool hasVSwitchName() const { return this->vSwitchName_ != nullptr;};
        void deleteVSwitchName() { this->vSwitchName_ = nullptr;};
        inline string getVSwitchName() const { DARABONBA_PTR_GET_DEFAULT(vSwitchName_, "") };
        inline VSwitch& setVSwitchName(string vSwitchName) { DARABONBA_PTR_SET_VALUE(vSwitchName_, vSwitchName) };


        // vpcId Field Functions 
        bool hasVpcId() const { return this->vpcId_ != nullptr;};
        void deleteVpcId() { this->vpcId_ = nullptr;};
        inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
        inline VSwitch& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


        // zoneId Field Functions 
        bool hasZoneId() const { return this->zoneId_ != nullptr;};
        void deleteZoneId() { this->zoneId_ = nullptr;};
        inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
        inline VSwitch& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


      protected:
        // The number of available IP addresses in the vSwitch.
        shared_ptr<int64_t> availableIpAddressCount_ {};
        // The IPv4 CIDR block of the vSwitch.
        shared_ptr<string> cidrBlock_ {};
        // The time when the vSwitch was created.
        shared_ptr<string> creationTime_ {};
        // The description of the vSwitch.
        shared_ptr<string> description_ {};
        // Indicates whether IPv6 is enabled for the vSwitch. If you enable IPv6, you must configure an IPv6 CIDR block for the vSwitch. Valid values:
        // 
        // *   **true**
        // *   **false**
        shared_ptr<bool> enabledIpv6_ {};
        // The IPv6 CIDR block of the vSwitch.
        shared_ptr<string> ipv6CidrBlock_ {};
        // Indicates whether the vSwitch is the default vSwitch. Valid values:
        // 
        // *   **true**
        // *   **false**
        shared_ptr<bool> isDefault_ {};
        // The ID of the network access control list (ACL).
        shared_ptr<string> networkAclId_ {};
        // The ID of the Alibaba Cloud account to which the resource belongs.
        shared_ptr<int64_t> ownerId_ {};
        // The ID of the resource group to which the vSwitch belongs.
        shared_ptr<string> resourceGroupId_ {};
        // The information about the route table.
        shared_ptr<VSwitch::RouteTable> routeTable_ {};
        // Indicates whether the vSwitch is shared.
        // 
        // *   If no value is returned, the vSwitch is a regular vSwitch.
        // *   If **Shared** is returned, the vSwitch is shared.
        // *   If **Sharing** is returned, the vSwitch is being shared.
        shared_ptr<string> shareType_ {};
        // The status of the vSwitch. Valid values:
        // 
        // *   **Pending**
        // *   **Available**
        shared_ptr<string> status_ {};
        // The tags of the vSwitch.
        shared_ptr<VSwitch::Tags> tags_ {};
        // The vSwitch ID.
        shared_ptr<string> vSwitchId_ {};
        // The vSwitch name.
        shared_ptr<string> vSwitchName_ {};
        // The ID of the VPC to which the vSwitch belongs.
        shared_ptr<string> vpcId_ {};
        // The ID of the zone to which the vSwitch belongs.
        shared_ptr<string> zoneId_ {};
      };

      virtual bool empty() const override { return this->vSwitch_ == nullptr; };
      // vSwitch Field Functions 
      bool hasVSwitch() const { return this->vSwitch_ != nullptr;};
      void deleteVSwitch() { this->vSwitch_ = nullptr;};
      inline const vector<VSwitches::VSwitch> & getVSwitch() const { DARABONBA_PTR_GET_CONST(vSwitch_, vector<VSwitches::VSwitch>) };
      inline vector<VSwitches::VSwitch> getVSwitch() { DARABONBA_PTR_GET(vSwitch_, vector<VSwitches::VSwitch>) };
      inline VSwitches& setVSwitch(const vector<VSwitches::VSwitch> & vSwitch) { DARABONBA_PTR_SET_VALUE(vSwitch_, vSwitch) };
      inline VSwitches& setVSwitch(vector<VSwitches::VSwitch> && vSwitch) { DARABONBA_PTR_SET_RVALUE(vSwitch_, vSwitch) };


    protected:
      shared_ptr<vector<VSwitches::VSwitch>> vSwitch_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr && this->vSwitches_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeVSwitchesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeVSwitchesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVSwitchesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeVSwitchesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // vSwitches Field Functions 
    bool hasVSwitches() const { return this->vSwitches_ != nullptr;};
    void deleteVSwitches() { this->vSwitches_ = nullptr;};
    inline const DescribeVSwitchesResponseBody::VSwitches & getVSwitches() const { DARABONBA_PTR_GET_CONST(vSwitches_, DescribeVSwitchesResponseBody::VSwitches) };
    inline DescribeVSwitchesResponseBody::VSwitches getVSwitches() { DARABONBA_PTR_GET(vSwitches_, DescribeVSwitchesResponseBody::VSwitches) };
    inline DescribeVSwitchesResponseBody& setVSwitches(const DescribeVSwitchesResponseBody::VSwitches & vSwitches) { DARABONBA_PTR_SET_VALUE(vSwitches_, vSwitches) };
    inline DescribeVSwitchesResponseBody& setVSwitches(DescribeVSwitchesResponseBody::VSwitches && vSwitches) { DARABONBA_PTR_SET_RVALUE(vSwitches_, vSwitches) };


  protected:
    // The number of the returned page.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
    // The details about the vSwitch.
    shared_ptr<DescribeVSwitchesResponseBody::VSwitches> vSwitches_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
