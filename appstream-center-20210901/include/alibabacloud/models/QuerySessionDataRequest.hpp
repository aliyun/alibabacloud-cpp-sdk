// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSESSIONDATAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYSESSIONDATAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class QuerySessionDataRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuerySessionDataRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppInstanceGroupId, appInstanceGroupId_);
      DARABONBA_PTR_TO_JSON(BizRegionId, bizRegionId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(StatDate, statDate_);
    };
    friend void from_json(const Darabonba::Json& j, QuerySessionDataRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppInstanceGroupId, appInstanceGroupId_);
      DARABONBA_PTR_FROM_JSON(BizRegionId, bizRegionId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(StatDate, statDate_);
    };
    QuerySessionDataRequest() = default ;
    QuerySessionDataRequest(const QuerySessionDataRequest &) = default ;
    QuerySessionDataRequest(QuerySessionDataRequest &&) = default ;
    QuerySessionDataRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuerySessionDataRequest() = default ;
    QuerySessionDataRequest& operator=(const QuerySessionDataRequest &) = default ;
    QuerySessionDataRequest& operator=(QuerySessionDataRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appInstanceGroupId_ == nullptr
        && this->bizRegionId_ == nullptr && this->regionId_ == nullptr && this->statDate_ == nullptr; };
    // appInstanceGroupId Field Functions 
    bool hasAppInstanceGroupId() const { return this->appInstanceGroupId_ != nullptr;};
    void deleteAppInstanceGroupId() { this->appInstanceGroupId_ = nullptr;};
    inline string getAppInstanceGroupId() const { DARABONBA_PTR_GET_DEFAULT(appInstanceGroupId_, "") };
    inline QuerySessionDataRequest& setAppInstanceGroupId(string appInstanceGroupId) { DARABONBA_PTR_SET_VALUE(appInstanceGroupId_, appInstanceGroupId) };


    // bizRegionId Field Functions 
    bool hasBizRegionId() const { return this->bizRegionId_ != nullptr;};
    void deleteBizRegionId() { this->bizRegionId_ = nullptr;};
    inline string getBizRegionId() const { DARABONBA_PTR_GET_DEFAULT(bizRegionId_, "") };
    inline QuerySessionDataRequest& setBizRegionId(string bizRegionId) { DARABONBA_PTR_SET_VALUE(bizRegionId_, bizRegionId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline QuerySessionDataRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // statDate Field Functions 
    bool hasStatDate() const { return this->statDate_ != nullptr;};
    void deleteStatDate() { this->statDate_ = nullptr;};
    inline string getStatDate() const { DARABONBA_PTR_GET_DEFAULT(statDate_, "") };
    inline QuerySessionDataRequest& setStatDate(string statDate) { DARABONBA_PTR_SET_VALUE(statDate_, statDate) };


  protected:
    // The delivery group ID, used to filter session data for a specified delivery group. If not provided, the aggregated session data for all delivery groups under the current account is returned.
    shared_ptr<string> appInstanceGroupId_ {};
    // The business region ID, which specifies the region for which to query session data. The server uses this value as the region filter condition for session data. If not provided, no region filtering is applied and the aggregated session data for all regions is returned.
    shared_ptr<string> bizRegionId_ {};
    // The region ID, which is a common request parameter for the gateway. The actual region used to filter session data in this operation is specified by BizRegionId.
    shared_ptr<string> regionId_ {};
    // The statistical date in the yyyyMMdd format (without hyphens), such as 20261106. If not provided, the data for yesterday is queried by default. Only dates within the last 90 days are supported. If the date exceeds 90 days or the format is invalid, a parameter error is returned.
    shared_ptr<string> statDate_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
