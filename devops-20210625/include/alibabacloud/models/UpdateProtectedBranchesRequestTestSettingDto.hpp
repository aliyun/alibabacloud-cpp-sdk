// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPROTECTEDBRANCHESREQUESTTESTSETTINGDTO_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPROTECTEDBRANCHESREQUESTTESTSETTINGDTO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateProtectedBranchesRequestTestSettingDTOCheckConfig.hpp>
#include <alibabacloud/models/UpdateProtectedBranchesRequestTestSettingDTOCheckTaskQualityConfig.hpp>
#include <alibabacloud/models/UpdateProtectedBranchesRequestTestSettingDTOCodeGuidelinesDetection.hpp>
#include <alibabacloud/models/UpdateProtectedBranchesRequestTestSettingDTOSensitiveInfoDetection.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class UpdateProtectedBranchesRequestTestSettingDTO : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateProtectedBranchesRequestTestSettingDTO& obj) { 
      DARABONBA_PTR_TO_JSON(checkConfig, checkConfig_);
      DARABONBA_PTR_TO_JSON(checkTaskQualityConfig, checkTaskQualityConfig_);
      DARABONBA_PTR_TO_JSON(codeGuidelinesDetection, codeGuidelinesDetection_);
      DARABONBA_PTR_TO_JSON(isRequired, isRequired_);
      DARABONBA_PTR_TO_JSON(sensitiveInfoDetection, sensitiveInfoDetection_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateProtectedBranchesRequestTestSettingDTO& obj) { 
      DARABONBA_PTR_FROM_JSON(checkConfig, checkConfig_);
      DARABONBA_PTR_FROM_JSON(checkTaskQualityConfig, checkTaskQualityConfig_);
      DARABONBA_PTR_FROM_JSON(codeGuidelinesDetection, codeGuidelinesDetection_);
      DARABONBA_PTR_FROM_JSON(isRequired, isRequired_);
      DARABONBA_PTR_FROM_JSON(sensitiveInfoDetection, sensitiveInfoDetection_);
    };
    UpdateProtectedBranchesRequestTestSettingDTO() = default ;
    UpdateProtectedBranchesRequestTestSettingDTO(const UpdateProtectedBranchesRequestTestSettingDTO &) = default ;
    UpdateProtectedBranchesRequestTestSettingDTO(UpdateProtectedBranchesRequestTestSettingDTO &&) = default ;
    UpdateProtectedBranchesRequestTestSettingDTO(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateProtectedBranchesRequestTestSettingDTO() = default ;
    UpdateProtectedBranchesRequestTestSettingDTO& operator=(const UpdateProtectedBranchesRequestTestSettingDTO &) = default ;
    UpdateProtectedBranchesRequestTestSettingDTO& operator=(UpdateProtectedBranchesRequestTestSettingDTO &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->checkConfig_ == nullptr
        && return this->checkTaskQualityConfig_ == nullptr && return this->codeGuidelinesDetection_ == nullptr && return this->isRequired_ == nullptr && return this->sensitiveInfoDetection_ == nullptr; };
    // checkConfig Field Functions 
    bool hasCheckConfig() const { return this->checkConfig_ != nullptr;};
    void deleteCheckConfig() { this->checkConfig_ = nullptr;};
    inline const Models::UpdateProtectedBranchesRequestTestSettingDTOCheckConfig & checkConfig() const { DARABONBA_PTR_GET_CONST(checkConfig_, Models::UpdateProtectedBranchesRequestTestSettingDTOCheckConfig) };
    inline Models::UpdateProtectedBranchesRequestTestSettingDTOCheckConfig checkConfig() { DARABONBA_PTR_GET(checkConfig_, Models::UpdateProtectedBranchesRequestTestSettingDTOCheckConfig) };
    inline UpdateProtectedBranchesRequestTestSettingDTO& setCheckConfig(const Models::UpdateProtectedBranchesRequestTestSettingDTOCheckConfig & checkConfig) { DARABONBA_PTR_SET_VALUE(checkConfig_, checkConfig) };
    inline UpdateProtectedBranchesRequestTestSettingDTO& setCheckConfig(Models::UpdateProtectedBranchesRequestTestSettingDTOCheckConfig && checkConfig) { DARABONBA_PTR_SET_RVALUE(checkConfig_, checkConfig) };


    // checkTaskQualityConfig Field Functions 
    bool hasCheckTaskQualityConfig() const { return this->checkTaskQualityConfig_ != nullptr;};
    void deleteCheckTaskQualityConfig() { this->checkTaskQualityConfig_ = nullptr;};
    inline const Models::UpdateProtectedBranchesRequestTestSettingDTOCheckTaskQualityConfig & checkTaskQualityConfig() const { DARABONBA_PTR_GET_CONST(checkTaskQualityConfig_, Models::UpdateProtectedBranchesRequestTestSettingDTOCheckTaskQualityConfig) };
    inline Models::UpdateProtectedBranchesRequestTestSettingDTOCheckTaskQualityConfig checkTaskQualityConfig() { DARABONBA_PTR_GET(checkTaskQualityConfig_, Models::UpdateProtectedBranchesRequestTestSettingDTOCheckTaskQualityConfig) };
    inline UpdateProtectedBranchesRequestTestSettingDTO& setCheckTaskQualityConfig(const Models::UpdateProtectedBranchesRequestTestSettingDTOCheckTaskQualityConfig & checkTaskQualityConfig) { DARABONBA_PTR_SET_VALUE(checkTaskQualityConfig_, checkTaskQualityConfig) };
    inline UpdateProtectedBranchesRequestTestSettingDTO& setCheckTaskQualityConfig(Models::UpdateProtectedBranchesRequestTestSettingDTOCheckTaskQualityConfig && checkTaskQualityConfig) { DARABONBA_PTR_SET_RVALUE(checkTaskQualityConfig_, checkTaskQualityConfig) };


    // codeGuidelinesDetection Field Functions 
    bool hasCodeGuidelinesDetection() const { return this->codeGuidelinesDetection_ != nullptr;};
    void deleteCodeGuidelinesDetection() { this->codeGuidelinesDetection_ = nullptr;};
    inline const Models::UpdateProtectedBranchesRequestTestSettingDTOCodeGuidelinesDetection & codeGuidelinesDetection() const { DARABONBA_PTR_GET_CONST(codeGuidelinesDetection_, Models::UpdateProtectedBranchesRequestTestSettingDTOCodeGuidelinesDetection) };
    inline Models::UpdateProtectedBranchesRequestTestSettingDTOCodeGuidelinesDetection codeGuidelinesDetection() { DARABONBA_PTR_GET(codeGuidelinesDetection_, Models::UpdateProtectedBranchesRequestTestSettingDTOCodeGuidelinesDetection) };
    inline UpdateProtectedBranchesRequestTestSettingDTO& setCodeGuidelinesDetection(const Models::UpdateProtectedBranchesRequestTestSettingDTOCodeGuidelinesDetection & codeGuidelinesDetection) { DARABONBA_PTR_SET_VALUE(codeGuidelinesDetection_, codeGuidelinesDetection) };
    inline UpdateProtectedBranchesRequestTestSettingDTO& setCodeGuidelinesDetection(Models::UpdateProtectedBranchesRequestTestSettingDTOCodeGuidelinesDetection && codeGuidelinesDetection) { DARABONBA_PTR_SET_RVALUE(codeGuidelinesDetection_, codeGuidelinesDetection) };


    // isRequired Field Functions 
    bool hasIsRequired() const { return this->isRequired_ != nullptr;};
    void deleteIsRequired() { this->isRequired_ = nullptr;};
    inline bool isRequired() const { DARABONBA_PTR_GET_DEFAULT(isRequired_, false) };
    inline UpdateProtectedBranchesRequestTestSettingDTO& setIsRequired(bool isRequired) { DARABONBA_PTR_SET_VALUE(isRequired_, isRequired) };


    // sensitiveInfoDetection Field Functions 
    bool hasSensitiveInfoDetection() const { return this->sensitiveInfoDetection_ != nullptr;};
    void deleteSensitiveInfoDetection() { this->sensitiveInfoDetection_ = nullptr;};
    inline const Models::UpdateProtectedBranchesRequestTestSettingDTOSensitiveInfoDetection & sensitiveInfoDetection() const { DARABONBA_PTR_GET_CONST(sensitiveInfoDetection_, Models::UpdateProtectedBranchesRequestTestSettingDTOSensitiveInfoDetection) };
    inline Models::UpdateProtectedBranchesRequestTestSettingDTOSensitiveInfoDetection sensitiveInfoDetection() { DARABONBA_PTR_GET(sensitiveInfoDetection_, Models::UpdateProtectedBranchesRequestTestSettingDTOSensitiveInfoDetection) };
    inline UpdateProtectedBranchesRequestTestSettingDTO& setSensitiveInfoDetection(const Models::UpdateProtectedBranchesRequestTestSettingDTOSensitiveInfoDetection & sensitiveInfoDetection) { DARABONBA_PTR_SET_VALUE(sensitiveInfoDetection_, sensitiveInfoDetection) };
    inline UpdateProtectedBranchesRequestTestSettingDTO& setSensitiveInfoDetection(Models::UpdateProtectedBranchesRequestTestSettingDTOSensitiveInfoDetection && sensitiveInfoDetection) { DARABONBA_PTR_SET_RVALUE(sensitiveInfoDetection_, sensitiveInfoDetection) };


  protected:
    std::shared_ptr<Models::UpdateProtectedBranchesRequestTestSettingDTOCheckConfig> checkConfig_ = nullptr;
    std::shared_ptr<Models::UpdateProtectedBranchesRequestTestSettingDTOCheckTaskQualityConfig> checkTaskQualityConfig_ = nullptr;
    std::shared_ptr<Models::UpdateProtectedBranchesRequestTestSettingDTOCodeGuidelinesDetection> codeGuidelinesDetection_ = nullptr;
    std::shared_ptr<bool> isRequired_ = nullptr;
    std::shared_ptr<Models::UpdateProtectedBranchesRequestTestSettingDTOSensitiveInfoDetection> sensitiveInfoDetection_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
