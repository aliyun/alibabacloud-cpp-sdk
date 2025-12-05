// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SAVEOPENJMETERSCENEREQUESTOPENJMETERSCENEREGIONALCONDITION_HPP_
#define ALIBABACLOUD_MODELS_SAVEOPENJMETERSCENEREQUESTOPENJMETERSCENEREGIONALCONDITION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PTS20201020
{
namespace Models
{
  class SaveOpenJMeterSceneRequestOpenJMeterSceneRegionalCondition : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SaveOpenJMeterSceneRequestOpenJMeterSceneRegionalCondition& obj) { 
      DARABONBA_PTR_TO_JSON(Amount, amount_);
      DARABONBA_PTR_TO_JSON(Region, region_);
    };
    friend void from_json(const Darabonba::Json& j, SaveOpenJMeterSceneRequestOpenJMeterSceneRegionalCondition& obj) { 
      DARABONBA_PTR_FROM_JSON(Amount, amount_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
    };
    SaveOpenJMeterSceneRequestOpenJMeterSceneRegionalCondition() = default ;
    SaveOpenJMeterSceneRequestOpenJMeterSceneRegionalCondition(const SaveOpenJMeterSceneRequestOpenJMeterSceneRegionalCondition &) = default ;
    SaveOpenJMeterSceneRequestOpenJMeterSceneRegionalCondition(SaveOpenJMeterSceneRequestOpenJMeterSceneRegionalCondition &&) = default ;
    SaveOpenJMeterSceneRequestOpenJMeterSceneRegionalCondition(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SaveOpenJMeterSceneRequestOpenJMeterSceneRegionalCondition() = default ;
    SaveOpenJMeterSceneRequestOpenJMeterSceneRegionalCondition& operator=(const SaveOpenJMeterSceneRequestOpenJMeterSceneRegionalCondition &) = default ;
    SaveOpenJMeterSceneRequestOpenJMeterSceneRegionalCondition& operator=(SaveOpenJMeterSceneRequestOpenJMeterSceneRegionalCondition &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->amount_ == nullptr
        && return this->region_ == nullptr; };
    // amount Field Functions 
    bool hasAmount() const { return this->amount_ != nullptr;};
    void deleteAmount() { this->amount_ = nullptr;};
    inline int32_t amount() const { DARABONBA_PTR_GET_DEFAULT(amount_, 0) };
    inline SaveOpenJMeterSceneRequestOpenJMeterSceneRegionalCondition& setAmount(int32_t amount) { DARABONBA_PTR_SET_VALUE(amount_, amount) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline SaveOpenJMeterSceneRequestOpenJMeterSceneRegionalCondition& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


  protected:
    // The number of stress tests. The sum of the number of stress tests in all regions must be equal to the AgentCount value of a specified scenario.
    std::shared_ptr<int32_t> amount_ = nullptr;
    // The region ID.
    std::shared_ptr<string> region_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PTS20201020
#endif
