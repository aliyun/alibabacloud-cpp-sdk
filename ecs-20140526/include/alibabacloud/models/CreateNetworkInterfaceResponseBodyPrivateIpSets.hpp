// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATENETWORKINTERFACERESPONSEBODYPRIVATEIPSETS_HPP_
#define ALIBABACLOUD_MODELS_CREATENETWORKINTERFACERESPONSEBODYPRIVATEIPSETS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateNetworkInterfaceResponseBodyPrivateIpSetsPrivateIpSet.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class CreateNetworkInterfaceResponseBodyPrivateIpSets : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateNetworkInterfaceResponseBodyPrivateIpSets& obj) { 
      DARABONBA_PTR_TO_JSON(PrivateIpSet, privateIpSet_);
    };
    friend void from_json(const Darabonba::Json& j, CreateNetworkInterfaceResponseBodyPrivateIpSets& obj) { 
      DARABONBA_PTR_FROM_JSON(PrivateIpSet, privateIpSet_);
    };
    CreateNetworkInterfaceResponseBodyPrivateIpSets() = default ;
    CreateNetworkInterfaceResponseBodyPrivateIpSets(const CreateNetworkInterfaceResponseBodyPrivateIpSets &) = default ;
    CreateNetworkInterfaceResponseBodyPrivateIpSets(CreateNetworkInterfaceResponseBodyPrivateIpSets &&) = default ;
    CreateNetworkInterfaceResponseBodyPrivateIpSets(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateNetworkInterfaceResponseBodyPrivateIpSets() = default ;
    CreateNetworkInterfaceResponseBodyPrivateIpSets& operator=(const CreateNetworkInterfaceResponseBodyPrivateIpSets &) = default ;
    CreateNetworkInterfaceResponseBodyPrivateIpSets& operator=(CreateNetworkInterfaceResponseBodyPrivateIpSets &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->privateIpSet_ == nullptr; };
    // privateIpSet Field Functions 
    bool hasPrivateIpSet() const { return this->privateIpSet_ != nullptr;};
    void deletePrivateIpSet() { this->privateIpSet_ = nullptr;};
    inline const vector<Models::CreateNetworkInterfaceResponseBodyPrivateIpSetsPrivateIpSet> & privateIpSet() const { DARABONBA_PTR_GET_CONST(privateIpSet_, vector<Models::CreateNetworkInterfaceResponseBodyPrivateIpSetsPrivateIpSet>) };
    inline vector<Models::CreateNetworkInterfaceResponseBodyPrivateIpSetsPrivateIpSet> privateIpSet() { DARABONBA_PTR_GET(privateIpSet_, vector<Models::CreateNetworkInterfaceResponseBodyPrivateIpSetsPrivateIpSet>) };
    inline CreateNetworkInterfaceResponseBodyPrivateIpSets& setPrivateIpSet(const vector<Models::CreateNetworkInterfaceResponseBodyPrivateIpSetsPrivateIpSet> & privateIpSet) { DARABONBA_PTR_SET_VALUE(privateIpSet_, privateIpSet) };
    inline CreateNetworkInterfaceResponseBodyPrivateIpSets& setPrivateIpSet(vector<Models::CreateNetworkInterfaceResponseBodyPrivateIpSetsPrivateIpSet> && privateIpSet) { DARABONBA_PTR_SET_RVALUE(privateIpSet_, privateIpSet) };


  protected:
    std::shared_ptr<vector<Models::CreateNetworkInterfaceResponseBodyPrivateIpSetsPrivateIpSet>> privateIpSet_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
