// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETAUTOMATICFREQUENCYCONTROLCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SETAUTOMATICFREQUENCYCONTROLCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class SetAutomaticFrequencyControlConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetAutomaticFrequencyControlConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ActionType, actionType_);
      DARABONBA_PTR_TO_JSON(Enable, enable_);
      DARABONBA_PTR_TO_JSON(Level, level_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, SetAutomaticFrequencyControlConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ActionType, actionType_);
      DARABONBA_PTR_FROM_JSON(Enable, enable_);
      DARABONBA_PTR_FROM_JSON(Level, level_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    SetAutomaticFrequencyControlConfigResponseBody() = default ;
    SetAutomaticFrequencyControlConfigResponseBody(const SetAutomaticFrequencyControlConfigResponseBody &) = default ;
    SetAutomaticFrequencyControlConfigResponseBody(SetAutomaticFrequencyControlConfigResponseBody &&) = default ;
    SetAutomaticFrequencyControlConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetAutomaticFrequencyControlConfigResponseBody() = default ;
    SetAutomaticFrequencyControlConfigResponseBody& operator=(const SetAutomaticFrequencyControlConfigResponseBody &) = default ;
    SetAutomaticFrequencyControlConfigResponseBody& operator=(SetAutomaticFrequencyControlConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->actionType_ == nullptr
        && this->enable_ == nullptr && this->level_ == nullptr && this->requestId_ == nullptr; };
    // actionType Field Functions 
    bool hasActionType() const { return this->actionType_ != nullptr;};
    void deleteActionType() { this->actionType_ = nullptr;};
    inline string getActionType() const { DARABONBA_PTR_GET_DEFAULT(actionType_, "") };
    inline SetAutomaticFrequencyControlConfigResponseBody& setActionType(string actionType) { DARABONBA_PTR_SET_VALUE(actionType_, actionType) };


    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline string getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, "") };
    inline SetAutomaticFrequencyControlConfigResponseBody& setEnable(string enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // level Field Functions 
    bool hasLevel() const { return this->level_ != nullptr;};
    void deleteLevel() { this->level_ = nullptr;};
    inline string getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
    inline SetAutomaticFrequencyControlConfigResponseBody& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SetAutomaticFrequencyControlConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> actionType_ {};
    shared_ptr<string> enable_ {};
    shared_ptr<string> level_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
