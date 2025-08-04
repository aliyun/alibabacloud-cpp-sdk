// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTOFFICESITEOVERVIEWREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTOFFICESITEOVERVIEWREQUEST_HPP_
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
  class ListOfficeSiteOverviewRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListOfficeSiteOverviewRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ForceRefresh, forceRefresh_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_TO_JSON(QueryRange, queryRange_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ListOfficeSiteOverviewRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ForceRefresh, forceRefresh_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_FROM_JSON(QueryRange, queryRange_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ListOfficeSiteOverviewRequest() = default ;
    ListOfficeSiteOverviewRequest(const ListOfficeSiteOverviewRequest &) = default ;
    ListOfficeSiteOverviewRequest(ListOfficeSiteOverviewRequest &&) = default ;
    ListOfficeSiteOverviewRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListOfficeSiteOverviewRequest() = default ;
    ListOfficeSiteOverviewRequest& operator=(const ListOfficeSiteOverviewRequest &) = default ;
    ListOfficeSiteOverviewRequest& operator=(ListOfficeSiteOverviewRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->forceRefresh_ != nullptr
        && this->maxResults_ != nullptr && this->nextToken_ != nullptr && this->officeSiteId_ != nullptr && this->queryRange_ != nullptr && this->regionId_ != nullptr; };
    // forceRefresh Field Functions 
    bool hasForceRefresh() const { return this->forceRefresh_ != nullptr;};
    void deleteForceRefresh() { this->forceRefresh_ = nullptr;};
    inline bool forceRefresh() const { DARABONBA_PTR_GET_DEFAULT(forceRefresh_, false) };
    inline ListOfficeSiteOverviewRequest& setForceRefresh(bool forceRefresh) { DARABONBA_PTR_SET_VALUE(forceRefresh_, forceRefresh) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListOfficeSiteOverviewRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListOfficeSiteOverviewRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // officeSiteId Field Functions 
    bool hasOfficeSiteId() const { return this->officeSiteId_ != nullptr;};
    void deleteOfficeSiteId() { this->officeSiteId_ = nullptr;};
    inline const vector<string> & officeSiteId() const { DARABONBA_PTR_GET_CONST(officeSiteId_, vector<string>) };
    inline vector<string> officeSiteId() { DARABONBA_PTR_GET(officeSiteId_, vector<string>) };
    inline ListOfficeSiteOverviewRequest& setOfficeSiteId(const vector<string> & officeSiteId) { DARABONBA_PTR_SET_VALUE(officeSiteId_, officeSiteId) };
    inline ListOfficeSiteOverviewRequest& setOfficeSiteId(vector<string> && officeSiteId) { DARABONBA_PTR_SET_RVALUE(officeSiteId_, officeSiteId) };


    // queryRange Field Functions 
    bool hasQueryRange() const { return this->queryRange_ != nullptr;};
    void deleteQueryRange() { this->queryRange_ = nullptr;};
    inline int32_t queryRange() const { DARABONBA_PTR_GET_DEFAULT(queryRange_, 0) };
    inline ListOfficeSiteOverviewRequest& setQueryRange(int32_t queryRange) { DARABONBA_PTR_SET_VALUE(queryRange_, queryRange) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListOfficeSiteOverviewRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // Specifies whether to refresh the cache.
    std::shared_ptr<bool> forceRefresh_ = nullptr;
    // The number of entries to return on each page.
    // 
    // *   Valid values: 1 to 100
    // *   Default value: 10
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // The token that determines the start point of the next query. If this is your first query or no next query is to be sent, skip this parameter. If a next query is to be sent, set the parameter to the value of NextToken that is returned from the last call.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The office network IDs. You can specify IDs of 1 to 100 office networks.
    std::shared_ptr<vector<string>> officeSiteId_ = nullptr;
    // The query scope. Cloud computers in a cloud computer pool are pooled cloud computers.
    // 
    // Default values:
    // 
    // *   1 (default): queries non-pooled cloud computers in the office network.
    // *   2: queries pooled cloud computers in the office network.
    // *   3: queries all cloud computers in the office network.
    std::shared_ptr<int32_t> queryRange_ = nullptr;
    // The region ID. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/196646.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
