// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVPCENDPOINTSERVICEUSERSRESPONSEBODYUSERS_HPP_
#define ALIBABACLOUD_MODELS_LISTVPCENDPOINTSERVICEUSERSRESPONSEBODYUSERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Privatelink20200415
{
namespace Models
{
  class ListVpcEndpointServiceUsersResponseBodyUsers : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVpcEndpointServiceUsersResponseBodyUsers& obj) { 
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, ListVpcEndpointServiceUsersResponseBodyUsers& obj) { 
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    ListVpcEndpointServiceUsersResponseBodyUsers() = default ;
    ListVpcEndpointServiceUsersResponseBodyUsers(const ListVpcEndpointServiceUsersResponseBodyUsers &) = default ;
    ListVpcEndpointServiceUsersResponseBodyUsers(ListVpcEndpointServiceUsersResponseBodyUsers &&) = default ;
    ListVpcEndpointServiceUsersResponseBodyUsers(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVpcEndpointServiceUsersResponseBodyUsers() = default ;
    ListVpcEndpointServiceUsersResponseBodyUsers& operator=(const ListVpcEndpointServiceUsersResponseBodyUsers &) = default ;
    ListVpcEndpointServiceUsersResponseBodyUsers& operator=(ListVpcEndpointServiceUsersResponseBodyUsers &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->userId_ == nullptr; };
    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline int64_t userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, 0L) };
    inline ListVpcEndpointServiceUsersResponseBodyUsers& setUserId(int64_t userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // The ID of the Alibaba Cloud account in the whitelist of the endpoint service.
    std::shared_ptr<int64_t> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Privatelink20200415
#endif
