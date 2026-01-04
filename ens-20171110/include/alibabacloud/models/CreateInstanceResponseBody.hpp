// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEINSTANCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEINSTANCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class CreateInstanceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateInstanceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateInstanceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateInstanceResponseBody() = default ;
    CreateInstanceResponseBody(const CreateInstanceResponseBody &) = default ;
    CreateInstanceResponseBody(CreateInstanceResponseBody &&) = default ;
    CreateInstanceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateInstanceResponseBody() = default ;
    CreateInstanceResponseBody& operator=(const CreateInstanceResponseBody &) = default ;
    CreateInstanceResponseBody& operator=(CreateInstanceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class InstanceIds : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const InstanceIds& obj) { 
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      };
      friend void from_json(const Darabonba::Json& j, InstanceIds& obj) { 
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      };
      InstanceIds() = default ;
      InstanceIds(const InstanceIds &) = default ;
      InstanceIds(InstanceIds &&) = default ;
      InstanceIds(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~InstanceIds() = default ;
      InstanceIds& operator=(const InstanceIds &) = default ;
      InstanceIds& operator=(InstanceIds &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->instanceId_ == nullptr; };
      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline const vector<string> & getInstanceId() const { DARABONBA_PTR_GET_CONST(instanceId_, vector<string>) };
      inline vector<string> getInstanceId() { DARABONBA_PTR_GET(instanceId_, vector<string>) };
      inline InstanceIds& setInstanceId(const vector<string> & instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };
      inline InstanceIds& setInstanceId(vector<string> && instanceId) { DARABONBA_PTR_SET_RVALUE(instanceId_, instanceId) };


    protected:
      shared_ptr<vector<string>> instanceId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->instanceIds_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline CreateInstanceResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // instanceIds Field Functions 
    bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
    void deleteInstanceIds() { this->instanceIds_ = nullptr;};
    inline const CreateInstanceResponseBody::InstanceIds & getInstanceIds() const { DARABONBA_PTR_GET_CONST(instanceIds_, CreateInstanceResponseBody::InstanceIds) };
    inline CreateInstanceResponseBody::InstanceIds getInstanceIds() { DARABONBA_PTR_GET(instanceIds_, CreateInstanceResponseBody::InstanceIds) };
    inline CreateInstanceResponseBody& setInstanceIds(const CreateInstanceResponseBody::InstanceIds & instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };
    inline CreateInstanceResponseBody& setInstanceIds(CreateInstanceResponseBody::InstanceIds && instanceIds) { DARABONBA_PTR_SET_RVALUE(instanceIds_, instanceIds) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateInstanceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The return code. A value of 0 indicates that the request is successful.
    // 
    // >  If you call this operation by using SDKs, the return value is of the integer type. If you call this operation by using common methods or HTTP requests, the return value is of the string type.
    shared_ptr<int32_t> code_ {};
    // The IDs of instances.
    shared_ptr<CreateInstanceResponseBody::InstanceIds> instanceIds_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
