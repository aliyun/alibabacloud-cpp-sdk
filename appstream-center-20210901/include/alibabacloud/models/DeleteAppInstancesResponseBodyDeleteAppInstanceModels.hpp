// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEAPPINSTANCESRESPONSEBODYDELETEAPPINSTANCEMODELS_HPP_
#define ALIBABACLOUD_MODELS_DELETEAPPINSTANCESRESPONSEBODYDELETEAPPINSTANCEMODELS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class DeleteAppInstancesResponseBodyDeleteAppInstanceModels : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteAppInstancesResponseBodyDeleteAppInstanceModels& obj) { 
      DARABONBA_PTR_TO_JSON(AppInstanceId, appInstanceId_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteAppInstancesResponseBodyDeleteAppInstanceModels& obj) { 
      DARABONBA_PTR_FROM_JSON(AppInstanceId, appInstanceId_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DeleteAppInstancesResponseBodyDeleteAppInstanceModels() = default ;
    DeleteAppInstancesResponseBodyDeleteAppInstanceModels(const DeleteAppInstancesResponseBodyDeleteAppInstanceModels &) = default ;
    DeleteAppInstancesResponseBodyDeleteAppInstanceModels(DeleteAppInstancesResponseBodyDeleteAppInstanceModels &&) = default ;
    DeleteAppInstancesResponseBodyDeleteAppInstanceModels(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteAppInstancesResponseBodyDeleteAppInstanceModels() = default ;
    DeleteAppInstancesResponseBodyDeleteAppInstanceModels& operator=(const DeleteAppInstancesResponseBodyDeleteAppInstanceModels &) = default ;
    DeleteAppInstancesResponseBodyDeleteAppInstanceModels& operator=(DeleteAppInstancesResponseBodyDeleteAppInstanceModels &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appInstanceId_ == nullptr
        && return this->code_ == nullptr && return this->message_ == nullptr && return this->success_ == nullptr; };
    // appInstanceId Field Functions 
    bool hasAppInstanceId() const { return this->appInstanceId_ != nullptr;};
    void deleteAppInstanceId() { this->appInstanceId_ = nullptr;};
    inline string appInstanceId() const { DARABONBA_PTR_GET_DEFAULT(appInstanceId_, "") };
    inline DeleteAppInstancesResponseBodyDeleteAppInstanceModels& setAppInstanceId(string appInstanceId) { DARABONBA_PTR_SET_VALUE(appInstanceId_, appInstanceId) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DeleteAppInstancesResponseBodyDeleteAppInstanceModels& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DeleteAppInstancesResponseBodyDeleteAppInstanceModels& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DeleteAppInstancesResponseBodyDeleteAppInstanceModels& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The ID of the application instance.
    std::shared_ptr<string> appInstanceId_ = nullptr;
    // The error code.
    std::shared_ptr<string> code_ = nullptr;
    // The error message.
    std::shared_ptr<string> message_ = nullptr;
    // Specifies whether the application instance is deleted.
    // 
    // Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
