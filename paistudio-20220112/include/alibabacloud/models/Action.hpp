// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ACTION_HPP_
#define ALIBABACLOUD_MODELS_ACTION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class Action : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Action& obj) { 
      DARABONBA_PTR_TO_JSON(ActionType, actionType_);
    };
    friend void from_json(const Darabonba::Json& j, Action& obj) { 
      DARABONBA_PTR_FROM_JSON(ActionType, actionType_);
    };
    Action() = default ;
    Action(const Action &) = default ;
    Action(Action &&) = default ;
    Action(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Action() = default ;
    Action& operator=(const Action &) = default ;
    Action& operator=(Action &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->actionType_ == nullptr; };
    // actionType Field Functions 
    bool hasActionType() const { return this->actionType_ != nullptr;};
    void deleteActionType() { this->actionType_ = nullptr;};
    inline string actionType() const { DARABONBA_PTR_GET_DEFAULT(actionType_, "") };
    inline Action& setActionType(string actionType) { DARABONBA_PTR_SET_VALUE(actionType_, actionType) };


  protected:
    std::shared_ptr<string> actionType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
