// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESULTRESPONSEBODYDATARESULTINFOHITRESULTHITRESULTCONDITIONSCONDITIONSOPERATORSOPERATORPARAMINTENTMODELCHECKPARM_HPP_
#define ALIBABACLOUD_MODELS_GETRESULTRESPONSEBODYDATARESULTINFOHITRESULTHITRESULTCONDITIONSCONDITIONSOPERATORSOPERATORPARAMINTENTMODELCHECKPARM_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsOperatorsOperatorParamIntentModelCheckParmIntents.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsOperatorsOperatorParamIntentModelCheckParm : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsOperatorsOperatorParamIntentModelCheckParm& obj) { 
      DARABONBA_PTR_TO_JSON(Intents, intents_);
      DARABONBA_PTR_TO_JSON(ModelScene, modelScene_);
    };
    friend void from_json(const Darabonba::Json& j, GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsOperatorsOperatorParamIntentModelCheckParm& obj) { 
      DARABONBA_PTR_FROM_JSON(Intents, intents_);
      DARABONBA_PTR_FROM_JSON(ModelScene, modelScene_);
    };
    GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsOperatorsOperatorParamIntentModelCheckParm() = default ;
    GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsOperatorsOperatorParamIntentModelCheckParm(const GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsOperatorsOperatorParamIntentModelCheckParm &) = default ;
    GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsOperatorsOperatorParamIntentModelCheckParm(GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsOperatorsOperatorParamIntentModelCheckParm &&) = default ;
    GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsOperatorsOperatorParamIntentModelCheckParm(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsOperatorsOperatorParamIntentModelCheckParm() = default ;
    GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsOperatorsOperatorParamIntentModelCheckParm& operator=(const GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsOperatorsOperatorParamIntentModelCheckParm &) = default ;
    GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsOperatorsOperatorParamIntentModelCheckParm& operator=(GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsOperatorsOperatorParamIntentModelCheckParm &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->intents_ != nullptr
        && this->modelScene_ != nullptr; };
    // intents Field Functions 
    bool hasIntents() const { return this->intents_ != nullptr;};
    void deleteIntents() { this->intents_ = nullptr;};
    inline const Models::GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsOperatorsOperatorParamIntentModelCheckParmIntents & intents() const { DARABONBA_PTR_GET_CONST(intents_, Models::GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsOperatorsOperatorParamIntentModelCheckParmIntents) };
    inline Models::GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsOperatorsOperatorParamIntentModelCheckParmIntents intents() { DARABONBA_PTR_GET(intents_, Models::GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsOperatorsOperatorParamIntentModelCheckParmIntents) };
    inline GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsOperatorsOperatorParamIntentModelCheckParm& setIntents(const Models::GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsOperatorsOperatorParamIntentModelCheckParmIntents & intents) { DARABONBA_PTR_SET_VALUE(intents_, intents) };
    inline GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsOperatorsOperatorParamIntentModelCheckParm& setIntents(Models::GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsOperatorsOperatorParamIntentModelCheckParmIntents && intents) { DARABONBA_PTR_SET_RVALUE(intents_, intents) };


    // modelScene Field Functions 
    bool hasModelScene() const { return this->modelScene_ != nullptr;};
    void deleteModelScene() { this->modelScene_ = nullptr;};
    inline string modelScene() const { DARABONBA_PTR_GET_DEFAULT(modelScene_, "") };
    inline GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsOperatorsOperatorParamIntentModelCheckParm& setModelScene(string modelScene) { DARABONBA_PTR_SET_VALUE(modelScene_, modelScene) };


  protected:
    // 引用的意图模型
    std::shared_ptr<Models::GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsOperatorsOperatorParamIntentModelCheckParmIntents> intents_ = nullptr;
    // 模型应用的场景 AGENT:客户场景、CUSTOMER:客服场景 (CUSTOMER: 客户场景, AGENT: 坐席场景)
    std::shared_ptr<string> modelScene_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
