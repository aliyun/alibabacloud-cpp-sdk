// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODULERESULTSVALUE_HPP_
#define ALIBABACLOUD_MODELS_MODULERESULTSVALUE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class ModuleResultsValue : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModuleResultsValue& obj) { 
      DARABONBA_PTR_TO_JSON(DesiredTotal, desiredTotal_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(Limit, limit_);
      DARABONBA_PTR_TO_JSON(Passed, passed_);
      DARABONBA_PTR_TO_JSON(ResourceCode, resourceCode_);
      DARABONBA_PTR_TO_JSON(UpgradeAvailable, upgradeAvailable_);
    };
    friend void from_json(const Darabonba::Json& j, ModuleResultsValue& obj) { 
      DARABONBA_PTR_FROM_JSON(DesiredTotal, desiredTotal_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(Limit, limit_);
      DARABONBA_PTR_FROM_JSON(Passed, passed_);
      DARABONBA_PTR_FROM_JSON(ResourceCode, resourceCode_);
      DARABONBA_PTR_FROM_JSON(UpgradeAvailable, upgradeAvailable_);
    };
    ModuleResultsValue() = default ;
    ModuleResultsValue(const ModuleResultsValue &) = default ;
    ModuleResultsValue(ModuleResultsValue &&) = default ;
    ModuleResultsValue(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModuleResultsValue() = default ;
    ModuleResultsValue& operator=(const ModuleResultsValue &) = default ;
    ModuleResultsValue& operator=(ModuleResultsValue &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->desiredTotal_ == nullptr
        && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->limit_ == nullptr && this->passed_ == nullptr && this->resourceCode_ == nullptr
        && this->upgradeAvailable_ == nullptr; };
    // desiredTotal Field Functions 
    bool hasDesiredTotal() const { return this->desiredTotal_ != nullptr;};
    void deleteDesiredTotal() { this->desiredTotal_ = nullptr;};
    inline int64_t getDesiredTotal() const { DARABONBA_PTR_GET_DEFAULT(desiredTotal_, 0L) };
    inline ModuleResultsValue& setDesiredTotal(int64_t desiredTotal) { DARABONBA_PTR_SET_VALUE(desiredTotal_, desiredTotal) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ModuleResultsValue& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline ModuleResultsValue& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // limit Field Functions 
    bool hasLimit() const { return this->limit_ != nullptr;};
    void deleteLimit() { this->limit_ = nullptr;};
    inline int64_t getLimit() const { DARABONBA_PTR_GET_DEFAULT(limit_, 0L) };
    inline ModuleResultsValue& setLimit(int64_t limit) { DARABONBA_PTR_SET_VALUE(limit_, limit) };


    // passed Field Functions 
    bool hasPassed() const { return this->passed_ != nullptr;};
    void deletePassed() { this->passed_ = nullptr;};
    inline bool getPassed() const { DARABONBA_PTR_GET_DEFAULT(passed_, false) };
    inline ModuleResultsValue& setPassed(bool passed) { DARABONBA_PTR_SET_VALUE(passed_, passed) };


    // resourceCode Field Functions 
    bool hasResourceCode() const { return this->resourceCode_ != nullptr;};
    void deleteResourceCode() { this->resourceCode_ = nullptr;};
    inline string getResourceCode() const { DARABONBA_PTR_GET_DEFAULT(resourceCode_, "") };
    inline ModuleResultsValue& setResourceCode(string resourceCode) { DARABONBA_PTR_SET_VALUE(resourceCode_, resourceCode) };


    // upgradeAvailable Field Functions 
    bool hasUpgradeAvailable() const { return this->upgradeAvailable_ != nullptr;};
    void deleteUpgradeAvailable() { this->upgradeAvailable_ = nullptr;};
    inline bool getUpgradeAvailable() const { DARABONBA_PTR_GET_DEFAULT(upgradeAvailable_, false) };
    inline ModuleResultsValue& setUpgradeAvailable(bool upgradeAvailable) { DARABONBA_PTR_SET_VALUE(upgradeAvailable_, upgradeAvailable) };


  protected:
    // Returned only for APP_WORKSPACE: the target total amount for this check, which is the used amount in the saved configuration plus the ResourceValue. If a compatible DesiredTotal is provided, this total amount is used directly. The used amount for issues is the sum of regular and reputation issues in the saved configuration, and the used amount for competitors is the number of competitors. This field is empty for APP and USER checks.
    shared_ptr<int64_t> desiredTotal_ {};
    // The error code when the check fails. This field is null when the check passes.
    shared_ptr<string> errorCode_ {};
    // The error message when the check fails. This field is null when the check passes.
    shared_ptr<string> errorMessage_ {};
    // Returned only for APP_WORKSPACE quantity pre-checks: the maximum number of issues or competitors allowed by the current product edition, which is not the remaining quota. This field is empty for APP and USER checks or when the edition benefits cannot be determined.
    shared_ptr<int64_t> limit_ {};
    // Indicates whether the check passed.
    shared_ptr<bool> passed_ {};
    // The resource code.
    shared_ptr<string> resourceCode_ {};
    // Indicates whether a purchasable higher edition exists that can accommodate the DesiredTotal. This field is true only when the capacity of the current edition is insufficient and a higher edition meets the requirement. Otherwise, it is false. This field may be empty for APP and USER checks. This field does not indicate that an upgrade has been performed or an upgrade order has been created.
    shared_ptr<bool> upgradeAvailable_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
