// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETREMINDERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETREMINDERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetReminderResponseBodyModel.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieiap_1_0
{
namespace Models
{
  class GetReminderResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetReminderResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMsg, errorMsg_);
      DARABONBA_PTR_TO_JSON(Model, model_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetReminderResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMsg, errorMsg_);
      DARABONBA_PTR_FROM_JSON(Model, model_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetReminderResponseBody() = default ;
    GetReminderResponseBody(const GetReminderResponseBody &) = default ;
    GetReminderResponseBody(GetReminderResponseBody &&) = default ;
    GetReminderResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetReminderResponseBody() = default ;
    GetReminderResponseBody& operator=(const GetReminderResponseBody &) = default ;
    GetReminderResponseBody& operator=(GetReminderResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->errorCode_ != nullptr
        && this->errorMsg_ != nullptr && this->model_ != nullptr && this->success_ != nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline int32_t errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, 0) };
    inline GetReminderResponseBody& setErrorCode(int32_t errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMsg Field Functions 
    bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
    void deleteErrorMsg() { this->errorMsg_ = nullptr;};
    inline string errorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
    inline GetReminderResponseBody& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


    // model Field Functions 
    bool hasModel() const { return this->model_ != nullptr;};
    void deleteModel() { this->model_ = nullptr;};
    inline const GetReminderResponseBodyModel & model() const { DARABONBA_PTR_GET_CONST(model_, GetReminderResponseBodyModel) };
    inline GetReminderResponseBodyModel model() { DARABONBA_PTR_GET(model_, GetReminderResponseBodyModel) };
    inline GetReminderResponseBody& setModel(const GetReminderResponseBodyModel & model) { DARABONBA_PTR_SET_VALUE(model_, model) };
    inline GetReminderResponseBody& setModel(GetReminderResponseBodyModel && model) { DARABONBA_PTR_SET_RVALUE(model_, model) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetReminderResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    std::shared_ptr<int32_t> errorCode_ = nullptr;
    std::shared_ptr<string> errorMsg_ = nullptr;
    std::shared_ptr<GetReminderResponseBodyModel> model_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieiap_1_0
#endif
