// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKCOPYRULEVARIABLERESPONSEBODYRESULTOBJECT_HPP_
#define ALIBABACLOUD_MODELS_CHECKCOPYRULEVARIABLERESPONSEBODYRESULTOBJECT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CheckCopyRuleVariableResponseBodyResultObjectMessage.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class CheckCopyRuleVariableResponseBodyResultObject : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckCopyRuleVariableResponseBodyResultObject& obj) { 
      DARABONBA_PTR_TO_JSON(Message, message_);
    };
    friend void from_json(const Darabonba::Json& j, CheckCopyRuleVariableResponseBodyResultObject& obj) { 
      DARABONBA_PTR_FROM_JSON(Message, message_);
    };
    CheckCopyRuleVariableResponseBodyResultObject() = default ;
    CheckCopyRuleVariableResponseBodyResultObject(const CheckCopyRuleVariableResponseBodyResultObject &) = default ;
    CheckCopyRuleVariableResponseBodyResultObject(CheckCopyRuleVariableResponseBodyResultObject &&) = default ;
    CheckCopyRuleVariableResponseBodyResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckCopyRuleVariableResponseBodyResultObject() = default ;
    CheckCopyRuleVariableResponseBodyResultObject& operator=(const CheckCopyRuleVariableResponseBodyResultObject &) = default ;
    CheckCopyRuleVariableResponseBodyResultObject& operator=(CheckCopyRuleVariableResponseBodyResultObject &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->message_ != nullptr; };
    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline const vector<Models::CheckCopyRuleVariableResponseBodyResultObjectMessage> & message() const { DARABONBA_PTR_GET_CONST(message_, vector<Models::CheckCopyRuleVariableResponseBodyResultObjectMessage>) };
    inline vector<Models::CheckCopyRuleVariableResponseBodyResultObjectMessage> message() { DARABONBA_PTR_GET(message_, vector<Models::CheckCopyRuleVariableResponseBodyResultObjectMessage>) };
    inline CheckCopyRuleVariableResponseBodyResultObject& setMessage(const vector<Models::CheckCopyRuleVariableResponseBodyResultObjectMessage> & message) { DARABONBA_PTR_SET_VALUE(message_, message) };
    inline CheckCopyRuleVariableResponseBodyResultObject& setMessage(vector<Models::CheckCopyRuleVariableResponseBodyResultObjectMessage> && message) { DARABONBA_PTR_SET_RVALUE(message_, message) };


  protected:
    // Information.
    std::shared_ptr<vector<Models::CheckCopyRuleVariableResponseBodyResultObjectMessage>> message_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
