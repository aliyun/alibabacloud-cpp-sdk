// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTEMPLATESREQUESTFILTERS_HPP_
#define ALIBABACLOUD_MODELS_LISTTEMPLATESREQUESTFILTERS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class ListTemplatesRequestFilters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTemplatesRequestFilters& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Values, values_);
    };
    friend void from_json(const Darabonba::Json& j, ListTemplatesRequestFilters& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Values, values_);
    };
    ListTemplatesRequestFilters() = default ;
    ListTemplatesRequestFilters(const ListTemplatesRequestFilters &) = default ;
    ListTemplatesRequestFilters(ListTemplatesRequestFilters &&) = default ;
    ListTemplatesRequestFilters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTemplatesRequestFilters() = default ;
    ListTemplatesRequestFilters& operator=(const ListTemplatesRequestFilters &) = default ;
    ListTemplatesRequestFilters& operator=(ListTemplatesRequestFilters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->name_ != nullptr
        && this->values_ != nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListTemplatesRequestFilters& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // values Field Functions 
    bool hasValues() const { return this->values_ != nullptr;};
    void deleteValues() { this->values_ = nullptr;};
    inline const vector<string> & values() const { DARABONBA_PTR_GET_CONST(values_, vector<string>) };
    inline vector<string> values() { DARABONBA_PTR_GET(values_, vector<string>) };
    inline ListTemplatesRequestFilters& setValues(const vector<string> & values) { DARABONBA_PTR_SET_VALUE(values_, values) };
    inline ListTemplatesRequestFilters& setValues(vector<string> && values) { DARABONBA_PTR_SET_RVALUE(values_, values) };


  protected:
    // The name of the filter. You can choose one or more names for the query. Value range:  
    // 
    // - Categories: Template categories  
    // - DeployTypes: Deployment types  
    // - ApplicationScenes: Application scenarios  
    // - BasicServices: Basic services  
    // - ResourceTypes: Resource types  
    // - TemplateNames: Template names
    std::shared_ptr<string> name_ = nullptr;
    // The list of filter values.
    std::shared_ptr<vector<string>> values_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
