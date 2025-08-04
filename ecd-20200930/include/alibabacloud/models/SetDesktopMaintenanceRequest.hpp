// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETDESKTOPMAINTENANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETDESKTOPMAINTENANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class SetDesktopMaintenanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetDesktopMaintenanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DesktopIds, desktopIds_);
      DARABONBA_PTR_TO_JSON(Mode, mode_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, SetDesktopMaintenanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DesktopIds, desktopIds_);
      DARABONBA_PTR_FROM_JSON(Mode, mode_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    SetDesktopMaintenanceRequest() = default ;
    SetDesktopMaintenanceRequest(const SetDesktopMaintenanceRequest &) = default ;
    SetDesktopMaintenanceRequest(SetDesktopMaintenanceRequest &&) = default ;
    SetDesktopMaintenanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetDesktopMaintenanceRequest() = default ;
    SetDesktopMaintenanceRequest& operator=(const SetDesktopMaintenanceRequest &) = default ;
    SetDesktopMaintenanceRequest& operator=(SetDesktopMaintenanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->desktopIds_ != nullptr
        && this->mode_ != nullptr && this->regionId_ != nullptr; };
    // desktopIds Field Functions 
    bool hasDesktopIds() const { return this->desktopIds_ != nullptr;};
    void deleteDesktopIds() { this->desktopIds_ = nullptr;};
    inline const vector<string> & desktopIds() const { DARABONBA_PTR_GET_CONST(desktopIds_, vector<string>) };
    inline vector<string> desktopIds() { DARABONBA_PTR_GET(desktopIds_, vector<string>) };
    inline SetDesktopMaintenanceRequest& setDesktopIds(const vector<string> & desktopIds) { DARABONBA_PTR_SET_VALUE(desktopIds_, desktopIds) };
    inline SetDesktopMaintenanceRequest& setDesktopIds(vector<string> && desktopIds) { DARABONBA_PTR_SET_RVALUE(desktopIds_, desktopIds) };


    // mode Field Functions 
    bool hasMode() const { return this->mode_ != nullptr;};
    void deleteMode() { this->mode_ = nullptr;};
    inline string mode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
    inline SetDesktopMaintenanceRequest& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline SetDesktopMaintenanceRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // This parameter is required.
    std::shared_ptr<vector<string>> desktopIds_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> mode_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
