// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAGGREGATEDDESKTOPSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETAGGREGATEDDESKTOPSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class GetAggregatedDesktopsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAggregatedDesktopsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AggregationFactor, aggregationFactor_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SearchRegionId, searchRegionId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAggregatedDesktopsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AggregationFactor, aggregationFactor_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SearchRegionId, searchRegionId_);
    };
    GetAggregatedDesktopsRequest() = default ;
    GetAggregatedDesktopsRequest(const GetAggregatedDesktopsRequest &) = default ;
    GetAggregatedDesktopsRequest(GetAggregatedDesktopsRequest &&) = default ;
    GetAggregatedDesktopsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAggregatedDesktopsRequest() = default ;
    GetAggregatedDesktopsRequest& operator=(const GetAggregatedDesktopsRequest &) = default ;
    GetAggregatedDesktopsRequest& operator=(GetAggregatedDesktopsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aggregationFactor_ == nullptr
        && this->regionId_ == nullptr && this->searchRegionId_ == nullptr; };
    // aggregationFactor Field Functions 
    bool hasAggregationFactor() const { return this->aggregationFactor_ != nullptr;};
    void deleteAggregationFactor() { this->aggregationFactor_ = nullptr;};
    inline string getAggregationFactor() const { DARABONBA_PTR_GET_DEFAULT(aggregationFactor_, "") };
    inline GetAggregatedDesktopsRequest& setAggregationFactor(string aggregationFactor) { DARABONBA_PTR_SET_VALUE(aggregationFactor_, aggregationFactor) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetAggregatedDesktopsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // searchRegionId Field Functions 
    bool hasSearchRegionId() const { return this->searchRegionId_ != nullptr;};
    void deleteSearchRegionId() { this->searchRegionId_ = nullptr;};
    inline string getSearchRegionId() const { DARABONBA_PTR_GET_DEFAULT(searchRegionId_, "") };
    inline GetAggregatedDesktopsRequest& setSearchRegionId(string searchRegionId) { DARABONBA_PTR_SET_VALUE(searchRegionId_, searchRegionId) };


  protected:
    // The aggregation factor.
    shared_ptr<string> aggregationFactor_ {};
    // The region ID. You can call [DescribeRegions](https://help.aliyun.com/document_detail/196646.html) to query the list of regions supported by WUYING Workspace.
    shared_ptr<string> regionId_ {};
    // The search region ID. Used to filter desktop information for a specified region.
    shared_ptr<string> searchRegionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
