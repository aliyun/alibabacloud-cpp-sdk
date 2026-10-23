// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKAPPRESOURCEPERMISSIONSBATCHRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CHECKAPPRESOURCEPERMISSIONSBATCHRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class CheckAppResourcePermissionsBatchResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckAppResourcePermissionsBatchResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(results, results_);
    };
    friend void from_json(const Darabonba::Json& j, CheckAppResourcePermissionsBatchResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(results, results_);
    };
    CheckAppResourcePermissionsBatchResponseBody() = default ;
    CheckAppResourcePermissionsBatchResponseBody(const CheckAppResourcePermissionsBatchResponseBody &) = default ;
    CheckAppResourcePermissionsBatchResponseBody(CheckAppResourcePermissionsBatchResponseBody &&) = default ;
    CheckAppResourcePermissionsBatchResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckAppResourcePermissionsBatchResponseBody() = default ;
    CheckAppResourcePermissionsBatchResponseBody& operator=(const CheckAppResourcePermissionsBatchResponseBody &) = default ;
    CheckAppResourcePermissionsBatchResponseBody& operator=(CheckAppResourcePermissionsBatchResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Results : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Results& obj) { 
        DARABONBA_PTR_TO_JSON(allowed, allowed_);
        DARABONBA_PTR_TO_JSON(permission, permission_);
        DARABONBA_PTR_TO_JSON(resourceKey, resourceKey_);
        DARABONBA_PTR_TO_JSON(resourceType, resourceType_);
      };
      friend void from_json(const Darabonba::Json& j, Results& obj) { 
        DARABONBA_PTR_FROM_JSON(allowed, allowed_);
        DARABONBA_PTR_FROM_JSON(permission, permission_);
        DARABONBA_PTR_FROM_JSON(resourceKey, resourceKey_);
        DARABONBA_PTR_FROM_JSON(resourceType, resourceType_);
      };
      Results() = default ;
      Results(const Results &) = default ;
      Results(Results &&) = default ;
      Results(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Results() = default ;
      Results& operator=(const Results &) = default ;
      Results& operator=(Results &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->allowed_ == nullptr
        && this->permission_ == nullptr && this->resourceKey_ == nullptr && this->resourceType_ == nullptr; };
      // allowed Field Functions 
      bool hasAllowed() const { return this->allowed_ != nullptr;};
      void deleteAllowed() { this->allowed_ = nullptr;};
      inline bool getAllowed() const { DARABONBA_PTR_GET_DEFAULT(allowed_, false) };
      inline Results& setAllowed(bool allowed) { DARABONBA_PTR_SET_VALUE(allowed_, allowed) };


      // permission Field Functions 
      bool hasPermission() const { return this->permission_ != nullptr;};
      void deletePermission() { this->permission_ = nullptr;};
      inline string getPermission() const { DARABONBA_PTR_GET_DEFAULT(permission_, "") };
      inline Results& setPermission(string permission) { DARABONBA_PTR_SET_VALUE(permission_, permission) };


      // resourceKey Field Functions 
      bool hasResourceKey() const { return this->resourceKey_ != nullptr;};
      void deleteResourceKey() { this->resourceKey_ = nullptr;};
      inline string getResourceKey() const { DARABONBA_PTR_GET_DEFAULT(resourceKey_, "") };
      inline Results& setResourceKey(string resourceKey) { DARABONBA_PTR_SET_VALUE(resourceKey_, resourceKey) };


      // resourceType Field Functions 
      bool hasResourceType() const { return this->resourceType_ != nullptr;};
      void deleteResourceType() { this->resourceType_ = nullptr;};
      inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
      inline Results& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    protected:
      // Indicates whether the user has the permission.
      shared_ptr<bool> allowed_ {};
      // The target permission.
      shared_ptr<string> permission_ {};
      // The dot-separated resource key whose first segment is the APP application key.
      shared_ptr<string> resourceKey_ {};
      // The resource type. Set the value to APP_RESOURCE.
      shared_ptr<string> resourceType_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->results_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CheckAppResourcePermissionsBatchResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CheckAppResourcePermissionsBatchResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CheckAppResourcePermissionsBatchResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // results Field Functions 
    bool hasResults() const { return this->results_ != nullptr;};
    void deleteResults() { this->results_ = nullptr;};
    inline const vector<CheckAppResourcePermissionsBatchResponseBody::Results> & getResults() const { DARABONBA_PTR_GET_CONST(results_, vector<CheckAppResourcePermissionsBatchResponseBody::Results>) };
    inline vector<CheckAppResourcePermissionsBatchResponseBody::Results> getResults() { DARABONBA_PTR_GET(results_, vector<CheckAppResourcePermissionsBatchResponseBody::Results>) };
    inline CheckAppResourcePermissionsBatchResponseBody& setResults(const vector<CheckAppResourcePermissionsBatchResponseBody::Results> & results) { DARABONBA_PTR_SET_VALUE(results_, results) };
    inline CheckAppResourcePermissionsBatchResponseBody& setResults(vector<CheckAppResourcePermissionsBatchResponseBody::Results> && results) { DARABONBA_PTR_SET_RVALUE(results_, results) };


  protected:
    // The business status code. A value of 200 indicates success.
    shared_ptr<string> code_ {};
    // The error message. This field is empty if the request is successful.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The results, returned in the same order as the requested items.
    shared_ptr<vector<CheckAppResourcePermissionsBatchResponseBody::Results>> results_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
