// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGATEWAYROUTERESPONSEBODYDATARESULTCOMMENT_HPP_
#define ALIBABACLOUD_MODELS_LISTGATEWAYROUTERESPONSEBODYDATARESULTCOMMENT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class ListGatewayRouteResponseBodyDataResultComment : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListGatewayRouteResponseBodyDataResultComment& obj) { 
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListGatewayRouteResponseBodyDataResultComment& obj) { 
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ListGatewayRouteResponseBodyDataResultComment() = default ;
    ListGatewayRouteResponseBodyDataResultComment(const ListGatewayRouteResponseBodyDataResultComment &) = default ;
    ListGatewayRouteResponseBodyDataResultComment(ListGatewayRouteResponseBodyDataResultComment &&) = default ;
    ListGatewayRouteResponseBodyDataResultComment(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListGatewayRouteResponseBodyDataResultComment() = default ;
    ListGatewayRouteResponseBodyDataResultComment& operator=(const ListGatewayRouteResponseBodyDataResultComment &) = default ;
    ListGatewayRouteResponseBodyDataResultComment& operator=(ListGatewayRouteResponseBodyDataResultComment &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->status_ != nullptr; };
    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListGatewayRouteResponseBodyDataResultComment& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The status.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
