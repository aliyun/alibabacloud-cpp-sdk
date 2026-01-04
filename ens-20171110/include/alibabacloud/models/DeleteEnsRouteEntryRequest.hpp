// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEENSROUTEENTRYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEENSROUTEENTRYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DeleteEnsRouteEntryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteEnsRouteEntryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RouteEntryId, routeEntryId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteEnsRouteEntryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RouteEntryId, routeEntryId_);
    };
    DeleteEnsRouteEntryRequest() = default ;
    DeleteEnsRouteEntryRequest(const DeleteEnsRouteEntryRequest &) = default ;
    DeleteEnsRouteEntryRequest(DeleteEnsRouteEntryRequest &&) = default ;
    DeleteEnsRouteEntryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteEnsRouteEntryRequest() = default ;
    DeleteEnsRouteEntryRequest& operator=(const DeleteEnsRouteEntryRequest &) = default ;
    DeleteEnsRouteEntryRequest& operator=(DeleteEnsRouteEntryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->routeEntryId_ == nullptr; };
    // routeEntryId Field Functions 
    bool hasRouteEntryId() const { return this->routeEntryId_ != nullptr;};
    void deleteRouteEntryId() { this->routeEntryId_ = nullptr;};
    inline string getRouteEntryId() const { DARABONBA_PTR_GET_DEFAULT(routeEntryId_, "") };
    inline DeleteEnsRouteEntryRequest& setRouteEntryId(string routeEntryId) { DARABONBA_PTR_SET_VALUE(routeEntryId_, routeEntryId) };


  protected:
    // The ID of the route that you want to delete.
    // 
    // This parameter is required.
    shared_ptr<string> routeEntryId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
