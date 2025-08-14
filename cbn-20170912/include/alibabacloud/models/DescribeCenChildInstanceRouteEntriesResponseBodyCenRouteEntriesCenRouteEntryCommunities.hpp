// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECENCHILDINSTANCEROUTEENTRIESRESPONSEBODYCENROUTEENTRIESCENROUTEENTRYCOMMUNITIES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECENCHILDINSTANCEROUTEENTRIESRESPONSEBODYCENROUTEENTRIESCENROUTEENTRYCOMMUNITIES_HPP_
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
  class DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCommunities : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCommunities& obj) { 
      DARABONBA_PTR_TO_JSON(Community, community_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCommunities& obj) { 
      DARABONBA_PTR_FROM_JSON(Community, community_);
    };
    DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCommunities() = default ;
    DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCommunities(const DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCommunities &) = default ;
    DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCommunities(DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCommunities &&) = default ;
    DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCommunities(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCommunities() = default ;
    DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCommunities& operator=(const DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCommunities &) = default ;
    DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCommunities& operator=(DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCommunities &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->community_ != nullptr; };
    // community Field Functions 
    bool hasCommunity() const { return this->community_ != nullptr;};
    void deleteCommunity() { this->community_ = nullptr;};
    inline const vector<string> & community() const { DARABONBA_PTR_GET_CONST(community_, vector<string>) };
    inline vector<string> community() { DARABONBA_PTR_GET(community_, vector<string>) };
    inline DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCommunities& setCommunity(const vector<string> & community) { DARABONBA_PTR_SET_VALUE(community_, community) };
    inline DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCommunities& setCommunity(vector<string> && community) { DARABONBA_PTR_SET_RVALUE(community_, community) };


  protected:
    std::shared_ptr<vector<string>> community_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
