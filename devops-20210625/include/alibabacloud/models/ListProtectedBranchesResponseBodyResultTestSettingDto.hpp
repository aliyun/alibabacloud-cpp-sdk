// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPROTECTEDBRANCHESRESPONSEBODYRESULTTESTSETTINGDTO_HPP_
#define ALIBABACLOUD_MODELS_LISTPROTECTEDBRANCHESRESPONSEBODYRESULTTESTSETTINGDTO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListProtectedBranchesResponseBodyResultTestSettingDTOCheckConfig.hpp>
#include <alibabacloud/models/ListProtectedBranchesResponseBodyResultTestSettingDTOCheckTaskQualityConfig.hpp>
#include <alibabacloud/models/ListProtectedBranchesResponseBodyResultTestSettingDTOCodeGuidelinesDetection.hpp>
#include <alibabacloud/models/ListProtectedBranchesResponseBodyResultTestSettingDTOSensitiveInfoDetection.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class ListProtectedBranchesResponseBodyResultTestSettingDTO : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListProtectedBranchesResponseBodyResultTestSettingDTO& obj) { 
      DARABONBA_PTR_TO_JSON(checkConfig, checkConfig_);
      DARABONBA_PTR_TO_JSON(checkTaskQualityConfig, checkTaskQualityConfig_);
      DARABONBA_PTR_TO_JSON(codeGuidelinesDetection, codeGuidelinesDetection_);
      DARABONBA_PTR_TO_JSON(isRequired, isRequired_);
      DARABONBA_PTR_TO_JSON(sensitiveInfoDetection, sensitiveInfoDetection_);
    };
    friend void from_json(const Darabonba::Json& j, ListProtectedBranchesResponseBodyResultTestSettingDTO& obj) { 
      DARABONBA_PTR_FROM_JSON(checkConfig, checkConfig_);
      DARABONBA_PTR_FROM_JSON(checkTaskQualityConfig, checkTaskQualityConfig_);
      DARABONBA_PTR_FROM_JSON(codeGuidelinesDetection, codeGuidelinesDetection_);
      DARABONBA_PTR_FROM_JSON(isRequired, isRequired_);
      DARABONBA_PTR_FROM_JSON(sensitiveInfoDetection, sensitiveInfoDetection_);
    };
    ListProtectedBranchesResponseBodyResultTestSettingDTO() = default ;
    ListProtectedBranchesResponseBodyResultTestSettingDTO(const ListProtectedBranchesResponseBodyResultTestSettingDTO &) = default ;
    ListProtectedBranchesResponseBodyResultTestSettingDTO(ListProtectedBranchesResponseBodyResultTestSettingDTO &&) = default ;
    ListProtectedBranchesResponseBodyResultTestSettingDTO(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListProtectedBranchesResponseBodyResultTestSettingDTO() = default ;
    ListProtectedBranchesResponseBodyResultTestSettingDTO& operator=(const ListProtectedBranchesResponseBodyResultTestSettingDTO &) = default ;
    ListProtectedBranchesResponseBodyResultTestSettingDTO& operator=(ListProtectedBranchesResponseBodyResultTestSettingDTO &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->checkConfig_ == nullptr
        && return this->checkTaskQualityConfig_ == nullptr && return this->codeGuidelinesDetection_ == nullptr && return this->isRequired_ == nullptr && return this->sensitiveInfoDetection_ == nullptr; };
    // checkConfig Field Functions 
    bool hasCheckConfig() const { return this->checkConfig_ != nullptr;};
    void deleteCheckConfig() { this->checkConfig_ = nullptr;};
    inline const Models::ListProtectedBranchesResponseBodyResultTestSettingDTOCheckConfig & checkConfig() const { DARABONBA_PTR_GET_CONST(checkConfig_, Models::ListProtectedBranchesResponseBodyResultTestSettingDTOCheckConfig) };
    inline Models::ListProtectedBranchesResponseBodyResultTestSettingDTOCheckConfig checkConfig() { DARABONBA_PTR_GET(checkConfig_, Models::ListProtectedBranchesResponseBodyResultTestSettingDTOCheckConfig) };
    inline ListProtectedBranchesResponseBodyResultTestSettingDTO& setCheckConfig(const Models::ListProtectedBranchesResponseBodyResultTestSettingDTOCheckConfig & checkConfig) { DARABONBA_PTR_SET_VALUE(checkConfig_, checkConfig) };
    inline ListProtectedBranchesResponseBodyResultTestSettingDTO& setCheckConfig(Models::ListProtectedBranchesResponseBodyResultTestSettingDTOCheckConfig && checkConfig) { DARABONBA_PTR_SET_RVALUE(checkConfig_, checkConfig) };


    // checkTaskQualityConfig Field Functions 
    bool hasCheckTaskQualityConfig() const { return this->checkTaskQualityConfig_ != nullptr;};
    void deleteCheckTaskQualityConfig() { this->checkTaskQualityConfig_ = nullptr;};
    inline const Models::ListProtectedBranchesResponseBodyResultTestSettingDTOCheckTaskQualityConfig & checkTaskQualityConfig() const { DARABONBA_PTR_GET_CONST(checkTaskQualityConfig_, Models::ListProtectedBranchesResponseBodyResultTestSettingDTOCheckTaskQualityConfig) };
    inline Models::ListProtectedBranchesResponseBodyResultTestSettingDTOCheckTaskQualityConfig checkTaskQualityConfig() { DARABONBA_PTR_GET(checkTaskQualityConfig_, Models::ListProtectedBranchesResponseBodyResultTestSettingDTOCheckTaskQualityConfig) };
    inline ListProtectedBranchesResponseBodyResultTestSettingDTO& setCheckTaskQualityConfig(const Models::ListProtectedBranchesResponseBodyResultTestSettingDTOCheckTaskQualityConfig & checkTaskQualityConfig) { DARABONBA_PTR_SET_VALUE(checkTaskQualityConfig_, checkTaskQualityConfig) };
    inline ListProtectedBranchesResponseBodyResultTestSettingDTO& setCheckTaskQualityConfig(Models::ListProtectedBranchesResponseBodyResultTestSettingDTOCheckTaskQualityConfig && checkTaskQualityConfig) { DARABONBA_PTR_SET_RVALUE(checkTaskQualityConfig_, checkTaskQualityConfig) };


    // codeGuidelinesDetection Field Functions 
    bool hasCodeGuidelinesDetection() const { return this->codeGuidelinesDetection_ != nullptr;};
    void deleteCodeGuidelinesDetection() { this->codeGuidelinesDetection_ = nullptr;};
    inline const Models::ListProtectedBranchesResponseBodyResultTestSettingDTOCodeGuidelinesDetection & codeGuidelinesDetection() const { DARABONBA_PTR_GET_CONST(codeGuidelinesDetection_, Models::ListProtectedBranchesResponseBodyResultTestSettingDTOCodeGuidelinesDetection) };
    inline Models::ListProtectedBranchesResponseBodyResultTestSettingDTOCodeGuidelinesDetection codeGuidelinesDetection() { DARABONBA_PTR_GET(codeGuidelinesDetection_, Models::ListProtectedBranchesResponseBodyResultTestSettingDTOCodeGuidelinesDetection) };
    inline ListProtectedBranchesResponseBodyResultTestSettingDTO& setCodeGuidelinesDetection(const Models::ListProtectedBranchesResponseBodyResultTestSettingDTOCodeGuidelinesDetection & codeGuidelinesDetection) { DARABONBA_PTR_SET_VALUE(codeGuidelinesDetection_, codeGuidelinesDetection) };
    inline ListProtectedBranchesResponseBodyResultTestSettingDTO& setCodeGuidelinesDetection(Models::ListProtectedBranchesResponseBodyResultTestSettingDTOCodeGuidelinesDetection && codeGuidelinesDetection) { DARABONBA_PTR_SET_RVALUE(codeGuidelinesDetection_, codeGuidelinesDetection) };


    // isRequired Field Functions 
    bool hasIsRequired() const { return this->isRequired_ != nullptr;};
    void deleteIsRequired() { this->isRequired_ = nullptr;};
    inline bool isRequired() const { DARABONBA_PTR_GET_DEFAULT(isRequired_, false) };
    inline ListProtectedBranchesResponseBodyResultTestSettingDTO& setIsRequired(bool isRequired) { DARABONBA_PTR_SET_VALUE(isRequired_, isRequired) };


    // sensitiveInfoDetection Field Functions 
    bool hasSensitiveInfoDetection() const { return this->sensitiveInfoDetection_ != nullptr;};
    void deleteSensitiveInfoDetection() { this->sensitiveInfoDetection_ = nullptr;};
    inline const Models::ListProtectedBranchesResponseBodyResultTestSettingDTOSensitiveInfoDetection & sensitiveInfoDetection() const { DARABONBA_PTR_GET_CONST(sensitiveInfoDetection_, Models::ListProtectedBranchesResponseBodyResultTestSettingDTOSensitiveInfoDetection) };
    inline Models::ListProtectedBranchesResponseBodyResultTestSettingDTOSensitiveInfoDetection sensitiveInfoDetection() { DARABONBA_PTR_GET(sensitiveInfoDetection_, Models::ListProtectedBranchesResponseBodyResultTestSettingDTOSensitiveInfoDetection) };
    inline ListProtectedBranchesResponseBodyResultTestSettingDTO& setSensitiveInfoDetection(const Models::ListProtectedBranchesResponseBodyResultTestSettingDTOSensitiveInfoDetection & sensitiveInfoDetection) { DARABONBA_PTR_SET_VALUE(sensitiveInfoDetection_, sensitiveInfoDetection) };
    inline ListProtectedBranchesResponseBodyResultTestSettingDTO& setSensitiveInfoDetection(Models::ListProtectedBranchesResponseBodyResultTestSettingDTOSensitiveInfoDetection && sensitiveInfoDetection) { DARABONBA_PTR_SET_RVALUE(sensitiveInfoDetection_, sensitiveInfoDetection) };


  protected:
    std::shared_ptr<Models::ListProtectedBranchesResponseBodyResultTestSettingDTOCheckConfig> checkConfig_ = nullptr;
    std::shared_ptr<Models::ListProtectedBranchesResponseBodyResultTestSettingDTOCheckTaskQualityConfig> checkTaskQualityConfig_ = nullptr;
    std::shared_ptr<Models::ListProtectedBranchesResponseBodyResultTestSettingDTOCodeGuidelinesDetection> codeGuidelinesDetection_ = nullptr;
    std::shared_ptr<bool> isRequired_ = nullptr;
    std::shared_ptr<Models::ListProtectedBranchesResponseBodyResultTestSettingDTOSensitiveInfoDetection> sensitiveInfoDetection_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
