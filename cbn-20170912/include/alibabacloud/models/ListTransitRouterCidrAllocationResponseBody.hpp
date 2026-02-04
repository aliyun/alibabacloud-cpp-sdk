// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTRANSITROUTERCIDRALLOCATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTRANSITROUTERCIDRALLOCATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class ListTransitRouterCidrAllocationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTransitRouterCidrAllocationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(TransitRouterCidrAllocations, transitRouterCidrAllocations_);
    };
    friend void from_json(const Darabonba::Json& j, ListTransitRouterCidrAllocationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(TransitRouterCidrAllocations, transitRouterCidrAllocations_);
    };
    ListTransitRouterCidrAllocationResponseBody() = default ;
    ListTransitRouterCidrAllocationResponseBody(const ListTransitRouterCidrAllocationResponseBody &) = default ;
    ListTransitRouterCidrAllocationResponseBody(ListTransitRouterCidrAllocationResponseBody &&) = default ;
    ListTransitRouterCidrAllocationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTransitRouterCidrAllocationResponseBody() = default ;
    ListTransitRouterCidrAllocationResponseBody& operator=(const ListTransitRouterCidrAllocationResponseBody &) = default ;
    ListTransitRouterCidrAllocationResponseBody& operator=(ListTransitRouterCidrAllocationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TransitRouterCidrAllocations : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TransitRouterCidrAllocations& obj) { 
        DARABONBA_PTR_TO_JSON(AllocatedCidrBlock, allocatedCidrBlock_);
        DARABONBA_PTR_TO_JSON(AttachmentId, attachmentId_);
        DARABONBA_PTR_TO_JSON(AttachmentName, attachmentName_);
        DARABONBA_PTR_TO_JSON(Cidr, cidr_);
        DARABONBA_PTR_TO_JSON(TransitRouterCidrId, transitRouterCidrId_);
      };
      friend void from_json(const Darabonba::Json& j, TransitRouterCidrAllocations& obj) { 
        DARABONBA_PTR_FROM_JSON(AllocatedCidrBlock, allocatedCidrBlock_);
        DARABONBA_PTR_FROM_JSON(AttachmentId, attachmentId_);
        DARABONBA_PTR_FROM_JSON(AttachmentName, attachmentName_);
        DARABONBA_PTR_FROM_JSON(Cidr, cidr_);
        DARABONBA_PTR_FROM_JSON(TransitRouterCidrId, transitRouterCidrId_);
      };
      TransitRouterCidrAllocations() = default ;
      TransitRouterCidrAllocations(const TransitRouterCidrAllocations &) = default ;
      TransitRouterCidrAllocations(TransitRouterCidrAllocations &&) = default ;
      TransitRouterCidrAllocations(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TransitRouterCidrAllocations() = default ;
      TransitRouterCidrAllocations& operator=(const TransitRouterCidrAllocations &) = default ;
      TransitRouterCidrAllocations& operator=(TransitRouterCidrAllocations &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->allocatedCidrBlock_ == nullptr
        && this->attachmentId_ == nullptr && this->attachmentName_ == nullptr && this->cidr_ == nullptr && this->transitRouterCidrId_ == nullptr; };
      // allocatedCidrBlock Field Functions 
      bool hasAllocatedCidrBlock() const { return this->allocatedCidrBlock_ != nullptr;};
      void deleteAllocatedCidrBlock() { this->allocatedCidrBlock_ = nullptr;};
      inline string getAllocatedCidrBlock() const { DARABONBA_PTR_GET_DEFAULT(allocatedCidrBlock_, "") };
      inline TransitRouterCidrAllocations& setAllocatedCidrBlock(string allocatedCidrBlock) { DARABONBA_PTR_SET_VALUE(allocatedCidrBlock_, allocatedCidrBlock) };


      // attachmentId Field Functions 
      bool hasAttachmentId() const { return this->attachmentId_ != nullptr;};
      void deleteAttachmentId() { this->attachmentId_ = nullptr;};
      inline string getAttachmentId() const { DARABONBA_PTR_GET_DEFAULT(attachmentId_, "") };
      inline TransitRouterCidrAllocations& setAttachmentId(string attachmentId) { DARABONBA_PTR_SET_VALUE(attachmentId_, attachmentId) };


      // attachmentName Field Functions 
      bool hasAttachmentName() const { return this->attachmentName_ != nullptr;};
      void deleteAttachmentName() { this->attachmentName_ = nullptr;};
      inline string getAttachmentName() const { DARABONBA_PTR_GET_DEFAULT(attachmentName_, "") };
      inline TransitRouterCidrAllocations& setAttachmentName(string attachmentName) { DARABONBA_PTR_SET_VALUE(attachmentName_, attachmentName) };


      // cidr Field Functions 
      bool hasCidr() const { return this->cidr_ != nullptr;};
      void deleteCidr() { this->cidr_ = nullptr;};
      inline string getCidr() const { DARABONBA_PTR_GET_DEFAULT(cidr_, "") };
      inline TransitRouterCidrAllocations& setCidr(string cidr) { DARABONBA_PTR_SET_VALUE(cidr_, cidr) };


      // transitRouterCidrId Field Functions 
      bool hasTransitRouterCidrId() const { return this->transitRouterCidrId_ != nullptr;};
      void deleteTransitRouterCidrId() { this->transitRouterCidrId_ = nullptr;};
      inline string getTransitRouterCidrId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterCidrId_, "") };
      inline TransitRouterCidrAllocations& setTransitRouterCidrId(string transitRouterCidrId) { DARABONBA_PTR_SET_VALUE(transitRouterCidrId_, transitRouterCidrId) };


    protected:
      // The CIDR blocks that have IP addresses allocated to network instances.
      shared_ptr<string> allocatedCidrBlock_ {};
      // The ID of the network instance connection.
      shared_ptr<string> attachmentId_ {};
      // The name of the network instance connection.
      shared_ptr<string> attachmentName_ {};
      // The CIDR block of the transit router.
      shared_ptr<string> cidr_ {};
      // The ID of the CIDR block.
      shared_ptr<string> transitRouterCidrId_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr && this->transitRouterCidrAllocations_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListTransitRouterCidrAllocationResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListTransitRouterCidrAllocationResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTransitRouterCidrAllocationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListTransitRouterCidrAllocationResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // transitRouterCidrAllocations Field Functions 
    bool hasTransitRouterCidrAllocations() const { return this->transitRouterCidrAllocations_ != nullptr;};
    void deleteTransitRouterCidrAllocations() { this->transitRouterCidrAllocations_ = nullptr;};
    inline const vector<ListTransitRouterCidrAllocationResponseBody::TransitRouterCidrAllocations> & getTransitRouterCidrAllocations() const { DARABONBA_PTR_GET_CONST(transitRouterCidrAllocations_, vector<ListTransitRouterCidrAllocationResponseBody::TransitRouterCidrAllocations>) };
    inline vector<ListTransitRouterCidrAllocationResponseBody::TransitRouterCidrAllocations> getTransitRouterCidrAllocations() { DARABONBA_PTR_GET(transitRouterCidrAllocations_, vector<ListTransitRouterCidrAllocationResponseBody::TransitRouterCidrAllocations>) };
    inline ListTransitRouterCidrAllocationResponseBody& setTransitRouterCidrAllocations(const vector<ListTransitRouterCidrAllocationResponseBody::TransitRouterCidrAllocations> & transitRouterCidrAllocations) { DARABONBA_PTR_SET_VALUE(transitRouterCidrAllocations_, transitRouterCidrAllocations) };
    inline ListTransitRouterCidrAllocationResponseBody& setTransitRouterCidrAllocations(vector<ListTransitRouterCidrAllocationResponseBody::TransitRouterCidrAllocations> && transitRouterCidrAllocations) { DARABONBA_PTR_SET_RVALUE(transitRouterCidrAllocations_, transitRouterCidrAllocations) };


  protected:
    // The number of entries returned per page.
    // 
    // *   If no value is specified for **MaxResults**, query results are returned in one batch. The value of **MaxResults** indicates the total number of entries.
    // *   If a value is specified for **MaxResults**, query results are returned in batches. The value of **MaxResults** in the response indicates the number of entries in the current batch.
    shared_ptr<int32_t> maxResults_ {};
    // The token that determines the start point of the next query. Valid values:
    // 
    // *   If **NextToken** was not returned, it indicates that no additional results exist.
    // *   If **NextToken** was returned in the previous query, specify the value to obtain the next set of results.
    shared_ptr<string> nextToken_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
    // The information about the CIDR blocks that have IP addresses allocated to network instances.
    shared_ptr<vector<ListTransitRouterCidrAllocationResponseBody::TransitRouterCidrAllocations>> transitRouterCidrAllocations_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
