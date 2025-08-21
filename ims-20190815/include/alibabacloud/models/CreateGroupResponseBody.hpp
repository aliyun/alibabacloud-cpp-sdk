// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateGroupResponseBodyGroup.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class CreateGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Group, group_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Group, group_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateGroupResponseBody() = default ;
    CreateGroupResponseBody(const CreateGroupResponseBody &) = default ;
    CreateGroupResponseBody(CreateGroupResponseBody &&) = default ;
    CreateGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateGroupResponseBody() = default ;
    CreateGroupResponseBody& operator=(const CreateGroupResponseBody &) = default ;
    CreateGroupResponseBody& operator=(CreateGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->group_ != nullptr
        && this->requestId_ != nullptr; };
    // group Field Functions 
    bool hasGroup() const { return this->group_ != nullptr;};
    void deleteGroup() { this->group_ = nullptr;};
    inline const CreateGroupResponseBodyGroup & group() const { DARABONBA_PTR_GET_CONST(group_, CreateGroupResponseBodyGroup) };
    inline CreateGroupResponseBodyGroup group() { DARABONBA_PTR_GET(group_, CreateGroupResponseBodyGroup) };
    inline CreateGroupResponseBody& setGroup(const CreateGroupResponseBodyGroup & group) { DARABONBA_PTR_SET_VALUE(group_, group) };
    inline CreateGroupResponseBody& setGroup(CreateGroupResponseBodyGroup && group) { DARABONBA_PTR_SET_RVALUE(group_, group) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the RAM user group.
    std::shared_ptr<CreateGroupResponseBodyGroup> group_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
