// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEHTTPAPIROUTERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_CREATEHTTPAPIROUTERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class CreateHttpApiRouteResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateHttpApiRouteResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(routeId, routeId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateHttpApiRouteResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(routeId, routeId_);
    };
    CreateHttpApiRouteResponseBodyData() = default ;
    CreateHttpApiRouteResponseBodyData(const CreateHttpApiRouteResponseBodyData &) = default ;
    CreateHttpApiRouteResponseBodyData(CreateHttpApiRouteResponseBodyData &&) = default ;
    CreateHttpApiRouteResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateHttpApiRouteResponseBodyData() = default ;
    CreateHttpApiRouteResponseBodyData& operator=(const CreateHttpApiRouteResponseBodyData &) = default ;
    CreateHttpApiRouteResponseBodyData& operator=(CreateHttpApiRouteResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->routeId_ != nullptr; };
    // routeId Field Functions 
    bool hasRouteId() const { return this->routeId_ != nullptr;};
    void deleteRouteId() { this->routeId_ = nullptr;};
    inline string routeId() const { DARABONBA_PTR_GET_DEFAULT(routeId_, "") };
    inline CreateHttpApiRouteResponseBodyData& setRouteId(string routeId) { DARABONBA_PTR_SET_VALUE(routeId_, routeId) };


  protected:
    // The route ID.
    std::shared_ptr<string> routeId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
