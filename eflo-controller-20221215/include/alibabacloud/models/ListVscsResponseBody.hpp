// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVSCSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTVSCSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EfloController20221215
{
namespace Models
{
  class ListVscsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVscsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(Vscs, vscs_);
    };
    friend void from_json(const Darabonba::Json& j, ListVscsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(Vscs, vscs_);
    };
    ListVscsResponseBody() = default ;
    ListVscsResponseBody(const ListVscsResponseBody &) = default ;
    ListVscsResponseBody(ListVscsResponseBody &&) = default ;
    ListVscsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVscsResponseBody() = default ;
    ListVscsResponseBody& operator=(const ListVscsResponseBody &) = default ;
    ListVscsResponseBody& operator=(ListVscsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Vscs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Vscs& obj) { 
        DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
        DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
        DARABONBA_PTR_TO_JSON(VscId, vscId_);
        DARABONBA_PTR_TO_JSON(VscName, vscName_);
        DARABONBA_PTR_TO_JSON(VscType, vscType_);
      };
      friend void from_json(const Darabonba::Json& j, Vscs& obj) { 
        DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
        DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
        DARABONBA_PTR_FROM_JSON(VscId, vscId_);
        DARABONBA_PTR_FROM_JSON(VscName, vscName_);
        DARABONBA_PTR_FROM_JSON(VscType, vscType_);
      };
      Vscs() = default ;
      Vscs(const Vscs &) = default ;
      Vscs(Vscs &&) = default ;
      Vscs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Vscs() = default ;
      Vscs& operator=(const Vscs &) = default ;
      Vscs& operator=(Vscs &&) = default ;
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
        // The tag value.
        shared_ptr<string> tagValue_ {};
      };

      virtual bool empty() const override { return this->nodeId_ == nullptr
        && this->resourceGroupId_ == nullptr && this->status_ == nullptr && this->tags_ == nullptr && this->vscId_ == nullptr && this->vscName_ == nullptr
        && this->vscType_ == nullptr; };
      // nodeId Field Functions 
      bool hasNodeId() const { return this->nodeId_ != nullptr;};
      void deleteNodeId() { this->nodeId_ = nullptr;};
      inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
      inline Vscs& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline Vscs& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Vscs& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<Vscs::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Vscs::Tags>) };
      inline vector<Vscs::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<Vscs::Tags>) };
      inline Vscs& setTags(const vector<Vscs::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline Vscs& setTags(vector<Vscs::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      // vscId Field Functions 
      bool hasVscId() const { return this->vscId_ != nullptr;};
      void deleteVscId() { this->vscId_ = nullptr;};
      inline string getVscId() const { DARABONBA_PTR_GET_DEFAULT(vscId_, "") };
      inline Vscs& setVscId(string vscId) { DARABONBA_PTR_SET_VALUE(vscId_, vscId) };


      // vscName Field Functions 
      bool hasVscName() const { return this->vscName_ != nullptr;};
      void deleteVscName() { this->vscName_ = nullptr;};
      inline string getVscName() const { DARABONBA_PTR_GET_DEFAULT(vscName_, "") };
      inline Vscs& setVscName(string vscName) { DARABONBA_PTR_SET_VALUE(vscName_, vscName) };


      // vscType Field Functions 
      bool hasVscType() const { return this->vscType_ != nullptr;};
      void deleteVscType() { this->vscType_ = nullptr;};
      inline string getVscType() const { DARABONBA_PTR_GET_DEFAULT(vscType_, "") };
      inline Vscs& setVscType(string vscType) { DARABONBA_PTR_SET_VALUE(vscType_, vscType) };


    protected:
      // The ID of the Lingjun node.
      shared_ptr<string> nodeId_ {};
      // The resource group ID.
      shared_ptr<string> resourceGroupId_ {};
      // The VSC status.
      // 
      // Valid values:
      // 
      // *   Creating
      // *   Normal
      // *   Deleting
      shared_ptr<string> status_ {};
      // The tags.
      shared_ptr<vector<Vscs::Tags>> tags_ {};
      // The VSC ID.
      shared_ptr<string> vscId_ {};
      // The custom name of the VSC.
      shared_ptr<string> vscName_ {};
      // The VSC type. Valid values: primary and standard.
      shared_ptr<string> vscType_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr && this->vscs_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListVscsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListVscsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListVscsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListVscsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // vscs Field Functions 
    bool hasVscs() const { return this->vscs_ != nullptr;};
    void deleteVscs() { this->vscs_ = nullptr;};
    inline const vector<ListVscsResponseBody::Vscs> & getVscs() const { DARABONBA_PTR_GET_CONST(vscs_, vector<ListVscsResponseBody::Vscs>) };
    inline vector<ListVscsResponseBody::Vscs> getVscs() { DARABONBA_PTR_GET(vscs_, vector<ListVscsResponseBody::Vscs>) };
    inline ListVscsResponseBody& setVscs(const vector<ListVscsResponseBody::Vscs> & vscs) { DARABONBA_PTR_SET_VALUE(vscs_, vscs) };
    inline ListVscsResponseBody& setVscs(vector<ListVscsResponseBody::Vscs> && vscs) { DARABONBA_PTR_SET_RVALUE(vscs_, vscs) };


  protected:
    // No response is returned. The TotalCount parameter is used.
    shared_ptr<int32_t> maxResults_ {};
    // The token. It can be used in the next request to retrieve a new page of results. If this parameter is empty, no next page exists.
    // 
    // This parameter is required.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of VSCs.
    shared_ptr<int32_t> totalCount_ {};
    // The VSCs.
    shared_ptr<vector<ListVscsResponseBody::Vscs>> vscs_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EfloController20221215
#endif
