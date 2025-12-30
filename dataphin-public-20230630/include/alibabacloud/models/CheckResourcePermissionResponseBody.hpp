// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKRESOURCEPERMISSIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CHECKRESOURCEPERMISSIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class CheckResourcePermissionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckResourcePermissionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourcePermissionList, resourcePermissionList_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, CheckResourcePermissionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourcePermissionList, resourcePermissionList_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    CheckResourcePermissionResponseBody() = default ;
    CheckResourcePermissionResponseBody(const CheckResourcePermissionResponseBody &) = default ;
    CheckResourcePermissionResponseBody(CheckResourcePermissionResponseBody &&) = default ;
    CheckResourcePermissionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckResourcePermissionResponseBody() = default ;
    CheckResourcePermissionResponseBody& operator=(const CheckResourcePermissionResponseBody &) = default ;
    CheckResourcePermissionResponseBody& operator=(CheckResourcePermissionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResourcePermissionList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResourcePermissionList& obj) { 
        DARABONBA_PTR_TO_JSON(HasPermission, hasPermission_);
        DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      };
      friend void from_json(const Darabonba::Json& j, ResourcePermissionList& obj) { 
        DARABONBA_PTR_FROM_JSON(HasPermission, hasPermission_);
        DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      };
      ResourcePermissionList() = default ;
      ResourcePermissionList(const ResourcePermissionList &) = default ;
      ResourcePermissionList(ResourcePermissionList &&) = default ;
      ResourcePermissionList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResourcePermissionList() = default ;
      ResourcePermissionList& operator=(const ResourcePermissionList &) = default ;
      ResourcePermissionList& operator=(ResourcePermissionList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->hasPermission_ == nullptr
        && this->resourceId_ == nullptr; };
      // hasPermission Field Functions 
      bool hasHasPermission() const { return this->hasPermission_ != nullptr;};
      void deleteHasPermission() { this->hasPermission_ = nullptr;};
      inline bool getHasPermission() const { DARABONBA_PTR_GET_DEFAULT(hasPermission_, false) };
      inline ResourcePermissionList& setHasPermission(bool hasPermission) { DARABONBA_PTR_SET_VALUE(hasPermission_, hasPermission) };


      // resourceId Field Functions 
      bool hasResourceId() const { return this->resourceId_ != nullptr;};
      void deleteResourceId() { this->resourceId_ = nullptr;};
      inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
      inline ResourcePermissionList& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    protected:
      shared_ptr<bool> hasPermission_ {};
      shared_ptr<string> resourceId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->resourcePermissionList_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CheckResourcePermissionResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline CheckResourcePermissionResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CheckResourcePermissionResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CheckResourcePermissionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourcePermissionList Field Functions 
    bool hasResourcePermissionList() const { return this->resourcePermissionList_ != nullptr;};
    void deleteResourcePermissionList() { this->resourcePermissionList_ = nullptr;};
    inline const vector<CheckResourcePermissionResponseBody::ResourcePermissionList> & getResourcePermissionList() const { DARABONBA_PTR_GET_CONST(resourcePermissionList_, vector<CheckResourcePermissionResponseBody::ResourcePermissionList>) };
    inline vector<CheckResourcePermissionResponseBody::ResourcePermissionList> getResourcePermissionList() { DARABONBA_PTR_GET(resourcePermissionList_, vector<CheckResourcePermissionResponseBody::ResourcePermissionList>) };
    inline CheckResourcePermissionResponseBody& setResourcePermissionList(const vector<CheckResourcePermissionResponseBody::ResourcePermissionList> & resourcePermissionList) { DARABONBA_PTR_SET_VALUE(resourcePermissionList_, resourcePermissionList) };
    inline CheckResourcePermissionResponseBody& setResourcePermissionList(vector<CheckResourcePermissionResponseBody::ResourcePermissionList> && resourcePermissionList) { DARABONBA_PTR_SET_RVALUE(resourcePermissionList_, resourcePermissionList) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline CheckResourcePermissionResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<CheckResourcePermissionResponseBody::ResourcePermissionList>> resourcePermissionList_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
