// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPROTECTEDBRANCHESRESPONSEBODYRESULTTESTSETTINGDTO_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPROTECTEDBRANCHESRESPONSEBODYRESULTTESTSETTINGDTO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateProtectedBranchesResponseBodyResultTestSettingDTOCheckConfig.hpp>
#include <alibabacloud/models/UpdateProtectedBranchesResponseBodyResultTestSettingDTOCheckTaskQualityConfig.hpp>
#include <alibabacloud/models/UpdateProtectedBranchesResponseBodyResultTestSettingDTOCodeGuidelinesDetection.hpp>
#include <alibabacloud/models/UpdateProtectedBranchesResponseBodyResultTestSettingDTOSensitiveInfoDetection.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class UpdateProtectedBranchesResponseBodyResultTestSettingDTO : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateProtectedBranchesResponseBodyResultTestSettingDTO& obj) { 
      DARABONBA_PTR_TO_JSON(checkConfig, checkConfig_);
      DARABONBA_PTR_TO_JSON(checkTaskQualityConfig, checkTaskQualityConfig_);
      DARABONBA_PTR_TO_JSON(codeGuidelinesDetection, codeGuidelinesDetection_);
      DARABONBA_PTR_TO_JSON(isRequired, isRequired_);
      DARABONBA_PTR_TO_JSON(sensitiveInfoDetection, sensitiveInfoDetection_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateProtectedBranchesResponseBodyResultTestSettingDTO& obj) { 
      DARABONBA_PTR_FROM_JSON(checkConfig, checkConfig_);
      DARABONBA_PTR_FROM_JSON(checkTaskQualityConfig, checkTaskQualityConfig_);
      DARABONBA_PTR_FROM_JSON(codeGuidelinesDetection, codeGuidelinesDetection_);
      DARABONBA_PTR_FROM_JSON(isRequired, isRequired_);
      DARABONBA_PTR_FROM_JSON(sensitiveInfoDetection, sensitiveInfoDetection_);
    };
    UpdateProtectedBranchesResponseBodyResultTestSettingDTO() = default ;
    UpdateProtectedBranchesResponseBodyResultTestSettingDTO(const UpdateProtectedBranchesResponseBodyResultTestSettingDTO &) = default ;
    UpdateProtectedBranchesResponseBodyResultTestSettingDTO(UpdateProtectedBranchesResponseBodyResultTestSettingDTO &&) = default ;
    UpdateProtectedBranchesResponseBodyResultTestSettingDTO(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateProtectedBranchesResponseBodyResultTestSettingDTO() = default ;
    UpdateProtectedBranchesResponseBodyResultTestSettingDTO& operator=(const UpdateProtectedBranchesResponseBodyResultTestSettingDTO &) = default ;
    UpdateProtectedBranchesResponseBodyResultTestSettingDTO& operator=(UpdateProtectedBranchesResponseBodyResultTestSettingDTO &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->checkConfig_ == nullptr
        && return this->checkTaskQualityConfig_ == nullptr && return this->codeGuidelinesDetection_ == nullptr && return this->isRequired_ == nullptr && return this->sensitiveInfoDetection_ == nullptr; };
    // checkConfig Field Functions 
    bool hasCheckConfig() const { return this->checkConfig_ != nullptr;};
    void deleteCheckConfig() { this->checkConfig_ = nullptr;};
    inline const Models::UpdateProtectedBranchesResponseBodyResultTestSettingDTOCheckConfig & checkConfig() const { DARABONBA_PTR_GET_CONST(checkConfig_, Models::UpdateProtectedBranchesResponseBodyResultTestSettingDTOCheckConfig) };
    inline Models::UpdateProtectedBranchesResponseBodyResultTestSettingDTOCheckConfig checkConfig() { DARABONBA_PTR_GET(checkConfig_, Models::UpdateProtectedBranchesResponseBodyResultTestSettingDTOCheckConfig) };
    inline UpdateProtectedBranchesResponseBodyResultTestSettingDTO& setCheckConfig(const Models::UpdateProtectedBranchesResponseBodyResultTestSettingDTOCheckConfig & checkConfig) { DARABONBA_PTR_SET_VALUE(checkConfig_, checkConfig) };
    inline UpdateProtectedBranchesResponseBodyResultTestSettingDTO& setCheckConfig(Models::UpdateProtectedBranchesResponseBodyResultTestSettingDTOCheckConfig && checkConfig) { DARABONBA_PTR_SET_RVALUE(checkConfig_, checkConfig) };


    // checkTaskQualityConfig Field Functions 
    bool hasCheckTaskQualityConfig() const { return this->checkTaskQualityConfig_ != nullptr;};
    void deleteCheckTaskQualityConfig() { this->checkTaskQualityConfig_ = nullptr;};
    inline const Models::UpdateProtectedBranchesResponseBodyResultTestSettingDTOCheckTaskQualityConfig & checkTaskQualityConfig() const { DARABONBA_PTR_GET_CONST(checkTaskQualityConfig_, Models::UpdateProtectedBranchesResponseBodyResultTestSettingDTOCheckTaskQualityConfig) };
    inline Models::UpdateProtectedBranchesResponseBodyResultTestSettingDTOCheckTaskQualityConfig checkTaskQualityConfig() { DARABONBA_PTR_GET(checkTaskQualityConfig_, Models::UpdateProtectedBranchesResponseBodyResultTestSettingDTOCheckTaskQualityConfig) };
    inline UpdateProtectedBranchesResponseBodyResultTestSettingDTO& setCheckTaskQualityConfig(const Models::UpdateProtectedBranchesResponseBodyResultTestSettingDTOCheckTaskQualityConfig & checkTaskQualityConfig) { DARABONBA_PTR_SET_VALUE(checkTaskQualityConfig_, checkTaskQualityConfig) };
    inline UpdateProtectedBranchesResponseBodyResultTestSettingDTO& setCheckTaskQualityConfig(Models::UpdateProtectedBranchesResponseBodyResultTestSettingDTOCheckTaskQualityConfig && checkTaskQualityConfig) { DARABONBA_PTR_SET_RVALUE(checkTaskQualityConfig_, checkTaskQualityConfig) };


    // codeGuidelinesDetection Field Functions 
    bool hasCodeGuidelinesDetection() const { return this->codeGuidelinesDetection_ != nullptr;};
    void deleteCodeGuidelinesDetection() { this->codeGuidelinesDetection_ = nullptr;};
    inline const Models::UpdateProtectedBranchesResponseBodyResultTestSettingDTOCodeGuidelinesDetection & codeGuidelinesDetection() const { DARABONBA_PTR_GET_CONST(codeGuidelinesDetection_, Models::UpdateProtectedBranchesResponseBodyResultTestSettingDTOCodeGuidelinesDetection) };
    inline Models::UpdateProtectedBranchesResponseBodyResultTestSettingDTOCodeGuidelinesDetection codeGuidelinesDetection() { DARABONBA_PTR_GET(codeGuidelinesDetection_, Models::UpdateProtectedBranchesResponseBodyResultTestSettingDTOCodeGuidelinesDetection) };
    inline UpdateProtectedBranchesResponseBodyResultTestSettingDTO& setCodeGuidelinesDetection(const Models::UpdateProtectedBranchesResponseBodyResultTestSettingDTOCodeGuidelinesDetection & codeGuidelinesDetection) { DARABONBA_PTR_SET_VALUE(codeGuidelinesDetection_, codeGuidelinesDetection) };
    inline UpdateProtectedBranchesResponseBodyResultTestSettingDTO& setCodeGuidelinesDetection(Models::UpdateProtectedBranchesResponseBodyResultTestSettingDTOCodeGuidelinesDetection && codeGuidelinesDetection) { DARABONBA_PTR_SET_RVALUE(codeGuidelinesDetection_, codeGuidelinesDetection) };


    // isRequired Field Functions 
    bool hasIsRequired() const { return this->isRequired_ != nullptr;};
    void deleteIsRequired() { this->isRequired_ = nullptr;};
    inline bool isRequired() const { DARABONBA_PTR_GET_DEFAULT(isRequired_, false) };
    inline UpdateProtectedBranchesResponseBodyResultTestSettingDTO& setIsRequired(bool isRequired) { DARABONBA_PTR_SET_VALUE(isRequired_, isRequired) };


    // sensitiveInfoDetection Field Functions 
    bool hasSensitiveInfoDetection() const { return this->sensitiveInfoDetection_ != nullptr;};
    void deleteSensitiveInfoDetection() { this->sensitiveInfoDetection_ = nullptr;};
    inline const Models::UpdateProtectedBranchesResponseBodyResultTestSettingDTOSensitiveInfoDetection & sensitiveInfoDetection() const { DARABONBA_PTR_GET_CONST(sensitiveInfoDetection_, Models::UpdateProtectedBranchesResponseBodyResultTestSettingDTOSensitiveInfoDetection) };
    inline Models::UpdateProtectedBranchesResponseBodyResultTestSettingDTOSensitiveInfoDetection sensitiveInfoDetection() { DARABONBA_PTR_GET(sensitiveInfoDetection_, Models::UpdateProtectedBranchesResponseBodyResultTestSettingDTOSensitiveInfoDetection) };
    inline UpdateProtectedBranchesResponseBodyResultTestSettingDTO& setSensitiveInfoDetection(const Models::UpdateProtectedBranchesResponseBodyResultTestSettingDTOSensitiveInfoDetection & sensitiveInfoDetection) { DARABONBA_PTR_SET_VALUE(sensitiveInfoDetection_, sensitiveInfoDetection) };
    inline UpdateProtectedBranchesResponseBodyResultTestSettingDTO& setSensitiveInfoDetection(Models::UpdateProtectedBranchesResponseBodyResultTestSettingDTOSensitiveInfoDetection && sensitiveInfoDetection) { DARABONBA_PTR_SET_RVALUE(sensitiveInfoDetection_, sensitiveInfoDetection) };


  protected:
    std::shared_ptr<Models::UpdateProtectedBranchesResponseBodyResultTestSettingDTOCheckConfig> checkConfig_ = nullptr;
    std::shared_ptr<Models::UpdateProtectedBranchesResponseBodyResultTestSettingDTOCheckTaskQualityConfig> checkTaskQualityConfig_ = nullptr;
    std::shared_ptr<Models::UpdateProtectedBranchesResponseBodyResultTestSettingDTOCodeGuidelinesDetection> codeGuidelinesDetection_ = nullptr;
    std::shared_ptr<bool> isRequired_ = nullptr;
    std::shared_ptr<Models::UpdateProtectedBranchesResponseBodyResultTestSettingDTOSensitiveInfoDetection> sensitiveInfoDetection_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
