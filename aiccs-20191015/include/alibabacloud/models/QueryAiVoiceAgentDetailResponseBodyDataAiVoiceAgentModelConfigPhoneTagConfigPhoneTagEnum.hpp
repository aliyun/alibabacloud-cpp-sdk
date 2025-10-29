// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYAIVOICEAGENTDETAILRESPONSEBODYDATAAIVOICEAGENTMODELCONFIGPHONETAGCONFIGPHONETAGENUM_HPP_
#define ALIBABACLOUD_MODELS_QUERYAIVOICEAGENTDETAILRESPONSEBODYDATAAIVOICEAGENTMODELCONFIGPHONETAGCONFIGPHONETAGENUM_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigPhoneTagConfigPhoneTagEnum : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigPhoneTagConfigPhoneTagEnum& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigPhoneTagConfigPhoneTagEnum& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigPhoneTagConfigPhoneTagEnum() = default ;
    QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigPhoneTagConfigPhoneTagEnum(const QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigPhoneTagConfigPhoneTagEnum &) = default ;
    QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigPhoneTagConfigPhoneTagEnum(QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigPhoneTagConfigPhoneTagEnum &&) = default ;
    QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigPhoneTagConfigPhoneTagEnum(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigPhoneTagConfigPhoneTagEnum() = default ;
    QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigPhoneTagConfigPhoneTagEnum& operator=(const QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigPhoneTagConfigPhoneTagEnum &) = default ;
    QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigPhoneTagConfigPhoneTagEnum& operator=(QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigPhoneTagConfigPhoneTagEnum &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->id_ == nullptr && return this->value_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigPhoneTagConfigPhoneTagEnum& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigPhoneTagConfigPhoneTagEnum& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigPhoneTagConfigPhoneTagEnum& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
