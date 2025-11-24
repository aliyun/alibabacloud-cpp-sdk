// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEISTIOGATEWAYROUTEDETAILRESPONSEBODYROUTEDETAILMATCHREQUESTHEADERS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEISTIOGATEWAYROUTEDETAILRESPONSEBODYROUTEDETAILMATCHREQUESTHEADERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class DescribeIstioGatewayRouteDetailResponseBodyRouteDetailMatchRequestHeaders : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeIstioGatewayRouteDetailResponseBodyRouteDetailMatchRequestHeaders& obj) { 
      DARABONBA_PTR_TO_JSON(MatchingContent, matchingContent_);
      DARABONBA_PTR_TO_JSON(MatchingMode, matchingMode_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeIstioGatewayRouteDetailResponseBodyRouteDetailMatchRequestHeaders& obj) { 
      DARABONBA_PTR_FROM_JSON(MatchingContent, matchingContent_);
      DARABONBA_PTR_FROM_JSON(MatchingMode, matchingMode_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    DescribeIstioGatewayRouteDetailResponseBodyRouteDetailMatchRequestHeaders() = default ;
    DescribeIstioGatewayRouteDetailResponseBodyRouteDetailMatchRequestHeaders(const DescribeIstioGatewayRouteDetailResponseBodyRouteDetailMatchRequestHeaders &) = default ;
    DescribeIstioGatewayRouteDetailResponseBodyRouteDetailMatchRequestHeaders(DescribeIstioGatewayRouteDetailResponseBodyRouteDetailMatchRequestHeaders &&) = default ;
    DescribeIstioGatewayRouteDetailResponseBodyRouteDetailMatchRequestHeaders(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeIstioGatewayRouteDetailResponseBodyRouteDetailMatchRequestHeaders() = default ;
    DescribeIstioGatewayRouteDetailResponseBodyRouteDetailMatchRequestHeaders& operator=(const DescribeIstioGatewayRouteDetailResponseBodyRouteDetailMatchRequestHeaders &) = default ;
    DescribeIstioGatewayRouteDetailResponseBodyRouteDetailMatchRequestHeaders& operator=(DescribeIstioGatewayRouteDetailResponseBodyRouteDetailMatchRequestHeaders &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->matchingContent_ == nullptr
        && return this->matchingMode_ == nullptr && return this->name_ == nullptr; };
    // matchingContent Field Functions 
    bool hasMatchingContent() const { return this->matchingContent_ != nullptr;};
    void deleteMatchingContent() { this->matchingContent_ = nullptr;};
    inline string matchingContent() const { DARABONBA_PTR_GET_DEFAULT(matchingContent_, "") };
    inline DescribeIstioGatewayRouteDetailResponseBodyRouteDetailMatchRequestHeaders& setMatchingContent(string matchingContent) { DARABONBA_PTR_SET_VALUE(matchingContent_, matchingContent) };


    // matchingMode Field Functions 
    bool hasMatchingMode() const { return this->matchingMode_ != nullptr;};
    void deleteMatchingMode() { this->matchingMode_ = nullptr;};
    inline string matchingMode() const { DARABONBA_PTR_GET_DEFAULT(matchingMode_, "") };
    inline DescribeIstioGatewayRouteDetailResponseBodyRouteDetailMatchRequestHeaders& setMatchingMode(string matchingMode) { DARABONBA_PTR_SET_VALUE(matchingMode_, matchingMode) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeIstioGatewayRouteDetailResponseBodyRouteDetailMatchRequestHeaders& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // The header value to be matched.
    std::shared_ptr<string> matchingContent_ = nullptr;
    // The matching mode for the header value. Valid values:
    // 
    // *   `exact`: exact match
    // *   `prefix`: match by prefix
    // *   `regex`: match by regular expression
    std::shared_ptr<string> matchingMode_ = nullptr;
    // The header key to be matched.
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
