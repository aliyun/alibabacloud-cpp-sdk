// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPPREQUESTQUERYPROCESSORS_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPPREQUESTQUERYPROCESSORS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class CreateAppRequestQueryProcessors : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAppRequestQueryProcessors& obj) { 
      DARABONBA_PTR_TO_JSON(active, active_);
      DARABONBA_PTR_TO_JSON(category, category_);
      DARABONBA_PTR_TO_JSON(domain, domain_);
      DARABONBA_PTR_TO_JSON(indexes, indexes_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(processors, processors_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAppRequestQueryProcessors& obj) { 
      DARABONBA_PTR_FROM_JSON(active, active_);
      DARABONBA_PTR_FROM_JSON(category, category_);
      DARABONBA_PTR_FROM_JSON(domain, domain_);
      DARABONBA_PTR_FROM_JSON(indexes, indexes_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(processors, processors_);
    };
    CreateAppRequestQueryProcessors() = default ;
    CreateAppRequestQueryProcessors(const CreateAppRequestQueryProcessors &) = default ;
    CreateAppRequestQueryProcessors(CreateAppRequestQueryProcessors &&) = default ;
    CreateAppRequestQueryProcessors(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAppRequestQueryProcessors() = default ;
    CreateAppRequestQueryProcessors& operator=(const CreateAppRequestQueryProcessors &) = default ;
    CreateAppRequestQueryProcessors& operator=(CreateAppRequestQueryProcessors &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->active_ == nullptr
        && return this->category_ == nullptr && return this->domain_ == nullptr && return this->indexes_ == nullptr && return this->name_ == nullptr && return this->processors_ == nullptr; };
    // active Field Functions 
    bool hasActive() const { return this->active_ != nullptr;};
    void deleteActive() { this->active_ = nullptr;};
    inline bool active() const { DARABONBA_PTR_GET_DEFAULT(active_, false) };
    inline CreateAppRequestQueryProcessors& setActive(bool active) { DARABONBA_PTR_SET_VALUE(active_, active) };


    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline CreateAppRequestQueryProcessors& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline CreateAppRequestQueryProcessors& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // indexes Field Functions 
    bool hasIndexes() const { return this->indexes_ != nullptr;};
    void deleteIndexes() { this->indexes_ = nullptr;};
    inline const vector<string> & indexes() const { DARABONBA_PTR_GET_CONST(indexes_, vector<string>) };
    inline vector<string> indexes() { DARABONBA_PTR_GET(indexes_, vector<string>) };
    inline CreateAppRequestQueryProcessors& setIndexes(const vector<string> & indexes) { DARABONBA_PTR_SET_VALUE(indexes_, indexes) };
    inline CreateAppRequestQueryProcessors& setIndexes(vector<string> && indexes) { DARABONBA_PTR_SET_RVALUE(indexes_, indexes) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateAppRequestQueryProcessors& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // processors Field Functions 
    bool hasProcessors() const { return this->processors_ != nullptr;};
    void deleteProcessors() { this->processors_ = nullptr;};
    inline const vector<Darabonba::Json> & processors() const { DARABONBA_PTR_GET_CONST(processors_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> processors() { DARABONBA_PTR_GET(processors_, vector<Darabonba::Json>) };
    inline CreateAppRequestQueryProcessors& setProcessors(const vector<Darabonba::Json> & processors) { DARABONBA_PTR_SET_VALUE(processors_, processors) };
    inline CreateAppRequestQueryProcessors& setProcessors(vector<Darabonba::Json> && processors) { DARABONBA_PTR_SET_RVALUE(processors_, processors) };


  protected:
    // Specifies whether the rule is the default one.
    std::shared_ptr<bool> active_ = nullptr;
    // The industry category.
    std::shared_ptr<string> category_ = nullptr;
    // The industry type. Valid values:
    // 
    // *   GENERAL
    // *   ECOMMERCE
    // *   IT_CONTENT
    std::shared_ptr<string> domain_ = nullptr;
    // The index range.
    std::shared_ptr<vector<string>> indexes_ = nullptr;
    // The rule name.
    std::shared_ptr<string> name_ = nullptr;
    // The features.
    std::shared_ptr<vector<Darabonba::Json>> processors_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
