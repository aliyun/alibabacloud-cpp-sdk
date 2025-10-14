// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHANGEDETAILRESPONSEBODYDATACHANGEFEEDETAILS_HPP_
#define ALIBABACLOUD_MODELS_CHANGEDETAILRESPONSEBODYDATACHANGEFEEDETAILS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ChangeDetailResponseBodyDataChangeFeeDetailsChangeFee.hpp>
#include <alibabacloud/models/ChangeDetailResponseBodyDataChangeFeeDetailsPassenger.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AirticketOpen20230117
{
namespace Models
{
  class ChangeDetailResponseBodyDataChangeFeeDetails : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChangeDetailResponseBodyDataChangeFeeDetails& obj) { 
      DARABONBA_PTR_TO_JSON(change_fee, changeFee_);
      DARABONBA_PTR_TO_JSON(passenger, passenger_);
    };
    friend void from_json(const Darabonba::Json& j, ChangeDetailResponseBodyDataChangeFeeDetails& obj) { 
      DARABONBA_PTR_FROM_JSON(change_fee, changeFee_);
      DARABONBA_PTR_FROM_JSON(passenger, passenger_);
    };
    ChangeDetailResponseBodyDataChangeFeeDetails() = default ;
    ChangeDetailResponseBodyDataChangeFeeDetails(const ChangeDetailResponseBodyDataChangeFeeDetails &) = default ;
    ChangeDetailResponseBodyDataChangeFeeDetails(ChangeDetailResponseBodyDataChangeFeeDetails &&) = default ;
    ChangeDetailResponseBodyDataChangeFeeDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChangeDetailResponseBodyDataChangeFeeDetails() = default ;
    ChangeDetailResponseBodyDataChangeFeeDetails& operator=(const ChangeDetailResponseBodyDataChangeFeeDetails &) = default ;
    ChangeDetailResponseBodyDataChangeFeeDetails& operator=(ChangeDetailResponseBodyDataChangeFeeDetails &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->changeFee_ == nullptr
        && return this->passenger_ == nullptr; };
    // changeFee Field Functions 
    bool hasChangeFee() const { return this->changeFee_ != nullptr;};
    void deleteChangeFee() { this->changeFee_ = nullptr;};
    inline const Models::ChangeDetailResponseBodyDataChangeFeeDetailsChangeFee & changeFee() const { DARABONBA_PTR_GET_CONST(changeFee_, Models::ChangeDetailResponseBodyDataChangeFeeDetailsChangeFee) };
    inline Models::ChangeDetailResponseBodyDataChangeFeeDetailsChangeFee changeFee() { DARABONBA_PTR_GET(changeFee_, Models::ChangeDetailResponseBodyDataChangeFeeDetailsChangeFee) };
    inline ChangeDetailResponseBodyDataChangeFeeDetails& setChangeFee(const Models::ChangeDetailResponseBodyDataChangeFeeDetailsChangeFee & changeFee) { DARABONBA_PTR_SET_VALUE(changeFee_, changeFee) };
    inline ChangeDetailResponseBodyDataChangeFeeDetails& setChangeFee(Models::ChangeDetailResponseBodyDataChangeFeeDetailsChangeFee && changeFee) { DARABONBA_PTR_SET_RVALUE(changeFee_, changeFee) };


    // passenger Field Functions 
    bool hasPassenger() const { return this->passenger_ != nullptr;};
    void deletePassenger() { this->passenger_ = nullptr;};
    inline const Models::ChangeDetailResponseBodyDataChangeFeeDetailsPassenger & passenger() const { DARABONBA_PTR_GET_CONST(passenger_, Models::ChangeDetailResponseBodyDataChangeFeeDetailsPassenger) };
    inline Models::ChangeDetailResponseBodyDataChangeFeeDetailsPassenger passenger() { DARABONBA_PTR_GET(passenger_, Models::ChangeDetailResponseBodyDataChangeFeeDetailsPassenger) };
    inline ChangeDetailResponseBodyDataChangeFeeDetails& setPassenger(const Models::ChangeDetailResponseBodyDataChangeFeeDetailsPassenger & passenger) { DARABONBA_PTR_SET_VALUE(passenger_, passenger) };
    inline ChangeDetailResponseBodyDataChangeFeeDetails& setPassenger(Models::ChangeDetailResponseBodyDataChangeFeeDetailsPassenger && passenger) { DARABONBA_PTR_SET_RVALUE(passenger_, passenger) };


  protected:
    std::shared_ptr<Models::ChangeDetailResponseBodyDataChangeFeeDetailsChangeFee> changeFee_ = nullptr;
    std::shared_ptr<Models::ChangeDetailResponseBodyDataChangeFeeDetailsPassenger> passenger_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
