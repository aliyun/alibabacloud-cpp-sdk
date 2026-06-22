// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDOCTORHBASEREGIONSERVERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTDOCTORHBASEREGIONSERVERSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class ListDoctorHBaseRegionServersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDoctorHBaseRegionServersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(DateTime, dateTime_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(OrderBy, orderBy_);
      DARABONBA_PTR_TO_JSON(OrderType, orderType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RegionServerHosts, regionServerHosts_);
    };
    friend void from_json(const Darabonba::Json& j, ListDoctorHBaseRegionServersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(DateTime, dateTime_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(OrderBy, orderBy_);
      DARABONBA_PTR_FROM_JSON(OrderType, orderType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RegionServerHosts, regionServerHosts_);
    };
    ListDoctorHBaseRegionServersRequest() = default ;
    ListDoctorHBaseRegionServersRequest(const ListDoctorHBaseRegionServersRequest &) = default ;
    ListDoctorHBaseRegionServersRequest(ListDoctorHBaseRegionServersRequest &&) = default ;
    ListDoctorHBaseRegionServersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDoctorHBaseRegionServersRequest() = default ;
    ListDoctorHBaseRegionServersRequest& operator=(const ListDoctorHBaseRegionServersRequest &) = default ;
    ListDoctorHBaseRegionServersRequest& operator=(ListDoctorHBaseRegionServersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->dateTime_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->orderBy_ == nullptr && this->orderType_ == nullptr
        && this->regionId_ == nullptr && this->regionServerHosts_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline ListDoctorHBaseRegionServersRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // dateTime Field Functions 
    bool hasDateTime() const { return this->dateTime_ != nullptr;};
    void deleteDateTime() { this->dateTime_ = nullptr;};
    inline string getDateTime() const { DARABONBA_PTR_GET_DEFAULT(dateTime_, "") };
    inline ListDoctorHBaseRegionServersRequest& setDateTime(string dateTime) { DARABONBA_PTR_SET_VALUE(dateTime_, dateTime) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListDoctorHBaseRegionServersRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListDoctorHBaseRegionServersRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // orderBy Field Functions 
    bool hasOrderBy() const { return this->orderBy_ != nullptr;};
    void deleteOrderBy() { this->orderBy_ = nullptr;};
    inline string getOrderBy() const { DARABONBA_PTR_GET_DEFAULT(orderBy_, "") };
    inline ListDoctorHBaseRegionServersRequest& setOrderBy(string orderBy) { DARABONBA_PTR_SET_VALUE(orderBy_, orderBy) };


    // orderType Field Functions 
    bool hasOrderType() const { return this->orderType_ != nullptr;};
    void deleteOrderType() { this->orderType_ = nullptr;};
    inline string getOrderType() const { DARABONBA_PTR_GET_DEFAULT(orderType_, "") };
    inline ListDoctorHBaseRegionServersRequest& setOrderType(string orderType) { DARABONBA_PTR_SET_VALUE(orderType_, orderType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListDoctorHBaseRegionServersRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // regionServerHosts Field Functions 
    bool hasRegionServerHosts() const { return this->regionServerHosts_ != nullptr;};
    void deleteRegionServerHosts() { this->regionServerHosts_ = nullptr;};
    inline const vector<string> & getRegionServerHosts() const { DARABONBA_PTR_GET_CONST(regionServerHosts_, vector<string>) };
    inline vector<string> getRegionServerHosts() { DARABONBA_PTR_GET(regionServerHosts_, vector<string>) };
    inline ListDoctorHBaseRegionServersRequest& setRegionServerHosts(const vector<string> & regionServerHosts) { DARABONBA_PTR_SET_VALUE(regionServerHosts_, regionServerHosts) };
    inline ListDoctorHBaseRegionServersRequest& setRegionServerHosts(vector<string> && regionServerHosts) { DARABONBA_PTR_SET_RVALUE(regionServerHosts_, regionServerHosts) };


  protected:
    // The cluster ID.
    // 
    // This parameter is required.
    shared_ptr<string> clusterId_ {};
    // The query date.
    // 
    // This parameter is required.
    shared_ptr<string> dateTime_ {};
    // The maximum number of entries to return on each page.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token that is used in the request to retrieve a new page of results.
    shared_ptr<string> nextToken_ {};
    // The field that you use to sort the query results. Valid value:
    // 
    // *   regionCount: the number of regions.
    shared_ptr<string> orderBy_ {};
    // The order in which you want to sort the query results. Valid value:
    // 
    // *   ASC: in ascending order
    // *   DESC: in descending order
    shared_ptr<string> orderType_ {};
    // The region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The RegionServer hosts.
    shared_ptr<vector<string>> regionServerHosts_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
