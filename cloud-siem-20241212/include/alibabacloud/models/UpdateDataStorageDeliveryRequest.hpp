// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDATASTORAGEDELIVERYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDATASTORAGEDELIVERYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20241212
{
namespace Models
{
  class UpdateDataStorageDeliveryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDataStorageDeliveryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoIncludeNewAccounts, autoIncludeNewAccounts_);
      DARABONBA_PTR_TO_JSON(ConfigurationVersion, configurationVersion_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(LogCode, logCode_);
      DARABONBA_PTR_TO_JSON(LogDeliveryStatus, logDeliveryStatus_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RoleFor, roleFor_);
      DARABONBA_PTR_TO_JSON(SelectedAccountIds, selectedAccountIds_);
      DARABONBA_PTR_TO_JSON(SubUserId, subUserId_);
      DARABONBA_PTR_TO_JSON(TargetProject, targetProject_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDataStorageDeliveryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoIncludeNewAccounts, autoIncludeNewAccounts_);
      DARABONBA_PTR_FROM_JSON(ConfigurationVersion, configurationVersion_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(LogCode, logCode_);
      DARABONBA_PTR_FROM_JSON(LogDeliveryStatus, logDeliveryStatus_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RoleFor, roleFor_);
      DARABONBA_PTR_FROM_JSON(SelectedAccountIds, selectedAccountIds_);
      DARABONBA_PTR_FROM_JSON(SubUserId, subUserId_);
      DARABONBA_PTR_FROM_JSON(TargetProject, targetProject_);
    };
    UpdateDataStorageDeliveryRequest() = default ;
    UpdateDataStorageDeliveryRequest(const UpdateDataStorageDeliveryRequest &) = default ;
    UpdateDataStorageDeliveryRequest(UpdateDataStorageDeliveryRequest &&) = default ;
    UpdateDataStorageDeliveryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDataStorageDeliveryRequest() = default ;
    UpdateDataStorageDeliveryRequest& operator=(const UpdateDataStorageDeliveryRequest &) = default ;
    UpdateDataStorageDeliveryRequest& operator=(UpdateDataStorageDeliveryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoIncludeNewAccounts_ == nullptr
        && this->configurationVersion_ == nullptr && this->lang_ == nullptr && this->logCode_ == nullptr && this->logDeliveryStatus_ == nullptr && this->regionId_ == nullptr
        && this->roleFor_ == nullptr && this->selectedAccountIds_ == nullptr && this->subUserId_ == nullptr && this->targetProject_ == nullptr; };
    // autoIncludeNewAccounts Field Functions 
    bool hasAutoIncludeNewAccounts() const { return this->autoIncludeNewAccounts_ != nullptr;};
    void deleteAutoIncludeNewAccounts() { this->autoIncludeNewAccounts_ = nullptr;};
    inline bool getAutoIncludeNewAccounts() const { DARABONBA_PTR_GET_DEFAULT(autoIncludeNewAccounts_, false) };
    inline UpdateDataStorageDeliveryRequest& setAutoIncludeNewAccounts(bool autoIncludeNewAccounts) { DARABONBA_PTR_SET_VALUE(autoIncludeNewAccounts_, autoIncludeNewAccounts) };


    // configurationVersion Field Functions 
    bool hasConfigurationVersion() const { return this->configurationVersion_ != nullptr;};
    void deleteConfigurationVersion() { this->configurationVersion_ = nullptr;};
    inline int64_t getConfigurationVersion() const { DARABONBA_PTR_GET_DEFAULT(configurationVersion_, 0L) };
    inline UpdateDataStorageDeliveryRequest& setConfigurationVersion(int64_t configurationVersion) { DARABONBA_PTR_SET_VALUE(configurationVersion_, configurationVersion) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline UpdateDataStorageDeliveryRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // logCode Field Functions 
    bool hasLogCode() const { return this->logCode_ != nullptr;};
    void deleteLogCode() { this->logCode_ = nullptr;};
    inline string getLogCode() const { DARABONBA_PTR_GET_DEFAULT(logCode_, "") };
    inline UpdateDataStorageDeliveryRequest& setLogCode(string logCode) { DARABONBA_PTR_SET_VALUE(logCode_, logCode) };


    // logDeliveryStatus Field Functions 
    bool hasLogDeliveryStatus() const { return this->logDeliveryStatus_ != nullptr;};
    void deleteLogDeliveryStatus() { this->logDeliveryStatus_ = nullptr;};
    inline string getLogDeliveryStatus() const { DARABONBA_PTR_GET_DEFAULT(logDeliveryStatus_, "") };
    inline UpdateDataStorageDeliveryRequest& setLogDeliveryStatus(string logDeliveryStatus) { DARABONBA_PTR_SET_VALUE(logDeliveryStatus_, logDeliveryStatus) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateDataStorageDeliveryRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // roleFor Field Functions 
    bool hasRoleFor() const { return this->roleFor_ != nullptr;};
    void deleteRoleFor() { this->roleFor_ = nullptr;};
    inline int64_t getRoleFor() const { DARABONBA_PTR_GET_DEFAULT(roleFor_, 0L) };
    inline UpdateDataStorageDeliveryRequest& setRoleFor(int64_t roleFor) { DARABONBA_PTR_SET_VALUE(roleFor_, roleFor) };


    // selectedAccountIds Field Functions 
    bool hasSelectedAccountIds() const { return this->selectedAccountIds_ != nullptr;};
    void deleteSelectedAccountIds() { this->selectedAccountIds_ = nullptr;};
    inline const vector<string> & getSelectedAccountIds() const { DARABONBA_PTR_GET_CONST(selectedAccountIds_, vector<string>) };
    inline vector<string> getSelectedAccountIds() { DARABONBA_PTR_GET(selectedAccountIds_, vector<string>) };
    inline UpdateDataStorageDeliveryRequest& setSelectedAccountIds(const vector<string> & selectedAccountIds) { DARABONBA_PTR_SET_VALUE(selectedAccountIds_, selectedAccountIds) };
    inline UpdateDataStorageDeliveryRequest& setSelectedAccountIds(vector<string> && selectedAccountIds) { DARABONBA_PTR_SET_RVALUE(selectedAccountIds_, selectedAccountIds) };


    // subUserId Field Functions 
    bool hasSubUserId() const { return this->subUserId_ != nullptr;};
    void deleteSubUserId() { this->subUserId_ = nullptr;};
    inline int64_t getSubUserId() const { DARABONBA_PTR_GET_DEFAULT(subUserId_, 0L) };
    inline UpdateDataStorageDeliveryRequest& setSubUserId(int64_t subUserId) { DARABONBA_PTR_SET_VALUE(subUserId_, subUserId) };


    // targetProject Field Functions 
    bool hasTargetProject() const { return this->targetProject_ != nullptr;};
    void deleteTargetProject() { this->targetProject_ = nullptr;};
    inline string getTargetProject() const { DARABONBA_PTR_GET_DEFAULT(targetProject_, "") };
    inline UpdateDataStorageDeliveryRequest& setTargetProject(string targetProject) { DARABONBA_PTR_SET_VALUE(targetProject_, targetProject) };


  protected:
    // 是否将后续新增且可用的纳管成员自动加入该日志类型的账号选择。true 表示开启，false 表示关闭；关闭不会移除已选择成员。省略保持原值。需同时传 LogCode、ConfigurationVersion、TargetProject，可与 SelectedAccountIds 一起更新，不可同时传 LogDeliveryStatus 或成员 SubUserId。实际投递还受多账号总开关和该日志类型投递开关控制。
    shared_ptr<bool> autoIncludeNewAccounts_ {};
    // 本次修改所依据的投递设置版本。先调用 GetDataStorage，取 Data.DeliverySettings.ConfigurationVersion 原值传入；示例 1 仅展示格式，不能作为固定版本使用。修改总开关、账号选择、自动纳入设置或指定成员投递时必传。版本缺失或已变化时返回 OperationDenied.CentralizedDeliveryConfigChanged，应重新查询后再提交。
    shared_ptr<int64_t> configurationVersion_ {};
    // The language of the response. Valid values:
    // - **zh** (default): Chinese.
    // - **en**: English.
    // This parameter is required. If this parameter is not specified, the API returns a 400 error.
    shared_ptr<string> lang_ {};
    // The log code.
    // 
    // This parameter is required.
    shared_ptr<string> logCode_ {};
    // The log delivery status. Valid values:
    // - enable: Enables log delivery.
    // - disable: Disables log delivery.
    shared_ptr<string> logDeliveryStatus_ {};
    // The region where the threat analysis data management center resides. Specify the management center based on the region where your assets reside. Valid values:
    // - cn-hangzhou: Your assets reside in the Chinese mainland.
    // - ap-southeast-1: Your assets reside outside China.
    shared_ptr<string> regionId_ {};
    // The ID of the member to which the administrator switches the view.
    shared_ptr<int64_t> roleFor_ {};
    // 该日志类型的完整账号选择列表，元素为十进制 UID 字符串，必须包含 Data.DeliverySettings.DaAccountId（本账号），最多 10000 项。新增成员须在 GetDataStorage 的 Accounts 列表中且 Authorized=true。仅保留本账号时传本账号 UID，不能用空字符串或空数组代替。省略本字段保持原选择。HTTP 请求使用 array(simple) 的逗号分隔格式：SelectedAccountIds=1234567890123456,1234567890123457；单账号只传一个 UID。不使用 SelectedAccountIds.1/.2 或 JSON 数组字符串。需同时传 ConfigurationVersion、TargetProject，并省略 LogDeliveryStatus 和成员 SubUserId。
    shared_ptr<vector<string>> selectedAccountIds_ {};
    // 日志来源云账号 UID，使用十进制整数。省略或等于本账号 UID 时操作本账号投递；传成员 UID 时仅对该成员应用当前配置期望的投递状态，需同时传 LogDeliveryStatus、ConfigurationVersion、TargetProject。成员必须已在该类型选择范围中或已有投递记录。保存账号选择或自动纳入设置时应省略本字段，不可传其他成员 UID。
    shared_ptr<int64_t> subUserId_ {};
    // 当前日志投递目标 SLS Project 的名称。先调用 GetDataStorage，取 Data.DeliverySettings.TargetProject 原值传入；用于校验本次修改的目标，不用于指定新的 Project。修改总开关、账号选择、自动纳入设置或指定成员投递时必传；缺失或与当前目标不同会返回 OperationDenied.CentralizedDeliveryConfigChanged。示例中的账号 UID 和地域需替换为查询结果。
    shared_ptr<string> targetProject_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
