// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRAINORDERCREATEREQUESTBUSINESSINFO_HPP_
#define ALIBABACLOUD_MODELS_TRAINORDERCREATEREQUESTBUSINESSINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class TrainOrderCreateRequestBusinessInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TrainOrderCreateRequestBusinessInfo& obj) { 
      DARABONBA_PTR_TO_JSON(customer_apply_id, customerApplyId_);
      DARABONBA_PTR_TO_JSON(customer_itinerary_id, customerItineraryId_);
    };
    friend void from_json(const Darabonba::Json& j, TrainOrderCreateRequestBusinessInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(customer_apply_id, customerApplyId_);
      DARABONBA_PTR_FROM_JSON(customer_itinerary_id, customerItineraryId_);
    };
    TrainOrderCreateRequestBusinessInfo() = default ;
    TrainOrderCreateRequestBusinessInfo(const TrainOrderCreateRequestBusinessInfo &) = default ;
    TrainOrderCreateRequestBusinessInfo(TrainOrderCreateRequestBusinessInfo &&) = default ;
    TrainOrderCreateRequestBusinessInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TrainOrderCreateRequestBusinessInfo() = default ;
    TrainOrderCreateRequestBusinessInfo& operator=(const TrainOrderCreateRequestBusinessInfo &) = default ;
    TrainOrderCreateRequestBusinessInfo& operator=(TrainOrderCreateRequestBusinessInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->customerApplyId_ != nullptr
        && this->customerItineraryId_ != nullptr; };
    // customerApplyId Field Functions 
    bool hasCustomerApplyId() const { return this->customerApplyId_ != nullptr;};
    void deleteCustomerApplyId() { this->customerApplyId_ = nullptr;};
    inline string customerApplyId() const { DARABONBA_PTR_GET_DEFAULT(customerApplyId_, "") };
    inline TrainOrderCreateRequestBusinessInfo& setCustomerApplyId(string customerApplyId) { DARABONBA_PTR_SET_VALUE(customerApplyId_, customerApplyId) };


    // customerItineraryId Field Functions 
    bool hasCustomerItineraryId() const { return this->customerItineraryId_ != nullptr;};
    void deleteCustomerItineraryId() { this->customerItineraryId_ = nullptr;};
    inline string customerItineraryId() const { DARABONBA_PTR_GET_DEFAULT(customerItineraryId_, "") };
    inline TrainOrderCreateRequestBusinessInfo& setCustomerItineraryId(string customerItineraryId) { DARABONBA_PTR_SET_VALUE(customerItineraryId_, customerItineraryId) };


  protected:
    std::shared_ptr<string> customerApplyId_ = nullptr;
    std::shared_ptr<string> customerItineraryId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
