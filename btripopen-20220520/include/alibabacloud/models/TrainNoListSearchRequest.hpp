// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRAINNOLISTSEARCHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_TRAINNOLISTSEARCHREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/TrainNoListSearchRequestOption.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class TrainNoListSearchRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TrainNoListSearchRequest& obj) { 
      DARABONBA_PTR_TO_JSON(arr_location, arrLocation_);
      DARABONBA_PTR_TO_JSON(dep_date, depDate_);
      DARABONBA_PTR_TO_JSON(dep_location, depLocation_);
      DARABONBA_PTR_TO_JSON(option, option_);
      DARABONBA_PTR_TO_JSON(order_id, orderId_);
    };
    friend void from_json(const Darabonba::Json& j, TrainNoListSearchRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(arr_location, arrLocation_);
      DARABONBA_PTR_FROM_JSON(dep_date, depDate_);
      DARABONBA_PTR_FROM_JSON(dep_location, depLocation_);
      DARABONBA_PTR_FROM_JSON(option, option_);
      DARABONBA_PTR_FROM_JSON(order_id, orderId_);
    };
    TrainNoListSearchRequest() = default ;
    TrainNoListSearchRequest(const TrainNoListSearchRequest &) = default ;
    TrainNoListSearchRequest(TrainNoListSearchRequest &&) = default ;
    TrainNoListSearchRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TrainNoListSearchRequest() = default ;
    TrainNoListSearchRequest& operator=(const TrainNoListSearchRequest &) = default ;
    TrainNoListSearchRequest& operator=(TrainNoListSearchRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->arrLocation_ != nullptr
        && this->depDate_ != nullptr && this->depLocation_ != nullptr && this->option_ != nullptr && this->orderId_ != nullptr; };
    // arrLocation Field Functions 
    bool hasArrLocation() const { return this->arrLocation_ != nullptr;};
    void deleteArrLocation() { this->arrLocation_ = nullptr;};
    inline string arrLocation() const { DARABONBA_PTR_GET_DEFAULT(arrLocation_, "") };
    inline TrainNoListSearchRequest& setArrLocation(string arrLocation) { DARABONBA_PTR_SET_VALUE(arrLocation_, arrLocation) };


    // depDate Field Functions 
    bool hasDepDate() const { return this->depDate_ != nullptr;};
    void deleteDepDate() { this->depDate_ = nullptr;};
    inline string depDate() const { DARABONBA_PTR_GET_DEFAULT(depDate_, "") };
    inline TrainNoListSearchRequest& setDepDate(string depDate) { DARABONBA_PTR_SET_VALUE(depDate_, depDate) };


    // depLocation Field Functions 
    bool hasDepLocation() const { return this->depLocation_ != nullptr;};
    void deleteDepLocation() { this->depLocation_ = nullptr;};
    inline string depLocation() const { DARABONBA_PTR_GET_DEFAULT(depLocation_, "") };
    inline TrainNoListSearchRequest& setDepLocation(string depLocation) { DARABONBA_PTR_SET_VALUE(depLocation_, depLocation) };


    // option Field Functions 
    bool hasOption() const { return this->option_ != nullptr;};
    void deleteOption() { this->option_ = nullptr;};
    inline const TrainNoListSearchRequestOption & option() const { DARABONBA_PTR_GET_CONST(option_, TrainNoListSearchRequestOption) };
    inline TrainNoListSearchRequestOption option() { DARABONBA_PTR_GET(option_, TrainNoListSearchRequestOption) };
    inline TrainNoListSearchRequest& setOption(const TrainNoListSearchRequestOption & option) { DARABONBA_PTR_SET_VALUE(option_, option) };
    inline TrainNoListSearchRequest& setOption(TrainNoListSearchRequestOption && option) { DARABONBA_PTR_SET_RVALUE(option_, option) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline TrainNoListSearchRequest& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> arrLocation_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> depDate_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> depLocation_ = nullptr;
    // This parameter is required.
    std::shared_ptr<TrainNoListSearchRequestOption> option_ = nullptr;
    std::shared_ptr<string> orderId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
