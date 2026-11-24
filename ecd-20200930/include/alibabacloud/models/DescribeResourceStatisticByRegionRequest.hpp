// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERESOURCESTATISTICBYREGIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERESOURCESTATISTICBYREGIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeResourceStatisticByRegionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeResourceStatisticByRegionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(IncludeGroupDesktops, includeGroupDesktops_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SearchRegionId, searchRegionId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeResourceStatisticByRegionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(IncludeGroupDesktops, includeGroupDesktops_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SearchRegionId, searchRegionId_);
    };
    DescribeResourceStatisticByRegionRequest() = default ;
    DescribeResourceStatisticByRegionRequest(const DescribeResourceStatisticByRegionRequest &) = default ;
    DescribeResourceStatisticByRegionRequest(DescribeResourceStatisticByRegionRequest &&) = default ;
    DescribeResourceStatisticByRegionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeResourceStatisticByRegionRequest() = default ;
    DescribeResourceStatisticByRegionRequest& operator=(const DescribeResourceStatisticByRegionRequest &) = default ;
    DescribeResourceStatisticByRegionRequest& operator=(DescribeResourceStatisticByRegionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->includeGroupDesktops_ == nullptr
        && this->regionId_ == nullptr && this->searchRegionId_ == nullptr; };
    // includeGroupDesktops Field Functions 
    bool hasIncludeGroupDesktops() const { return this->includeGroupDesktops_ != nullptr;};
    void deleteIncludeGroupDesktops() { this->includeGroupDesktops_ = nullptr;};
    inline bool getIncludeGroupDesktops() const { DARABONBA_PTR_GET_DEFAULT(includeGroupDesktops_, false) };
    inline DescribeResourceStatisticByRegionRequest& setIncludeGroupDesktops(bool includeGroupDesktops) { DARABONBA_PTR_SET_VALUE(includeGroupDesktops_, includeGroupDesktops) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeResourceStatisticByRegionRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // searchRegionId Field Functions 
    bool hasSearchRegionId() const { return this->searchRegionId_ != nullptr;};
    void deleteSearchRegionId() { this->searchRegionId_ = nullptr;};
    inline string getSearchRegionId() const { DARABONBA_PTR_GET_DEFAULT(searchRegionId_, "") };
    inline DescribeResourceStatisticByRegionRequest& setSearchRegionId(string searchRegionId) { DARABONBA_PTR_SET_VALUE(searchRegionId_, searchRegionId) };


  protected:
    // Specifies whether the statistics include the number of shared cloud desktops.
    shared_ptr<bool> includeGroupDesktops_ {};
    // The ID of the service region. Valid values: China (Shanghai) and Singapore.
    shared_ptr<string> regionId_ {};
    // The ID of the region to search. This parameter is used to filter cloud desktops in the specified region.
    shared_ptr<string> searchRegionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
