// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCESWITCHAZONERESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCESWITCHAZONERESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeInstanceSwitchAzoneResponseBodyResultTargetAzones.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Drds20190123
{
namespace Models
{
  class DescribeInstanceSwitchAzoneResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceSwitchAzoneResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(OriginAzoneId, originAzoneId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SwitchAble, switchAble_);
      DARABONBA_PTR_TO_JSON(TargetAzones, targetAzones_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceSwitchAzoneResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(OriginAzoneId, originAzoneId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SwitchAble, switchAble_);
      DARABONBA_PTR_FROM_JSON(TargetAzones, targetAzones_);
    };
    DescribeInstanceSwitchAzoneResponseBodyResult() = default ;
    DescribeInstanceSwitchAzoneResponseBodyResult(const DescribeInstanceSwitchAzoneResponseBodyResult &) = default ;
    DescribeInstanceSwitchAzoneResponseBodyResult(DescribeInstanceSwitchAzoneResponseBodyResult &&) = default ;
    DescribeInstanceSwitchAzoneResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceSwitchAzoneResponseBodyResult() = default ;
    DescribeInstanceSwitchAzoneResponseBodyResult& operator=(const DescribeInstanceSwitchAzoneResponseBodyResult &) = default ;
    DescribeInstanceSwitchAzoneResponseBodyResult& operator=(DescribeInstanceSwitchAzoneResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->originAzoneId_ != nullptr
        && this->regionId_ != nullptr && this->switchAble_ != nullptr && this->targetAzones_ != nullptr; };
    // originAzoneId Field Functions 
    bool hasOriginAzoneId() const { return this->originAzoneId_ != nullptr;};
    void deleteOriginAzoneId() { this->originAzoneId_ = nullptr;};
    inline string originAzoneId() const { DARABONBA_PTR_GET_DEFAULT(originAzoneId_, "") };
    inline DescribeInstanceSwitchAzoneResponseBodyResult& setOriginAzoneId(string originAzoneId) { DARABONBA_PTR_SET_VALUE(originAzoneId_, originAzoneId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeInstanceSwitchAzoneResponseBodyResult& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // switchAble Field Functions 
    bool hasSwitchAble() const { return this->switchAble_ != nullptr;};
    void deleteSwitchAble() { this->switchAble_ = nullptr;};
    inline bool switchAble() const { DARABONBA_PTR_GET_DEFAULT(switchAble_, false) };
    inline DescribeInstanceSwitchAzoneResponseBodyResult& setSwitchAble(bool switchAble) { DARABONBA_PTR_SET_VALUE(switchAble_, switchAble) };


    // targetAzones Field Functions 
    bool hasTargetAzones() const { return this->targetAzones_ != nullptr;};
    void deleteTargetAzones() { this->targetAzones_ = nullptr;};
    inline const Models::DescribeInstanceSwitchAzoneResponseBodyResultTargetAzones & targetAzones() const { DARABONBA_PTR_GET_CONST(targetAzones_, Models::DescribeInstanceSwitchAzoneResponseBodyResultTargetAzones) };
    inline Models::DescribeInstanceSwitchAzoneResponseBodyResultTargetAzones targetAzones() { DARABONBA_PTR_GET(targetAzones_, Models::DescribeInstanceSwitchAzoneResponseBodyResultTargetAzones) };
    inline DescribeInstanceSwitchAzoneResponseBodyResult& setTargetAzones(const Models::DescribeInstanceSwitchAzoneResponseBodyResultTargetAzones & targetAzones) { DARABONBA_PTR_SET_VALUE(targetAzones_, targetAzones) };
    inline DescribeInstanceSwitchAzoneResponseBodyResult& setTargetAzones(Models::DescribeInstanceSwitchAzoneResponseBodyResultTargetAzones && targetAzones) { DARABONBA_PTR_SET_RVALUE(targetAzones_, targetAzones) };


  protected:
    // The ID of the source azoneId.
    std::shared_ptr<string> originAzoneId_ = nullptr;
    // regionId.
    std::shared_ptr<string> regionId_ = nullptr;
    // Indicates whether the job can be switched.
    std::shared_ptr<bool> switchAble_ = nullptr;
    // Target azones.
    std::shared_ptr<Models::DescribeInstanceSwitchAzoneResponseBodyResultTargetAzones> targetAzones_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif
