// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETACCESSGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETACCESSGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetAccessGroupResponseBodyAccessGroup.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DFS20180620
{
namespace Models
{
  class GetAccessGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAccessGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessGroup, accessGroup_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAccessGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessGroup, accessGroup_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetAccessGroupResponseBody() = default ;
    GetAccessGroupResponseBody(const GetAccessGroupResponseBody &) = default ;
    GetAccessGroupResponseBody(GetAccessGroupResponseBody &&) = default ;
    GetAccessGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAccessGroupResponseBody() = default ;
    GetAccessGroupResponseBody& operator=(const GetAccessGroupResponseBody &) = default ;
    GetAccessGroupResponseBody& operator=(GetAccessGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessGroup_ == nullptr
        && return this->requestId_ == nullptr; };
    // accessGroup Field Functions 
    bool hasAccessGroup() const { return this->accessGroup_ != nullptr;};
    void deleteAccessGroup() { this->accessGroup_ = nullptr;};
    inline const GetAccessGroupResponseBodyAccessGroup & accessGroup() const { DARABONBA_PTR_GET_CONST(accessGroup_, GetAccessGroupResponseBodyAccessGroup) };
    inline GetAccessGroupResponseBodyAccessGroup accessGroup() { DARABONBA_PTR_GET(accessGroup_, GetAccessGroupResponseBodyAccessGroup) };
    inline GetAccessGroupResponseBody& setAccessGroup(const GetAccessGroupResponseBodyAccessGroup & accessGroup) { DARABONBA_PTR_SET_VALUE(accessGroup_, accessGroup) };
    inline GetAccessGroupResponseBody& setAccessGroup(GetAccessGroupResponseBodyAccessGroup && accessGroup) { DARABONBA_PTR_SET_RVALUE(accessGroup_, accessGroup) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAccessGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<GetAccessGroupResponseBodyAccessGroup> accessGroup_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DFS20180620
#endif
