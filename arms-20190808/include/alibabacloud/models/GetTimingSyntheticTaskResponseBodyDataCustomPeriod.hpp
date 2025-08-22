// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTIMINGSYNTHETICTASKRESPONSEBODYDATACUSTOMPERIOD_HPP_
#define ALIBABACLOUD_MODELS_GETTIMINGSYNTHETICTASKRESPONSEBODYDATACUSTOMPERIOD_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class GetTimingSyntheticTaskResponseBodyDataCustomPeriod : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTimingSyntheticTaskResponseBodyDataCustomPeriod& obj) { 
      DARABONBA_PTR_TO_JSON(EndHour, endHour_);
      DARABONBA_PTR_TO_JSON(StartHour, startHour_);
    };
    friend void from_json(const Darabonba::Json& j, GetTimingSyntheticTaskResponseBodyDataCustomPeriod& obj) { 
      DARABONBA_PTR_FROM_JSON(EndHour, endHour_);
      DARABONBA_PTR_FROM_JSON(StartHour, startHour_);
    };
    GetTimingSyntheticTaskResponseBodyDataCustomPeriod() = default ;
    GetTimingSyntheticTaskResponseBodyDataCustomPeriod(const GetTimingSyntheticTaskResponseBodyDataCustomPeriod &) = default ;
    GetTimingSyntheticTaskResponseBodyDataCustomPeriod(GetTimingSyntheticTaskResponseBodyDataCustomPeriod &&) = default ;
    GetTimingSyntheticTaskResponseBodyDataCustomPeriod(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTimingSyntheticTaskResponseBodyDataCustomPeriod() = default ;
    GetTimingSyntheticTaskResponseBodyDataCustomPeriod& operator=(const GetTimingSyntheticTaskResponseBodyDataCustomPeriod &) = default ;
    GetTimingSyntheticTaskResponseBodyDataCustomPeriod& operator=(GetTimingSyntheticTaskResponseBodyDataCustomPeriod &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->endHour_ != nullptr
        && this->startHour_ != nullptr; };
    // endHour Field Functions 
    bool hasEndHour() const { return this->endHour_ != nullptr;};
    void deleteEndHour() { this->endHour_ = nullptr;};
    inline int64_t endHour() const { DARABONBA_PTR_GET_DEFAULT(endHour_, 0L) };
    inline GetTimingSyntheticTaskResponseBodyDataCustomPeriod& setEndHour(int64_t endHour) { DARABONBA_PTR_SET_VALUE(endHour_, endHour) };


    // startHour Field Functions 
    bool hasStartHour() const { return this->startHour_ != nullptr;};
    void deleteStartHour() { this->startHour_ = nullptr;};
    inline int64_t startHour() const { DARABONBA_PTR_GET_DEFAULT(startHour_, 0L) };
    inline GetTimingSyntheticTaskResponseBodyDataCustomPeriod& setStartHour(int64_t startHour) { DARABONBA_PTR_SET_VALUE(startHour_, startHour) };


  protected:
    // The hour at which the test ends. Valid values: 0 to 24.
    std::shared_ptr<int64_t> endHour_ = nullptr;
    // The hour at which the test starts. Valid values: 0 to 24.
    std::shared_ptr<int64_t> startHour_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
