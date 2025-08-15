// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCERESPONSEBODYDATASOFTWARE_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCERESPONSEBODYDATASOFTWARE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RocketMQ20220801
{
namespace Models
{
  class GetInstanceResponseBodyDataSoftware : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceResponseBodyDataSoftware& obj) { 
      DARABONBA_PTR_TO_JSON(maintainTime, maintainTime_);
      DARABONBA_PTR_TO_JSON(softwareVersion, softwareVersion_);
      DARABONBA_PTR_TO_JSON(upgradeMethod, upgradeMethod_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceResponseBodyDataSoftware& obj) { 
      DARABONBA_PTR_FROM_JSON(maintainTime, maintainTime_);
      DARABONBA_PTR_FROM_JSON(softwareVersion, softwareVersion_);
      DARABONBA_PTR_FROM_JSON(upgradeMethod, upgradeMethod_);
    };
    GetInstanceResponseBodyDataSoftware() = default ;
    GetInstanceResponseBodyDataSoftware(const GetInstanceResponseBodyDataSoftware &) = default ;
    GetInstanceResponseBodyDataSoftware(GetInstanceResponseBodyDataSoftware &&) = default ;
    GetInstanceResponseBodyDataSoftware(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceResponseBodyDataSoftware() = default ;
    GetInstanceResponseBodyDataSoftware& operator=(const GetInstanceResponseBodyDataSoftware &) = default ;
    GetInstanceResponseBodyDataSoftware& operator=(GetInstanceResponseBodyDataSoftware &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->maintainTime_ != nullptr
        && this->softwareVersion_ != nullptr && this->upgradeMethod_ != nullptr; };
    // maintainTime Field Functions 
    bool hasMaintainTime() const { return this->maintainTime_ != nullptr;};
    void deleteMaintainTime() { this->maintainTime_ = nullptr;};
    inline string maintainTime() const { DARABONBA_PTR_GET_DEFAULT(maintainTime_, "") };
    inline GetInstanceResponseBodyDataSoftware& setMaintainTime(string maintainTime) { DARABONBA_PTR_SET_VALUE(maintainTime_, maintainTime) };


    // softwareVersion Field Functions 
    bool hasSoftwareVersion() const { return this->softwareVersion_ != nullptr;};
    void deleteSoftwareVersion() { this->softwareVersion_ = nullptr;};
    inline string softwareVersion() const { DARABONBA_PTR_GET_DEFAULT(softwareVersion_, "") };
    inline GetInstanceResponseBodyDataSoftware& setSoftwareVersion(string softwareVersion) { DARABONBA_PTR_SET_VALUE(softwareVersion_, softwareVersion) };


    // upgradeMethod Field Functions 
    bool hasUpgradeMethod() const { return this->upgradeMethod_ != nullptr;};
    void deleteUpgradeMethod() { this->upgradeMethod_ = nullptr;};
    inline string upgradeMethod() const { DARABONBA_PTR_GET_DEFAULT(upgradeMethod_, "") };
    inline GetInstanceResponseBodyDataSoftware& setUpgradeMethod(string upgradeMethod) { DARABONBA_PTR_SET_VALUE(upgradeMethod_, upgradeMethod) };


  protected:
    // The period of upgrade time.
    std::shared_ptr<string> maintainTime_ = nullptr;
    // The version of software.
    std::shared_ptr<string> softwareVersion_ = nullptr;
    // The upgrade method.
    // 
    // Valid values:
    // 
    // - Auto: automatic upgrade
    // 
    // - Manual: manual upgrade
    std::shared_ptr<string> upgradeMethod_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RocketMQ20220801
#endif
