// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPREFIXLISTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPREFIXLISTSRESPONSEBODY_HPP_
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
  class DescribePrefixListsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePrefixListsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PrefixLists, prefixLists_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePrefixListsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PrefixLists, prefixLists_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribePrefixListsResponseBody() = default ;
    DescribePrefixListsResponseBody(const DescribePrefixListsResponseBody &) = default ;
    DescribePrefixListsResponseBody(DescribePrefixListsResponseBody &&) = default ;
    DescribePrefixListsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePrefixListsResponseBody() = default ;
    DescribePrefixListsResponseBody& operator=(const DescribePrefixListsResponseBody &) = default ;
    DescribePrefixListsResponseBody& operator=(DescribePrefixListsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PrefixLists : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PrefixLists& obj) { 
        DARABONBA_PTR_TO_JSON(PrefixList, prefixList_);
      };
      friend void from_json(const Darabonba::Json& j, PrefixLists& obj) { 
        DARABONBA_PTR_FROM_JSON(PrefixList, prefixList_);
      };
      PrefixLists() = default ;
      PrefixLists(const PrefixLists &) = default ;
      PrefixLists(PrefixLists &&) = default ;
      PrefixLists(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PrefixLists() = default ;
      PrefixLists& operator=(const PrefixLists &) = default ;
      PrefixLists& operator=(PrefixLists &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class PrefixList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PrefixList& obj) { 
          DARABONBA_PTR_TO_JSON(AddressFamily, addressFamily_);
          DARABONBA_PTR_TO_JSON(AssociationCount, associationCount_);
          DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(MaxEntries, maxEntries_);
          DARABONBA_PTR_TO_JSON(PrefixListId, prefixListId_);
          DARABONBA_PTR_TO_JSON(PrefixListName, prefixListName_);
          DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_TO_JSON(Tags, tags_);
        };
        friend void from_json(const Darabonba::Json& j, PrefixList& obj) { 
          DARABONBA_PTR_FROM_JSON(AddressFamily, addressFamily_);
          DARABONBA_PTR_FROM_JSON(AssociationCount, associationCount_);
          DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(MaxEntries, maxEntries_);
          DARABONBA_PTR_FROM_JSON(PrefixListId, prefixListId_);
          DARABONBA_PTR_FROM_JSON(PrefixListName, prefixListName_);
          DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_FROM_JSON(Tags, tags_);
        };
        PrefixList() = default ;
        PrefixList(const PrefixList &) = default ;
        PrefixList(PrefixList &&) = default ;
        PrefixList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PrefixList() = default ;
        PrefixList& operator=(const PrefixList &) = default ;
        PrefixList& operator=(PrefixList &&) = default ;
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
            // The tag value. A prefix list can have 1 to 20 tags. The tag value can be an empty string.
            // 
            // The tag value can be up to 128 characters in length and cannot contain `http:// or https://`.
            shared_ptr<string> tagKey_ {};
            // The tag key. A prefix list can have 1 to 20 tags. The tag key cannot be an empty string. The tag key can be up to 128 characters in length and cannot start with `acs:` or `aliyun`. It cannot contain `http://` or `https://`.
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

        virtual bool empty() const override { return this->addressFamily_ == nullptr
        && this->associationCount_ == nullptr && this->creationTime_ == nullptr && this->description_ == nullptr && this->maxEntries_ == nullptr && this->prefixListId_ == nullptr
        && this->prefixListName_ == nullptr && this->resourceGroupId_ == nullptr && this->tags_ == nullptr; };
        // addressFamily Field Functions 
        bool hasAddressFamily() const { return this->addressFamily_ != nullptr;};
        void deleteAddressFamily() { this->addressFamily_ = nullptr;};
        inline string getAddressFamily() const { DARABONBA_PTR_GET_DEFAULT(addressFamily_, "") };
        inline PrefixList& setAddressFamily(string addressFamily) { DARABONBA_PTR_SET_VALUE(addressFamily_, addressFamily) };


        // associationCount Field Functions 
        bool hasAssociationCount() const { return this->associationCount_ != nullptr;};
        void deleteAssociationCount() { this->associationCount_ = nullptr;};
        inline int32_t getAssociationCount() const { DARABONBA_PTR_GET_DEFAULT(associationCount_, 0) };
        inline PrefixList& setAssociationCount(int32_t associationCount) { DARABONBA_PTR_SET_VALUE(associationCount_, associationCount) };


        // creationTime Field Functions 
        bool hasCreationTime() const { return this->creationTime_ != nullptr;};
        void deleteCreationTime() { this->creationTime_ = nullptr;};
        inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
        inline PrefixList& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline PrefixList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // maxEntries Field Functions 
        bool hasMaxEntries() const { return this->maxEntries_ != nullptr;};
        void deleteMaxEntries() { this->maxEntries_ = nullptr;};
        inline int32_t getMaxEntries() const { DARABONBA_PTR_GET_DEFAULT(maxEntries_, 0) };
        inline PrefixList& setMaxEntries(int32_t maxEntries) { DARABONBA_PTR_SET_VALUE(maxEntries_, maxEntries) };


        // prefixListId Field Functions 
        bool hasPrefixListId() const { return this->prefixListId_ != nullptr;};
        void deletePrefixListId() { this->prefixListId_ = nullptr;};
        inline string getPrefixListId() const { DARABONBA_PTR_GET_DEFAULT(prefixListId_, "") };
        inline PrefixList& setPrefixListId(string prefixListId) { DARABONBA_PTR_SET_VALUE(prefixListId_, prefixListId) };


        // prefixListName Field Functions 
        bool hasPrefixListName() const { return this->prefixListName_ != nullptr;};
        void deletePrefixListName() { this->prefixListName_ = nullptr;};
        inline string getPrefixListName() const { DARABONBA_PTR_GET_DEFAULT(prefixListName_, "") };
        inline PrefixList& setPrefixListName(string prefixListName) { DARABONBA_PTR_SET_VALUE(prefixListName_, prefixListName) };


        // resourceGroupId Field Functions 
        bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
        void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
        inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
        inline PrefixList& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


        // tags Field Functions 
        bool hasTags() const { return this->tags_ != nullptr;};
        void deleteTags() { this->tags_ = nullptr;};
        inline const PrefixList::Tags & getTags() const { DARABONBA_PTR_GET_CONST(tags_, PrefixList::Tags) };
        inline PrefixList::Tags getTags() { DARABONBA_PTR_GET(tags_, PrefixList::Tags) };
        inline PrefixList& setTags(const PrefixList::Tags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
        inline PrefixList& setTags(PrefixList::Tags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      protected:
        // The IP address family of the prefix list. Valid values:
        // 
        // *   IPv4
        // *   IPv6
        shared_ptr<string> addressFamily_ {};
        // The number of associated resources.
        shared_ptr<int32_t> associationCount_ {};
        // The time when the prefix list was created.
        shared_ptr<string> creationTime_ {};
        // The description of the prefix list.
        shared_ptr<string> description_ {};
        // The maximum number of entries that the prefix list can contain.
        shared_ptr<int32_t> maxEntries_ {};
        // The ID of the prefix list.
        shared_ptr<string> prefixListId_ {};
        // The name of the prefix list.
        shared_ptr<string> prefixListName_ {};
        // The ID of the resource group to which the prefix list belongs.
        shared_ptr<string> resourceGroupId_ {};
        // The tags of the prefix list.
        shared_ptr<PrefixList::Tags> tags_ {};
      };

      virtual bool empty() const override { return this->prefixList_ == nullptr; };
      // prefixList Field Functions 
      bool hasPrefixList() const { return this->prefixList_ != nullptr;};
      void deletePrefixList() { this->prefixList_ = nullptr;};
      inline const vector<PrefixLists::PrefixList> & getPrefixList() const { DARABONBA_PTR_GET_CONST(prefixList_, vector<PrefixLists::PrefixList>) };
      inline vector<PrefixLists::PrefixList> getPrefixList() { DARABONBA_PTR_GET(prefixList_, vector<PrefixLists::PrefixList>) };
      inline PrefixLists& setPrefixList(const vector<PrefixLists::PrefixList> & prefixList) { DARABONBA_PTR_SET_VALUE(prefixList_, prefixList) };
      inline PrefixLists& setPrefixList(vector<PrefixLists::PrefixList> && prefixList) { DARABONBA_PTR_SET_RVALUE(prefixList_, prefixList) };


    protected:
      shared_ptr<vector<PrefixLists::PrefixList>> prefixList_ {};
    };

    virtual bool empty() const override { return this->nextToken_ == nullptr
        && this->prefixLists_ == nullptr && this->requestId_ == nullptr; };
    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribePrefixListsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // prefixLists Field Functions 
    bool hasPrefixLists() const { return this->prefixLists_ != nullptr;};
    void deletePrefixLists() { this->prefixLists_ = nullptr;};
    inline const DescribePrefixListsResponseBody::PrefixLists & getPrefixLists() const { DARABONBA_PTR_GET_CONST(prefixLists_, DescribePrefixListsResponseBody::PrefixLists) };
    inline DescribePrefixListsResponseBody::PrefixLists getPrefixLists() { DARABONBA_PTR_GET(prefixLists_, DescribePrefixListsResponseBody::PrefixLists) };
    inline DescribePrefixListsResponseBody& setPrefixLists(const DescribePrefixListsResponseBody::PrefixLists & prefixLists) { DARABONBA_PTR_SET_VALUE(prefixLists_, prefixLists) };
    inline DescribePrefixListsResponseBody& setPrefixLists(DescribePrefixListsResponseBody::PrefixLists && prefixLists) { DARABONBA_PTR_SET_RVALUE(prefixLists_, prefixLists) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePrefixListsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The query token that is returned in this call. If the return value is empty, no more data is returned.
    shared_ptr<string> nextToken_ {};
    // Details about the prefix lists.
    shared_ptr<DescribePrefixListsResponseBody::PrefixLists> prefixLists_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
