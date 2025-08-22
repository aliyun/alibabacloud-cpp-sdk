// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSYNTHETICMONITORSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSYNTHETICMONITORSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class GetSyntheticMonitorsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSyntheticMonitorsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Filter, filterShrink_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, GetSyntheticMonitorsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Filter, filterShrink_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    GetSyntheticMonitorsShrinkRequest() = default ;
    GetSyntheticMonitorsShrinkRequest(const GetSyntheticMonitorsShrinkRequest &) = default ;
    GetSyntheticMonitorsShrinkRequest(GetSyntheticMonitorsShrinkRequest &&) = default ;
    GetSyntheticMonitorsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSyntheticMonitorsShrinkRequest() = default ;
    GetSyntheticMonitorsShrinkRequest& operator=(const GetSyntheticMonitorsShrinkRequest &) = default ;
    GetSyntheticMonitorsShrinkRequest& operator=(GetSyntheticMonitorsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->filterShrink_ != nullptr
        && this->regionId_ != nullptr; };
    // filterShrink Field Functions 
    bool hasFilterShrink() const { return this->filterShrink_ != nullptr;};
    void deleteFilterShrink() { this->filterShrink_ = nullptr;};
    inline string filterShrink() const { DARABONBA_PTR_GET_DEFAULT(filterShrink_, "") };
    inline GetSyntheticMonitorsShrinkRequest& setFilterShrink(string filterShrink) { DARABONBA_PTR_SET_VALUE(filterShrink_, filterShrink) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetSyntheticMonitorsShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The query conditions.
    // 
    // This parameter is required.
    std::shared_ptr<string> filterShrink_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
