// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPORTRANGELISTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPORTRANGELISTSRESPONSEBODY_HPP_
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
  class DescribePortRangeListsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePortRangeListsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PortRangeLists, portRangeLists_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePortRangeListsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PortRangeLists, portRangeLists_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribePortRangeListsResponseBody() = default ;
    DescribePortRangeListsResponseBody(const DescribePortRangeListsResponseBody &) = default ;
    DescribePortRangeListsResponseBody(DescribePortRangeListsResponseBody &&) = default ;
    DescribePortRangeListsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePortRangeListsResponseBody() = default ;
    DescribePortRangeListsResponseBody& operator=(const DescribePortRangeListsResponseBody &) = default ;
    DescribePortRangeListsResponseBody& operator=(DescribePortRangeListsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PortRangeLists : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PortRangeLists& obj) { 
        DARABONBA_PTR_TO_JSON(AssociationCount, associationCount_);
        DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(MaxEntries, maxEntries_);
        DARABONBA_PTR_TO_JSON(PortRangeListId, portRangeListId_);
        DARABONBA_PTR_TO_JSON(PortRangeListName, portRangeListName_);
        DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
      };
      friend void from_json(const Darabonba::Json& j, PortRangeLists& obj) { 
        DARABONBA_PTR_FROM_JSON(AssociationCount, associationCount_);
        DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(MaxEntries, maxEntries_);
        DARABONBA_PTR_FROM_JSON(PortRangeListId, portRangeListId_);
        DARABONBA_PTR_FROM_JSON(PortRangeListName, portRangeListName_);
        DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
      };
      PortRangeLists() = default ;
      PortRangeLists(const PortRangeLists &) = default ;
      PortRangeLists(PortRangeLists &&) = default ;
      PortRangeLists(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PortRangeLists() = default ;
      PortRangeLists& operator=(const PortRangeLists &) = default ;
      PortRangeLists& operator=(PortRangeLists &&) = default ;
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
        // The key of tag N.
        shared_ptr<string> tagKey_ {};
        // The value of tag N.
        shared_ptr<string> tagValue_ {};
      };

      virtual bool empty() const override { return this->associationCount_ == nullptr
        && this->creationTime_ == nullptr && this->description_ == nullptr && this->maxEntries_ == nullptr && this->portRangeListId_ == nullptr && this->portRangeListName_ == nullptr
        && this->resourceGroupId_ == nullptr && this->tags_ == nullptr; };
      // associationCount Field Functions 
      bool hasAssociationCount() const { return this->associationCount_ != nullptr;};
      void deleteAssociationCount() { this->associationCount_ = nullptr;};
      inline int32_t getAssociationCount() const { DARABONBA_PTR_GET_DEFAULT(associationCount_, 0) };
      inline PortRangeLists& setAssociationCount(int32_t associationCount) { DARABONBA_PTR_SET_VALUE(associationCount_, associationCount) };


      // creationTime Field Functions 
      bool hasCreationTime() const { return this->creationTime_ != nullptr;};
      void deleteCreationTime() { this->creationTime_ = nullptr;};
      inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
      inline PortRangeLists& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline PortRangeLists& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // maxEntries Field Functions 
      bool hasMaxEntries() const { return this->maxEntries_ != nullptr;};
      void deleteMaxEntries() { this->maxEntries_ = nullptr;};
      inline int32_t getMaxEntries() const { DARABONBA_PTR_GET_DEFAULT(maxEntries_, 0) };
      inline PortRangeLists& setMaxEntries(int32_t maxEntries) { DARABONBA_PTR_SET_VALUE(maxEntries_, maxEntries) };


      // portRangeListId Field Functions 
      bool hasPortRangeListId() const { return this->portRangeListId_ != nullptr;};
      void deletePortRangeListId() { this->portRangeListId_ = nullptr;};
      inline string getPortRangeListId() const { DARABONBA_PTR_GET_DEFAULT(portRangeListId_, "") };
      inline PortRangeLists& setPortRangeListId(string portRangeListId) { DARABONBA_PTR_SET_VALUE(portRangeListId_, portRangeListId) };


      // portRangeListName Field Functions 
      bool hasPortRangeListName() const { return this->portRangeListName_ != nullptr;};
      void deletePortRangeListName() { this->portRangeListName_ = nullptr;};
      inline string getPortRangeListName() const { DARABONBA_PTR_GET_DEFAULT(portRangeListName_, "") };
      inline PortRangeLists& setPortRangeListName(string portRangeListName) { DARABONBA_PTR_SET_VALUE(portRangeListName_, portRangeListName) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline PortRangeLists& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<PortRangeLists::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<PortRangeLists::Tags>) };
      inline vector<PortRangeLists::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<PortRangeLists::Tags>) };
      inline PortRangeLists& setTags(const vector<PortRangeLists::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline PortRangeLists& setTags(vector<PortRangeLists::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    protected:
      // The number of associated resources.
      shared_ptr<int32_t> associationCount_ {};
      // The time when the port list was created.
      shared_ptr<string> creationTime_ {};
      // The description of the port list.
      shared_ptr<string> description_ {};
      // The maximum number of entries in the port list.
      shared_ptr<int32_t> maxEntries_ {};
      // The ID of the port list.
      shared_ptr<string> portRangeListId_ {};
      // The name of the port list.
      shared_ptr<string> portRangeListName_ {};
      // The ID of the resource group to which to assign the port list.
      shared_ptr<string> resourceGroupId_ {};
      // The tags of the port list.
      shared_ptr<vector<PortRangeLists::Tags>> tags_ {};
    };

    virtual bool empty() const override { return this->nextToken_ == nullptr
        && this->portRangeLists_ == nullptr && this->requestId_ == nullptr; };
    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribePortRangeListsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // portRangeLists Field Functions 
    bool hasPortRangeLists() const { return this->portRangeLists_ != nullptr;};
    void deletePortRangeLists() { this->portRangeLists_ = nullptr;};
    inline const vector<DescribePortRangeListsResponseBody::PortRangeLists> & getPortRangeLists() const { DARABONBA_PTR_GET_CONST(portRangeLists_, vector<DescribePortRangeListsResponseBody::PortRangeLists>) };
    inline vector<DescribePortRangeListsResponseBody::PortRangeLists> getPortRangeLists() { DARABONBA_PTR_GET(portRangeLists_, vector<DescribePortRangeListsResponseBody::PortRangeLists>) };
    inline DescribePortRangeListsResponseBody& setPortRangeLists(const vector<DescribePortRangeListsResponseBody::PortRangeLists> & portRangeLists) { DARABONBA_PTR_SET_VALUE(portRangeLists_, portRangeLists) };
    inline DescribePortRangeListsResponseBody& setPortRangeLists(vector<DescribePortRangeListsResponseBody::PortRangeLists> && portRangeLists) { DARABONBA_PTR_SET_RVALUE(portRangeLists_, portRangeLists) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePortRangeListsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // A pagination token. If the return value is empty, no more data is returned.
    shared_ptr<string> nextToken_ {};
    // Details of the port lists.
    shared_ptr<vector<DescribePortRangeListsResponseBody::PortRangeLists>> portRangeLists_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
