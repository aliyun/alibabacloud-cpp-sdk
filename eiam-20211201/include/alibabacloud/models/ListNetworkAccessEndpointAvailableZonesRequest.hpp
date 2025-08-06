// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNETWORKACCESSENDPOINTAVAILABLEZONESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTNETWORKACCESSENDPOINTAVAILABLEZONESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class ListNetworkAccessEndpointAvailableZonesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNetworkAccessEndpointAvailableZonesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(NaeRegionId, naeRegionId_);
    };
    friend void from_json(const Darabonba::Json& j, ListNetworkAccessEndpointAvailableZonesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(NaeRegionId, naeRegionId_);
    };
    ListNetworkAccessEndpointAvailableZonesRequest() = default ;
    ListNetworkAccessEndpointAvailableZonesRequest(const ListNetworkAccessEndpointAvailableZonesRequest &) = default ;
    ListNetworkAccessEndpointAvailableZonesRequest(ListNetworkAccessEndpointAvailableZonesRequest &&) = default ;
    ListNetworkAccessEndpointAvailableZonesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNetworkAccessEndpointAvailableZonesRequest() = default ;
    ListNetworkAccessEndpointAvailableZonesRequest& operator=(const ListNetworkAccessEndpointAvailableZonesRequest &) = default ;
    ListNetworkAccessEndpointAvailableZonesRequest& operator=(ListNetworkAccessEndpointAvailableZonesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->naeRegionId_ != nullptr; };
    // naeRegionId Field Functions 
    bool hasNaeRegionId() const { return this->naeRegionId_ != nullptr;};
    void deleteNaeRegionId() { this->naeRegionId_ = nullptr;};
    inline string naeRegionId() const { DARABONBA_PTR_GET_DEFAULT(naeRegionId_, "") };
    inline ListNetworkAccessEndpointAvailableZonesRequest& setNaeRegionId(string naeRegionId) { DARABONBA_PTR_SET_VALUE(naeRegionId_, naeRegionId) };


  protected:
    // 专属网络端点支持的地域
    // 
    // This parameter is required.
    std::shared_ptr<string> naeRegionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
