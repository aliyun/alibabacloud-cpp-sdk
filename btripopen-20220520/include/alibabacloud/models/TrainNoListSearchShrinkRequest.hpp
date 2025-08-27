// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRAINNOLISTSEARCHSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_TRAINNOLISTSEARCHSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class TrainNoListSearchShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TrainNoListSearchShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(arr_location, arrLocation_);
      DARABONBA_PTR_TO_JSON(dep_date, depDate_);
      DARABONBA_PTR_TO_JSON(dep_location, depLocation_);
      DARABONBA_PTR_TO_JSON(option, optionShrink_);
      DARABONBA_PTR_TO_JSON(order_id, orderId_);
    };
    friend void from_json(const Darabonba::Json& j, TrainNoListSearchShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(arr_location, arrLocation_);
      DARABONBA_PTR_FROM_JSON(dep_date, depDate_);
      DARABONBA_PTR_FROM_JSON(dep_location, depLocation_);
      DARABONBA_PTR_FROM_JSON(option, optionShrink_);
      DARABONBA_PTR_FROM_JSON(order_id, orderId_);
    };
    TrainNoListSearchShrinkRequest() = default ;
    TrainNoListSearchShrinkRequest(const TrainNoListSearchShrinkRequest &) = default ;
    TrainNoListSearchShrinkRequest(TrainNoListSearchShrinkRequest &&) = default ;
    TrainNoListSearchShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TrainNoListSearchShrinkRequest() = default ;
    TrainNoListSearchShrinkRequest& operator=(const TrainNoListSearchShrinkRequest &) = default ;
    TrainNoListSearchShrinkRequest& operator=(TrainNoListSearchShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->arrLocation_ != nullptr
        && this->depDate_ != nullptr && this->depLocation_ != nullptr && this->optionShrink_ != nullptr && this->orderId_ != nullptr; };
    // arrLocation Field Functions 
    bool hasArrLocation() const { return this->arrLocation_ != nullptr;};
    void deleteArrLocation() { this->arrLocation_ = nullptr;};
    inline string arrLocation() const { DARABONBA_PTR_GET_DEFAULT(arrLocation_, "") };
    inline TrainNoListSearchShrinkRequest& setArrLocation(string arrLocation) { DARABONBA_PTR_SET_VALUE(arrLocation_, arrLocation) };


    // depDate Field Functions 
    bool hasDepDate() const { return this->depDate_ != nullptr;};
    void deleteDepDate() { this->depDate_ = nullptr;};
    inline string depDate() const { DARABONBA_PTR_GET_DEFAULT(depDate_, "") };
    inline TrainNoListSearchShrinkRequest& setDepDate(string depDate) { DARABONBA_PTR_SET_VALUE(depDate_, depDate) };


    // depLocation Field Functions 
    bool hasDepLocation() const { return this->depLocation_ != nullptr;};
    void deleteDepLocation() { this->depLocation_ = nullptr;};
    inline string depLocation() const { DARABONBA_PTR_GET_DEFAULT(depLocation_, "") };
    inline TrainNoListSearchShrinkRequest& setDepLocation(string depLocation) { DARABONBA_PTR_SET_VALUE(depLocation_, depLocation) };


    // optionShrink Field Functions 
    bool hasOptionShrink() const { return this->optionShrink_ != nullptr;};
    void deleteOptionShrink() { this->optionShrink_ = nullptr;};
    inline string optionShrink() const { DARABONBA_PTR_GET_DEFAULT(optionShrink_, "") };
    inline TrainNoListSearchShrinkRequest& setOptionShrink(string optionShrink) { DARABONBA_PTR_SET_VALUE(optionShrink_, optionShrink) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline TrainNoListSearchShrinkRequest& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> arrLocation_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> depDate_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> depLocation_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> optionShrink_ = nullptr;
    std::shared_ptr<string> orderId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
