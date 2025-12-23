// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEQUERYPROCESSORRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_CREATEQUERYPROCESSORRESPONSEBODYRESULT_HPP_
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
  class CreateQueryProcessorResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateQueryProcessorResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(active, active_);
      DARABONBA_PTR_TO_JSON(created, created_);
      DARABONBA_PTR_TO_JSON(domain, domain_);
      DARABONBA_PTR_TO_JSON(indexes, indexes_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(processors, processors_);
      DARABONBA_PTR_TO_JSON(updated, updated_);
    };
    friend void from_json(const Darabonba::Json& j, CreateQueryProcessorResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(active, active_);
      DARABONBA_PTR_FROM_JSON(created, created_);
      DARABONBA_PTR_FROM_JSON(domain, domain_);
      DARABONBA_PTR_FROM_JSON(indexes, indexes_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(processors, processors_);
      DARABONBA_PTR_FROM_JSON(updated, updated_);
    };
    CreateQueryProcessorResponseBodyResult() = default ;
    CreateQueryProcessorResponseBodyResult(const CreateQueryProcessorResponseBodyResult &) = default ;
    CreateQueryProcessorResponseBodyResult(CreateQueryProcessorResponseBodyResult &&) = default ;
    CreateQueryProcessorResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateQueryProcessorResponseBodyResult() = default ;
    CreateQueryProcessorResponseBodyResult& operator=(const CreateQueryProcessorResponseBodyResult &) = default ;
    CreateQueryProcessorResponseBodyResult& operator=(CreateQueryProcessorResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->active_ == nullptr
        && return this->created_ == nullptr && return this->domain_ == nullptr && return this->indexes_ == nullptr && return this->name_ == nullptr && return this->processors_ == nullptr
        && return this->updated_ == nullptr; };
    // active Field Functions 
    bool hasActive() const { return this->active_ != nullptr;};
    void deleteActive() { this->active_ = nullptr;};
    inline bool active() const { DARABONBA_PTR_GET_DEFAULT(active_, false) };
    inline CreateQueryProcessorResponseBodyResult& setActive(bool active) { DARABONBA_PTR_SET_VALUE(active_, active) };


    // created Field Functions 
    bool hasCreated() const { return this->created_ != nullptr;};
    void deleteCreated() { this->created_ = nullptr;};
    inline int32_t created() const { DARABONBA_PTR_GET_DEFAULT(created_, 0) };
    inline CreateQueryProcessorResponseBodyResult& setCreated(int32_t created) { DARABONBA_PTR_SET_VALUE(created_, created) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline CreateQueryProcessorResponseBodyResult& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // indexes Field Functions 
    bool hasIndexes() const { return this->indexes_ != nullptr;};
    void deleteIndexes() { this->indexes_ = nullptr;};
    inline const vector<string> & indexes() const { DARABONBA_PTR_GET_CONST(indexes_, vector<string>) };
    inline vector<string> indexes() { DARABONBA_PTR_GET(indexes_, vector<string>) };
    inline CreateQueryProcessorResponseBodyResult& setIndexes(const vector<string> & indexes) { DARABONBA_PTR_SET_VALUE(indexes_, indexes) };
    inline CreateQueryProcessorResponseBodyResult& setIndexes(vector<string> && indexes) { DARABONBA_PTR_SET_RVALUE(indexes_, indexes) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateQueryProcessorResponseBodyResult& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // processors Field Functions 
    bool hasProcessors() const { return this->processors_ != nullptr;};
    void deleteProcessors() { this->processors_ = nullptr;};
    inline const vector<Darabonba::Json> & processors() const { DARABONBA_PTR_GET_CONST(processors_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> processors() { DARABONBA_PTR_GET(processors_, vector<Darabonba::Json>) };
    inline CreateQueryProcessorResponseBodyResult& setProcessors(const vector<Darabonba::Json> & processors) { DARABONBA_PTR_SET_VALUE(processors_, processors) };
    inline CreateQueryProcessorResponseBodyResult& setProcessors(vector<Darabonba::Json> && processors) { DARABONBA_PTR_SET_RVALUE(processors_, processors) };


    // updated Field Functions 
    bool hasUpdated() const { return this->updated_ != nullptr;};
    void deleteUpdated() { this->updated_ = nullptr;};
    inline int32_t updated() const { DARABONBA_PTR_GET_DEFAULT(updated_, 0) };
    inline CreateQueryProcessorResponseBodyResult& setUpdated(int32_t updated) { DARABONBA_PTR_SET_VALUE(updated_, updated) };


  protected:
    // Indicates whether the query analysis rule is the default one.
    std::shared_ptr<bool> active_ = nullptr;
    // The time when the query analysis rule was created.
    std::shared_ptr<int32_t> created_ = nullptr;
    // The type of the industry to which the query analysis rule was applied. Valid values:
    // 
    // *   GENERAL: general.
    // *   ECOMMERCE: e-commerce.
    // *   IT_CONTENT: IT content.
    std::shared_ptr<string> domain_ = nullptr;
    // The indexes to which the query analysis rule was applied.
    std::shared_ptr<vector<string>> indexes_ = nullptr;
    // The name of the query analysis rule.
    std::shared_ptr<string> name_ = nullptr;
    // The features that are used in the query analysis rule.
    // 
    // For more information, see [QueryProcessor](https://help.aliyun.com/document_detail/170014.html).
    std::shared_ptr<vector<Darabonba::Json>> processors_ = nullptr;
    // The time when the query analysis rule was last modified.
    std::shared_ptr<int32_t> updated_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
