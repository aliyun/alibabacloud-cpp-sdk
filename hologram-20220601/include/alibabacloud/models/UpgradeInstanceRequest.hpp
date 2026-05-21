// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPGRADEINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPGRADEINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hologram20220601
{
namespace Models
{
  class UpgradeInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpgradeInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(upgradeTime, upgradeTime_);
    };
    friend void from_json(const Darabonba::Json& j, UpgradeInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(upgradeTime, upgradeTime_);
    };
    UpgradeInstanceRequest() = default ;
    UpgradeInstanceRequest(const UpgradeInstanceRequest &) = default ;
    UpgradeInstanceRequest(UpgradeInstanceRequest &&) = default ;
    UpgradeInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpgradeInstanceRequest() = default ;
    UpgradeInstanceRequest& operator=(const UpgradeInstanceRequest &) = default ;
    UpgradeInstanceRequest& operator=(UpgradeInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->regionId_ == nullptr
        && this->type_ == nullptr && this->upgradeTime_ == nullptr; };
    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpgradeInstanceRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline UpgradeInstanceRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // upgradeTime Field Functions 
    bool hasUpgradeTime() const { return this->upgradeTime_ != nullptr;};
    void deleteUpgradeTime() { this->upgradeTime_ = nullptr;};
    inline string getUpgradeTime() const { DARABONBA_PTR_GET_DEFAULT(upgradeTime_, "") };
    inline UpgradeInstanceRequest& setUpgradeTime(string upgradeTime) { DARABONBA_PTR_SET_VALUE(upgradeTime_, upgradeTime) };


  protected:
    shared_ptr<string> regionId_ {};
    shared_ptr<string> type_ {};
    shared_ptr<string> upgradeTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hologram20220601
#endif
