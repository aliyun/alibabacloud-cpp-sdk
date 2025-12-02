// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCOMPONENTSRESPONSEBODYCOMPONENTSCOMPONENTACTIONS_HPP_
#define ALIBABACLOUD_MODELS_LISTCOMPONENTSRESPONSEBODYCOMPONENTSCOMPONENTACTIONS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListComponentsResponseBodyComponentsComponentActionsInputConfigs.hpp>
#include <alibabacloud/models/ListComponentsResponseBodyComponentsComponentActionsOutputConfigs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sophonsoar20250903
{
namespace Models
{
  class ListComponentsResponseBodyComponentsComponentActions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListComponentsResponseBodyComponentsComponentActions& obj) { 
      DARABONBA_PTR_TO_JSON(ComponentActionDescription, componentActionDescription_);
      DARABONBA_PTR_TO_JSON(ComponentActionName, componentActionName_);
      DARABONBA_PTR_TO_JSON(InputConfigs, inputConfigs_);
      DARABONBA_PTR_TO_JSON(OutputConfigs, outputConfigs_);
    };
    friend void from_json(const Darabonba::Json& j, ListComponentsResponseBodyComponentsComponentActions& obj) { 
      DARABONBA_PTR_FROM_JSON(ComponentActionDescription, componentActionDescription_);
      DARABONBA_PTR_FROM_JSON(ComponentActionName, componentActionName_);
      DARABONBA_PTR_FROM_JSON(InputConfigs, inputConfigs_);
      DARABONBA_PTR_FROM_JSON(OutputConfigs, outputConfigs_);
    };
    ListComponentsResponseBodyComponentsComponentActions() = default ;
    ListComponentsResponseBodyComponentsComponentActions(const ListComponentsResponseBodyComponentsComponentActions &) = default ;
    ListComponentsResponseBodyComponentsComponentActions(ListComponentsResponseBodyComponentsComponentActions &&) = default ;
    ListComponentsResponseBodyComponentsComponentActions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListComponentsResponseBodyComponentsComponentActions() = default ;
    ListComponentsResponseBodyComponentsComponentActions& operator=(const ListComponentsResponseBodyComponentsComponentActions &) = default ;
    ListComponentsResponseBodyComponentsComponentActions& operator=(ListComponentsResponseBodyComponentsComponentActions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->componentActionDescription_ == nullptr
        && return this->componentActionName_ == nullptr && return this->inputConfigs_ == nullptr && return this->outputConfigs_ == nullptr; };
    // componentActionDescription Field Functions 
    bool hasComponentActionDescription() const { return this->componentActionDescription_ != nullptr;};
    void deleteComponentActionDescription() { this->componentActionDescription_ = nullptr;};
    inline string componentActionDescription() const { DARABONBA_PTR_GET_DEFAULT(componentActionDescription_, "") };
    inline ListComponentsResponseBodyComponentsComponentActions& setComponentActionDescription(string componentActionDescription) { DARABONBA_PTR_SET_VALUE(componentActionDescription_, componentActionDescription) };


    // componentActionName Field Functions 
    bool hasComponentActionName() const { return this->componentActionName_ != nullptr;};
    void deleteComponentActionName() { this->componentActionName_ = nullptr;};
    inline string componentActionName() const { DARABONBA_PTR_GET_DEFAULT(componentActionName_, "") };
    inline ListComponentsResponseBodyComponentsComponentActions& setComponentActionName(string componentActionName) { DARABONBA_PTR_SET_VALUE(componentActionName_, componentActionName) };


    // inputConfigs Field Functions 
    bool hasInputConfigs() const { return this->inputConfigs_ != nullptr;};
    void deleteInputConfigs() { this->inputConfigs_ = nullptr;};
    inline const vector<Models::ListComponentsResponseBodyComponentsComponentActionsInputConfigs> & inputConfigs() const { DARABONBA_PTR_GET_CONST(inputConfigs_, vector<Models::ListComponentsResponseBodyComponentsComponentActionsInputConfigs>) };
    inline vector<Models::ListComponentsResponseBodyComponentsComponentActionsInputConfigs> inputConfigs() { DARABONBA_PTR_GET(inputConfigs_, vector<Models::ListComponentsResponseBodyComponentsComponentActionsInputConfigs>) };
    inline ListComponentsResponseBodyComponentsComponentActions& setInputConfigs(const vector<Models::ListComponentsResponseBodyComponentsComponentActionsInputConfigs> & inputConfigs) { DARABONBA_PTR_SET_VALUE(inputConfigs_, inputConfigs) };
    inline ListComponentsResponseBodyComponentsComponentActions& setInputConfigs(vector<Models::ListComponentsResponseBodyComponentsComponentActionsInputConfigs> && inputConfigs) { DARABONBA_PTR_SET_RVALUE(inputConfigs_, inputConfigs) };


    // outputConfigs Field Functions 
    bool hasOutputConfigs() const { return this->outputConfigs_ != nullptr;};
    void deleteOutputConfigs() { this->outputConfigs_ = nullptr;};
    inline const vector<Models::ListComponentsResponseBodyComponentsComponentActionsOutputConfigs> & outputConfigs() const { DARABONBA_PTR_GET_CONST(outputConfigs_, vector<Models::ListComponentsResponseBodyComponentsComponentActionsOutputConfigs>) };
    inline vector<Models::ListComponentsResponseBodyComponentsComponentActionsOutputConfigs> outputConfigs() { DARABONBA_PTR_GET(outputConfigs_, vector<Models::ListComponentsResponseBodyComponentsComponentActionsOutputConfigs>) };
    inline ListComponentsResponseBodyComponentsComponentActions& setOutputConfigs(const vector<Models::ListComponentsResponseBodyComponentsComponentActionsOutputConfigs> & outputConfigs) { DARABONBA_PTR_SET_VALUE(outputConfigs_, outputConfigs) };
    inline ListComponentsResponseBodyComponentsComponentActions& setOutputConfigs(vector<Models::ListComponentsResponseBodyComponentsComponentActionsOutputConfigs> && outputConfigs) { DARABONBA_PTR_SET_RVALUE(outputConfigs_, outputConfigs) };


  protected:
    // The description of the component action name.
    std::shared_ptr<string> componentActionDescription_ = nullptr;
    // The name of the component action.
    std::shared_ptr<string> componentActionName_ = nullptr;
    // Configuration of input parameters for the action.
    std::shared_ptr<vector<Models::ListComponentsResponseBodyComponentsComponentActionsInputConfigs>> inputConfigs_ = nullptr;
    // Action output parameter configuration.
    std::shared_ptr<vector<Models::ListComponentsResponseBodyComponentsComponentActionsOutputConfigs>> outputConfigs_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sophonsoar20250903
#endif
