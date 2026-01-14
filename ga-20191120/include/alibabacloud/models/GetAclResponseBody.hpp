// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETACLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETACLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ga20191120
{
namespace Models
{
  class GetAclResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAclResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AclEntries, aclEntries_);
      DARABONBA_PTR_TO_JSON(AclId, aclId_);
      DARABONBA_PTR_TO_JSON(AclName, aclName_);
      DARABONBA_PTR_TO_JSON(AclStatus, aclStatus_);
      DARABONBA_PTR_TO_JSON(AddressIPVersion, addressIPVersion_);
      DARABONBA_PTR_TO_JSON(RelatedListeners, relatedListeners_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, GetAclResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AclEntries, aclEntries_);
      DARABONBA_PTR_FROM_JSON(AclId, aclId_);
      DARABONBA_PTR_FROM_JSON(AclName, aclName_);
      DARABONBA_PTR_FROM_JSON(AclStatus, aclStatus_);
      DARABONBA_PTR_FROM_JSON(AddressIPVersion, addressIPVersion_);
      DARABONBA_PTR_FROM_JSON(RelatedListeners, relatedListeners_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    GetAclResponseBody() = default ;
    GetAclResponseBody(const GetAclResponseBody &) = default ;
    GetAclResponseBody(GetAclResponseBody &&) = default ;
    GetAclResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAclResponseBody() = default ;
    GetAclResponseBody& operator=(const GetAclResponseBody &) = default ;
    GetAclResponseBody& operator=(GetAclResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tags : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tags& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tags& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
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
      virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Tags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Tags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The key of tag N that is add to the ACL.
      shared_ptr<string> key_ {};
      // The value of tag N that is add to the ACL.
      shared_ptr<string> value_ {};
    };

    class RelatedListeners : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RelatedListeners& obj) { 
        DARABONBA_PTR_TO_JSON(AcceleratorId, acceleratorId_);
        DARABONBA_PTR_TO_JSON(AclType, aclType_);
        DARABONBA_PTR_TO_JSON(ListenerId, listenerId_);
      };
      friend void from_json(const Darabonba::Json& j, RelatedListeners& obj) { 
        DARABONBA_PTR_FROM_JSON(AcceleratorId, acceleratorId_);
        DARABONBA_PTR_FROM_JSON(AclType, aclType_);
        DARABONBA_PTR_FROM_JSON(ListenerId, listenerId_);
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
      virtual bool empty() const override { return this->acceleratorId_ == nullptr
        && this->aclType_ == nullptr && this->listenerId_ == nullptr; };
      // acceleratorId Field Functions 
      bool hasAcceleratorId() const { return this->acceleratorId_ != nullptr;};
      void deleteAcceleratorId() { this->acceleratorId_ = nullptr;};
      inline string getAcceleratorId() const { DARABONBA_PTR_GET_DEFAULT(acceleratorId_, "") };
      inline RelatedListeners& setAcceleratorId(string acceleratorId) { DARABONBA_PTR_SET_VALUE(acceleratorId_, acceleratorId) };


      // aclType Field Functions 
      bool hasAclType() const { return this->aclType_ != nullptr;};
      void deleteAclType() { this->aclType_ = nullptr;};
      inline string getAclType() const { DARABONBA_PTR_GET_DEFAULT(aclType_, "") };
      inline RelatedListeners& setAclType(string aclType) { DARABONBA_PTR_SET_VALUE(aclType_, aclType) };


      // listenerId Field Functions 
      bool hasListenerId() const { return this->listenerId_ != nullptr;};
      void deleteListenerId() { this->listenerId_ = nullptr;};
      inline string getListenerId() const { DARABONBA_PTR_GET_DEFAULT(listenerId_, "") };
      inline RelatedListeners& setListenerId(string listenerId) { DARABONBA_PTR_SET_VALUE(listenerId_, listenerId) };


    protected:
      // The ID of the GA instance.
      shared_ptr<string> acceleratorId_ {};
      // The type of the ACL. Valid values:
      // 
      // *   **white**: Only requests from the IP addresses or CIDR blocks in the ACL are forwarded. Whitelists are suitable for scenarios in which you want to allow access from specific IP addresses to an application. If a whitelist is improperly configured, risks may arise. After a whitelist is configured for a listener, only requests from the IP addresses that are added to the whitelist are distributed by the listener. If a whitelist is enabled but no IP address is added to the whitelist, the listener forwards all requests.
      // *   **black**: All requests from the IP addresses or CIDR blocks in the ACL are rejected. Blacklists are suitable for scenarios in which you want to deny access from specific IP addresses to an application. If a blacklist is enabled but no IP address is added to the blacklist, the listener forwards all requests.
      shared_ptr<string> aclType_ {};
      // The ID of the listener.
      shared_ptr<string> listenerId_ {};
    };

    class AclEntries : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AclEntries& obj) { 
        DARABONBA_PTR_TO_JSON(Entry, entry_);
        DARABONBA_PTR_TO_JSON(EntryDescription, entryDescription_);
      };
      friend void from_json(const Darabonba::Json& j, AclEntries& obj) { 
        DARABONBA_PTR_FROM_JSON(Entry, entry_);
        DARABONBA_PTR_FROM_JSON(EntryDescription, entryDescription_);
      };
      AclEntries() = default ;
      AclEntries(const AclEntries &) = default ;
      AclEntries(AclEntries &&) = default ;
      AclEntries(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AclEntries() = default ;
      AclEntries& operator=(const AclEntries &) = default ;
      AclEntries& operator=(AclEntries &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->entry_ == nullptr
        && this->entryDescription_ == nullptr; };
      // entry Field Functions 
      bool hasEntry() const { return this->entry_ != nullptr;};
      void deleteEntry() { this->entry_ = nullptr;};
      inline string getEntry() const { DARABONBA_PTR_GET_DEFAULT(entry_, "") };
      inline AclEntries& setEntry(string entry) { DARABONBA_PTR_SET_VALUE(entry_, entry) };


      // entryDescription Field Functions 
      bool hasEntryDescription() const { return this->entryDescription_ != nullptr;};
      void deleteEntryDescription() { this->entryDescription_ = nullptr;};
      inline string getEntryDescription() const { DARABONBA_PTR_GET_DEFAULT(entryDescription_, "") };
      inline AclEntries& setEntryDescription(string entryDescription) { DARABONBA_PTR_SET_VALUE(entryDescription_, entryDescription) };


    protected:
      // An IP address entry (192.168.XX.XX) or a CIDR block entry (10.0.XX.XX/24).
      shared_ptr<string> entry_ {};
      // The description of the ACL entry.
      shared_ptr<string> entryDescription_ {};
    };

    virtual bool empty() const override { return this->aclEntries_ == nullptr
        && this->aclId_ == nullptr && this->aclName_ == nullptr && this->aclStatus_ == nullptr && this->addressIPVersion_ == nullptr && this->relatedListeners_ == nullptr
        && this->requestId_ == nullptr && this->resourceGroupId_ == nullptr && this->tags_ == nullptr; };
    // aclEntries Field Functions 
    bool hasAclEntries() const { return this->aclEntries_ != nullptr;};
    void deleteAclEntries() { this->aclEntries_ = nullptr;};
    inline const vector<GetAclResponseBody::AclEntries> & getAclEntries() const { DARABONBA_PTR_GET_CONST(aclEntries_, vector<GetAclResponseBody::AclEntries>) };
    inline vector<GetAclResponseBody::AclEntries> getAclEntries() { DARABONBA_PTR_GET(aclEntries_, vector<GetAclResponseBody::AclEntries>) };
    inline GetAclResponseBody& setAclEntries(const vector<GetAclResponseBody::AclEntries> & aclEntries) { DARABONBA_PTR_SET_VALUE(aclEntries_, aclEntries) };
    inline GetAclResponseBody& setAclEntries(vector<GetAclResponseBody::AclEntries> && aclEntries) { DARABONBA_PTR_SET_RVALUE(aclEntries_, aclEntries) };


    // aclId Field Functions 
    bool hasAclId() const { return this->aclId_ != nullptr;};
    void deleteAclId() { this->aclId_ = nullptr;};
    inline string getAclId() const { DARABONBA_PTR_GET_DEFAULT(aclId_, "") };
    inline GetAclResponseBody& setAclId(string aclId) { DARABONBA_PTR_SET_VALUE(aclId_, aclId) };


    // aclName Field Functions 
    bool hasAclName() const { return this->aclName_ != nullptr;};
    void deleteAclName() { this->aclName_ = nullptr;};
    inline string getAclName() const { DARABONBA_PTR_GET_DEFAULT(aclName_, "") };
    inline GetAclResponseBody& setAclName(string aclName) { DARABONBA_PTR_SET_VALUE(aclName_, aclName) };


    // aclStatus Field Functions 
    bool hasAclStatus() const { return this->aclStatus_ != nullptr;};
    void deleteAclStatus() { this->aclStatus_ = nullptr;};
    inline string getAclStatus() const { DARABONBA_PTR_GET_DEFAULT(aclStatus_, "") };
    inline GetAclResponseBody& setAclStatus(string aclStatus) { DARABONBA_PTR_SET_VALUE(aclStatus_, aclStatus) };


    // addressIPVersion Field Functions 
    bool hasAddressIPVersion() const { return this->addressIPVersion_ != nullptr;};
    void deleteAddressIPVersion() { this->addressIPVersion_ = nullptr;};
    inline string getAddressIPVersion() const { DARABONBA_PTR_GET_DEFAULT(addressIPVersion_, "") };
    inline GetAclResponseBody& setAddressIPVersion(string addressIPVersion) { DARABONBA_PTR_SET_VALUE(addressIPVersion_, addressIPVersion) };


    // relatedListeners Field Functions 
    bool hasRelatedListeners() const { return this->relatedListeners_ != nullptr;};
    void deleteRelatedListeners() { this->relatedListeners_ = nullptr;};
    inline const vector<GetAclResponseBody::RelatedListeners> & getRelatedListeners() const { DARABONBA_PTR_GET_CONST(relatedListeners_, vector<GetAclResponseBody::RelatedListeners>) };
    inline vector<GetAclResponseBody::RelatedListeners> getRelatedListeners() { DARABONBA_PTR_GET(relatedListeners_, vector<GetAclResponseBody::RelatedListeners>) };
    inline GetAclResponseBody& setRelatedListeners(const vector<GetAclResponseBody::RelatedListeners> & relatedListeners) { DARABONBA_PTR_SET_VALUE(relatedListeners_, relatedListeners) };
    inline GetAclResponseBody& setRelatedListeners(vector<GetAclResponseBody::RelatedListeners> && relatedListeners) { DARABONBA_PTR_SET_RVALUE(relatedListeners_, relatedListeners) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAclResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline GetAclResponseBody& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<GetAclResponseBody::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<GetAclResponseBody::Tags>) };
    inline vector<GetAclResponseBody::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<GetAclResponseBody::Tags>) };
    inline GetAclResponseBody& setTags(const vector<GetAclResponseBody::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline GetAclResponseBody& setTags(vector<GetAclResponseBody::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    // The entries of the ACL.
    shared_ptr<vector<GetAclResponseBody::AclEntries>> aclEntries_ {};
    // The ID of the request.
    shared_ptr<string> aclId_ {};
    // The ID of the GA instance.
    shared_ptr<string> aclName_ {};
    // The IP version of the network ACL. Valid values:
    // 
    // *   **IPv4**
    // *   **IPv6**
    shared_ptr<string> aclStatus_ {};
    // The ID of the network ACL.
    shared_ptr<string> addressIPVersion_ {};
    // The listeners that are associated with the ACL.
    shared_ptr<vector<GetAclResponseBody::RelatedListeners>> relatedListeners_ {};
    // The ID of the network ACL.
    shared_ptr<string> requestId_ {};
    // The name of the network ACL.
    shared_ptr<string> resourceGroupId_ {};
    // The tag of the ACL.
    shared_ptr<vector<GetAclResponseBody::Tags>> tags_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ga20191120
#endif
