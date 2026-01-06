// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMOUNTTARGETSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMOUNTTARGETSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class DescribeMountTargetsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMountTargetsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MountTargets, mountTargets_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMountTargetsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MountTargets, mountTargets_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeMountTargetsResponseBody() = default ;
    DescribeMountTargetsResponseBody(const DescribeMountTargetsResponseBody &) = default ;
    DescribeMountTargetsResponseBody(DescribeMountTargetsResponseBody &&) = default ;
    DescribeMountTargetsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMountTargetsResponseBody() = default ;
    DescribeMountTargetsResponseBody& operator=(const DescribeMountTargetsResponseBody &) = default ;
    DescribeMountTargetsResponseBody& operator=(DescribeMountTargetsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class MountTargets : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MountTargets& obj) { 
        DARABONBA_PTR_TO_JSON(MountTarget, mountTarget_);
      };
      friend void from_json(const Darabonba::Json& j, MountTargets& obj) { 
        DARABONBA_PTR_FROM_JSON(MountTarget, mountTarget_);
      };
      MountTargets() = default ;
      MountTargets(const MountTargets &) = default ;
      MountTargets(MountTargets &&) = default ;
      MountTargets(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MountTargets() = default ;
      MountTargets& operator=(const MountTargets &) = default ;
      MountTargets& operator=(MountTargets &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class MountTarget : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const MountTarget& obj) { 
          DARABONBA_PTR_TO_JSON(AccessGroup, accessGroup_);
          DARABONBA_PTR_TO_JSON(ClientMasterNodes, clientMasterNodes_);
          DARABONBA_PTR_TO_JSON(DualStackMountTargetDomain, dualStackMountTargetDomain_);
          DARABONBA_PTR_TO_JSON(IPVersion, IPVersion_);
          DARABONBA_PTR_TO_JSON(MountTargetDomain, mountTargetDomain_);
          DARABONBA_PTR_TO_JSON(NetworkType, networkType_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(Tags, tags_);
          DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
          DARABONBA_PTR_TO_JSON(VswId, vswId_);
        };
        friend void from_json(const Darabonba::Json& j, MountTarget& obj) { 
          DARABONBA_PTR_FROM_JSON(AccessGroup, accessGroup_);
          DARABONBA_PTR_FROM_JSON(ClientMasterNodes, clientMasterNodes_);
          DARABONBA_PTR_FROM_JSON(DualStackMountTargetDomain, dualStackMountTargetDomain_);
          DARABONBA_PTR_FROM_JSON(IPVersion, IPVersion_);
          DARABONBA_PTR_FROM_JSON(MountTargetDomain, mountTargetDomain_);
          DARABONBA_PTR_FROM_JSON(NetworkType, networkType_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(Tags, tags_);
          DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
          DARABONBA_PTR_FROM_JSON(VswId, vswId_);
        };
        MountTarget() = default ;
        MountTarget(const MountTarget &) = default ;
        MountTarget(MountTarget &&) = default ;
        MountTarget(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~MountTarget() = default ;
        MountTarget& operator=(const MountTarget &) = default ;
        MountTarget& operator=(MountTarget &&) = default ;
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
            // The tag key. Limits:
            // 
            // *   The tag key cannot be null or an empty string.
            // *   The tag key can be up to 128 characters in length.
            // *   The key value cannot start with aliyun or acs:.
            // *   The key value cannot contain http:// or https://.
            shared_ptr<string> key_ {};
            // The tag value.
            // 
            // Limits:
            // 
            // *   The tag value can be up to 128 characters in length.
            // *   The tag value cannot contain http:// or https://.
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

        class ClientMasterNodes : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ClientMasterNodes& obj) { 
            DARABONBA_PTR_TO_JSON(ClientMasterNode, clientMasterNode_);
          };
          friend void from_json(const Darabonba::Json& j, ClientMasterNodes& obj) { 
            DARABONBA_PTR_FROM_JSON(ClientMasterNode, clientMasterNode_);
          };
          ClientMasterNodes() = default ;
          ClientMasterNodes(const ClientMasterNodes &) = default ;
          ClientMasterNodes(ClientMasterNodes &&) = default ;
          ClientMasterNodes(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ClientMasterNodes() = default ;
          ClientMasterNodes& operator=(const ClientMasterNodes &) = default ;
          ClientMasterNodes& operator=(ClientMasterNodes &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class ClientMasterNode : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const ClientMasterNode& obj) { 
              DARABONBA_PTR_TO_JSON(DefaultPasswd, defaultPasswd_);
              DARABONBA_PTR_TO_JSON(EcsId, ecsId_);
              DARABONBA_PTR_TO_JSON(EcsIp, ecsIp_);
            };
            friend void from_json(const Darabonba::Json& j, ClientMasterNode& obj) { 
              DARABONBA_PTR_FROM_JSON(DefaultPasswd, defaultPasswd_);
              DARABONBA_PTR_FROM_JSON(EcsId, ecsId_);
              DARABONBA_PTR_FROM_JSON(EcsIp, ecsIp_);
            };
            ClientMasterNode() = default ;
            ClientMasterNode(const ClientMasterNode &) = default ;
            ClientMasterNode(ClientMasterNode &&) = default ;
            ClientMasterNode(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~ClientMasterNode() = default ;
            ClientMasterNode& operator=(const ClientMasterNode &) = default ;
            ClientMasterNode& operator=(ClientMasterNode &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->defaultPasswd_ == nullptr
        && this->ecsId_ == nullptr && this->ecsIp_ == nullptr; };
            // defaultPasswd Field Functions 
            bool hasDefaultPasswd() const { return this->defaultPasswd_ != nullptr;};
            void deleteDefaultPasswd() { this->defaultPasswd_ = nullptr;};
            inline string getDefaultPasswd() const { DARABONBA_PTR_GET_DEFAULT(defaultPasswd_, "") };
            inline ClientMasterNode& setDefaultPasswd(string defaultPasswd) { DARABONBA_PTR_SET_VALUE(defaultPasswd_, defaultPasswd) };


            // ecsId Field Functions 
            bool hasEcsId() const { return this->ecsId_ != nullptr;};
            void deleteEcsId() { this->ecsId_ = nullptr;};
            inline string getEcsId() const { DARABONBA_PTR_GET_DEFAULT(ecsId_, "") };
            inline ClientMasterNode& setEcsId(string ecsId) { DARABONBA_PTR_SET_VALUE(ecsId_, ecsId) };


            // ecsIp Field Functions 
            bool hasEcsIp() const { return this->ecsIp_ != nullptr;};
            void deleteEcsIp() { this->ecsIp_ = nullptr;};
            inline string getEcsIp() const { DARABONBA_PTR_GET_DEFAULT(ecsIp_, "") };
            inline ClientMasterNode& setEcsIp(string ecsIp) { DARABONBA_PTR_SET_VALUE(ecsIp_, ecsIp) };


          protected:
            // The default logon password of the ECS instance.
            shared_ptr<string> defaultPasswd_ {};
            // The ID of the ECS instance on the client management node.
            shared_ptr<string> ecsId_ {};
            // The IP address of the ECS instance on the client management node.
            shared_ptr<string> ecsIp_ {};
          };

          virtual bool empty() const override { return this->clientMasterNode_ == nullptr; };
          // clientMasterNode Field Functions 
          bool hasClientMasterNode() const { return this->clientMasterNode_ != nullptr;};
          void deleteClientMasterNode() { this->clientMasterNode_ = nullptr;};
          inline const vector<ClientMasterNodes::ClientMasterNode> & getClientMasterNode() const { DARABONBA_PTR_GET_CONST(clientMasterNode_, vector<ClientMasterNodes::ClientMasterNode>) };
          inline vector<ClientMasterNodes::ClientMasterNode> getClientMasterNode() { DARABONBA_PTR_GET(clientMasterNode_, vector<ClientMasterNodes::ClientMasterNode>) };
          inline ClientMasterNodes& setClientMasterNode(const vector<ClientMasterNodes::ClientMasterNode> & clientMasterNode) { DARABONBA_PTR_SET_VALUE(clientMasterNode_, clientMasterNode) };
          inline ClientMasterNodes& setClientMasterNode(vector<ClientMasterNodes::ClientMasterNode> && clientMasterNode) { DARABONBA_PTR_SET_RVALUE(clientMasterNode_, clientMasterNode) };


        protected:
          shared_ptr<vector<ClientMasterNodes::ClientMasterNode>> clientMasterNode_ {};
        };

        virtual bool empty() const override { return this->accessGroup_ == nullptr
        && this->clientMasterNodes_ == nullptr && this->dualStackMountTargetDomain_ == nullptr && this->IPVersion_ == nullptr && this->mountTargetDomain_ == nullptr && this->networkType_ == nullptr
        && this->status_ == nullptr && this->tags_ == nullptr && this->vpcId_ == nullptr && this->vswId_ == nullptr; };
        // accessGroup Field Functions 
        bool hasAccessGroup() const { return this->accessGroup_ != nullptr;};
        void deleteAccessGroup() { this->accessGroup_ = nullptr;};
        inline string getAccessGroup() const { DARABONBA_PTR_GET_DEFAULT(accessGroup_, "") };
        inline MountTarget& setAccessGroup(string accessGroup) { DARABONBA_PTR_SET_VALUE(accessGroup_, accessGroup) };


        // clientMasterNodes Field Functions 
        bool hasClientMasterNodes() const { return this->clientMasterNodes_ != nullptr;};
        void deleteClientMasterNodes() { this->clientMasterNodes_ = nullptr;};
        inline const MountTarget::ClientMasterNodes & getClientMasterNodes() const { DARABONBA_PTR_GET_CONST(clientMasterNodes_, MountTarget::ClientMasterNodes) };
        inline MountTarget::ClientMasterNodes getClientMasterNodes() { DARABONBA_PTR_GET(clientMasterNodes_, MountTarget::ClientMasterNodes) };
        inline MountTarget& setClientMasterNodes(const MountTarget::ClientMasterNodes & clientMasterNodes) { DARABONBA_PTR_SET_VALUE(clientMasterNodes_, clientMasterNodes) };
        inline MountTarget& setClientMasterNodes(MountTarget::ClientMasterNodes && clientMasterNodes) { DARABONBA_PTR_SET_RVALUE(clientMasterNodes_, clientMasterNodes) };


        // dualStackMountTargetDomain Field Functions 
        bool hasDualStackMountTargetDomain() const { return this->dualStackMountTargetDomain_ != nullptr;};
        void deleteDualStackMountTargetDomain() { this->dualStackMountTargetDomain_ = nullptr;};
        inline string getDualStackMountTargetDomain() const { DARABONBA_PTR_GET_DEFAULT(dualStackMountTargetDomain_, "") };
        inline MountTarget& setDualStackMountTargetDomain(string dualStackMountTargetDomain) { DARABONBA_PTR_SET_VALUE(dualStackMountTargetDomain_, dualStackMountTargetDomain) };


        // IPVersion Field Functions 
        bool hasIPVersion() const { return this->IPVersion_ != nullptr;};
        void deleteIPVersion() { this->IPVersion_ = nullptr;};
        inline string getIPVersion() const { DARABONBA_PTR_GET_DEFAULT(IPVersion_, "") };
        inline MountTarget& setIPVersion(string IPVersion) { DARABONBA_PTR_SET_VALUE(IPVersion_, IPVersion) };


        // mountTargetDomain Field Functions 
        bool hasMountTargetDomain() const { return this->mountTargetDomain_ != nullptr;};
        void deleteMountTargetDomain() { this->mountTargetDomain_ = nullptr;};
        inline string getMountTargetDomain() const { DARABONBA_PTR_GET_DEFAULT(mountTargetDomain_, "") };
        inline MountTarget& setMountTargetDomain(string mountTargetDomain) { DARABONBA_PTR_SET_VALUE(mountTargetDomain_, mountTargetDomain) };


        // networkType Field Functions 
        bool hasNetworkType() const { return this->networkType_ != nullptr;};
        void deleteNetworkType() { this->networkType_ = nullptr;};
        inline string getNetworkType() const { DARABONBA_PTR_GET_DEFAULT(networkType_, "") };
        inline MountTarget& setNetworkType(string networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline MountTarget& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // tags Field Functions 
        bool hasTags() const { return this->tags_ != nullptr;};
        void deleteTags() { this->tags_ = nullptr;};
        inline const MountTarget::Tags & getTags() const { DARABONBA_PTR_GET_CONST(tags_, MountTarget::Tags) };
        inline MountTarget::Tags getTags() { DARABONBA_PTR_GET(tags_, MountTarget::Tags) };
        inline MountTarget& setTags(const MountTarget::Tags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
        inline MountTarget& setTags(MountTarget::Tags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


        // vpcId Field Functions 
        bool hasVpcId() const { return this->vpcId_ != nullptr;};
        void deleteVpcId() { this->vpcId_ = nullptr;};
        inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
        inline MountTarget& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


        // vswId Field Functions 
        bool hasVswId() const { return this->vswId_ != nullptr;};
        void deleteVswId() { this->vswId_ = nullptr;};
        inline string getVswId() const { DARABONBA_PTR_GET_DEFAULT(vswId_, "") };
        inline MountTarget& setVswId(string vswId) { DARABONBA_PTR_SET_VALUE(vswId_, vswId) };


      protected:
        // The name of the permission group that is attached to the mount target.
        shared_ptr<string> accessGroup_ {};
        // The information about client management nodes.
        shared_ptr<MountTarget::ClientMasterNodes> clientMasterNodes_ {};
        // The dual-stack (IPv4 and IPv6) domain name of the mount target.
        shared_ptr<string> dualStackMountTargetDomain_ {};
        // The type of the mount target.
        // 
        // *   IPv4: an IPv4 mount target
        // *   DualStack: a dual-stack mount target
        shared_ptr<string> IPVersion_ {};
        // The IPv4 domain name of the mount target.
        shared_ptr<string> mountTargetDomain_ {};
        // The network type. Valid value: **Vpc**.
        shared_ptr<string> networkType_ {};
        // The status of the mount target.
        // 
        // Valid values:
        // 
        // *   Active: The mount target is available.
        // *   Inactive: The mount target is unavailable.
        // *   Pending: The mount target is being created or modified.
        // *   Deleting: The mount target is being deleted.
        // *   Hibernating: The mount target is being hibernated.
        // *   Hibernated: The mount target is hibernated.
        // 
        // > You can mount a file system only when the mount target of the file system is in the Active state.
        shared_ptr<string> status_ {};
        // An array of tags. The array may contain up to 20 tags. If the array contains multiple tags, each tag key is unique.
        shared_ptr<MountTarget::Tags> tags_ {};
        // The ID of the virtual private cloud (VPC).
        shared_ptr<string> vpcId_ {};
        // The ID of the vSwitch.
        shared_ptr<string> vswId_ {};
      };

      virtual bool empty() const override { return this->mountTarget_ == nullptr; };
      // mountTarget Field Functions 
      bool hasMountTarget() const { return this->mountTarget_ != nullptr;};
      void deleteMountTarget() { this->mountTarget_ = nullptr;};
      inline const vector<MountTargets::MountTarget> & getMountTarget() const { DARABONBA_PTR_GET_CONST(mountTarget_, vector<MountTargets::MountTarget>) };
      inline vector<MountTargets::MountTarget> getMountTarget() { DARABONBA_PTR_GET(mountTarget_, vector<MountTargets::MountTarget>) };
      inline MountTargets& setMountTarget(const vector<MountTargets::MountTarget> & mountTarget) { DARABONBA_PTR_SET_VALUE(mountTarget_, mountTarget) };
      inline MountTargets& setMountTarget(vector<MountTargets::MountTarget> && mountTarget) { DARABONBA_PTR_SET_RVALUE(mountTarget_, mountTarget) };


    protected:
      shared_ptr<vector<MountTargets::MountTarget>> mountTarget_ {};
    };

    virtual bool empty() const override { return this->mountTargets_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // mountTargets Field Functions 
    bool hasMountTargets() const { return this->mountTargets_ != nullptr;};
    void deleteMountTargets() { this->mountTargets_ = nullptr;};
    inline const DescribeMountTargetsResponseBody::MountTargets & getMountTargets() const { DARABONBA_PTR_GET_CONST(mountTargets_, DescribeMountTargetsResponseBody::MountTargets) };
    inline DescribeMountTargetsResponseBody::MountTargets getMountTargets() { DARABONBA_PTR_GET(mountTargets_, DescribeMountTargetsResponseBody::MountTargets) };
    inline DescribeMountTargetsResponseBody& setMountTargets(const DescribeMountTargetsResponseBody::MountTargets & mountTargets) { DARABONBA_PTR_SET_VALUE(mountTargets_, mountTargets) };
    inline DescribeMountTargetsResponseBody& setMountTargets(DescribeMountTargetsResponseBody::MountTargets && mountTargets) { DARABONBA_PTR_SET_RVALUE(mountTargets_, mountTargets) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeMountTargetsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeMountTargetsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeMountTargetsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeMountTargetsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The queried mount targets.
    shared_ptr<DescribeMountTargetsResponseBody::MountTargets> mountTargets_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of mount targets.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
