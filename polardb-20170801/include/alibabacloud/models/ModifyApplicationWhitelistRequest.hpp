// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYAPPLICATIONWHITELISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYAPPLICATIONWHITELISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class ModifyApplicationWhitelistRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyApplicationWhitelistRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(ComponentId, componentId_);
      DARABONBA_PTR_TO_JSON(ModifyMode, modifyMode_);
      DARABONBA_PTR_TO_JSON(SecurityGroups, securityGroups_);
      DARABONBA_PTR_TO_JSON(SecurityIPArrayName, securityIPArrayName_);
      DARABONBA_PTR_TO_JSON(SecurityIPList, securityIPList_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyApplicationWhitelistRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(ComponentId, componentId_);
      DARABONBA_PTR_FROM_JSON(ModifyMode, modifyMode_);
      DARABONBA_PTR_FROM_JSON(SecurityGroups, securityGroups_);
      DARABONBA_PTR_FROM_JSON(SecurityIPArrayName, securityIPArrayName_);
      DARABONBA_PTR_FROM_JSON(SecurityIPList, securityIPList_);
    };
    ModifyApplicationWhitelistRequest() = default ;
    ModifyApplicationWhitelistRequest(const ModifyApplicationWhitelistRequest &) = default ;
    ModifyApplicationWhitelistRequest(ModifyApplicationWhitelistRequest &&) = default ;
    ModifyApplicationWhitelistRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyApplicationWhitelistRequest() = default ;
    ModifyApplicationWhitelistRequest& operator=(const ModifyApplicationWhitelistRequest &) = default ;
    ModifyApplicationWhitelistRequest& operator=(ModifyApplicationWhitelistRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationId_ == nullptr
        && return this->componentId_ == nullptr && return this->modifyMode_ == nullptr && return this->securityGroups_ == nullptr && return this->securityIPArrayName_ == nullptr && return this->securityIPList_ == nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string applicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline ModifyApplicationWhitelistRequest& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // componentId Field Functions 
    bool hasComponentId() const { return this->componentId_ != nullptr;};
    void deleteComponentId() { this->componentId_ = nullptr;};
    inline string componentId() const { DARABONBA_PTR_GET_DEFAULT(componentId_, "") };
    inline ModifyApplicationWhitelistRequest& setComponentId(string componentId) { DARABONBA_PTR_SET_VALUE(componentId_, componentId) };


    // modifyMode Field Functions 
    bool hasModifyMode() const { return this->modifyMode_ != nullptr;};
    void deleteModifyMode() { this->modifyMode_ = nullptr;};
    inline string modifyMode() const { DARABONBA_PTR_GET_DEFAULT(modifyMode_, "") };
    inline ModifyApplicationWhitelistRequest& setModifyMode(string modifyMode) { DARABONBA_PTR_SET_VALUE(modifyMode_, modifyMode) };


    // securityGroups Field Functions 
    bool hasSecurityGroups() const { return this->securityGroups_ != nullptr;};
    void deleteSecurityGroups() { this->securityGroups_ = nullptr;};
    inline string securityGroups() const { DARABONBA_PTR_GET_DEFAULT(securityGroups_, "") };
    inline ModifyApplicationWhitelistRequest& setSecurityGroups(string securityGroups) { DARABONBA_PTR_SET_VALUE(securityGroups_, securityGroups) };


    // securityIPArrayName Field Functions 
    bool hasSecurityIPArrayName() const { return this->securityIPArrayName_ != nullptr;};
    void deleteSecurityIPArrayName() { this->securityIPArrayName_ = nullptr;};
    inline string securityIPArrayName() const { DARABONBA_PTR_GET_DEFAULT(securityIPArrayName_, "") };
    inline ModifyApplicationWhitelistRequest& setSecurityIPArrayName(string securityIPArrayName) { DARABONBA_PTR_SET_VALUE(securityIPArrayName_, securityIPArrayName) };


    // securityIPList Field Functions 
    bool hasSecurityIPList() const { return this->securityIPList_ != nullptr;};
    void deleteSecurityIPList() { this->securityIPList_ = nullptr;};
    inline string securityIPList() const { DARABONBA_PTR_GET_DEFAULT(securityIPList_, "") };
    inline ModifyApplicationWhitelistRequest& setSecurityIPList(string securityIPList) { DARABONBA_PTR_SET_VALUE(securityIPList_, securityIPList) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> applicationId_ = nullptr;
    std::shared_ptr<string> componentId_ = nullptr;
    std::shared_ptr<string> modifyMode_ = nullptr;
    std::shared_ptr<string> securityGroups_ = nullptr;
    std::shared_ptr<string> securityIPArrayName_ = nullptr;
    std::shared_ptr<string> securityIPList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
