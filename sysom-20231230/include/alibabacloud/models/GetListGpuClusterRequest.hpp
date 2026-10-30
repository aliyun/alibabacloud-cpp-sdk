// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLISTGPUCLUSTERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETLISTGPUCLUSTERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SysOM20231230
{
namespace Models
{
  class GetListGpuClusterRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetListGpuClusterRequest& obj) { 
      DARABONBA_PTR_TO_JSON(regionId, regionId_);
      DARABONBA_ANY_TO_JSON(timeRegion, timeRegion_);
    };
    friend void from_json(const Darabonba::Json& j, GetListGpuClusterRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(regionId, regionId_);
      DARABONBA_ANY_FROM_JSON(timeRegion, timeRegion_);
    };
    GetListGpuClusterRequest() = default ;
    GetListGpuClusterRequest(const GetListGpuClusterRequest &) = default ;
    GetListGpuClusterRequest(GetListGpuClusterRequest &&) = default ;
    GetListGpuClusterRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetListGpuClusterRequest() = default ;
    GetListGpuClusterRequest& operator=(const GetListGpuClusterRequest &) = default ;
    GetListGpuClusterRequest& operator=(GetListGpuClusterRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->regionId_ == nullptr
        && this->timeRegion_ == nullptr; };
    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetListGpuClusterRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // timeRegion Field Functions 
    bool hasTimeRegion() const { return this->timeRegion_ != nullptr;};
    void deleteTimeRegion() { this->timeRegion_ = nullptr;};
    inline     const Darabonba::Json & getTimeRegion() const { DARABONBA_GET(timeRegion_) };
    Darabonba::Json & getTimeRegion() { DARABONBA_GET(timeRegion_) };
    inline GetListGpuClusterRequest& setTimeRegion(const Darabonba::Json & timeRegion) { DARABONBA_SET_VALUE(timeRegion_, timeRegion) };
    inline GetListGpuClusterRequest& setTimeRegion(Darabonba::Json && timeRegion) { DARABONBA_SET_RVALUE(timeRegion_, timeRegion) };


  protected:
    // The ID of the region to query.
    shared_ptr<string> regionId_ {};
    // The time range to query. Unit: milliseconds. Format: [start,end]. Example: [13254125000, 52451241000].
    Darabonba::Json timeRegion_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif
