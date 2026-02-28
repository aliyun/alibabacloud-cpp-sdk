// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSUBNETSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSUBNETSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eflo20220530
{
namespace Models
{
  class ListSubnetsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSubnetsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListSubnetsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListSubnetsResponseBody() = default ;
    ListSubnetsResponseBody(const ListSubnetsResponseBody &) = default ;
    ListSubnetsResponseBody(ListSubnetsResponseBody &&) = default ;
    ListSubnetsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSubnetsResponseBody() = default ;
    ListSubnetsResponseBody& operator=(const ListSubnetsResponseBody &) = default ;
    ListSubnetsResponseBody& operator=(ListSubnetsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Content : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Content& obj) { 
        DARABONBA_PTR_TO_JSON(Data, data_);
        DARABONBA_PTR_TO_JSON(Total, total_);
      };
      friend void from_json(const Darabonba::Json& j, Content& obj) { 
        DARABONBA_PTR_FROM_JSON(Data, data_);
        DARABONBA_PTR_FROM_JSON(Total, total_);
      };
      Content() = default ;
      Content(const Content &) = default ;
      Content(Content &&) = default ;
      Content(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Content() = default ;
      Content& operator=(const Content &) = default ;
      Content& operator=(Content &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Data : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Data& obj) { 
          DARABONBA_PTR_TO_JSON(Cidr, cidr_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_TO_JSON(Message, message_);
          DARABONBA_PTR_TO_JSON(NcCount, ncCount_);
          DARABONBA_PTR_TO_JSON(NetworkInterfaceCount, networkInterfaceCount_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(SubnetId, subnetId_);
          DARABONBA_PTR_TO_JSON(SubnetName, subnetName_);
          DARABONBA_PTR_TO_JSON(Tags, tags_);
          DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
          DARABONBA_PTR_TO_JSON(Type, type_);
          DARABONBA_PTR_TO_JSON(VpdBaseInfo, vpdBaseInfo_);
          DARABONBA_PTR_TO_JSON(VpdId, vpdId_);
          DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
        };
        friend void from_json(const Darabonba::Json& j, Data& obj) { 
          DARABONBA_PTR_FROM_JSON(Cidr, cidr_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_FROM_JSON(Message, message_);
          DARABONBA_PTR_FROM_JSON(NcCount, ncCount_);
          DARABONBA_PTR_FROM_JSON(NetworkInterfaceCount, networkInterfaceCount_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(SubnetId, subnetId_);
          DARABONBA_PTR_FROM_JSON(SubnetName, subnetName_);
          DARABONBA_PTR_FROM_JSON(Tags, tags_);
          DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
          DARABONBA_PTR_FROM_JSON(VpdBaseInfo, vpdBaseInfo_);
          DARABONBA_PTR_FROM_JSON(VpdId, vpdId_);
          DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
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
        class VpdBaseInfo : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const VpdBaseInfo& obj) { 
            DARABONBA_PTR_TO_JSON(Cidr, cidr_);
            DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
            DARABONBA_PTR_TO_JSON(VpdId, vpdId_);
            DARABONBA_PTR_TO_JSON(VpdName, vpdName_);
          };
          friend void from_json(const Darabonba::Json& j, VpdBaseInfo& obj) { 
            DARABONBA_PTR_FROM_JSON(Cidr, cidr_);
            DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
            DARABONBA_PTR_FROM_JSON(VpdId, vpdId_);
            DARABONBA_PTR_FROM_JSON(VpdName, vpdName_);
          };
          VpdBaseInfo() = default ;
          VpdBaseInfo(const VpdBaseInfo &) = default ;
          VpdBaseInfo(VpdBaseInfo &&) = default ;
          VpdBaseInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~VpdBaseInfo() = default ;
          VpdBaseInfo& operator=(const VpdBaseInfo &) = default ;
          VpdBaseInfo& operator=(VpdBaseInfo &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->cidr_ == nullptr
        && this->createTime_ == nullptr && this->vpdId_ == nullptr && this->vpdName_ == nullptr; };
          // cidr Field Functions 
          bool hasCidr() const { return this->cidr_ != nullptr;};
          void deleteCidr() { this->cidr_ = nullptr;};
          inline string getCidr() const { DARABONBA_PTR_GET_DEFAULT(cidr_, "") };
          inline VpdBaseInfo& setCidr(string cidr) { DARABONBA_PTR_SET_VALUE(cidr_, cidr) };


          // createTime Field Functions 
          bool hasCreateTime() const { return this->createTime_ != nullptr;};
          void deleteCreateTime() { this->createTime_ = nullptr;};
          inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
          inline VpdBaseInfo& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


          // vpdId Field Functions 
          bool hasVpdId() const { return this->vpdId_ != nullptr;};
          void deleteVpdId() { this->vpdId_ = nullptr;};
          inline string getVpdId() const { DARABONBA_PTR_GET_DEFAULT(vpdId_, "") };
          inline VpdBaseInfo& setVpdId(string vpdId) { DARABONBA_PTR_SET_VALUE(vpdId_, vpdId) };


          // vpdName Field Functions 
          bool hasVpdName() const { return this->vpdName_ != nullptr;};
          void deleteVpdName() { this->vpdName_ = nullptr;};
          inline string getVpdName() const { DARABONBA_PTR_GET_DEFAULT(vpdName_, "") };
          inline VpdBaseInfo& setVpdName(string vpdName) { DARABONBA_PTR_SET_VALUE(vpdName_, vpdName) };


        protected:
          // The CIDR block of the VPD.
          // 
          // *   We recommend that you use an RFC private endpoint as the Lingjun CIDR block, such as 10.0.0.0/8,172.16.0.0/12,192.168.0.0/16. In scenarios where the Doringjun CIDR block is connected to each other or where the Lingjun CIDR block is connected to a VPC, make sure that the addresses do not conflict with each other.
          // *   You can also use a custom CIDR block other than 100.64.0.0/10, 224.0.0.0/4, 127.0.0.0/8, or 169.254.0.0/16 and their subnets as the primary IPv4 CIDR block of the VPD.
          shared_ptr<string> cidr_ {};
          // The time when the data address was created.
          shared_ptr<string> createTime_ {};
          // Lingjun CIDR block instance ID
          shared_ptr<string> vpdId_ {};
          // Lingjun CIDR block instance name
          shared_ptr<string> vpdName_ {};
        };

        class Tags : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Tags& obj) { 
            DARABONBA_PTR_TO_JSON(TagKey, tagKey_);
            DARABONBA_PTR_TO_JSON(TagValue, tagValue_);
          };
          friend void from_json(const Darabonba::Json& j, Tags& obj) { 
            DARABONBA_PTR_FROM_JSON(TagKey, tagKey_);
            DARABONBA_PTR_FROM_JSON(TagValue, tagValue_);
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
          virtual bool empty() const override { return this->tagKey_ == nullptr
        && this->tagValue_ == nullptr; };
          // tagKey Field Functions 
          bool hasTagKey() const { return this->tagKey_ != nullptr;};
          void deleteTagKey() { this->tagKey_ = nullptr;};
          inline string getTagKey() const { DARABONBA_PTR_GET_DEFAULT(tagKey_, "") };
          inline Tags& setTagKey(string tagKey) { DARABONBA_PTR_SET_VALUE(tagKey_, tagKey) };


          // tagValue Field Functions 
          bool hasTagValue() const { return this->tagValue_ != nullptr;};
          void deleteTagValue() { this->tagValue_ = nullptr;};
          inline string getTagValue() const { DARABONBA_PTR_GET_DEFAULT(tagValue_, "") };
          inline Tags& setTagValue(string tagValue) { DARABONBA_PTR_SET_VALUE(tagValue_, tagValue) };


        protected:
          // The tag key.
          // 
          // You cannot specify an empty string as a tag key. It can be up to 64 characters in length and cannot start with aliyun or acs:. It cannot contain http:// or https://.
          // 
          // You can specify at most 20 tag keys in each call.
          shared_ptr<string> tagKey_ {};
          // The value of the tag that is added to the resource.
          // 
          // The tag value can be empty or a string of up to 128 characters. It cannot start with aliyun or acs:, and cannot contain http:// or https://.
          // 
          // Each key-value pair must be unique. You can specify values for at most 20 tag keys in each call.
          shared_ptr<string> tagValue_ {};
        };

        virtual bool empty() const override { return this->cidr_ == nullptr
        && this->createTime_ == nullptr && this->gmtModified_ == nullptr && this->message_ == nullptr && this->ncCount_ == nullptr && this->networkInterfaceCount_ == nullptr
        && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr && this->status_ == nullptr && this->subnetId_ == nullptr && this->subnetName_ == nullptr
        && this->tags_ == nullptr && this->tenantId_ == nullptr && this->type_ == nullptr && this->vpdBaseInfo_ == nullptr && this->vpdId_ == nullptr
        && this->zoneId_ == nullptr; };
        // cidr Field Functions 
        bool hasCidr() const { return this->cidr_ != nullptr;};
        void deleteCidr() { this->cidr_ = nullptr;};
        inline string getCidr() const { DARABONBA_PTR_GET_DEFAULT(cidr_, "") };
        inline Data& setCidr(string cidr) { DARABONBA_PTR_SET_VALUE(cidr_, cidr) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline Data& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // gmtModified Field Functions 
        bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
        void deleteGmtModified() { this->gmtModified_ = nullptr;};
        inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
        inline Data& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


        // message Field Functions 
        bool hasMessage() const { return this->message_ != nullptr;};
        void deleteMessage() { this->message_ = nullptr;};
        inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
        inline Data& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


        // ncCount Field Functions 
        bool hasNcCount() const { return this->ncCount_ != nullptr;};
        void deleteNcCount() { this->ncCount_ = nullptr;};
        inline int32_t getNcCount() const { DARABONBA_PTR_GET_DEFAULT(ncCount_, 0) };
        inline Data& setNcCount(int32_t ncCount) { DARABONBA_PTR_SET_VALUE(ncCount_, ncCount) };


        // networkInterfaceCount Field Functions 
        bool hasNetworkInterfaceCount() const { return this->networkInterfaceCount_ != nullptr;};
        void deleteNetworkInterfaceCount() { this->networkInterfaceCount_ = nullptr;};
        inline int32_t getNetworkInterfaceCount() const { DARABONBA_PTR_GET_DEFAULT(networkInterfaceCount_, 0) };
        inline Data& setNetworkInterfaceCount(int32_t networkInterfaceCount) { DARABONBA_PTR_SET_VALUE(networkInterfaceCount_, networkInterfaceCount) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline Data& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // resourceGroupId Field Functions 
        bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
        void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
        inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
        inline Data& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // subnetId Field Functions 
        bool hasSubnetId() const { return this->subnetId_ != nullptr;};
        void deleteSubnetId() { this->subnetId_ = nullptr;};
        inline string getSubnetId() const { DARABONBA_PTR_GET_DEFAULT(subnetId_, "") };
        inline Data& setSubnetId(string subnetId) { DARABONBA_PTR_SET_VALUE(subnetId_, subnetId) };


        // subnetName Field Functions 
        bool hasSubnetName() const { return this->subnetName_ != nullptr;};
        void deleteSubnetName() { this->subnetName_ = nullptr;};
        inline string getSubnetName() const { DARABONBA_PTR_GET_DEFAULT(subnetName_, "") };
        inline Data& setSubnetName(string subnetName) { DARABONBA_PTR_SET_VALUE(subnetName_, subnetName) };


        // tags Field Functions 
        bool hasTags() const { return this->tags_ != nullptr;};
        void deleteTags() { this->tags_ = nullptr;};
        inline const vector<Data::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Data::Tags>) };
        inline vector<Data::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<Data::Tags>) };
        inline Data& setTags(const vector<Data::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
        inline Data& setTags(vector<Data::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


        // tenantId Field Functions 
        bool hasTenantId() const { return this->tenantId_ != nullptr;};
        void deleteTenantId() { this->tenantId_ = nullptr;};
        inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
        inline Data& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Data& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // vpdBaseInfo Field Functions 
        bool hasVpdBaseInfo() const { return this->vpdBaseInfo_ != nullptr;};
        void deleteVpdBaseInfo() { this->vpdBaseInfo_ = nullptr;};
        inline const Data::VpdBaseInfo & getVpdBaseInfo() const { DARABONBA_PTR_GET_CONST(vpdBaseInfo_, Data::VpdBaseInfo) };
        inline Data::VpdBaseInfo getVpdBaseInfo() { DARABONBA_PTR_GET(vpdBaseInfo_, Data::VpdBaseInfo) };
        inline Data& setVpdBaseInfo(const Data::VpdBaseInfo & vpdBaseInfo) { DARABONBA_PTR_SET_VALUE(vpdBaseInfo_, vpdBaseInfo) };
        inline Data& setVpdBaseInfo(Data::VpdBaseInfo && vpdBaseInfo) { DARABONBA_PTR_SET_RVALUE(vpdBaseInfo_, vpdBaseInfo) };


        // vpdId Field Functions 
        bool hasVpdId() const { return this->vpdId_ != nullptr;};
        void deleteVpdId() { this->vpdId_ = nullptr;};
        inline string getVpdId() const { DARABONBA_PTR_GET_DEFAULT(vpdId_, "") };
        inline Data& setVpdId(string vpdId) { DARABONBA_PTR_SET_VALUE(vpdId_, vpdId) };


        // zoneId Field Functions 
        bool hasZoneId() const { return this->zoneId_ != nullptr;};
        void deleteZoneId() { this->zoneId_ = nullptr;};
        inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
        inline Data& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


      protected:
        // The CIDR block of the Subnet.
        // 
        // *   The network segment of the subnet must be a proper subset of the network segment of Lingjun to which it belongs, and the mask must be between 16 bits and 29 bits, which can provide 8 to 65536 addresses. For example, the CIDR block of the Lingjun CIDR block is 192.168.0.0/16, and the CIDR blocks of the subnets under the Lingjun CIDR block are 192.168.0.0/17 to 192.168.0.0/29.
        // *   The first and last three IP addresses of each subnet segment are reserved by the system. For example, the CIDR blocks of the subnet are 192.168.1.0/24,192.168.1.0, 192.168.1.253, 192.168.1.254, and 192.168.1.255.
        shared_ptr<string> cidr_ {};
        // The time when the data address was created.
        shared_ptr<string> createTime_ {};
        // The time when the agent was last modified.
        shared_ptr<string> gmtModified_ {};
        // The error message. (If the instance is in the Exception state, the exception cause is prompted.)
        shared_ptr<string> message_ {};
        // Number of NCs
        shared_ptr<int32_t> ncCount_ {};
        // Number of Lingjun network interface controller
        shared_ptr<int32_t> networkInterfaceCount_ {};
        // The region ID.
        shared_ptr<string> regionId_ {};
        // The ID of your Alibaba Cloud resource group.
        // 
        // For more information about resource groups, see [Resource groups](https://help.aliyun.com/document_detail/94475.htm?spm=a2c4g.11186623.0.0.29e15d7akXhpuu).
        shared_ptr<string> resourceGroupId_ {};
        // The status of the cache reserve instance. Valid values:
        // 
        // *   **Available**: Normal
        // *   **Not Available**: Unavailable
        // *   **Executing**: Executing
        // *   **Deleting**: The node is being deleted.
        shared_ptr<string> status_ {};
        // Lingjun subnet instance ID
        shared_ptr<string> subnetId_ {};
        // Lingjun subnet instance name
        shared_ptr<string> subnetName_ {};
        // The tag information.
        // 
        // You can specify up to 20 tags.
        shared_ptr<vector<Data::Tags>> tags_ {};
        // The ID of the tenant.
        shared_ptr<string> tenantId_ {};
        // Lingjun Subnet Usage Type; optional; optional. Valid values:
        // 
        // *   **If you do not set this field for a common type**
        // *   **OOB** :OOB type
        // *   **LB**: LB type
        shared_ptr<string> type_ {};
        // vpd basic information
        shared_ptr<Data::VpdBaseInfo> vpdBaseInfo_ {};
        // The ID of the Lingjun CIDR block.
        shared_ptr<string> vpdId_ {};
        // The zone ID.
        shared_ptr<string> zoneId_ {};
      };

      virtual bool empty() const override { return this->data_ == nullptr
        && this->total_ == nullptr; };
      // data Field Functions 
      bool hasData() const { return this->data_ != nullptr;};
      void deleteData() { this->data_ = nullptr;};
      inline const vector<Content::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<Content::Data>) };
      inline vector<Content::Data> getData() { DARABONBA_PTR_GET(data_, vector<Content::Data>) };
      inline Content& setData(const vector<Content::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
      inline Content& setData(vector<Content::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


      // total Field Functions 
      bool hasTotal() const { return this->total_ != nullptr;};
      void deleteTotal() { this->total_ = nullptr;};
      inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
      inline Content& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    protected:
      // Lingjun subnet information list
      shared_ptr<vector<Content::Data>> data_ {};
      // The total number of entries returned.
      shared_ptr<int64_t> total_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->content_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline ListSubnetsResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline ListSubnetsResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline const ListSubnetsResponseBody::Content & getContent() const { DARABONBA_PTR_GET_CONST(content_, ListSubnetsResponseBody::Content) };
    inline ListSubnetsResponseBody::Content getContent() { DARABONBA_PTR_GET(content_, ListSubnetsResponseBody::Content) };
    inline ListSubnetsResponseBody& setContent(const ListSubnetsResponseBody::Content & content) { DARABONBA_PTR_SET_VALUE(content_, content) };
    inline ListSubnetsResponseBody& setContent(ListSubnetsResponseBody::Content && content) { DARABONBA_PTR_SET_RVALUE(content_, content) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListSubnetsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSubnetsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details about the access denial.
    shared_ptr<string> accessDeniedDetail_ {};
    // The response status code.
    shared_ptr<int32_t> code_ {};
    // The response parameters.
    shared_ptr<ListSubnetsResponseBody::Content> content_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // Request ID of the current request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eflo20220530
#endif
