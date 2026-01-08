// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEADDRESSBOOKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEADDRESSBOOKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeAddressBookResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAddressBookResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Acls, acls_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAddressBookResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Acls, acls_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeAddressBookResponseBody() = default ;
    DescribeAddressBookResponseBody(const DescribeAddressBookResponseBody &) = default ;
    DescribeAddressBookResponseBody(DescribeAddressBookResponseBody &&) = default ;
    DescribeAddressBookResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAddressBookResponseBody() = default ;
    DescribeAddressBookResponseBody& operator=(const DescribeAddressBookResponseBody &) = default ;
    DescribeAddressBookResponseBody& operator=(DescribeAddressBookResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Acls : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Acls& obj) { 
        DARABONBA_PTR_TO_JSON(AckClusterConnectorId, ackClusterConnectorId_);
        DARABONBA_PTR_TO_JSON(AckClusterConnectorName, ackClusterConnectorName_);
        DARABONBA_PTR_TO_JSON(AckLabels, ackLabels_);
        DARABONBA_PTR_TO_JSON(AckNamespaces, ackNamespaces_);
        DARABONBA_PTR_TO_JSON(AddressList, addressList_);
        DARABONBA_PTR_TO_JSON(AddressListCount, addressListCount_);
        DARABONBA_PTR_TO_JSON(Addresses, addresses_);
        DARABONBA_PTR_TO_JSON(AutoAddTagEcs, autoAddTagEcs_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(GroupName, groupName_);
        DARABONBA_PTR_TO_JSON(GroupType, groupType_);
        DARABONBA_PTR_TO_JSON(GroupUuid, groupUuid_);
        DARABONBA_PTR_TO_JSON(ReferenceCount, referenceCount_);
        DARABONBA_PTR_TO_JSON(RegionNo, regionNo_);
        DARABONBA_PTR_TO_JSON(TagList, tagList_);
        DARABONBA_PTR_TO_JSON(TagRelation, tagRelation_);
      };
      friend void from_json(const Darabonba::Json& j, Acls& obj) { 
        DARABONBA_PTR_FROM_JSON(AckClusterConnectorId, ackClusterConnectorId_);
        DARABONBA_PTR_FROM_JSON(AckClusterConnectorName, ackClusterConnectorName_);
        DARABONBA_PTR_FROM_JSON(AckLabels, ackLabels_);
        DARABONBA_PTR_FROM_JSON(AckNamespaces, ackNamespaces_);
        DARABONBA_PTR_FROM_JSON(AddressList, addressList_);
        DARABONBA_PTR_FROM_JSON(AddressListCount, addressListCount_);
        DARABONBA_PTR_FROM_JSON(Addresses, addresses_);
        DARABONBA_PTR_FROM_JSON(AutoAddTagEcs, autoAddTagEcs_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
        DARABONBA_PTR_FROM_JSON(GroupType, groupType_);
        DARABONBA_PTR_FROM_JSON(GroupUuid, groupUuid_);
        DARABONBA_PTR_FROM_JSON(ReferenceCount, referenceCount_);
        DARABONBA_PTR_FROM_JSON(RegionNo, regionNo_);
        DARABONBA_PTR_FROM_JSON(TagList, tagList_);
        DARABONBA_PTR_FROM_JSON(TagRelation, tagRelation_);
      };
      Acls() = default ;
      Acls(const Acls &) = default ;
      Acls(Acls &&) = default ;
      Acls(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Acls() = default ;
      Acls& operator=(const Acls &) = default ;
      Acls& operator=(Acls &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class TagList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TagList& obj) { 
          DARABONBA_PTR_TO_JSON(TagKey, tagKey_);
          DARABONBA_PTR_TO_JSON(TagValue, tagValue_);
        };
        friend void from_json(const Darabonba::Json& j, TagList& obj) { 
          DARABONBA_PTR_FROM_JSON(TagKey, tagKey_);
          DARABONBA_PTR_FROM_JSON(TagValue, tagValue_);
        };
        TagList() = default ;
        TagList(const TagList &) = default ;
        TagList(TagList &&) = default ;
        TagList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TagList() = default ;
        TagList& operator=(const TagList &) = default ;
        TagList& operator=(TagList &&) = default ;
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
        inline TagList& setTagKey(string tagKey) { DARABONBA_PTR_SET_VALUE(tagKey_, tagKey) };


        // tagValue Field Functions 
        bool hasTagValue() const { return this->tagValue_ != nullptr;};
        void deleteTagValue() { this->tagValue_ = nullptr;};
        inline string getTagValue() const { DARABONBA_PTR_GET_DEFAULT(tagValue_, "") };
        inline TagList& setTagValue(string tagValue) { DARABONBA_PTR_SET_VALUE(tagValue_, tagValue) };


      protected:
        // The key of the ECS tag.
        shared_ptr<string> tagKey_ {};
        // The value of the ECS tag.
        shared_ptr<string> tagValue_ {};
      };

      class Addresses : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Addresses& obj) { 
          DARABONBA_PTR_TO_JSON(Address, address_);
          DARABONBA_PTR_TO_JSON(Note, note_);
        };
        friend void from_json(const Darabonba::Json& j, Addresses& obj) { 
          DARABONBA_PTR_FROM_JSON(Address, address_);
          DARABONBA_PTR_FROM_JSON(Note, note_);
        };
        Addresses() = default ;
        Addresses(const Addresses &) = default ;
        Addresses(Addresses &&) = default ;
        Addresses(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Addresses() = default ;
        Addresses& operator=(const Addresses &) = default ;
        Addresses& operator=(Addresses &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->address_ == nullptr
        && this->note_ == nullptr; };
        // address Field Functions 
        bool hasAddress() const { return this->address_ != nullptr;};
        void deleteAddress() { this->address_ = nullptr;};
        inline string getAddress() const { DARABONBA_PTR_GET_DEFAULT(address_, "") };
        inline Addresses& setAddress(string address) { DARABONBA_PTR_SET_VALUE(address_, address) };


        // note Field Functions 
        bool hasNote() const { return this->note_ != nullptr;};
        void deleteNote() { this->note_ = nullptr;};
        inline string getNote() const { DARABONBA_PTR_GET_DEFAULT(note_, "") };
        inline Addresses& setNote(string note) { DARABONBA_PTR_SET_VALUE(note_, note) };


      protected:
        // Address information in the address book.
        shared_ptr<string> address_ {};
        // Single address description.
        shared_ptr<string> note_ {};
      };

      class AckLabels : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AckLabels& obj) { 
          DARABONBA_PTR_TO_JSON(Key, key_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, AckLabels& obj) { 
          DARABONBA_PTR_FROM_JSON(Key, key_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        AckLabels() = default ;
        AckLabels(const AckLabels &) = default ;
        AckLabels(AckLabels &&) = default ;
        AckLabels(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AckLabels() = default ;
        AckLabels& operator=(const AckLabels &) = default ;
        AckLabels& operator=(AckLabels &&) = default ;
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
        inline AckLabels& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline AckLabels& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        shared_ptr<string> key_ {};
        shared_ptr<string> value_ {};
      };

      virtual bool empty() const override { return this->ackClusterConnectorId_ == nullptr
        && this->ackClusterConnectorName_ == nullptr && this->ackLabels_ == nullptr && this->ackNamespaces_ == nullptr && this->addressList_ == nullptr && this->addressListCount_ == nullptr
        && this->addresses_ == nullptr && this->autoAddTagEcs_ == nullptr && this->description_ == nullptr && this->groupName_ == nullptr && this->groupType_ == nullptr
        && this->groupUuid_ == nullptr && this->referenceCount_ == nullptr && this->regionNo_ == nullptr && this->tagList_ == nullptr && this->tagRelation_ == nullptr; };
      // ackClusterConnectorId Field Functions 
      bool hasAckClusterConnectorId() const { return this->ackClusterConnectorId_ != nullptr;};
      void deleteAckClusterConnectorId() { this->ackClusterConnectorId_ = nullptr;};
      inline string getAckClusterConnectorId() const { DARABONBA_PTR_GET_DEFAULT(ackClusterConnectorId_, "") };
      inline Acls& setAckClusterConnectorId(string ackClusterConnectorId) { DARABONBA_PTR_SET_VALUE(ackClusterConnectorId_, ackClusterConnectorId) };


      // ackClusterConnectorName Field Functions 
      bool hasAckClusterConnectorName() const { return this->ackClusterConnectorName_ != nullptr;};
      void deleteAckClusterConnectorName() { this->ackClusterConnectorName_ = nullptr;};
      inline string getAckClusterConnectorName() const { DARABONBA_PTR_GET_DEFAULT(ackClusterConnectorName_, "") };
      inline Acls& setAckClusterConnectorName(string ackClusterConnectorName) { DARABONBA_PTR_SET_VALUE(ackClusterConnectorName_, ackClusterConnectorName) };


      // ackLabels Field Functions 
      bool hasAckLabels() const { return this->ackLabels_ != nullptr;};
      void deleteAckLabels() { this->ackLabels_ = nullptr;};
      inline const vector<Acls::AckLabels> & getAckLabels() const { DARABONBA_PTR_GET_CONST(ackLabels_, vector<Acls::AckLabels>) };
      inline vector<Acls::AckLabels> getAckLabels() { DARABONBA_PTR_GET(ackLabels_, vector<Acls::AckLabels>) };
      inline Acls& setAckLabels(const vector<Acls::AckLabels> & ackLabels) { DARABONBA_PTR_SET_VALUE(ackLabels_, ackLabels) };
      inline Acls& setAckLabels(vector<Acls::AckLabels> && ackLabels) { DARABONBA_PTR_SET_RVALUE(ackLabels_, ackLabels) };


      // ackNamespaces Field Functions 
      bool hasAckNamespaces() const { return this->ackNamespaces_ != nullptr;};
      void deleteAckNamespaces() { this->ackNamespaces_ = nullptr;};
      inline const vector<string> & getAckNamespaces() const { DARABONBA_PTR_GET_CONST(ackNamespaces_, vector<string>) };
      inline vector<string> getAckNamespaces() { DARABONBA_PTR_GET(ackNamespaces_, vector<string>) };
      inline Acls& setAckNamespaces(const vector<string> & ackNamespaces) { DARABONBA_PTR_SET_VALUE(ackNamespaces_, ackNamespaces) };
      inline Acls& setAckNamespaces(vector<string> && ackNamespaces) { DARABONBA_PTR_SET_RVALUE(ackNamespaces_, ackNamespaces) };


      // addressList Field Functions 
      bool hasAddressList() const { return this->addressList_ != nullptr;};
      void deleteAddressList() { this->addressList_ = nullptr;};
      inline const vector<string> & getAddressList() const { DARABONBA_PTR_GET_CONST(addressList_, vector<string>) };
      inline vector<string> getAddressList() { DARABONBA_PTR_GET(addressList_, vector<string>) };
      inline Acls& setAddressList(const vector<string> & addressList) { DARABONBA_PTR_SET_VALUE(addressList_, addressList) };
      inline Acls& setAddressList(vector<string> && addressList) { DARABONBA_PTR_SET_RVALUE(addressList_, addressList) };


      // addressListCount Field Functions 
      bool hasAddressListCount() const { return this->addressListCount_ != nullptr;};
      void deleteAddressListCount() { this->addressListCount_ = nullptr;};
      inline int32_t getAddressListCount() const { DARABONBA_PTR_GET_DEFAULT(addressListCount_, 0) };
      inline Acls& setAddressListCount(int32_t addressListCount) { DARABONBA_PTR_SET_VALUE(addressListCount_, addressListCount) };


      // addresses Field Functions 
      bool hasAddresses() const { return this->addresses_ != nullptr;};
      void deleteAddresses() { this->addresses_ = nullptr;};
      inline const vector<Acls::Addresses> & getAddresses() const { DARABONBA_PTR_GET_CONST(addresses_, vector<Acls::Addresses>) };
      inline vector<Acls::Addresses> getAddresses() { DARABONBA_PTR_GET(addresses_, vector<Acls::Addresses>) };
      inline Acls& setAddresses(const vector<Acls::Addresses> & addresses) { DARABONBA_PTR_SET_VALUE(addresses_, addresses) };
      inline Acls& setAddresses(vector<Acls::Addresses> && addresses) { DARABONBA_PTR_SET_RVALUE(addresses_, addresses) };


      // autoAddTagEcs Field Functions 
      bool hasAutoAddTagEcs() const { return this->autoAddTagEcs_ != nullptr;};
      void deleteAutoAddTagEcs() { this->autoAddTagEcs_ = nullptr;};
      inline int32_t getAutoAddTagEcs() const { DARABONBA_PTR_GET_DEFAULT(autoAddTagEcs_, 0) };
      inline Acls& setAutoAddTagEcs(int32_t autoAddTagEcs) { DARABONBA_PTR_SET_VALUE(autoAddTagEcs_, autoAddTagEcs) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Acls& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // groupName Field Functions 
      bool hasGroupName() const { return this->groupName_ != nullptr;};
      void deleteGroupName() { this->groupName_ = nullptr;};
      inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
      inline Acls& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


      // groupType Field Functions 
      bool hasGroupType() const { return this->groupType_ != nullptr;};
      void deleteGroupType() { this->groupType_ = nullptr;};
      inline string getGroupType() const { DARABONBA_PTR_GET_DEFAULT(groupType_, "") };
      inline Acls& setGroupType(string groupType) { DARABONBA_PTR_SET_VALUE(groupType_, groupType) };


      // groupUuid Field Functions 
      bool hasGroupUuid() const { return this->groupUuid_ != nullptr;};
      void deleteGroupUuid() { this->groupUuid_ = nullptr;};
      inline string getGroupUuid() const { DARABONBA_PTR_GET_DEFAULT(groupUuid_, "") };
      inline Acls& setGroupUuid(string groupUuid) { DARABONBA_PTR_SET_VALUE(groupUuid_, groupUuid) };


      // referenceCount Field Functions 
      bool hasReferenceCount() const { return this->referenceCount_ != nullptr;};
      void deleteReferenceCount() { this->referenceCount_ = nullptr;};
      inline int32_t getReferenceCount() const { DARABONBA_PTR_GET_DEFAULT(referenceCount_, 0) };
      inline Acls& setReferenceCount(int32_t referenceCount) { DARABONBA_PTR_SET_VALUE(referenceCount_, referenceCount) };


      // regionNo Field Functions 
      bool hasRegionNo() const { return this->regionNo_ != nullptr;};
      void deleteRegionNo() { this->regionNo_ = nullptr;};
      inline string getRegionNo() const { DARABONBA_PTR_GET_DEFAULT(regionNo_, "") };
      inline Acls& setRegionNo(string regionNo) { DARABONBA_PTR_SET_VALUE(regionNo_, regionNo) };


      // tagList Field Functions 
      bool hasTagList() const { return this->tagList_ != nullptr;};
      void deleteTagList() { this->tagList_ = nullptr;};
      inline const vector<Acls::TagList> & getTagList() const { DARABONBA_PTR_GET_CONST(tagList_, vector<Acls::TagList>) };
      inline vector<Acls::TagList> getTagList() { DARABONBA_PTR_GET(tagList_, vector<Acls::TagList>) };
      inline Acls& setTagList(const vector<Acls::TagList> & tagList) { DARABONBA_PTR_SET_VALUE(tagList_, tagList) };
      inline Acls& setTagList(vector<Acls::TagList> && tagList) { DARABONBA_PTR_SET_RVALUE(tagList_, tagList) };


      // tagRelation Field Functions 
      bool hasTagRelation() const { return this->tagRelation_ != nullptr;};
      void deleteTagRelation() { this->tagRelation_ = nullptr;};
      inline string getTagRelation() const { DARABONBA_PTR_GET_DEFAULT(tagRelation_, "") };
      inline Acls& setTagRelation(string tagRelation) { DARABONBA_PTR_SET_VALUE(tagRelation_, tagRelation) };


    protected:
      shared_ptr<string> ackClusterConnectorId_ {};
      shared_ptr<string> ackClusterConnectorName_ {};
      shared_ptr<vector<Acls::AckLabels>> ackLabels_ {};
      shared_ptr<vector<string>> ackNamespaces_ {};
      // The addresses in the address book.
      shared_ptr<vector<string>> addressList_ {};
      // The number of addresses in the address book.
      shared_ptr<int32_t> addressListCount_ {};
      // A list of addresses in the address book, each with a single address description.
      shared_ptr<vector<Acls::Addresses>> addresses_ {};
      // Indicates whether the public IP addresses of ECS instances are automatically added to the address book if the instances match the specified tags. The setting takes effect on both newly purchased ECS instances whose tag settings are complete and ECS instances whose tag settings are modified. Valid values:
      // 
      // *   **1**: yes
      // *   **0**: no
      shared_ptr<int32_t> autoAddTagEcs_ {};
      // The description of the address book.
      shared_ptr<string> description_ {};
      // The name of the address book.
      shared_ptr<string> groupName_ {};
      // The type of the address book. Valid values:
      // 
      // *   **ip**: IP address book
      // *   **domain**: domain address book
      // *   **port**: port address book
      // *   **tag**: ECS tag-based address book
      // *   **allCloud**: cloud service address book
      // *   **threat**: threat intelligence address book
      shared_ptr<string> groupType_ {};
      // The UUID of the address book.
      shared_ptr<string> groupUuid_ {};
      // The number of times that the address book is referenced.
      shared_ptr<int32_t> referenceCount_ {};
      shared_ptr<string> regionNo_ {};
      // The details about the ECS tags that can be automatically added to the address book.
      shared_ptr<vector<Acls::TagList>> tagList_ {};
      // The logical relationship among ECS tags. Valid values:
      // 
      // *   **and**: Only the public IP addresses of ECS instances that match all the specified tags can be added to the address book.
      // *   **or**: The public IP addresses of ECS instances that match any of the specified tags can be added to the address book.
      shared_ptr<string> tagRelation_ {};
    };

    virtual bool empty() const override { return this->acls_ == nullptr
        && this->pageNo_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // acls Field Functions 
    bool hasAcls() const { return this->acls_ != nullptr;};
    void deleteAcls() { this->acls_ = nullptr;};
    inline const vector<DescribeAddressBookResponseBody::Acls> & getAcls() const { DARABONBA_PTR_GET_CONST(acls_, vector<DescribeAddressBookResponseBody::Acls>) };
    inline vector<DescribeAddressBookResponseBody::Acls> getAcls() { DARABONBA_PTR_GET(acls_, vector<DescribeAddressBookResponseBody::Acls>) };
    inline DescribeAddressBookResponseBody& setAcls(const vector<DescribeAddressBookResponseBody::Acls> & acls) { DARABONBA_PTR_SET_VALUE(acls_, acls) };
    inline DescribeAddressBookResponseBody& setAcls(vector<DescribeAddressBookResponseBody::Acls> && acls) { DARABONBA_PTR_SET_RVALUE(acls_, acls) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline string getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, "") };
    inline DescribeAddressBookResponseBody& setPageNo(string pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline DescribeAddressBookResponseBody& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAddressBookResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline string getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, "") };
    inline DescribeAddressBookResponseBody& setTotalCount(string totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The information about the address book.
    shared_ptr<vector<DescribeAddressBookResponseBody::Acls>> acls_ {};
    // The page number.
    shared_ptr<string> pageNo_ {};
    // The number of entries per page.
    shared_ptr<string> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of the returned address books.
    shared_ptr<string> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
