// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPROTECTEDRESOURCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPROTECTEDRESOURCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class ListProtectedResourcesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListProtectedResourcesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(ProtectedResources, protectedResources_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListProtectedResourcesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(ProtectedResources, protectedResources_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListProtectedResourcesResponseBody() = default ;
    ListProtectedResourcesResponseBody(const ListProtectedResourcesResponseBody &) = default ;
    ListProtectedResourcesResponseBody(ListProtectedResourcesResponseBody &&) = default ;
    ListProtectedResourcesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListProtectedResourcesResponseBody() = default ;
    ListProtectedResourcesResponseBody& operator=(const ListProtectedResourcesResponseBody &) = default ;
    ListProtectedResourcesResponseBody& operator=(ListProtectedResourcesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ProtectedResources : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ProtectedResources& obj) { 
        DARABONBA_PTR_TO_JSON(CreatedByProduct, createdByProduct_);
        DARABONBA_PTR_TO_JSON(ProtectedDataSize, protectedDataSize_);
        DARABONBA_PTR_TO_JSON(ProtectedResourceId, protectedResourceId_);
        DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
        DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
        DARABONBA_PTR_TO_JSON(SnapshotCount, snapshotCount_);
        DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
      };
      friend void from_json(const Darabonba::Json& j, ProtectedResources& obj) { 
        DARABONBA_PTR_FROM_JSON(CreatedByProduct, createdByProduct_);
        DARABONBA_PTR_FROM_JSON(ProtectedDataSize, protectedDataSize_);
        DARABONBA_PTR_FROM_JSON(ProtectedResourceId, protectedResourceId_);
        DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
        DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
        DARABONBA_PTR_FROM_JSON(SnapshotCount, snapshotCount_);
        DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
      };
      ProtectedResources() = default ;
      ProtectedResources(const ProtectedResources &) = default ;
      ProtectedResources(ProtectedResources &&) = default ;
      ProtectedResources(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ProtectedResources() = default ;
      ProtectedResources& operator=(const ProtectedResources &) = default ;
      ProtectedResources& operator=(ProtectedResources &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createdByProduct_ == nullptr
        && this->protectedDataSize_ == nullptr && this->protectedResourceId_ == nullptr && this->resourceId_ == nullptr && this->resourceOwnerId_ == nullptr && this->snapshotCount_ == nullptr
        && this->sourceType_ == nullptr; };
      // createdByProduct Field Functions 
      bool hasCreatedByProduct() const { return this->createdByProduct_ != nullptr;};
      void deleteCreatedByProduct() { this->createdByProduct_ = nullptr;};
      inline string getCreatedByProduct() const { DARABONBA_PTR_GET_DEFAULT(createdByProduct_, "") };
      inline ProtectedResources& setCreatedByProduct(string createdByProduct) { DARABONBA_PTR_SET_VALUE(createdByProduct_, createdByProduct) };


      // protectedDataSize Field Functions 
      bool hasProtectedDataSize() const { return this->protectedDataSize_ != nullptr;};
      void deleteProtectedDataSize() { this->protectedDataSize_ = nullptr;};
      inline int64_t getProtectedDataSize() const { DARABONBA_PTR_GET_DEFAULT(protectedDataSize_, 0L) };
      inline ProtectedResources& setProtectedDataSize(int64_t protectedDataSize) { DARABONBA_PTR_SET_VALUE(protectedDataSize_, protectedDataSize) };


      // protectedResourceId Field Functions 
      bool hasProtectedResourceId() const { return this->protectedResourceId_ != nullptr;};
      void deleteProtectedResourceId() { this->protectedResourceId_ = nullptr;};
      inline string getProtectedResourceId() const { DARABONBA_PTR_GET_DEFAULT(protectedResourceId_, "") };
      inline ProtectedResources& setProtectedResourceId(string protectedResourceId) { DARABONBA_PTR_SET_VALUE(protectedResourceId_, protectedResourceId) };


      // resourceId Field Functions 
      bool hasResourceId() const { return this->resourceId_ != nullptr;};
      void deleteResourceId() { this->resourceId_ = nullptr;};
      inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
      inline ProtectedResources& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


      // resourceOwnerId Field Functions 
      bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
      void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
      inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
      inline ProtectedResources& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


      // snapshotCount Field Functions 
      bool hasSnapshotCount() const { return this->snapshotCount_ != nullptr;};
      void deleteSnapshotCount() { this->snapshotCount_ = nullptr;};
      inline int64_t getSnapshotCount() const { DARABONBA_PTR_GET_DEFAULT(snapshotCount_, 0L) };
      inline ProtectedResources& setSnapshotCount(int64_t snapshotCount) { DARABONBA_PTR_SET_VALUE(snapshotCount_, snapshotCount) };


      // sourceType Field Functions 
      bool hasSourceType() const { return this->sourceType_ != nullptr;};
      void deleteSourceType() { this->sourceType_ = nullptr;};
      inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
      inline ProtectedResources& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    protected:
      shared_ptr<string> createdByProduct_ {};
      shared_ptr<int64_t> protectedDataSize_ {};
      shared_ptr<string> protectedResourceId_ {};
      shared_ptr<string> resourceId_ {};
      shared_ptr<int64_t> resourceOwnerId_ {};
      shared_ptr<int64_t> snapshotCount_ {};
      shared_ptr<string> sourceType_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->maxResults_ == nullptr && this->message_ == nullptr && this->nextToken_ == nullptr && this->protectedResources_ == nullptr && this->requestId_ == nullptr
        && this->success_ == nullptr && this->totalCount_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListProtectedResourcesResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListProtectedResourcesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListProtectedResourcesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListProtectedResourcesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // protectedResources Field Functions 
    bool hasProtectedResources() const { return this->protectedResources_ != nullptr;};
    void deleteProtectedResources() { this->protectedResources_ = nullptr;};
    inline const vector<ListProtectedResourcesResponseBody::ProtectedResources> & getProtectedResources() const { DARABONBA_PTR_GET_CONST(protectedResources_, vector<ListProtectedResourcesResponseBody::ProtectedResources>) };
    inline vector<ListProtectedResourcesResponseBody::ProtectedResources> getProtectedResources() { DARABONBA_PTR_GET(protectedResources_, vector<ListProtectedResourcesResponseBody::ProtectedResources>) };
    inline ListProtectedResourcesResponseBody& setProtectedResources(const vector<ListProtectedResourcesResponseBody::ProtectedResources> & protectedResources) { DARABONBA_PTR_SET_VALUE(protectedResources_, protectedResources) };
    inline ListProtectedResourcesResponseBody& setProtectedResources(vector<ListProtectedResourcesResponseBody::ProtectedResources> && protectedResources) { DARABONBA_PTR_SET_RVALUE(protectedResources_, protectedResources) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListProtectedResourcesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListProtectedResourcesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListProtectedResourcesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<vector<ListProtectedResourcesResponseBody::ProtectedResources>> protectedResources_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
