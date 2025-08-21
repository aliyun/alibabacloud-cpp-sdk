// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetGroupResponseBodyGroup.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class GetGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Group, group_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Group, group_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetGroupResponseBody() = default ;
    GetGroupResponseBody(const GetGroupResponseBody &) = default ;
    GetGroupResponseBody(GetGroupResponseBody &&) = default ;
    GetGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetGroupResponseBody() = default ;
    GetGroupResponseBody& operator=(const GetGroupResponseBody &) = default ;
    GetGroupResponseBody& operator=(GetGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->group_ != nullptr
        && this->requestId_ != nullptr; };
    // group Field Functions 
    bool hasGroup() const { return this->group_ != nullptr;};
    void deleteGroup() { this->group_ = nullptr;};
    inline const GetGroupResponseBodyGroup & group() const { DARABONBA_PTR_GET_CONST(group_, GetGroupResponseBodyGroup) };
    inline GetGroupResponseBodyGroup group() { DARABONBA_PTR_GET(group_, GetGroupResponseBodyGroup) };
    inline GetGroupResponseBody& setGroup(const GetGroupResponseBodyGroup & group) { DARABONBA_PTR_SET_VALUE(group_, group) };
    inline GetGroupResponseBody& setGroup(GetGroupResponseBodyGroup && group) { DARABONBA_PTR_SET_RVALUE(group_, group) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the RAM user group.
    std::shared_ptr<GetGroupResponseBodyGroup> group_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
