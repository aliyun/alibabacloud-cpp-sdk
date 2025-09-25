// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITCHATQUESTIONRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_SUBMITCHATQUESTIONRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace Models
{
  class SubmitChatQuestionResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitChatQuestionResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(batchId, batchId_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitChatQuestionResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(batchId, batchId_);
    };
    SubmitChatQuestionResponseBodyData() = default ;
    SubmitChatQuestionResponseBodyData(const SubmitChatQuestionResponseBodyData &) = default ;
    SubmitChatQuestionResponseBodyData(SubmitChatQuestionResponseBodyData &&) = default ;
    SubmitChatQuestionResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitChatQuestionResponseBodyData() = default ;
    SubmitChatQuestionResponseBodyData& operator=(const SubmitChatQuestionResponseBodyData &) = default ;
    SubmitChatQuestionResponseBodyData& operator=(SubmitChatQuestionResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->batchId_ != nullptr; };
    // batchId Field Functions 
    bool hasBatchId() const { return this->batchId_ != nullptr;};
    void deleteBatchId() { this->batchId_ = nullptr;};
    inline string batchId() const { DARABONBA_PTR_GET_DEFAULT(batchId_, "") };
    inline SubmitChatQuestionResponseBodyData& setBatchId(string batchId) { DARABONBA_PTR_SET_VALUE(batchId_, batchId) };


  protected:
    std::shared_ptr<string> batchId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
