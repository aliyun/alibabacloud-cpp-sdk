// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DUPLEXDECISIONRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DUPLEXDECISIONRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Avatar20220130
{
namespace Models
{
  class DuplexDecisionResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DuplexDecisionResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ActionType, actionType_);
      DARABONBA_PTR_TO_JSON(GrabType, grabType_);
      DARABONBA_PTR_TO_JSON(OutputText, outputText_);
    };
    friend void from_json(const Darabonba::Json& j, DuplexDecisionResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ActionType, actionType_);
      DARABONBA_PTR_FROM_JSON(GrabType, grabType_);
      DARABONBA_PTR_FROM_JSON(OutputText, outputText_);
    };
    DuplexDecisionResponseBodyData() = default ;
    DuplexDecisionResponseBodyData(const DuplexDecisionResponseBodyData &) = default ;
    DuplexDecisionResponseBodyData(DuplexDecisionResponseBodyData &&) = default ;
    DuplexDecisionResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DuplexDecisionResponseBodyData() = default ;
    DuplexDecisionResponseBodyData& operator=(const DuplexDecisionResponseBodyData &) = default ;
    DuplexDecisionResponseBodyData& operator=(DuplexDecisionResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->actionType_ != nullptr
        && this->grabType_ != nullptr && this->outputText_ != nullptr; };
    // actionType Field Functions 
    bool hasActionType() const { return this->actionType_ != nullptr;};
    void deleteActionType() { this->actionType_ = nullptr;};
    inline string actionType() const { DARABONBA_PTR_GET_DEFAULT(actionType_, "") };
    inline DuplexDecisionResponseBodyData& setActionType(string actionType) { DARABONBA_PTR_SET_VALUE(actionType_, actionType) };


    // grabType Field Functions 
    bool hasGrabType() const { return this->grabType_ != nullptr;};
    void deleteGrabType() { this->grabType_ = nullptr;};
    inline string grabType() const { DARABONBA_PTR_GET_DEFAULT(grabType_, "") };
    inline DuplexDecisionResponseBodyData& setGrabType(string grabType) { DARABONBA_PTR_SET_VALUE(grabType_, grabType) };


    // outputText Field Functions 
    bool hasOutputText() const { return this->outputText_ != nullptr;};
    void deleteOutputText() { this->outputText_ = nullptr;};
    inline string outputText() const { DARABONBA_PTR_GET_DEFAULT(outputText_, "") };
    inline DuplexDecisionResponseBodyData& setOutputText(string outputText) { DARABONBA_PTR_SET_VALUE(outputText_, outputText) };


  protected:
    std::shared_ptr<string> actionType_ = nullptr;
    std::shared_ptr<string> grabType_ = nullptr;
    std::shared_ptr<string> outputText_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Avatar20220130
#endif
