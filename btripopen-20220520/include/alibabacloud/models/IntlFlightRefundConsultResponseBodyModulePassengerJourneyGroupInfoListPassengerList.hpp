// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INTLFLIGHTREFUNDCONSULTRESPONSEBODYMODULEPASSENGERJOURNEYGROUPINFOLISTPASSENGERLIST_HPP_
#define ALIBABACLOUD_MODELS_INTLFLIGHTREFUNDCONSULTRESPONSEBODYMODULEPASSENGERJOURNEYGROUPINFOLISTPASSENGERLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class IntlFlightRefundConsultResponseBodyModulePassengerJourneyGroupInfoListPassengerList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IntlFlightRefundConsultResponseBodyModulePassengerJourneyGroupInfoListPassengerList& obj) { 
      DARABONBA_PTR_TO_JSON(full_name, fullName_);
      DARABONBA_PTR_TO_JSON(passenger_id, passengerId_);
    };
    friend void from_json(const Darabonba::Json& j, IntlFlightRefundConsultResponseBodyModulePassengerJourneyGroupInfoListPassengerList& obj) { 
      DARABONBA_PTR_FROM_JSON(full_name, fullName_);
      DARABONBA_PTR_FROM_JSON(passenger_id, passengerId_);
    };
    IntlFlightRefundConsultResponseBodyModulePassengerJourneyGroupInfoListPassengerList() = default ;
    IntlFlightRefundConsultResponseBodyModulePassengerJourneyGroupInfoListPassengerList(const IntlFlightRefundConsultResponseBodyModulePassengerJourneyGroupInfoListPassengerList &) = default ;
    IntlFlightRefundConsultResponseBodyModulePassengerJourneyGroupInfoListPassengerList(IntlFlightRefundConsultResponseBodyModulePassengerJourneyGroupInfoListPassengerList &&) = default ;
    IntlFlightRefundConsultResponseBodyModulePassengerJourneyGroupInfoListPassengerList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IntlFlightRefundConsultResponseBodyModulePassengerJourneyGroupInfoListPassengerList() = default ;
    IntlFlightRefundConsultResponseBodyModulePassengerJourneyGroupInfoListPassengerList& operator=(const IntlFlightRefundConsultResponseBodyModulePassengerJourneyGroupInfoListPassengerList &) = default ;
    IntlFlightRefundConsultResponseBodyModulePassengerJourneyGroupInfoListPassengerList& operator=(IntlFlightRefundConsultResponseBodyModulePassengerJourneyGroupInfoListPassengerList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->fullName_ != nullptr
        && this->passengerId_ != nullptr; };
    // fullName Field Functions 
    bool hasFullName() const { return this->fullName_ != nullptr;};
    void deleteFullName() { this->fullName_ = nullptr;};
    inline string fullName() const { DARABONBA_PTR_GET_DEFAULT(fullName_, "") };
    inline IntlFlightRefundConsultResponseBodyModulePassengerJourneyGroupInfoListPassengerList& setFullName(string fullName) { DARABONBA_PTR_SET_VALUE(fullName_, fullName) };


    // passengerId Field Functions 
    bool hasPassengerId() const { return this->passengerId_ != nullptr;};
    void deletePassengerId() { this->passengerId_ = nullptr;};
    inline int64_t passengerId() const { DARABONBA_PTR_GET_DEFAULT(passengerId_, 0L) };
    inline IntlFlightRefundConsultResponseBodyModulePassengerJourneyGroupInfoListPassengerList& setPassengerId(int64_t passengerId) { DARABONBA_PTR_SET_VALUE(passengerId_, passengerId) };


  protected:
    std::shared_ptr<string> fullName_ = nullptr;
    std::shared_ptr<int64_t> passengerId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
