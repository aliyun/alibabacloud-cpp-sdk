// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEREMINDERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETEREMINDERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieiap_1_0
{
namespace Models
{
  class DeleteReminderResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteReminderResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMsg, errorMsg_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteReminderResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMsg, errorMsg_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DeleteReminderResponseBody() = default ;
    DeleteReminderResponseBody(const DeleteReminderResponseBody &) = default ;
    DeleteReminderResponseBody(DeleteReminderResponseBody &&) = default ;
    DeleteReminderResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteReminderResponseBody() = default ;
    DeleteReminderResponseBody& operator=(const DeleteReminderResponseBody &) = default ;
    DeleteReminderResponseBody& operator=(DeleteReminderResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->errorMsg_ == nullptr && this->success_ == nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline int32_t getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, 0) };
    inline DeleteReminderResponseBody& setErrorCode(int32_t errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMsg Field Functions 
    bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
    void deleteErrorMsg() { this->errorMsg_ = nullptr;};
    inline string getErrorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
    inline DeleteReminderResponseBody& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DeleteReminderResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // error code
    shared_ptr<int32_t> errorCode_ {};
    // error message
    shared_ptr<string> errorMsg_ {};
    // service success indicator
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieiap_1_0
#endif
