// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TEMPLATESPECSOURCE_HPP_
#define ALIBABACLOUD_MODELS_TEMPLATESPECSOURCE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devs20230714
{
namespace Models
{
  class TemplateSpecSource : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TemplateSpecSource& obj) { 
      DARABONBA_PTR_TO_JSON(repository, repository_);
    };
    friend void from_json(const Darabonba::Json& j, TemplateSpecSource& obj) { 
      DARABONBA_PTR_FROM_JSON(repository, repository_);
    };
    TemplateSpecSource() = default ;
    TemplateSpecSource(const TemplateSpecSource &) = default ;
    TemplateSpecSource(TemplateSpecSource &&) = default ;
    TemplateSpecSource(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TemplateSpecSource() = default ;
    TemplateSpecSource& operator=(const TemplateSpecSource &) = default ;
    TemplateSpecSource& operator=(TemplateSpecSource &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->repository_ != nullptr; };
    // repository Field Functions 
    bool hasRepository() const { return this->repository_ != nullptr;};
    void deleteRepository() { this->repository_ = nullptr;};
    inline const Models::RepositorySourceConfig & repository() const { DARABONBA_PTR_GET_CONST(repository_, Models::RepositorySourceConfig) };
    inline Models::RepositorySourceConfig repository() { DARABONBA_PTR_GET(repository_, Models::RepositorySourceConfig) };
    inline TemplateSpecSource& setRepository(const Models::RepositorySourceConfig & repository) { DARABONBA_PTR_SET_VALUE(repository_, repository) };
    inline TemplateSpecSource& setRepository(Models::RepositorySourceConfig && repository) { DARABONBA_PTR_SET_RVALUE(repository_, repository) };


  protected:
    std::shared_ptr<Models::RepositorySourceConfig> repository_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devs20230714
#endif
