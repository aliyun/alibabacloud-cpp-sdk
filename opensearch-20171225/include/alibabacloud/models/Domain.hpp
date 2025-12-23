// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DOMAIN_HPP_
#define ALIBABACLOUD_MODELS_DOMAIN_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class Domain : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Domain& obj) { 
      DARABONBA_PTR_TO_JSON(category, category_);
      DARABONBA_PTR_TO_JSON(functions, functions_);
      DARABONBA_PTR_TO_JSON(name, name_);
    };
    friend void from_json(const Darabonba::Json& j, Domain& obj) { 
      DARABONBA_PTR_FROM_JSON(category, category_);
      DARABONBA_PTR_FROM_JSON(functions, functions_);
      DARABONBA_PTR_FROM_JSON(name, name_);
    };
    Domain() = default ;
    Domain(const Domain &) = default ;
    Domain(Domain &&) = default ;
    Domain(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Domain() = default ;
    Domain& operator=(const Domain &) = default ;
    Domain& operator=(Domain &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->category_ == nullptr
        && return this->functions_ == nullptr && return this->name_ == nullptr; };
    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline Domain& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // functions Field Functions 
    bool hasFunctions() const { return this->functions_ != nullptr;};
    void deleteFunctions() { this->functions_ = nullptr;};
    inline const map<string, vector<string>> & functions() const { DARABONBA_PTR_GET_CONST(functions_, map<string, vector<string>>) };
    inline map<string, vector<string>> functions() { DARABONBA_PTR_GET(functions_, map<string, vector<string>>) };
    inline Domain& setFunctions(const map<string, vector<string>> & functions) { DARABONBA_PTR_SET_VALUE(functions_, functions) };
    inline Domain& setFunctions(map<string, vector<string>> && functions) { DARABONBA_PTR_SET_RVALUE(functions_, functions) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline Domain& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    std::shared_ptr<string> category_ = nullptr;
    std::shared_ptr<map<string, vector<string>>> functions_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
