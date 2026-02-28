// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVPDSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTVPDSRESPONSEBODY_HPP_
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
  class ListVpdsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVpdsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListVpdsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListVpdsResponseBody() = default ;
    ListVpdsResponseBody(const ListVpdsResponseBody &) = default ;
    ListVpdsResponseBody(ListVpdsResponseBody &&) = default ;
    ListVpdsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVpdsResponseBody() = default ;
    ListVpdsResponseBody& operator=(const ListVpdsResponseBody &) = default ;
    ListVpdsResponseBody& operator=(ListVpdsResponseBody &&) = default ;
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
          DARABONBA_ANY_TO_JSON(Dependence, dependence_);
          DARABONBA_PTR_TO_JSON(ErInfos, erInfos_);
          DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_TO_JSON(Message, message_);
          DARABONBA_PTR_TO_JSON(NcCount, ncCount_);
          DARABONBA_PTR_TO_JSON(NetworkInterfaceCount, networkInterfaceCount_);
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
        friend void from_json(const Darabonba::Json& j, Data& obj) { 
          DARABONBA_PTR_FROM_JSON(Cidr, cidr_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_ANY_FROM_JSON(Dependence, dependence_);
          DARABONBA_PTR_FROM_JSON(ErInfos, erInfos_);
          DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_FROM_JSON(Message, message_);
          DARABONBA_PTR_FROM_JSON(NcCount, ncCount_);
          DARABONBA_PTR_FROM_JSON(NetworkInterfaceCount, networkInterfaceCount_);
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
          // The name of the Lingjun HUB(ER) instance.
          shared_ptr<string> erName_ {};
          // The time when the O\\&M task was modified.
          shared_ptr<string> gmtModified_ {};
          // The primary zone.
          shared_ptr<string> masterZoneId_ {};
          // The returned message.
          shared_ptr<string> message_ {};
          // The supported region.
          shared_ptr<string> regionId_ {};
          // The number of routing policy.
          shared_ptr<int64_t> routeMaps_ {};
          // The task status.
          shared_ptr<string> status_ {};
          // The tenant ID.
          shared_ptr<string> tenantId_ {};
        };

        virtual bool empty() const override { return this->cidr_ == nullptr
        && this->createTime_ == nullptr && this->dependence_ == nullptr && this->erInfos_ == nullptr && this->gmtModified_ == nullptr && this->message_ == nullptr
        && this->ncCount_ == nullptr && this->networkInterfaceCount_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr && this->secondaryCidrBlocks_ == nullptr
        && this->serviceCidr_ == nullptr && this->status_ == nullptr && this->subnetCount_ == nullptr && this->tags_ == nullptr && this->tenantId_ == nullptr
        && this->vpdId_ == nullptr && this->vpdName_ == nullptr; };
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


        // dependence Field Functions 
        bool hasDependence() const { return this->dependence_ != nullptr;};
        void deleteDependence() { this->dependence_ = nullptr;};
        inline         const Darabonba::Json & getDependence() const { DARABONBA_GET(dependence_) };
        Darabonba::Json & getDependence() { DARABONBA_GET(dependence_) };
        inline Data& setDependence(const Darabonba::Json & dependence) { DARABONBA_SET_VALUE(dependence_, dependence) };
        inline Data& setDependence(Darabonba::Json && dependence) { DARABONBA_SET_RVALUE(dependence_, dependence) };


        // erInfos Field Functions 
        bool hasErInfos() const { return this->erInfos_ != nullptr;};
        void deleteErInfos() { this->erInfos_ = nullptr;};
        inline const vector<Data::ErInfos> & getErInfos() const { DARABONBA_PTR_GET_CONST(erInfos_, vector<Data::ErInfos>) };
        inline vector<Data::ErInfos> getErInfos() { DARABONBA_PTR_GET(erInfos_, vector<Data::ErInfos>) };
        inline Data& setErInfos(const vector<Data::ErInfos> & erInfos) { DARABONBA_PTR_SET_VALUE(erInfos_, erInfos) };
        inline Data& setErInfos(vector<Data::ErInfos> && erInfos) { DARABONBA_PTR_SET_RVALUE(erInfos_, erInfos) };


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


        // secondaryCidrBlocks Field Functions 
        bool hasSecondaryCidrBlocks() const { return this->secondaryCidrBlocks_ != nullptr;};
        void deleteSecondaryCidrBlocks() { this->secondaryCidrBlocks_ = nullptr;};
        inline const vector<string> & getSecondaryCidrBlocks() const { DARABONBA_PTR_GET_CONST(secondaryCidrBlocks_, vector<string>) };
        inline vector<string> getSecondaryCidrBlocks() { DARABONBA_PTR_GET(secondaryCidrBlocks_, vector<string>) };
        inline Data& setSecondaryCidrBlocks(const vector<string> & secondaryCidrBlocks) { DARABONBA_PTR_SET_VALUE(secondaryCidrBlocks_, secondaryCidrBlocks) };
        inline Data& setSecondaryCidrBlocks(vector<string> && secondaryCidrBlocks) { DARABONBA_PTR_SET_RVALUE(secondaryCidrBlocks_, secondaryCidrBlocks) };


        // serviceCidr Field Functions 
        bool hasServiceCidr() const { return this->serviceCidr_ != nullptr;};
        void deleteServiceCidr() { this->serviceCidr_ = nullptr;};
        inline string getServiceCidr() const { DARABONBA_PTR_GET_DEFAULT(serviceCidr_, "") };
        inline Data& setServiceCidr(string serviceCidr) { DARABONBA_PTR_SET_VALUE(serviceCidr_, serviceCidr) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // subnetCount Field Functions 
        bool hasSubnetCount() const { return this->subnetCount_ != nullptr;};
        void deleteSubnetCount() { this->subnetCount_ = nullptr;};
        inline int32_t getSubnetCount() const { DARABONBA_PTR_GET_DEFAULT(subnetCount_, 0) };
        inline Data& setSubnetCount(int32_t subnetCount) { DARABONBA_PTR_SET_VALUE(subnetCount_, subnetCount) };


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


        // vpdId Field Functions 
        bool hasVpdId() const { return this->vpdId_ != nullptr;};
        void deleteVpdId() { this->vpdId_ = nullptr;};
        inline string getVpdId() const { DARABONBA_PTR_GET_DEFAULT(vpdId_, "") };
        inline Data& setVpdId(string vpdId) { DARABONBA_PTR_SET_VALUE(vpdId_, vpdId) };


        // vpdName Field Functions 
        bool hasVpdName() const { return this->vpdName_ != nullptr;};
        void deleteVpdName() { this->vpdName_ = nullptr;};
        inline string getVpdName() const { DARABONBA_PTR_GET_DEFAULT(vpdName_, "") };
        inline Data& setVpdName(string vpdName) { DARABONBA_PTR_SET_VALUE(vpdName_, vpdName) };


      protected:
        // The CIDR block of the VPD.
        // 
        // *   We recommend that you use an RFC private endpoint as the Lingjun CIDR block, such as 10.0.0.0/8,172.16.0.0/12,192.168.0.0/16. In scenarios where the Doringjun CIDR block is connected to each other or where the Lingjun CIDR block is connected to a VPC, make sure that the addresses do not conflict with each other.
        // *   You can also use a custom CIDR block other than 100.64.0.0/10, 224.0.0.0/4, 127.0.0.0/8, or 169.254.0.0/16 and their subnets as the primary IPv4 CIDR block of the VPD.
        shared_ptr<string> cidr_ {};
        // The time when the activation code was created.
        shared_ptr<string> createTime_ {};
        // Dependencies.
        Darabonba::Json dependence_ {};
        // The information list of the bound Lingjun HUB(ER).
        shared_ptr<vector<Data::ErInfos>> erInfos_ {};
        // The time when the O\\&M task was modified.
        shared_ptr<string> gmtModified_ {};
        // The returned message.
        shared_ptr<string> message_ {};
        // nc quantity.
        shared_ptr<int32_t> ncCount_ {};
        // Number of Lingjun network interface controller
        shared_ptr<int32_t> networkInterfaceCount_ {};
        // The region ID.
        shared_ptr<string> regionId_ {};
        // The ID of your Alibaba Cloud resource group.
        // 
        // For more information about resource groups, see [Resource groups](https://help.aliyun.com/document_detail/94475.htm?spm=a2c4g.11186623.0.0.29e15d7akXhpuu).
        shared_ptr<string> resourceGroupId_ {};
        // The list of additional CIDR blocks.
        shared_ptr<vector<string>> secondaryCidrBlocks_ {};
        // The Service CIDR block.
        shared_ptr<string> serviceCidr_ {};
        // The task status.
        shared_ptr<string> status_ {};
        // The number of subnets.
        shared_ptr<int32_t> subnetCount_ {};
        // The tag information.
        // 
        // You can specify up to 20 tags.
        shared_ptr<vector<Data::Tags>> tags_ {};
        // The tenant ID.
        shared_ptr<string> tenantId_ {};
        // The ID of the VPD instance.
        shared_ptr<string> vpdId_ {};
        // The name of the VPD.
        shared_ptr<string> vpdName_ {};
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
      // The returned data.
      shared_ptr<vector<Content::Data>> data_ {};
      // The total number of entries that are returned.
      shared_ptr<int64_t> total_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->content_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline ListVpdsResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline ListVpdsResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline const ListVpdsResponseBody::Content & getContent() const { DARABONBA_PTR_GET_CONST(content_, ListVpdsResponseBody::Content) };
    inline ListVpdsResponseBody::Content getContent() { DARABONBA_PTR_GET(content_, ListVpdsResponseBody::Content) };
    inline ListVpdsResponseBody& setContent(const ListVpdsResponseBody::Content & content) { DARABONBA_PTR_SET_VALUE(content_, content) };
    inline ListVpdsResponseBody& setContent(ListVpdsResponseBody::Content && content) { DARABONBA_PTR_SET_RVALUE(content_, content) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListVpdsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListVpdsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details about the access denial.
    shared_ptr<string> accessDeniedDetail_ {};
    // The response status code.
    shared_ptr<int32_t> code_ {};
    // The response data.
    shared_ptr<ListVpdsResponseBody::Content> content_ {};
    // The additional information that is returned.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eflo20220530
#endif
