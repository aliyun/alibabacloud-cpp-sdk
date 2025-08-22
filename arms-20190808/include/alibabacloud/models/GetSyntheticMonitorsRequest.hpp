// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSYNTHETICMONITORSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSYNTHETICMONITORSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetSyntheticMonitorsRequestFilter.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class GetSyntheticMonitorsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSyntheticMonitorsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Filter, filter_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, GetSyntheticMonitorsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Filter, filter_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    GetSyntheticMonitorsRequest() = default ;
    GetSyntheticMonitorsRequest(const GetSyntheticMonitorsRequest &) = default ;
    GetSyntheticMonitorsRequest(GetSyntheticMonitorsRequest &&) = default ;
    GetSyntheticMonitorsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSyntheticMonitorsRequest() = default ;
    GetSyntheticMonitorsRequest& operator=(const GetSyntheticMonitorsRequest &) = default ;
    GetSyntheticMonitorsRequest& operator=(GetSyntheticMonitorsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->filter_ != nullptr
        && this->regionId_ != nullptr; };
    // filter Field Functions 
    bool hasFilter() const { return this->filter_ != nullptr;};
    void deleteFilter() { this->filter_ = nullptr;};
    inline const GetSyntheticMonitorsRequestFilter & filter() const { DARABONBA_PTR_GET_CONST(filter_, GetSyntheticMonitorsRequestFilter) };
    inline GetSyntheticMonitorsRequestFilter filter() { DARABONBA_PTR_GET(filter_, GetSyntheticMonitorsRequestFilter) };
    inline GetSyntheticMonitorsRequest& setFilter(const GetSyntheticMonitorsRequestFilter & filter) { DARABONBA_PTR_SET_VALUE(filter_, filter) };
    inline GetSyntheticMonitorsRequest& setFilter(GetSyntheticMonitorsRequestFilter && filter) { DARABONBA_PTR_SET_RVALUE(filter_, filter) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetSyntheticMonitorsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The query conditions.
    // 
    // This parameter is required.
    std::shared_ptr<GetSyntheticMonitorsRequestFilter> filter_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
