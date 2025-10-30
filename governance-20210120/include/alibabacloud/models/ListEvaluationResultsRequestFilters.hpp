// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEVALUATIONRESULTSREQUESTFILTERS_HPP_
#define ALIBABACLOUD_MODELS_LISTEVALUATIONRESULTSREQUESTFILTERS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Governance20210120
{
namespace Models
{
  class ListEvaluationResultsRequestFilters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEvaluationResultsRequestFilters& obj) { 
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Values, values_);
    };
    friend void from_json(const Darabonba::Json& j, ListEvaluationResultsRequestFilters& obj) { 
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Values, values_);
    };
    ListEvaluationResultsRequestFilters() = default ;
    ListEvaluationResultsRequestFilters(const ListEvaluationResultsRequestFilters &) = default ;
    ListEvaluationResultsRequestFilters(ListEvaluationResultsRequestFilters &&) = default ;
    ListEvaluationResultsRequestFilters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEvaluationResultsRequestFilters() = default ;
    ListEvaluationResultsRequestFilters& operator=(const ListEvaluationResultsRequestFilters &) = default ;
    ListEvaluationResultsRequestFilters& operator=(ListEvaluationResultsRequestFilters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->key_ == nullptr
        && return this->values_ == nullptr; };
    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline ListEvaluationResultsRequestFilters& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // values Field Functions 
    bool hasValues() const { return this->values_ != nullptr;};
    void deleteValues() { this->values_ = nullptr;};
    inline const vector<string> & values() const { DARABONBA_PTR_GET_CONST(values_, vector<string>) };
    inline vector<string> values() { DARABONBA_PTR_GET(values_, vector<string>) };
    inline ListEvaluationResultsRequestFilters& setValues(const vector<string> & values) { DARABONBA_PTR_SET_VALUE(values_, values) };
    inline ListEvaluationResultsRequestFilters& setValues(vector<string> && values) { DARABONBA_PTR_SET_RVALUE(values_, values) };


  protected:
    // The key of the filter condition. Valid values:
    // 
    // *   ResourceId: the resource ID.
    // *   ResourceName: the name of the resource.
    // *   ResourceType: the resource type.
    std::shared_ptr<string> key_ = nullptr;
    // The list of filter condition values.
    std::shared_ptr<vector<string>> values_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Governance20210120
#endif
