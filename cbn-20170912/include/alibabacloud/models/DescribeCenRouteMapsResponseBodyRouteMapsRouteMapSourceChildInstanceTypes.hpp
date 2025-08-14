// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECENROUTEMAPSRESPONSEBODYROUTEMAPSROUTEMAPSOURCECHILDINSTANCETYPES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECENROUTEMAPSRESPONSEBODYROUTEMAPSROUTEMAPSOURCECHILDINSTANCETYPES_HPP_
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
  class DescribeCenRouteMapsResponseBodyRouteMapsRouteMapSourceChildInstanceTypes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCenRouteMapsResponseBodyRouteMapsRouteMapSourceChildInstanceTypes& obj) { 
      DARABONBA_PTR_TO_JSON(SourceChildInstanceType, sourceChildInstanceType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCenRouteMapsResponseBodyRouteMapsRouteMapSourceChildInstanceTypes& obj) { 
      DARABONBA_PTR_FROM_JSON(SourceChildInstanceType, sourceChildInstanceType_);
    };
    DescribeCenRouteMapsResponseBodyRouteMapsRouteMapSourceChildInstanceTypes() = default ;
    DescribeCenRouteMapsResponseBodyRouteMapsRouteMapSourceChildInstanceTypes(const DescribeCenRouteMapsResponseBodyRouteMapsRouteMapSourceChildInstanceTypes &) = default ;
    DescribeCenRouteMapsResponseBodyRouteMapsRouteMapSourceChildInstanceTypes(DescribeCenRouteMapsResponseBodyRouteMapsRouteMapSourceChildInstanceTypes &&) = default ;
    DescribeCenRouteMapsResponseBodyRouteMapsRouteMapSourceChildInstanceTypes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCenRouteMapsResponseBodyRouteMapsRouteMapSourceChildInstanceTypes() = default ;
    DescribeCenRouteMapsResponseBodyRouteMapsRouteMapSourceChildInstanceTypes& operator=(const DescribeCenRouteMapsResponseBodyRouteMapsRouteMapSourceChildInstanceTypes &) = default ;
    DescribeCenRouteMapsResponseBodyRouteMapsRouteMapSourceChildInstanceTypes& operator=(DescribeCenRouteMapsResponseBodyRouteMapsRouteMapSourceChildInstanceTypes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->sourceChildInstanceType_ != nullptr; };
    // sourceChildInstanceType Field Functions 
    bool hasSourceChildInstanceType() const { return this->sourceChildInstanceType_ != nullptr;};
    void deleteSourceChildInstanceType() { this->sourceChildInstanceType_ = nullptr;};
    inline const vector<string> & sourceChildInstanceType() const { DARABONBA_PTR_GET_CONST(sourceChildInstanceType_, vector<string>) };
    inline vector<string> sourceChildInstanceType() { DARABONBA_PTR_GET(sourceChildInstanceType_, vector<string>) };
    inline DescribeCenRouteMapsResponseBodyRouteMapsRouteMapSourceChildInstanceTypes& setSourceChildInstanceType(const vector<string> & sourceChildInstanceType) { DARABONBA_PTR_SET_VALUE(sourceChildInstanceType_, sourceChildInstanceType) };
    inline DescribeCenRouteMapsResponseBodyRouteMapsRouteMapSourceChildInstanceTypes& setSourceChildInstanceType(vector<string> && sourceChildInstanceType) { DARABONBA_PTR_SET_RVALUE(sourceChildInstanceType_, sourceChildInstanceType) };


  protected:
    std::shared_ptr<vector<string>> sourceChildInstanceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
