// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEASSOCIATEDTRANSFERSETTINGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEASSOCIATEDTRANSFERSETTINGREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceManager20200331
{
namespace Models
{
  class UpdateAssociatedTransferSettingRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAssociatedTransferSettingRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EnableExistingResourcesTransfer, enableExistingResourcesTransfer_);
      DARABONBA_PTR_TO_JSON(RuleSettings, ruleSettings_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAssociatedTransferSettingRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EnableExistingResourcesTransfer, enableExistingResourcesTransfer_);
      DARABONBA_PTR_FROM_JSON(RuleSettings, ruleSettings_);
    };
    UpdateAssociatedTransferSettingRequest() = default ;
    UpdateAssociatedTransferSettingRequest(const UpdateAssociatedTransferSettingRequest &) = default ;
    UpdateAssociatedTransferSettingRequest(UpdateAssociatedTransferSettingRequest &&) = default ;
    UpdateAssociatedTransferSettingRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAssociatedTransferSettingRequest() = default ;
    UpdateAssociatedTransferSettingRequest& operator=(const UpdateAssociatedTransferSettingRequest &) = default ;
    UpdateAssociatedTransferSettingRequest& operator=(UpdateAssociatedTransferSettingRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RuleSettings : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RuleSettings& obj) { 
        DARABONBA_PTR_TO_JSON(AssociatedResourceType, associatedResourceType_);
        DARABONBA_PTR_TO_JSON(AssociatedService, associatedService_);
        DARABONBA_PTR_TO_JSON(MasterResourceType, masterResourceType_);
        DARABONBA_PTR_TO_JSON(MasterService, masterService_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, RuleSettings& obj) { 
        DARABONBA_PTR_FROM_JSON(AssociatedResourceType, associatedResourceType_);
        DARABONBA_PTR_FROM_JSON(AssociatedService, associatedService_);
        DARABONBA_PTR_FROM_JSON(MasterResourceType, masterResourceType_);
        DARABONBA_PTR_FROM_JSON(MasterService, masterService_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      RuleSettings() = default ;
      RuleSettings(const RuleSettings &) = default ;
      RuleSettings(RuleSettings &&) = default ;
      RuleSettings(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RuleSettings() = default ;
      RuleSettings& operator=(const RuleSettings &) = default ;
      RuleSettings& operator=(RuleSettings &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->associatedResourceType_ == nullptr
        && this->associatedService_ == nullptr && this->masterResourceType_ == nullptr && this->masterService_ == nullptr && this->status_ == nullptr; };
      // associatedResourceType Field Functions 
      bool hasAssociatedResourceType() const { return this->associatedResourceType_ != nullptr;};
      void deleteAssociatedResourceType() { this->associatedResourceType_ = nullptr;};
      inline string getAssociatedResourceType() const { DARABONBA_PTR_GET_DEFAULT(associatedResourceType_, "") };
      inline RuleSettings& setAssociatedResourceType(string associatedResourceType) { DARABONBA_PTR_SET_VALUE(associatedResourceType_, associatedResourceType) };


      // associatedService Field Functions 
      bool hasAssociatedService() const { return this->associatedService_ != nullptr;};
      void deleteAssociatedService() { this->associatedService_ = nullptr;};
      inline string getAssociatedService() const { DARABONBA_PTR_GET_DEFAULT(associatedService_, "") };
      inline RuleSettings& setAssociatedService(string associatedService) { DARABONBA_PTR_SET_VALUE(associatedService_, associatedService) };


      // masterResourceType Field Functions 
      bool hasMasterResourceType() const { return this->masterResourceType_ != nullptr;};
      void deleteMasterResourceType() { this->masterResourceType_ = nullptr;};
      inline string getMasterResourceType() const { DARABONBA_PTR_GET_DEFAULT(masterResourceType_, "") };
      inline RuleSettings& setMasterResourceType(string masterResourceType) { DARABONBA_PTR_SET_VALUE(masterResourceType_, masterResourceType) };


      // masterService Field Functions 
      bool hasMasterService() const { return this->masterService_ != nullptr;};
      void deleteMasterService() { this->masterService_ = nullptr;};
      inline string getMasterService() const { DARABONBA_PTR_GET_DEFAULT(masterService_, "") };
      inline RuleSettings& setMasterService(string masterService) { DARABONBA_PTR_SET_VALUE(masterService_, masterService) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline RuleSettings& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The type of the associated resource.
      // 
      // You can obtain the resource type from the **Resource type** column in [Services that work with Resource Group](https://help.aliyun.com/document_detail/94479.html).
      shared_ptr<string> associatedResourceType_ {};
      // The service code of the associated resource.
      // 
      // You can obtain the service code from the **Service code** column in [Services that work with Resource Group](https://help.aliyun.com/document_detail/94479.html).
      shared_ptr<string> associatedService_ {};
      // The type of the primary resource.
      // 
      // You can obtain the resource type from the **Resource type** column in [Services that work with Resource Group](https://help.aliyun.com/document_detail/94479.html).
      shared_ptr<string> masterResourceType_ {};
      // The service code of the primary resource.
      // 
      // You can obtain the service code from the **Service code** column in [Services that work with Resource Group](https://help.aliyun.com/document_detail/94479.html).
      shared_ptr<string> masterService_ {};
      // The status of the Transfer Associated Resources feature. Valid values:
      // 
      // *   Enable: enabled
      // *   Disable: disabled
      // 
      // This parameter is required.
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->enableExistingResourcesTransfer_ == nullptr
        && this->ruleSettings_ == nullptr; };
    // enableExistingResourcesTransfer Field Functions 
    bool hasEnableExistingResourcesTransfer() const { return this->enableExistingResourcesTransfer_ != nullptr;};
    void deleteEnableExistingResourcesTransfer() { this->enableExistingResourcesTransfer_ = nullptr;};
    inline string getEnableExistingResourcesTransfer() const { DARABONBA_PTR_GET_DEFAULT(enableExistingResourcesTransfer_, "") };
    inline UpdateAssociatedTransferSettingRequest& setEnableExistingResourcesTransfer(string enableExistingResourcesTransfer) { DARABONBA_PTR_SET_VALUE(enableExistingResourcesTransfer_, enableExistingResourcesTransfer) };


    // ruleSettings Field Functions 
    bool hasRuleSettings() const { return this->ruleSettings_ != nullptr;};
    void deleteRuleSettings() { this->ruleSettings_ = nullptr;};
    inline const vector<UpdateAssociatedTransferSettingRequest::RuleSettings> & getRuleSettings() const { DARABONBA_PTR_GET_CONST(ruleSettings_, vector<UpdateAssociatedTransferSettingRequest::RuleSettings>) };
    inline vector<UpdateAssociatedTransferSettingRequest::RuleSettings> getRuleSettings() { DARABONBA_PTR_GET(ruleSettings_, vector<UpdateAssociatedTransferSettingRequest::RuleSettings>) };
    inline UpdateAssociatedTransferSettingRequest& setRuleSettings(const vector<UpdateAssociatedTransferSettingRequest::RuleSettings> & ruleSettings) { DARABONBA_PTR_SET_VALUE(ruleSettings_, ruleSettings) };
    inline UpdateAssociatedTransferSettingRequest& setRuleSettings(vector<UpdateAssociatedTransferSettingRequest::RuleSettings> && ruleSettings) { DARABONBA_PTR_SET_RVALUE(ruleSettings_, ruleSettings) };


  protected:
    // Specifies whether to enable the Transfer Existing Associated Resources feature. Valid values:
    // 
    // *   false
    // *   true
    shared_ptr<string> enableExistingResourcesTransfer_ {};
    // The settings of transfer rules.
    shared_ptr<vector<UpdateAssociatedTransferSettingRequest::RuleSettings>> ruleSettings_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceManager20200331
#endif
