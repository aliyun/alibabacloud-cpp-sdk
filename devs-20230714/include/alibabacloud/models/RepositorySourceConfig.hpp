// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REPOSITORYSOURCECONFIG_HPP_
#define ALIBABACLOUD_MODELS_REPOSITORYSOURCECONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devs20230714
{
namespace Models
{
  class RepositorySourceConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RepositorySourceConfig& obj) { 
      DARABONBA_PTR_TO_JSON(codeVersion, codeVersion_);
      DARABONBA_PTR_TO_JSON(filter, filter_);
      DARABONBA_PTR_TO_JSON(repositoryName, repositoryName_);
    };
    friend void from_json(const Darabonba::Json& j, RepositorySourceConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(codeVersion, codeVersion_);
      DARABONBA_PTR_FROM_JSON(filter, filter_);
      DARABONBA_PTR_FROM_JSON(repositoryName, repositoryName_);
    };
    RepositorySourceConfig() = default ;
    RepositorySourceConfig(const RepositorySourceConfig &) = default ;
    RepositorySourceConfig(RepositorySourceConfig &&) = default ;
    RepositorySourceConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RepositorySourceConfig() = default ;
    RepositorySourceConfig& operator=(const RepositorySourceConfig &) = default ;
    RepositorySourceConfig& operator=(RepositorySourceConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->codeVersion_ != nullptr
        && this->filter_ != nullptr && this->repositoryName_ != nullptr; };
    // codeVersion Field Functions 
    bool hasCodeVersion() const { return this->codeVersion_ != nullptr;};
    void deleteCodeVersion() { this->codeVersion_ = nullptr;};
    inline const CodeVersionReference & codeVersion() const { DARABONBA_PTR_GET_CONST(codeVersion_, CodeVersionReference) };
    inline CodeVersionReference codeVersion() { DARABONBA_PTR_GET(codeVersion_, CodeVersionReference) };
    inline RepositorySourceConfig& setCodeVersion(const CodeVersionReference & codeVersion) { DARABONBA_PTR_SET_VALUE(codeVersion_, codeVersion) };
    inline RepositorySourceConfig& setCodeVersion(CodeVersionReference && codeVersion) { DARABONBA_PTR_SET_RVALUE(codeVersion_, codeVersion) };


    // filter Field Functions 
    bool hasFilter() const { return this->filter_ != nullptr;};
    void deleteFilter() { this->filter_ = nullptr;};
    inline const EventFilterConfig & filter() const { DARABONBA_PTR_GET_CONST(filter_, EventFilterConfig) };
    inline EventFilterConfig filter() { DARABONBA_PTR_GET(filter_, EventFilterConfig) };
    inline RepositorySourceConfig& setFilter(const EventFilterConfig & filter) { DARABONBA_PTR_SET_VALUE(filter_, filter) };
    inline RepositorySourceConfig& setFilter(EventFilterConfig && filter) { DARABONBA_PTR_SET_RVALUE(filter_, filter) };


    // repositoryName Field Functions 
    bool hasRepositoryName() const { return this->repositoryName_ != nullptr;};
    void deleteRepositoryName() { this->repositoryName_ = nullptr;};
    inline string repositoryName() const { DARABONBA_PTR_GET_DEFAULT(repositoryName_, "") };
    inline RepositorySourceConfig& setRepositoryName(string repositoryName) { DARABONBA_PTR_SET_VALUE(repositoryName_, repositoryName) };


  protected:
    std::shared_ptr<CodeVersionReference> codeVersion_ = nullptr;
    std::shared_ptr<EventFilterConfig> filter_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> repositoryName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devs20230714
#endif
