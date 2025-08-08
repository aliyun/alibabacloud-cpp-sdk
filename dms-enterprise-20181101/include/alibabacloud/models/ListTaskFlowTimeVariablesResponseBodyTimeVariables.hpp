// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTASKFLOWTIMEVARIABLESRESPONSEBODYTIMEVARIABLES_HPP_
#define ALIBABACLOUD_MODELS_LISTTASKFLOWTIMEVARIABLESRESPONSEBODYTIMEVARIABLES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListTaskFlowTimeVariablesResponseBodyTimeVariablesTimeVariable.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListTaskFlowTimeVariablesResponseBodyTimeVariables : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTaskFlowTimeVariablesResponseBodyTimeVariables& obj) { 
      DARABONBA_PTR_TO_JSON(TimeVariable, timeVariable_);
    };
    friend void from_json(const Darabonba::Json& j, ListTaskFlowTimeVariablesResponseBodyTimeVariables& obj) { 
      DARABONBA_PTR_FROM_JSON(TimeVariable, timeVariable_);
    };
    ListTaskFlowTimeVariablesResponseBodyTimeVariables() = default ;
    ListTaskFlowTimeVariablesResponseBodyTimeVariables(const ListTaskFlowTimeVariablesResponseBodyTimeVariables &) = default ;
    ListTaskFlowTimeVariablesResponseBodyTimeVariables(ListTaskFlowTimeVariablesResponseBodyTimeVariables &&) = default ;
    ListTaskFlowTimeVariablesResponseBodyTimeVariables(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTaskFlowTimeVariablesResponseBodyTimeVariables() = default ;
    ListTaskFlowTimeVariablesResponseBodyTimeVariables& operator=(const ListTaskFlowTimeVariablesResponseBodyTimeVariables &) = default ;
    ListTaskFlowTimeVariablesResponseBodyTimeVariables& operator=(ListTaskFlowTimeVariablesResponseBodyTimeVariables &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->timeVariable_ != nullptr; };
    // timeVariable Field Functions 
    bool hasTimeVariable() const { return this->timeVariable_ != nullptr;};
    void deleteTimeVariable() { this->timeVariable_ = nullptr;};
    inline const vector<Models::ListTaskFlowTimeVariablesResponseBodyTimeVariablesTimeVariable> & timeVariable() const { DARABONBA_PTR_GET_CONST(timeVariable_, vector<Models::ListTaskFlowTimeVariablesResponseBodyTimeVariablesTimeVariable>) };
    inline vector<Models::ListTaskFlowTimeVariablesResponseBodyTimeVariablesTimeVariable> timeVariable() { DARABONBA_PTR_GET(timeVariable_, vector<Models::ListTaskFlowTimeVariablesResponseBodyTimeVariablesTimeVariable>) };
    inline ListTaskFlowTimeVariablesResponseBodyTimeVariables& setTimeVariable(const vector<Models::ListTaskFlowTimeVariablesResponseBodyTimeVariablesTimeVariable> & timeVariable) { DARABONBA_PTR_SET_VALUE(timeVariable_, timeVariable) };
    inline ListTaskFlowTimeVariablesResponseBodyTimeVariables& setTimeVariable(vector<Models::ListTaskFlowTimeVariablesResponseBodyTimeVariablesTimeVariable> && timeVariable) { DARABONBA_PTR_SET_RVALUE(timeVariable_, timeVariable) };


  protected:
    std::shared_ptr<vector<Models::ListTaskFlowTimeVariablesResponseBodyTimeVariablesTimeVariable>> timeVariable_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
