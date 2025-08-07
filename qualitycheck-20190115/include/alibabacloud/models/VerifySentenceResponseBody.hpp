// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VERIFYSENTENCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_VERIFYSENTENCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/VerifySentenceResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class VerifySentenceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const VerifySentenceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(IncorrectWords, incorrectWords_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SourceRole, sourceRole_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TargetRole, targetRole_);
    };
    friend void from_json(const Darabonba::Json& j, VerifySentenceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(IncorrectWords, incorrectWords_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SourceRole, sourceRole_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TargetRole, targetRole_);
    };
    VerifySentenceResponseBody() = default ;
    VerifySentenceResponseBody(const VerifySentenceResponseBody &) = default ;
    VerifySentenceResponseBody(VerifySentenceResponseBody &&) = default ;
    VerifySentenceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~VerifySentenceResponseBody() = default ;
    VerifySentenceResponseBody& operator=(const VerifySentenceResponseBody &) = default ;
    VerifySentenceResponseBody& operator=(VerifySentenceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->data_ != nullptr && this->incorrectWords_ != nullptr && this->message_ != nullptr && this->requestId_ != nullptr && this->sourceRole_ != nullptr
        && this->success_ != nullptr && this->targetRole_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline VerifySentenceResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const VerifySentenceResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, VerifySentenceResponseBodyData) };
    inline VerifySentenceResponseBodyData data() { DARABONBA_PTR_GET(data_, VerifySentenceResponseBodyData) };
    inline VerifySentenceResponseBody& setData(const VerifySentenceResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline VerifySentenceResponseBody& setData(VerifySentenceResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // incorrectWords Field Functions 
    bool hasIncorrectWords() const { return this->incorrectWords_ != nullptr;};
    void deleteIncorrectWords() { this->incorrectWords_ = nullptr;};
    inline int32_t incorrectWords() const { DARABONBA_PTR_GET_DEFAULT(incorrectWords_, 0) };
    inline VerifySentenceResponseBody& setIncorrectWords(int32_t incorrectWords) { DARABONBA_PTR_SET_VALUE(incorrectWords_, incorrectWords) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline VerifySentenceResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline VerifySentenceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sourceRole Field Functions 
    bool hasSourceRole() const { return this->sourceRole_ != nullptr;};
    void deleteSourceRole() { this->sourceRole_ = nullptr;};
    inline int32_t sourceRole() const { DARABONBA_PTR_GET_DEFAULT(sourceRole_, 0) };
    inline VerifySentenceResponseBody& setSourceRole(int32_t sourceRole) { DARABONBA_PTR_SET_VALUE(sourceRole_, sourceRole) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline VerifySentenceResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // targetRole Field Functions 
    bool hasTargetRole() const { return this->targetRole_ != nullptr;};
    void deleteTargetRole() { this->targetRole_ = nullptr;};
    inline int32_t targetRole() const { DARABONBA_PTR_GET_DEFAULT(targetRole_, 0) };
    inline VerifySentenceResponseBody& setTargetRole(int32_t targetRole) { DARABONBA_PTR_SET_VALUE(targetRole_, targetRole) };


  protected:
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<VerifySentenceResponseBodyData> data_ = nullptr;
    std::shared_ptr<int32_t> incorrectWords_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int32_t> sourceRole_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
    std::shared_ptr<int32_t> targetRole_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
