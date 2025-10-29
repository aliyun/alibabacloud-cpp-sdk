// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATAQUALITYRULETEMPLATESRESPONSEBODYPAGINGINFODATAQUALITYRULETEMPLATES_HPP_
#define ALIBABACLOUD_MODELS_LISTDATAQUALITYRULETEMPLATESRESPONSEBODYPAGINGINFODATAQUALITYRULETEMPLATES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListDataQualityRuleTemplatesResponseBodyPagingInfoDataQualityRuleTemplatesCheckingConfig.hpp>
#include <alibabacloud/models/ListDataQualityRuleTemplatesResponseBodyPagingInfoDataQualityRuleTemplatesSamplingConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListDataQualityRuleTemplatesResponseBodyPagingInfoDataQualityRuleTemplates : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataQualityRuleTemplatesResponseBodyPagingInfoDataQualityRuleTemplates& obj) { 
      DARABONBA_PTR_TO_JSON(CheckingConfig, checkingConfig_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(DirectoryPath, directoryPath_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(SamplingConfig, samplingConfig_);
      DARABONBA_PTR_TO_JSON(VisibleScope, visibleScope_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataQualityRuleTemplatesResponseBodyPagingInfoDataQualityRuleTemplates& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckingConfig, checkingConfig_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(DirectoryPath, directoryPath_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(SamplingConfig, samplingConfig_);
      DARABONBA_PTR_FROM_JSON(VisibleScope, visibleScope_);
    };
    ListDataQualityRuleTemplatesResponseBodyPagingInfoDataQualityRuleTemplates() = default ;
    ListDataQualityRuleTemplatesResponseBodyPagingInfoDataQualityRuleTemplates(const ListDataQualityRuleTemplatesResponseBodyPagingInfoDataQualityRuleTemplates &) = default ;
    ListDataQualityRuleTemplatesResponseBodyPagingInfoDataQualityRuleTemplates(ListDataQualityRuleTemplatesResponseBodyPagingInfoDataQualityRuleTemplates &&) = default ;
    ListDataQualityRuleTemplatesResponseBodyPagingInfoDataQualityRuleTemplates(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataQualityRuleTemplatesResponseBodyPagingInfoDataQualityRuleTemplates() = default ;
    ListDataQualityRuleTemplatesResponseBodyPagingInfoDataQualityRuleTemplates& operator=(const ListDataQualityRuleTemplatesResponseBodyPagingInfoDataQualityRuleTemplates &) = default ;
    ListDataQualityRuleTemplatesResponseBodyPagingInfoDataQualityRuleTemplates& operator=(ListDataQualityRuleTemplatesResponseBodyPagingInfoDataQualityRuleTemplates &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->checkingConfig_ == nullptr
        && return this->code_ == nullptr && return this->directoryPath_ == nullptr && return this->name_ == nullptr && return this->projectId_ == nullptr && return this->samplingConfig_ == nullptr
        && return this->visibleScope_ == nullptr; };
    // checkingConfig Field Functions 
    bool hasCheckingConfig() const { return this->checkingConfig_ != nullptr;};
    void deleteCheckingConfig() { this->checkingConfig_ = nullptr;};
    inline const Models::ListDataQualityRuleTemplatesResponseBodyPagingInfoDataQualityRuleTemplatesCheckingConfig & checkingConfig() const { DARABONBA_PTR_GET_CONST(checkingConfig_, Models::ListDataQualityRuleTemplatesResponseBodyPagingInfoDataQualityRuleTemplatesCheckingConfig) };
    inline Models::ListDataQualityRuleTemplatesResponseBodyPagingInfoDataQualityRuleTemplatesCheckingConfig checkingConfig() { DARABONBA_PTR_GET(checkingConfig_, Models::ListDataQualityRuleTemplatesResponseBodyPagingInfoDataQualityRuleTemplatesCheckingConfig) };
    inline ListDataQualityRuleTemplatesResponseBodyPagingInfoDataQualityRuleTemplates& setCheckingConfig(const Models::ListDataQualityRuleTemplatesResponseBodyPagingInfoDataQualityRuleTemplatesCheckingConfig & checkingConfig) { DARABONBA_PTR_SET_VALUE(checkingConfig_, checkingConfig) };
    inline ListDataQualityRuleTemplatesResponseBodyPagingInfoDataQualityRuleTemplates& setCheckingConfig(Models::ListDataQualityRuleTemplatesResponseBodyPagingInfoDataQualityRuleTemplatesCheckingConfig && checkingConfig) { DARABONBA_PTR_SET_RVALUE(checkingConfig_, checkingConfig) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListDataQualityRuleTemplatesResponseBodyPagingInfoDataQualityRuleTemplates& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // directoryPath Field Functions 
    bool hasDirectoryPath() const { return this->directoryPath_ != nullptr;};
    void deleteDirectoryPath() { this->directoryPath_ = nullptr;};
    inline string directoryPath() const { DARABONBA_PTR_GET_DEFAULT(directoryPath_, "") };
    inline ListDataQualityRuleTemplatesResponseBodyPagingInfoDataQualityRuleTemplates& setDirectoryPath(string directoryPath) { DARABONBA_PTR_SET_VALUE(directoryPath_, directoryPath) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListDataQualityRuleTemplatesResponseBodyPagingInfoDataQualityRuleTemplates& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline ListDataQualityRuleTemplatesResponseBodyPagingInfoDataQualityRuleTemplates& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // samplingConfig Field Functions 
    bool hasSamplingConfig() const { return this->samplingConfig_ != nullptr;};
    void deleteSamplingConfig() { this->samplingConfig_ = nullptr;};
    inline const Models::ListDataQualityRuleTemplatesResponseBodyPagingInfoDataQualityRuleTemplatesSamplingConfig & samplingConfig() const { DARABONBA_PTR_GET_CONST(samplingConfig_, Models::ListDataQualityRuleTemplatesResponseBodyPagingInfoDataQualityRuleTemplatesSamplingConfig) };
    inline Models::ListDataQualityRuleTemplatesResponseBodyPagingInfoDataQualityRuleTemplatesSamplingConfig samplingConfig() { DARABONBA_PTR_GET(samplingConfig_, Models::ListDataQualityRuleTemplatesResponseBodyPagingInfoDataQualityRuleTemplatesSamplingConfig) };
    inline ListDataQualityRuleTemplatesResponseBodyPagingInfoDataQualityRuleTemplates& setSamplingConfig(const Models::ListDataQualityRuleTemplatesResponseBodyPagingInfoDataQualityRuleTemplatesSamplingConfig & samplingConfig) { DARABONBA_PTR_SET_VALUE(samplingConfig_, samplingConfig) };
    inline ListDataQualityRuleTemplatesResponseBodyPagingInfoDataQualityRuleTemplates& setSamplingConfig(Models::ListDataQualityRuleTemplatesResponseBodyPagingInfoDataQualityRuleTemplatesSamplingConfig && samplingConfig) { DARABONBA_PTR_SET_RVALUE(samplingConfig_, samplingConfig) };


    // visibleScope Field Functions 
    bool hasVisibleScope() const { return this->visibleScope_ != nullptr;};
    void deleteVisibleScope() { this->visibleScope_ = nullptr;};
    inline string visibleScope() const { DARABONBA_PTR_GET_DEFAULT(visibleScope_, "") };
    inline ListDataQualityRuleTemplatesResponseBodyPagingInfoDataQualityRuleTemplates& setVisibleScope(string visibleScope) { DARABONBA_PTR_SET_VALUE(visibleScope_, visibleScope) };


  protected:
    // Sample verification settings
    std::shared_ptr<Models::ListDataQualityRuleTemplatesResponseBodyPagingInfoDataQualityRuleTemplatesCheckingConfig> checkingConfig_ = nullptr;
    // Rule template Code
    std::shared_ptr<string> code_ = nullptr;
    // The directory in which the template is stored. Slashes (/) are used to separate directory levels. The name of each directory level can be up to 1,024 characters in length. It cannot contain whitespace characters or slashes (/).
    std::shared_ptr<string> directoryPath_ = nullptr;
    // The name of the template. The name can be up to 512 characters in length and can contain digits, letters, and punctuation marks.
    std::shared_ptr<string> name_ = nullptr;
    // DataWorks workspace ID
    std::shared_ptr<int64_t> projectId_ = nullptr;
    // Settings required for sample collection
    std::shared_ptr<Models::ListDataQualityRuleTemplatesResponseBodyPagingInfoDataQualityRuleTemplatesSamplingConfig> samplingConfig_ = nullptr;
    // Available range of templates:
    // - Tenant: all tenants are available
    // - Project: only available in the current Project
    std::shared_ptr<string> visibleScope_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
