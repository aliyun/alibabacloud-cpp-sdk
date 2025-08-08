// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SOURCECONFIG_HPP_
#define ALIBABACLOUD_MODELS_SOURCECONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devs20230714
{
namespace Models
{
  class SourceConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SourceConfig& obj) { 
      DARABONBA_PTR_TO_JSON(oss, oss_);
      DARABONBA_PTR_TO_JSON(repository, repository_);
      DARABONBA_PTR_TO_JSON(template, template_);
    };
    friend void from_json(const Darabonba::Json& j, SourceConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(oss, oss_);
      DARABONBA_PTR_FROM_JSON(repository, repository_);
      DARABONBA_PTR_FROM_JSON(template, template_);
    };
    SourceConfig() = default ;
    SourceConfig(const SourceConfig &) = default ;
    SourceConfig(SourceConfig &&) = default ;
    SourceConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SourceConfig() = default ;
    SourceConfig& operator=(const SourceConfig &) = default ;
    SourceConfig& operator=(SourceConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->oss_ != nullptr
        && this->repository_ != nullptr && this->template_ != nullptr; };
    // oss Field Functions 
    bool hasOss() const { return this->oss_ != nullptr;};
    void deleteOss() { this->oss_ = nullptr;};
    inline const OssSourceConfig & oss() const { DARABONBA_PTR_GET_CONST(oss_, OssSourceConfig) };
    inline OssSourceConfig oss() { DARABONBA_PTR_GET(oss_, OssSourceConfig) };
    inline SourceConfig& setOss(const OssSourceConfig & oss) { DARABONBA_PTR_SET_VALUE(oss_, oss) };
    inline SourceConfig& setOss(OssSourceConfig && oss) { DARABONBA_PTR_SET_RVALUE(oss_, oss) };


    // repository Field Functions 
    bool hasRepository() const { return this->repository_ != nullptr;};
    void deleteRepository() { this->repository_ = nullptr;};
    inline const RepositorySourceConfig & repository() const { DARABONBA_PTR_GET_CONST(repository_, RepositorySourceConfig) };
    inline RepositorySourceConfig repository() { DARABONBA_PTR_GET(repository_, RepositorySourceConfig) };
    inline SourceConfig& setRepository(const RepositorySourceConfig & repository) { DARABONBA_PTR_SET_VALUE(repository_, repository) };
    inline SourceConfig& setRepository(RepositorySourceConfig && repository) { DARABONBA_PTR_SET_RVALUE(repository_, repository) };


    // template Field Functions 
    bool hasTemplate() const { return this->template_ != nullptr;};
    void deleteTemplate() { this->template_ = nullptr;};
    inline const TemplateSourceConfig & _template() const { DARABONBA_PTR_GET_CONST(template_, TemplateSourceConfig) };
    inline TemplateSourceConfig _template() { DARABONBA_PTR_GET(template_, TemplateSourceConfig) };
    inline SourceConfig& setTemplate(const TemplateSourceConfig & _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };
    inline SourceConfig& setTemplate(TemplateSourceConfig && _template) { DARABONBA_PTR_SET_RVALUE(template_, _template) };


  protected:
    std::shared_ptr<OssSourceConfig> oss_ = nullptr;
    std::shared_ptr<RepositorySourceConfig> repository_ = nullptr;
    std::shared_ptr<TemplateSourceConfig> template_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devs20230714
#endif
