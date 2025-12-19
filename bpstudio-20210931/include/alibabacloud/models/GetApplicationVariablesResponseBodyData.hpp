// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPPLICATIONVARIABLESRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETAPPLICATIONVARIABLESRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetApplicationVariablesResponseBodyDataVariableList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BPStudio20210931
{
namespace Models
{
  class GetApplicationVariablesResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetApplicationVariablesResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(VariableList, variableList_);
    };
    friend void from_json(const Darabonba::Json& j, GetApplicationVariablesResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(VariableList, variableList_);
    };
    GetApplicationVariablesResponseBodyData() = default ;
    GetApplicationVariablesResponseBodyData(const GetApplicationVariablesResponseBodyData &) = default ;
    GetApplicationVariablesResponseBodyData(GetApplicationVariablesResponseBodyData &&) = default ;
    GetApplicationVariablesResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetApplicationVariablesResponseBodyData() = default ;
    GetApplicationVariablesResponseBodyData& operator=(const GetApplicationVariablesResponseBodyData &) = default ;
    GetApplicationVariablesResponseBodyData& operator=(GetApplicationVariablesResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && return this->variableList_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetApplicationVariablesResponseBodyData& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // variableList Field Functions 
    bool hasVariableList() const { return this->variableList_ != nullptr;};
    void deleteVariableList() { this->variableList_ = nullptr;};
    inline const vector<Models::GetApplicationVariablesResponseBodyDataVariableList> & variableList() const { DARABONBA_PTR_GET_CONST(variableList_, vector<Models::GetApplicationVariablesResponseBodyDataVariableList>) };
    inline vector<Models::GetApplicationVariablesResponseBodyDataVariableList> variableList() { DARABONBA_PTR_GET(variableList_, vector<Models::GetApplicationVariablesResponseBodyDataVariableList>) };
    inline GetApplicationVariablesResponseBodyData& setVariableList(const vector<Models::GetApplicationVariablesResponseBodyDataVariableList> & variableList) { DARABONBA_PTR_SET_VALUE(variableList_, variableList) };
    inline GetApplicationVariablesResponseBodyData& setVariableList(vector<Models::GetApplicationVariablesResponseBodyDataVariableList> && variableList) { DARABONBA_PTR_SET_RVALUE(variableList_, variableList) };


  protected:
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<vector<Models::GetApplicationVariablesResponseBodyDataVariableList>> variableList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BPStudio20210931
#endif
