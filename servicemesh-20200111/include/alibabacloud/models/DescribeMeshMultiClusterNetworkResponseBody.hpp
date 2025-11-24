// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMESHMULTICLUSTERNETWORKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMESHMULTICLUSTERNETWORKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/MultiClusterNetworksValue.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class DescribeMeshMultiClusterNetworkResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMeshMultiClusterNetworkResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MultiClusterNetworks, multiClusterNetworks_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMeshMultiClusterNetworkResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MultiClusterNetworks, multiClusterNetworks_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeMeshMultiClusterNetworkResponseBody() = default ;
    DescribeMeshMultiClusterNetworkResponseBody(const DescribeMeshMultiClusterNetworkResponseBody &) = default ;
    DescribeMeshMultiClusterNetworkResponseBody(DescribeMeshMultiClusterNetworkResponseBody &&) = default ;
    DescribeMeshMultiClusterNetworkResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMeshMultiClusterNetworkResponseBody() = default ;
    DescribeMeshMultiClusterNetworkResponseBody& operator=(const DescribeMeshMultiClusterNetworkResponseBody &) = default ;
    DescribeMeshMultiClusterNetworkResponseBody& operator=(DescribeMeshMultiClusterNetworkResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->multiClusterNetworks_ == nullptr
        && return this->requestId_ == nullptr; };
    // multiClusterNetworks Field Functions 
    bool hasMultiClusterNetworks() const { return this->multiClusterNetworks_ != nullptr;};
    void deleteMultiClusterNetworks() { this->multiClusterNetworks_ = nullptr;};
    inline const map<string, MultiClusterNetworksValue> & multiClusterNetworks() const { DARABONBA_PTR_GET_CONST(multiClusterNetworks_, map<string, MultiClusterNetworksValue>) };
    inline map<string, MultiClusterNetworksValue> multiClusterNetworks() { DARABONBA_PTR_GET(multiClusterNetworks_, map<string, MultiClusterNetworksValue>) };
    inline DescribeMeshMultiClusterNetworkResponseBody& setMultiClusterNetworks(const map<string, MultiClusterNetworksValue> & multiClusterNetworks) { DARABONBA_PTR_SET_VALUE(multiClusterNetworks_, multiClusterNetworks) };
    inline DescribeMeshMultiClusterNetworkResponseBody& setMultiClusterNetworks(map<string, MultiClusterNetworksValue> && multiClusterNetworks) { DARABONBA_PTR_SET_RVALUE(multiClusterNetworks_, multiClusterNetworks) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeMeshMultiClusterNetworkResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<map<string, MultiClusterNetworksValue>> multiClusterNetworks_ = nullptr;
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
