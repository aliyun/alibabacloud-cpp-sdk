// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPGRADEVERSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPGRADEVERSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Starrocks20221019
{
namespace Models
{
  class UpgradeVersionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpgradeVersionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FastMode, fastMode_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Minor, minor_);
      DARABONBA_PTR_TO_JSON(TargetVersion, targetVersion_);
    };
    friend void from_json(const Darabonba::Json& j, UpgradeVersionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FastMode, fastMode_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Minor, minor_);
      DARABONBA_PTR_FROM_JSON(TargetVersion, targetVersion_);
    };
    UpgradeVersionRequest() = default ;
    UpgradeVersionRequest(const UpgradeVersionRequest &) = default ;
    UpgradeVersionRequest(UpgradeVersionRequest &&) = default ;
    UpgradeVersionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpgradeVersionRequest() = default ;
    UpgradeVersionRequest& operator=(const UpgradeVersionRequest &) = default ;
    UpgradeVersionRequest& operator=(UpgradeVersionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fastMode_ == nullptr
        && return this->instanceId_ == nullptr && return this->minor_ == nullptr && return this->targetVersion_ == nullptr; };
    // fastMode Field Functions 
    bool hasFastMode() const { return this->fastMode_ != nullptr;};
    void deleteFastMode() { this->fastMode_ = nullptr;};
    inline bool fastMode() const { DARABONBA_PTR_GET_DEFAULT(fastMode_, false) };
    inline UpgradeVersionRequest& setFastMode(bool fastMode) { DARABONBA_PTR_SET_VALUE(fastMode_, fastMode) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpgradeVersionRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // minor Field Functions 
    bool hasMinor() const { return this->minor_ != nullptr;};
    void deleteMinor() { this->minor_ = nullptr;};
    inline bool minor() const { DARABONBA_PTR_GET_DEFAULT(minor_, false) };
    inline UpgradeVersionRequest& setMinor(bool minor) { DARABONBA_PTR_SET_VALUE(minor_, minor) };


    // targetVersion Field Functions 
    bool hasTargetVersion() const { return this->targetVersion_ != nullptr;};
    void deleteTargetVersion() { this->targetVersion_ = nullptr;};
    inline string targetVersion() const { DARABONBA_PTR_GET_DEFAULT(targetVersion_, "") };
    inline UpgradeVersionRequest& setTargetVersion(string targetVersion) { DARABONBA_PTR_SET_VALUE(targetVersion_, targetVersion) };


  protected:
    std::shared_ptr<bool> fastMode_ = nullptr;
    // The instance ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // Specifies whether the minor version is upgraded. Default value: true. Valid values:
    // 
    // *   true: The minor version is upgraded.
    // *   false: The major version is upgraded.
    std::shared_ptr<bool> minor_ = nullptr;
    // The version to which you want to upgrade.
    // 
    // This parameter is required.
    std::shared_ptr<string> targetVersion_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Starrocks20221019
#endif
