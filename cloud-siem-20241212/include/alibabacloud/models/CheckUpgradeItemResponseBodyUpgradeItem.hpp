// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKUPGRADEITEMRESPONSEBODYUPGRADEITEM_HPP_
#define ALIBABACLOUD_MODELS_CHECKUPGRADEITEMRESPONSEBODYUPGRADEITEM_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20241212
{
namespace Models
{
  class CheckUpgradeItemResponseBodyUpgradeItem : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckUpgradeItemResponseBodyUpgradeItem& obj) { 
      DARABONBA_PTR_TO_JSON(CheckResult, checkResult_);
      DARABONBA_PTR_TO_JSON(CheckStatus, checkStatus_);
      DARABONBA_PTR_TO_JSON(UpgradeItemId, upgradeItemId_);
    };
    friend void from_json(const Darabonba::Json& j, CheckUpgradeItemResponseBodyUpgradeItem& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckResult, checkResult_);
      DARABONBA_PTR_FROM_JSON(CheckStatus, checkStatus_);
      DARABONBA_PTR_FROM_JSON(UpgradeItemId, upgradeItemId_);
    };
    CheckUpgradeItemResponseBodyUpgradeItem() = default ;
    CheckUpgradeItemResponseBodyUpgradeItem(const CheckUpgradeItemResponseBodyUpgradeItem &) = default ;
    CheckUpgradeItemResponseBodyUpgradeItem(CheckUpgradeItemResponseBodyUpgradeItem &&) = default ;
    CheckUpgradeItemResponseBodyUpgradeItem(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckUpgradeItemResponseBodyUpgradeItem() = default ;
    CheckUpgradeItemResponseBodyUpgradeItem& operator=(const CheckUpgradeItemResponseBodyUpgradeItem &) = default ;
    CheckUpgradeItemResponseBodyUpgradeItem& operator=(CheckUpgradeItemResponseBodyUpgradeItem &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->checkResult_ == nullptr
        && return this->checkStatus_ == nullptr && return this->upgradeItemId_ == nullptr; };
    // checkResult Field Functions 
    bool hasCheckResult() const { return this->checkResult_ != nullptr;};
    void deleteCheckResult() { this->checkResult_ = nullptr;};
    inline string checkResult() const { DARABONBA_PTR_GET_DEFAULT(checkResult_, "") };
    inline CheckUpgradeItemResponseBodyUpgradeItem& setCheckResult(string checkResult) { DARABONBA_PTR_SET_VALUE(checkResult_, checkResult) };


    // checkStatus Field Functions 
    bool hasCheckStatus() const { return this->checkStatus_ != nullptr;};
    void deleteCheckStatus() { this->checkStatus_ = nullptr;};
    inline string checkStatus() const { DARABONBA_PTR_GET_DEFAULT(checkStatus_, "") };
    inline CheckUpgradeItemResponseBodyUpgradeItem& setCheckStatus(string checkStatus) { DARABONBA_PTR_SET_VALUE(checkStatus_, checkStatus) };


    // upgradeItemId Field Functions 
    bool hasUpgradeItemId() const { return this->upgradeItemId_ != nullptr;};
    void deleteUpgradeItemId() { this->upgradeItemId_ = nullptr;};
    inline string upgradeItemId() const { DARABONBA_PTR_GET_DEFAULT(upgradeItemId_, "") };
    inline CheckUpgradeItemResponseBodyUpgradeItem& setUpgradeItemId(string upgradeItemId) { DARABONBA_PTR_SET_VALUE(upgradeItemId_, upgradeItemId) };


  protected:
    std::shared_ptr<string> checkResult_ = nullptr;
    std::shared_ptr<string> checkStatus_ = nullptr;
    std::shared_ptr<string> upgradeItemId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
