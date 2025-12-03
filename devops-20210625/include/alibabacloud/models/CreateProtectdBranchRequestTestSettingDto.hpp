// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPROTECTDBRANCHREQUESTTESTSETTINGDTO_HPP_
#define ALIBABACLOUD_MODELS_CREATEPROTECTDBRANCHREQUESTTESTSETTINGDTO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateProtectdBranchRequestTestSettingDTOCheckConfig.hpp>
#include <alibabacloud/models/CreateProtectdBranchRequestTestSettingDTOCheckTaskQualityConfig.hpp>
#include <alibabacloud/models/CreateProtectdBranchRequestTestSettingDTOCodeGuidelinesDetection.hpp>
#include <alibabacloud/models/CreateProtectdBranchRequestTestSettingDTOSensitiveInfoDetection.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class CreateProtectdBranchRequestTestSettingDTO : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateProtectdBranchRequestTestSettingDTO& obj) { 
      DARABONBA_PTR_TO_JSON(checkConfig, checkConfig_);
      DARABONBA_PTR_TO_JSON(checkTaskQualityConfig, checkTaskQualityConfig_);
      DARABONBA_PTR_TO_JSON(codeGuidelinesDetection, codeGuidelinesDetection_);
      DARABONBA_PTR_TO_JSON(isRequired, isRequired_);
      DARABONBA_PTR_TO_JSON(sensitiveInfoDetection, sensitiveInfoDetection_);
    };
    friend void from_json(const Darabonba::Json& j, CreateProtectdBranchRequestTestSettingDTO& obj) { 
      DARABONBA_PTR_FROM_JSON(checkConfig, checkConfig_);
      DARABONBA_PTR_FROM_JSON(checkTaskQualityConfig, checkTaskQualityConfig_);
      DARABONBA_PTR_FROM_JSON(codeGuidelinesDetection, codeGuidelinesDetection_);
      DARABONBA_PTR_FROM_JSON(isRequired, isRequired_);
      DARABONBA_PTR_FROM_JSON(sensitiveInfoDetection, sensitiveInfoDetection_);
    };
    CreateProtectdBranchRequestTestSettingDTO() = default ;
    CreateProtectdBranchRequestTestSettingDTO(const CreateProtectdBranchRequestTestSettingDTO &) = default ;
    CreateProtectdBranchRequestTestSettingDTO(CreateProtectdBranchRequestTestSettingDTO &&) = default ;
    CreateProtectdBranchRequestTestSettingDTO(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateProtectdBranchRequestTestSettingDTO() = default ;
    CreateProtectdBranchRequestTestSettingDTO& operator=(const CreateProtectdBranchRequestTestSettingDTO &) = default ;
    CreateProtectdBranchRequestTestSettingDTO& operator=(CreateProtectdBranchRequestTestSettingDTO &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->checkConfig_ == nullptr
        && return this->checkTaskQualityConfig_ == nullptr && return this->codeGuidelinesDetection_ == nullptr && return this->isRequired_ == nullptr && return this->sensitiveInfoDetection_ == nullptr; };
    // checkConfig Field Functions 
    bool hasCheckConfig() const { return this->checkConfig_ != nullptr;};
    void deleteCheckConfig() { this->checkConfig_ = nullptr;};
    inline const Models::CreateProtectdBranchRequestTestSettingDTOCheckConfig & checkConfig() const { DARABONBA_PTR_GET_CONST(checkConfig_, Models::CreateProtectdBranchRequestTestSettingDTOCheckConfig) };
    inline Models::CreateProtectdBranchRequestTestSettingDTOCheckConfig checkConfig() { DARABONBA_PTR_GET(checkConfig_, Models::CreateProtectdBranchRequestTestSettingDTOCheckConfig) };
    inline CreateProtectdBranchRequestTestSettingDTO& setCheckConfig(const Models::CreateProtectdBranchRequestTestSettingDTOCheckConfig & checkConfig) { DARABONBA_PTR_SET_VALUE(checkConfig_, checkConfig) };
    inline CreateProtectdBranchRequestTestSettingDTO& setCheckConfig(Models::CreateProtectdBranchRequestTestSettingDTOCheckConfig && checkConfig) { DARABONBA_PTR_SET_RVALUE(checkConfig_, checkConfig) };


    // checkTaskQualityConfig Field Functions 
    bool hasCheckTaskQualityConfig() const { return this->checkTaskQualityConfig_ != nullptr;};
    void deleteCheckTaskQualityConfig() { this->checkTaskQualityConfig_ = nullptr;};
    inline const Models::CreateProtectdBranchRequestTestSettingDTOCheckTaskQualityConfig & checkTaskQualityConfig() const { DARABONBA_PTR_GET_CONST(checkTaskQualityConfig_, Models::CreateProtectdBranchRequestTestSettingDTOCheckTaskQualityConfig) };
    inline Models::CreateProtectdBranchRequestTestSettingDTOCheckTaskQualityConfig checkTaskQualityConfig() { DARABONBA_PTR_GET(checkTaskQualityConfig_, Models::CreateProtectdBranchRequestTestSettingDTOCheckTaskQualityConfig) };
    inline CreateProtectdBranchRequestTestSettingDTO& setCheckTaskQualityConfig(const Models::CreateProtectdBranchRequestTestSettingDTOCheckTaskQualityConfig & checkTaskQualityConfig) { DARABONBA_PTR_SET_VALUE(checkTaskQualityConfig_, checkTaskQualityConfig) };
    inline CreateProtectdBranchRequestTestSettingDTO& setCheckTaskQualityConfig(Models::CreateProtectdBranchRequestTestSettingDTOCheckTaskQualityConfig && checkTaskQualityConfig) { DARABONBA_PTR_SET_RVALUE(checkTaskQualityConfig_, checkTaskQualityConfig) };


    // codeGuidelinesDetection Field Functions 
    bool hasCodeGuidelinesDetection() const { return this->codeGuidelinesDetection_ != nullptr;};
    void deleteCodeGuidelinesDetection() { this->codeGuidelinesDetection_ = nullptr;};
    inline const Models::CreateProtectdBranchRequestTestSettingDTOCodeGuidelinesDetection & codeGuidelinesDetection() const { DARABONBA_PTR_GET_CONST(codeGuidelinesDetection_, Models::CreateProtectdBranchRequestTestSettingDTOCodeGuidelinesDetection) };
    inline Models::CreateProtectdBranchRequestTestSettingDTOCodeGuidelinesDetection codeGuidelinesDetection() { DARABONBA_PTR_GET(codeGuidelinesDetection_, Models::CreateProtectdBranchRequestTestSettingDTOCodeGuidelinesDetection) };
    inline CreateProtectdBranchRequestTestSettingDTO& setCodeGuidelinesDetection(const Models::CreateProtectdBranchRequestTestSettingDTOCodeGuidelinesDetection & codeGuidelinesDetection) { DARABONBA_PTR_SET_VALUE(codeGuidelinesDetection_, codeGuidelinesDetection) };
    inline CreateProtectdBranchRequestTestSettingDTO& setCodeGuidelinesDetection(Models::CreateProtectdBranchRequestTestSettingDTOCodeGuidelinesDetection && codeGuidelinesDetection) { DARABONBA_PTR_SET_RVALUE(codeGuidelinesDetection_, codeGuidelinesDetection) };


    // isRequired Field Functions 
    bool hasIsRequired() const { return this->isRequired_ != nullptr;};
    void deleteIsRequired() { this->isRequired_ = nullptr;};
    inline bool isRequired() const { DARABONBA_PTR_GET_DEFAULT(isRequired_, false) };
    inline CreateProtectdBranchRequestTestSettingDTO& setIsRequired(bool isRequired) { DARABONBA_PTR_SET_VALUE(isRequired_, isRequired) };


    // sensitiveInfoDetection Field Functions 
    bool hasSensitiveInfoDetection() const { return this->sensitiveInfoDetection_ != nullptr;};
    void deleteSensitiveInfoDetection() { this->sensitiveInfoDetection_ = nullptr;};
    inline const Models::CreateProtectdBranchRequestTestSettingDTOSensitiveInfoDetection & sensitiveInfoDetection() const { DARABONBA_PTR_GET_CONST(sensitiveInfoDetection_, Models::CreateProtectdBranchRequestTestSettingDTOSensitiveInfoDetection) };
    inline Models::CreateProtectdBranchRequestTestSettingDTOSensitiveInfoDetection sensitiveInfoDetection() { DARABONBA_PTR_GET(sensitiveInfoDetection_, Models::CreateProtectdBranchRequestTestSettingDTOSensitiveInfoDetection) };
    inline CreateProtectdBranchRequestTestSettingDTO& setSensitiveInfoDetection(const Models::CreateProtectdBranchRequestTestSettingDTOSensitiveInfoDetection & sensitiveInfoDetection) { DARABONBA_PTR_SET_VALUE(sensitiveInfoDetection_, sensitiveInfoDetection) };
    inline CreateProtectdBranchRequestTestSettingDTO& setSensitiveInfoDetection(Models::CreateProtectdBranchRequestTestSettingDTOSensitiveInfoDetection && sensitiveInfoDetection) { DARABONBA_PTR_SET_RVALUE(sensitiveInfoDetection_, sensitiveInfoDetection) };


  protected:
    std::shared_ptr<Models::CreateProtectdBranchRequestTestSettingDTOCheckConfig> checkConfig_ = nullptr;
    std::shared_ptr<Models::CreateProtectdBranchRequestTestSettingDTOCheckTaskQualityConfig> checkTaskQualityConfig_ = nullptr;
    std::shared_ptr<Models::CreateProtectdBranchRequestTestSettingDTOCodeGuidelinesDetection> codeGuidelinesDetection_ = nullptr;
    std::shared_ptr<bool> isRequired_ = nullptr;
    std::shared_ptr<Models::CreateProtectdBranchRequestTestSettingDTOSensitiveInfoDetection> sensitiveInfoDetection_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
