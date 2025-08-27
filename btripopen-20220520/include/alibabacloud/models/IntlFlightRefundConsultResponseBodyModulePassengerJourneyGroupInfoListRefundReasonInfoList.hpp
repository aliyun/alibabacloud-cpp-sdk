// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INTLFLIGHTREFUNDCONSULTRESPONSEBODYMODULEPASSENGERJOURNEYGROUPINFOLISTREFUNDREASONINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_INTLFLIGHTREFUNDCONSULTRESPONSEBODYMODULEPASSENGERJOURNEYGROUPINFOLISTREFUNDREASONINFOLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class IntlFlightRefundConsultResponseBodyModulePassengerJourneyGroupInfoListRefundReasonInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IntlFlightRefundConsultResponseBodyModulePassengerJourneyGroupInfoListRefundReasonInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(reason_code, reasonCode_);
      DARABONBA_PTR_TO_JSON(reason_desc, reasonDesc_);
      DARABONBA_PTR_TO_JSON(voluntary, voluntary_);
    };
    friend void from_json(const Darabonba::Json& j, IntlFlightRefundConsultResponseBodyModulePassengerJourneyGroupInfoListRefundReasonInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(reason_code, reasonCode_);
      DARABONBA_PTR_FROM_JSON(reason_desc, reasonDesc_);
      DARABONBA_PTR_FROM_JSON(voluntary, voluntary_);
    };
    IntlFlightRefundConsultResponseBodyModulePassengerJourneyGroupInfoListRefundReasonInfoList() = default ;
    IntlFlightRefundConsultResponseBodyModulePassengerJourneyGroupInfoListRefundReasonInfoList(const IntlFlightRefundConsultResponseBodyModulePassengerJourneyGroupInfoListRefundReasonInfoList &) = default ;
    IntlFlightRefundConsultResponseBodyModulePassengerJourneyGroupInfoListRefundReasonInfoList(IntlFlightRefundConsultResponseBodyModulePassengerJourneyGroupInfoListRefundReasonInfoList &&) = default ;
    IntlFlightRefundConsultResponseBodyModulePassengerJourneyGroupInfoListRefundReasonInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IntlFlightRefundConsultResponseBodyModulePassengerJourneyGroupInfoListRefundReasonInfoList() = default ;
    IntlFlightRefundConsultResponseBodyModulePassengerJourneyGroupInfoListRefundReasonInfoList& operator=(const IntlFlightRefundConsultResponseBodyModulePassengerJourneyGroupInfoListRefundReasonInfoList &) = default ;
    IntlFlightRefundConsultResponseBodyModulePassengerJourneyGroupInfoListRefundReasonInfoList& operator=(IntlFlightRefundConsultResponseBodyModulePassengerJourneyGroupInfoListRefundReasonInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->reasonCode_ != nullptr
        && this->reasonDesc_ != nullptr && this->voluntary_ != nullptr; };
    // reasonCode Field Functions 
    bool hasReasonCode() const { return this->reasonCode_ != nullptr;};
    void deleteReasonCode() { this->reasonCode_ = nullptr;};
    inline string reasonCode() const { DARABONBA_PTR_GET_DEFAULT(reasonCode_, "") };
    inline IntlFlightRefundConsultResponseBodyModulePassengerJourneyGroupInfoListRefundReasonInfoList& setReasonCode(string reasonCode) { DARABONBA_PTR_SET_VALUE(reasonCode_, reasonCode) };


    // reasonDesc Field Functions 
    bool hasReasonDesc() const { return this->reasonDesc_ != nullptr;};
    void deleteReasonDesc() { this->reasonDesc_ = nullptr;};
    inline string reasonDesc() const { DARABONBA_PTR_GET_DEFAULT(reasonDesc_, "") };
    inline IntlFlightRefundConsultResponseBodyModulePassengerJourneyGroupInfoListRefundReasonInfoList& setReasonDesc(string reasonDesc) { DARABONBA_PTR_SET_VALUE(reasonDesc_, reasonDesc) };


    // voluntary Field Functions 
    bool hasVoluntary() const { return this->voluntary_ != nullptr;};
    void deleteVoluntary() { this->voluntary_ = nullptr;};
    inline bool voluntary() const { DARABONBA_PTR_GET_DEFAULT(voluntary_, false) };
    inline IntlFlightRefundConsultResponseBodyModulePassengerJourneyGroupInfoListRefundReasonInfoList& setVoluntary(bool voluntary) { DARABONBA_PTR_SET_VALUE(voluntary_, voluntary) };


  protected:
    std::shared_ptr<string> reasonCode_ = nullptr;
    std::shared_ptr<string> reasonDesc_ = nullptr;
    std::shared_ptr<bool> voluntary_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
