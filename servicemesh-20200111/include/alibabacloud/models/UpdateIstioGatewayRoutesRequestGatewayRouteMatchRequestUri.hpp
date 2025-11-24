// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEISTIOGATEWAYROUTESREQUESTGATEWAYROUTEMATCHREQUESTURI_HPP_
#define ALIBABACLOUD_MODELS_UPDATEISTIOGATEWAYROUTESREQUESTGATEWAYROUTEMATCHREQUESTURI_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class UpdateIstioGatewayRoutesRequestGatewayRouteMatchRequestURI : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateIstioGatewayRoutesRequestGatewayRouteMatchRequestURI& obj) { 
      DARABONBA_PTR_TO_JSON(MatchingContent, matchingContent_);
      DARABONBA_PTR_TO_JSON(MatchingMode, matchingMode_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateIstioGatewayRoutesRequestGatewayRouteMatchRequestURI& obj) { 
      DARABONBA_PTR_FROM_JSON(MatchingContent, matchingContent_);
      DARABONBA_PTR_FROM_JSON(MatchingMode, matchingMode_);
    };
    UpdateIstioGatewayRoutesRequestGatewayRouteMatchRequestURI() = default ;
    UpdateIstioGatewayRoutesRequestGatewayRouteMatchRequestURI(const UpdateIstioGatewayRoutesRequestGatewayRouteMatchRequestURI &) = default ;
    UpdateIstioGatewayRoutesRequestGatewayRouteMatchRequestURI(UpdateIstioGatewayRoutesRequestGatewayRouteMatchRequestURI &&) = default ;
    UpdateIstioGatewayRoutesRequestGatewayRouteMatchRequestURI(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateIstioGatewayRoutesRequestGatewayRouteMatchRequestURI() = default ;
    UpdateIstioGatewayRoutesRequestGatewayRouteMatchRequestURI& operator=(const UpdateIstioGatewayRoutesRequestGatewayRouteMatchRequestURI &) = default ;
    UpdateIstioGatewayRoutesRequestGatewayRouteMatchRequestURI& operator=(UpdateIstioGatewayRoutesRequestGatewayRouteMatchRequestURI &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->matchingContent_ == nullptr
        && return this->matchingMode_ == nullptr; };
    // matchingContent Field Functions 
    bool hasMatchingContent() const { return this->matchingContent_ != nullptr;};
    void deleteMatchingContent() { this->matchingContent_ = nullptr;};
    inline string matchingContent() const { DARABONBA_PTR_GET_DEFAULT(matchingContent_, "") };
    inline UpdateIstioGatewayRoutesRequestGatewayRouteMatchRequestURI& setMatchingContent(string matchingContent) { DARABONBA_PTR_SET_VALUE(matchingContent_, matchingContent) };


    // matchingMode Field Functions 
    bool hasMatchingMode() const { return this->matchingMode_ != nullptr;};
    void deleteMatchingMode() { this->matchingMode_ = nullptr;};
    inline string matchingMode() const { DARABONBA_PTR_GET_DEFAULT(matchingMode_, "") };
    inline UpdateIstioGatewayRoutesRequestGatewayRouteMatchRequestURI& setMatchingMode(string matchingMode) { DARABONBA_PTR_SET_VALUE(matchingMode_, matchingMode) };


  protected:
    // The content to be matched.
    std::shared_ptr<string> matchingContent_ = nullptr;
    // The matching mode for the routing rule. Valid values:
    // 
    // *   `exact`: exact match
    // *   `prefix`: match by prefix
    // *   `regex`: match by regular expression
    std::shared_ptr<string> matchingMode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
