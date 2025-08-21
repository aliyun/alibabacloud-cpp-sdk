// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEINSTANCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEINSTANCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateInstanceResponseBodyInstanceIds.hpp>
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
    virtual bool empty() const override { this->code_ != nullptr
        && this->instanceIds_ != nullptr && this->requestId_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t code() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline CreateInstanceResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // instanceIds Field Functions 
    bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
    void deleteInstanceIds() { this->instanceIds_ = nullptr;};
    inline const CreateInstanceResponseBodyInstanceIds & instanceIds() const { DARABONBA_PTR_GET_CONST(instanceIds_, CreateInstanceResponseBodyInstanceIds) };
    inline CreateInstanceResponseBodyInstanceIds instanceIds() { DARABONBA_PTR_GET(instanceIds_, CreateInstanceResponseBodyInstanceIds) };
    inline CreateInstanceResponseBody& setInstanceIds(const CreateInstanceResponseBodyInstanceIds & instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };
    inline CreateInstanceResponseBody& setInstanceIds(CreateInstanceResponseBodyInstanceIds && instanceIds) { DARABONBA_PTR_SET_RVALUE(instanceIds_, instanceIds) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateInstanceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The return code. A value of 0 indicates that the request is successful.
    // 
    // >  If you call this operation by using SDKs, the return value is of the integer type. If you call this operation by using common methods or HTTP requests, the return value is of the string type.
    std::shared_ptr<int32_t> code_ = nullptr;
    // The IDs of instances.
    std::shared_ptr<CreateInstanceResponseBodyInstanceIds> instanceIds_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
