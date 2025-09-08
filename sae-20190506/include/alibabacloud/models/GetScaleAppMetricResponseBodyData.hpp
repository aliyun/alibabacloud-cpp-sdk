// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSCALEAPPMETRICRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETSCALEAPPMETRICRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class GetScaleAppMetricResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetScaleAppMetricResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(MaxReplicas, maxReplicas_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Runnings, runnings_);
    };
    friend void from_json(const Darabonba::Json& j, GetScaleAppMetricResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(MaxReplicas, maxReplicas_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Runnings, runnings_);
    };
    GetScaleAppMetricResponseBodyData() = default ;
    GetScaleAppMetricResponseBodyData(const GetScaleAppMetricResponseBodyData &) = default ;
    GetScaleAppMetricResponseBodyData(GetScaleAppMetricResponseBodyData &&) = default ;
    GetScaleAppMetricResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetScaleAppMetricResponseBodyData() = default ;
    GetScaleAppMetricResponseBodyData& operator=(const GetScaleAppMetricResponseBodyData &) = default ;
    GetScaleAppMetricResponseBodyData& operator=(GetScaleAppMetricResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr
        && this->maxReplicas_ != nullptr && this->name_ != nullptr && this->regionId_ != nullptr && this->runnings_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline GetScaleAppMetricResponseBodyData& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // maxReplicas Field Functions 
    bool hasMaxReplicas() const { return this->maxReplicas_ != nullptr;};
    void deleteMaxReplicas() { this->maxReplicas_ = nullptr;};
    inline int64_t maxReplicas() const { DARABONBA_PTR_GET_DEFAULT(maxReplicas_, 0L) };
    inline GetScaleAppMetricResponseBodyData& setMaxReplicas(int64_t maxReplicas) { DARABONBA_PTR_SET_VALUE(maxReplicas_, maxReplicas) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetScaleAppMetricResponseBodyData& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetScaleAppMetricResponseBodyData& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // runnings Field Functions 
    bool hasRunnings() const { return this->runnings_ != nullptr;};
    void deleteRunnings() { this->runnings_ = nullptr;};
    inline int64_t runnings() const { DARABONBA_PTR_GET_DEFAULT(runnings_, 0L) };
    inline GetScaleAppMetricResponseBodyData& setRunnings(int64_t runnings) { DARABONBA_PTR_SET_VALUE(runnings_, runnings) };


  protected:
    // The application ID.
    std::shared_ptr<string> appId_ = nullptr;
    // The maximum number of instances.
    std::shared_ptr<int64_t> maxReplicas_ = nullptr;
    // The application name.
    std::shared_ptr<string> name_ = nullptr;
    // The namespace ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // The current number of instances.
    std::shared_ptr<int64_t> runnings_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
