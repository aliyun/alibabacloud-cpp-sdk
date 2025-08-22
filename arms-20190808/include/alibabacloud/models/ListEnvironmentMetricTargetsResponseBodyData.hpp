// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTENVIRONMENTMETRICTARGETSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTENVIRONMENTMETRICTARGETSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListEnvironmentMetricTargetsResponseBodyDataActiveTargets.hpp>
#include <alibabacloud/models/ListEnvironmentMetricTargetsResponseBodyDataDroppedTargets.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class ListEnvironmentMetricTargetsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEnvironmentMetricTargetsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ActiveTargets, activeTargets_);
      DARABONBA_PTR_TO_JSON(DroppedTargets, droppedTargets_);
    };
    friend void from_json(const Darabonba::Json& j, ListEnvironmentMetricTargetsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ActiveTargets, activeTargets_);
      DARABONBA_PTR_FROM_JSON(DroppedTargets, droppedTargets_);
    };
    ListEnvironmentMetricTargetsResponseBodyData() = default ;
    ListEnvironmentMetricTargetsResponseBodyData(const ListEnvironmentMetricTargetsResponseBodyData &) = default ;
    ListEnvironmentMetricTargetsResponseBodyData(ListEnvironmentMetricTargetsResponseBodyData &&) = default ;
    ListEnvironmentMetricTargetsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEnvironmentMetricTargetsResponseBodyData() = default ;
    ListEnvironmentMetricTargetsResponseBodyData& operator=(const ListEnvironmentMetricTargetsResponseBodyData &) = default ;
    ListEnvironmentMetricTargetsResponseBodyData& operator=(ListEnvironmentMetricTargetsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->activeTargets_ != nullptr
        && this->droppedTargets_ != nullptr; };
    // activeTargets Field Functions 
    bool hasActiveTargets() const { return this->activeTargets_ != nullptr;};
    void deleteActiveTargets() { this->activeTargets_ = nullptr;};
    inline const vector<Models::ListEnvironmentMetricTargetsResponseBodyDataActiveTargets> & activeTargets() const { DARABONBA_PTR_GET_CONST(activeTargets_, vector<Models::ListEnvironmentMetricTargetsResponseBodyDataActiveTargets>) };
    inline vector<Models::ListEnvironmentMetricTargetsResponseBodyDataActiveTargets> activeTargets() { DARABONBA_PTR_GET(activeTargets_, vector<Models::ListEnvironmentMetricTargetsResponseBodyDataActiveTargets>) };
    inline ListEnvironmentMetricTargetsResponseBodyData& setActiveTargets(const vector<Models::ListEnvironmentMetricTargetsResponseBodyDataActiveTargets> & activeTargets) { DARABONBA_PTR_SET_VALUE(activeTargets_, activeTargets) };
    inline ListEnvironmentMetricTargetsResponseBodyData& setActiveTargets(vector<Models::ListEnvironmentMetricTargetsResponseBodyDataActiveTargets> && activeTargets) { DARABONBA_PTR_SET_RVALUE(activeTargets_, activeTargets) };


    // droppedTargets Field Functions 
    bool hasDroppedTargets() const { return this->droppedTargets_ != nullptr;};
    void deleteDroppedTargets() { this->droppedTargets_ = nullptr;};
    inline const vector<Models::ListEnvironmentMetricTargetsResponseBodyDataDroppedTargets> & droppedTargets() const { DARABONBA_PTR_GET_CONST(droppedTargets_, vector<Models::ListEnvironmentMetricTargetsResponseBodyDataDroppedTargets>) };
    inline vector<Models::ListEnvironmentMetricTargetsResponseBodyDataDroppedTargets> droppedTargets() { DARABONBA_PTR_GET(droppedTargets_, vector<Models::ListEnvironmentMetricTargetsResponseBodyDataDroppedTargets>) };
    inline ListEnvironmentMetricTargetsResponseBodyData& setDroppedTargets(const vector<Models::ListEnvironmentMetricTargetsResponseBodyDataDroppedTargets> & droppedTargets) { DARABONBA_PTR_SET_VALUE(droppedTargets_, droppedTargets) };
    inline ListEnvironmentMetricTargetsResponseBodyData& setDroppedTargets(vector<Models::ListEnvironmentMetricTargetsResponseBodyDataDroppedTargets> && droppedTargets) { DARABONBA_PTR_SET_RVALUE(droppedTargets_, droppedTargets) };


  protected:
    // The active targets.
    std::shared_ptr<vector<Models::ListEnvironmentMetricTargetsResponseBodyDataActiveTargets>> activeTargets_ = nullptr;
    // The deleted targets.
    std::shared_ptr<vector<Models::ListEnvironmentMetricTargetsResponseBodyDataDroppedTargets>> droppedTargets_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
