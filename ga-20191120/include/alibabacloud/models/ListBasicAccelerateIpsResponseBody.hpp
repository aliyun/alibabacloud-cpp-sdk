// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTBASICACCELERATEIPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTBASICACCELERATEIPSRESPONSEBODY_HPP_
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
  class ListBasicAccelerateIpsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListBasicAccelerateIpsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccelerateIps, accelerateIps_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListBasicAccelerateIpsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccelerateIps, accelerateIps_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListBasicAccelerateIpsResponseBody() = default ;
    ListBasicAccelerateIpsResponseBody(const ListBasicAccelerateIpsResponseBody &) = default ;
    ListBasicAccelerateIpsResponseBody(ListBasicAccelerateIpsResponseBody &&) = default ;
    ListBasicAccelerateIpsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListBasicAccelerateIpsResponseBody() = default ;
    ListBasicAccelerateIpsResponseBody& operator=(const ListBasicAccelerateIpsResponseBody &) = default ;
    ListBasicAccelerateIpsResponseBody& operator=(ListBasicAccelerateIpsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AccelerateIps : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AccelerateIps& obj) { 
        DARABONBA_PTR_TO_JSON(AccelerateIpAddress, accelerateIpAddress_);
        DARABONBA_PTR_TO_JSON(AccelerateIpId, accelerateIpId_);
        DARABONBA_PTR_TO_JSON(AcceleratorId, acceleratorId_);
        DARABONBA_PTR_TO_JSON(IpSetId, ipSetId_);
        DARABONBA_PTR_TO_JSON(State, state_);
      };
      friend void from_json(const Darabonba::Json& j, AccelerateIps& obj) { 
        DARABONBA_PTR_FROM_JSON(AccelerateIpAddress, accelerateIpAddress_);
        DARABONBA_PTR_FROM_JSON(AccelerateIpId, accelerateIpId_);
        DARABONBA_PTR_FROM_JSON(AcceleratorId, acceleratorId_);
        DARABONBA_PTR_FROM_JSON(IpSetId, ipSetId_);
        DARABONBA_PTR_FROM_JSON(State, state_);
      };
      AccelerateIps() = default ;
      AccelerateIps(const AccelerateIps &) = default ;
      AccelerateIps(AccelerateIps &&) = default ;
      AccelerateIps(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AccelerateIps() = default ;
      AccelerateIps& operator=(const AccelerateIps &) = default ;
      AccelerateIps& operator=(AccelerateIps &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->accelerateIpAddress_ == nullptr
        && this->accelerateIpId_ == nullptr && this->acceleratorId_ == nullptr && this->ipSetId_ == nullptr && this->state_ == nullptr; };
      // accelerateIpAddress Field Functions 
      bool hasAccelerateIpAddress() const { return this->accelerateIpAddress_ != nullptr;};
      void deleteAccelerateIpAddress() { this->accelerateIpAddress_ = nullptr;};
      inline string getAccelerateIpAddress() const { DARABONBA_PTR_GET_DEFAULT(accelerateIpAddress_, "") };
      inline AccelerateIps& setAccelerateIpAddress(string accelerateIpAddress) { DARABONBA_PTR_SET_VALUE(accelerateIpAddress_, accelerateIpAddress) };


      // accelerateIpId Field Functions 
      bool hasAccelerateIpId() const { return this->accelerateIpId_ != nullptr;};
      void deleteAccelerateIpId() { this->accelerateIpId_ = nullptr;};
      inline string getAccelerateIpId() const { DARABONBA_PTR_GET_DEFAULT(accelerateIpId_, "") };
      inline AccelerateIps& setAccelerateIpId(string accelerateIpId) { DARABONBA_PTR_SET_VALUE(accelerateIpId_, accelerateIpId) };


      // acceleratorId Field Functions 
      bool hasAcceleratorId() const { return this->acceleratorId_ != nullptr;};
      void deleteAcceleratorId() { this->acceleratorId_ = nullptr;};
      inline string getAcceleratorId() const { DARABONBA_PTR_GET_DEFAULT(acceleratorId_, "") };
      inline AccelerateIps& setAcceleratorId(string acceleratorId) { DARABONBA_PTR_SET_VALUE(acceleratorId_, acceleratorId) };


      // ipSetId Field Functions 
      bool hasIpSetId() const { return this->ipSetId_ != nullptr;};
      void deleteIpSetId() { this->ipSetId_ = nullptr;};
      inline string getIpSetId() const { DARABONBA_PTR_GET_DEFAULT(ipSetId_, "") };
      inline AccelerateIps& setIpSetId(string ipSetId) { DARABONBA_PTR_SET_VALUE(ipSetId_, ipSetId) };


      // state Field Functions 
      bool hasState() const { return this->state_ != nullptr;};
      void deleteState() { this->state_ = nullptr;};
      inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
      inline AccelerateIps& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    protected:
      // The accelerated IP address of the basic GA instance.
      shared_ptr<string> accelerateIpAddress_ {};
      // The ID of the accelerated IP address of the basic GA instance.
      shared_ptr<string> accelerateIpId_ {};
      // The ID of the basic GA instance.
      shared_ptr<string> acceleratorId_ {};
      // The ID of the acceleration region.
      shared_ptr<string> ipSetId_ {};
      // The status of the accelerated IP address. Valid values:
      // 
      // *   **active**: The accelerated IP address is available.
      // *   **binding**: The accelerated IP address is being associated.
      // *   **bound**: The accelerated IP address is associated.
      // *   **unbinding**: The accelerated IP address is being disassociated.
      // *   **deleting**: The accelerated IP address is being deleted.
      // 
      // >  This parameter is unavailable when the accelerated IP address is being created.
      shared_ptr<string> state_ {};
    };

    virtual bool empty() const override { return this->accelerateIps_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // accelerateIps Field Functions 
    bool hasAccelerateIps() const { return this->accelerateIps_ != nullptr;};
    void deleteAccelerateIps() { this->accelerateIps_ = nullptr;};
    inline const vector<ListBasicAccelerateIpsResponseBody::AccelerateIps> & getAccelerateIps() const { DARABONBA_PTR_GET_CONST(accelerateIps_, vector<ListBasicAccelerateIpsResponseBody::AccelerateIps>) };
    inline vector<ListBasicAccelerateIpsResponseBody::AccelerateIps> getAccelerateIps() { DARABONBA_PTR_GET(accelerateIps_, vector<ListBasicAccelerateIpsResponseBody::AccelerateIps>) };
    inline ListBasicAccelerateIpsResponseBody& setAccelerateIps(const vector<ListBasicAccelerateIpsResponseBody::AccelerateIps> & accelerateIps) { DARABONBA_PTR_SET_VALUE(accelerateIps_, accelerateIps) };
    inline ListBasicAccelerateIpsResponseBody& setAccelerateIps(vector<ListBasicAccelerateIpsResponseBody::AccelerateIps> && accelerateIps) { DARABONBA_PTR_SET_RVALUE(accelerateIps_, accelerateIps) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListBasicAccelerateIpsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListBasicAccelerateIpsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListBasicAccelerateIpsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListBasicAccelerateIpsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The accelerated IP addresses of the basic GA instance.
    shared_ptr<vector<ListBasicAccelerateIpsResponseBody::AccelerateIps>> accelerateIps_ {};
    // The number of entries returned on each page.
    shared_ptr<int32_t> maxResults_ {};
    // The token that determines the start point of the query. Valid values:
    // 
    // *   If **NextToken** was not returned, it indicates that no additional results exist.
    // *   If **NextToken** was returned in the previous query, specify the value to obtain the next set of results.
    shared_ptr<string> nextToken_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ga20191120
#endif
