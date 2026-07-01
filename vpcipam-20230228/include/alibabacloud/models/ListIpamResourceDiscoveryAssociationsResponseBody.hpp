// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTIPAMRESOURCEDISCOVERYASSOCIATIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTIPAMRESOURCEDISCOVERYASSOCIATIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace VpcIpam20230228
{
namespace Models
{
  class ListIpamResourceDiscoveryAssociationsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIpamResourceDiscoveryAssociationsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(IpamResourceDiscoveryAssociations, ipamResourceDiscoveryAssociations_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListIpamResourceDiscoveryAssociationsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(IpamResourceDiscoveryAssociations, ipamResourceDiscoveryAssociations_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListIpamResourceDiscoveryAssociationsResponseBody() = default ;
    ListIpamResourceDiscoveryAssociationsResponseBody(const ListIpamResourceDiscoveryAssociationsResponseBody &) = default ;
    ListIpamResourceDiscoveryAssociationsResponseBody(ListIpamResourceDiscoveryAssociationsResponseBody &&) = default ;
    ListIpamResourceDiscoveryAssociationsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIpamResourceDiscoveryAssociationsResponseBody() = default ;
    ListIpamResourceDiscoveryAssociationsResponseBody& operator=(const ListIpamResourceDiscoveryAssociationsResponseBody &) = default ;
    ListIpamResourceDiscoveryAssociationsResponseBody& operator=(ListIpamResourceDiscoveryAssociationsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class IpamResourceDiscoveryAssociations : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const IpamResourceDiscoveryAssociations& obj) { 
        DARABONBA_PTR_TO_JSON(IpamId, ipamId_);
        DARABONBA_PTR_TO_JSON(IpamResourceDiscoveryId, ipamResourceDiscoveryId_);
        DARABONBA_PTR_TO_JSON(IpamResourceDiscoveryOwnerId, ipamResourceDiscoveryOwnerId_);
        DARABONBA_PTR_TO_JSON(IpamResourceDiscoveryStatus, ipamResourceDiscoveryStatus_);
        DARABONBA_PTR_TO_JSON(IpamResourceDiscoveryType, ipamResourceDiscoveryType_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, IpamResourceDiscoveryAssociations& obj) { 
        DARABONBA_PTR_FROM_JSON(IpamId, ipamId_);
        DARABONBA_PTR_FROM_JSON(IpamResourceDiscoveryId, ipamResourceDiscoveryId_);
        DARABONBA_PTR_FROM_JSON(IpamResourceDiscoveryOwnerId, ipamResourceDiscoveryOwnerId_);
        DARABONBA_PTR_FROM_JSON(IpamResourceDiscoveryStatus, ipamResourceDiscoveryStatus_);
        DARABONBA_PTR_FROM_JSON(IpamResourceDiscoveryType, ipamResourceDiscoveryType_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      IpamResourceDiscoveryAssociations() = default ;
      IpamResourceDiscoveryAssociations(const IpamResourceDiscoveryAssociations &) = default ;
      IpamResourceDiscoveryAssociations(IpamResourceDiscoveryAssociations &&) = default ;
      IpamResourceDiscoveryAssociations(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~IpamResourceDiscoveryAssociations() = default ;
      IpamResourceDiscoveryAssociations& operator=(const IpamResourceDiscoveryAssociations &) = default ;
      IpamResourceDiscoveryAssociations& operator=(IpamResourceDiscoveryAssociations &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->ipamId_ == nullptr
        && this->ipamResourceDiscoveryId_ == nullptr && this->ipamResourceDiscoveryOwnerId_ == nullptr && this->ipamResourceDiscoveryStatus_ == nullptr && this->ipamResourceDiscoveryType_ == nullptr && this->status_ == nullptr; };
      // ipamId Field Functions 
      bool hasIpamId() const { return this->ipamId_ != nullptr;};
      void deleteIpamId() { this->ipamId_ = nullptr;};
      inline string getIpamId() const { DARABONBA_PTR_GET_DEFAULT(ipamId_, "") };
      inline IpamResourceDiscoveryAssociations& setIpamId(string ipamId) { DARABONBA_PTR_SET_VALUE(ipamId_, ipamId) };


      // ipamResourceDiscoveryId Field Functions 
      bool hasIpamResourceDiscoveryId() const { return this->ipamResourceDiscoveryId_ != nullptr;};
      void deleteIpamResourceDiscoveryId() { this->ipamResourceDiscoveryId_ = nullptr;};
      inline string getIpamResourceDiscoveryId() const { DARABONBA_PTR_GET_DEFAULT(ipamResourceDiscoveryId_, "") };
      inline IpamResourceDiscoveryAssociations& setIpamResourceDiscoveryId(string ipamResourceDiscoveryId) { DARABONBA_PTR_SET_VALUE(ipamResourceDiscoveryId_, ipamResourceDiscoveryId) };


      // ipamResourceDiscoveryOwnerId Field Functions 
      bool hasIpamResourceDiscoveryOwnerId() const { return this->ipamResourceDiscoveryOwnerId_ != nullptr;};
      void deleteIpamResourceDiscoveryOwnerId() { this->ipamResourceDiscoveryOwnerId_ = nullptr;};
      inline string getIpamResourceDiscoveryOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ipamResourceDiscoveryOwnerId_, "") };
      inline IpamResourceDiscoveryAssociations& setIpamResourceDiscoveryOwnerId(string ipamResourceDiscoveryOwnerId) { DARABONBA_PTR_SET_VALUE(ipamResourceDiscoveryOwnerId_, ipamResourceDiscoveryOwnerId) };


      // ipamResourceDiscoveryStatus Field Functions 
      bool hasIpamResourceDiscoveryStatus() const { return this->ipamResourceDiscoveryStatus_ != nullptr;};
      void deleteIpamResourceDiscoveryStatus() { this->ipamResourceDiscoveryStatus_ = nullptr;};
      inline string getIpamResourceDiscoveryStatus() const { DARABONBA_PTR_GET_DEFAULT(ipamResourceDiscoveryStatus_, "") };
      inline IpamResourceDiscoveryAssociations& setIpamResourceDiscoveryStatus(string ipamResourceDiscoveryStatus) { DARABONBA_PTR_SET_VALUE(ipamResourceDiscoveryStatus_, ipamResourceDiscoveryStatus) };


      // ipamResourceDiscoveryType Field Functions 
      bool hasIpamResourceDiscoveryType() const { return this->ipamResourceDiscoveryType_ != nullptr;};
      void deleteIpamResourceDiscoveryType() { this->ipamResourceDiscoveryType_ = nullptr;};
      inline string getIpamResourceDiscoveryType() const { DARABONBA_PTR_GET_DEFAULT(ipamResourceDiscoveryType_, "") };
      inline IpamResourceDiscoveryAssociations& setIpamResourceDiscoveryType(string ipamResourceDiscoveryType) { DARABONBA_PTR_SET_VALUE(ipamResourceDiscoveryType_, ipamResourceDiscoveryType) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline IpamResourceDiscoveryAssociations& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The ID of the IPAM instance.
      shared_ptr<string> ipamId_ {};
      // The ID of the resource discovery instance.
      shared_ptr<string> ipamResourceDiscoveryId_ {};
      // The ID of the Alibaba Cloud account that owns the resource discovery instance.
      shared_ptr<string> ipamResourceDiscoveryOwnerId_ {};
      // The status of the resource discovery instance. Valid values:
      // 
      // - **Creating**
      // 
      // - **Created**
      // 
      // - **Modifying**
      // 
      // - **Deleting**
      // 
      // - **Deleted**
      shared_ptr<string> ipamResourceDiscoveryStatus_ {};
      // The type of the resource discovery. Valid values:
      // 
      // - **system**: a default resource discovery that is automatically created by the system.
      // 
      // - **custom**: a custom resource discovery that is created by a user.
      shared_ptr<string> ipamResourceDiscoveryType_ {};
      // The association status. Valid values:
      // 
      // - **Created**
      // 
      // - **Deleted**
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->count_ == nullptr
        && this->ipamResourceDiscoveryAssociations_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline ListIpamResourceDiscoveryAssociationsResponseBody& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // ipamResourceDiscoveryAssociations Field Functions 
    bool hasIpamResourceDiscoveryAssociations() const { return this->ipamResourceDiscoveryAssociations_ != nullptr;};
    void deleteIpamResourceDiscoveryAssociations() { this->ipamResourceDiscoveryAssociations_ = nullptr;};
    inline const vector<ListIpamResourceDiscoveryAssociationsResponseBody::IpamResourceDiscoveryAssociations> & getIpamResourceDiscoveryAssociations() const { DARABONBA_PTR_GET_CONST(ipamResourceDiscoveryAssociations_, vector<ListIpamResourceDiscoveryAssociationsResponseBody::IpamResourceDiscoveryAssociations>) };
    inline vector<ListIpamResourceDiscoveryAssociationsResponseBody::IpamResourceDiscoveryAssociations> getIpamResourceDiscoveryAssociations() { DARABONBA_PTR_GET(ipamResourceDiscoveryAssociations_, vector<ListIpamResourceDiscoveryAssociationsResponseBody::IpamResourceDiscoveryAssociations>) };
    inline ListIpamResourceDiscoveryAssociationsResponseBody& setIpamResourceDiscoveryAssociations(const vector<ListIpamResourceDiscoveryAssociationsResponseBody::IpamResourceDiscoveryAssociations> & ipamResourceDiscoveryAssociations) { DARABONBA_PTR_SET_VALUE(ipamResourceDiscoveryAssociations_, ipamResourceDiscoveryAssociations) };
    inline ListIpamResourceDiscoveryAssociationsResponseBody& setIpamResourceDiscoveryAssociations(vector<ListIpamResourceDiscoveryAssociationsResponseBody::IpamResourceDiscoveryAssociations> && ipamResourceDiscoveryAssociations) { DARABONBA_PTR_SET_RVALUE(ipamResourceDiscoveryAssociations_, ipamResourceDiscoveryAssociations) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListIpamResourceDiscoveryAssociationsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListIpamResourceDiscoveryAssociationsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListIpamResourceDiscoveryAssociationsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListIpamResourceDiscoveryAssociationsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The number of entries returned on the current page.
    shared_ptr<int32_t> count_ {};
    // A list of association details.
    shared_ptr<vector<ListIpamResourceDiscoveryAssociationsResponseBody::IpamResourceDiscoveryAssociations>> ipamResourceDiscoveryAssociations_ {};
    // The maximum number of entries returned per page. Valid values: 1 to 100. Default value: 10.
    shared_ptr<int32_t> maxResults_ {};
    // The token to use to retrieve the next page of results. This value is empty when there are no more results to return.
    // 
    // - If **NextToken** is empty, no subsequent query is needed.
    // 
    // - If **NextToken** is not empty, its value is the token to start the next query.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries that match the query criteria.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace VpcIpam20230228
#endif
