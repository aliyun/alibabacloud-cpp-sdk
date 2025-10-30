// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPICKUPWAYBILLRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_CREATEPICKUPWAYBILLRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyplsapi20170525
{
namespace Models
{
  class CreatePickUpWaybillResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePickUpWaybillResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(CpCode, cpCode_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMsg, errorMsg_);
      DARABONBA_PTR_TO_JSON(GotCode, gotCode_);
      DARABONBA_PTR_TO_JSON(MailNo, mailNo_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePickUpWaybillResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(CpCode, cpCode_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMsg, errorMsg_);
      DARABONBA_PTR_FROM_JSON(GotCode, gotCode_);
      DARABONBA_PTR_FROM_JSON(MailNo, mailNo_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    CreatePickUpWaybillResponseBodyData() = default ;
    CreatePickUpWaybillResponseBodyData(const CreatePickUpWaybillResponseBodyData &) = default ;
    CreatePickUpWaybillResponseBodyData(CreatePickUpWaybillResponseBodyData &&) = default ;
    CreatePickUpWaybillResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePickUpWaybillResponseBodyData() = default ;
    CreatePickUpWaybillResponseBodyData& operator=(const CreatePickUpWaybillResponseBodyData &) = default ;
    CreatePickUpWaybillResponseBodyData& operator=(CreatePickUpWaybillResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cpCode_ == nullptr
        && return this->errorCode_ == nullptr && return this->errorMsg_ == nullptr && return this->gotCode_ == nullptr && return this->mailNo_ == nullptr && return this->success_ == nullptr; };
    // cpCode Field Functions 
    bool hasCpCode() const { return this->cpCode_ != nullptr;};
    void deleteCpCode() { this->cpCode_ = nullptr;};
    inline string cpCode() const { DARABONBA_PTR_GET_DEFAULT(cpCode_, "") };
    inline CreatePickUpWaybillResponseBodyData& setCpCode(string cpCode) { DARABONBA_PTR_SET_VALUE(cpCode_, cpCode) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline CreatePickUpWaybillResponseBodyData& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMsg Field Functions 
    bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
    void deleteErrorMsg() { this->errorMsg_ = nullptr;};
    inline string errorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
    inline CreatePickUpWaybillResponseBodyData& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


    // gotCode Field Functions 
    bool hasGotCode() const { return this->gotCode_ != nullptr;};
    void deleteGotCode() { this->gotCode_ = nullptr;};
    inline string gotCode() const { DARABONBA_PTR_GET_DEFAULT(gotCode_, "") };
    inline CreatePickUpWaybillResponseBodyData& setGotCode(string gotCode) { DARABONBA_PTR_SET_VALUE(gotCode_, gotCode) };


    // mailNo Field Functions 
    bool hasMailNo() const { return this->mailNo_ != nullptr;};
    void deleteMailNo() { this->mailNo_ = nullptr;};
    inline string mailNo() const { DARABONBA_PTR_GET_DEFAULT(mailNo_, "") };
    inline CreatePickUpWaybillResponseBodyData& setMailNo(string mailNo) { DARABONBA_PTR_SET_VALUE(mailNo_, mailNo) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string success() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline CreatePickUpWaybillResponseBodyData& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The code of the courier company.
    std::shared_ptr<string> cpCode_ = nullptr;
    // The error code.
    std::shared_ptr<string> errorCode_ = nullptr;
    // The error message.
    std::shared_ptr<string> errorMsg_ = nullptr;
    // The pickup code.
    std::shared_ptr<string> gotCode_ = nullptr;
    // The order ID.
    std::shared_ptr<string> mailNo_ = nullptr;
    // Indicates whether the request was successful.
    std::shared_ptr<string> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyplsapi20170525
#endif
