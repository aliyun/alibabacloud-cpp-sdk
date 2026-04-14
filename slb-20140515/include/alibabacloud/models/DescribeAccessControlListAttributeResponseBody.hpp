// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACCESSCONTROLLISTATTRIBUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACCESSCONTROLLISTATTRIBUTERESPONSEBODY_HPP_
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
  class DescribeAccessControlListAttributeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAccessControlListAttributeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AclEntrys, aclEntrys_);
      DARABONBA_PTR_TO_JSON(AclId, aclId_);
      DARABONBA_PTR_TO_JSON(AclName, aclName_);
      DARABONBA_PTR_TO_JSON(AddressIPVersion, addressIPVersion_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(RelatedListeners, relatedListeners_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(TotalAclEntry, totalAclEntry_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAccessControlListAttributeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AclEntrys, aclEntrys_);
      DARABONBA_PTR_FROM_JSON(AclId, aclId_);
      DARABONBA_PTR_FROM_JSON(AclName, aclName_);
      DARABONBA_PTR_FROM_JSON(AddressIPVersion, addressIPVersion_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(RelatedListeners, relatedListeners_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(TotalAclEntry, totalAclEntry_);
    };
    DescribeAccessControlListAttributeResponseBody() = default ;
    DescribeAccessControlListAttributeResponseBody(const DescribeAccessControlListAttributeResponseBody &) = default ;
    DescribeAccessControlListAttributeResponseBody(DescribeAccessControlListAttributeResponseBody &&) = default ;
    DescribeAccessControlListAttributeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAccessControlListAttributeResponseBody() = default ;
    DescribeAccessControlListAttributeResponseBody& operator=(const DescribeAccessControlListAttributeResponseBody &) = default ;
    DescribeAccessControlListAttributeResponseBody& operator=(DescribeAccessControlListAttributeResponseBody &&) = default ;
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

    class RelatedListeners : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RelatedListeners& obj) { 
        DARABONBA_PTR_TO_JSON(RelatedListener, relatedListener_);
      };
      friend void from_json(const Darabonba::Json& j, RelatedListeners& obj) { 
        DARABONBA_PTR_FROM_JSON(RelatedListener, relatedListener_);
      };
      RelatedListeners() = default ;
      RelatedListeners(const RelatedListeners &) = default ;
      RelatedListeners(RelatedListeners &&) = default ;
      RelatedListeners(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RelatedListeners() = default ;
      RelatedListeners& operator=(const RelatedListeners &) = default ;
      RelatedListeners& operator=(RelatedListeners &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class RelatedListener : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RelatedListener& obj) { 
          DARABONBA_PTR_TO_JSON(AclType, aclType_);
          DARABONBA_PTR_TO_JSON(ListenerPort, listenerPort_);
          DARABONBA_PTR_TO_JSON(LoadBalancerId, loadBalancerId_);
          DARABONBA_PTR_TO_JSON(Protocol, protocol_);
        };
        friend void from_json(const Darabonba::Json& j, RelatedListener& obj) { 
          DARABONBA_PTR_FROM_JSON(AclType, aclType_);
          DARABONBA_PTR_FROM_JSON(ListenerPort, listenerPort_);
          DARABONBA_PTR_FROM_JSON(LoadBalancerId, loadBalancerId_);
          DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
        };
        RelatedListener() = default ;
        RelatedListener(const RelatedListener &) = default ;
        RelatedListener(RelatedListener &&) = default ;
        RelatedListener(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RelatedListener() = default ;
        RelatedListener& operator=(const RelatedListener &) = default ;
        RelatedListener& operator=(RelatedListener &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->aclType_ == nullptr
        && this->listenerPort_ == nullptr && this->loadBalancerId_ == nullptr && this->protocol_ == nullptr; };
        // aclType Field Functions 
        bool hasAclType() const { return this->aclType_ != nullptr;};
        void deleteAclType() { this->aclType_ = nullptr;};
        inline string getAclType() const { DARABONBA_PTR_GET_DEFAULT(aclType_, "") };
        inline RelatedListener& setAclType(string aclType) { DARABONBA_PTR_SET_VALUE(aclType_, aclType) };


        // listenerPort Field Functions 
        bool hasListenerPort() const { return this->listenerPort_ != nullptr;};
        void deleteListenerPort() { this->listenerPort_ = nullptr;};
        inline int32_t getListenerPort() const { DARABONBA_PTR_GET_DEFAULT(listenerPort_, 0) };
        inline RelatedListener& setListenerPort(int32_t listenerPort) { DARABONBA_PTR_SET_VALUE(listenerPort_, listenerPort) };


        // loadBalancerId Field Functions 
        bool hasLoadBalancerId() const { return this->loadBalancerId_ != nullptr;};
        void deleteLoadBalancerId() { this->loadBalancerId_ = nullptr;};
        inline string getLoadBalancerId() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerId_, "") };
        inline RelatedListener& setLoadBalancerId(string loadBalancerId) { DARABONBA_PTR_SET_VALUE(loadBalancerId_, loadBalancerId) };


        // protocol Field Functions 
        bool hasProtocol() const { return this->protocol_ != nullptr;};
        void deleteProtocol() { this->protocol_ = nullptr;};
        inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
        inline RelatedListener& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


      protected:
        shared_ptr<string> aclType_ {};
        shared_ptr<int32_t> listenerPort_ {};
        shared_ptr<string> loadBalancerId_ {};
        shared_ptr<string> protocol_ {};
      };

      virtual bool empty() const override { return this->relatedListener_ == nullptr; };
      // relatedListener Field Functions 
      bool hasRelatedListener() const { return this->relatedListener_ != nullptr;};
      void deleteRelatedListener() { this->relatedListener_ = nullptr;};
      inline const vector<RelatedListeners::RelatedListener> & getRelatedListener() const { DARABONBA_PTR_GET_CONST(relatedListener_, vector<RelatedListeners::RelatedListener>) };
      inline vector<RelatedListeners::RelatedListener> getRelatedListener() { DARABONBA_PTR_GET(relatedListener_, vector<RelatedListeners::RelatedListener>) };
      inline RelatedListeners& setRelatedListener(const vector<RelatedListeners::RelatedListener> & relatedListener) { DARABONBA_PTR_SET_VALUE(relatedListener_, relatedListener) };
      inline RelatedListeners& setRelatedListener(vector<RelatedListeners::RelatedListener> && relatedListener) { DARABONBA_PTR_SET_RVALUE(relatedListener_, relatedListener) };


    protected:
      shared_ptr<vector<RelatedListeners::RelatedListener>> relatedListener_ {};
    };

    class AclEntrys : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AclEntrys& obj) { 
        DARABONBA_PTR_TO_JSON(AclEntry, aclEntry_);
      };
      friend void from_json(const Darabonba::Json& j, AclEntrys& obj) { 
        DARABONBA_PTR_FROM_JSON(AclEntry, aclEntry_);
      };
      AclEntrys() = default ;
      AclEntrys(const AclEntrys &) = default ;
      AclEntrys(AclEntrys &&) = default ;
      AclEntrys(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AclEntrys() = default ;
      AclEntrys& operator=(const AclEntrys &) = default ;
      AclEntrys& operator=(AclEntrys &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class AclEntry : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AclEntry& obj) { 
          DARABONBA_PTR_TO_JSON(AclEntryComment, aclEntryComment_);
          DARABONBA_PTR_TO_JSON(AclEntryIP, aclEntryIP_);
        };
        friend void from_json(const Darabonba::Json& j, AclEntry& obj) { 
          DARABONBA_PTR_FROM_JSON(AclEntryComment, aclEntryComment_);
          DARABONBA_PTR_FROM_JSON(AclEntryIP, aclEntryIP_);
        };
        AclEntry() = default ;
        AclEntry(const AclEntry &) = default ;
        AclEntry(AclEntry &&) = default ;
        AclEntry(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AclEntry() = default ;
        AclEntry& operator=(const AclEntry &) = default ;
        AclEntry& operator=(AclEntry &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->aclEntryComment_ == nullptr
        && this->aclEntryIP_ == nullptr; };
        // aclEntryComment Field Functions 
        bool hasAclEntryComment() const { return this->aclEntryComment_ != nullptr;};
        void deleteAclEntryComment() { this->aclEntryComment_ = nullptr;};
        inline string getAclEntryComment() const { DARABONBA_PTR_GET_DEFAULT(aclEntryComment_, "") };
        inline AclEntry& setAclEntryComment(string aclEntryComment) { DARABONBA_PTR_SET_VALUE(aclEntryComment_, aclEntryComment) };


        // aclEntryIP Field Functions 
        bool hasAclEntryIP() const { return this->aclEntryIP_ != nullptr;};
        void deleteAclEntryIP() { this->aclEntryIP_ = nullptr;};
        inline string getAclEntryIP() const { DARABONBA_PTR_GET_DEFAULT(aclEntryIP_, "") };
        inline AclEntry& setAclEntryIP(string aclEntryIP) { DARABONBA_PTR_SET_VALUE(aclEntryIP_, aclEntryIP) };


      protected:
        shared_ptr<string> aclEntryComment_ {};
        shared_ptr<string> aclEntryIP_ {};
      };

      virtual bool empty() const override { return this->aclEntry_ == nullptr; };
      // aclEntry Field Functions 
      bool hasAclEntry() const { return this->aclEntry_ != nullptr;};
      void deleteAclEntry() { this->aclEntry_ = nullptr;};
      inline const vector<AclEntrys::AclEntry> & getAclEntry() const { DARABONBA_PTR_GET_CONST(aclEntry_, vector<AclEntrys::AclEntry>) };
      inline vector<AclEntrys::AclEntry> getAclEntry() { DARABONBA_PTR_GET(aclEntry_, vector<AclEntrys::AclEntry>) };
      inline AclEntrys& setAclEntry(const vector<AclEntrys::AclEntry> & aclEntry) { DARABONBA_PTR_SET_VALUE(aclEntry_, aclEntry) };
      inline AclEntrys& setAclEntry(vector<AclEntrys::AclEntry> && aclEntry) { DARABONBA_PTR_SET_RVALUE(aclEntry_, aclEntry) };


    protected:
      shared_ptr<vector<AclEntrys::AclEntry>> aclEntry_ {};
    };

    virtual bool empty() const override { return this->aclEntrys_ == nullptr
        && this->aclId_ == nullptr && this->aclName_ == nullptr && this->addressIPVersion_ == nullptr && this->createTime_ == nullptr && this->relatedListeners_ == nullptr
        && this->requestId_ == nullptr && this->resourceGroupId_ == nullptr && this->tags_ == nullptr && this->totalAclEntry_ == nullptr; };
    // aclEntrys Field Functions 
    bool hasAclEntrys() const { return this->aclEntrys_ != nullptr;};
    void deleteAclEntrys() { this->aclEntrys_ = nullptr;};
    inline const DescribeAccessControlListAttributeResponseBody::AclEntrys & getAclEntrys() const { DARABONBA_PTR_GET_CONST(aclEntrys_, DescribeAccessControlListAttributeResponseBody::AclEntrys) };
    inline DescribeAccessControlListAttributeResponseBody::AclEntrys getAclEntrys() { DARABONBA_PTR_GET(aclEntrys_, DescribeAccessControlListAttributeResponseBody::AclEntrys) };
    inline DescribeAccessControlListAttributeResponseBody& setAclEntrys(const DescribeAccessControlListAttributeResponseBody::AclEntrys & aclEntrys) { DARABONBA_PTR_SET_VALUE(aclEntrys_, aclEntrys) };
    inline DescribeAccessControlListAttributeResponseBody& setAclEntrys(DescribeAccessControlListAttributeResponseBody::AclEntrys && aclEntrys) { DARABONBA_PTR_SET_RVALUE(aclEntrys_, aclEntrys) };


    // aclId Field Functions 
    bool hasAclId() const { return this->aclId_ != nullptr;};
    void deleteAclId() { this->aclId_ = nullptr;};
    inline string getAclId() const { DARABONBA_PTR_GET_DEFAULT(aclId_, "") };
    inline DescribeAccessControlListAttributeResponseBody& setAclId(string aclId) { DARABONBA_PTR_SET_VALUE(aclId_, aclId) };


    // aclName Field Functions 
    bool hasAclName() const { return this->aclName_ != nullptr;};
    void deleteAclName() { this->aclName_ = nullptr;};
    inline string getAclName() const { DARABONBA_PTR_GET_DEFAULT(aclName_, "") };
    inline DescribeAccessControlListAttributeResponseBody& setAclName(string aclName) { DARABONBA_PTR_SET_VALUE(aclName_, aclName) };


    // addressIPVersion Field Functions 
    bool hasAddressIPVersion() const { return this->addressIPVersion_ != nullptr;};
    void deleteAddressIPVersion() { this->addressIPVersion_ = nullptr;};
    inline string getAddressIPVersion() const { DARABONBA_PTR_GET_DEFAULT(addressIPVersion_, "") };
    inline DescribeAccessControlListAttributeResponseBody& setAddressIPVersion(string addressIPVersion) { DARABONBA_PTR_SET_VALUE(addressIPVersion_, addressIPVersion) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeAccessControlListAttributeResponseBody& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // relatedListeners Field Functions 
    bool hasRelatedListeners() const { return this->relatedListeners_ != nullptr;};
    void deleteRelatedListeners() { this->relatedListeners_ = nullptr;};
    inline const DescribeAccessControlListAttributeResponseBody::RelatedListeners & getRelatedListeners() const { DARABONBA_PTR_GET_CONST(relatedListeners_, DescribeAccessControlListAttributeResponseBody::RelatedListeners) };
    inline DescribeAccessControlListAttributeResponseBody::RelatedListeners getRelatedListeners() { DARABONBA_PTR_GET(relatedListeners_, DescribeAccessControlListAttributeResponseBody::RelatedListeners) };
    inline DescribeAccessControlListAttributeResponseBody& setRelatedListeners(const DescribeAccessControlListAttributeResponseBody::RelatedListeners & relatedListeners) { DARABONBA_PTR_SET_VALUE(relatedListeners_, relatedListeners) };
    inline DescribeAccessControlListAttributeResponseBody& setRelatedListeners(DescribeAccessControlListAttributeResponseBody::RelatedListeners && relatedListeners) { DARABONBA_PTR_SET_RVALUE(relatedListeners_, relatedListeners) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAccessControlListAttributeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeAccessControlListAttributeResponseBody& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const DescribeAccessControlListAttributeResponseBody::Tags & getTags() const { DARABONBA_PTR_GET_CONST(tags_, DescribeAccessControlListAttributeResponseBody::Tags) };
    inline DescribeAccessControlListAttributeResponseBody::Tags getTags() { DARABONBA_PTR_GET(tags_, DescribeAccessControlListAttributeResponseBody::Tags) };
    inline DescribeAccessControlListAttributeResponseBody& setTags(const DescribeAccessControlListAttributeResponseBody::Tags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeAccessControlListAttributeResponseBody& setTags(DescribeAccessControlListAttributeResponseBody::Tags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // totalAclEntry Field Functions 
    bool hasTotalAclEntry() const { return this->totalAclEntry_ != nullptr;};
    void deleteTotalAclEntry() { this->totalAclEntry_ = nullptr;};
    inline int32_t getTotalAclEntry() const { DARABONBA_PTR_GET_DEFAULT(totalAclEntry_, 0) };
    inline DescribeAccessControlListAttributeResponseBody& setTotalAclEntry(int32_t totalAclEntry) { DARABONBA_PTR_SET_VALUE(totalAclEntry_, totalAclEntry) };


  protected:
    shared_ptr<DescribeAccessControlListAttributeResponseBody::AclEntrys> aclEntrys_ {};
    // The ACL ID.
    shared_ptr<string> aclId_ {};
    // The ACL name.
    shared_ptr<string> aclName_ {};
    // The IP version. Valid values: **ipv4** and **ipv6**.
    shared_ptr<string> addressIPVersion_ {};
    // The time when the ACL was created. The time follows the `YYYY-MM-DDThh:mm:ssZ` format.
    shared_ptr<string> createTime_ {};
    shared_ptr<DescribeAccessControlListAttributeResponseBody::RelatedListeners> relatedListeners_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The resource group ID.
    shared_ptr<string> resourceGroupId_ {};
    shared_ptr<DescribeAccessControlListAttributeResponseBody::Tags> tags_ {};
    // The total number of ACL entries.
    shared_ptr<int32_t> totalAclEntry_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Slb20140515
#endif
