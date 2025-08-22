// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETERUMAPPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETERUMAPPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class DeleteRumAppRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteRumAppRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppGroup, appGroup_);
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(RealRegionId, realRegionId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteRumAppRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppGroup, appGroup_);
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(RealRegionId, realRegionId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DeleteRumAppRequest() = default ;
    DeleteRumAppRequest(const DeleteRumAppRequest &) = default ;
    DeleteRumAppRequest(DeleteRumAppRequest &&) = default ;
    DeleteRumAppRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteRumAppRequest() = default ;
    DeleteRumAppRequest& operator=(const DeleteRumAppRequest &) = default ;
    DeleteRumAppRequest& operator=(DeleteRumAppRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appGroup_ != nullptr
        && this->appId_ != nullptr && this->realRegionId_ != nullptr && this->regionId_ != nullptr; };
    // appGroup Field Functions 
    bool hasAppGroup() const { return this->appGroup_ != nullptr;};
    void deleteAppGroup() { this->appGroup_ = nullptr;};
    inline string appGroup() const { DARABONBA_PTR_GET_DEFAULT(appGroup_, "") };
    inline DeleteRumAppRequest& setAppGroup(string appGroup) { DARABONBA_PTR_SET_VALUE(appGroup_, appGroup) };


    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline DeleteRumAppRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // realRegionId Field Functions 
    bool hasRealRegionId() const { return this->realRegionId_ != nullptr;};
    void deleteRealRegionId() { this->realRegionId_ = nullptr;};
    inline string realRegionId() const { DARABONBA_PTR_GET_DEFAULT(realRegionId_, "") };
    inline DeleteRumAppRequest& setRealRegionId(string realRegionId) { DARABONBA_PTR_SET_VALUE(realRegionId_, realRegionId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteRumAppRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The group where the application resides.
    std::shared_ptr<string> appGroup_ = nullptr;
    // The ID of the application.
    // 
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    // The region where the application resides. You can leave this parameter empty or set it to China East 2 Finance.
    std::shared_ptr<string> realRegionId_ = nullptr;
    // The ID of the region.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
