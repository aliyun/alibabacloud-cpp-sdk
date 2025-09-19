// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCLUSTERSTRATEGYCOUNTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETCLUSTERSTRATEGYCOUNTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetClusterStrategyCountResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetClusterStrategyCountResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(StrategyCount, strategyCount_);
    };
    friend void from_json(const Darabonba::Json& j, GetClusterStrategyCountResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(StrategyCount, strategyCount_);
    };
    GetClusterStrategyCountResponseBodyData() = default ;
    GetClusterStrategyCountResponseBodyData(const GetClusterStrategyCountResponseBodyData &) = default ;
    GetClusterStrategyCountResponseBodyData(GetClusterStrategyCountResponseBodyData &&) = default ;
    GetClusterStrategyCountResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetClusterStrategyCountResponseBodyData() = default ;
    GetClusterStrategyCountResponseBodyData& operator=(const GetClusterStrategyCountResponseBodyData &) = default ;
    GetClusterStrategyCountResponseBodyData& operator=(GetClusterStrategyCountResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clusterId_ != nullptr
        && this->strategyCount_ != nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline GetClusterStrategyCountResponseBodyData& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // strategyCount Field Functions 
    bool hasStrategyCount() const { return this->strategyCount_ != nullptr;};
    void deleteStrategyCount() { this->strategyCount_ = nullptr;};
    inline int32_t strategyCount() const { DARABONBA_PTR_GET_DEFAULT(strategyCount_, 0) };
    inline GetClusterStrategyCountResponseBodyData& setStrategyCount(int32_t strategyCount) { DARABONBA_PTR_SET_VALUE(strategyCount_, strategyCount) };


  protected:
    // The cluster ID.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The number of policies.
    std::shared_ptr<int32_t> strategyCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
