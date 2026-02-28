// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTELASTICNETWORKINTERFACESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTELASTICNETWORKINTERFACESRESPONSEBODY_HPP_
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
  class ListElasticNetworkInterfacesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListElasticNetworkInterfacesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListElasticNetworkInterfacesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListElasticNetworkInterfacesResponseBody() = default ;
    ListElasticNetworkInterfacesResponseBody(const ListElasticNetworkInterfacesResponseBody &) = default ;
    ListElasticNetworkInterfacesResponseBody(ListElasticNetworkInterfacesResponseBody &&) = default ;
    ListElasticNetworkInterfacesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListElasticNetworkInterfacesResponseBody() = default ;
    ListElasticNetworkInterfacesResponseBody& operator=(const ListElasticNetworkInterfacesResponseBody &) = default ;
    ListElasticNetworkInterfacesResponseBody& operator=(ListElasticNetworkInterfacesResponseBody &&) = default ;
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
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(ElasticNetworkInterfaceId, elasticNetworkInterfaceId_);
          DARABONBA_PTR_TO_JSON(Gateway, gateway_);
          DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_TO_JSON(Ip, ip_);
          DARABONBA_PTR_TO_JSON(Mac, mac_);
          DARABONBA_PTR_TO_JSON(Mask, mask_);
          DARABONBA_PTR_TO_JSON(Message, message_);
          DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(Tags, tags_);
          DARABONBA_PTR_TO_JSON(Type, type_);
          DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
          DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
          DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
        };
        friend void from_json(const Darabonba::Json& j, Data& obj) { 
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(ElasticNetworkInterfaceId, elasticNetworkInterfaceId_);
          DARABONBA_PTR_FROM_JSON(Gateway, gateway_);
          DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_FROM_JSON(Ip, ip_);
          DARABONBA_PTR_FROM_JSON(Mac, mac_);
          DARABONBA_PTR_FROM_JSON(Mask, mask_);
          DARABONBA_PTR_FROM_JSON(Message, message_);
          DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(Tags, tags_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
          DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
          DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
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
          shared_ptr<string> tagKey_ {};
          // Tag value.
          shared_ptr<string> tagValue_ {};
        };

        virtual bool empty() const override { return this->createTime_ == nullptr
        && this->description_ == nullptr && this->elasticNetworkInterfaceId_ == nullptr && this->gateway_ == nullptr && this->gmtModified_ == nullptr && this->ip_ == nullptr
        && this->mac_ == nullptr && this->mask_ == nullptr && this->message_ == nullptr && this->nodeId_ == nullptr && this->regionId_ == nullptr
        && this->resourceGroupId_ == nullptr && this->securityGroupId_ == nullptr && this->status_ == nullptr && this->tags_ == nullptr && this->type_ == nullptr
        && this->vSwitchId_ == nullptr && this->vpcId_ == nullptr && this->zoneId_ == nullptr; };
        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline Data& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline Data& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // elasticNetworkInterfaceId Field Functions 
        bool hasElasticNetworkInterfaceId() const { return this->elasticNetworkInterfaceId_ != nullptr;};
        void deleteElasticNetworkInterfaceId() { this->elasticNetworkInterfaceId_ = nullptr;};
        inline string getElasticNetworkInterfaceId() const { DARABONBA_PTR_GET_DEFAULT(elasticNetworkInterfaceId_, "") };
        inline Data& setElasticNetworkInterfaceId(string elasticNetworkInterfaceId) { DARABONBA_PTR_SET_VALUE(elasticNetworkInterfaceId_, elasticNetworkInterfaceId) };


        // gateway Field Functions 
        bool hasGateway() const { return this->gateway_ != nullptr;};
        void deleteGateway() { this->gateway_ = nullptr;};
        inline string getGateway() const { DARABONBA_PTR_GET_DEFAULT(gateway_, "") };
        inline Data& setGateway(string gateway) { DARABONBA_PTR_SET_VALUE(gateway_, gateway) };


        // gmtModified Field Functions 
        bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
        void deleteGmtModified() { this->gmtModified_ = nullptr;};
        inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
        inline Data& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


        // ip Field Functions 
        bool hasIp() const { return this->ip_ != nullptr;};
        void deleteIp() { this->ip_ = nullptr;};
        inline string getIp() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
        inline Data& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


        // mac Field Functions 
        bool hasMac() const { return this->mac_ != nullptr;};
        void deleteMac() { this->mac_ = nullptr;};
        inline string getMac() const { DARABONBA_PTR_GET_DEFAULT(mac_, "") };
        inline Data& setMac(string mac) { DARABONBA_PTR_SET_VALUE(mac_, mac) };


        // mask Field Functions 
        bool hasMask() const { return this->mask_ != nullptr;};
        void deleteMask() { this->mask_ = nullptr;};
        inline string getMask() const { DARABONBA_PTR_GET_DEFAULT(mask_, "") };
        inline Data& setMask(string mask) { DARABONBA_PTR_SET_VALUE(mask_, mask) };


        // message Field Functions 
        bool hasMessage() const { return this->message_ != nullptr;};
        void deleteMessage() { this->message_ = nullptr;};
        inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
        inline Data& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


        // nodeId Field Functions 
        bool hasNodeId() const { return this->nodeId_ != nullptr;};
        void deleteNodeId() { this->nodeId_ = nullptr;};
        inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
        inline Data& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


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


        // securityGroupId Field Functions 
        bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
        void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
        inline string getSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
        inline Data& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // tags Field Functions 
        bool hasTags() const { return this->tags_ != nullptr;};
        void deleteTags() { this->tags_ = nullptr;};
        inline const vector<Data::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Data::Tags>) };
        inline vector<Data::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<Data::Tags>) };
        inline Data& setTags(const vector<Data::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
        inline Data& setTags(vector<Data::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Data& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // vSwitchId Field Functions 
        bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
        void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
        inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
        inline Data& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


        // vpcId Field Functions 
        bool hasVpcId() const { return this->vpcId_ != nullptr;};
        void deleteVpcId() { this->vpcId_ = nullptr;};
        inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
        inline Data& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


        // zoneId Field Functions 
        bool hasZoneId() const { return this->zoneId_ != nullptr;};
        void deleteZoneId() { this->zoneId_ = nullptr;};
        inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
        inline Data& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


      protected:
        // The time when the data address was created.
        shared_ptr<string> createTime_ {};
        // The instance description.
        shared_ptr<string> description_ {};
        // Lingjun Elastic Network Interface ID
        shared_ptr<string> elasticNetworkInterfaceId_ {};
        // vswitch gateway address
        shared_ptr<string> gateway_ {};
        // The time when the agent was last modified.
        shared_ptr<string> gmtModified_ {};
        // The IP address of the BE cluster.
        shared_ptr<string> ip_ {};
        // mac address
        shared_ptr<string> mac_ {};
        // vswitch mask bits
        shared_ptr<string> mask_ {};
        // The error message.
        shared_ptr<string> message_ {};
        // The ID of the node.
        shared_ptr<string> nodeId_ {};
        // The region ID.
        shared_ptr<string> regionId_ {};
        // The ID of the resource group.
        shared_ptr<string> resourceGroupId_ {};
        // The ID of the security group.
        shared_ptr<string> securityGroupId_ {};
        // The status of the intervention entry. Valid value:
        shared_ptr<string> status_ {};
        // The list of tags.
        shared_ptr<vector<Data::Tags>> tags_ {};
        // network interface controller type, the default type DEFAULT cannot be manually released
        // 
        // Valid value:
        // 
        // *   CUSTOM: custom type.
        // *   DEFAULT: system type.
        shared_ptr<string> type_ {};
        // The ID of the vSwitch.
        shared_ptr<string> vSwitchId_ {};
        // The ID of the virtual private cloud (VPC).
        shared_ptr<string> vpcId_ {};
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
      // lingjun Elastic Network Interface information list
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
    inline ListElasticNetworkInterfacesResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline ListElasticNetworkInterfacesResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline const ListElasticNetworkInterfacesResponseBody::Content & getContent() const { DARABONBA_PTR_GET_CONST(content_, ListElasticNetworkInterfacesResponseBody::Content) };
    inline ListElasticNetworkInterfacesResponseBody::Content getContent() { DARABONBA_PTR_GET(content_, ListElasticNetworkInterfacesResponseBody::Content) };
    inline ListElasticNetworkInterfacesResponseBody& setContent(const ListElasticNetworkInterfacesResponseBody::Content & content) { DARABONBA_PTR_SET_VALUE(content_, content) };
    inline ListElasticNetworkInterfacesResponseBody& setContent(ListElasticNetworkInterfacesResponseBody::Content && content) { DARABONBA_PTR_SET_RVALUE(content_, content) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListElasticNetworkInterfacesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListElasticNetworkInterfacesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details about the access denial.
    shared_ptr<string> accessDeniedDetail_ {};
    // The response status code.
    shared_ptr<int32_t> code_ {};
    // The response parameters.
    shared_ptr<ListElasticNetworkInterfacesResponseBody::Content> content_ {};
    // The return message.
    shared_ptr<string> message_ {};
    // Request ID of the current request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eflo20220530
#endif
