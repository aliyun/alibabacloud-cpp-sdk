// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETEDGETOTALDEVICECOUNTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETEDGETOTALDEVICECOUNTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Lto20210707
{
namespace Models
{
  class GetEdgeTotalDeviceCountRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetEdgeTotalDeviceCountRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, GetEdgeTotalDeviceCountRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    GetEdgeTotalDeviceCountRequest() = default ;
    GetEdgeTotalDeviceCountRequest(const GetEdgeTotalDeviceCountRequest &) = default ;
    GetEdgeTotalDeviceCountRequest(GetEdgeTotalDeviceCountRequest &&) = default ;
    GetEdgeTotalDeviceCountRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetEdgeTotalDeviceCountRequest() = default ;
    GetEdgeTotalDeviceCountRequest& operator=(const GetEdgeTotalDeviceCountRequest &) = default ;
    GetEdgeTotalDeviceCountRequest& operator=(GetEdgeTotalDeviceCountRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->regionId_ == nullptr; };
    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetEdgeTotalDeviceCountRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Lto20210707
#endif
