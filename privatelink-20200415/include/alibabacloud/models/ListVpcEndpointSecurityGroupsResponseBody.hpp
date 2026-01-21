// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVPCENDPOINTSECURITYGROUPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTVPCENDPOINTSECURITYGROUPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Privatelink20200415
{
namespace Models
{
  class ListVpcEndpointSecurityGroupsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVpcEndpointSecurityGroupsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SecurityGroups, securityGroups_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListVpcEndpointSecurityGroupsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SecurityGroups, securityGroups_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListVpcEndpointSecurityGroupsResponseBody() = default ;
    ListVpcEndpointSecurityGroupsResponseBody(const ListVpcEndpointSecurityGroupsResponseBody &) = default ;
    ListVpcEndpointSecurityGroupsResponseBody(ListVpcEndpointSecurityGroupsResponseBody &&) = default ;
    ListVpcEndpointSecurityGroupsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVpcEndpointSecurityGroupsResponseBody() = default ;
    ListVpcEndpointSecurityGroupsResponseBody& operator=(const ListVpcEndpointSecurityGroupsResponseBody &) = default ;
    ListVpcEndpointSecurityGroupsResponseBody& operator=(ListVpcEndpointSecurityGroupsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SecurityGroups : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SecurityGroups& obj) { 
        DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
        DARABONBA_PTR_TO_JSON(SecurityGroupStatus, securityGroupStatus_);
      };
      friend void from_json(const Darabonba::Json& j, SecurityGroups& obj) { 
        DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
        DARABONBA_PTR_FROM_JSON(SecurityGroupStatus, securityGroupStatus_);
      };
      SecurityGroups() = default ;
      SecurityGroups(const SecurityGroups &) = default ;
      SecurityGroups(SecurityGroups &&) = default ;
      SecurityGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SecurityGroups() = default ;
      SecurityGroups& operator=(const SecurityGroups &) = default ;
      SecurityGroups& operator=(SecurityGroups &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->securityGroupId_ == nullptr
        && this->securityGroupStatus_ == nullptr; };
      // securityGroupId Field Functions 
      bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
      void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
      inline string getSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
      inline SecurityGroups& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


      // securityGroupStatus Field Functions 
      bool hasSecurityGroupStatus() const { return this->securityGroupStatus_ != nullptr;};
      void deleteSecurityGroupStatus() { this->securityGroupStatus_ = nullptr;};
      inline string getSecurityGroupStatus() const { DARABONBA_PTR_GET_DEFAULT(securityGroupStatus_, "") };
      inline SecurityGroups& setSecurityGroupStatus(string securityGroupStatus) { DARABONBA_PTR_SET_VALUE(securityGroupStatus_, securityGroupStatus) };


    protected:
      // The ID of the security group that is associated with the endpoint.
      shared_ptr<string> securityGroupId_ {};
      // The associate status of the security group, valid values:
      // - Attaching: The security group is being attached.
      // - Attached: The security group is attached.
      // - Detaching: The security group is being detached.
      shared_ptr<string> securityGroupStatus_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->securityGroups_ == nullptr && this->totalCount_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListVpcEndpointSecurityGroupsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListVpcEndpointSecurityGroupsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListVpcEndpointSecurityGroupsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // securityGroups Field Functions 
    bool hasSecurityGroups() const { return this->securityGroups_ != nullptr;};
    void deleteSecurityGroups() { this->securityGroups_ = nullptr;};
    inline const vector<ListVpcEndpointSecurityGroupsResponseBody::SecurityGroups> & getSecurityGroups() const { DARABONBA_PTR_GET_CONST(securityGroups_, vector<ListVpcEndpointSecurityGroupsResponseBody::SecurityGroups>) };
    inline vector<ListVpcEndpointSecurityGroupsResponseBody::SecurityGroups> getSecurityGroups() { DARABONBA_PTR_GET(securityGroups_, vector<ListVpcEndpointSecurityGroupsResponseBody::SecurityGroups>) };
    inline ListVpcEndpointSecurityGroupsResponseBody& setSecurityGroups(const vector<ListVpcEndpointSecurityGroupsResponseBody::SecurityGroups> & securityGroups) { DARABONBA_PTR_SET_VALUE(securityGroups_, securityGroups) };
    inline ListVpcEndpointSecurityGroupsResponseBody& setSecurityGroups(vector<ListVpcEndpointSecurityGroupsResponseBody::SecurityGroups> && securityGroups) { DARABONBA_PTR_SET_RVALUE(securityGroups_, securityGroups) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListVpcEndpointSecurityGroupsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The number of entries returned per page.
    shared_ptr<int32_t> maxResults_ {};
    // The returned value of NextToken is a pagination token, which can be used in the next request to retrieve a new page of results. Valid values:
    // 
    // *   If no value is returned for **NextToken**, no next requests are performed.
    // *   If a value is returned for **NextToken**, the value can be used in the next request to retrieve a new page of results.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The information about the security groups.
    shared_ptr<vector<ListVpcEndpointSecurityGroupsResponseBody::SecurityGroups>> securityGroups_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Privatelink20200415
#endif
