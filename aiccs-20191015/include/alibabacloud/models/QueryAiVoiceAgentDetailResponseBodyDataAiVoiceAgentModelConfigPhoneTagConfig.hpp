// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYAIVOICEAGENTDETAILRESPONSEBODYDATAAIVOICEAGENTMODELCONFIGPHONETAGCONFIG_HPP_
#define ALIBABACLOUD_MODELS_QUERYAIVOICEAGENTDETAILRESPONSEBODYDATAAIVOICEAGENTMODELCONFIGPHONETAGCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigPhoneTagConfigPhoneTagEnum.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigPhoneTagConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigPhoneTagConfig& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(PhoneTagDescription, phoneTagDescription_);
      DARABONBA_PTR_TO_JSON(PhoneTagEnum, phoneTagEnum_);
      DARABONBA_PTR_TO_JSON(PhoneTagKey, phoneTagKey_);
      DARABONBA_PTR_TO_JSON(PhoneTagName, phoneTagName_);
      DARABONBA_PTR_TO_JSON(PhoneTagRequired, phoneTagRequired_);
      DARABONBA_PTR_TO_JSON(PhoneTagType, phoneTagType_);
    };
    friend void from_json(const Darabonba::Json& j, QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigPhoneTagConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(PhoneTagDescription, phoneTagDescription_);
      DARABONBA_PTR_FROM_JSON(PhoneTagEnum, phoneTagEnum_);
      DARABONBA_PTR_FROM_JSON(PhoneTagKey, phoneTagKey_);
      DARABONBA_PTR_FROM_JSON(PhoneTagName, phoneTagName_);
      DARABONBA_PTR_FROM_JSON(PhoneTagRequired, phoneTagRequired_);
      DARABONBA_PTR_FROM_JSON(PhoneTagType, phoneTagType_);
    };
    QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigPhoneTagConfig() = default ;
    QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigPhoneTagConfig(const QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigPhoneTagConfig &) = default ;
    QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigPhoneTagConfig(QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigPhoneTagConfig &&) = default ;
    QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigPhoneTagConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigPhoneTagConfig() = default ;
    QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigPhoneTagConfig& operator=(const QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigPhoneTagConfig &) = default ;
    QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigPhoneTagConfig& operator=(QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigPhoneTagConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr
        && return this->phoneTagDescription_ == nullptr && return this->phoneTagEnum_ == nullptr && return this->phoneTagKey_ == nullptr && return this->phoneTagName_ == nullptr && return this->phoneTagRequired_ == nullptr
        && return this->phoneTagType_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigPhoneTagConfig& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // phoneTagDescription Field Functions 
    bool hasPhoneTagDescription() const { return this->phoneTagDescription_ != nullptr;};
    void deletePhoneTagDescription() { this->phoneTagDescription_ = nullptr;};
    inline string phoneTagDescription() const { DARABONBA_PTR_GET_DEFAULT(phoneTagDescription_, "") };
    inline QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigPhoneTagConfig& setPhoneTagDescription(string phoneTagDescription) { DARABONBA_PTR_SET_VALUE(phoneTagDescription_, phoneTagDescription) };


    // phoneTagEnum Field Functions 
    bool hasPhoneTagEnum() const { return this->phoneTagEnum_ != nullptr;};
    void deletePhoneTagEnum() { this->phoneTagEnum_ = nullptr;};
    inline const vector<Models::QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigPhoneTagConfigPhoneTagEnum> & phoneTagEnum() const { DARABONBA_PTR_GET_CONST(phoneTagEnum_, vector<Models::QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigPhoneTagConfigPhoneTagEnum>) };
    inline vector<Models::QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigPhoneTagConfigPhoneTagEnum> phoneTagEnum() { DARABONBA_PTR_GET(phoneTagEnum_, vector<Models::QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigPhoneTagConfigPhoneTagEnum>) };
    inline QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigPhoneTagConfig& setPhoneTagEnum(const vector<Models::QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigPhoneTagConfigPhoneTagEnum> & phoneTagEnum) { DARABONBA_PTR_SET_VALUE(phoneTagEnum_, phoneTagEnum) };
    inline QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigPhoneTagConfig& setPhoneTagEnum(vector<Models::QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigPhoneTagConfigPhoneTagEnum> && phoneTagEnum) { DARABONBA_PTR_SET_RVALUE(phoneTagEnum_, phoneTagEnum) };


    // phoneTagKey Field Functions 
    bool hasPhoneTagKey() const { return this->phoneTagKey_ != nullptr;};
    void deletePhoneTagKey() { this->phoneTagKey_ = nullptr;};
    inline string phoneTagKey() const { DARABONBA_PTR_GET_DEFAULT(phoneTagKey_, "") };
    inline QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigPhoneTagConfig& setPhoneTagKey(string phoneTagKey) { DARABONBA_PTR_SET_VALUE(phoneTagKey_, phoneTagKey) };


    // phoneTagName Field Functions 
    bool hasPhoneTagName() const { return this->phoneTagName_ != nullptr;};
    void deletePhoneTagName() { this->phoneTagName_ = nullptr;};
    inline string phoneTagName() const { DARABONBA_PTR_GET_DEFAULT(phoneTagName_, "") };
    inline QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigPhoneTagConfig& setPhoneTagName(string phoneTagName) { DARABONBA_PTR_SET_VALUE(phoneTagName_, phoneTagName) };


    // phoneTagRequired Field Functions 
    bool hasPhoneTagRequired() const { return this->phoneTagRequired_ != nullptr;};
    void deletePhoneTagRequired() { this->phoneTagRequired_ = nullptr;};
    inline bool phoneTagRequired() const { DARABONBA_PTR_GET_DEFAULT(phoneTagRequired_, false) };
    inline QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigPhoneTagConfig& setPhoneTagRequired(bool phoneTagRequired) { DARABONBA_PTR_SET_VALUE(phoneTagRequired_, phoneTagRequired) };


    // phoneTagType Field Functions 
    bool hasPhoneTagType() const { return this->phoneTagType_ != nullptr;};
    void deletePhoneTagType() { this->phoneTagType_ = nullptr;};
    inline string phoneTagType() const { DARABONBA_PTR_GET_DEFAULT(phoneTagType_, "") };
    inline QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigPhoneTagConfig& setPhoneTagType(string phoneTagType) { DARABONBA_PTR_SET_VALUE(phoneTagType_, phoneTagType) };


  protected:
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<string> phoneTagDescription_ = nullptr;
    std::shared_ptr<vector<Models::QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigPhoneTagConfigPhoneTagEnum>> phoneTagEnum_ = nullptr;
    std::shared_ptr<string> phoneTagKey_ = nullptr;
    std::shared_ptr<string> phoneTagName_ = nullptr;
    std::shared_ptr<bool> phoneTagRequired_ = nullptr;
    std::shared_ptr<string> phoneTagType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
