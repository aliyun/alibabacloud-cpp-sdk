// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEOFFICESITESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEOFFICESITESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeOfficeSitesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeOfficeSitesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccountType, accountType_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_TO_JSON(OfficeSiteType, officeSiteType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SecurityProtection, securityProtection_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeOfficeSitesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountType, accountType_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_FROM_JSON(OfficeSiteType, officeSiteType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SecurityProtection, securityProtection_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    DescribeOfficeSitesRequest() = default ;
    DescribeOfficeSitesRequest(const DescribeOfficeSitesRequest &) = default ;
    DescribeOfficeSitesRequest(DescribeOfficeSitesRequest &&) = default ;
    DescribeOfficeSitesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeOfficeSitesRequest() = default ;
    DescribeOfficeSitesRequest& operator=(const DescribeOfficeSitesRequest &) = default ;
    DescribeOfficeSitesRequest& operator=(DescribeOfficeSitesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountType_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->officeSiteId_ == nullptr && this->officeSiteType_ == nullptr && this->regionId_ == nullptr
        && this->securityProtection_ == nullptr && this->status_ == nullptr && this->vpcId_ == nullptr; };
    // accountType Field Functions 
    bool hasAccountType() const { return this->accountType_ != nullptr;};
    void deleteAccountType() { this->accountType_ = nullptr;};
    inline string getAccountType() const { DARABONBA_PTR_GET_DEFAULT(accountType_, "") };
    inline DescribeOfficeSitesRequest& setAccountType(string accountType) { DARABONBA_PTR_SET_VALUE(accountType_, accountType) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeOfficeSitesRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeOfficeSitesRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // officeSiteId Field Functions 
    bool hasOfficeSiteId() const { return this->officeSiteId_ != nullptr;};
    void deleteOfficeSiteId() { this->officeSiteId_ = nullptr;};
    inline const vector<string> & getOfficeSiteId() const { DARABONBA_PTR_GET_CONST(officeSiteId_, vector<string>) };
    inline vector<string> getOfficeSiteId() { DARABONBA_PTR_GET(officeSiteId_, vector<string>) };
    inline DescribeOfficeSitesRequest& setOfficeSiteId(const vector<string> & officeSiteId) { DARABONBA_PTR_SET_VALUE(officeSiteId_, officeSiteId) };
    inline DescribeOfficeSitesRequest& setOfficeSiteId(vector<string> && officeSiteId) { DARABONBA_PTR_SET_RVALUE(officeSiteId_, officeSiteId) };


    // officeSiteType Field Functions 
    bool hasOfficeSiteType() const { return this->officeSiteType_ != nullptr;};
    void deleteOfficeSiteType() { this->officeSiteType_ = nullptr;};
    inline string getOfficeSiteType() const { DARABONBA_PTR_GET_DEFAULT(officeSiteType_, "") };
    inline DescribeOfficeSitesRequest& setOfficeSiteType(string officeSiteType) { DARABONBA_PTR_SET_VALUE(officeSiteType_, officeSiteType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeOfficeSitesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // securityProtection Field Functions 
    bool hasSecurityProtection() const { return this->securityProtection_ != nullptr;};
    void deleteSecurityProtection() { this->securityProtection_ = nullptr;};
    inline string getSecurityProtection() const { DARABONBA_PTR_GET_DEFAULT(securityProtection_, "") };
    inline DescribeOfficeSitesRequest& setSecurityProtection(string securityProtection) { DARABONBA_PTR_SET_VALUE(securityProtection_, securityProtection) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeOfficeSitesRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline DescribeOfficeSitesRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    shared_ptr<string> accountType_ {};
    // The number of entries to return on each page.
    // 
    // *   Maximum value: 100.
    // *   Default value: 10.
    shared_ptr<int32_t> maxResults_ {};
    // The token that determines the start point of the next query.
    shared_ptr<string> nextToken_ {};
    // The office network IDs. You can specify the IDs of 1 to 100 office networks.
    shared_ptr<vector<string>> officeSiteId_ {};
    // The account type of the office network.
    // 
    // Valid values:
    // 
    // *   SIMPLE: convenience account
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   AD_CONNECTOR: enterprise Active Directory (AD) account
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    shared_ptr<string> officeSiteType_ {};
    // The region ID. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/196646.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The security protection setting of the office network.
    // 
    // Valid values:
    // 
    // *   SASE: SASE is configured.
    // *   OFF: No security protection setting is configured.
    shared_ptr<string> securityProtection_ {};
    // The office network status.
    // 
    // Valid values:
    // 
    // *   REGISTERING: The office network is being registered.
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   DEREGISTERING: The office network is being deregistered.
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   REGISTERED: The office network is registered.
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   NEEDCONFIGTRUST: A trust relationship is required for the office network.
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   CONFIGTRUSTFAILED: A trust relationship fails to be configured for the office network.
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   DEREGISTERED: The office network is deregistered.
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   ERROR: One or more configurations of the office network are invalid.
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   CONFIGTRUSTING: A trust relationship is being configured for the office network.
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   NEEDCONFIGUSER: Users are required for the office network.
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    shared_ptr<string> status_ {};
    // The ID of the virtual private cloud (VPC).
    shared_ptr<string> vpcId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
