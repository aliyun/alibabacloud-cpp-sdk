// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECENROUTEMAPSRESPONSEBODYROUTEMAPSROUTEMAPSOURCEREGIONIDS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECENROUTEMAPSRESPONSEBODYROUTEMAPSROUTEMAPSOURCEREGIONIDS_HPP_
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
  class DescribeCenRouteMapsResponseBodyRouteMapsRouteMapSourceRegionIds : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCenRouteMapsResponseBodyRouteMapsRouteMapSourceRegionIds& obj) { 
      DARABONBA_PTR_TO_JSON(SourceRegionId, sourceRegionId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCenRouteMapsResponseBodyRouteMapsRouteMapSourceRegionIds& obj) { 
      DARABONBA_PTR_FROM_JSON(SourceRegionId, sourceRegionId_);
    };
    DescribeCenRouteMapsResponseBodyRouteMapsRouteMapSourceRegionIds() = default ;
    DescribeCenRouteMapsResponseBodyRouteMapsRouteMapSourceRegionIds(const DescribeCenRouteMapsResponseBodyRouteMapsRouteMapSourceRegionIds &) = default ;
    DescribeCenRouteMapsResponseBodyRouteMapsRouteMapSourceRegionIds(DescribeCenRouteMapsResponseBodyRouteMapsRouteMapSourceRegionIds &&) = default ;
    DescribeCenRouteMapsResponseBodyRouteMapsRouteMapSourceRegionIds(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCenRouteMapsResponseBodyRouteMapsRouteMapSourceRegionIds() = default ;
    DescribeCenRouteMapsResponseBodyRouteMapsRouteMapSourceRegionIds& operator=(const DescribeCenRouteMapsResponseBodyRouteMapsRouteMapSourceRegionIds &) = default ;
    DescribeCenRouteMapsResponseBodyRouteMapsRouteMapSourceRegionIds& operator=(DescribeCenRouteMapsResponseBodyRouteMapsRouteMapSourceRegionIds &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->sourceRegionId_ != nullptr; };
    // sourceRegionId Field Functions 
    bool hasSourceRegionId() const { return this->sourceRegionId_ != nullptr;};
    void deleteSourceRegionId() { this->sourceRegionId_ = nullptr;};
    inline const vector<string> & sourceRegionId() const { DARABONBA_PTR_GET_CONST(sourceRegionId_, vector<string>) };
    inline vector<string> sourceRegionId() { DARABONBA_PTR_GET(sourceRegionId_, vector<string>) };
    inline DescribeCenRouteMapsResponseBodyRouteMapsRouteMapSourceRegionIds& setSourceRegionId(const vector<string> & sourceRegionId) { DARABONBA_PTR_SET_VALUE(sourceRegionId_, sourceRegionId) };
    inline DescribeCenRouteMapsResponseBodyRouteMapsRouteMapSourceRegionIds& setSourceRegionId(vector<string> && sourceRegionId) { DARABONBA_PTR_SET_RVALUE(sourceRegionId_, sourceRegionId) };


  protected:
    std::shared_ptr<vector<string>> sourceRegionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
