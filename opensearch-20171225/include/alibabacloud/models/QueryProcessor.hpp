// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYPROCESSOR_HPP_
#define ALIBABACLOUD_MODELS_QUERYPROCESSOR_HPP_
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
  class QueryProcessor : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryProcessor& obj) { 
      DARABONBA_PTR_TO_JSON(active, active_);
      DARABONBA_PTR_TO_JSON(category, category_);
      DARABONBA_PTR_TO_JSON(domain, domain_);
      DARABONBA_PTR_TO_JSON(indexes, indexes_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(processors, processors_);
    };
    friend void from_json(const Darabonba::Json& j, QueryProcessor& obj) { 
      DARABONBA_PTR_FROM_JSON(active, active_);
      DARABONBA_PTR_FROM_JSON(category, category_);
      DARABONBA_PTR_FROM_JSON(domain, domain_);
      DARABONBA_PTR_FROM_JSON(indexes, indexes_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(processors, processors_);
    };
    QueryProcessor() = default ;
    QueryProcessor(const QueryProcessor &) = default ;
    QueryProcessor(QueryProcessor &&) = default ;
    QueryProcessor(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryProcessor() = default ;
    QueryProcessor& operator=(const QueryProcessor &) = default ;
    QueryProcessor& operator=(QueryProcessor &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->active_ == nullptr
        && this->category_ == nullptr && this->domain_ == nullptr && this->indexes_ == nullptr && this->name_ == nullptr && this->processors_ == nullptr; };
    // active Field Functions 
    bool hasActive() const { return this->active_ != nullptr;};
    void deleteActive() { this->active_ = nullptr;};
    inline bool getActive() const { DARABONBA_PTR_GET_DEFAULT(active_, false) };
    inline QueryProcessor& setActive(bool active) { DARABONBA_PTR_SET_VALUE(active_, active) };


    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline QueryProcessor& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline QueryProcessor& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // indexes Field Functions 
    bool hasIndexes() const { return this->indexes_ != nullptr;};
    void deleteIndexes() { this->indexes_ = nullptr;};
    inline const vector<string> & getIndexes() const { DARABONBA_PTR_GET_CONST(indexes_, vector<string>) };
    inline vector<string> getIndexes() { DARABONBA_PTR_GET(indexes_, vector<string>) };
    inline QueryProcessor& setIndexes(const vector<string> & indexes) { DARABONBA_PTR_SET_VALUE(indexes_, indexes) };
    inline QueryProcessor& setIndexes(vector<string> && indexes) { DARABONBA_PTR_SET_RVALUE(indexes_, indexes) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline QueryProcessor& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // processors Field Functions 
    bool hasProcessors() const { return this->processors_ != nullptr;};
    void deleteProcessors() { this->processors_ = nullptr;};
    inline const vector<Darabonba::Json> & getProcessors() const { DARABONBA_PTR_GET_CONST(processors_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> getProcessors() { DARABONBA_PTR_GET(processors_, vector<Darabonba::Json>) };
    inline QueryProcessor& setProcessors(const vector<Darabonba::Json> & processors) { DARABONBA_PTR_SET_VALUE(processors_, processors) };
    inline QueryProcessor& setProcessors(vector<Darabonba::Json> && processors) { DARABONBA_PTR_SET_RVALUE(processors_, processors) };


  protected:
    shared_ptr<bool> active_ {};
    shared_ptr<string> category_ {};
    shared_ptr<string> domain_ {};
    shared_ptr<vector<string>> indexes_ {};
    shared_ptr<string> name_ {};
    shared_ptr<vector<Darabonba::Json>> processors_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
