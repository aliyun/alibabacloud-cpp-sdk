// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSUMMARYTASKRESULTRESPONSEBODYDATACHOICES_HPP_
#define ALIBABACLOUD_MODELS_GETSUMMARYTASKRESULTRESPONSEBODYDATACHOICES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetSummaryTaskResultResponseBodyDataChoicesMessage.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace Models
{
  class GetSummaryTaskResultResponseBodyDataChoices : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSummaryTaskResultResponseBodyDataChoices& obj) { 
      DARABONBA_PTR_TO_JSON(finishReason, finishReason_);
      DARABONBA_PTR_TO_JSON(index, index_);
      DARABONBA_PTR_TO_JSON(message, message_);
    };
    friend void from_json(const Darabonba::Json& j, GetSummaryTaskResultResponseBodyDataChoices& obj) { 
      DARABONBA_PTR_FROM_JSON(finishReason, finishReason_);
      DARABONBA_PTR_FROM_JSON(index, index_);
      DARABONBA_PTR_FROM_JSON(message, message_);
    };
    GetSummaryTaskResultResponseBodyDataChoices() = default ;
    GetSummaryTaskResultResponseBodyDataChoices(const GetSummaryTaskResultResponseBodyDataChoices &) = default ;
    GetSummaryTaskResultResponseBodyDataChoices(GetSummaryTaskResultResponseBodyDataChoices &&) = default ;
    GetSummaryTaskResultResponseBodyDataChoices(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSummaryTaskResultResponseBodyDataChoices() = default ;
    GetSummaryTaskResultResponseBodyDataChoices& operator=(const GetSummaryTaskResultResponseBodyDataChoices &) = default ;
    GetSummaryTaskResultResponseBodyDataChoices& operator=(GetSummaryTaskResultResponseBodyDataChoices &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->finishReason_ != nullptr
        && this->index_ != nullptr && this->message_ != nullptr; };
    // finishReason Field Functions 
    bool hasFinishReason() const { return this->finishReason_ != nullptr;};
    void deleteFinishReason() { this->finishReason_ = nullptr;};
    inline string finishReason() const { DARABONBA_PTR_GET_DEFAULT(finishReason_, "") };
    inline GetSummaryTaskResultResponseBodyDataChoices& setFinishReason(string finishReason) { DARABONBA_PTR_SET_VALUE(finishReason_, finishReason) };


    // index Field Functions 
    bool hasIndex() const { return this->index_ != nullptr;};
    void deleteIndex() { this->index_ = nullptr;};
    inline int32_t index() const { DARABONBA_PTR_GET_DEFAULT(index_, 0) };
    inline GetSummaryTaskResultResponseBodyDataChoices& setIndex(int32_t index) { DARABONBA_PTR_SET_VALUE(index_, index) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline const Models::GetSummaryTaskResultResponseBodyDataChoicesMessage & message() const { DARABONBA_PTR_GET_CONST(message_, Models::GetSummaryTaskResultResponseBodyDataChoicesMessage) };
    inline Models::GetSummaryTaskResultResponseBodyDataChoicesMessage message() { DARABONBA_PTR_GET(message_, Models::GetSummaryTaskResultResponseBodyDataChoicesMessage) };
    inline GetSummaryTaskResultResponseBodyDataChoices& setMessage(const Models::GetSummaryTaskResultResponseBodyDataChoicesMessage & message) { DARABONBA_PTR_SET_VALUE(message_, message) };
    inline GetSummaryTaskResultResponseBodyDataChoices& setMessage(Models::GetSummaryTaskResultResponseBodyDataChoicesMessage && message) { DARABONBA_PTR_SET_RVALUE(message_, message) };


  protected:
    std::shared_ptr<string> finishReason_ = nullptr;
    std::shared_ptr<int32_t> index_ = nullptr;
    std::shared_ptr<Models::GetSummaryTaskResultResponseBodyDataChoicesMessage> message_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
