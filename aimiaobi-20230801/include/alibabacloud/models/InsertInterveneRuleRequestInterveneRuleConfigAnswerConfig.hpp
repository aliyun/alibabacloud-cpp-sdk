// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INSERTINTERVENERULEREQUESTINTERVENERULECONFIGANSWERCONFIG_HPP_
#define ALIBABACLOUD_MODELS_INSERTINTERVENERULEREQUESTINTERVENERULECONFIGANSWERCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class InsertInterveneRuleRequestInterveneRuleConfigAnswerConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InsertInterveneRuleRequestInterveneRuleConfigAnswerConfig& obj) { 
      DARABONBA_PTR_TO_JSON(AnswerType, answerType_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
    };
    friend void from_json(const Darabonba::Json& j, InsertInterveneRuleRequestInterveneRuleConfigAnswerConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(AnswerType, answerType_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
    };
    InsertInterveneRuleRequestInterveneRuleConfigAnswerConfig() = default ;
    InsertInterveneRuleRequestInterveneRuleConfigAnswerConfig(const InsertInterveneRuleRequestInterveneRuleConfigAnswerConfig &) = default ;
    InsertInterveneRuleRequestInterveneRuleConfigAnswerConfig(InsertInterveneRuleRequestInterveneRuleConfigAnswerConfig &&) = default ;
    InsertInterveneRuleRequestInterveneRuleConfigAnswerConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InsertInterveneRuleRequestInterveneRuleConfigAnswerConfig() = default ;
    InsertInterveneRuleRequestInterveneRuleConfigAnswerConfig& operator=(const InsertInterveneRuleRequestInterveneRuleConfigAnswerConfig &) = default ;
    InsertInterveneRuleRequestInterveneRuleConfigAnswerConfig& operator=(InsertInterveneRuleRequestInterveneRuleConfigAnswerConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->answerType_ != nullptr
        && this->message_ != nullptr && this->namespace_ != nullptr; };
    // answerType Field Functions 
    bool hasAnswerType() const { return this->answerType_ != nullptr;};
    void deleteAnswerType() { this->answerType_ = nullptr;};
    inline int32_t answerType() const { DARABONBA_PTR_GET_DEFAULT(answerType_, 0) };
    inline InsertInterveneRuleRequestInterveneRuleConfigAnswerConfig& setAnswerType(int32_t answerType) { DARABONBA_PTR_SET_VALUE(answerType_, answerType) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline InsertInterveneRuleRequestInterveneRuleConfigAnswerConfig& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline InsertInterveneRuleRequestInterveneRuleConfigAnswerConfig& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


  protected:
    std::shared_ptr<int32_t> answerType_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<string> namespace_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
