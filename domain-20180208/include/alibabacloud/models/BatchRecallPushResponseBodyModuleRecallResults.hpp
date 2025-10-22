// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHRECALLPUSHRESPONSEBODYMODULERECALLRESULTS_HPP_
#define ALIBABACLOUD_MODELS_BATCHRECALLPUSHRESPONSEBODYMODULERECALLRESULTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180208
{
namespace Models
{
  class BatchRecallPushResponseBodyModuleRecallResults : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchRecallPushResponseBodyModuleRecallResults& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(OutBizId, outBizId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, BatchRecallPushResponseBodyModuleRecallResults& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(OutBizId, outBizId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    BatchRecallPushResponseBodyModuleRecallResults() = default ;
    BatchRecallPushResponseBodyModuleRecallResults(const BatchRecallPushResponseBodyModuleRecallResults &) = default ;
    BatchRecallPushResponseBodyModuleRecallResults(BatchRecallPushResponseBodyModuleRecallResults &&) = default ;
    BatchRecallPushResponseBodyModuleRecallResults(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchRecallPushResponseBodyModuleRecallResults() = default ;
    BatchRecallPushResponseBodyModuleRecallResults& operator=(const BatchRecallPushResponseBodyModuleRecallResults &) = default ;
    BatchRecallPushResponseBodyModuleRecallResults& operator=(BatchRecallPushResponseBodyModuleRecallResults &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->message_ == nullptr && return this->outBizId_ == nullptr && return this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline BatchRecallPushResponseBodyModuleRecallResults& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline BatchRecallPushResponseBodyModuleRecallResults& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // outBizId Field Functions 
    bool hasOutBizId() const { return this->outBizId_ != nullptr;};
    void deleteOutBizId() { this->outBizId_ = nullptr;};
    inline string outBizId() const { DARABONBA_PTR_GET_DEFAULT(outBizId_, "") };
    inline BatchRecallPushResponseBodyModuleRecallResults& setOutBizId(string outBizId) { DARABONBA_PTR_SET_VALUE(outBizId_, outBizId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline BatchRecallPushResponseBodyModuleRecallResults& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<string> outBizId_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180208
#endif
