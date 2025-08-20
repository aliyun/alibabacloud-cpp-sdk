// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSTACKINSTANCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSTACKINSTANCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetStackInstanceResponseBodyStackInstance.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class GetStackInstanceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetStackInstanceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StackInstance, stackInstance_);
    };
    friend void from_json(const Darabonba::Json& j, GetStackInstanceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StackInstance, stackInstance_);
    };
    GetStackInstanceResponseBody() = default ;
    GetStackInstanceResponseBody(const GetStackInstanceResponseBody &) = default ;
    GetStackInstanceResponseBody(GetStackInstanceResponseBody &&) = default ;
    GetStackInstanceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetStackInstanceResponseBody() = default ;
    GetStackInstanceResponseBody& operator=(const GetStackInstanceResponseBody &) = default ;
    GetStackInstanceResponseBody& operator=(GetStackInstanceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->stackInstance_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetStackInstanceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // stackInstance Field Functions 
    bool hasStackInstance() const { return this->stackInstance_ != nullptr;};
    void deleteStackInstance() { this->stackInstance_ = nullptr;};
    inline const GetStackInstanceResponseBodyStackInstance & stackInstance() const { DARABONBA_PTR_GET_CONST(stackInstance_, GetStackInstanceResponseBodyStackInstance) };
    inline GetStackInstanceResponseBodyStackInstance stackInstance() { DARABONBA_PTR_GET(stackInstance_, GetStackInstanceResponseBodyStackInstance) };
    inline GetStackInstanceResponseBody& setStackInstance(const GetStackInstanceResponseBodyStackInstance & stackInstance) { DARABONBA_PTR_SET_VALUE(stackInstance_, stackInstance) };
    inline GetStackInstanceResponseBody& setStackInstance(GetStackInstanceResponseBodyStackInstance && stackInstance) { DARABONBA_PTR_SET_RVALUE(stackInstance_, stackInstance) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The information about the stack.
    std::shared_ptr<GetStackInstanceResponseBodyStackInstance> stackInstance_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
