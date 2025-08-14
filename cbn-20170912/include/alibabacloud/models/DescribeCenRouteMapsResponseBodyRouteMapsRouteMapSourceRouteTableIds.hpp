// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECENROUTEMAPSRESPONSEBODYROUTEMAPSROUTEMAPSOURCEROUTETABLEIDS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECENROUTEMAPSRESPONSEBODYROUTEMAPSROUTEMAPSOURCEROUTETABLEIDS_HPP_
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
  class DescribeCenRouteMapsResponseBodyRouteMapsRouteMapSourceRouteTableIds : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCenRouteMapsResponseBodyRouteMapsRouteMapSourceRouteTableIds& obj) { 
      DARABONBA_PTR_TO_JSON(SourceRouteTableId, sourceRouteTableId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCenRouteMapsResponseBodyRouteMapsRouteMapSourceRouteTableIds& obj) { 
      DARABONBA_PTR_FROM_JSON(SourceRouteTableId, sourceRouteTableId_);
    };
    DescribeCenRouteMapsResponseBodyRouteMapsRouteMapSourceRouteTableIds() = default ;
    DescribeCenRouteMapsResponseBodyRouteMapsRouteMapSourceRouteTableIds(const DescribeCenRouteMapsResponseBodyRouteMapsRouteMapSourceRouteTableIds &) = default ;
    DescribeCenRouteMapsResponseBodyRouteMapsRouteMapSourceRouteTableIds(DescribeCenRouteMapsResponseBodyRouteMapsRouteMapSourceRouteTableIds &&) = default ;
    DescribeCenRouteMapsResponseBodyRouteMapsRouteMapSourceRouteTableIds(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCenRouteMapsResponseBodyRouteMapsRouteMapSourceRouteTableIds() = default ;
    DescribeCenRouteMapsResponseBodyRouteMapsRouteMapSourceRouteTableIds& operator=(const DescribeCenRouteMapsResponseBodyRouteMapsRouteMapSourceRouteTableIds &) = default ;
    DescribeCenRouteMapsResponseBodyRouteMapsRouteMapSourceRouteTableIds& operator=(DescribeCenRouteMapsResponseBodyRouteMapsRouteMapSourceRouteTableIds &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->sourceRouteTableId_ != nullptr; };
    // sourceRouteTableId Field Functions 
    bool hasSourceRouteTableId() const { return this->sourceRouteTableId_ != nullptr;};
    void deleteSourceRouteTableId() { this->sourceRouteTableId_ = nullptr;};
    inline const vector<string> & sourceRouteTableId() const { DARABONBA_PTR_GET_CONST(sourceRouteTableId_, vector<string>) };
    inline vector<string> sourceRouteTableId() { DARABONBA_PTR_GET(sourceRouteTableId_, vector<string>) };
    inline DescribeCenRouteMapsResponseBodyRouteMapsRouteMapSourceRouteTableIds& setSourceRouteTableId(const vector<string> & sourceRouteTableId) { DARABONBA_PTR_SET_VALUE(sourceRouteTableId_, sourceRouteTableId) };
    inline DescribeCenRouteMapsResponseBodyRouteMapsRouteMapSourceRouteTableIds& setSourceRouteTableId(vector<string> && sourceRouteTableId) { DARABONBA_PTR_SET_RVALUE(sourceRouteTableId_, sourceRouteTableId) };


  protected:
    std::shared_ptr<vector<string>> sourceRouteTableId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
