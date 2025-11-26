// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINTENTIONSRESPONSEBODYDATAINTENTLISTSLOTFEEDBACKFUNCTIONS_HPP_
#define ALIBABACLOUD_MODELS_LISTINTENTIONSRESPONSEBODYDATAINTENTLISTSLOTFEEDBACKFUNCTIONS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListIntentionsResponseBodyDataIntentListSlotFeedbackFunctionsSwitch.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class ListIntentionsResponseBodyDataIntentListSlotFeedbackFunctions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIntentionsResponseBodyDataIntentListSlotFeedbackFunctions& obj) { 
      DARABONBA_PTR_TO_JSON(AliyunFunction, aliyunFunction_);
      DARABONBA_PTR_TO_JSON(AliyunService, aliyunService_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EndPoint, endPoint_);
      DARABONBA_PTR_TO_JSON(Function, function_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_ANY_TO_JSON(Params, params_);
      DARABONBA_PTR_TO_JSON(Switch, switch_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListIntentionsResponseBodyDataIntentListSlotFeedbackFunctions& obj) { 
      DARABONBA_PTR_FROM_JSON(AliyunFunction, aliyunFunction_);
      DARABONBA_PTR_FROM_JSON(AliyunService, aliyunService_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EndPoint, endPoint_);
      DARABONBA_PTR_FROM_JSON(Function, function_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_ANY_FROM_JSON(Params, params_);
      DARABONBA_PTR_FROM_JSON(Switch, switch_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ListIntentionsResponseBodyDataIntentListSlotFeedbackFunctions() = default ;
    ListIntentionsResponseBodyDataIntentListSlotFeedbackFunctions(const ListIntentionsResponseBodyDataIntentListSlotFeedbackFunctions &) = default ;
    ListIntentionsResponseBodyDataIntentListSlotFeedbackFunctions(ListIntentionsResponseBodyDataIntentListSlotFeedbackFunctions &&) = default ;
    ListIntentionsResponseBodyDataIntentListSlotFeedbackFunctions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIntentionsResponseBodyDataIntentListSlotFeedbackFunctions() = default ;
    ListIntentionsResponseBodyDataIntentListSlotFeedbackFunctions& operator=(const ListIntentionsResponseBodyDataIntentListSlotFeedbackFunctions &) = default ;
    ListIntentionsResponseBodyDataIntentListSlotFeedbackFunctions& operator=(ListIntentionsResponseBodyDataIntentListSlotFeedbackFunctions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aliyunFunction_ == nullptr
        && return this->aliyunService_ == nullptr && return this->code_ == nullptr && return this->description_ == nullptr && return this->endPoint_ == nullptr && return this->function_ == nullptr
        && return this->name_ == nullptr && return this->params_ == nullptr && return this->switch_ == nullptr && return this->type_ == nullptr; };
    // aliyunFunction Field Functions 
    bool hasAliyunFunction() const { return this->aliyunFunction_ != nullptr;};
    void deleteAliyunFunction() { this->aliyunFunction_ = nullptr;};
    inline string aliyunFunction() const { DARABONBA_PTR_GET_DEFAULT(aliyunFunction_, "") };
    inline ListIntentionsResponseBodyDataIntentListSlotFeedbackFunctions& setAliyunFunction(string aliyunFunction) { DARABONBA_PTR_SET_VALUE(aliyunFunction_, aliyunFunction) };


    // aliyunService Field Functions 
    bool hasAliyunService() const { return this->aliyunService_ != nullptr;};
    void deleteAliyunService() { this->aliyunService_ = nullptr;};
    inline string aliyunService() const { DARABONBA_PTR_GET_DEFAULT(aliyunService_, "") };
    inline ListIntentionsResponseBodyDataIntentListSlotFeedbackFunctions& setAliyunService(string aliyunService) { DARABONBA_PTR_SET_VALUE(aliyunService_, aliyunService) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListIntentionsResponseBodyDataIntentListSlotFeedbackFunctions& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListIntentionsResponseBodyDataIntentListSlotFeedbackFunctions& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // endPoint Field Functions 
    bool hasEndPoint() const { return this->endPoint_ != nullptr;};
    void deleteEndPoint() { this->endPoint_ = nullptr;};
    inline string endPoint() const { DARABONBA_PTR_GET_DEFAULT(endPoint_, "") };
    inline ListIntentionsResponseBodyDataIntentListSlotFeedbackFunctions& setEndPoint(string endPoint) { DARABONBA_PTR_SET_VALUE(endPoint_, endPoint) };


    // function Field Functions 
    bool hasFunction() const { return this->function_ != nullptr;};
    void deleteFunction() { this->function_ = nullptr;};
    inline string function() const { DARABONBA_PTR_GET_DEFAULT(function_, "") };
    inline ListIntentionsResponseBodyDataIntentListSlotFeedbackFunctions& setFunction(string function) { DARABONBA_PTR_SET_VALUE(function_, function) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListIntentionsResponseBodyDataIntentListSlotFeedbackFunctions& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // params Field Functions 
    bool hasParams() const { return this->params_ != nullptr;};
    void deleteParams() { this->params_ = nullptr;};
    inline     const Darabonba::Json & params() const { DARABONBA_GET(params_) };
    Darabonba::Json & params() { DARABONBA_GET(params_) };
    inline ListIntentionsResponseBodyDataIntentListSlotFeedbackFunctions& setParams(const Darabonba::Json & params) { DARABONBA_SET_VALUE(params_, params) };
    inline ListIntentionsResponseBodyDataIntentListSlotFeedbackFunctions& setParams(Darabonba::Json & params) { DARABONBA_SET_RVALUE(params_, params) };


    // switch Field Functions 
    bool hasSwitch() const { return this->switch_ != nullptr;};
    void deleteSwitch() { this->switch_ = nullptr;};
    inline const vector<Models::ListIntentionsResponseBodyDataIntentListSlotFeedbackFunctionsSwitch> & _switch() const { DARABONBA_PTR_GET_CONST(switch_, vector<Models::ListIntentionsResponseBodyDataIntentListSlotFeedbackFunctionsSwitch>) };
    inline vector<Models::ListIntentionsResponseBodyDataIntentListSlotFeedbackFunctionsSwitch> _switch() { DARABONBA_PTR_GET(switch_, vector<Models::ListIntentionsResponseBodyDataIntentListSlotFeedbackFunctionsSwitch>) };
    inline ListIntentionsResponseBodyDataIntentListSlotFeedbackFunctions& setSwitch(const vector<Models::ListIntentionsResponseBodyDataIntentListSlotFeedbackFunctionsSwitch> & _switch) { DARABONBA_PTR_SET_VALUE(switch_, _switch) };
    inline ListIntentionsResponseBodyDataIntentListSlotFeedbackFunctions& setSwitch(vector<Models::ListIntentionsResponseBodyDataIntentListSlotFeedbackFunctionsSwitch> && _switch) { DARABONBA_PTR_SET_RVALUE(switch_, _switch) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListIntentionsResponseBodyDataIntentListSlotFeedbackFunctions& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> aliyunFunction_ = nullptr;
    std::shared_ptr<string> aliyunService_ = nullptr;
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> endPoint_ = nullptr;
    std::shared_ptr<string> function_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    Darabonba::Json params_ = nullptr;
    std::shared_ptr<vector<Models::ListIntentionsResponseBodyDataIntentListSlotFeedbackFunctionsSwitch>> switch_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
