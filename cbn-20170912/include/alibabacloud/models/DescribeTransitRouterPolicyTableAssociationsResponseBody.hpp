// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETRANSITROUTERPOLICYTABLEASSOCIATIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETRANSITROUTERPOLICYTABLEASSOCIATIONSRESPONSEBODY_HPP_
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
  class DescribeTransitRouterPolicyTableAssociationsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTransitRouterPolicyTableAssociationsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Associations, associations_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTransitRouterPolicyTableAssociationsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Associations, associations_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeTransitRouterPolicyTableAssociationsResponseBody() = default ;
    DescribeTransitRouterPolicyTableAssociationsResponseBody(const DescribeTransitRouterPolicyTableAssociationsResponseBody &) = default ;
    DescribeTransitRouterPolicyTableAssociationsResponseBody(DescribeTransitRouterPolicyTableAssociationsResponseBody &&) = default ;
    DescribeTransitRouterPolicyTableAssociationsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTransitRouterPolicyTableAssociationsResponseBody() = default ;
    DescribeTransitRouterPolicyTableAssociationsResponseBody& operator=(const DescribeTransitRouterPolicyTableAssociationsResponseBody &) = default ;
    DescribeTransitRouterPolicyTableAssociationsResponseBody& operator=(DescribeTransitRouterPolicyTableAssociationsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Associations : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Associations& obj) { 
        DARABONBA_PTR_TO_JSON(AssociationId, associationId_);
        DARABONBA_PTR_TO_JSON(AttachmentId, attachmentId_);
        DARABONBA_PTR_TO_JSON(PolicyTableId, policyTableId_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, Associations& obj) { 
        DARABONBA_PTR_FROM_JSON(AssociationId, associationId_);
        DARABONBA_PTR_FROM_JSON(AttachmentId, attachmentId_);
        DARABONBA_PTR_FROM_JSON(PolicyTableId, policyTableId_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      Associations() = default ;
      Associations(const Associations &) = default ;
      Associations(Associations &&) = default ;
      Associations(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Associations() = default ;
      Associations& operator=(const Associations &) = default ;
      Associations& operator=(Associations &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->associationId_ == nullptr
        && this->attachmentId_ == nullptr && this->policyTableId_ == nullptr && this->status_ == nullptr; };
      // associationId Field Functions 
      bool hasAssociationId() const { return this->associationId_ != nullptr;};
      void deleteAssociationId() { this->associationId_ = nullptr;};
      inline string getAssociationId() const { DARABONBA_PTR_GET_DEFAULT(associationId_, "") };
      inline Associations& setAssociationId(string associationId) { DARABONBA_PTR_SET_VALUE(associationId_, associationId) };


      // attachmentId Field Functions 
      bool hasAttachmentId() const { return this->attachmentId_ != nullptr;};
      void deleteAttachmentId() { this->attachmentId_ = nullptr;};
      inline string getAttachmentId() const { DARABONBA_PTR_GET_DEFAULT(attachmentId_, "") };
      inline Associations& setAttachmentId(string attachmentId) { DARABONBA_PTR_SET_VALUE(attachmentId_, attachmentId) };


      // policyTableId Field Functions 
      bool hasPolicyTableId() const { return this->policyTableId_ != nullptr;};
      void deletePolicyTableId() { this->policyTableId_ = nullptr;};
      inline string getPolicyTableId() const { DARABONBA_PTR_GET_DEFAULT(policyTableId_, "") };
      inline Associations& setPolicyTableId(string policyTableId) { DARABONBA_PTR_SET_VALUE(policyTableId_, policyTableId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Associations& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The ID of the association between the policy route table and the network instance connection.
      shared_ptr<string> associationId_ {};
      // The ID of the network instance connection.
      shared_ptr<string> attachmentId_ {};
      // The policy routing table instance ID.
      shared_ptr<string> policyTableId_ {};
      // The status of the association. Valid values:
      // 
      // - **Active**: active.
      // - **Associating**: associating.
      // - **Dissociating**: dissociating.
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->associations_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // associations Field Functions 
    bool hasAssociations() const { return this->associations_ != nullptr;};
    void deleteAssociations() { this->associations_ = nullptr;};
    inline const vector<DescribeTransitRouterPolicyTableAssociationsResponseBody::Associations> & getAssociations() const { DARABONBA_PTR_GET_CONST(associations_, vector<DescribeTransitRouterPolicyTableAssociationsResponseBody::Associations>) };
    inline vector<DescribeTransitRouterPolicyTableAssociationsResponseBody::Associations> getAssociations() { DARABONBA_PTR_GET(associations_, vector<DescribeTransitRouterPolicyTableAssociationsResponseBody::Associations>) };
    inline DescribeTransitRouterPolicyTableAssociationsResponseBody& setAssociations(const vector<DescribeTransitRouterPolicyTableAssociationsResponseBody::Associations> & associations) { DARABONBA_PTR_SET_VALUE(associations_, associations) };
    inline DescribeTransitRouterPolicyTableAssociationsResponseBody& setAssociations(vector<DescribeTransitRouterPolicyTableAssociationsResponseBody::Associations> && associations) { DARABONBA_PTR_SET_RVALUE(associations_, associations) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeTransitRouterPolicyTableAssociationsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeTransitRouterPolicyTableAssociationsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeTransitRouterPolicyTableAssociationsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeTransitRouterPolicyTableAssociationsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The associate relationships between the policy routing table and network connectivity instances.
    shared_ptr<vector<DescribeTransitRouterPolicyTableAssociationsResponseBody::Associations>> associations_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> maxResults_ {};
    // The token for the next query.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
