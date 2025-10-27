// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAUTOSCALINGCONFIGSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTAUTOSCALINGCONFIGSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListAutoScalingConfigsResponseBodyDataScaleConfigs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hitsdb20200615
{
namespace Models
{
  class ListAutoScalingConfigsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAutoScalingConfigsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ScaleConfigs, scaleConfigs_);
    };
    friend void from_json(const Darabonba::Json& j, ListAutoScalingConfigsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ScaleConfigs, scaleConfigs_);
    };
    ListAutoScalingConfigsResponseBodyData() = default ;
    ListAutoScalingConfigsResponseBodyData(const ListAutoScalingConfigsResponseBodyData &) = default ;
    ListAutoScalingConfigsResponseBodyData(ListAutoScalingConfigsResponseBodyData &&) = default ;
    ListAutoScalingConfigsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAutoScalingConfigsResponseBodyData() = default ;
    ListAutoScalingConfigsResponseBodyData& operator=(const ListAutoScalingConfigsResponseBodyData &) = default ;
    ListAutoScalingConfigsResponseBodyData& operator=(ListAutoScalingConfigsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->scaleConfigs_ == nullptr; };
    // scaleConfigs Field Functions 
    bool hasScaleConfigs() const { return this->scaleConfigs_ != nullptr;};
    void deleteScaleConfigs() { this->scaleConfigs_ = nullptr;};
    inline const vector<Models::ListAutoScalingConfigsResponseBodyDataScaleConfigs> & scaleConfigs() const { DARABONBA_PTR_GET_CONST(scaleConfigs_, vector<Models::ListAutoScalingConfigsResponseBodyDataScaleConfigs>) };
    inline vector<Models::ListAutoScalingConfigsResponseBodyDataScaleConfigs> scaleConfigs() { DARABONBA_PTR_GET(scaleConfigs_, vector<Models::ListAutoScalingConfigsResponseBodyDataScaleConfigs>) };
    inline ListAutoScalingConfigsResponseBodyData& setScaleConfigs(const vector<Models::ListAutoScalingConfigsResponseBodyDataScaleConfigs> & scaleConfigs) { DARABONBA_PTR_SET_VALUE(scaleConfigs_, scaleConfigs) };
    inline ListAutoScalingConfigsResponseBodyData& setScaleConfigs(vector<Models::ListAutoScalingConfigsResponseBodyDataScaleConfigs> && scaleConfigs) { DARABONBA_PTR_SET_RVALUE(scaleConfigs_, scaleConfigs) };


  protected:
    std::shared_ptr<vector<Models::ListAutoScalingConfigsResponseBodyDataScaleConfigs>> scaleConfigs_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hitsdb20200615
#endif
