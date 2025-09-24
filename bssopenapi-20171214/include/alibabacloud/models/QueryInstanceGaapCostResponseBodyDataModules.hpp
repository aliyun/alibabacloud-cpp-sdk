// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYINSTANCEGAAPCOSTRESPONSEBODYDATAMODULES_HPP_
#define ALIBABACLOUD_MODELS_QUERYINSTANCEGAAPCOSTRESPONSEBODYDATAMODULES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryInstanceGaapCostResponseBodyDataModulesModule.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class QueryInstanceGaapCostResponseBodyDataModules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryInstanceGaapCostResponseBodyDataModules& obj) { 
      DARABONBA_PTR_TO_JSON(Module, module_);
    };
    friend void from_json(const Darabonba::Json& j, QueryInstanceGaapCostResponseBodyDataModules& obj) { 
      DARABONBA_PTR_FROM_JSON(Module, module_);
    };
    QueryInstanceGaapCostResponseBodyDataModules() = default ;
    QueryInstanceGaapCostResponseBodyDataModules(const QueryInstanceGaapCostResponseBodyDataModules &) = default ;
    QueryInstanceGaapCostResponseBodyDataModules(QueryInstanceGaapCostResponseBodyDataModules &&) = default ;
    QueryInstanceGaapCostResponseBodyDataModules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryInstanceGaapCostResponseBodyDataModules() = default ;
    QueryInstanceGaapCostResponseBodyDataModules& operator=(const QueryInstanceGaapCostResponseBodyDataModules &) = default ;
    QueryInstanceGaapCostResponseBodyDataModules& operator=(QueryInstanceGaapCostResponseBodyDataModules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->module_ != nullptr; };
    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const vector<Models::QueryInstanceGaapCostResponseBodyDataModulesModule> & module() const { DARABONBA_PTR_GET_CONST(module_, vector<Models::QueryInstanceGaapCostResponseBodyDataModulesModule>) };
    inline vector<Models::QueryInstanceGaapCostResponseBodyDataModulesModule> module() { DARABONBA_PTR_GET(module_, vector<Models::QueryInstanceGaapCostResponseBodyDataModulesModule>) };
    inline QueryInstanceGaapCostResponseBodyDataModules& setModule(const vector<Models::QueryInstanceGaapCostResponseBodyDataModulesModule> & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline QueryInstanceGaapCostResponseBodyDataModules& setModule(vector<Models::QueryInstanceGaapCostResponseBodyDataModulesModule> && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


  protected:
    std::shared_ptr<vector<Models::QueryInstanceGaapCostResponseBodyDataModulesModule>> module_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
