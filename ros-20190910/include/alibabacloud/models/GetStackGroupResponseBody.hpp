// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSTACKGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSTACKGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetStackGroupResponseBodyStackGroup.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class GetStackGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetStackGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StackGroup, stackGroup_);
    };
    friend void from_json(const Darabonba::Json& j, GetStackGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StackGroup, stackGroup_);
    };
    GetStackGroupResponseBody() = default ;
    GetStackGroupResponseBody(const GetStackGroupResponseBody &) = default ;
    GetStackGroupResponseBody(GetStackGroupResponseBody &&) = default ;
    GetStackGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetStackGroupResponseBody() = default ;
    GetStackGroupResponseBody& operator=(const GetStackGroupResponseBody &) = default ;
    GetStackGroupResponseBody& operator=(GetStackGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->stackGroup_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetStackGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // stackGroup Field Functions 
    bool hasStackGroup() const { return this->stackGroup_ != nullptr;};
    void deleteStackGroup() { this->stackGroup_ = nullptr;};
    inline const GetStackGroupResponseBodyStackGroup & stackGroup() const { DARABONBA_PTR_GET_CONST(stackGroup_, GetStackGroupResponseBodyStackGroup) };
    inline GetStackGroupResponseBodyStackGroup stackGroup() { DARABONBA_PTR_GET(stackGroup_, GetStackGroupResponseBodyStackGroup) };
    inline GetStackGroupResponseBody& setStackGroup(const GetStackGroupResponseBodyStackGroup & stackGroup) { DARABONBA_PTR_SET_VALUE(stackGroup_, stackGroup) };
    inline GetStackGroupResponseBody& setStackGroup(GetStackGroupResponseBodyStackGroup && stackGroup) { DARABONBA_PTR_SET_RVALUE(stackGroup_, stackGroup) };


  protected:
    // The details of the stack group.
    std::shared_ptr<string> requestId_ = nullptr;
    // Details of the stack group.
    std::shared_ptr<GetStackGroupResponseBodyStackGroup> stackGroup_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
