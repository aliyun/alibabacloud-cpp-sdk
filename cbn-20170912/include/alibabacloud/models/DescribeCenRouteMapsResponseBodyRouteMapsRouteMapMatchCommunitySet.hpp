// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECENROUTEMAPSRESPONSEBODYROUTEMAPSROUTEMAPMATCHCOMMUNITYSET_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECENROUTEMAPSRESPONSEBODYROUTEMAPSROUTEMAPMATCHCOMMUNITYSET_HPP_
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
  class DescribeCenRouteMapsResponseBodyRouteMapsRouteMapMatchCommunitySet : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCenRouteMapsResponseBodyRouteMapsRouteMapMatchCommunitySet& obj) { 
      DARABONBA_PTR_TO_JSON(MatchCommunity, matchCommunity_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCenRouteMapsResponseBodyRouteMapsRouteMapMatchCommunitySet& obj) { 
      DARABONBA_PTR_FROM_JSON(MatchCommunity, matchCommunity_);
    };
    DescribeCenRouteMapsResponseBodyRouteMapsRouteMapMatchCommunitySet() = default ;
    DescribeCenRouteMapsResponseBodyRouteMapsRouteMapMatchCommunitySet(const DescribeCenRouteMapsResponseBodyRouteMapsRouteMapMatchCommunitySet &) = default ;
    DescribeCenRouteMapsResponseBodyRouteMapsRouteMapMatchCommunitySet(DescribeCenRouteMapsResponseBodyRouteMapsRouteMapMatchCommunitySet &&) = default ;
    DescribeCenRouteMapsResponseBodyRouteMapsRouteMapMatchCommunitySet(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCenRouteMapsResponseBodyRouteMapsRouteMapMatchCommunitySet() = default ;
    DescribeCenRouteMapsResponseBodyRouteMapsRouteMapMatchCommunitySet& operator=(const DescribeCenRouteMapsResponseBodyRouteMapsRouteMapMatchCommunitySet &) = default ;
    DescribeCenRouteMapsResponseBodyRouteMapsRouteMapMatchCommunitySet& operator=(DescribeCenRouteMapsResponseBodyRouteMapsRouteMapMatchCommunitySet &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->matchCommunity_ != nullptr; };
    // matchCommunity Field Functions 
    bool hasMatchCommunity() const { return this->matchCommunity_ != nullptr;};
    void deleteMatchCommunity() { this->matchCommunity_ = nullptr;};
    inline const vector<string> & matchCommunity() const { DARABONBA_PTR_GET_CONST(matchCommunity_, vector<string>) };
    inline vector<string> matchCommunity() { DARABONBA_PTR_GET(matchCommunity_, vector<string>) };
    inline DescribeCenRouteMapsResponseBodyRouteMapsRouteMapMatchCommunitySet& setMatchCommunity(const vector<string> & matchCommunity) { DARABONBA_PTR_SET_VALUE(matchCommunity_, matchCommunity) };
    inline DescribeCenRouteMapsResponseBodyRouteMapsRouteMapMatchCommunitySet& setMatchCommunity(vector<string> && matchCommunity) { DARABONBA_PTR_SET_RVALUE(matchCommunity_, matchCommunity) };


  protected:
    std::shared_ptr<vector<string>> matchCommunity_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
