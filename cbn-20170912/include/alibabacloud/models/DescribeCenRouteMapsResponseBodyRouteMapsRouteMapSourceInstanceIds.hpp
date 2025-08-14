// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECENROUTEMAPSRESPONSEBODYROUTEMAPSROUTEMAPSOURCEINSTANCEIDS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECENROUTEMAPSRESPONSEBODYROUTEMAPSROUTEMAPSOURCEINSTANCEIDS_HPP_
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
  class DescribeCenRouteMapsResponseBodyRouteMapsRouteMapSourceInstanceIds : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCenRouteMapsResponseBodyRouteMapsRouteMapSourceInstanceIds& obj) { 
      DARABONBA_PTR_TO_JSON(SourceInstanceId, sourceInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCenRouteMapsResponseBodyRouteMapsRouteMapSourceInstanceIds& obj) { 
      DARABONBA_PTR_FROM_JSON(SourceInstanceId, sourceInstanceId_);
    };
    DescribeCenRouteMapsResponseBodyRouteMapsRouteMapSourceInstanceIds() = default ;
    DescribeCenRouteMapsResponseBodyRouteMapsRouteMapSourceInstanceIds(const DescribeCenRouteMapsResponseBodyRouteMapsRouteMapSourceInstanceIds &) = default ;
    DescribeCenRouteMapsResponseBodyRouteMapsRouteMapSourceInstanceIds(DescribeCenRouteMapsResponseBodyRouteMapsRouteMapSourceInstanceIds &&) = default ;
    DescribeCenRouteMapsResponseBodyRouteMapsRouteMapSourceInstanceIds(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCenRouteMapsResponseBodyRouteMapsRouteMapSourceInstanceIds() = default ;
    DescribeCenRouteMapsResponseBodyRouteMapsRouteMapSourceInstanceIds& operator=(const DescribeCenRouteMapsResponseBodyRouteMapsRouteMapSourceInstanceIds &) = default ;
    DescribeCenRouteMapsResponseBodyRouteMapsRouteMapSourceInstanceIds& operator=(DescribeCenRouteMapsResponseBodyRouteMapsRouteMapSourceInstanceIds &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->sourceInstanceId_ != nullptr; };
    // sourceInstanceId Field Functions 
    bool hasSourceInstanceId() const { return this->sourceInstanceId_ != nullptr;};
    void deleteSourceInstanceId() { this->sourceInstanceId_ = nullptr;};
    inline const vector<string> & sourceInstanceId() const { DARABONBA_PTR_GET_CONST(sourceInstanceId_, vector<string>) };
    inline vector<string> sourceInstanceId() { DARABONBA_PTR_GET(sourceInstanceId_, vector<string>) };
    inline DescribeCenRouteMapsResponseBodyRouteMapsRouteMapSourceInstanceIds& setSourceInstanceId(const vector<string> & sourceInstanceId) { DARABONBA_PTR_SET_VALUE(sourceInstanceId_, sourceInstanceId) };
    inline DescribeCenRouteMapsResponseBodyRouteMapsRouteMapSourceInstanceIds& setSourceInstanceId(vector<string> && sourceInstanceId) { DARABONBA_PTR_SET_RVALUE(sourceInstanceId_, sourceInstanceId) };


  protected:
    std::shared_ptr<vector<string>> sourceInstanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
