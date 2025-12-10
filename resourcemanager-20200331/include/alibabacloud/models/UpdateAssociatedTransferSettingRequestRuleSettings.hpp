// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEASSOCIATEDTRANSFERSETTINGREQUESTRULESETTINGS_HPP_
#define ALIBABACLOUD_MODELS_UPDATEASSOCIATEDTRANSFERSETTINGREQUESTRULESETTINGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceManager20200331
{
namespace Models
{
  class UpdateAssociatedTransferSettingRequestRuleSettings : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAssociatedTransferSettingRequestRuleSettings& obj) { 
      DARABONBA_PTR_TO_JSON(AssociatedResourceType, associatedResourceType_);
      DARABONBA_PTR_TO_JSON(AssociatedService, associatedService_);
      DARABONBA_PTR_TO_JSON(MasterResourceType, masterResourceType_);
      DARABONBA_PTR_TO_JSON(MasterService, masterService_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAssociatedTransferSettingRequestRuleSettings& obj) { 
      DARABONBA_PTR_FROM_JSON(AssociatedResourceType, associatedResourceType_);
      DARABONBA_PTR_FROM_JSON(AssociatedService, associatedService_);
      DARABONBA_PTR_FROM_JSON(MasterResourceType, masterResourceType_);
      DARABONBA_PTR_FROM_JSON(MasterService, masterService_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    UpdateAssociatedTransferSettingRequestRuleSettings() = default ;
    UpdateAssociatedTransferSettingRequestRuleSettings(const UpdateAssociatedTransferSettingRequestRuleSettings &) = default ;
    UpdateAssociatedTransferSettingRequestRuleSettings(UpdateAssociatedTransferSettingRequestRuleSettings &&) = default ;
    UpdateAssociatedTransferSettingRequestRuleSettings(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAssociatedTransferSettingRequestRuleSettings() = default ;
    UpdateAssociatedTransferSettingRequestRuleSettings& operator=(const UpdateAssociatedTransferSettingRequestRuleSettings &) = default ;
    UpdateAssociatedTransferSettingRequestRuleSettings& operator=(UpdateAssociatedTransferSettingRequestRuleSettings &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->associatedResourceType_ == nullptr
        && return this->associatedService_ == nullptr && return this->masterResourceType_ == nullptr && return this->masterService_ == nullptr && return this->status_ == nullptr; };
    // associatedResourceType Field Functions 
    bool hasAssociatedResourceType() const { return this->associatedResourceType_ != nullptr;};
    void deleteAssociatedResourceType() { this->associatedResourceType_ = nullptr;};
    inline string associatedResourceType() const { DARABONBA_PTR_GET_DEFAULT(associatedResourceType_, "") };
    inline UpdateAssociatedTransferSettingRequestRuleSettings& setAssociatedResourceType(string associatedResourceType) { DARABONBA_PTR_SET_VALUE(associatedResourceType_, associatedResourceType) };


    // associatedService Field Functions 
    bool hasAssociatedService() const { return this->associatedService_ != nullptr;};
    void deleteAssociatedService() { this->associatedService_ = nullptr;};
    inline string associatedService() const { DARABONBA_PTR_GET_DEFAULT(associatedService_, "") };
    inline UpdateAssociatedTransferSettingRequestRuleSettings& setAssociatedService(string associatedService) { DARABONBA_PTR_SET_VALUE(associatedService_, associatedService) };


    // masterResourceType Field Functions 
    bool hasMasterResourceType() const { return this->masterResourceType_ != nullptr;};
    void deleteMasterResourceType() { this->masterResourceType_ = nullptr;};
    inline string masterResourceType() const { DARABONBA_PTR_GET_DEFAULT(masterResourceType_, "") };
    inline UpdateAssociatedTransferSettingRequestRuleSettings& setMasterResourceType(string masterResourceType) { DARABONBA_PTR_SET_VALUE(masterResourceType_, masterResourceType) };


    // masterService Field Functions 
    bool hasMasterService() const { return this->masterService_ != nullptr;};
    void deleteMasterService() { this->masterService_ = nullptr;};
    inline string masterService() const { DARABONBA_PTR_GET_DEFAULT(masterService_, "") };
    inline UpdateAssociatedTransferSettingRequestRuleSettings& setMasterService(string masterService) { DARABONBA_PTR_SET_VALUE(masterService_, masterService) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline UpdateAssociatedTransferSettingRequestRuleSettings& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The type of the associated resource.
    // 
    // You can obtain the resource type from the **Resource type** column in [Services that work with Resource Group](https://help.aliyun.com/document_detail/94479.html).
    std::shared_ptr<string> associatedResourceType_ = nullptr;
    // The service code of the associated resource.
    // 
    // You can obtain the service code from the **Service code** column in [Services that work with Resource Group](https://help.aliyun.com/document_detail/94479.html).
    std::shared_ptr<string> associatedService_ = nullptr;
    // The type of the primary resource.
    // 
    // You can obtain the resource type from the **Resource type** column in [Services that work with Resource Group](https://help.aliyun.com/document_detail/94479.html).
    std::shared_ptr<string> masterResourceType_ = nullptr;
    // The service code of the primary resource.
    // 
    // You can obtain the service code from the **Service code** column in [Services that work with Resource Group](https://help.aliyun.com/document_detail/94479.html).
    std::shared_ptr<string> masterService_ = nullptr;
    // The status of the Transfer Associated Resources feature. Valid values:
    // 
    // *   Enable: enabled
    // *   Disable: disabled
    // 
    // This parameter is required.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceManager20200331
#endif
