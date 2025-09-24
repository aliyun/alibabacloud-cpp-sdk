// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPGRADERESOURCEPACKAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPGRADERESOURCEPACKAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class UpgradeResourcePackageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpgradeResourcePackageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EffectiveDate, effectiveDate_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(Specification, specification_);
    };
    friend void from_json(const Darabonba::Json& j, UpgradeResourcePackageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EffectiveDate, effectiveDate_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(Specification, specification_);
    };
    UpgradeResourcePackageRequest() = default ;
    UpgradeResourcePackageRequest(const UpgradeResourcePackageRequest &) = default ;
    UpgradeResourcePackageRequest(UpgradeResourcePackageRequest &&) = default ;
    UpgradeResourcePackageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpgradeResourcePackageRequest() = default ;
    UpgradeResourcePackageRequest& operator=(const UpgradeResourcePackageRequest &) = default ;
    UpgradeResourcePackageRequest& operator=(UpgradeResourcePackageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->effectiveDate_ != nullptr
        && this->instanceId_ != nullptr && this->ownerId_ != nullptr && this->specification_ != nullptr; };
    // effectiveDate Field Functions 
    bool hasEffectiveDate() const { return this->effectiveDate_ != nullptr;};
    void deleteEffectiveDate() { this->effectiveDate_ = nullptr;};
    inline string effectiveDate() const { DARABONBA_PTR_GET_DEFAULT(effectiveDate_, "") };
    inline UpgradeResourcePackageRequest& setEffectiveDate(string effectiveDate) { DARABONBA_PTR_SET_VALUE(effectiveDate_, effectiveDate) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpgradeResourcePackageRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline UpgradeResourcePackageRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // specification Field Functions 
    bool hasSpecification() const { return this->specification_ != nullptr;};
    void deleteSpecification() { this->specification_ = nullptr;};
    inline string specification() const { DARABONBA_PTR_GET_DEFAULT(specification_, "") };
    inline UpgradeResourcePackageRequest& setSpecification(string specification) { DARABONBA_PTR_SET_VALUE(specification_, specification) };


  protected:
    // The time when the resource plan takes effect. If you leave this parameter empty, the resource plan immediately takes effect by default.
    // 
    // Specify the time in the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time must be in UTC.
    std::shared_ptr<string> effectiveDate_ = nullptr;
    // The ID of the resource plan.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The specifications to which you want to upgrade the resource plan.
    std::shared_ptr<string> specification_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
