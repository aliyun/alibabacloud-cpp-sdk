// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYAIVOICEAGENTDETAILRESPONSEBODYDATAAIVOICEAGENTMODELCONFIGCUSTOMEXCEPTIONLIST_HPP_
#define ALIBABACLOUD_MODELS_QUERYAIVOICEAGENTDETAILRESPONSEBODYDATAAIVOICEAGENTMODELCONFIGCUSTOMEXCEPTIONLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigCustomExceptionList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigCustomExceptionList& obj) { 
      DARABONBA_PTR_TO_JSON(ExceptionSign, exceptionSign_);
      DARABONBA_PTR_TO_JSON(ExceptionType, exceptionType_);
      DARABONBA_PTR_TO_JSON(Reply, reply_);
      DARABONBA_PTR_TO_JSON(SupportBreak, supportBreak_);
    };
    friend void from_json(const Darabonba::Json& j, QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigCustomExceptionList& obj) { 
      DARABONBA_PTR_FROM_JSON(ExceptionSign, exceptionSign_);
      DARABONBA_PTR_FROM_JSON(ExceptionType, exceptionType_);
      DARABONBA_PTR_FROM_JSON(Reply, reply_);
      DARABONBA_PTR_FROM_JSON(SupportBreak, supportBreak_);
    };
    QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigCustomExceptionList() = default ;
    QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigCustomExceptionList(const QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigCustomExceptionList &) = default ;
    QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigCustomExceptionList(QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigCustomExceptionList &&) = default ;
    QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigCustomExceptionList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigCustomExceptionList() = default ;
    QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigCustomExceptionList& operator=(const QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigCustomExceptionList &) = default ;
    QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigCustomExceptionList& operator=(QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigCustomExceptionList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->exceptionSign_ == nullptr
        && return this->exceptionType_ == nullptr && return this->reply_ == nullptr && return this->supportBreak_ == nullptr; };
    // exceptionSign Field Functions 
    bool hasExceptionSign() const { return this->exceptionSign_ != nullptr;};
    void deleteExceptionSign() { this->exceptionSign_ = nullptr;};
    inline bool exceptionSign() const { DARABONBA_PTR_GET_DEFAULT(exceptionSign_, false) };
    inline QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigCustomExceptionList& setExceptionSign(bool exceptionSign) { DARABONBA_PTR_SET_VALUE(exceptionSign_, exceptionSign) };


    // exceptionType Field Functions 
    bool hasExceptionType() const { return this->exceptionType_ != nullptr;};
    void deleteExceptionType() { this->exceptionType_ = nullptr;};
    inline string exceptionType() const { DARABONBA_PTR_GET_DEFAULT(exceptionType_, "") };
    inline QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigCustomExceptionList& setExceptionType(string exceptionType) { DARABONBA_PTR_SET_VALUE(exceptionType_, exceptionType) };


    // reply Field Functions 
    bool hasReply() const { return this->reply_ != nullptr;};
    void deleteReply() { this->reply_ = nullptr;};
    inline string reply() const { DARABONBA_PTR_GET_DEFAULT(reply_, "") };
    inline QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigCustomExceptionList& setReply(string reply) { DARABONBA_PTR_SET_VALUE(reply_, reply) };


    // supportBreak Field Functions 
    bool hasSupportBreak() const { return this->supportBreak_ != nullptr;};
    void deleteSupportBreak() { this->supportBreak_ = nullptr;};
    inline bool supportBreak() const { DARABONBA_PTR_GET_DEFAULT(supportBreak_, false) };
    inline QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigCustomExceptionList& setSupportBreak(bool supportBreak) { DARABONBA_PTR_SET_VALUE(supportBreak_, supportBreak) };


  protected:
    std::shared_ptr<bool> exceptionSign_ = nullptr;
    std::shared_ptr<string> exceptionType_ = nullptr;
    std::shared_ptr<string> reply_ = nullptr;
    std::shared_ptr<bool> supportBreak_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
