// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDATALAKEFUNCTIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDATALAKEFUNCTIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class UpdateDataLakeFunctionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDataLakeFunctionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(Function, function_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDataLakeFunctionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(Function, function_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    UpdateDataLakeFunctionResponseBody() = default ;
    UpdateDataLakeFunctionResponseBody(const UpdateDataLakeFunctionResponseBody &) = default ;
    UpdateDataLakeFunctionResponseBody(UpdateDataLakeFunctionResponseBody &&) = default ;
    UpdateDataLakeFunctionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDataLakeFunctionResponseBody() = default ;
    UpdateDataLakeFunctionResponseBody& operator=(const UpdateDataLakeFunctionResponseBody &) = default ;
    UpdateDataLakeFunctionResponseBody& operator=(UpdateDataLakeFunctionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->errorCode_ != nullptr
        && this->errorMessage_ != nullptr && this->function_ != nullptr && this->requestId_ != nullptr && this->success_ != nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline UpdateDataLakeFunctionResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline UpdateDataLakeFunctionResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // function Field Functions 
    bool hasFunction() const { return this->function_ != nullptr;};
    void deleteFunction() { this->function_ = nullptr;};
    inline const DLFunction & function() const { DARABONBA_PTR_GET_CONST(function_, DLFunction) };
    inline DLFunction function() { DARABONBA_PTR_GET(function_, DLFunction) };
    inline UpdateDataLakeFunctionResponseBody& setFunction(const DLFunction & function) { DARABONBA_PTR_SET_VALUE(function_, function) };
    inline UpdateDataLakeFunctionResponseBody& setFunction(DLFunction && function) { DARABONBA_PTR_SET_RVALUE(function_, function) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateDataLakeFunctionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline UpdateDataLakeFunctionResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    std::shared_ptr<string> errorCode_ = nullptr;
    std::shared_ptr<string> errorMessage_ = nullptr;
    std::shared_ptr<DLFunction> function_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
