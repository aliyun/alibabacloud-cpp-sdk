// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OPENTRIALPACKAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_OPENTRIALPACKAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RiskManagement20260424
{
namespace Models
{
  class OpenTrialPackageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OpenTrialPackageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoCloseSwitch, autoCloseSwitch_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, OpenTrialPackageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoCloseSwitch, autoCloseSwitch_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    OpenTrialPackageRequest() = default ;
    OpenTrialPackageRequest(const OpenTrialPackageRequest &) = default ;
    OpenTrialPackageRequest(OpenTrialPackageRequest &&) = default ;
    OpenTrialPackageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OpenTrialPackageRequest() = default ;
    OpenTrialPackageRequest& operator=(const OpenTrialPackageRequest &) = default ;
    OpenTrialPackageRequest& operator=(OpenTrialPackageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoCloseSwitch_ == nullptr
        && this->regionId_ == nullptr; };
    // autoCloseSwitch Field Functions 
    bool hasAutoCloseSwitch() const { return this->autoCloseSwitch_ != nullptr;};
    void deleteAutoCloseSwitch() { this->autoCloseSwitch_ = nullptr;};
    inline int32_t getAutoCloseSwitch() const { DARABONBA_PTR_GET_DEFAULT(autoCloseSwitch_, 0) };
    inline OpenTrialPackageRequest& setAutoCloseSwitch(int32_t autoCloseSwitch) { DARABONBA_PTR_SET_VALUE(autoCloseSwitch_, autoCloseSwitch) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline OpenTrialPackageRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    shared_ptr<int32_t> autoCloseSwitch_ {};
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RiskManagement20260424
#endif
