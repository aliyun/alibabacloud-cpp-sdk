// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATENETWORKINTERFACERESPONSEBODYIPV6SETS_HPP_
#define ALIBABACLOUD_MODELS_CREATENETWORKINTERFACERESPONSEBODYIPV6SETS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateNetworkInterfaceResponseBodyIpv6SetsIpv6Set.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class CreateNetworkInterfaceResponseBodyIpv6Sets : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateNetworkInterfaceResponseBodyIpv6Sets& obj) { 
      DARABONBA_PTR_TO_JSON(Ipv6Set, ipv6Set_);
    };
    friend void from_json(const Darabonba::Json& j, CreateNetworkInterfaceResponseBodyIpv6Sets& obj) { 
      DARABONBA_PTR_FROM_JSON(Ipv6Set, ipv6Set_);
    };
    CreateNetworkInterfaceResponseBodyIpv6Sets() = default ;
    CreateNetworkInterfaceResponseBodyIpv6Sets(const CreateNetworkInterfaceResponseBodyIpv6Sets &) = default ;
    CreateNetworkInterfaceResponseBodyIpv6Sets(CreateNetworkInterfaceResponseBodyIpv6Sets &&) = default ;
    CreateNetworkInterfaceResponseBodyIpv6Sets(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateNetworkInterfaceResponseBodyIpv6Sets() = default ;
    CreateNetworkInterfaceResponseBodyIpv6Sets& operator=(const CreateNetworkInterfaceResponseBodyIpv6Sets &) = default ;
    CreateNetworkInterfaceResponseBodyIpv6Sets& operator=(CreateNetworkInterfaceResponseBodyIpv6Sets &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ipv6Set_ != nullptr; };
    // ipv6Set Field Functions 
    bool hasIpv6Set() const { return this->ipv6Set_ != nullptr;};
    void deleteIpv6Set() { this->ipv6Set_ = nullptr;};
    inline const vector<Models::CreateNetworkInterfaceResponseBodyIpv6SetsIpv6Set> & ipv6Set() const { DARABONBA_PTR_GET_CONST(ipv6Set_, vector<Models::CreateNetworkInterfaceResponseBodyIpv6SetsIpv6Set>) };
    inline vector<Models::CreateNetworkInterfaceResponseBodyIpv6SetsIpv6Set> ipv6Set() { DARABONBA_PTR_GET(ipv6Set_, vector<Models::CreateNetworkInterfaceResponseBodyIpv6SetsIpv6Set>) };
    inline CreateNetworkInterfaceResponseBodyIpv6Sets& setIpv6Set(const vector<Models::CreateNetworkInterfaceResponseBodyIpv6SetsIpv6Set> & ipv6Set) { DARABONBA_PTR_SET_VALUE(ipv6Set_, ipv6Set) };
    inline CreateNetworkInterfaceResponseBodyIpv6Sets& setIpv6Set(vector<Models::CreateNetworkInterfaceResponseBodyIpv6SetsIpv6Set> && ipv6Set) { DARABONBA_PTR_SET_RVALUE(ipv6Set_, ipv6Set) };


  protected:
    std::shared_ptr<vector<Models::CreateNetworkInterfaceResponseBodyIpv6SetsIpv6Set>> ipv6Set_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
