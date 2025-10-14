// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHANGEDETAILLISTOFORDERNUMRESPONSEBODYDATALISTCHANGEFEEDETAILS_HPP_
#define ALIBABACLOUD_MODELS_CHANGEDETAILLISTOFORDERNUMRESPONSEBODYDATALISTCHANGEFEEDETAILS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ChangeDetailListOfOrderNumResponseBodyDataListChangeFeeDetailsChangeFee.hpp>
#include <alibabacloud/models/ChangeDetailListOfOrderNumResponseBodyDataListChangeFeeDetailsPassenger.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AirticketOpen20230117
{
namespace Models
{
  class ChangeDetailListOfOrderNumResponseBodyDataListChangeFeeDetails : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChangeDetailListOfOrderNumResponseBodyDataListChangeFeeDetails& obj) { 
      DARABONBA_PTR_TO_JSON(change_fee, changeFee_);
      DARABONBA_PTR_TO_JSON(passenger, passenger_);
    };
    friend void from_json(const Darabonba::Json& j, ChangeDetailListOfOrderNumResponseBodyDataListChangeFeeDetails& obj) { 
      DARABONBA_PTR_FROM_JSON(change_fee, changeFee_);
      DARABONBA_PTR_FROM_JSON(passenger, passenger_);
    };
    ChangeDetailListOfOrderNumResponseBodyDataListChangeFeeDetails() = default ;
    ChangeDetailListOfOrderNumResponseBodyDataListChangeFeeDetails(const ChangeDetailListOfOrderNumResponseBodyDataListChangeFeeDetails &) = default ;
    ChangeDetailListOfOrderNumResponseBodyDataListChangeFeeDetails(ChangeDetailListOfOrderNumResponseBodyDataListChangeFeeDetails &&) = default ;
    ChangeDetailListOfOrderNumResponseBodyDataListChangeFeeDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChangeDetailListOfOrderNumResponseBodyDataListChangeFeeDetails() = default ;
    ChangeDetailListOfOrderNumResponseBodyDataListChangeFeeDetails& operator=(const ChangeDetailListOfOrderNumResponseBodyDataListChangeFeeDetails &) = default ;
    ChangeDetailListOfOrderNumResponseBodyDataListChangeFeeDetails& operator=(ChangeDetailListOfOrderNumResponseBodyDataListChangeFeeDetails &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->changeFee_ == nullptr
        && return this->passenger_ == nullptr; };
    // changeFee Field Functions 
    bool hasChangeFee() const { return this->changeFee_ != nullptr;};
    void deleteChangeFee() { this->changeFee_ = nullptr;};
    inline const Models::ChangeDetailListOfOrderNumResponseBodyDataListChangeFeeDetailsChangeFee & changeFee() const { DARABONBA_PTR_GET_CONST(changeFee_, Models::ChangeDetailListOfOrderNumResponseBodyDataListChangeFeeDetailsChangeFee) };
    inline Models::ChangeDetailListOfOrderNumResponseBodyDataListChangeFeeDetailsChangeFee changeFee() { DARABONBA_PTR_GET(changeFee_, Models::ChangeDetailListOfOrderNumResponseBodyDataListChangeFeeDetailsChangeFee) };
    inline ChangeDetailListOfOrderNumResponseBodyDataListChangeFeeDetails& setChangeFee(const Models::ChangeDetailListOfOrderNumResponseBodyDataListChangeFeeDetailsChangeFee & changeFee) { DARABONBA_PTR_SET_VALUE(changeFee_, changeFee) };
    inline ChangeDetailListOfOrderNumResponseBodyDataListChangeFeeDetails& setChangeFee(Models::ChangeDetailListOfOrderNumResponseBodyDataListChangeFeeDetailsChangeFee && changeFee) { DARABONBA_PTR_SET_RVALUE(changeFee_, changeFee) };


    // passenger Field Functions 
    bool hasPassenger() const { return this->passenger_ != nullptr;};
    void deletePassenger() { this->passenger_ = nullptr;};
    inline const Models::ChangeDetailListOfOrderNumResponseBodyDataListChangeFeeDetailsPassenger & passenger() const { DARABONBA_PTR_GET_CONST(passenger_, Models::ChangeDetailListOfOrderNumResponseBodyDataListChangeFeeDetailsPassenger) };
    inline Models::ChangeDetailListOfOrderNumResponseBodyDataListChangeFeeDetailsPassenger passenger() { DARABONBA_PTR_GET(passenger_, Models::ChangeDetailListOfOrderNumResponseBodyDataListChangeFeeDetailsPassenger) };
    inline ChangeDetailListOfOrderNumResponseBodyDataListChangeFeeDetails& setPassenger(const Models::ChangeDetailListOfOrderNumResponseBodyDataListChangeFeeDetailsPassenger & passenger) { DARABONBA_PTR_SET_VALUE(passenger_, passenger) };
    inline ChangeDetailListOfOrderNumResponseBodyDataListChangeFeeDetails& setPassenger(Models::ChangeDetailListOfOrderNumResponseBodyDataListChangeFeeDetailsPassenger && passenger) { DARABONBA_PTR_SET_RVALUE(passenger_, passenger) };


  protected:
    std::shared_ptr<Models::ChangeDetailListOfOrderNumResponseBodyDataListChangeFeeDetailsChangeFee> changeFee_ = nullptr;
    std::shared_ptr<Models::ChangeDetailListOfOrderNumResponseBodyDataListChangeFeeDetailsPassenger> passenger_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
