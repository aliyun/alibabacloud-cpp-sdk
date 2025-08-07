// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDRULEV4RESPONSEBODYMESSAGES_HPP_
#define ALIBABACLOUD_MODELS_ADDRULEV4RESPONSEBODYMESSAGES_HPP_
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
  class AddRuleV4ResponseBodyMessages : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddRuleV4ResponseBodyMessages& obj) { 
      DARABONBA_PTR_TO_JSON(Message, message_);
    };
    friend void from_json(const Darabonba::Json& j, AddRuleV4ResponseBodyMessages& obj) { 
      DARABONBA_PTR_FROM_JSON(Message, message_);
    };
    AddRuleV4ResponseBodyMessages() = default ;
    AddRuleV4ResponseBodyMessages(const AddRuleV4ResponseBodyMessages &) = default ;
    AddRuleV4ResponseBodyMessages(AddRuleV4ResponseBodyMessages &&) = default ;
    AddRuleV4ResponseBodyMessages(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddRuleV4ResponseBodyMessages() = default ;
    AddRuleV4ResponseBodyMessages& operator=(const AddRuleV4ResponseBodyMessages &) = default ;
    AddRuleV4ResponseBodyMessages& operator=(AddRuleV4ResponseBodyMessages &&) = default ;
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
    inline AddRuleV4ResponseBodyMessages& setMessage(const vector<string> & message) { DARABONBA_PTR_SET_VALUE(message_, message) };
    inline AddRuleV4ResponseBodyMessages& setMessage(vector<string> && message) { DARABONBA_PTR_SET_RVALUE(message_, message) };


  protected:
    std::shared_ptr<vector<string>> message_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
