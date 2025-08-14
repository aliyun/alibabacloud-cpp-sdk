// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEROUTESERVICESINCENRESPONSEBODYROUTESERVICEENTRIES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEROUTESERVICESINCENRESPONSEBODYROUTESERVICEENTRIES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeRouteServicesInCenResponseBodyRouteServiceEntriesRouteServiceEntry.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class DescribeRouteServicesInCenResponseBodyRouteServiceEntries : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRouteServicesInCenResponseBodyRouteServiceEntries& obj) { 
      DARABONBA_PTR_TO_JSON(RouteServiceEntry, routeServiceEntry_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRouteServicesInCenResponseBodyRouteServiceEntries& obj) { 
      DARABONBA_PTR_FROM_JSON(RouteServiceEntry, routeServiceEntry_);
    };
    DescribeRouteServicesInCenResponseBodyRouteServiceEntries() = default ;
    DescribeRouteServicesInCenResponseBodyRouteServiceEntries(const DescribeRouteServicesInCenResponseBodyRouteServiceEntries &) = default ;
    DescribeRouteServicesInCenResponseBodyRouteServiceEntries(DescribeRouteServicesInCenResponseBodyRouteServiceEntries &&) = default ;
    DescribeRouteServicesInCenResponseBodyRouteServiceEntries(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRouteServicesInCenResponseBodyRouteServiceEntries() = default ;
    DescribeRouteServicesInCenResponseBodyRouteServiceEntries& operator=(const DescribeRouteServicesInCenResponseBodyRouteServiceEntries &) = default ;
    DescribeRouteServicesInCenResponseBodyRouteServiceEntries& operator=(DescribeRouteServicesInCenResponseBodyRouteServiceEntries &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->routeServiceEntry_ != nullptr; };
    // routeServiceEntry Field Functions 
    bool hasRouteServiceEntry() const { return this->routeServiceEntry_ != nullptr;};
    void deleteRouteServiceEntry() { this->routeServiceEntry_ = nullptr;};
    inline const vector<Models::DescribeRouteServicesInCenResponseBodyRouteServiceEntriesRouteServiceEntry> & routeServiceEntry() const { DARABONBA_PTR_GET_CONST(routeServiceEntry_, vector<Models::DescribeRouteServicesInCenResponseBodyRouteServiceEntriesRouteServiceEntry>) };
    inline vector<Models::DescribeRouteServicesInCenResponseBodyRouteServiceEntriesRouteServiceEntry> routeServiceEntry() { DARABONBA_PTR_GET(routeServiceEntry_, vector<Models::DescribeRouteServicesInCenResponseBodyRouteServiceEntriesRouteServiceEntry>) };
    inline DescribeRouteServicesInCenResponseBodyRouteServiceEntries& setRouteServiceEntry(const vector<Models::DescribeRouteServicesInCenResponseBodyRouteServiceEntriesRouteServiceEntry> & routeServiceEntry) { DARABONBA_PTR_SET_VALUE(routeServiceEntry_, routeServiceEntry) };
    inline DescribeRouteServicesInCenResponseBodyRouteServiceEntries& setRouteServiceEntry(vector<Models::DescribeRouteServicesInCenResponseBodyRouteServiceEntriesRouteServiceEntry> && routeServiceEntry) { DARABONBA_PTR_SET_RVALUE(routeServiceEntry_, routeServiceEntry) };


  protected:
    std::shared_ptr<vector<Models::DescribeRouteServicesInCenResponseBodyRouteServiceEntriesRouteServiceEntry>> routeServiceEntry_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
