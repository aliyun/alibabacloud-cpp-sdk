// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCERECORDCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCERECORDCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EcsWorkbench20220220
{
namespace Models
{
  class GetInstanceRecordConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceRecordConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Root, root_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceRecordConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Root, root_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetInstanceRecordConfigResponseBody() = default ;
    GetInstanceRecordConfigResponseBody(const GetInstanceRecordConfigResponseBody &) = default ;
    GetInstanceRecordConfigResponseBody(GetInstanceRecordConfigResponseBody &&) = default ;
    GetInstanceRecordConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceRecordConfigResponseBody() = default ;
    GetInstanceRecordConfigResponseBody& operator=(const GetInstanceRecordConfigResponseBody &) = default ;
    GetInstanceRecordConfigResponseBody& operator=(GetInstanceRecordConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Root : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Root& obj) { 
        DARABONBA_PTR_TO_JSON(ExpirationDays, expirationDays_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(ParentId, parentId_);
        DARABONBA_PTR_TO_JSON(RecordStorageTarget, recordStorageTarget_);
      };
      friend void from_json(const Darabonba::Json& j, Root& obj) { 
        DARABONBA_PTR_FROM_JSON(ExpirationDays, expirationDays_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(ParentId, parentId_);
        DARABONBA_PTR_FROM_JSON(RecordStorageTarget, recordStorageTarget_);
      };
      Root() = default ;
      Root(const Root &) = default ;
      Root(Root &&) = default ;
      Root(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Root() = default ;
      Root& operator=(const Root &) = default ;
      Root& operator=(Root &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->expirationDays_ == nullptr
        && this->instanceId_ == nullptr && this->parentId_ == nullptr && this->recordStorageTarget_ == nullptr; };
      // expirationDays Field Functions 
      bool hasExpirationDays() const { return this->expirationDays_ != nullptr;};
      void deleteExpirationDays() { this->expirationDays_ = nullptr;};
      inline int32_t getExpirationDays() const { DARABONBA_PTR_GET_DEFAULT(expirationDays_, 0) };
      inline Root& setExpirationDays(int32_t expirationDays) { DARABONBA_PTR_SET_VALUE(expirationDays_, expirationDays) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Root& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // parentId Field Functions 
      bool hasParentId() const { return this->parentId_ != nullptr;};
      void deleteParentId() { this->parentId_ = nullptr;};
      inline string getParentId() const { DARABONBA_PTR_GET_DEFAULT(parentId_, "") };
      inline Root& setParentId(string parentId) { DARABONBA_PTR_SET_VALUE(parentId_, parentId) };


      // recordStorageTarget Field Functions 
      bool hasRecordStorageTarget() const { return this->recordStorageTarget_ != nullptr;};
      void deleteRecordStorageTarget() { this->recordStorageTarget_ = nullptr;};
      inline string getRecordStorageTarget() const { DARABONBA_PTR_GET_DEFAULT(recordStorageTarget_, "") };
      inline Root& setRecordStorageTarget(string recordStorageTarget) { DARABONBA_PTR_SET_VALUE(recordStorageTarget_, recordStorageTarget) };


    protected:
      shared_ptr<int32_t> expirationDays_ {};
      shared_ptr<string> instanceId_ {};
      shared_ptr<string> parentId_ {};
      shared_ptr<string> recordStorageTarget_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->root_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetInstanceRecordConfigResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetInstanceRecordConfigResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetInstanceRecordConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // root Field Functions 
    bool hasRoot() const { return this->root_ != nullptr;};
    void deleteRoot() { this->root_ = nullptr;};
    inline const GetInstanceRecordConfigResponseBody::Root & getRoot() const { DARABONBA_PTR_GET_CONST(root_, GetInstanceRecordConfigResponseBody::Root) };
    inline GetInstanceRecordConfigResponseBody::Root getRoot() { DARABONBA_PTR_GET(root_, GetInstanceRecordConfigResponseBody::Root) };
    inline GetInstanceRecordConfigResponseBody& setRoot(const GetInstanceRecordConfigResponseBody::Root & root) { DARABONBA_PTR_SET_VALUE(root_, root) };
    inline GetInstanceRecordConfigResponseBody& setRoot(GetInstanceRecordConfigResponseBody::Root && root) { DARABONBA_PTR_SET_RVALUE(root_, root) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetInstanceRecordConfigResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<GetInstanceRecordConfigResponseBody::Root> root_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EcsWorkbench20220220
#endif
