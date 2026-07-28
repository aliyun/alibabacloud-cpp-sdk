// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPGRADEAPPLICATIONVERSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPGRADEAPPLICATIONVERSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class UpgradeApplicationVersionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpgradeApplicationVersionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(UpgradePolicy, upgradePolicy_);
    };
    friend void from_json(const Darabonba::Json& j, UpgradeApplicationVersionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(UpgradePolicy, upgradePolicy_);
    };
    UpgradeApplicationVersionRequest() = default ;
    UpgradeApplicationVersionRequest(const UpgradeApplicationVersionRequest &) = default ;
    UpgradeApplicationVersionRequest(UpgradeApplicationVersionRequest &&) = default ;
    UpgradeApplicationVersionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpgradeApplicationVersionRequest() = default ;
    UpgradeApplicationVersionRequest& operator=(const UpgradeApplicationVersionRequest &) = default ;
    UpgradeApplicationVersionRequest& operator=(UpgradeApplicationVersionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationId_ == nullptr
        && this->upgradePolicy_ == nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline UpgradeApplicationVersionRequest& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // upgradePolicy Field Functions 
    bool hasUpgradePolicy() const { return this->upgradePolicy_ != nullptr;};
    void deleteUpgradePolicy() { this->upgradePolicy_ = nullptr;};
    inline string getUpgradePolicy() const { DARABONBA_PTR_GET_DEFAULT(upgradePolicy_, "") };
    inline UpgradeApplicationVersionRequest& setUpgradePolicy(string upgradePolicy) { DARABONBA_PTR_SET_VALUE(upgradePolicy_, upgradePolicy) };


  protected:
    // The application ID.
    // 
    // This parameter is required.
    shared_ptr<string> applicationId_ {};
    // The upgrade policy.
    shared_ptr<string> upgradePolicy_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
