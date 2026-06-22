// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITVERIFYCODERESULTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITVERIFYCODERESULTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cams20200606
{
namespace Models
{
  class SubmitVerifyCodeResultRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitVerifyCodeResultRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MessageId, messageId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(To, to_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitVerifyCodeResultRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MessageId, messageId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(To, to_);
    };
    SubmitVerifyCodeResultRequest() = default ;
    SubmitVerifyCodeResultRequest(const SubmitVerifyCodeResultRequest &) = default ;
    SubmitVerifyCodeResultRequest(SubmitVerifyCodeResultRequest &&) = default ;
    SubmitVerifyCodeResultRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitVerifyCodeResultRequest() = default ;
    SubmitVerifyCodeResultRequest& operator=(const SubmitVerifyCodeResultRequest &) = default ;
    SubmitVerifyCodeResultRequest& operator=(SubmitVerifyCodeResultRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->messageId_ == nullptr
        && this->result_ == nullptr && this->to_ == nullptr; };
    // messageId Field Functions 
    bool hasMessageId() const { return this->messageId_ != nullptr;};
    void deleteMessageId() { this->messageId_ = nullptr;};
    inline string getMessageId() const { DARABONBA_PTR_GET_DEFAULT(messageId_, "") };
    inline SubmitVerifyCodeResultRequest& setMessageId(string messageId) { DARABONBA_PTR_SET_VALUE(messageId_, messageId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline bool getResult() const { DARABONBA_PTR_GET_DEFAULT(result_, false) };
    inline SubmitVerifyCodeResultRequest& setResult(bool result) { DARABONBA_PTR_SET_VALUE(result_, result) };


    // to Field Functions 
    bool hasTo() const { return this->to_ != nullptr;};
    void deleteTo() { this->to_ = nullptr;};
    inline string getTo() const { DARABONBA_PTR_GET_DEFAULT(to_, "") };
    inline SubmitVerifyCodeResultRequest& setTo(string to) { DARABONBA_PTR_SET_VALUE(to_, to) };


  protected:
    // The message ID.
    // 
    // This parameter is required.
    shared_ptr<string> messageId_ {};
    // The verification result.
    // 
    // This parameter is required.
    shared_ptr<bool> result_ {};
    // The recipient number.
    shared_ptr<string> to_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cams20200606
#endif
