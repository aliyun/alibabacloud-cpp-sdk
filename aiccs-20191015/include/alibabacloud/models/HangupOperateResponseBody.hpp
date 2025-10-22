// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HANGUPOPERATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_HANGUPOPERATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class HangupOperateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HangupOperateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Mesage, mesage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, HangupOperateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Mesage, mesage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    HangupOperateResponseBody() = default ;
    HangupOperateResponseBody(const HangupOperateResponseBody &) = default ;
    HangupOperateResponseBody(HangupOperateResponseBody &&) = default ;
    HangupOperateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HangupOperateResponseBody() = default ;
    HangupOperateResponseBody& operator=(const HangupOperateResponseBody &) = default ;
    HangupOperateResponseBody& operator=(HangupOperateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->mesage_ == nullptr && return this->requestId_ == nullptr && return this->result_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline HangupOperateResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // mesage Field Functions 
    bool hasMesage() const { return this->mesage_ != nullptr;};
    void deleteMesage() { this->mesage_ = nullptr;};
    inline string mesage() const { DARABONBA_PTR_GET_DEFAULT(mesage_, "") };
    inline HangupOperateResponseBody& setMesage(string mesage) { DARABONBA_PTR_SET_VALUE(mesage_, mesage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline HangupOperateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline bool result() const { DARABONBA_PTR_GET_DEFAULT(result_, false) };
    inline HangupOperateResponseBody& setResult(bool result) { DARABONBA_PTR_SET_VALUE(result_, result) };


  protected:
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<string> mesage_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<bool> result_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
