// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTREFUNDPRECALRESPONSEBODYMODULERETURNREASON_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTREFUNDPRECALRESPONSEBODYMODULERETURNREASON_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class FlightRefundPreCalResponseBodyModuleReturnReason : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightRefundPreCalResponseBodyModuleReturnReason& obj) { 
      DARABONBA_PTR_TO_JSON(extend_desc, extendDesc_);
      DARABONBA_PTR_TO_JSON(person, person_);
      DARABONBA_PTR_TO_JSON(reason_code, reasonCode_);
      DARABONBA_PTR_TO_JSON(reason_show, reasonShow_);
      DARABONBA_PTR_TO_JSON(reason_type, reasonType_);
      DARABONBA_PTR_TO_JSON(volunteer, volunteer_);
    };
    friend void from_json(const Darabonba::Json& j, FlightRefundPreCalResponseBodyModuleReturnReason& obj) { 
      DARABONBA_PTR_FROM_JSON(extend_desc, extendDesc_);
      DARABONBA_PTR_FROM_JSON(person, person_);
      DARABONBA_PTR_FROM_JSON(reason_code, reasonCode_);
      DARABONBA_PTR_FROM_JSON(reason_show, reasonShow_);
      DARABONBA_PTR_FROM_JSON(reason_type, reasonType_);
      DARABONBA_PTR_FROM_JSON(volunteer, volunteer_);
    };
    FlightRefundPreCalResponseBodyModuleReturnReason() = default ;
    FlightRefundPreCalResponseBodyModuleReturnReason(const FlightRefundPreCalResponseBodyModuleReturnReason &) = default ;
    FlightRefundPreCalResponseBodyModuleReturnReason(FlightRefundPreCalResponseBodyModuleReturnReason &&) = default ;
    FlightRefundPreCalResponseBodyModuleReturnReason(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightRefundPreCalResponseBodyModuleReturnReason() = default ;
    FlightRefundPreCalResponseBodyModuleReturnReason& operator=(const FlightRefundPreCalResponseBodyModuleReturnReason &) = default ;
    FlightRefundPreCalResponseBodyModuleReturnReason& operator=(FlightRefundPreCalResponseBodyModuleReturnReason &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->extendDesc_ != nullptr
        && this->person_ != nullptr && this->reasonCode_ != nullptr && this->reasonShow_ != nullptr && this->reasonType_ != nullptr && this->volunteer_ != nullptr; };
    // extendDesc Field Functions 
    bool hasExtendDesc() const { return this->extendDesc_ != nullptr;};
    void deleteExtendDesc() { this->extendDesc_ = nullptr;};
    inline string extendDesc() const { DARABONBA_PTR_GET_DEFAULT(extendDesc_, "") };
    inline FlightRefundPreCalResponseBodyModuleReturnReason& setExtendDesc(string extendDesc) { DARABONBA_PTR_SET_VALUE(extendDesc_, extendDesc) };


    // person Field Functions 
    bool hasPerson() const { return this->person_ != nullptr;};
    void deletePerson() { this->person_ = nullptr;};
    inline int32_t person() const { DARABONBA_PTR_GET_DEFAULT(person_, 0) };
    inline FlightRefundPreCalResponseBodyModuleReturnReason& setPerson(int32_t person) { DARABONBA_PTR_SET_VALUE(person_, person) };


    // reasonCode Field Functions 
    bool hasReasonCode() const { return this->reasonCode_ != nullptr;};
    void deleteReasonCode() { this->reasonCode_ = nullptr;};
    inline int32_t reasonCode() const { DARABONBA_PTR_GET_DEFAULT(reasonCode_, 0) };
    inline FlightRefundPreCalResponseBodyModuleReturnReason& setReasonCode(int32_t reasonCode) { DARABONBA_PTR_SET_VALUE(reasonCode_, reasonCode) };


    // reasonShow Field Functions 
    bool hasReasonShow() const { return this->reasonShow_ != nullptr;};
    void deleteReasonShow() { this->reasonShow_ = nullptr;};
    inline string reasonShow() const { DARABONBA_PTR_GET_DEFAULT(reasonShow_, "") };
    inline FlightRefundPreCalResponseBodyModuleReturnReason& setReasonShow(string reasonShow) { DARABONBA_PTR_SET_VALUE(reasonShow_, reasonShow) };


    // reasonType Field Functions 
    bool hasReasonType() const { return this->reasonType_ != nullptr;};
    void deleteReasonType() { this->reasonType_ = nullptr;};
    inline int32_t reasonType() const { DARABONBA_PTR_GET_DEFAULT(reasonType_, 0) };
    inline FlightRefundPreCalResponseBodyModuleReturnReason& setReasonType(int32_t reasonType) { DARABONBA_PTR_SET_VALUE(reasonType_, reasonType) };


    // volunteer Field Functions 
    bool hasVolunteer() const { return this->volunteer_ != nullptr;};
    void deleteVolunteer() { this->volunteer_ = nullptr;};
    inline int32_t volunteer() const { DARABONBA_PTR_GET_DEFAULT(volunteer_, 0) };
    inline FlightRefundPreCalResponseBodyModuleReturnReason& setVolunteer(int32_t volunteer) { DARABONBA_PTR_SET_VALUE(volunteer_, volunteer) };


  protected:
    std::shared_ptr<string> extendDesc_ = nullptr;
    std::shared_ptr<int32_t> person_ = nullptr;
    std::shared_ptr<int32_t> reasonCode_ = nullptr;
    std::shared_ptr<string> reasonShow_ = nullptr;
    std::shared_ptr<int32_t> reasonType_ = nullptr;
    std::shared_ptr<int32_t> volunteer_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
