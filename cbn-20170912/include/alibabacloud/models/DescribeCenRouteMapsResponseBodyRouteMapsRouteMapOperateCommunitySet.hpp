// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECENROUTEMAPSRESPONSEBODYROUTEMAPSROUTEMAPOPERATECOMMUNITYSET_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECENROUTEMAPSRESPONSEBODYROUTEMAPSROUTEMAPOPERATECOMMUNITYSET_HPP_
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
  class DescribeCenRouteMapsResponseBodyRouteMapsRouteMapOperateCommunitySet : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCenRouteMapsResponseBodyRouteMapsRouteMapOperateCommunitySet& obj) { 
      DARABONBA_PTR_TO_JSON(OperateCommunity, operateCommunity_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCenRouteMapsResponseBodyRouteMapsRouteMapOperateCommunitySet& obj) { 
      DARABONBA_PTR_FROM_JSON(OperateCommunity, operateCommunity_);
    };
    DescribeCenRouteMapsResponseBodyRouteMapsRouteMapOperateCommunitySet() = default ;
    DescribeCenRouteMapsResponseBodyRouteMapsRouteMapOperateCommunitySet(const DescribeCenRouteMapsResponseBodyRouteMapsRouteMapOperateCommunitySet &) = default ;
    DescribeCenRouteMapsResponseBodyRouteMapsRouteMapOperateCommunitySet(DescribeCenRouteMapsResponseBodyRouteMapsRouteMapOperateCommunitySet &&) = default ;
    DescribeCenRouteMapsResponseBodyRouteMapsRouteMapOperateCommunitySet(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCenRouteMapsResponseBodyRouteMapsRouteMapOperateCommunitySet() = default ;
    DescribeCenRouteMapsResponseBodyRouteMapsRouteMapOperateCommunitySet& operator=(const DescribeCenRouteMapsResponseBodyRouteMapsRouteMapOperateCommunitySet &) = default ;
    DescribeCenRouteMapsResponseBodyRouteMapsRouteMapOperateCommunitySet& operator=(DescribeCenRouteMapsResponseBodyRouteMapsRouteMapOperateCommunitySet &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->operateCommunity_ != nullptr; };
    // operateCommunity Field Functions 
    bool hasOperateCommunity() const { return this->operateCommunity_ != nullptr;};
    void deleteOperateCommunity() { this->operateCommunity_ = nullptr;};
    inline const vector<string> & operateCommunity() const { DARABONBA_PTR_GET_CONST(operateCommunity_, vector<string>) };
    inline vector<string> operateCommunity() { DARABONBA_PTR_GET(operateCommunity_, vector<string>) };
    inline DescribeCenRouteMapsResponseBodyRouteMapsRouteMapOperateCommunitySet& setOperateCommunity(const vector<string> & operateCommunity) { DARABONBA_PTR_SET_VALUE(operateCommunity_, operateCommunity) };
    inline DescribeCenRouteMapsResponseBodyRouteMapsRouteMapOperateCommunitySet& setOperateCommunity(vector<string> && operateCommunity) { DARABONBA_PTR_SET_RVALUE(operateCommunity_, operateCommunity) };


  protected:
    std::shared_ptr<vector<string>> operateCommunity_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
