// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVPDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETVPDRESPONSEBODY_HPP_
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
  class GetVpdResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVpdResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetVpdResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetVpdResponseBody() = default ;
    GetVpdResponseBody(const GetVpdResponseBody &) = default ;
    GetVpdResponseBody(GetVpdResponseBody &&) = default ;
    GetVpdResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVpdResponseBody() = default ;
    GetVpdResponseBody& operator=(const GetVpdResponseBody &) = default ;
    GetVpdResponseBody& operator=(GetVpdResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Content : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Content& obj) { 
        DARABONBA_PTR_TO_JSON(AttachErStatus, attachErStatus_);
        DARABONBA_PTR_TO_JSON(Cidr, cidr_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(ErInfos, erInfos_);
        DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(Message, message_);
        DARABONBA_PTR_TO_JSON(NcCount, ncCount_);
        DARABONBA_PTR_TO_JSON(NetworkInterfaceCount, networkInterfaceCount_);
        DARABONBA_PTR_TO_JSON(PrivateIpCount, privateIpCount_);
        DARABONBA_PTR_TO_JSON(Quota, quota_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_TO_JSON(SecondaryCidrBlocks, secondaryCidrBlocks_);
        DARABONBA_PTR_TO_JSON(ServiceCidr, serviceCidr_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(SubnetCount, subnetCount_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
        DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
        DARABONBA_PTR_TO_JSON(VpdId, vpdId_);
        DARABONBA_PTR_TO_JSON(VpdName, vpdName_);
      };
      friend void from_json(const Darabonba::Json& j, Content& obj) { 
        DARABONBA_PTR_FROM_JSON(AttachErStatus, attachErStatus_);
        DARABONBA_PTR_FROM_JSON(Cidr, cidr_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(ErInfos, erInfos_);
        DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(Message, message_);
        DARABONBA_PTR_FROM_JSON(NcCount, ncCount_);
        DARABONBA_PTR_FROM_JSON(NetworkInterfaceCount, networkInterfaceCount_);
        DARABONBA_PTR_FROM_JSON(PrivateIpCount, privateIpCount_);
        DARABONBA_PTR_FROM_JSON(Quota, quota_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_FROM_JSON(SecondaryCidrBlocks, secondaryCidrBlocks_);
        DARABONBA_PTR_FROM_JSON(ServiceCidr, serviceCidr_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(SubnetCount, subnetCount_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
        DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
        DARABONBA_PTR_FROM_JSON(VpdId, vpdId_);
        DARABONBA_PTR_FROM_JSON(VpdName, vpdName_);
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

      class ErInfos : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ErInfos& obj) { 
          DARABONBA_PTR_TO_JSON(Connections, connections_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(ErId, erId_);
          DARABONBA_PTR_TO_JSON(ErName, erName_);
          DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_TO_JSON(MasterZoneId, masterZoneId_);
          DARABONBA_PTR_TO_JSON(Message, message_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(RouteMaps, routeMaps_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
        };
        friend void from_json(const Darabonba::Json& j, ErInfos& obj) { 
          DARABONBA_PTR_FROM_JSON(Connections, connections_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(ErId, erId_);
          DARABONBA_PTR_FROM_JSON(ErName, erName_);
          DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_FROM_JSON(MasterZoneId, masterZoneId_);
          DARABONBA_PTR_FROM_JSON(Message, message_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(RouteMaps, routeMaps_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
        };
        ErInfos() = default ;
        ErInfos(const ErInfos &) = default ;
        ErInfos(ErInfos &&) = default ;
        ErInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ErInfos() = default ;
        ErInfos& operator=(const ErInfos &) = default ;
        ErInfos& operator=(ErInfos &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->connections_ == nullptr
        && this->createTime_ == nullptr && this->description_ == nullptr && this->erId_ == nullptr && this->erName_ == nullptr && this->gmtModified_ == nullptr
        && this->masterZoneId_ == nullptr && this->message_ == nullptr && this->regionId_ == nullptr && this->routeMaps_ == nullptr && this->status_ == nullptr
        && this->tenantId_ == nullptr; };
        // connections Field Functions 
        bool hasConnections() const { return this->connections_ != nullptr;};
        void deleteConnections() { this->connections_ = nullptr;};
        inline int64_t getConnections() const { DARABONBA_PTR_GET_DEFAULT(connections_, 0L) };
        inline ErInfos& setConnections(int64_t connections) { DARABONBA_PTR_SET_VALUE(connections_, connections) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline ErInfos& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline ErInfos& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // erId Field Functions 
        bool hasErId() const { return this->erId_ != nullptr;};
        void deleteErId() { this->erId_ = nullptr;};
        inline string getErId() const { DARABONBA_PTR_GET_DEFAULT(erId_, "") };
        inline ErInfos& setErId(string erId) { DARABONBA_PTR_SET_VALUE(erId_, erId) };


        // erName Field Functions 
        bool hasErName() const { return this->erName_ != nullptr;};
        void deleteErName() { this->erName_ = nullptr;};
        inline string getErName() const { DARABONBA_PTR_GET_DEFAULT(erName_, "") };
        inline ErInfos& setErName(string erName) { DARABONBA_PTR_SET_VALUE(erName_, erName) };


        // gmtModified Field Functions 
        bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
        void deleteGmtModified() { this->gmtModified_ = nullptr;};
        inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
        inline ErInfos& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


        // masterZoneId Field Functions 
        bool hasMasterZoneId() const { return this->masterZoneId_ != nullptr;};
        void deleteMasterZoneId() { this->masterZoneId_ = nullptr;};
        inline string getMasterZoneId() const { DARABONBA_PTR_GET_DEFAULT(masterZoneId_, "") };
        inline ErInfos& setMasterZoneId(string masterZoneId) { DARABONBA_PTR_SET_VALUE(masterZoneId_, masterZoneId) };


        // message Field Functions 
        bool hasMessage() const { return this->message_ != nullptr;};
        void deleteMessage() { this->message_ = nullptr;};
        inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
        inline ErInfos& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline ErInfos& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // routeMaps Field Functions 
        bool hasRouteMaps() const { return this->routeMaps_ != nullptr;};
        void deleteRouteMaps() { this->routeMaps_ = nullptr;};
        inline int64_t getRouteMaps() const { DARABONBA_PTR_GET_DEFAULT(routeMaps_, 0L) };
        inline ErInfos& setRouteMaps(int64_t routeMaps) { DARABONBA_PTR_SET_VALUE(routeMaps_, routeMaps) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline ErInfos& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // tenantId Field Functions 
        bool hasTenantId() const { return this->tenantId_ != nullptr;};
        void deleteTenantId() { this->tenantId_ = nullptr;};
        inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
        inline ErInfos& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


      protected:
        // The number of connections.
        shared_ptr<int64_t> connections_ {};
        // The time when the activation code was created.
        shared_ptr<string> createTime_ {};
        // The description of the synchronization task.
        shared_ptr<string> description_ {};
        // The ID of the Elastic Router (ER) instance.
        shared_ptr<string> erId_ {};
        // Elastic Router (ER) Instance Name
        shared_ptr<string> erName_ {};
        // The time when the O\\&M task was modified.
        shared_ptr<string> gmtModified_ {};
        // The primary zone.
        shared_ptr<string> masterZoneId_ {};
        // The returned message.
        shared_ptr<string> message_ {};
        // The ID of the region to which the Elastic Router (ER) belongs.
        shared_ptr<string> regionId_ {};
        // The number of routing policy.
        shared_ptr<int64_t> routeMaps_ {};
        // The task status.
        shared_ptr<string> status_ {};
        // The tenant ID.
        shared_ptr<string> tenantId_ {};
      };

      virtual bool empty() const override { return this->attachErStatus_ == nullptr
        && this->cidr_ == nullptr && this->createTime_ == nullptr && this->erInfos_ == nullptr && this->gmtModified_ == nullptr && this->message_ == nullptr
        && this->ncCount_ == nullptr && this->networkInterfaceCount_ == nullptr && this->privateIpCount_ == nullptr && this->quota_ == nullptr && this->regionId_ == nullptr
        && this->resourceGroupId_ == nullptr && this->secondaryCidrBlocks_ == nullptr && this->serviceCidr_ == nullptr && this->status_ == nullptr && this->subnetCount_ == nullptr
        && this->tags_ == nullptr && this->tenantId_ == nullptr && this->vpdId_ == nullptr && this->vpdName_ == nullptr; };
      // attachErStatus Field Functions 
      bool hasAttachErStatus() const { return this->attachErStatus_ != nullptr;};
      void deleteAttachErStatus() { this->attachErStatus_ = nullptr;};
      inline bool getAttachErStatus() const { DARABONBA_PTR_GET_DEFAULT(attachErStatus_, false) };
      inline Content& setAttachErStatus(bool attachErStatus) { DARABONBA_PTR_SET_VALUE(attachErStatus_, attachErStatus) };


      // cidr Field Functions 
      bool hasCidr() const { return this->cidr_ != nullptr;};
      void deleteCidr() { this->cidr_ = nullptr;};
      inline string getCidr() const { DARABONBA_PTR_GET_DEFAULT(cidr_, "") };
      inline Content& setCidr(string cidr) { DARABONBA_PTR_SET_VALUE(cidr_, cidr) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Content& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // erInfos Field Functions 
      bool hasErInfos() const { return this->erInfos_ != nullptr;};
      void deleteErInfos() { this->erInfos_ = nullptr;};
      inline const vector<Content::ErInfos> & getErInfos() const { DARABONBA_PTR_GET_CONST(erInfos_, vector<Content::ErInfos>) };
      inline vector<Content::ErInfos> getErInfos() { DARABONBA_PTR_GET(erInfos_, vector<Content::ErInfos>) };
      inline Content& setErInfos(const vector<Content::ErInfos> & erInfos) { DARABONBA_PTR_SET_VALUE(erInfos_, erInfos) };
      inline Content& setErInfos(vector<Content::ErInfos> && erInfos) { DARABONBA_PTR_SET_RVALUE(erInfos_, erInfos) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
      inline Content& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline Content& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      // ncCount Field Functions 
      bool hasNcCount() const { return this->ncCount_ != nullptr;};
      void deleteNcCount() { this->ncCount_ = nullptr;};
      inline int32_t getNcCount() const { DARABONBA_PTR_GET_DEFAULT(ncCount_, 0) };
      inline Content& setNcCount(int32_t ncCount) { DARABONBA_PTR_SET_VALUE(ncCount_, ncCount) };


      // networkInterfaceCount Field Functions 
      bool hasNetworkInterfaceCount() const { return this->networkInterfaceCount_ != nullptr;};
      void deleteNetworkInterfaceCount() { this->networkInterfaceCount_ = nullptr;};
      inline int32_t getNetworkInterfaceCount() const { DARABONBA_PTR_GET_DEFAULT(networkInterfaceCount_, 0) };
      inline Content& setNetworkInterfaceCount(int32_t networkInterfaceCount) { DARABONBA_PTR_SET_VALUE(networkInterfaceCount_, networkInterfaceCount) };


      // privateIpCount Field Functions 
      bool hasPrivateIpCount() const { return this->privateIpCount_ != nullptr;};
      void deletePrivateIpCount() { this->privateIpCount_ = nullptr;};
      inline int64_t getPrivateIpCount() const { DARABONBA_PTR_GET_DEFAULT(privateIpCount_, 0L) };
      inline Content& setPrivateIpCount(int64_t privateIpCount) { DARABONBA_PTR_SET_VALUE(privateIpCount_, privateIpCount) };


      // quota Field Functions 
      bool hasQuota() const { return this->quota_ != nullptr;};
      void deleteQuota() { this->quota_ = nullptr;};
      inline int32_t getQuota() const { DARABONBA_PTR_GET_DEFAULT(quota_, 0) };
      inline Content& setQuota(int32_t quota) { DARABONBA_PTR_SET_VALUE(quota_, quota) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Content& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline Content& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // secondaryCidrBlocks Field Functions 
      bool hasSecondaryCidrBlocks() const { return this->secondaryCidrBlocks_ != nullptr;};
      void deleteSecondaryCidrBlocks() { this->secondaryCidrBlocks_ = nullptr;};
      inline const vector<string> & getSecondaryCidrBlocks() const { DARABONBA_PTR_GET_CONST(secondaryCidrBlocks_, vector<string>) };
      inline vector<string> getSecondaryCidrBlocks() { DARABONBA_PTR_GET(secondaryCidrBlocks_, vector<string>) };
      inline Content& setSecondaryCidrBlocks(const vector<string> & secondaryCidrBlocks) { DARABONBA_PTR_SET_VALUE(secondaryCidrBlocks_, secondaryCidrBlocks) };
      inline Content& setSecondaryCidrBlocks(vector<string> && secondaryCidrBlocks) { DARABONBA_PTR_SET_RVALUE(secondaryCidrBlocks_, secondaryCidrBlocks) };


      // serviceCidr Field Functions 
      bool hasServiceCidr() const { return this->serviceCidr_ != nullptr;};
      void deleteServiceCidr() { this->serviceCidr_ = nullptr;};
      inline string getServiceCidr() const { DARABONBA_PTR_GET_DEFAULT(serviceCidr_, "") };
      inline Content& setServiceCidr(string serviceCidr) { DARABONBA_PTR_SET_VALUE(serviceCidr_, serviceCidr) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Content& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // subnetCount Field Functions 
      bool hasSubnetCount() const { return this->subnetCount_ != nullptr;};
      void deleteSubnetCount() { this->subnetCount_ = nullptr;};
      inline int64_t getSubnetCount() const { DARABONBA_PTR_GET_DEFAULT(subnetCount_, 0L) };
      inline Content& setSubnetCount(int64_t subnetCount) { DARABONBA_PTR_SET_VALUE(subnetCount_, subnetCount) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<Content::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Content::Tags>) };
      inline vector<Content::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<Content::Tags>) };
      inline Content& setTags(const vector<Content::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline Content& setTags(vector<Content::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      // tenantId Field Functions 
      bool hasTenantId() const { return this->tenantId_ != nullptr;};
      void deleteTenantId() { this->tenantId_ = nullptr;};
      inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
      inline Content& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


      // vpdId Field Functions 
      bool hasVpdId() const { return this->vpdId_ != nullptr;};
      void deleteVpdId() { this->vpdId_ = nullptr;};
      inline string getVpdId() const { DARABONBA_PTR_GET_DEFAULT(vpdId_, "") };
      inline Content& setVpdId(string vpdId) { DARABONBA_PTR_SET_VALUE(vpdId_, vpdId) };


      // vpdName Field Functions 
      bool hasVpdName() const { return this->vpdName_ != nullptr;};
      void deleteVpdName() { this->vpdName_ = nullptr;};
      inline string getVpdName() const { DARABONBA_PTR_GET_DEFAULT(vpdName_, "") };
      inline Content& setVpdName(string vpdName) { DARABONBA_PTR_SET_VALUE(vpdName_, vpdName) };


    protected:
      // Whether the Lingjun HUB(ER) has been bound.
      // 
      // *   **true**: ER is bound.
      // *   **false**: No ER is bound.
      shared_ptr<bool> attachErStatus_ {};
      // The CIDR block.
      shared_ptr<string> cidr_ {};
      // The time when the activation code was created.
      shared_ptr<string> createTime_ {};
      // The information of the bound Lingjun HUB(ER).
      shared_ptr<vector<Content::ErInfos>> erInfos_ {};
      // The time when the O\\&M task was modified.
      shared_ptr<string> gmtModified_ {};
      // The error message. (If the instance is in the Exception state, the exception cause is prompted.)
      shared_ptr<string> message_ {};
      // The number of NCs.
      shared_ptr<int32_t> ncCount_ {};
      // Number of Lingjun network interface controller.
      shared_ptr<int32_t> networkInterfaceCount_ {};
      // The total number of secondary private IP addresses.
      shared_ptr<int64_t> privateIpCount_ {};
      // The total quota information.
      shared_ptr<int32_t> quota_ {};
      // The region ID.
      shared_ptr<string> regionId_ {};
      // The ID of your Alibaba Cloud resource group.
      // 
      // For more information about resource groups, see [Resource groups](https://help.aliyun.com/document_detail/94475.htm?spm=a2c4g.11186623.0.0.29e15d7akXhpuu).
      shared_ptr<string> resourceGroupId_ {};
      // The list of additional CIDR blocks.
      shared_ptr<vector<string>> secondaryCidrBlocks_ {};
      // Internal Service CIDR block.
      shared_ptr<string> serviceCidr_ {};
      // The current state of the instance.
      // 
      // Valid value:
      // 
      // *   Not Available: Not Available.
      // *   Available: Normal: Available: Normal.
      // *   Deleting: Deleting: Deleting: Deleting.
      // *   Executing: executing: Executing: executing.
      shared_ptr<string> status_ {};
      // The number of subnets.
      shared_ptr<int64_t> subnetCount_ {};
      // The tag information.
      // 
      // You can specify up to 20 tags.
      shared_ptr<vector<Content::Tags>> tags_ {};
      // The tenant ID.
      shared_ptr<string> tenantId_ {};
      // The ID of the VPD instance.
      shared_ptr<string> vpdId_ {};
      // The name of the Lingjun CIDR block.
      shared_ptr<string> vpdName_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->content_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline GetVpdResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline GetVpdResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline const GetVpdResponseBody::Content & getContent() const { DARABONBA_PTR_GET_CONST(content_, GetVpdResponseBody::Content) };
    inline GetVpdResponseBody::Content getContent() { DARABONBA_PTR_GET(content_, GetVpdResponseBody::Content) };
    inline GetVpdResponseBody& setContent(const GetVpdResponseBody::Content & content) { DARABONBA_PTR_SET_VALUE(content_, content) };
    inline GetVpdResponseBody& setContent(GetVpdResponseBody::Content && content) { DARABONBA_PTR_SET_RVALUE(content_, content) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetVpdResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetVpdResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details about the access denial.
    shared_ptr<string> accessDeniedDetail_ {};
    // The response status code.
    shared_ptr<int32_t> code_ {};
    // The data returned.
    shared_ptr<GetVpdResponseBody::Content> content_ {};
    // The additional information that is returned.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eflo20220530
#endif
