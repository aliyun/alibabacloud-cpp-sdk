// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPRIVATELINKSECURITYGROUPSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTPRIVATELINKSECURITYGROUPSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class ListPrivateLinkSecurityGroupsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPrivateLinkSecurityGroupsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(vpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, ListPrivateLinkSecurityGroupsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(vpcId, vpcId_);
    };
    ListPrivateLinkSecurityGroupsRequest() = default ;
    ListPrivateLinkSecurityGroupsRequest(const ListPrivateLinkSecurityGroupsRequest &) = default ;
    ListPrivateLinkSecurityGroupsRequest(ListPrivateLinkSecurityGroupsRequest &&) = default ;
    ListPrivateLinkSecurityGroupsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPrivateLinkSecurityGroupsRequest() = default ;
    ListPrivateLinkSecurityGroupsRequest& operator=(const ListPrivateLinkSecurityGroupsRequest &) = default ;
    ListPrivateLinkSecurityGroupsRequest& operator=(ListPrivateLinkSecurityGroupsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->vpcId_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListPrivateLinkSecurityGroupsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListPrivateLinkSecurityGroupsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline ListPrivateLinkSecurityGroupsRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // The maximum number of entries to return.
    shared_ptr<int32_t> maxResults_ {};
    // The next token.
    shared_ptr<string> nextToken_ {};
    // The ID of the VPC owned by the currently authorized user. The candidate security groups must belong to this VPC.
    // 
    // This parameter is required.
    shared_ptr<string> vpcId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
