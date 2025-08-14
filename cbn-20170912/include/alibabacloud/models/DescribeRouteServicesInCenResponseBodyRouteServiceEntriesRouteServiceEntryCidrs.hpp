// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEROUTESERVICESINCENRESPONSEBODYROUTESERVICEENTRIESROUTESERVICEENTRYCIDRS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEROUTESERVICESINCENRESPONSEBODYROUTESERVICEENTRIESROUTESERVICEENTRYCIDRS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class DescribeRouteServicesInCenResponseBodyRouteServiceEntriesRouteServiceEntryCidrs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRouteServicesInCenResponseBodyRouteServiceEntriesRouteServiceEntryCidrs& obj) { 
      DARABONBA_PTR_TO_JSON(Cidr, cidr_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRouteServicesInCenResponseBodyRouteServiceEntriesRouteServiceEntryCidrs& obj) { 
      DARABONBA_PTR_FROM_JSON(Cidr, cidr_);
    };
    DescribeRouteServicesInCenResponseBodyRouteServiceEntriesRouteServiceEntryCidrs() = default ;
    DescribeRouteServicesInCenResponseBodyRouteServiceEntriesRouteServiceEntryCidrs(const DescribeRouteServicesInCenResponseBodyRouteServiceEntriesRouteServiceEntryCidrs &) = default ;
    DescribeRouteServicesInCenResponseBodyRouteServiceEntriesRouteServiceEntryCidrs(DescribeRouteServicesInCenResponseBodyRouteServiceEntriesRouteServiceEntryCidrs &&) = default ;
    DescribeRouteServicesInCenResponseBodyRouteServiceEntriesRouteServiceEntryCidrs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRouteServicesInCenResponseBodyRouteServiceEntriesRouteServiceEntryCidrs() = default ;
    DescribeRouteServicesInCenResponseBodyRouteServiceEntriesRouteServiceEntryCidrs& operator=(const DescribeRouteServicesInCenResponseBodyRouteServiceEntriesRouteServiceEntryCidrs &) = default ;
    DescribeRouteServicesInCenResponseBodyRouteServiceEntriesRouteServiceEntryCidrs& operator=(DescribeRouteServicesInCenResponseBodyRouteServiceEntriesRouteServiceEntryCidrs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cidr_ != nullptr; };
    // cidr Field Functions 
    bool hasCidr() const { return this->cidr_ != nullptr;};
    void deleteCidr() { this->cidr_ = nullptr;};
    inline const vector<string> & cidr() const { DARABONBA_PTR_GET_CONST(cidr_, vector<string>) };
    inline vector<string> cidr() { DARABONBA_PTR_GET(cidr_, vector<string>) };
    inline DescribeRouteServicesInCenResponseBodyRouteServiceEntriesRouteServiceEntryCidrs& setCidr(const vector<string> & cidr) { DARABONBA_PTR_SET_VALUE(cidr_, cidr) };
    inline DescribeRouteServicesInCenResponseBodyRouteServiceEntriesRouteServiceEntryCidrs& setCidr(vector<string> && cidr) { DARABONBA_PTR_SET_RVALUE(cidr_, cidr) };


  protected:
    std::shared_ptr<vector<string>> cidr_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
