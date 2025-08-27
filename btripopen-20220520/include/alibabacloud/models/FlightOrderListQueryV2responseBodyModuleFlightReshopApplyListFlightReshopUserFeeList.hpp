// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTORDERLISTQUERYV2RESPONSEBODYMODULEFLIGHTRESHOPAPPLYLISTFLIGHTRESHOPUSERFEELIST_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTORDERLISTQUERYV2RESPONSEBODYMODULEFLIGHTRESHOPAPPLYLISTFLIGHTRESHOPUSERFEELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class FlightOrderListQueryV2ResponseBodyModuleFlightReshopApplyListFlightReshopUserFeeList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightOrderListQueryV2ResponseBodyModuleFlightReshopApplyListFlightReshopUserFeeList& obj) { 
      DARABONBA_PTR_TO_JSON(change_fee, changeFee_);
      DARABONBA_PTR_TO_JSON(reshop_corp_amount, reshopCorpAmount_);
      DARABONBA_PTR_TO_JSON(reshop_person_amount, reshopPersonAmount_);
      DARABONBA_PTR_TO_JSON(upgrade_fee, upgradeFee_);
      DARABONBA_PTR_TO_JSON(user_id, userId_);
    };
    friend void from_json(const Darabonba::Json& j, FlightOrderListQueryV2ResponseBodyModuleFlightReshopApplyListFlightReshopUserFeeList& obj) { 
      DARABONBA_PTR_FROM_JSON(change_fee, changeFee_);
      DARABONBA_PTR_FROM_JSON(reshop_corp_amount, reshopCorpAmount_);
      DARABONBA_PTR_FROM_JSON(reshop_person_amount, reshopPersonAmount_);
      DARABONBA_PTR_FROM_JSON(upgrade_fee, upgradeFee_);
      DARABONBA_PTR_FROM_JSON(user_id, userId_);
    };
    FlightOrderListQueryV2ResponseBodyModuleFlightReshopApplyListFlightReshopUserFeeList() = default ;
    FlightOrderListQueryV2ResponseBodyModuleFlightReshopApplyListFlightReshopUserFeeList(const FlightOrderListQueryV2ResponseBodyModuleFlightReshopApplyListFlightReshopUserFeeList &) = default ;
    FlightOrderListQueryV2ResponseBodyModuleFlightReshopApplyListFlightReshopUserFeeList(FlightOrderListQueryV2ResponseBodyModuleFlightReshopApplyListFlightReshopUserFeeList &&) = default ;
    FlightOrderListQueryV2ResponseBodyModuleFlightReshopApplyListFlightReshopUserFeeList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightOrderListQueryV2ResponseBodyModuleFlightReshopApplyListFlightReshopUserFeeList() = default ;
    FlightOrderListQueryV2ResponseBodyModuleFlightReshopApplyListFlightReshopUserFeeList& operator=(const FlightOrderListQueryV2ResponseBodyModuleFlightReshopApplyListFlightReshopUserFeeList &) = default ;
    FlightOrderListQueryV2ResponseBodyModuleFlightReshopApplyListFlightReshopUserFeeList& operator=(FlightOrderListQueryV2ResponseBodyModuleFlightReshopApplyListFlightReshopUserFeeList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->changeFee_ != nullptr
        && this->reshopCorpAmount_ != nullptr && this->reshopPersonAmount_ != nullptr && this->upgradeFee_ != nullptr && this->userId_ != nullptr; };
    // changeFee Field Functions 
    bool hasChangeFee() const { return this->changeFee_ != nullptr;};
    void deleteChangeFee() { this->changeFee_ = nullptr;};
    inline double changeFee() const { DARABONBA_PTR_GET_DEFAULT(changeFee_, 0.0) };
    inline FlightOrderListQueryV2ResponseBodyModuleFlightReshopApplyListFlightReshopUserFeeList& setChangeFee(double changeFee) { DARABONBA_PTR_SET_VALUE(changeFee_, changeFee) };


    // reshopCorpAmount Field Functions 
    bool hasReshopCorpAmount() const { return this->reshopCorpAmount_ != nullptr;};
    void deleteReshopCorpAmount() { this->reshopCorpAmount_ = nullptr;};
    inline double reshopCorpAmount() const { DARABONBA_PTR_GET_DEFAULT(reshopCorpAmount_, 0.0) };
    inline FlightOrderListQueryV2ResponseBodyModuleFlightReshopApplyListFlightReshopUserFeeList& setReshopCorpAmount(double reshopCorpAmount) { DARABONBA_PTR_SET_VALUE(reshopCorpAmount_, reshopCorpAmount) };


    // reshopPersonAmount Field Functions 
    bool hasReshopPersonAmount() const { return this->reshopPersonAmount_ != nullptr;};
    void deleteReshopPersonAmount() { this->reshopPersonAmount_ = nullptr;};
    inline double reshopPersonAmount() const { DARABONBA_PTR_GET_DEFAULT(reshopPersonAmount_, 0.0) };
    inline FlightOrderListQueryV2ResponseBodyModuleFlightReshopApplyListFlightReshopUserFeeList& setReshopPersonAmount(double reshopPersonAmount) { DARABONBA_PTR_SET_VALUE(reshopPersonAmount_, reshopPersonAmount) };


    // upgradeFee Field Functions 
    bool hasUpgradeFee() const { return this->upgradeFee_ != nullptr;};
    void deleteUpgradeFee() { this->upgradeFee_ = nullptr;};
    inline double upgradeFee() const { DARABONBA_PTR_GET_DEFAULT(upgradeFee_, 0.0) };
    inline FlightOrderListQueryV2ResponseBodyModuleFlightReshopApplyListFlightReshopUserFeeList& setUpgradeFee(double upgradeFee) { DARABONBA_PTR_SET_VALUE(upgradeFee_, upgradeFee) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline FlightOrderListQueryV2ResponseBodyModuleFlightReshopApplyListFlightReshopUserFeeList& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    std::shared_ptr<double> changeFee_ = nullptr;
    std::shared_ptr<double> reshopCorpAmount_ = nullptr;
    std::shared_ptr<double> reshopPersonAmount_ = nullptr;
    std::shared_ptr<double> upgradeFee_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
