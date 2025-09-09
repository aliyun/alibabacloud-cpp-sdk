// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RELEASEINSTANCEINTERNETADDRESSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RELEASEINSTANCEINTERNETADDRESSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Drds20190123
{
namespace Models
{
  class ReleaseInstanceInternetAddressRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ReleaseInstanceInternetAddressRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DrdsInstanceId, drdsInstanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ReleaseInstanceInternetAddressRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DrdsInstanceId, drdsInstanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ReleaseInstanceInternetAddressRequest() = default ;
    ReleaseInstanceInternetAddressRequest(const ReleaseInstanceInternetAddressRequest &) = default ;
    ReleaseInstanceInternetAddressRequest(ReleaseInstanceInternetAddressRequest &&) = default ;
    ReleaseInstanceInternetAddressRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ReleaseInstanceInternetAddressRequest() = default ;
    ReleaseInstanceInternetAddressRequest& operator=(const ReleaseInstanceInternetAddressRequest &) = default ;
    ReleaseInstanceInternetAddressRequest& operator=(ReleaseInstanceInternetAddressRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->drdsInstanceId_ != nullptr
        && this->regionId_ != nullptr; };
    // drdsInstanceId Field Functions 
    bool hasDrdsInstanceId() const { return this->drdsInstanceId_ != nullptr;};
    void deleteDrdsInstanceId() { this->drdsInstanceId_ = nullptr;};
    inline string drdsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(drdsInstanceId_, "") };
    inline ReleaseInstanceInternetAddressRequest& setDrdsInstanceId(string drdsInstanceId) { DARABONBA_PTR_SET_VALUE(drdsInstanceId_, drdsInstanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ReleaseInstanceInternetAddressRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The ID of the DRDS instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> drdsInstanceId_ = nullptr;
    // The region where the instance is located.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif
