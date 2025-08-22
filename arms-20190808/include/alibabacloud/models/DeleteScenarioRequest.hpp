// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETESCENARIOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETESCENARIOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class DeleteScenarioRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteScenarioRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ScenarioId, scenarioId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteScenarioRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ScenarioId, scenarioId_);
    };
    DeleteScenarioRequest() = default ;
    DeleteScenarioRequest(const DeleteScenarioRequest &) = default ;
    DeleteScenarioRequest(DeleteScenarioRequest &&) = default ;
    DeleteScenarioRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteScenarioRequest() = default ;
    DeleteScenarioRequest& operator=(const DeleteScenarioRequest &) = default ;
    DeleteScenarioRequest& operator=(DeleteScenarioRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->regionId_ != nullptr
        && this->scenarioId_ != nullptr; };
    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteScenarioRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // scenarioId Field Functions 
    bool hasScenarioId() const { return this->scenarioId_ != nullptr;};
    void deleteScenarioId() { this->scenarioId_ = nullptr;};
    inline int64_t scenarioId() const { DARABONBA_PTR_GET_DEFAULT(scenarioId_, 0L) };
    inline DeleteScenarioRequest& setScenarioId(int64_t scenarioId) { DARABONBA_PTR_SET_VALUE(scenarioId_, scenarioId) };


  protected:
    // The ID of the region.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the business monitoring job. You can obtain the ID by calling the ListScenario operation.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> scenarioId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
