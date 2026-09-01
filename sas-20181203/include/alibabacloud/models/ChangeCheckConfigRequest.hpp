// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHANGECHECKCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHANGECHECKCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ChangeCheckConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChangeCheckConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AddedCheck, addedCheck_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(ConfigRequirementIds, configRequirementIds_);
      DARABONBA_PTR_TO_JSON(ConfigStandardIds, configStandardIds_);
      DARABONBA_PTR_TO_JSON(Configure, configure_);
      DARABONBA_PTR_TO_JSON(CycleDays, cycleDays_);
      DARABONBA_PTR_TO_JSON(EnableAddCheck, enableAddCheck_);
      DARABONBA_PTR_TO_JSON(EnableAutoCheck, enableAutoCheck_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RemovedCheck, removedCheck_);
      DARABONBA_PTR_TO_JSON(ResourceDirectoryAccountId, resourceDirectoryAccountId_);
      DARABONBA_PTR_TO_JSON(StandardIds, standardIds_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(SystemConfig, systemConfig_);
      DARABONBA_PTR_TO_JSON(Vendors, vendors_);
    };
    friend void from_json(const Darabonba::Json& j, ChangeCheckConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AddedCheck, addedCheck_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(ConfigRequirementIds, configRequirementIds_);
      DARABONBA_PTR_FROM_JSON(ConfigStandardIds, configStandardIds_);
      DARABONBA_PTR_FROM_JSON(Configure, configure_);
      DARABONBA_PTR_FROM_JSON(CycleDays, cycleDays_);
      DARABONBA_PTR_FROM_JSON(EnableAddCheck, enableAddCheck_);
      DARABONBA_PTR_FROM_JSON(EnableAutoCheck, enableAutoCheck_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RemovedCheck, removedCheck_);
      DARABONBA_PTR_FROM_JSON(ResourceDirectoryAccountId, resourceDirectoryAccountId_);
      DARABONBA_PTR_FROM_JSON(StandardIds, standardIds_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(SystemConfig, systemConfig_);
      DARABONBA_PTR_FROM_JSON(Vendors, vendors_);
    };
    ChangeCheckConfigRequest() = default ;
    ChangeCheckConfigRequest(const ChangeCheckConfigRequest &) = default ;
    ChangeCheckConfigRequest(ChangeCheckConfigRequest &&) = default ;
    ChangeCheckConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChangeCheckConfigRequest() = default ;
    ChangeCheckConfigRequest& operator=(const ChangeCheckConfigRequest &) = default ;
    ChangeCheckConfigRequest& operator=(ChangeCheckConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RemovedCheck : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RemovedCheck& obj) { 
        DARABONBA_PTR_TO_JSON(CheckId, checkId_);
        DARABONBA_PTR_TO_JSON(SectionId, sectionId_);
      };
      friend void from_json(const Darabonba::Json& j, RemovedCheck& obj) { 
        DARABONBA_PTR_FROM_JSON(CheckId, checkId_);
        DARABONBA_PTR_FROM_JSON(SectionId, sectionId_);
      };
      RemovedCheck() = default ;
      RemovedCheck(const RemovedCheck &) = default ;
      RemovedCheck(RemovedCheck &&) = default ;
      RemovedCheck(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RemovedCheck() = default ;
      RemovedCheck& operator=(const RemovedCheck &) = default ;
      RemovedCheck& operator=(RemovedCheck &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->checkId_ == nullptr
        && this->sectionId_ == nullptr; };
      // checkId Field Functions 
      bool hasCheckId() const { return this->checkId_ != nullptr;};
      void deleteCheckId() { this->checkId_ = nullptr;};
      inline int64_t getCheckId() const { DARABONBA_PTR_GET_DEFAULT(checkId_, 0L) };
      inline RemovedCheck& setCheckId(int64_t checkId) { DARABONBA_PTR_SET_VALUE(checkId_, checkId) };


      // sectionId Field Functions 
      bool hasSectionId() const { return this->sectionId_ != nullptr;};
      void deleteSectionId() { this->sectionId_ = nullptr;};
      inline int64_t getSectionId() const { DARABONBA_PTR_GET_DEFAULT(sectionId_, 0L) };
      inline RemovedCheck& setSectionId(int64_t sectionId) { DARABONBA_PTR_SET_VALUE(sectionId_, sectionId) };


    protected:
      // The ID of the check item.
      // 
      // > Call [ListCheckResult](~~ListCheckResult~~) to obtain check item IDs.
      shared_ptr<int64_t> checkId_ {};
      // The section ID of the check item.
      shared_ptr<int64_t> sectionId_ {};
    };

    class ConfigStandardIds : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ConfigStandardIds& obj) { 
        DARABONBA_PTR_TO_JSON(AddIds, addIds_);
        DARABONBA_PTR_TO_JSON(RemoveIds, removeIds_);
      };
      friend void from_json(const Darabonba::Json& j, ConfigStandardIds& obj) { 
        DARABONBA_PTR_FROM_JSON(AddIds, addIds_);
        DARABONBA_PTR_FROM_JSON(RemoveIds, removeIds_);
      };
      ConfigStandardIds() = default ;
      ConfigStandardIds(const ConfigStandardIds &) = default ;
      ConfigStandardIds(ConfigStandardIds &&) = default ;
      ConfigStandardIds(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ConfigStandardIds() = default ;
      ConfigStandardIds& operator=(const ConfigStandardIds &) = default ;
      ConfigStandardIds& operator=(ConfigStandardIds &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->addIds_ == nullptr
        && this->removeIds_ == nullptr; };
      // addIds Field Functions 
      bool hasAddIds() const { return this->addIds_ != nullptr;};
      void deleteAddIds() { this->addIds_ = nullptr;};
      inline const vector<int64_t> & getAddIds() const { DARABONBA_PTR_GET_CONST(addIds_, vector<int64_t>) };
      inline vector<int64_t> getAddIds() { DARABONBA_PTR_GET(addIds_, vector<int64_t>) };
      inline ConfigStandardIds& setAddIds(const vector<int64_t> & addIds) { DARABONBA_PTR_SET_VALUE(addIds_, addIds) };
      inline ConfigStandardIds& setAddIds(vector<int64_t> && addIds) { DARABONBA_PTR_SET_RVALUE(addIds_, addIds) };


      // removeIds Field Functions 
      bool hasRemoveIds() const { return this->removeIds_ != nullptr;};
      void deleteRemoveIds() { this->removeIds_ = nullptr;};
      inline const vector<int64_t> & getRemoveIds() const { DARABONBA_PTR_GET_CONST(removeIds_, vector<int64_t>) };
      inline vector<int64_t> getRemoveIds() { DARABONBA_PTR_GET(removeIds_, vector<int64_t>) };
      inline ConfigStandardIds& setRemoveIds(const vector<int64_t> & removeIds) { DARABONBA_PTR_SET_VALUE(removeIds_, removeIds) };
      inline ConfigStandardIds& setRemoveIds(vector<int64_t> && removeIds) { DARABONBA_PTR_SET_RVALUE(removeIds_, removeIds) };


    protected:
      // The list of standard IDs to add to the policy.
      shared_ptr<vector<int64_t>> addIds_ {};
      // The list of standard IDs to remove from the policy.
      shared_ptr<vector<int64_t>> removeIds_ {};
    };

    class ConfigRequirementIds : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ConfigRequirementIds& obj) { 
        DARABONBA_PTR_TO_JSON(AddIds, addIds_);
        DARABONBA_PTR_TO_JSON(RemoveIds, removeIds_);
      };
      friend void from_json(const Darabonba::Json& j, ConfigRequirementIds& obj) { 
        DARABONBA_PTR_FROM_JSON(AddIds, addIds_);
        DARABONBA_PTR_FROM_JSON(RemoveIds, removeIds_);
      };
      ConfigRequirementIds() = default ;
      ConfigRequirementIds(const ConfigRequirementIds &) = default ;
      ConfigRequirementIds(ConfigRequirementIds &&) = default ;
      ConfigRequirementIds(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ConfigRequirementIds() = default ;
      ConfigRequirementIds& operator=(const ConfigRequirementIds &) = default ;
      ConfigRequirementIds& operator=(ConfigRequirementIds &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->addIds_ == nullptr
        && this->removeIds_ == nullptr; };
      // addIds Field Functions 
      bool hasAddIds() const { return this->addIds_ != nullptr;};
      void deleteAddIds() { this->addIds_ = nullptr;};
      inline const vector<int64_t> & getAddIds() const { DARABONBA_PTR_GET_CONST(addIds_, vector<int64_t>) };
      inline vector<int64_t> getAddIds() { DARABONBA_PTR_GET(addIds_, vector<int64_t>) };
      inline ConfigRequirementIds& setAddIds(const vector<int64_t> & addIds) { DARABONBA_PTR_SET_VALUE(addIds_, addIds) };
      inline ConfigRequirementIds& setAddIds(vector<int64_t> && addIds) { DARABONBA_PTR_SET_RVALUE(addIds_, addIds) };


      // removeIds Field Functions 
      bool hasRemoveIds() const { return this->removeIds_ != nullptr;};
      void deleteRemoveIds() { this->removeIds_ = nullptr;};
      inline const vector<int64_t> & getRemoveIds() const { DARABONBA_PTR_GET_CONST(removeIds_, vector<int64_t>) };
      inline vector<int64_t> getRemoveIds() { DARABONBA_PTR_GET(removeIds_, vector<int64_t>) };
      inline ConfigRequirementIds& setRemoveIds(const vector<int64_t> & removeIds) { DARABONBA_PTR_SET_VALUE(removeIds_, removeIds) };
      inline ConfigRequirementIds& setRemoveIds(vector<int64_t> && removeIds) { DARABONBA_PTR_SET_RVALUE(removeIds_, removeIds) };


    protected:
      // The list of requirement IDs to add to the policy.
      shared_ptr<vector<int64_t>> addIds_ {};
      // The list of requirement IDs to remove from the policy.
      shared_ptr<vector<int64_t>> removeIds_ {};
    };

    class AddedCheck : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AddedCheck& obj) { 
        DARABONBA_PTR_TO_JSON(CheckId, checkId_);
        DARABONBA_PTR_TO_JSON(SectionId, sectionId_);
      };
      friend void from_json(const Darabonba::Json& j, AddedCheck& obj) { 
        DARABONBA_PTR_FROM_JSON(CheckId, checkId_);
        DARABONBA_PTR_FROM_JSON(SectionId, sectionId_);
      };
      AddedCheck() = default ;
      AddedCheck(const AddedCheck &) = default ;
      AddedCheck(AddedCheck &&) = default ;
      AddedCheck(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AddedCheck() = default ;
      AddedCheck& operator=(const AddedCheck &) = default ;
      AddedCheck& operator=(AddedCheck &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->checkId_ == nullptr
        && this->sectionId_ == nullptr; };
      // checkId Field Functions 
      bool hasCheckId() const { return this->checkId_ != nullptr;};
      void deleteCheckId() { this->checkId_ = nullptr;};
      inline int64_t getCheckId() const { DARABONBA_PTR_GET_DEFAULT(checkId_, 0L) };
      inline AddedCheck& setCheckId(int64_t checkId) { DARABONBA_PTR_SET_VALUE(checkId_, checkId) };


      // sectionId Field Functions 
      bool hasSectionId() const { return this->sectionId_ != nullptr;};
      void deleteSectionId() { this->sectionId_ = nullptr;};
      inline int64_t getSectionId() const { DARABONBA_PTR_GET_DEFAULT(sectionId_, 0L) };
      inline AddedCheck& setSectionId(int64_t sectionId) { DARABONBA_PTR_SET_VALUE(sectionId_, sectionId) };


    protected:
      // The ID of the check item.
      // 
      // > Call [ListCheckResult](~~ListCheckResult~~) to obtain check item IDs.
      shared_ptr<int64_t> checkId_ {};
      // The section ID of the check item.
      shared_ptr<int64_t> sectionId_ {};
    };

    virtual bool empty() const override { return this->addedCheck_ == nullptr
        && this->clientToken_ == nullptr && this->configRequirementIds_ == nullptr && this->configStandardIds_ == nullptr && this->configure_ == nullptr && this->cycleDays_ == nullptr
        && this->enableAddCheck_ == nullptr && this->enableAutoCheck_ == nullptr && this->endTime_ == nullptr && this->regionId_ == nullptr && this->removedCheck_ == nullptr
        && this->resourceDirectoryAccountId_ == nullptr && this->standardIds_ == nullptr && this->startTime_ == nullptr && this->systemConfig_ == nullptr && this->vendors_ == nullptr; };
    // addedCheck Field Functions 
    bool hasAddedCheck() const { return this->addedCheck_ != nullptr;};
    void deleteAddedCheck() { this->addedCheck_ = nullptr;};
    inline const vector<ChangeCheckConfigRequest::AddedCheck> & getAddedCheck() const { DARABONBA_PTR_GET_CONST(addedCheck_, vector<ChangeCheckConfigRequest::AddedCheck>) };
    inline vector<ChangeCheckConfigRequest::AddedCheck> getAddedCheck() { DARABONBA_PTR_GET(addedCheck_, vector<ChangeCheckConfigRequest::AddedCheck>) };
    inline ChangeCheckConfigRequest& setAddedCheck(const vector<ChangeCheckConfigRequest::AddedCheck> & addedCheck) { DARABONBA_PTR_SET_VALUE(addedCheck_, addedCheck) };
    inline ChangeCheckConfigRequest& setAddedCheck(vector<ChangeCheckConfigRequest::AddedCheck> && addedCheck) { DARABONBA_PTR_SET_RVALUE(addedCheck_, addedCheck) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline ChangeCheckConfigRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // configRequirementIds Field Functions 
    bool hasConfigRequirementIds() const { return this->configRequirementIds_ != nullptr;};
    void deleteConfigRequirementIds() { this->configRequirementIds_ = nullptr;};
    inline const ChangeCheckConfigRequest::ConfigRequirementIds & getConfigRequirementIds() const { DARABONBA_PTR_GET_CONST(configRequirementIds_, ChangeCheckConfigRequest::ConfigRequirementIds) };
    inline ChangeCheckConfigRequest::ConfigRequirementIds getConfigRequirementIds() { DARABONBA_PTR_GET(configRequirementIds_, ChangeCheckConfigRequest::ConfigRequirementIds) };
    inline ChangeCheckConfigRequest& setConfigRequirementIds(const ChangeCheckConfigRequest::ConfigRequirementIds & configRequirementIds) { DARABONBA_PTR_SET_VALUE(configRequirementIds_, configRequirementIds) };
    inline ChangeCheckConfigRequest& setConfigRequirementIds(ChangeCheckConfigRequest::ConfigRequirementIds && configRequirementIds) { DARABONBA_PTR_SET_RVALUE(configRequirementIds_, configRequirementIds) };


    // configStandardIds Field Functions 
    bool hasConfigStandardIds() const { return this->configStandardIds_ != nullptr;};
    void deleteConfigStandardIds() { this->configStandardIds_ = nullptr;};
    inline const ChangeCheckConfigRequest::ConfigStandardIds & getConfigStandardIds() const { DARABONBA_PTR_GET_CONST(configStandardIds_, ChangeCheckConfigRequest::ConfigStandardIds) };
    inline ChangeCheckConfigRequest::ConfigStandardIds getConfigStandardIds() { DARABONBA_PTR_GET(configStandardIds_, ChangeCheckConfigRequest::ConfigStandardIds) };
    inline ChangeCheckConfigRequest& setConfigStandardIds(const ChangeCheckConfigRequest::ConfigStandardIds & configStandardIds) { DARABONBA_PTR_SET_VALUE(configStandardIds_, configStandardIds) };
    inline ChangeCheckConfigRequest& setConfigStandardIds(ChangeCheckConfigRequest::ConfigStandardIds && configStandardIds) { DARABONBA_PTR_SET_RVALUE(configStandardIds_, configStandardIds) };


    // configure Field Functions 
    bool hasConfigure() const { return this->configure_ != nullptr;};
    void deleteConfigure() { this->configure_ = nullptr;};
    inline string getConfigure() const { DARABONBA_PTR_GET_DEFAULT(configure_, "") };
    inline ChangeCheckConfigRequest& setConfigure(string configure) { DARABONBA_PTR_SET_VALUE(configure_, configure) };


    // cycleDays Field Functions 
    bool hasCycleDays() const { return this->cycleDays_ != nullptr;};
    void deleteCycleDays() { this->cycleDays_ = nullptr;};
    inline const vector<int32_t> & getCycleDays() const { DARABONBA_PTR_GET_CONST(cycleDays_, vector<int32_t>) };
    inline vector<int32_t> getCycleDays() { DARABONBA_PTR_GET(cycleDays_, vector<int32_t>) };
    inline ChangeCheckConfigRequest& setCycleDays(const vector<int32_t> & cycleDays) { DARABONBA_PTR_SET_VALUE(cycleDays_, cycleDays) };
    inline ChangeCheckConfigRequest& setCycleDays(vector<int32_t> && cycleDays) { DARABONBA_PTR_SET_RVALUE(cycleDays_, cycleDays) };


    // enableAddCheck Field Functions 
    bool hasEnableAddCheck() const { return this->enableAddCheck_ != nullptr;};
    void deleteEnableAddCheck() { this->enableAddCheck_ = nullptr;};
    inline bool getEnableAddCheck() const { DARABONBA_PTR_GET_DEFAULT(enableAddCheck_, false) };
    inline ChangeCheckConfigRequest& setEnableAddCheck(bool enableAddCheck) { DARABONBA_PTR_SET_VALUE(enableAddCheck_, enableAddCheck) };


    // enableAutoCheck Field Functions 
    bool hasEnableAutoCheck() const { return this->enableAutoCheck_ != nullptr;};
    void deleteEnableAutoCheck() { this->enableAutoCheck_ = nullptr;};
    inline bool getEnableAutoCheck() const { DARABONBA_PTR_GET_DEFAULT(enableAutoCheck_, false) };
    inline ChangeCheckConfigRequest& setEnableAutoCheck(bool enableAutoCheck) { DARABONBA_PTR_SET_VALUE(enableAutoCheck_, enableAutoCheck) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int32_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0) };
    inline ChangeCheckConfigRequest& setEndTime(int32_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ChangeCheckConfigRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // removedCheck Field Functions 
    bool hasRemovedCheck() const { return this->removedCheck_ != nullptr;};
    void deleteRemovedCheck() { this->removedCheck_ = nullptr;};
    inline const vector<ChangeCheckConfigRequest::RemovedCheck> & getRemovedCheck() const { DARABONBA_PTR_GET_CONST(removedCheck_, vector<ChangeCheckConfigRequest::RemovedCheck>) };
    inline vector<ChangeCheckConfigRequest::RemovedCheck> getRemovedCheck() { DARABONBA_PTR_GET(removedCheck_, vector<ChangeCheckConfigRequest::RemovedCheck>) };
    inline ChangeCheckConfigRequest& setRemovedCheck(const vector<ChangeCheckConfigRequest::RemovedCheck> & removedCheck) { DARABONBA_PTR_SET_VALUE(removedCheck_, removedCheck) };
    inline ChangeCheckConfigRequest& setRemovedCheck(vector<ChangeCheckConfigRequest::RemovedCheck> && removedCheck) { DARABONBA_PTR_SET_RVALUE(removedCheck_, removedCheck) };


    // resourceDirectoryAccountId Field Functions 
    bool hasResourceDirectoryAccountId() const { return this->resourceDirectoryAccountId_ != nullptr;};
    void deleteResourceDirectoryAccountId() { this->resourceDirectoryAccountId_ = nullptr;};
    inline int64_t getResourceDirectoryAccountId() const { DARABONBA_PTR_GET_DEFAULT(resourceDirectoryAccountId_, 0L) };
    inline ChangeCheckConfigRequest& setResourceDirectoryAccountId(int64_t resourceDirectoryAccountId) { DARABONBA_PTR_SET_VALUE(resourceDirectoryAccountId_, resourceDirectoryAccountId) };


    // standardIds Field Functions 
    bool hasStandardIds() const { return this->standardIds_ != nullptr;};
    void deleteStandardIds() { this->standardIds_ = nullptr;};
    inline const vector<int64_t> & getStandardIds() const { DARABONBA_PTR_GET_CONST(standardIds_, vector<int64_t>) };
    inline vector<int64_t> getStandardIds() { DARABONBA_PTR_GET(standardIds_, vector<int64_t>) };
    inline ChangeCheckConfigRequest& setStandardIds(const vector<int64_t> & standardIds) { DARABONBA_PTR_SET_VALUE(standardIds_, standardIds) };
    inline ChangeCheckConfigRequest& setStandardIds(vector<int64_t> && standardIds) { DARABONBA_PTR_SET_RVALUE(standardIds_, standardIds) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int32_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0) };
    inline ChangeCheckConfigRequest& setStartTime(int32_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // systemConfig Field Functions 
    bool hasSystemConfig() const { return this->systemConfig_ != nullptr;};
    void deleteSystemConfig() { this->systemConfig_ = nullptr;};
    inline bool getSystemConfig() const { DARABONBA_PTR_GET_DEFAULT(systemConfig_, false) };
    inline ChangeCheckConfigRequest& setSystemConfig(bool systemConfig) { DARABONBA_PTR_SET_VALUE(systemConfig_, systemConfig) };


    // vendors Field Functions 
    bool hasVendors() const { return this->vendors_ != nullptr;};
    void deleteVendors() { this->vendors_ = nullptr;};
    inline const vector<string> & getVendors() const { DARABONBA_PTR_GET_CONST(vendors_, vector<string>) };
    inline vector<string> getVendors() { DARABONBA_PTR_GET(vendors_, vector<string>) };
    inline ChangeCheckConfigRequest& setVendors(const vector<string> & vendors) { DARABONBA_PTR_SET_VALUE(vendors_, vendors) };
    inline ChangeCheckConfigRequest& setVendors(vector<string> && vendors) { DARABONBA_PTR_SET_RVALUE(vendors_, vendors) };


  protected:
    // The list of check items to add to the policy.
    // <notice> If ConfigStandardIds or ConfigRequirementIds is specified, this parameter does not take effect.
    shared_ptr<vector<ChangeCheckConfigRequest::AddedCheck>> addedCheck_ {};
    // The client token used to ensure request idempotency. Use a different token for each request. Only ASCII characters are supported. The token can be up to 64 characters in length.
    shared_ptr<string> clientToken_ {};
    // Configures the check policy by specifying requirement IDs.
    // 
    // > Call [ListCheckResult](~~ListCheckResult~~) to obtain requirement IDs. If ConfigStandardIds is specified, this parameter does not take effect.
    shared_ptr<ChangeCheckConfigRequest::ConfigRequirementIds> configRequirementIds_ {};
    // Configures the check policy by specifying standard IDs.
    // 
    // > Call [ListCheckResult](~~ListCheckResult~~) to obtain standard IDs.
    shared_ptr<ChangeCheckConfigRequest::ConfigStandardIds> configStandardIds_ {};
    // The field configuration. Valid values:
    // 
    // - **all:** Adds all check items.
    shared_ptr<string> configure_ {};
    // The scheduled check days.
    shared_ptr<vector<int32_t>> cycleDays_ {};
    // Specifies whether to automatically include newly added check items from the selected requirements. Valid values:
    // 
    // - **true:** Enabled.
    // - **false:** Disabled.
    shared_ptr<bool> enableAddCheck_ {};
    // Specifies whether to enable automatic scheduled checks. Valid values:
    // 
    // - **true:** Enabled.
    // - **false:** Disabled.
    shared_ptr<bool> enableAutoCheck_ {};
    // The end hour of the check time window, expressed as an hour of the day. The start and end times must fall within one of the following time ranges. Valid values: 6, 12, 18, 24.
    // 
    // - **0~6:** If the start time is 0, set the end time to 6.
    // - **6~12:** If the start time is 6, set the end time to 12.
    // - **12~18:** If the start time is 12, set the end time to 18.
    // - **18~24:** If the start time is 18, set the end time to 24.
    shared_ptr<int32_t> endTime_ {};
    // The region of the Security Center instance. Valid values:
    // 
    // - **cn-hangzhou:** China (Hangzhou)
    // - **ap-southeast-1:** Singapore
    shared_ptr<string> regionId_ {};
    // The list of check items to remove from the policy.
    // <notice> If ConfigStandardIds or ConfigRequirementIds is specified, this parameter does not take effect.
    shared_ptr<vector<ChangeCheckConfigRequest::RemovedCheck>> removedCheck_ {};
    // The ID of the resource directory member accounts (Alibaba Cloud account).
    // > Call [DescribeMonitorAccounts](~~DescribeMonitorAccounts~~) to obtain this parameter.
    shared_ptr<int64_t> resourceDirectoryAccountId_ {};
    // This parameter is deprecated. You do not need to configure it.
    shared_ptr<vector<int64_t>> standardIds_ {};
    // The start hour of the check time window, expressed as an hour of the day. The start and end times must fall within one of the following time ranges. Valid values: 0, 6, 12, 18.
    // 
    // - **0~6:** If the start time is 0, set the end time to 6.
    // - **6~12:** If the start time is 6, set the end time to 12.
    // - **12~18:** If the start time is 12, set the end time to 18.
    // - **18~24:** If the start time is 18, set the end time to 24.
    shared_ptr<int32_t> startTime_ {};
    // Specifies whether to use the system-generated configuration. Valid values:
    // - **true:** Yes.
    // - **false:** No.
    shared_ptr<bool> systemConfig_ {};
    // The list of cloud vendors.
    shared_ptr<vector<string>> vendors_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
