// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRESOURCEEXPORTTASKVERSIONSRESPONSEBODYEXPORTTASKSINCLUDERULES_HPP_
#define ALIBABACLOUD_MODELS_LISTRESOURCEEXPORTTASKVERSIONSRESPONSEBODYEXPORTTASKSINCLUDERULES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IaCService20210806
{
namespace Models
{
  class ListResourceExportTaskVersionsResponseBodyExportTasksIncludeRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListResourceExportTaskVersionsResponseBodyExportTasksIncludeRules& obj) { 
      DARABONBA_PTR_TO_JSON(key, key_);
      DARABONBA_PTR_TO_JSON(values, values_);
    };
    friend void from_json(const Darabonba::Json& j, ListResourceExportTaskVersionsResponseBodyExportTasksIncludeRules& obj) { 
      DARABONBA_PTR_FROM_JSON(key, key_);
      DARABONBA_PTR_FROM_JSON(values, values_);
    };
    ListResourceExportTaskVersionsResponseBodyExportTasksIncludeRules() = default ;
    ListResourceExportTaskVersionsResponseBodyExportTasksIncludeRules(const ListResourceExportTaskVersionsResponseBodyExportTasksIncludeRules &) = default ;
    ListResourceExportTaskVersionsResponseBodyExportTasksIncludeRules(ListResourceExportTaskVersionsResponseBodyExportTasksIncludeRules &&) = default ;
    ListResourceExportTaskVersionsResponseBodyExportTasksIncludeRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListResourceExportTaskVersionsResponseBodyExportTasksIncludeRules() = default ;
    ListResourceExportTaskVersionsResponseBodyExportTasksIncludeRules& operator=(const ListResourceExportTaskVersionsResponseBodyExportTasksIncludeRules &) = default ;
    ListResourceExportTaskVersionsResponseBodyExportTasksIncludeRules& operator=(ListResourceExportTaskVersionsResponseBodyExportTasksIncludeRules &&) = default ;
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
    inline ListResourceExportTaskVersionsResponseBodyExportTasksIncludeRules& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // values Field Functions 
    bool hasValues() const { return this->values_ != nullptr;};
    void deleteValues() { this->values_ = nullptr;};
    inline const vector<string> & values() const { DARABONBA_PTR_GET_CONST(values_, vector<string>) };
    inline vector<string> values() { DARABONBA_PTR_GET(values_, vector<string>) };
    inline ListResourceExportTaskVersionsResponseBodyExportTasksIncludeRules& setValues(const vector<string> & values) { DARABONBA_PTR_SET_VALUE(values_, values) };
    inline ListResourceExportTaskVersionsResponseBodyExportTasksIncludeRules& setValues(vector<string> && values) { DARABONBA_PTR_SET_RVALUE(values_, values) };


  protected:
    std::shared_ptr<string> key_ = nullptr;
    std::shared_ptr<vector<string>> values_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IaCService20210806
#endif
