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
    virtual bool empty() const override { return this->maxResults_ == nullptr
        && return this->nextToken_ == nullptr && return this->officeSiteId_ == nullptr && return this->officeSiteType_ == nullptr && return this->regionId_ == nullptr && return this->securityProtection_ == nullptr
        && return this->status_ == nullptr && return this->vpcId_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeOfficeSitesRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeOfficeSitesRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // officeSiteId Field Functions 
    bool hasOfficeSiteId() const { return this->officeSiteId_ != nullptr;};
    void deleteOfficeSiteId() { this->officeSiteId_ = nullptr;};
    inline const vector<string> & officeSiteId() const { DARABONBA_PTR_GET_CONST(officeSiteId_, vector<string>) };
    inline vector<string> officeSiteId() { DARABONBA_PTR_GET(officeSiteId_, vector<string>) };
    inline DescribeOfficeSitesRequest& setOfficeSiteId(const vector<string> & officeSiteId) { DARABONBA_PTR_SET_VALUE(officeSiteId_, officeSiteId) };
    inline DescribeOfficeSitesRequest& setOfficeSiteId(vector<string> && officeSiteId) { DARABONBA_PTR_SET_RVALUE(officeSiteId_, officeSiteId) };


    // officeSiteType Field Functions 
    bool hasOfficeSiteType() const { return this->officeSiteType_ != nullptr;};
    void deleteOfficeSiteType() { this->officeSiteType_ = nullptr;};
    inline string officeSiteType() const { DARABONBA_PTR_GET_DEFAULT(officeSiteType_, "") };
    inline DescribeOfficeSitesRequest& setOfficeSiteType(string officeSiteType) { DARABONBA_PTR_SET_VALUE(officeSiteType_, officeSiteType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeOfficeSitesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // securityProtection Field Functions 
    bool hasSecurityProtection() const { return this->securityProtection_ != nullptr;};
    void deleteSecurityProtection() { this->securityProtection_ = nullptr;};
    inline string securityProtection() const { DARABONBA_PTR_GET_DEFAULT(securityProtection_, "") };
    inline DescribeOfficeSitesRequest& setSecurityProtection(string securityProtection) { DARABONBA_PTR_SET_VALUE(securityProtection_, securityProtection) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeOfficeSitesRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline DescribeOfficeSitesRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // The number of entries to return on each page.
    // 
    // *   Maximum value: 100.
    // *   Default value: 10.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // The token that determines the start point of the next query.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The office network IDs. You can specify the IDs of 1 to 100 office networks.
    std::shared_ptr<vector<string>> officeSiteId_ = nullptr;
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
    std::shared_ptr<string> officeSiteType_ = nullptr;
    // The region ID. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/196646.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The security protection setting of the office network.
    // 
    // Valid values:
    // 
    // *   SASE: SASE is configured.
    // *   OFF: No security protection setting is configured.
    std::shared_ptr<string> securityProtection_ = nullptr;
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
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
