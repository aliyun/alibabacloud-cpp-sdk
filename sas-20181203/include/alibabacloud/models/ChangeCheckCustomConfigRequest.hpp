// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHANGECHECKCUSTOMCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHANGECHECKCUSTOMCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ChangeCheckCustomConfigRequestCustomConfigs.hpp>
#include <alibabacloud/models/ChangeCheckCustomConfigRequestRepairConfigs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ChangeCheckCustomConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChangeCheckCustomConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CheckId, checkId_);
      DARABONBA_PTR_TO_JSON(CustomConfigs, customConfigs_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RepairConfigs, repairConfigs_);
    };
    friend void from_json(const Darabonba::Json& j, ChangeCheckCustomConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckId, checkId_);
      DARABONBA_PTR_FROM_JSON(CustomConfigs, customConfigs_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RepairConfigs, repairConfigs_);
    };
    ChangeCheckCustomConfigRequest() = default ;
    ChangeCheckCustomConfigRequest(const ChangeCheckCustomConfigRequest &) = default ;
    ChangeCheckCustomConfigRequest(ChangeCheckCustomConfigRequest &&) = default ;
    ChangeCheckCustomConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChangeCheckCustomConfigRequest() = default ;
    ChangeCheckCustomConfigRequest& operator=(const ChangeCheckCustomConfigRequest &) = default ;
    ChangeCheckCustomConfigRequest& operator=(ChangeCheckCustomConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->checkId_ != nullptr
        && this->customConfigs_ != nullptr && this->regionId_ != nullptr && this->repairConfigs_ != nullptr; };
    // checkId Field Functions 
    bool hasCheckId() const { return this->checkId_ != nullptr;};
    void deleteCheckId() { this->checkId_ = nullptr;};
    inline int64_t checkId() const { DARABONBA_PTR_GET_DEFAULT(checkId_, 0L) };
    inline ChangeCheckCustomConfigRequest& setCheckId(int64_t checkId) { DARABONBA_PTR_SET_VALUE(checkId_, checkId) };


    // customConfigs Field Functions 
    bool hasCustomConfigs() const { return this->customConfigs_ != nullptr;};
    void deleteCustomConfigs() { this->customConfigs_ = nullptr;};
    inline const vector<ChangeCheckCustomConfigRequestCustomConfigs> & customConfigs() const { DARABONBA_PTR_GET_CONST(customConfigs_, vector<ChangeCheckCustomConfigRequestCustomConfigs>) };
    inline vector<ChangeCheckCustomConfigRequestCustomConfigs> customConfigs() { DARABONBA_PTR_GET(customConfigs_, vector<ChangeCheckCustomConfigRequestCustomConfigs>) };
    inline ChangeCheckCustomConfigRequest& setCustomConfigs(const vector<ChangeCheckCustomConfigRequestCustomConfigs> & customConfigs) { DARABONBA_PTR_SET_VALUE(customConfigs_, customConfigs) };
    inline ChangeCheckCustomConfigRequest& setCustomConfigs(vector<ChangeCheckCustomConfigRequestCustomConfigs> && customConfigs) { DARABONBA_PTR_SET_RVALUE(customConfigs_, customConfigs) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ChangeCheckCustomConfigRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // repairConfigs Field Functions 
    bool hasRepairConfigs() const { return this->repairConfigs_ != nullptr;};
    void deleteRepairConfigs() { this->repairConfigs_ = nullptr;};
    inline const vector<ChangeCheckCustomConfigRequestRepairConfigs> & repairConfigs() const { DARABONBA_PTR_GET_CONST(repairConfigs_, vector<ChangeCheckCustomConfigRequestRepairConfigs>) };
    inline vector<ChangeCheckCustomConfigRequestRepairConfigs> repairConfigs() { DARABONBA_PTR_GET(repairConfigs_, vector<ChangeCheckCustomConfigRequestRepairConfigs>) };
    inline ChangeCheckCustomConfigRequest& setRepairConfigs(const vector<ChangeCheckCustomConfigRequestRepairConfigs> & repairConfigs) { DARABONBA_PTR_SET_VALUE(repairConfigs_, repairConfigs) };
    inline ChangeCheckCustomConfigRequest& setRepairConfigs(vector<ChangeCheckCustomConfigRequestRepairConfigs> && repairConfigs) { DARABONBA_PTR_SET_RVALUE(repairConfigs_, repairConfigs) };


  protected:
    // The ID of the check item.
    // 
    // > You can call the [ListCheckResult](~~ListCheckResult~~) operation to query the IDs of check items.
    std::shared_ptr<int64_t> checkId_ = nullptr;
    // The custom configuration items of the check item.
    std::shared_ptr<vector<ChangeCheckCustomConfigRequestCustomConfigs>> customConfigs_ = nullptr;
    // The region where the Security Center instance is deployed. Valid values:
    // 
    // *   **cn-hangzhou**: International
    // *   **ap-southeast-1**: Singapore
    std::shared_ptr<string> regionId_ = nullptr;
    // The parameters required for fixing risk items.
    std::shared_ptr<vector<ChangeCheckCustomConfigRequestRepairConfigs>> repairConfigs_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
