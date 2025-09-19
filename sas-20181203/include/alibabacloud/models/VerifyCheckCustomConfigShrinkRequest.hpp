// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VERIFYCHECKCUSTOMCONFIGSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_VERIFYCHECKCUSTOMCONFIGSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/VerifyCheckCustomConfigShrinkRequestCustomConfigs.hpp>
#include <alibabacloud/models/VerifyCheckCustomConfigShrinkRequestRepairConfigs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class VerifyCheckCustomConfigShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const VerifyCheckCustomConfigShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CheckId, checkId_);
      DARABONBA_PTR_TO_JSON(CustomCheckConfig, customCheckConfigShrink_);
      DARABONBA_PTR_TO_JSON(CustomConfigs, customConfigs_);
      DARABONBA_PTR_TO_JSON(RepairConfigs, repairConfigs_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, VerifyCheckCustomConfigShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckId, checkId_);
      DARABONBA_PTR_FROM_JSON(CustomCheckConfig, customCheckConfigShrink_);
      DARABONBA_PTR_FROM_JSON(CustomConfigs, customConfigs_);
      DARABONBA_PTR_FROM_JSON(RepairConfigs, repairConfigs_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    VerifyCheckCustomConfigShrinkRequest() = default ;
    VerifyCheckCustomConfigShrinkRequest(const VerifyCheckCustomConfigShrinkRequest &) = default ;
    VerifyCheckCustomConfigShrinkRequest(VerifyCheckCustomConfigShrinkRequest &&) = default ;
    VerifyCheckCustomConfigShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~VerifyCheckCustomConfigShrinkRequest() = default ;
    VerifyCheckCustomConfigShrinkRequest& operator=(const VerifyCheckCustomConfigShrinkRequest &) = default ;
    VerifyCheckCustomConfigShrinkRequest& operator=(VerifyCheckCustomConfigShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->checkId_ != nullptr
        && this->customCheckConfigShrink_ != nullptr && this->customConfigs_ != nullptr && this->repairConfigs_ != nullptr && this->type_ != nullptr; };
    // checkId Field Functions 
    bool hasCheckId() const { return this->checkId_ != nullptr;};
    void deleteCheckId() { this->checkId_ = nullptr;};
    inline int64_t checkId() const { DARABONBA_PTR_GET_DEFAULT(checkId_, 0L) };
    inline VerifyCheckCustomConfigShrinkRequest& setCheckId(int64_t checkId) { DARABONBA_PTR_SET_VALUE(checkId_, checkId) };


    // customCheckConfigShrink Field Functions 
    bool hasCustomCheckConfigShrink() const { return this->customCheckConfigShrink_ != nullptr;};
    void deleteCustomCheckConfigShrink() { this->customCheckConfigShrink_ = nullptr;};
    inline string customCheckConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(customCheckConfigShrink_, "") };
    inline VerifyCheckCustomConfigShrinkRequest& setCustomCheckConfigShrink(string customCheckConfigShrink) { DARABONBA_PTR_SET_VALUE(customCheckConfigShrink_, customCheckConfigShrink) };


    // customConfigs Field Functions 
    bool hasCustomConfigs() const { return this->customConfigs_ != nullptr;};
    void deleteCustomConfigs() { this->customConfigs_ = nullptr;};
    inline const vector<VerifyCheckCustomConfigShrinkRequestCustomConfigs> & customConfigs() const { DARABONBA_PTR_GET_CONST(customConfigs_, vector<VerifyCheckCustomConfigShrinkRequestCustomConfigs>) };
    inline vector<VerifyCheckCustomConfigShrinkRequestCustomConfigs> customConfigs() { DARABONBA_PTR_GET(customConfigs_, vector<VerifyCheckCustomConfigShrinkRequestCustomConfigs>) };
    inline VerifyCheckCustomConfigShrinkRequest& setCustomConfigs(const vector<VerifyCheckCustomConfigShrinkRequestCustomConfigs> & customConfigs) { DARABONBA_PTR_SET_VALUE(customConfigs_, customConfigs) };
    inline VerifyCheckCustomConfigShrinkRequest& setCustomConfigs(vector<VerifyCheckCustomConfigShrinkRequestCustomConfigs> && customConfigs) { DARABONBA_PTR_SET_RVALUE(customConfigs_, customConfigs) };


    // repairConfigs Field Functions 
    bool hasRepairConfigs() const { return this->repairConfigs_ != nullptr;};
    void deleteRepairConfigs() { this->repairConfigs_ = nullptr;};
    inline const vector<VerifyCheckCustomConfigShrinkRequestRepairConfigs> & repairConfigs() const { DARABONBA_PTR_GET_CONST(repairConfigs_, vector<VerifyCheckCustomConfigShrinkRequestRepairConfigs>) };
    inline vector<VerifyCheckCustomConfigShrinkRequestRepairConfigs> repairConfigs() { DARABONBA_PTR_GET(repairConfigs_, vector<VerifyCheckCustomConfigShrinkRequestRepairConfigs>) };
    inline VerifyCheckCustomConfigShrinkRequest& setRepairConfigs(const vector<VerifyCheckCustomConfigShrinkRequestRepairConfigs> & repairConfigs) { DARABONBA_PTR_SET_VALUE(repairConfigs_, repairConfigs) };
    inline VerifyCheckCustomConfigShrinkRequest& setRepairConfigs(vector<VerifyCheckCustomConfigShrinkRequestRepairConfigs> && repairConfigs) { DARABONBA_PTR_SET_RVALUE(repairConfigs_, repairConfigs) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline VerifyCheckCustomConfigShrinkRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // Check item ID.
    std::shared_ptr<int64_t> checkId_ = nullptr;
    // Custom check item to validate input parameters.
    std::shared_ptr<string> customCheckConfigShrink_ = nullptr;
    // List of custom configuration items for the check item.
    std::shared_ptr<vector<VerifyCheckCustomConfigShrinkRequestCustomConfigs>> customConfigs_ = nullptr;
    // Repair parameters supported by the check item\\"s repair function.
    std::shared_ptr<vector<VerifyCheckCustomConfigShrinkRequestRepairConfigs>> repairConfigs_ = nullptr;
    // Situation Awareness parameter validation types: 
    // - **REPAIR_CONFIG**: Repair and custom parameter validation (default) 
    // - **CHECK_ITEM_CONFIG**: Custom check item validation
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
