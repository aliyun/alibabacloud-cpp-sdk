// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VERIFYCHECKCUSTOMCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_VERIFYCHECKCUSTOMCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/VerifyCheckCustomConfigRequestCustomCheckConfig.hpp>
#include <vector>
#include <alibabacloud/models/VerifyCheckCustomConfigRequestCustomConfigs.hpp>
#include <alibabacloud/models/VerifyCheckCustomConfigRequestRepairConfigs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class VerifyCheckCustomConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const VerifyCheckCustomConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CheckId, checkId_);
      DARABONBA_PTR_TO_JSON(CustomCheckConfig, customCheckConfig_);
      DARABONBA_PTR_TO_JSON(CustomConfigs, customConfigs_);
      DARABONBA_PTR_TO_JSON(RepairConfigs, repairConfigs_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, VerifyCheckCustomConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckId, checkId_);
      DARABONBA_PTR_FROM_JSON(CustomCheckConfig, customCheckConfig_);
      DARABONBA_PTR_FROM_JSON(CustomConfigs, customConfigs_);
      DARABONBA_PTR_FROM_JSON(RepairConfigs, repairConfigs_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    VerifyCheckCustomConfigRequest() = default ;
    VerifyCheckCustomConfigRequest(const VerifyCheckCustomConfigRequest &) = default ;
    VerifyCheckCustomConfigRequest(VerifyCheckCustomConfigRequest &&) = default ;
    VerifyCheckCustomConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~VerifyCheckCustomConfigRequest() = default ;
    VerifyCheckCustomConfigRequest& operator=(const VerifyCheckCustomConfigRequest &) = default ;
    VerifyCheckCustomConfigRequest& operator=(VerifyCheckCustomConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->checkId_ != nullptr
        && this->customCheckConfig_ != nullptr && this->customConfigs_ != nullptr && this->repairConfigs_ != nullptr && this->type_ != nullptr; };
    // checkId Field Functions 
    bool hasCheckId() const { return this->checkId_ != nullptr;};
    void deleteCheckId() { this->checkId_ = nullptr;};
    inline int64_t checkId() const { DARABONBA_PTR_GET_DEFAULT(checkId_, 0L) };
    inline VerifyCheckCustomConfigRequest& setCheckId(int64_t checkId) { DARABONBA_PTR_SET_VALUE(checkId_, checkId) };


    // customCheckConfig Field Functions 
    bool hasCustomCheckConfig() const { return this->customCheckConfig_ != nullptr;};
    void deleteCustomCheckConfig() { this->customCheckConfig_ = nullptr;};
    inline const VerifyCheckCustomConfigRequestCustomCheckConfig & customCheckConfig() const { DARABONBA_PTR_GET_CONST(customCheckConfig_, VerifyCheckCustomConfigRequestCustomCheckConfig) };
    inline VerifyCheckCustomConfigRequestCustomCheckConfig customCheckConfig() { DARABONBA_PTR_GET(customCheckConfig_, VerifyCheckCustomConfigRequestCustomCheckConfig) };
    inline VerifyCheckCustomConfigRequest& setCustomCheckConfig(const VerifyCheckCustomConfigRequestCustomCheckConfig & customCheckConfig) { DARABONBA_PTR_SET_VALUE(customCheckConfig_, customCheckConfig) };
    inline VerifyCheckCustomConfigRequest& setCustomCheckConfig(VerifyCheckCustomConfigRequestCustomCheckConfig && customCheckConfig) { DARABONBA_PTR_SET_RVALUE(customCheckConfig_, customCheckConfig) };


    // customConfigs Field Functions 
    bool hasCustomConfigs() const { return this->customConfigs_ != nullptr;};
    void deleteCustomConfigs() { this->customConfigs_ = nullptr;};
    inline const vector<VerifyCheckCustomConfigRequestCustomConfigs> & customConfigs() const { DARABONBA_PTR_GET_CONST(customConfigs_, vector<VerifyCheckCustomConfigRequestCustomConfigs>) };
    inline vector<VerifyCheckCustomConfigRequestCustomConfigs> customConfigs() { DARABONBA_PTR_GET(customConfigs_, vector<VerifyCheckCustomConfigRequestCustomConfigs>) };
    inline VerifyCheckCustomConfigRequest& setCustomConfigs(const vector<VerifyCheckCustomConfigRequestCustomConfigs> & customConfigs) { DARABONBA_PTR_SET_VALUE(customConfigs_, customConfigs) };
    inline VerifyCheckCustomConfigRequest& setCustomConfigs(vector<VerifyCheckCustomConfigRequestCustomConfigs> && customConfigs) { DARABONBA_PTR_SET_RVALUE(customConfigs_, customConfigs) };


    // repairConfigs Field Functions 
    bool hasRepairConfigs() const { return this->repairConfigs_ != nullptr;};
    void deleteRepairConfigs() { this->repairConfigs_ = nullptr;};
    inline const vector<VerifyCheckCustomConfigRequestRepairConfigs> & repairConfigs() const { DARABONBA_PTR_GET_CONST(repairConfigs_, vector<VerifyCheckCustomConfigRequestRepairConfigs>) };
    inline vector<VerifyCheckCustomConfigRequestRepairConfigs> repairConfigs() { DARABONBA_PTR_GET(repairConfigs_, vector<VerifyCheckCustomConfigRequestRepairConfigs>) };
    inline VerifyCheckCustomConfigRequest& setRepairConfigs(const vector<VerifyCheckCustomConfigRequestRepairConfigs> & repairConfigs) { DARABONBA_PTR_SET_VALUE(repairConfigs_, repairConfigs) };
    inline VerifyCheckCustomConfigRequest& setRepairConfigs(vector<VerifyCheckCustomConfigRequestRepairConfigs> && repairConfigs) { DARABONBA_PTR_SET_RVALUE(repairConfigs_, repairConfigs) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline VerifyCheckCustomConfigRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // Check item ID.
    std::shared_ptr<int64_t> checkId_ = nullptr;
    // Custom check item to validate input parameters.
    std::shared_ptr<VerifyCheckCustomConfigRequestCustomCheckConfig> customCheckConfig_ = nullptr;
    // List of custom configuration items for the check item.
    std::shared_ptr<vector<VerifyCheckCustomConfigRequestCustomConfigs>> customConfigs_ = nullptr;
    // Repair parameters supported by the check item\\"s repair function.
    std::shared_ptr<vector<VerifyCheckCustomConfigRequestRepairConfigs>> repairConfigs_ = nullptr;
    // Situation Awareness parameter validation types: 
    // - **REPAIR_CONFIG**: Repair and custom parameter validation (default) 
    // - **CHECK_ITEM_CONFIG**: Custom check item validation
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
