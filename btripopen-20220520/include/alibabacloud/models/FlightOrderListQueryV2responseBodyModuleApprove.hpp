// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTORDERLISTQUERYV2RESPONSEBODYMODULEAPPROVE_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTORDERLISTQUERYV2RESPONSEBODYMODULEAPPROVE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class FlightOrderListQueryV2ResponseBodyModuleApprove : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightOrderListQueryV2ResponseBodyModuleApprove& obj) { 
      DARABONBA_PTR_TO_JSON(approve_id, approveId_);
      DARABONBA_PTR_TO_JSON(btrip_title, btripTitle_);
      DARABONBA_PTR_TO_JSON(exceed_approve_id, exceedApproveId_);
      DARABONBA_PTR_TO_JSON(thirdpart_approve_id, thirdpartApproveId_);
      DARABONBA_PTR_TO_JSON(thirdpart_exceed_approve_id, thirdpartExceedApproveId_);
    };
    friend void from_json(const Darabonba::Json& j, FlightOrderListQueryV2ResponseBodyModuleApprove& obj) { 
      DARABONBA_PTR_FROM_JSON(approve_id, approveId_);
      DARABONBA_PTR_FROM_JSON(btrip_title, btripTitle_);
      DARABONBA_PTR_FROM_JSON(exceed_approve_id, exceedApproveId_);
      DARABONBA_PTR_FROM_JSON(thirdpart_approve_id, thirdpartApproveId_);
      DARABONBA_PTR_FROM_JSON(thirdpart_exceed_approve_id, thirdpartExceedApproveId_);
    };
    FlightOrderListQueryV2ResponseBodyModuleApprove() = default ;
    FlightOrderListQueryV2ResponseBodyModuleApprove(const FlightOrderListQueryV2ResponseBodyModuleApprove &) = default ;
    FlightOrderListQueryV2ResponseBodyModuleApprove(FlightOrderListQueryV2ResponseBodyModuleApprove &&) = default ;
    FlightOrderListQueryV2ResponseBodyModuleApprove(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightOrderListQueryV2ResponseBodyModuleApprove() = default ;
    FlightOrderListQueryV2ResponseBodyModuleApprove& operator=(const FlightOrderListQueryV2ResponseBodyModuleApprove &) = default ;
    FlightOrderListQueryV2ResponseBodyModuleApprove& operator=(FlightOrderListQueryV2ResponseBodyModuleApprove &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->approveId_ != nullptr
        && this->btripTitle_ != nullptr && this->exceedApproveId_ != nullptr && this->thirdpartApproveId_ != nullptr && this->thirdpartExceedApproveId_ != nullptr; };
    // approveId Field Functions 
    bool hasApproveId() const { return this->approveId_ != nullptr;};
    void deleteApproveId() { this->approveId_ = nullptr;};
    inline int64_t approveId() const { DARABONBA_PTR_GET_DEFAULT(approveId_, 0L) };
    inline FlightOrderListQueryV2ResponseBodyModuleApprove& setApproveId(int64_t approveId) { DARABONBA_PTR_SET_VALUE(approveId_, approveId) };


    // btripTitle Field Functions 
    bool hasBtripTitle() const { return this->btripTitle_ != nullptr;};
    void deleteBtripTitle() { this->btripTitle_ = nullptr;};
    inline string btripTitle() const { DARABONBA_PTR_GET_DEFAULT(btripTitle_, "") };
    inline FlightOrderListQueryV2ResponseBodyModuleApprove& setBtripTitle(string btripTitle) { DARABONBA_PTR_SET_VALUE(btripTitle_, btripTitle) };


    // exceedApproveId Field Functions 
    bool hasExceedApproveId() const { return this->exceedApproveId_ != nullptr;};
    void deleteExceedApproveId() { this->exceedApproveId_ = nullptr;};
    inline string exceedApproveId() const { DARABONBA_PTR_GET_DEFAULT(exceedApproveId_, "") };
    inline FlightOrderListQueryV2ResponseBodyModuleApprove& setExceedApproveId(string exceedApproveId) { DARABONBA_PTR_SET_VALUE(exceedApproveId_, exceedApproveId) };


    // thirdpartApproveId Field Functions 
    bool hasThirdpartApproveId() const { return this->thirdpartApproveId_ != nullptr;};
    void deleteThirdpartApproveId() { this->thirdpartApproveId_ = nullptr;};
    inline string thirdpartApproveId() const { DARABONBA_PTR_GET_DEFAULT(thirdpartApproveId_, "") };
    inline FlightOrderListQueryV2ResponseBodyModuleApprove& setThirdpartApproveId(string thirdpartApproveId) { DARABONBA_PTR_SET_VALUE(thirdpartApproveId_, thirdpartApproveId) };


    // thirdpartExceedApproveId Field Functions 
    bool hasThirdpartExceedApproveId() const { return this->thirdpartExceedApproveId_ != nullptr;};
    void deleteThirdpartExceedApproveId() { this->thirdpartExceedApproveId_ = nullptr;};
    inline string thirdpartExceedApproveId() const { DARABONBA_PTR_GET_DEFAULT(thirdpartExceedApproveId_, "") };
    inline FlightOrderListQueryV2ResponseBodyModuleApprove& setThirdpartExceedApproveId(string thirdpartExceedApproveId) { DARABONBA_PTR_SET_VALUE(thirdpartExceedApproveId_, thirdpartExceedApproveId) };


  protected:
    std::shared_ptr<int64_t> approveId_ = nullptr;
    std::shared_ptr<string> btripTitle_ = nullptr;
    std::shared_ptr<string> exceedApproveId_ = nullptr;
    std::shared_ptr<string> thirdpartApproveId_ = nullptr;
    std::shared_ptr<string> thirdpartExceedApproveId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
