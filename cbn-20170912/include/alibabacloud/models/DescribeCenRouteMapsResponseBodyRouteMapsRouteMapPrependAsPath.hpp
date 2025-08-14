// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECENROUTEMAPSRESPONSEBODYROUTEMAPSROUTEMAPPREPENDASPATH_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECENROUTEMAPSRESPONSEBODYROUTEMAPSROUTEMAPPREPENDASPATH_HPP_
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
  class DescribeCenRouteMapsResponseBodyRouteMapsRouteMapPrependAsPath : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCenRouteMapsResponseBodyRouteMapsRouteMapPrependAsPath& obj) { 
      DARABONBA_PTR_TO_JSON(AsPath, asPath_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCenRouteMapsResponseBodyRouteMapsRouteMapPrependAsPath& obj) { 
      DARABONBA_PTR_FROM_JSON(AsPath, asPath_);
    };
    DescribeCenRouteMapsResponseBodyRouteMapsRouteMapPrependAsPath() = default ;
    DescribeCenRouteMapsResponseBodyRouteMapsRouteMapPrependAsPath(const DescribeCenRouteMapsResponseBodyRouteMapsRouteMapPrependAsPath &) = default ;
    DescribeCenRouteMapsResponseBodyRouteMapsRouteMapPrependAsPath(DescribeCenRouteMapsResponseBodyRouteMapsRouteMapPrependAsPath &&) = default ;
    DescribeCenRouteMapsResponseBodyRouteMapsRouteMapPrependAsPath(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCenRouteMapsResponseBodyRouteMapsRouteMapPrependAsPath() = default ;
    DescribeCenRouteMapsResponseBodyRouteMapsRouteMapPrependAsPath& operator=(const DescribeCenRouteMapsResponseBodyRouteMapsRouteMapPrependAsPath &) = default ;
    DescribeCenRouteMapsResponseBodyRouteMapsRouteMapPrependAsPath& operator=(DescribeCenRouteMapsResponseBodyRouteMapsRouteMapPrependAsPath &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->asPath_ != nullptr; };
    // asPath Field Functions 
    bool hasAsPath() const { return this->asPath_ != nullptr;};
    void deleteAsPath() { this->asPath_ = nullptr;};
    inline const vector<string> & asPath() const { DARABONBA_PTR_GET_CONST(asPath_, vector<string>) };
    inline vector<string> asPath() { DARABONBA_PTR_GET(asPath_, vector<string>) };
    inline DescribeCenRouteMapsResponseBodyRouteMapsRouteMapPrependAsPath& setAsPath(const vector<string> & asPath) { DARABONBA_PTR_SET_VALUE(asPath_, asPath) };
    inline DescribeCenRouteMapsResponseBodyRouteMapsRouteMapPrependAsPath& setAsPath(vector<string> && asPath) { DARABONBA_PTR_SET_RVALUE(asPath_, asPath) };


  protected:
    std::shared_ptr<vector<string>> asPath_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
