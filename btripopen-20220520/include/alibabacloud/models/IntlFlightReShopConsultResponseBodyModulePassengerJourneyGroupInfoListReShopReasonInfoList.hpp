// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INTLFLIGHTRESHOPCONSULTRESPONSEBODYMODULEPASSENGERJOURNEYGROUPINFOLISTRESHOPREASONINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_INTLFLIGHTRESHOPCONSULTRESPONSEBODYMODULEPASSENGERJOURNEYGROUPINFOLISTRESHOPREASONINFOLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class IntlFlightReShopConsultResponseBodyModulePassengerJourneyGroupInfoListReShopReasonInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IntlFlightReShopConsultResponseBodyModulePassengerJourneyGroupInfoListReShopReasonInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(reason_code, reasonCode_);
      DARABONBA_PTR_TO_JSON(reason_desc, reasonDesc_);
      DARABONBA_PTR_TO_JSON(voluntary, voluntary_);
    };
    friend void from_json(const Darabonba::Json& j, IntlFlightReShopConsultResponseBodyModulePassengerJourneyGroupInfoListReShopReasonInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(reason_code, reasonCode_);
      DARABONBA_PTR_FROM_JSON(reason_desc, reasonDesc_);
      DARABONBA_PTR_FROM_JSON(voluntary, voluntary_);
    };
    IntlFlightReShopConsultResponseBodyModulePassengerJourneyGroupInfoListReShopReasonInfoList() = default ;
    IntlFlightReShopConsultResponseBodyModulePassengerJourneyGroupInfoListReShopReasonInfoList(const IntlFlightReShopConsultResponseBodyModulePassengerJourneyGroupInfoListReShopReasonInfoList &) = default ;
    IntlFlightReShopConsultResponseBodyModulePassengerJourneyGroupInfoListReShopReasonInfoList(IntlFlightReShopConsultResponseBodyModulePassengerJourneyGroupInfoListReShopReasonInfoList &&) = default ;
    IntlFlightReShopConsultResponseBodyModulePassengerJourneyGroupInfoListReShopReasonInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IntlFlightReShopConsultResponseBodyModulePassengerJourneyGroupInfoListReShopReasonInfoList() = default ;
    IntlFlightReShopConsultResponseBodyModulePassengerJourneyGroupInfoListReShopReasonInfoList& operator=(const IntlFlightReShopConsultResponseBodyModulePassengerJourneyGroupInfoListReShopReasonInfoList &) = default ;
    IntlFlightReShopConsultResponseBodyModulePassengerJourneyGroupInfoListReShopReasonInfoList& operator=(IntlFlightReShopConsultResponseBodyModulePassengerJourneyGroupInfoListReShopReasonInfoList &&) = default ;
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
    inline IntlFlightReShopConsultResponseBodyModulePassengerJourneyGroupInfoListReShopReasonInfoList& setReasonCode(string reasonCode) { DARABONBA_PTR_SET_VALUE(reasonCode_, reasonCode) };


    // reasonDesc Field Functions 
    bool hasReasonDesc() const { return this->reasonDesc_ != nullptr;};
    void deleteReasonDesc() { this->reasonDesc_ = nullptr;};
    inline string reasonDesc() const { DARABONBA_PTR_GET_DEFAULT(reasonDesc_, "") };
    inline IntlFlightReShopConsultResponseBodyModulePassengerJourneyGroupInfoListReShopReasonInfoList& setReasonDesc(string reasonDesc) { DARABONBA_PTR_SET_VALUE(reasonDesc_, reasonDesc) };


    // voluntary Field Functions 
    bool hasVoluntary() const { return this->voluntary_ != nullptr;};
    void deleteVoluntary() { this->voluntary_ = nullptr;};
    inline bool voluntary() const { DARABONBA_PTR_GET_DEFAULT(voluntary_, false) };
    inline IntlFlightReShopConsultResponseBodyModulePassengerJourneyGroupInfoListReShopReasonInfoList& setVoluntary(bool voluntary) { DARABONBA_PTR_SET_VALUE(voluntary_, voluntary) };


  protected:
    std::shared_ptr<string> reasonCode_ = nullptr;
    std::shared_ptr<string> reasonDesc_ = nullptr;
    std::shared_ptr<bool> voluntary_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
