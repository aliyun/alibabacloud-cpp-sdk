// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPREFIXLISTATTRIBUTESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPREFIXLISTATTRIBUTESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribePrefixListAttributesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePrefixListAttributesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AddressFamily, addressFamily_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Entries, entries_);
      DARABONBA_PTR_TO_JSON(MaxEntries, maxEntries_);
      DARABONBA_PTR_TO_JSON(PrefixListId, prefixListId_);
      DARABONBA_PTR_TO_JSON(PrefixListName, prefixListName_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePrefixListAttributesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AddressFamily, addressFamily_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Entries, entries_);
      DARABONBA_PTR_FROM_JSON(MaxEntries, maxEntries_);
      DARABONBA_PTR_FROM_JSON(PrefixListId, prefixListId_);
      DARABONBA_PTR_FROM_JSON(PrefixListName, prefixListName_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribePrefixListAttributesResponseBody() = default ;
    DescribePrefixListAttributesResponseBody(const DescribePrefixListAttributesResponseBody &) = default ;
    DescribePrefixListAttributesResponseBody(DescribePrefixListAttributesResponseBody &&) = default ;
    DescribePrefixListAttributesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePrefixListAttributesResponseBody() = default ;
    DescribePrefixListAttributesResponseBody& operator=(const DescribePrefixListAttributesResponseBody &) = default ;
    DescribePrefixListAttributesResponseBody& operator=(DescribePrefixListAttributesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Entries : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Entries& obj) { 
        DARABONBA_PTR_TO_JSON(Entry, entry_);
      };
      friend void from_json(const Darabonba::Json& j, Entries& obj) { 
        DARABONBA_PTR_FROM_JSON(Entry, entry_);
      };
      Entries() = default ;
      Entries(const Entries &) = default ;
      Entries(Entries &&) = default ;
      Entries(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Entries() = default ;
      Entries& operator=(const Entries &) = default ;
      Entries& operator=(Entries &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Entry : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Entry& obj) { 
          DARABONBA_PTR_TO_JSON(Cidr, cidr_);
          DARABONBA_PTR_TO_JSON(Description, description_);
        };
        friend void from_json(const Darabonba::Json& j, Entry& obj) { 
          DARABONBA_PTR_FROM_JSON(Cidr, cidr_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
        };
        Entry() = default ;
        Entry(const Entry &) = default ;
        Entry(Entry &&) = default ;
        Entry(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Entry() = default ;
        Entry& operator=(const Entry &) = default ;
        Entry& operator=(Entry &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->cidr_ == nullptr
        && this->description_ == nullptr; };
        // cidr Field Functions 
        bool hasCidr() const { return this->cidr_ != nullptr;};
        void deleteCidr() { this->cidr_ = nullptr;};
        inline string getCidr() const { DARABONBA_PTR_GET_DEFAULT(cidr_, "") };
        inline Entry& setCidr(string cidr) { DARABONBA_PTR_SET_VALUE(cidr_, cidr) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline Entry& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      protected:
        // The CIDR block in entry N.
        shared_ptr<string> cidr_ {};
        // The description in entry N.
        shared_ptr<string> description_ {};
      };

      virtual bool empty() const override { return this->entry_ == nullptr; };
      // entry Field Functions 
      bool hasEntry() const { return this->entry_ != nullptr;};
      void deleteEntry() { this->entry_ = nullptr;};
      inline const vector<Entries::Entry> & getEntry() const { DARABONBA_PTR_GET_CONST(entry_, vector<Entries::Entry>) };
      inline vector<Entries::Entry> getEntry() { DARABONBA_PTR_GET(entry_, vector<Entries::Entry>) };
      inline Entries& setEntry(const vector<Entries::Entry> & entry) { DARABONBA_PTR_SET_VALUE(entry_, entry) };
      inline Entries& setEntry(vector<Entries::Entry> && entry) { DARABONBA_PTR_SET_RVALUE(entry_, entry) };


    protected:
      shared_ptr<vector<Entries::Entry>> entry_ {};
    };

    virtual bool empty() const override { return this->addressFamily_ == nullptr
        && this->creationTime_ == nullptr && this->description_ == nullptr && this->entries_ == nullptr && this->maxEntries_ == nullptr && this->prefixListId_ == nullptr
        && this->prefixListName_ == nullptr && this->requestId_ == nullptr; };
    // addressFamily Field Functions 
    bool hasAddressFamily() const { return this->addressFamily_ != nullptr;};
    void deleteAddressFamily() { this->addressFamily_ = nullptr;};
    inline string getAddressFamily() const { DARABONBA_PTR_GET_DEFAULT(addressFamily_, "") };
    inline DescribePrefixListAttributesResponseBody& setAddressFamily(string addressFamily) { DARABONBA_PTR_SET_VALUE(addressFamily_, addressFamily) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline DescribePrefixListAttributesResponseBody& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribePrefixListAttributesResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // entries Field Functions 
    bool hasEntries() const { return this->entries_ != nullptr;};
    void deleteEntries() { this->entries_ = nullptr;};
    inline const DescribePrefixListAttributesResponseBody::Entries & getEntries() const { DARABONBA_PTR_GET_CONST(entries_, DescribePrefixListAttributesResponseBody::Entries) };
    inline DescribePrefixListAttributesResponseBody::Entries getEntries() { DARABONBA_PTR_GET(entries_, DescribePrefixListAttributesResponseBody::Entries) };
    inline DescribePrefixListAttributesResponseBody& setEntries(const DescribePrefixListAttributesResponseBody::Entries & entries) { DARABONBA_PTR_SET_VALUE(entries_, entries) };
    inline DescribePrefixListAttributesResponseBody& setEntries(DescribePrefixListAttributesResponseBody::Entries && entries) { DARABONBA_PTR_SET_RVALUE(entries_, entries) };


    // maxEntries Field Functions 
    bool hasMaxEntries() const { return this->maxEntries_ != nullptr;};
    void deleteMaxEntries() { this->maxEntries_ = nullptr;};
    inline int32_t getMaxEntries() const { DARABONBA_PTR_GET_DEFAULT(maxEntries_, 0) };
    inline DescribePrefixListAttributesResponseBody& setMaxEntries(int32_t maxEntries) { DARABONBA_PTR_SET_VALUE(maxEntries_, maxEntries) };


    // prefixListId Field Functions 
    bool hasPrefixListId() const { return this->prefixListId_ != nullptr;};
    void deletePrefixListId() { this->prefixListId_ = nullptr;};
    inline string getPrefixListId() const { DARABONBA_PTR_GET_DEFAULT(prefixListId_, "") };
    inline DescribePrefixListAttributesResponseBody& setPrefixListId(string prefixListId) { DARABONBA_PTR_SET_VALUE(prefixListId_, prefixListId) };


    // prefixListName Field Functions 
    bool hasPrefixListName() const { return this->prefixListName_ != nullptr;};
    void deletePrefixListName() { this->prefixListName_ = nullptr;};
    inline string getPrefixListName() const { DARABONBA_PTR_GET_DEFAULT(prefixListName_, "") };
    inline DescribePrefixListAttributesResponseBody& setPrefixListName(string prefixListName) { DARABONBA_PTR_SET_VALUE(prefixListName_, prefixListName) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePrefixListAttributesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The IP address family of the prefix list. Valid values:
    // 
    // *   IPv4
    // *   IPv6
    shared_ptr<string> addressFamily_ {};
    // The time when the prefix list was created.
    shared_ptr<string> creationTime_ {};
    // The description of the prefix list.
    shared_ptr<string> description_ {};
    // Details about the entries in the prefix list.
    shared_ptr<DescribePrefixListAttributesResponseBody::Entries> entries_ {};
    // The maximum number of entries in the prefix list.
    shared_ptr<int32_t> maxEntries_ {};
    // The ID of the prefix list.
    shared_ptr<string> prefixListId_ {};
    // The name of the prefix list.
    shared_ptr<string> prefixListName_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
