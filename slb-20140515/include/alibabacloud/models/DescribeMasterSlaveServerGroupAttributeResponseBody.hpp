// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMASTERSLAVESERVERGROUPATTRIBUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMASTERSLAVESERVERGROUPATTRIBUTERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Slb20140515
{
namespace Models
{
  class DescribeMasterSlaveServerGroupAttributeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMasterSlaveServerGroupAttributeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(LoadBalancerId, loadBalancerId_);
      DARABONBA_PTR_TO_JSON(MasterSlaveBackendServers, masterSlaveBackendServers_);
      DARABONBA_PTR_TO_JSON(MasterSlaveServerGroupId, masterSlaveServerGroupId_);
      DARABONBA_PTR_TO_JSON(MasterSlaveServerGroupName, masterSlaveServerGroupName_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMasterSlaveServerGroupAttributeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(LoadBalancerId, loadBalancerId_);
      DARABONBA_PTR_FROM_JSON(MasterSlaveBackendServers, masterSlaveBackendServers_);
      DARABONBA_PTR_FROM_JSON(MasterSlaveServerGroupId, masterSlaveServerGroupId_);
      DARABONBA_PTR_FROM_JSON(MasterSlaveServerGroupName, masterSlaveServerGroupName_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    DescribeMasterSlaveServerGroupAttributeResponseBody() = default ;
    DescribeMasterSlaveServerGroupAttributeResponseBody(const DescribeMasterSlaveServerGroupAttributeResponseBody &) = default ;
    DescribeMasterSlaveServerGroupAttributeResponseBody(DescribeMasterSlaveServerGroupAttributeResponseBody &&) = default ;
    DescribeMasterSlaveServerGroupAttributeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMasterSlaveServerGroupAttributeResponseBody() = default ;
    DescribeMasterSlaveServerGroupAttributeResponseBody& operator=(const DescribeMasterSlaveServerGroupAttributeResponseBody &) = default ;
    DescribeMasterSlaveServerGroupAttributeResponseBody& operator=(DescribeMasterSlaveServerGroupAttributeResponseBody &&) = default ;
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
          DARABONBA_PTR_TO_JSON(TagKey, tagKey_);
          DARABONBA_PTR_TO_JSON(TagValue, tagValue_);
        };
        friend void from_json(const Darabonba::Json& j, Tag& obj) { 
          DARABONBA_PTR_FROM_JSON(TagKey, tagKey_);
          DARABONBA_PTR_FROM_JSON(TagValue, tagValue_);
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
        virtual bool empty() const override { return this->tagKey_ == nullptr
        && this->tagValue_ == nullptr; };
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


      protected:
        shared_ptr<string> tagKey_ {};
        shared_ptr<string> tagValue_ {};
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

    class MasterSlaveBackendServers : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MasterSlaveBackendServers& obj) { 
        DARABONBA_PTR_TO_JSON(MasterSlaveBackendServer, masterSlaveBackendServer_);
      };
      friend void from_json(const Darabonba::Json& j, MasterSlaveBackendServers& obj) { 
        DARABONBA_PTR_FROM_JSON(MasterSlaveBackendServer, masterSlaveBackendServer_);
      };
      MasterSlaveBackendServers() = default ;
      MasterSlaveBackendServers(const MasterSlaveBackendServers &) = default ;
      MasterSlaveBackendServers(MasterSlaveBackendServers &&) = default ;
      MasterSlaveBackendServers(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MasterSlaveBackendServers() = default ;
      MasterSlaveBackendServers& operator=(const MasterSlaveBackendServers &) = default ;
      MasterSlaveBackendServers& operator=(MasterSlaveBackendServers &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class MasterSlaveBackendServer : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const MasterSlaveBackendServer& obj) { 
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(Port, port_);
          DARABONBA_PTR_TO_JSON(ServerId, serverId_);
          DARABONBA_PTR_TO_JSON(ServerType, serverType_);
          DARABONBA_PTR_TO_JSON(Type, type_);
          DARABONBA_PTR_TO_JSON(Weight, weight_);
        };
        friend void from_json(const Darabonba::Json& j, MasterSlaveBackendServer& obj) { 
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(Port, port_);
          DARABONBA_PTR_FROM_JSON(ServerId, serverId_);
          DARABONBA_PTR_FROM_JSON(ServerType, serverType_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
          DARABONBA_PTR_FROM_JSON(Weight, weight_);
        };
        MasterSlaveBackendServer() = default ;
        MasterSlaveBackendServer(const MasterSlaveBackendServer &) = default ;
        MasterSlaveBackendServer(MasterSlaveBackendServer &&) = default ;
        MasterSlaveBackendServer(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~MasterSlaveBackendServer() = default ;
        MasterSlaveBackendServer& operator=(const MasterSlaveBackendServer &) = default ;
        MasterSlaveBackendServer& operator=(MasterSlaveBackendServer &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->description_ == nullptr
        && this->port_ == nullptr && this->serverId_ == nullptr && this->serverType_ == nullptr && this->type_ == nullptr && this->weight_ == nullptr; };
        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline MasterSlaveBackendServer& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // port Field Functions 
        bool hasPort() const { return this->port_ != nullptr;};
        void deletePort() { this->port_ = nullptr;};
        inline int32_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
        inline MasterSlaveBackendServer& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


        // serverId Field Functions 
        bool hasServerId() const { return this->serverId_ != nullptr;};
        void deleteServerId() { this->serverId_ = nullptr;};
        inline string getServerId() const { DARABONBA_PTR_GET_DEFAULT(serverId_, "") };
        inline MasterSlaveBackendServer& setServerId(string serverId) { DARABONBA_PTR_SET_VALUE(serverId_, serverId) };


        // serverType Field Functions 
        bool hasServerType() const { return this->serverType_ != nullptr;};
        void deleteServerType() { this->serverType_ = nullptr;};
        inline string getServerType() const { DARABONBA_PTR_GET_DEFAULT(serverType_, "") };
        inline MasterSlaveBackendServer& setServerType(string serverType) { DARABONBA_PTR_SET_VALUE(serverType_, serverType) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline MasterSlaveBackendServer& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // weight Field Functions 
        bool hasWeight() const { return this->weight_ != nullptr;};
        void deleteWeight() { this->weight_ = nullptr;};
        inline int32_t getWeight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0) };
        inline MasterSlaveBackendServer& setWeight(int32_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


      protected:
        shared_ptr<string> description_ {};
        shared_ptr<int32_t> port_ {};
        shared_ptr<string> serverId_ {};
        shared_ptr<string> serverType_ {};
        shared_ptr<string> type_ {};
        shared_ptr<int32_t> weight_ {};
      };

      virtual bool empty() const override { return this->masterSlaveBackendServer_ == nullptr; };
      // masterSlaveBackendServer Field Functions 
      bool hasMasterSlaveBackendServer() const { return this->masterSlaveBackendServer_ != nullptr;};
      void deleteMasterSlaveBackendServer() { this->masterSlaveBackendServer_ = nullptr;};
      inline const vector<MasterSlaveBackendServers::MasterSlaveBackendServer> & getMasterSlaveBackendServer() const { DARABONBA_PTR_GET_CONST(masterSlaveBackendServer_, vector<MasterSlaveBackendServers::MasterSlaveBackendServer>) };
      inline vector<MasterSlaveBackendServers::MasterSlaveBackendServer> getMasterSlaveBackendServer() { DARABONBA_PTR_GET(masterSlaveBackendServer_, vector<MasterSlaveBackendServers::MasterSlaveBackendServer>) };
      inline MasterSlaveBackendServers& setMasterSlaveBackendServer(const vector<MasterSlaveBackendServers::MasterSlaveBackendServer> & masterSlaveBackendServer) { DARABONBA_PTR_SET_VALUE(masterSlaveBackendServer_, masterSlaveBackendServer) };
      inline MasterSlaveBackendServers& setMasterSlaveBackendServer(vector<MasterSlaveBackendServers::MasterSlaveBackendServer> && masterSlaveBackendServer) { DARABONBA_PTR_SET_RVALUE(masterSlaveBackendServer_, masterSlaveBackendServer) };


    protected:
      shared_ptr<vector<MasterSlaveBackendServers::MasterSlaveBackendServer>> masterSlaveBackendServer_ {};
    };

    virtual bool empty() const override { return this->createTime_ == nullptr
        && this->loadBalancerId_ == nullptr && this->masterSlaveBackendServers_ == nullptr && this->masterSlaveServerGroupId_ == nullptr && this->masterSlaveServerGroupName_ == nullptr && this->requestId_ == nullptr
        && this->tags_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeMasterSlaveServerGroupAttributeResponseBody& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // loadBalancerId Field Functions 
    bool hasLoadBalancerId() const { return this->loadBalancerId_ != nullptr;};
    void deleteLoadBalancerId() { this->loadBalancerId_ = nullptr;};
    inline string getLoadBalancerId() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerId_, "") };
    inline DescribeMasterSlaveServerGroupAttributeResponseBody& setLoadBalancerId(string loadBalancerId) { DARABONBA_PTR_SET_VALUE(loadBalancerId_, loadBalancerId) };


    // masterSlaveBackendServers Field Functions 
    bool hasMasterSlaveBackendServers() const { return this->masterSlaveBackendServers_ != nullptr;};
    void deleteMasterSlaveBackendServers() { this->masterSlaveBackendServers_ = nullptr;};
    inline const DescribeMasterSlaveServerGroupAttributeResponseBody::MasterSlaveBackendServers & getMasterSlaveBackendServers() const { DARABONBA_PTR_GET_CONST(masterSlaveBackendServers_, DescribeMasterSlaveServerGroupAttributeResponseBody::MasterSlaveBackendServers) };
    inline DescribeMasterSlaveServerGroupAttributeResponseBody::MasterSlaveBackendServers getMasterSlaveBackendServers() { DARABONBA_PTR_GET(masterSlaveBackendServers_, DescribeMasterSlaveServerGroupAttributeResponseBody::MasterSlaveBackendServers) };
    inline DescribeMasterSlaveServerGroupAttributeResponseBody& setMasterSlaveBackendServers(const DescribeMasterSlaveServerGroupAttributeResponseBody::MasterSlaveBackendServers & masterSlaveBackendServers) { DARABONBA_PTR_SET_VALUE(masterSlaveBackendServers_, masterSlaveBackendServers) };
    inline DescribeMasterSlaveServerGroupAttributeResponseBody& setMasterSlaveBackendServers(DescribeMasterSlaveServerGroupAttributeResponseBody::MasterSlaveBackendServers && masterSlaveBackendServers) { DARABONBA_PTR_SET_RVALUE(masterSlaveBackendServers_, masterSlaveBackendServers) };


    // masterSlaveServerGroupId Field Functions 
    bool hasMasterSlaveServerGroupId() const { return this->masterSlaveServerGroupId_ != nullptr;};
    void deleteMasterSlaveServerGroupId() { this->masterSlaveServerGroupId_ = nullptr;};
    inline string getMasterSlaveServerGroupId() const { DARABONBA_PTR_GET_DEFAULT(masterSlaveServerGroupId_, "") };
    inline DescribeMasterSlaveServerGroupAttributeResponseBody& setMasterSlaveServerGroupId(string masterSlaveServerGroupId) { DARABONBA_PTR_SET_VALUE(masterSlaveServerGroupId_, masterSlaveServerGroupId) };


    // masterSlaveServerGroupName Field Functions 
    bool hasMasterSlaveServerGroupName() const { return this->masterSlaveServerGroupName_ != nullptr;};
    void deleteMasterSlaveServerGroupName() { this->masterSlaveServerGroupName_ = nullptr;};
    inline string getMasterSlaveServerGroupName() const { DARABONBA_PTR_GET_DEFAULT(masterSlaveServerGroupName_, "") };
    inline DescribeMasterSlaveServerGroupAttributeResponseBody& setMasterSlaveServerGroupName(string masterSlaveServerGroupName) { DARABONBA_PTR_SET_VALUE(masterSlaveServerGroupName_, masterSlaveServerGroupName) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeMasterSlaveServerGroupAttributeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const DescribeMasterSlaveServerGroupAttributeResponseBody::Tags & getTags() const { DARABONBA_PTR_GET_CONST(tags_, DescribeMasterSlaveServerGroupAttributeResponseBody::Tags) };
    inline DescribeMasterSlaveServerGroupAttributeResponseBody::Tags getTags() { DARABONBA_PTR_GET(tags_, DescribeMasterSlaveServerGroupAttributeResponseBody::Tags) };
    inline DescribeMasterSlaveServerGroupAttributeResponseBody& setTags(const DescribeMasterSlaveServerGroupAttributeResponseBody::Tags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeMasterSlaveServerGroupAttributeResponseBody& setTags(DescribeMasterSlaveServerGroupAttributeResponseBody::Tags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    // The time when the CLB instance was created. The time follows the `YYYY-MM-DDThh:mm:ssZ` format.
    shared_ptr<string> createTime_ {};
    // The ID of the associated CLB instance.
    shared_ptr<string> loadBalancerId_ {};
    shared_ptr<DescribeMasterSlaveServerGroupAttributeResponseBody::MasterSlaveBackendServers> masterSlaveBackendServers_ {};
    // The ID of the primary/secondary server group.
    shared_ptr<string> masterSlaveServerGroupId_ {};
    // The name of the primary/secondary server group.
    shared_ptr<string> masterSlaveServerGroupName_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    shared_ptr<DescribeMasterSlaveServerGroupAttributeResponseBody::Tags> tags_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Slb20140515
#endif
