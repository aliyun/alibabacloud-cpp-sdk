// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVIRTUALBRIDGESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTVIRTUALBRIDGESREQUEST_HPP_
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
  class ListVirtualBridgesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVirtualBridgesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BridgeId, bridgeId_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ListVirtualBridgesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BridgeId, bridgeId_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ListVirtualBridgesRequest() = default ;
    ListVirtualBridgesRequest(const ListVirtualBridgesRequest &) = default ;
    ListVirtualBridgesRequest(ListVirtualBridgesRequest &&) = default ;
    ListVirtualBridgesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVirtualBridgesRequest() = default ;
    ListVirtualBridgesRequest& operator=(const ListVirtualBridgesRequest &) = default ;
    ListVirtualBridgesRequest& operator=(ListVirtualBridgesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bridgeId_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->officeSiteId_ == nullptr && this->regionId_ == nullptr; };
    // bridgeId Field Functions 
    bool hasBridgeId() const { return this->bridgeId_ != nullptr;};
    void deleteBridgeId() { this->bridgeId_ = nullptr;};
    inline const vector<string> & getBridgeId() const { DARABONBA_PTR_GET_CONST(bridgeId_, vector<string>) };
    inline vector<string> getBridgeId() { DARABONBA_PTR_GET(bridgeId_, vector<string>) };
    inline ListVirtualBridgesRequest& setBridgeId(const vector<string> & bridgeId) { DARABONBA_PTR_SET_VALUE(bridgeId_, bridgeId) };
    inline ListVirtualBridgesRequest& setBridgeId(vector<string> && bridgeId) { DARABONBA_PTR_SET_RVALUE(bridgeId_, bridgeId) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListVirtualBridgesRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListVirtualBridgesRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // officeSiteId Field Functions 
    bool hasOfficeSiteId() const { return this->officeSiteId_ != nullptr;};
    void deleteOfficeSiteId() { this->officeSiteId_ = nullptr;};
    inline string getOfficeSiteId() const { DARABONBA_PTR_GET_DEFAULT(officeSiteId_, "") };
    inline ListVirtualBridgesRequest& setOfficeSiteId(string officeSiteId) { DARABONBA_PTR_SET_VALUE(officeSiteId_, officeSiteId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListVirtualBridgesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The list of virtual bridge IDs.
    shared_ptr<vector<string>> bridgeId_ {};
    // The maximum number of entries to return. Valid values: 1 to 500.
    // Default value: 500.
    shared_ptr<int32_t> maxResults_ {};
    // The token for the next query. If NextToken is empty, no more results exist.
    shared_ptr<string> nextToken_ {};
    // The office network ID.
    // 
    // > The `DirectoryId` parameter will be deprecated. Use this parameter instead.
    shared_ptr<string> officeSiteId_ {};
    // The region ID. You can call [DescribeRegions](~~DescribeRegions~~) to query the regions supported by WUYING Workspace.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
