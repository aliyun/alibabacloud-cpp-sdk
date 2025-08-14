// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETAIAGENTVOICEPRINTREQUESTINPUT_HPP_
#define ALIBABACLOUD_MODELS_SETAIAGENTVOICEPRINTREQUESTINPUT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SetAIAgentVoiceprintRequestInput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetAIAgentVoiceprintRequestInput& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Format, format_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, SetAIAgentVoiceprintRequestInput& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Format, format_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    SetAIAgentVoiceprintRequestInput() = default ;
    SetAIAgentVoiceprintRequestInput(const SetAIAgentVoiceprintRequestInput &) = default ;
    SetAIAgentVoiceprintRequestInput(SetAIAgentVoiceprintRequestInput &&) = default ;
    SetAIAgentVoiceprintRequestInput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetAIAgentVoiceprintRequestInput() = default ;
    SetAIAgentVoiceprintRequestInput& operator=(const SetAIAgentVoiceprintRequestInput &) = default ;
    SetAIAgentVoiceprintRequestInput& operator=(SetAIAgentVoiceprintRequestInput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->format_ != nullptr && this->type_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline string data() const { DARABONBA_PTR_GET_DEFAULT(data_, "") };
    inline SetAIAgentVoiceprintRequestInput& setData(string data) { DARABONBA_PTR_SET_VALUE(data_, data) };


    // format Field Functions 
    bool hasFormat() const { return this->format_ != nullptr;};
    void deleteFormat() { this->format_ = nullptr;};
    inline string format() const { DARABONBA_PTR_GET_DEFAULT(format_, "") };
    inline SetAIAgentVoiceprintRequestInput& setFormat(string format) { DARABONBA_PTR_SET_VALUE(format_, format) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline SetAIAgentVoiceprintRequestInput& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> data_ = nullptr;
    std::shared_ptr<string> format_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
