// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTREMINDERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTREMINDERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListRemindersResponseBodyModel.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieiap_1_0
{
namespace Models
{
  class ListRemindersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRemindersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMsg, errorMsg_);
      DARABONBA_PTR_TO_JSON(Model, model_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListRemindersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMsg, errorMsg_);
      DARABONBA_PTR_FROM_JSON(Model, model_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListRemindersResponseBody() = default ;
    ListRemindersResponseBody(const ListRemindersResponseBody &) = default ;
    ListRemindersResponseBody(ListRemindersResponseBody &&) = default ;
    ListRemindersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRemindersResponseBody() = default ;
    ListRemindersResponseBody& operator=(const ListRemindersResponseBody &) = default ;
    ListRemindersResponseBody& operator=(ListRemindersResponseBody &&) = default ;
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
    inline ListRemindersResponseBody& setErrorCode(int32_t errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMsg Field Functions 
    bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
    void deleteErrorMsg() { this->errorMsg_ = nullptr;};
    inline string errorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
    inline ListRemindersResponseBody& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


    // model Field Functions 
    bool hasModel() const { return this->model_ != nullptr;};
    void deleteModel() { this->model_ = nullptr;};
    inline const ListRemindersResponseBodyModel & model() const { DARABONBA_PTR_GET_CONST(model_, ListRemindersResponseBodyModel) };
    inline ListRemindersResponseBodyModel model() { DARABONBA_PTR_GET(model_, ListRemindersResponseBodyModel) };
    inline ListRemindersResponseBody& setModel(const ListRemindersResponseBodyModel & model) { DARABONBA_PTR_SET_VALUE(model_, model) };
    inline ListRemindersResponseBody& setModel(ListRemindersResponseBodyModel && model) { DARABONBA_PTR_SET_RVALUE(model_, model) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListRemindersResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    std::shared_ptr<int32_t> errorCode_ = nullptr;
    std::shared_ptr<string> errorMsg_ = nullptr;
    std::shared_ptr<ListRemindersResponseBodyModel> model_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieiap_1_0
#endif
