// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECENROUTEMAPSRESPONSEBODYROUTEMAPSROUTEMAPMATCHASNS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECENROUTEMAPSRESPONSEBODYROUTEMAPSROUTEMAPMATCHASNS_HPP_
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
  class DescribeCenRouteMapsResponseBodyRouteMapsRouteMapMatchAsns : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCenRouteMapsResponseBodyRouteMapsRouteMapMatchAsns& obj) { 
      DARABONBA_PTR_TO_JSON(MatchAsn, matchAsn_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCenRouteMapsResponseBodyRouteMapsRouteMapMatchAsns& obj) { 
      DARABONBA_PTR_FROM_JSON(MatchAsn, matchAsn_);
    };
    DescribeCenRouteMapsResponseBodyRouteMapsRouteMapMatchAsns() = default ;
    DescribeCenRouteMapsResponseBodyRouteMapsRouteMapMatchAsns(const DescribeCenRouteMapsResponseBodyRouteMapsRouteMapMatchAsns &) = default ;
    DescribeCenRouteMapsResponseBodyRouteMapsRouteMapMatchAsns(DescribeCenRouteMapsResponseBodyRouteMapsRouteMapMatchAsns &&) = default ;
    DescribeCenRouteMapsResponseBodyRouteMapsRouteMapMatchAsns(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCenRouteMapsResponseBodyRouteMapsRouteMapMatchAsns() = default ;
    DescribeCenRouteMapsResponseBodyRouteMapsRouteMapMatchAsns& operator=(const DescribeCenRouteMapsResponseBodyRouteMapsRouteMapMatchAsns &) = default ;
    DescribeCenRouteMapsResponseBodyRouteMapsRouteMapMatchAsns& operator=(DescribeCenRouteMapsResponseBodyRouteMapsRouteMapMatchAsns &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->matchAsn_ != nullptr; };
    // matchAsn Field Functions 
    bool hasMatchAsn() const { return this->matchAsn_ != nullptr;};
    void deleteMatchAsn() { this->matchAsn_ = nullptr;};
    inline const vector<string> & matchAsn() const { DARABONBA_PTR_GET_CONST(matchAsn_, vector<string>) };
    inline vector<string> matchAsn() { DARABONBA_PTR_GET(matchAsn_, vector<string>) };
    inline DescribeCenRouteMapsResponseBodyRouteMapsRouteMapMatchAsns& setMatchAsn(const vector<string> & matchAsn) { DARABONBA_PTR_SET_VALUE(matchAsn_, matchAsn) };
    inline DescribeCenRouteMapsResponseBodyRouteMapsRouteMapMatchAsns& setMatchAsn(vector<string> && matchAsn) { DARABONBA_PTR_SET_RVALUE(matchAsn_, matchAsn) };


  protected:
    std::shared_ptr<vector<string>> matchAsn_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
