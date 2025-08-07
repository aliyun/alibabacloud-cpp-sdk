// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATERULEBYIDRESPONSEBODYMESSAGES_HPP_
#define ALIBABACLOUD_MODELS_UPDATERULEBYIDRESPONSEBODYMESSAGES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class UpdateRuleByIdResponseBodyMessages : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateRuleByIdResponseBodyMessages& obj) { 
      DARABONBA_PTR_TO_JSON(Message, message_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateRuleByIdResponseBodyMessages& obj) { 
      DARABONBA_PTR_FROM_JSON(Message, message_);
    };
    UpdateRuleByIdResponseBodyMessages() = default ;
    UpdateRuleByIdResponseBodyMessages(const UpdateRuleByIdResponseBodyMessages &) = default ;
    UpdateRuleByIdResponseBodyMessages(UpdateRuleByIdResponseBodyMessages &&) = default ;
    UpdateRuleByIdResponseBodyMessages(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateRuleByIdResponseBodyMessages() = default ;
    UpdateRuleByIdResponseBodyMessages& operator=(const UpdateRuleByIdResponseBodyMessages &) = default ;
    UpdateRuleByIdResponseBodyMessages& operator=(UpdateRuleByIdResponseBodyMessages &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->message_ != nullptr; };
    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline const vector<string> & message() const { DARABONBA_PTR_GET_CONST(message_, vector<string>) };
    inline vector<string> message() { DARABONBA_PTR_GET(message_, vector<string>) };
    inline UpdateRuleByIdResponseBodyMessages& setMessage(const vector<string> & message) { DARABONBA_PTR_SET_VALUE(message_, message) };
    inline UpdateRuleByIdResponseBodyMessages& setMessage(vector<string> && message) { DARABONBA_PTR_SET_RVALUE(message_, message) };


  protected:
    std::shared_ptr<vector<string>> message_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
