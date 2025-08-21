// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_THIRDIMMEDIATEMSGPUSHRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_THIRDIMMEDIATEMSGPUSHRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ThirdImmediateMsgPushResponseBodyModel.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class ThirdImmediateMsgPushResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ThirdImmediateMsgPushResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMsg, errorMsg_);
      DARABONBA_PTR_TO_JSON(Model, model_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ThirdImmediateMsgPushResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMsg, errorMsg_);
      DARABONBA_PTR_FROM_JSON(Model, model_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ThirdImmediateMsgPushResponseBody() = default ;
    ThirdImmediateMsgPushResponseBody(const ThirdImmediateMsgPushResponseBody &) = default ;
    ThirdImmediateMsgPushResponseBody(ThirdImmediateMsgPushResponseBody &&) = default ;
    ThirdImmediateMsgPushResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ThirdImmediateMsgPushResponseBody() = default ;
    ThirdImmediateMsgPushResponseBody& operator=(const ThirdImmediateMsgPushResponseBody &) = default ;
    ThirdImmediateMsgPushResponseBody& operator=(ThirdImmediateMsgPushResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->errorCode_ != nullptr
        && this->errorMsg_ != nullptr && this->model_ != nullptr && this->success_ != nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ThirdImmediateMsgPushResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMsg Field Functions 
    bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
    void deleteErrorMsg() { this->errorMsg_ = nullptr;};
    inline string errorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
    inline ThirdImmediateMsgPushResponseBody& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


    // model Field Functions 
    bool hasModel() const { return this->model_ != nullptr;};
    void deleteModel() { this->model_ = nullptr;};
    inline const ThirdImmediateMsgPushResponseBodyModel & model() const { DARABONBA_PTR_GET_CONST(model_, ThirdImmediateMsgPushResponseBodyModel) };
    inline ThirdImmediateMsgPushResponseBodyModel model() { DARABONBA_PTR_GET(model_, ThirdImmediateMsgPushResponseBodyModel) };
    inline ThirdImmediateMsgPushResponseBody& setModel(const ThirdImmediateMsgPushResponseBodyModel & model) { DARABONBA_PTR_SET_VALUE(model_, model) };
    inline ThirdImmediateMsgPushResponseBody& setModel(ThirdImmediateMsgPushResponseBodyModel && model) { DARABONBA_PTR_SET_RVALUE(model_, model) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ThirdImmediateMsgPushResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    std::shared_ptr<string> errorCode_ = nullptr;
    std::shared_ptr<string> errorMsg_ = nullptr;
    std::shared_ptr<ThirdImmediateMsgPushResponseBodyModel> model_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
