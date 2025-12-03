// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPROTECTDBRANCHRESPONSEBODYRESULTTESTSETTINGDTO_HPP_
#define ALIBABACLOUD_MODELS_CREATEPROTECTDBRANCHRESPONSEBODYRESULTTESTSETTINGDTO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateProtectdBranchResponseBodyResultTestSettingDTOCheckConfig.hpp>
#include <alibabacloud/models/CreateProtectdBranchResponseBodyResultTestSettingDTOCheckTaskQualityConfig.hpp>
#include <alibabacloud/models/CreateProtectdBranchResponseBodyResultTestSettingDTOCodeGuidelinesDetection.hpp>
#include <alibabacloud/models/CreateProtectdBranchResponseBodyResultTestSettingDTOSensitiveInfoDetection.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class CreateProtectdBranchResponseBodyResultTestSettingDTO : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateProtectdBranchResponseBodyResultTestSettingDTO& obj) { 
      DARABONBA_PTR_TO_JSON(checkConfig, checkConfig_);
      DARABONBA_PTR_TO_JSON(checkTaskQualityConfig, checkTaskQualityConfig_);
      DARABONBA_PTR_TO_JSON(codeGuidelinesDetection, codeGuidelinesDetection_);
      DARABONBA_PTR_TO_JSON(isRequired, isRequired_);
      DARABONBA_PTR_TO_JSON(sensitiveInfoDetection, sensitiveInfoDetection_);
    };
    friend void from_json(const Darabonba::Json& j, CreateProtectdBranchResponseBodyResultTestSettingDTO& obj) { 
      DARABONBA_PTR_FROM_JSON(checkConfig, checkConfig_);
      DARABONBA_PTR_FROM_JSON(checkTaskQualityConfig, checkTaskQualityConfig_);
      DARABONBA_PTR_FROM_JSON(codeGuidelinesDetection, codeGuidelinesDetection_);
      DARABONBA_PTR_FROM_JSON(isRequired, isRequired_);
      DARABONBA_PTR_FROM_JSON(sensitiveInfoDetection, sensitiveInfoDetection_);
    };
    CreateProtectdBranchResponseBodyResultTestSettingDTO() = default ;
    CreateProtectdBranchResponseBodyResultTestSettingDTO(const CreateProtectdBranchResponseBodyResultTestSettingDTO &) = default ;
    CreateProtectdBranchResponseBodyResultTestSettingDTO(CreateProtectdBranchResponseBodyResultTestSettingDTO &&) = default ;
    CreateProtectdBranchResponseBodyResultTestSettingDTO(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateProtectdBranchResponseBodyResultTestSettingDTO() = default ;
    CreateProtectdBranchResponseBodyResultTestSettingDTO& operator=(const CreateProtectdBranchResponseBodyResultTestSettingDTO &) = default ;
    CreateProtectdBranchResponseBodyResultTestSettingDTO& operator=(CreateProtectdBranchResponseBodyResultTestSettingDTO &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->checkConfig_ == nullptr
        && return this->checkTaskQualityConfig_ == nullptr && return this->codeGuidelinesDetection_ == nullptr && return this->isRequired_ == nullptr && return this->sensitiveInfoDetection_ == nullptr; };
    // checkConfig Field Functions 
    bool hasCheckConfig() const { return this->checkConfig_ != nullptr;};
    void deleteCheckConfig() { this->checkConfig_ = nullptr;};
    inline const Models::CreateProtectdBranchResponseBodyResultTestSettingDTOCheckConfig & checkConfig() const { DARABONBA_PTR_GET_CONST(checkConfig_, Models::CreateProtectdBranchResponseBodyResultTestSettingDTOCheckConfig) };
    inline Models::CreateProtectdBranchResponseBodyResultTestSettingDTOCheckConfig checkConfig() { DARABONBA_PTR_GET(checkConfig_, Models::CreateProtectdBranchResponseBodyResultTestSettingDTOCheckConfig) };
    inline CreateProtectdBranchResponseBodyResultTestSettingDTO& setCheckConfig(const Models::CreateProtectdBranchResponseBodyResultTestSettingDTOCheckConfig & checkConfig) { DARABONBA_PTR_SET_VALUE(checkConfig_, checkConfig) };
    inline CreateProtectdBranchResponseBodyResultTestSettingDTO& setCheckConfig(Models::CreateProtectdBranchResponseBodyResultTestSettingDTOCheckConfig && checkConfig) { DARABONBA_PTR_SET_RVALUE(checkConfig_, checkConfig) };


    // checkTaskQualityConfig Field Functions 
    bool hasCheckTaskQualityConfig() const { return this->checkTaskQualityConfig_ != nullptr;};
    void deleteCheckTaskQualityConfig() { this->checkTaskQualityConfig_ = nullptr;};
    inline const Models::CreateProtectdBranchResponseBodyResultTestSettingDTOCheckTaskQualityConfig & checkTaskQualityConfig() const { DARABONBA_PTR_GET_CONST(checkTaskQualityConfig_, Models::CreateProtectdBranchResponseBodyResultTestSettingDTOCheckTaskQualityConfig) };
    inline Models::CreateProtectdBranchResponseBodyResultTestSettingDTOCheckTaskQualityConfig checkTaskQualityConfig() { DARABONBA_PTR_GET(checkTaskQualityConfig_, Models::CreateProtectdBranchResponseBodyResultTestSettingDTOCheckTaskQualityConfig) };
    inline CreateProtectdBranchResponseBodyResultTestSettingDTO& setCheckTaskQualityConfig(const Models::CreateProtectdBranchResponseBodyResultTestSettingDTOCheckTaskQualityConfig & checkTaskQualityConfig) { DARABONBA_PTR_SET_VALUE(checkTaskQualityConfig_, checkTaskQualityConfig) };
    inline CreateProtectdBranchResponseBodyResultTestSettingDTO& setCheckTaskQualityConfig(Models::CreateProtectdBranchResponseBodyResultTestSettingDTOCheckTaskQualityConfig && checkTaskQualityConfig) { DARABONBA_PTR_SET_RVALUE(checkTaskQualityConfig_, checkTaskQualityConfig) };


    // codeGuidelinesDetection Field Functions 
    bool hasCodeGuidelinesDetection() const { return this->codeGuidelinesDetection_ != nullptr;};
    void deleteCodeGuidelinesDetection() { this->codeGuidelinesDetection_ = nullptr;};
    inline const Models::CreateProtectdBranchResponseBodyResultTestSettingDTOCodeGuidelinesDetection & codeGuidelinesDetection() const { DARABONBA_PTR_GET_CONST(codeGuidelinesDetection_, Models::CreateProtectdBranchResponseBodyResultTestSettingDTOCodeGuidelinesDetection) };
    inline Models::CreateProtectdBranchResponseBodyResultTestSettingDTOCodeGuidelinesDetection codeGuidelinesDetection() { DARABONBA_PTR_GET(codeGuidelinesDetection_, Models::CreateProtectdBranchResponseBodyResultTestSettingDTOCodeGuidelinesDetection) };
    inline CreateProtectdBranchResponseBodyResultTestSettingDTO& setCodeGuidelinesDetection(const Models::CreateProtectdBranchResponseBodyResultTestSettingDTOCodeGuidelinesDetection & codeGuidelinesDetection) { DARABONBA_PTR_SET_VALUE(codeGuidelinesDetection_, codeGuidelinesDetection) };
    inline CreateProtectdBranchResponseBodyResultTestSettingDTO& setCodeGuidelinesDetection(Models::CreateProtectdBranchResponseBodyResultTestSettingDTOCodeGuidelinesDetection && codeGuidelinesDetection) { DARABONBA_PTR_SET_RVALUE(codeGuidelinesDetection_, codeGuidelinesDetection) };


    // isRequired Field Functions 
    bool hasIsRequired() const { return this->isRequired_ != nullptr;};
    void deleteIsRequired() { this->isRequired_ = nullptr;};
    inline bool isRequired() const { DARABONBA_PTR_GET_DEFAULT(isRequired_, false) };
    inline CreateProtectdBranchResponseBodyResultTestSettingDTO& setIsRequired(bool isRequired) { DARABONBA_PTR_SET_VALUE(isRequired_, isRequired) };


    // sensitiveInfoDetection Field Functions 
    bool hasSensitiveInfoDetection() const { return this->sensitiveInfoDetection_ != nullptr;};
    void deleteSensitiveInfoDetection() { this->sensitiveInfoDetection_ = nullptr;};
    inline const Models::CreateProtectdBranchResponseBodyResultTestSettingDTOSensitiveInfoDetection & sensitiveInfoDetection() const { DARABONBA_PTR_GET_CONST(sensitiveInfoDetection_, Models::CreateProtectdBranchResponseBodyResultTestSettingDTOSensitiveInfoDetection) };
    inline Models::CreateProtectdBranchResponseBodyResultTestSettingDTOSensitiveInfoDetection sensitiveInfoDetection() { DARABONBA_PTR_GET(sensitiveInfoDetection_, Models::CreateProtectdBranchResponseBodyResultTestSettingDTOSensitiveInfoDetection) };
    inline CreateProtectdBranchResponseBodyResultTestSettingDTO& setSensitiveInfoDetection(const Models::CreateProtectdBranchResponseBodyResultTestSettingDTOSensitiveInfoDetection & sensitiveInfoDetection) { DARABONBA_PTR_SET_VALUE(sensitiveInfoDetection_, sensitiveInfoDetection) };
    inline CreateProtectdBranchResponseBodyResultTestSettingDTO& setSensitiveInfoDetection(Models::CreateProtectdBranchResponseBodyResultTestSettingDTOSensitiveInfoDetection && sensitiveInfoDetection) { DARABONBA_PTR_SET_RVALUE(sensitiveInfoDetection_, sensitiveInfoDetection) };


  protected:
    std::shared_ptr<Models::CreateProtectdBranchResponseBodyResultTestSettingDTOCheckConfig> checkConfig_ = nullptr;
    std::shared_ptr<Models::CreateProtectdBranchResponseBodyResultTestSettingDTOCheckTaskQualityConfig> checkTaskQualityConfig_ = nullptr;
    std::shared_ptr<Models::CreateProtectdBranchResponseBodyResultTestSettingDTOCodeGuidelinesDetection> codeGuidelinesDetection_ = nullptr;
    std::shared_ptr<bool> isRequired_ = nullptr;
    std::shared_ptr<Models::CreateProtectdBranchResponseBodyResultTestSettingDTOSensitiveInfoDetection> sensitiveInfoDetection_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
