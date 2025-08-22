// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATETIMINGSYNTHETICTASKREQUESTCUSTOMPERIOD_HPP_
#define ALIBABACLOUD_MODELS_UPDATETIMINGSYNTHETICTASKREQUESTCUSTOMPERIOD_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class UpdateTimingSyntheticTaskRequestCustomPeriod : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateTimingSyntheticTaskRequestCustomPeriod& obj) { 
      DARABONBA_PTR_TO_JSON(EndHour, endHour_);
      DARABONBA_PTR_TO_JSON(StartHour, startHour_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateTimingSyntheticTaskRequestCustomPeriod& obj) { 
      DARABONBA_PTR_FROM_JSON(EndHour, endHour_);
      DARABONBA_PTR_FROM_JSON(StartHour, startHour_);
    };
    UpdateTimingSyntheticTaskRequestCustomPeriod() = default ;
    UpdateTimingSyntheticTaskRequestCustomPeriod(const UpdateTimingSyntheticTaskRequestCustomPeriod &) = default ;
    UpdateTimingSyntheticTaskRequestCustomPeriod(UpdateTimingSyntheticTaskRequestCustomPeriod &&) = default ;
    UpdateTimingSyntheticTaskRequestCustomPeriod(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateTimingSyntheticTaskRequestCustomPeriod() = default ;
    UpdateTimingSyntheticTaskRequestCustomPeriod& operator=(const UpdateTimingSyntheticTaskRequestCustomPeriod &) = default ;
    UpdateTimingSyntheticTaskRequestCustomPeriod& operator=(UpdateTimingSyntheticTaskRequestCustomPeriod &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->endHour_ != nullptr
        && this->startHour_ != nullptr; };
    // endHour Field Functions 
    bool hasEndHour() const { return this->endHour_ != nullptr;};
    void deleteEndHour() { this->endHour_ = nullptr;};
    inline int32_t endHour() const { DARABONBA_PTR_GET_DEFAULT(endHour_, 0) };
    inline UpdateTimingSyntheticTaskRequestCustomPeriod& setEndHour(int32_t endHour) { DARABONBA_PTR_SET_VALUE(endHour_, endHour) };


    // startHour Field Functions 
    bool hasStartHour() const { return this->startHour_ != nullptr;};
    void deleteStartHour() { this->startHour_ = nullptr;};
    inline int32_t startHour() const { DARABONBA_PTR_GET_DEFAULT(startHour_, 0) };
    inline UpdateTimingSyntheticTaskRequestCustomPeriod& setStartHour(int32_t startHour) { DARABONBA_PTR_SET_VALUE(startHour_, startHour) };


  protected:
    // The hour at which the test ends. Valid values: 0 to 24.
    std::shared_ptr<int32_t> endHour_ = nullptr;
    // The hour at which the test starts. Valid values: 0 to 24.
    std::shared_ptr<int32_t> startHour_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
