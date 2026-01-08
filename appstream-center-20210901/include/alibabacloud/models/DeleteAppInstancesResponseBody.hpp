// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEAPPINSTANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETEAPPINSTANCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class DeleteAppInstancesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteAppInstancesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DeleteAppInstanceModels, deleteAppInstanceModels_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteAppInstancesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DeleteAppInstanceModels, deleteAppInstanceModels_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DeleteAppInstancesResponseBody() = default ;
    DeleteAppInstancesResponseBody(const DeleteAppInstancesResponseBody &) = default ;
    DeleteAppInstancesResponseBody(DeleteAppInstancesResponseBody &&) = default ;
    DeleteAppInstancesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteAppInstancesResponseBody() = default ;
    DeleteAppInstancesResponseBody& operator=(const DeleteAppInstancesResponseBody &) = default ;
    DeleteAppInstancesResponseBody& operator=(DeleteAppInstancesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DeleteAppInstanceModels : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DeleteAppInstanceModels& obj) { 
        DARABONBA_PTR_TO_JSON(AppInstanceId, appInstanceId_);
        DARABONBA_PTR_TO_JSON(Code, code_);
        DARABONBA_PTR_TO_JSON(Message, message_);
        DARABONBA_PTR_TO_JSON(Success, success_);
      };
      friend void from_json(const Darabonba::Json& j, DeleteAppInstanceModels& obj) { 
        DARABONBA_PTR_FROM_JSON(AppInstanceId, appInstanceId_);
        DARABONBA_PTR_FROM_JSON(Code, code_);
        DARABONBA_PTR_FROM_JSON(Message, message_);
        DARABONBA_PTR_FROM_JSON(Success, success_);
      };
      DeleteAppInstanceModels() = default ;
      DeleteAppInstanceModels(const DeleteAppInstanceModels &) = default ;
      DeleteAppInstanceModels(DeleteAppInstanceModels &&) = default ;
      DeleteAppInstanceModels(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DeleteAppInstanceModels() = default ;
      DeleteAppInstanceModels& operator=(const DeleteAppInstanceModels &) = default ;
      DeleteAppInstanceModels& operator=(DeleteAppInstanceModels &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->appInstanceId_ == nullptr
        && this->code_ == nullptr && this->message_ == nullptr && this->success_ == nullptr; };
      // appInstanceId Field Functions 
      bool hasAppInstanceId() const { return this->appInstanceId_ != nullptr;};
      void deleteAppInstanceId() { this->appInstanceId_ = nullptr;};
      inline string getAppInstanceId() const { DARABONBA_PTR_GET_DEFAULT(appInstanceId_, "") };
      inline DeleteAppInstanceModels& setAppInstanceId(string appInstanceId) { DARABONBA_PTR_SET_VALUE(appInstanceId_, appInstanceId) };


      // code Field Functions 
      bool hasCode() const { return this->code_ != nullptr;};
      void deleteCode() { this->code_ = nullptr;};
      inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
      inline DeleteAppInstanceModels& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline DeleteAppInstanceModels& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      // success Field Functions 
      bool hasSuccess() const { return this->success_ != nullptr;};
      void deleteSuccess() { this->success_ = nullptr;};
      inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
      inline DeleteAppInstanceModels& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    protected:
      // The ID of the application instance.
      shared_ptr<string> appInstanceId_ {};
      // The error code.
      shared_ptr<string> code_ {};
      // The error message.
      shared_ptr<string> message_ {};
      // Specifies whether the application instance is deleted.
      // 
      // Valid values:
      // 
      // *   true
      // *   false
      shared_ptr<bool> success_ {};
    };

    virtual bool empty() const override { return this->deleteAppInstanceModels_ == nullptr
        && this->requestId_ == nullptr; };
    // deleteAppInstanceModels Field Functions 
    bool hasDeleteAppInstanceModels() const { return this->deleteAppInstanceModels_ != nullptr;};
    void deleteDeleteAppInstanceModels() { this->deleteAppInstanceModels_ = nullptr;};
    inline const vector<DeleteAppInstancesResponseBody::DeleteAppInstanceModels> & getDeleteAppInstanceModels() const { DARABONBA_PTR_GET_CONST(deleteAppInstanceModels_, vector<DeleteAppInstancesResponseBody::DeleteAppInstanceModels>) };
    inline vector<DeleteAppInstancesResponseBody::DeleteAppInstanceModels> getDeleteAppInstanceModels() { DARABONBA_PTR_GET(deleteAppInstanceModels_, vector<DeleteAppInstancesResponseBody::DeleteAppInstanceModels>) };
    inline DeleteAppInstancesResponseBody& setDeleteAppInstanceModels(const vector<DeleteAppInstancesResponseBody::DeleteAppInstanceModels> & deleteAppInstanceModels) { DARABONBA_PTR_SET_VALUE(deleteAppInstanceModels_, deleteAppInstanceModels) };
    inline DeleteAppInstancesResponseBody& setDeleteAppInstanceModels(vector<DeleteAppInstancesResponseBody::DeleteAppInstanceModels> && deleteAppInstanceModels) { DARABONBA_PTR_SET_RVALUE(deleteAppInstanceModels_, deleteAppInstanceModels) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeleteAppInstancesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The data returned.
    shared_ptr<vector<DeleteAppInstancesResponseBody::DeleteAppInstanceModels>> deleteAppInstanceModels_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
