// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPICKUPWAYBILLPREQUERYRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_CREATEPICKUPWAYBILLPREQUERYRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreatePickUpWaybillPreQueryResponseBodyDataCpTimeSelectList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyplsapi20170525
{
namespace Models
{
  class CreatePickUpWaybillPreQueryResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePickUpWaybillPreQueryResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(CpTimeSelectList, cpTimeSelectList_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMsg, errorMsg_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePickUpWaybillPreQueryResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(CpTimeSelectList, cpTimeSelectList_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMsg, errorMsg_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    CreatePickUpWaybillPreQueryResponseBodyData() = default ;
    CreatePickUpWaybillPreQueryResponseBodyData(const CreatePickUpWaybillPreQueryResponseBodyData &) = default ;
    CreatePickUpWaybillPreQueryResponseBodyData(CreatePickUpWaybillPreQueryResponseBodyData &&) = default ;
    CreatePickUpWaybillPreQueryResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePickUpWaybillPreQueryResponseBodyData() = default ;
    CreatePickUpWaybillPreQueryResponseBodyData& operator=(const CreatePickUpWaybillPreQueryResponseBodyData &) = default ;
    CreatePickUpWaybillPreQueryResponseBodyData& operator=(CreatePickUpWaybillPreQueryResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->cpTimeSelectList_ == nullptr && return this->errorCode_ == nullptr && return this->errorMsg_ == nullptr && return this->message_ == nullptr && return this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CreatePickUpWaybillPreQueryResponseBodyData& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // cpTimeSelectList Field Functions 
    bool hasCpTimeSelectList() const { return this->cpTimeSelectList_ != nullptr;};
    void deleteCpTimeSelectList() { this->cpTimeSelectList_ = nullptr;};
    inline const vector<Models::CreatePickUpWaybillPreQueryResponseBodyDataCpTimeSelectList> & cpTimeSelectList() const { DARABONBA_PTR_GET_CONST(cpTimeSelectList_, vector<Models::CreatePickUpWaybillPreQueryResponseBodyDataCpTimeSelectList>) };
    inline vector<Models::CreatePickUpWaybillPreQueryResponseBodyDataCpTimeSelectList> cpTimeSelectList() { DARABONBA_PTR_GET(cpTimeSelectList_, vector<Models::CreatePickUpWaybillPreQueryResponseBodyDataCpTimeSelectList>) };
    inline CreatePickUpWaybillPreQueryResponseBodyData& setCpTimeSelectList(const vector<Models::CreatePickUpWaybillPreQueryResponseBodyDataCpTimeSelectList> & cpTimeSelectList) { DARABONBA_PTR_SET_VALUE(cpTimeSelectList_, cpTimeSelectList) };
    inline CreatePickUpWaybillPreQueryResponseBodyData& setCpTimeSelectList(vector<Models::CreatePickUpWaybillPreQueryResponseBodyDataCpTimeSelectList> && cpTimeSelectList) { DARABONBA_PTR_SET_RVALUE(cpTimeSelectList_, cpTimeSelectList) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline CreatePickUpWaybillPreQueryResponseBodyData& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMsg Field Functions 
    bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
    void deleteErrorMsg() { this->errorMsg_ = nullptr;};
    inline string errorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
    inline CreatePickUpWaybillPreQueryResponseBodyData& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CreatePickUpWaybillPreQueryResponseBodyData& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline CreatePickUpWaybillPreQueryResponseBodyData& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The response code.
    std::shared_ptr<string> code_ = nullptr;
    // The information about whether the courier company can accept the order.
    std::shared_ptr<vector<Models::CreatePickUpWaybillPreQueryResponseBodyDataCpTimeSelectList>> cpTimeSelectList_ = nullptr;
    // The error code.
    std::shared_ptr<string> errorCode_ = nullptr;
    // The error message.
    std::shared_ptr<string> errorMsg_ = nullptr;
    // The response content.
    std::shared_ptr<string> message_ = nullptr;
    // Indicates whether the request was successful.
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyplsapi20170525
#endif
