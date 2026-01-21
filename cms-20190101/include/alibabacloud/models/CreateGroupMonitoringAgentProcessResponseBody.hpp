// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEGROUPMONITORINGAGENTPROCESSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEGROUPMONITORINGAGENTPROCESSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class CreateGroupMonitoringAgentProcessResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateGroupMonitoringAgentProcessResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Resource, resource_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, CreateGroupMonitoringAgentProcessResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Resource, resource_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    CreateGroupMonitoringAgentProcessResponseBody() = default ;
    CreateGroupMonitoringAgentProcessResponseBody(const CreateGroupMonitoringAgentProcessResponseBody &) = default ;
    CreateGroupMonitoringAgentProcessResponseBody(CreateGroupMonitoringAgentProcessResponseBody &&) = default ;
    CreateGroupMonitoringAgentProcessResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateGroupMonitoringAgentProcessResponseBody() = default ;
    CreateGroupMonitoringAgentProcessResponseBody& operator=(const CreateGroupMonitoringAgentProcessResponseBody &) = default ;
    CreateGroupMonitoringAgentProcessResponseBody& operator=(CreateGroupMonitoringAgentProcessResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Resource : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Resource& obj) { 
        DARABONBA_PTR_TO_JSON(GroupProcessId, groupProcessId_);
      };
      friend void from_json(const Darabonba::Json& j, Resource& obj) { 
        DARABONBA_PTR_FROM_JSON(GroupProcessId, groupProcessId_);
      };
      Resource() = default ;
      Resource(const Resource &) = default ;
      Resource(Resource &&) = default ;
      Resource(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Resource() = default ;
      Resource& operator=(const Resource &) = default ;
      Resource& operator=(Resource &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->groupProcessId_ == nullptr; };
      // groupProcessId Field Functions 
      bool hasGroupProcessId() const { return this->groupProcessId_ != nullptr;};
      void deleteGroupProcessId() { this->groupProcessId_ = nullptr;};
      inline string getGroupProcessId() const { DARABONBA_PTR_GET_DEFAULT(groupProcessId_, "") };
      inline Resource& setGroupProcessId(string groupProcessId) { DARABONBA_PTR_SET_VALUE(groupProcessId_, groupProcessId) };


    protected:
      // The ID of the group process.
      shared_ptr<string> groupProcessId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->resource_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CreateGroupMonitoringAgentProcessResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CreateGroupMonitoringAgentProcessResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateGroupMonitoringAgentProcessResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resource Field Functions 
    bool hasResource() const { return this->resource_ != nullptr;};
    void deleteResource() { this->resource_ = nullptr;};
    inline const CreateGroupMonitoringAgentProcessResponseBody::Resource & getResource() const { DARABONBA_PTR_GET_CONST(resource_, CreateGroupMonitoringAgentProcessResponseBody::Resource) };
    inline CreateGroupMonitoringAgentProcessResponseBody::Resource getResource() { DARABONBA_PTR_GET(resource_, CreateGroupMonitoringAgentProcessResponseBody::Resource) };
    inline CreateGroupMonitoringAgentProcessResponseBody& setResource(const CreateGroupMonitoringAgentProcessResponseBody::Resource & resource) { DARABONBA_PTR_SET_VALUE(resource_, resource) };
    inline CreateGroupMonitoringAgentProcessResponseBody& setResource(CreateGroupMonitoringAgentProcessResponseBody::Resource && resource) { DARABONBA_PTR_SET_RVALUE(resource_, resource) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline CreateGroupMonitoringAgentProcessResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The status code.
    // 
    // > The status code 200 indicates that the call is successful.
    shared_ptr<string> code_ {};
    // The error message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The group process information.
    shared_ptr<CreateGroupMonitoringAgentProcessResponseBody::Resource> resource_ {};
    // Indicates whether the call is successful. Valid values:
    // 
    // *   true: The call is successful.
    // *   false: The call fails.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
