// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETRAFFICCONTROLSRESPONSEBODYTRAFFICCONTROLSTRAFFICCONTROL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETRAFFICCONTROLSRESPONSEBODYTRAFFICCONTROLSTRAFFICCONTROL_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeTrafficControlsResponseBodyTrafficControlsTrafficControlSpecialPolicies.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeTrafficControlsResponseBodyTrafficControlsTrafficControl : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTrafficControlsResponseBodyTrafficControlsTrafficControl& obj) { 
      DARABONBA_PTR_TO_JSON(ApiDefault, apiDefault_);
      DARABONBA_PTR_TO_JSON(AppDefault, appDefault_);
      DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
      DARABONBA_PTR_TO_JSON(SpecialPolicies, specialPolicies_);
      DARABONBA_PTR_TO_JSON(TrafficControlId, trafficControlId_);
      DARABONBA_PTR_TO_JSON(TrafficControlName, trafficControlName_);
      DARABONBA_PTR_TO_JSON(TrafficControlUnit, trafficControlUnit_);
      DARABONBA_PTR_TO_JSON(UserDefault, userDefault_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTrafficControlsResponseBodyTrafficControlsTrafficControl& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiDefault, apiDefault_);
      DARABONBA_PTR_FROM_JSON(AppDefault, appDefault_);
      DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
      DARABONBA_PTR_FROM_JSON(SpecialPolicies, specialPolicies_);
      DARABONBA_PTR_FROM_JSON(TrafficControlId, trafficControlId_);
      DARABONBA_PTR_FROM_JSON(TrafficControlName, trafficControlName_);
      DARABONBA_PTR_FROM_JSON(TrafficControlUnit, trafficControlUnit_);
      DARABONBA_PTR_FROM_JSON(UserDefault, userDefault_);
    };
    DescribeTrafficControlsResponseBodyTrafficControlsTrafficControl() = default ;
    DescribeTrafficControlsResponseBodyTrafficControlsTrafficControl(const DescribeTrafficControlsResponseBodyTrafficControlsTrafficControl &) = default ;
    DescribeTrafficControlsResponseBodyTrafficControlsTrafficControl(DescribeTrafficControlsResponseBodyTrafficControlsTrafficControl &&) = default ;
    DescribeTrafficControlsResponseBodyTrafficControlsTrafficControl(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTrafficControlsResponseBodyTrafficControlsTrafficControl() = default ;
    DescribeTrafficControlsResponseBodyTrafficControlsTrafficControl& operator=(const DescribeTrafficControlsResponseBodyTrafficControlsTrafficControl &) = default ;
    DescribeTrafficControlsResponseBodyTrafficControlsTrafficControl& operator=(DescribeTrafficControlsResponseBodyTrafficControlsTrafficControl &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiDefault_ == nullptr
        && return this->appDefault_ == nullptr && return this->createdTime_ == nullptr && return this->description_ == nullptr && return this->modifiedTime_ == nullptr && return this->specialPolicies_ == nullptr
        && return this->trafficControlId_ == nullptr && return this->trafficControlName_ == nullptr && return this->trafficControlUnit_ == nullptr && return this->userDefault_ == nullptr; };
    // apiDefault Field Functions 
    bool hasApiDefault() const { return this->apiDefault_ != nullptr;};
    void deleteApiDefault() { this->apiDefault_ = nullptr;};
    inline int32_t apiDefault() const { DARABONBA_PTR_GET_DEFAULT(apiDefault_, 0) };
    inline DescribeTrafficControlsResponseBodyTrafficControlsTrafficControl& setApiDefault(int32_t apiDefault) { DARABONBA_PTR_SET_VALUE(apiDefault_, apiDefault) };


    // appDefault Field Functions 
    bool hasAppDefault() const { return this->appDefault_ != nullptr;};
    void deleteAppDefault() { this->appDefault_ = nullptr;};
    inline int32_t appDefault() const { DARABONBA_PTR_GET_DEFAULT(appDefault_, 0) };
    inline DescribeTrafficControlsResponseBodyTrafficControlsTrafficControl& setAppDefault(int32_t appDefault) { DARABONBA_PTR_SET_VALUE(appDefault_, appDefault) };


    // createdTime Field Functions 
    bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
    void deleteCreatedTime() { this->createdTime_ = nullptr;};
    inline string createdTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, "") };
    inline DescribeTrafficControlsResponseBodyTrafficControlsTrafficControl& setCreatedTime(string createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeTrafficControlsResponseBodyTrafficControlsTrafficControl& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // modifiedTime Field Functions 
    bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
    void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
    inline string modifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
    inline DescribeTrafficControlsResponseBodyTrafficControlsTrafficControl& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


    // specialPolicies Field Functions 
    bool hasSpecialPolicies() const { return this->specialPolicies_ != nullptr;};
    void deleteSpecialPolicies() { this->specialPolicies_ = nullptr;};
    inline const Models::DescribeTrafficControlsResponseBodyTrafficControlsTrafficControlSpecialPolicies & specialPolicies() const { DARABONBA_PTR_GET_CONST(specialPolicies_, Models::DescribeTrafficControlsResponseBodyTrafficControlsTrafficControlSpecialPolicies) };
    inline Models::DescribeTrafficControlsResponseBodyTrafficControlsTrafficControlSpecialPolicies specialPolicies() { DARABONBA_PTR_GET(specialPolicies_, Models::DescribeTrafficControlsResponseBodyTrafficControlsTrafficControlSpecialPolicies) };
    inline DescribeTrafficControlsResponseBodyTrafficControlsTrafficControl& setSpecialPolicies(const Models::DescribeTrafficControlsResponseBodyTrafficControlsTrafficControlSpecialPolicies & specialPolicies) { DARABONBA_PTR_SET_VALUE(specialPolicies_, specialPolicies) };
    inline DescribeTrafficControlsResponseBodyTrafficControlsTrafficControl& setSpecialPolicies(Models::DescribeTrafficControlsResponseBodyTrafficControlsTrafficControlSpecialPolicies && specialPolicies) { DARABONBA_PTR_SET_RVALUE(specialPolicies_, specialPolicies) };


    // trafficControlId Field Functions 
    bool hasTrafficControlId() const { return this->trafficControlId_ != nullptr;};
    void deleteTrafficControlId() { this->trafficControlId_ = nullptr;};
    inline string trafficControlId() const { DARABONBA_PTR_GET_DEFAULT(trafficControlId_, "") };
    inline DescribeTrafficControlsResponseBodyTrafficControlsTrafficControl& setTrafficControlId(string trafficControlId) { DARABONBA_PTR_SET_VALUE(trafficControlId_, trafficControlId) };


    // trafficControlName Field Functions 
    bool hasTrafficControlName() const { return this->trafficControlName_ != nullptr;};
    void deleteTrafficControlName() { this->trafficControlName_ = nullptr;};
    inline string trafficControlName() const { DARABONBA_PTR_GET_DEFAULT(trafficControlName_, "") };
    inline DescribeTrafficControlsResponseBodyTrafficControlsTrafficControl& setTrafficControlName(string trafficControlName) { DARABONBA_PTR_SET_VALUE(trafficControlName_, trafficControlName) };


    // trafficControlUnit Field Functions 
    bool hasTrafficControlUnit() const { return this->trafficControlUnit_ != nullptr;};
    void deleteTrafficControlUnit() { this->trafficControlUnit_ = nullptr;};
    inline string trafficControlUnit() const { DARABONBA_PTR_GET_DEFAULT(trafficControlUnit_, "") };
    inline DescribeTrafficControlsResponseBodyTrafficControlsTrafficControl& setTrafficControlUnit(string trafficControlUnit) { DARABONBA_PTR_SET_VALUE(trafficControlUnit_, trafficControlUnit) };


    // userDefault Field Functions 
    bool hasUserDefault() const { return this->userDefault_ != nullptr;};
    void deleteUserDefault() { this->userDefault_ = nullptr;};
    inline int32_t userDefault() const { DARABONBA_PTR_GET_DEFAULT(userDefault_, 0) };
    inline DescribeTrafficControlsResponseBodyTrafficControlsTrafficControl& setUserDefault(int32_t userDefault) { DARABONBA_PTR_SET_VALUE(userDefault_, userDefault) };


  protected:
    // The default throttling value for each API.
    std::shared_ptr<int32_t> apiDefault_ = nullptr;
    // The default throttling value for each app.
    std::shared_ptr<int32_t> appDefault_ = nullptr;
    // The creation time (UTC) of the throttling policy.
    std::shared_ptr<string> createdTime_ = nullptr;
    // The description of the throttling policy.
    std::shared_ptr<string> description_ = nullptr;
    // The last modification time (UTC) of the throttling policy.
    std::shared_ptr<string> modifiedTime_ = nullptr;
    // The returned information about a special throttling policy. It is an array consisting of SpecialPolicy data.
    std::shared_ptr<Models::DescribeTrafficControlsResponseBodyTrafficControlsTrafficControlSpecialPolicies> specialPolicies_ = nullptr;
    // The ID of the throttling policy.
    std::shared_ptr<string> trafficControlId_ = nullptr;
    // The name of the throttling policy.
    std::shared_ptr<string> trafficControlName_ = nullptr;
    // The unit to be used in the throttling policy. Valid values:
    // 
    // *   MINUTE
    // *   HOUR
    // *   DAY
    std::shared_ptr<string> trafficControlUnit_ = nullptr;
    // The default throttling value for each user.
    std::shared_ptr<int32_t> userDefault_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
