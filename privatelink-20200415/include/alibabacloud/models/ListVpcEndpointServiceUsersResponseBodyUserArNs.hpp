// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVPCENDPOINTSERVICEUSERSRESPONSEBODYUSERARNS_HPP_
#define ALIBABACLOUD_MODELS_LISTVPCENDPOINTSERVICEUSERSRESPONSEBODYUSERARNS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Privatelink20200415
{
namespace Models
{
  class ListVpcEndpointServiceUsersResponseBodyUserARNs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVpcEndpointServiceUsersResponseBodyUserARNs& obj) { 
      DARABONBA_PTR_TO_JSON(UserARN, userARN_);
    };
    friend void from_json(const Darabonba::Json& j, ListVpcEndpointServiceUsersResponseBodyUserARNs& obj) { 
      DARABONBA_PTR_FROM_JSON(UserARN, userARN_);
    };
    ListVpcEndpointServiceUsersResponseBodyUserARNs() = default ;
    ListVpcEndpointServiceUsersResponseBodyUserARNs(const ListVpcEndpointServiceUsersResponseBodyUserARNs &) = default ;
    ListVpcEndpointServiceUsersResponseBodyUserARNs(ListVpcEndpointServiceUsersResponseBodyUserARNs &&) = default ;
    ListVpcEndpointServiceUsersResponseBodyUserARNs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVpcEndpointServiceUsersResponseBodyUserARNs() = default ;
    ListVpcEndpointServiceUsersResponseBodyUserARNs& operator=(const ListVpcEndpointServiceUsersResponseBodyUserARNs &) = default ;
    ListVpcEndpointServiceUsersResponseBodyUserARNs& operator=(ListVpcEndpointServiceUsersResponseBodyUserARNs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->userARN_ == nullptr; };
    // userARN Field Functions 
    bool hasUserARN() const { return this->userARN_ != nullptr;};
    void deleteUserARN() { this->userARN_ = nullptr;};
    inline string userARN() const { DARABONBA_PTR_GET_DEFAULT(userARN_, "") };
    inline ListVpcEndpointServiceUsersResponseBodyUserARNs& setUserARN(string userARN) { DARABONBA_PTR_SET_VALUE(userARN_, userARN) };


  protected:
    // The whitelist in the format of ARN.
    std::shared_ptr<string> userARN_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Privatelink20200415
#endif
