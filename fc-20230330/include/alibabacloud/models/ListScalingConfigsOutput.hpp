// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSCALINGCONFIGSOUTPUT_HPP_
#define ALIBABACLOUD_MODELS_LISTSCALINGCONFIGSOUTPUT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ScalingConfigStatus.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FC20230330
{
namespace Models
{
  class ListScalingConfigsOutput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListScalingConfigsOutput& obj) { 
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(scalingConfigs, scalingConfigs_);
    };
    friend void from_json(const Darabonba::Json& j, ListScalingConfigsOutput& obj) { 
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(scalingConfigs, scalingConfigs_);
    };
    ListScalingConfigsOutput() = default ;
    ListScalingConfigsOutput(const ListScalingConfigsOutput &) = default ;
    ListScalingConfigsOutput(ListScalingConfigsOutput &&) = default ;
    ListScalingConfigsOutput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListScalingConfigsOutput() = default ;
    ListScalingConfigsOutput& operator=(const ListScalingConfigsOutput &) = default ;
    ListScalingConfigsOutput& operator=(ListScalingConfigsOutput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->nextToken_ != nullptr
        && this->scalingConfigs_ != nullptr; };
    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListScalingConfigsOutput& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // scalingConfigs Field Functions 
    bool hasScalingConfigs() const { return this->scalingConfigs_ != nullptr;};
    void deleteScalingConfigs() { this->scalingConfigs_ = nullptr;};
    inline const vector<ScalingConfigStatus> & scalingConfigs() const { DARABONBA_PTR_GET_CONST(scalingConfigs_, vector<ScalingConfigStatus>) };
    inline vector<ScalingConfigStatus> scalingConfigs() { DARABONBA_PTR_GET(scalingConfigs_, vector<ScalingConfigStatus>) };
    inline ListScalingConfigsOutput& setScalingConfigs(const vector<ScalingConfigStatus> & scalingConfigs) { DARABONBA_PTR_SET_VALUE(scalingConfigs_, scalingConfigs) };
    inline ListScalingConfigsOutput& setScalingConfigs(vector<ScalingConfigStatus> && scalingConfigs) { DARABONBA_PTR_SET_RVALUE(scalingConfigs_, scalingConfigs) };


  protected:
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<vector<ScalingConfigStatus>> scalingConfigs_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
