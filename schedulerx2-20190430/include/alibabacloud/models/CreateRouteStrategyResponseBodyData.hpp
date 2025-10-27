// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEROUTESTRATEGYRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_CREATEROUTESTRATEGYRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Schedulerx220190430
{
namespace Models
{
  class CreateRouteStrategyResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRouteStrategyResponseBodyData& obj) { 
    };
    friend void from_json(const Darabonba::Json& j, CreateRouteStrategyResponseBodyData& obj) { 
    };
    CreateRouteStrategyResponseBodyData() = default ;
    CreateRouteStrategyResponseBodyData(const CreateRouteStrategyResponseBodyData &) = default ;
    CreateRouteStrategyResponseBodyData(CreateRouteStrategyResponseBodyData &&) = default ;
    CreateRouteStrategyResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRouteStrategyResponseBodyData() = default ;
    CreateRouteStrategyResponseBodyData& operator=(const CreateRouteStrategyResponseBodyData &) = default ;
    CreateRouteStrategyResponseBodyData& operator=(CreateRouteStrategyResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { ; };
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Schedulerx220190430
#endif
