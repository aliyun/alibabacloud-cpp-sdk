// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRAINNOINFOSEARCHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_TRAINNOINFOSEARCHREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class TrainNoInfoSearchRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TrainNoInfoSearchRequest& obj) { 
      DARABONBA_PTR_TO_JSON(arr_location, arrLocation_);
      DARABONBA_PTR_TO_JSON(dep_date, depDate_);
      DARABONBA_PTR_TO_JSON(dep_location, depLocation_);
      DARABONBA_PTR_TO_JSON(line_key, lineKey_);
      DARABONBA_PTR_TO_JSON(middle_date, middleDate_);
      DARABONBA_PTR_TO_JSON(middle_station, middleStation_);
      DARABONBA_PTR_TO_JSON(order_id, orderId_);
      DARABONBA_PTR_TO_JSON(train_no, trainNo_);
    };
    friend void from_json(const Darabonba::Json& j, TrainNoInfoSearchRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(arr_location, arrLocation_);
      DARABONBA_PTR_FROM_JSON(dep_date, depDate_);
      DARABONBA_PTR_FROM_JSON(dep_location, depLocation_);
      DARABONBA_PTR_FROM_JSON(line_key, lineKey_);
      DARABONBA_PTR_FROM_JSON(middle_date, middleDate_);
      DARABONBA_PTR_FROM_JSON(middle_station, middleStation_);
      DARABONBA_PTR_FROM_JSON(order_id, orderId_);
      DARABONBA_PTR_FROM_JSON(train_no, trainNo_);
    };
    TrainNoInfoSearchRequest() = default ;
    TrainNoInfoSearchRequest(const TrainNoInfoSearchRequest &) = default ;
    TrainNoInfoSearchRequest(TrainNoInfoSearchRequest &&) = default ;
    TrainNoInfoSearchRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TrainNoInfoSearchRequest() = default ;
    TrainNoInfoSearchRequest& operator=(const TrainNoInfoSearchRequest &) = default ;
    TrainNoInfoSearchRequest& operator=(TrainNoInfoSearchRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->arrLocation_ != nullptr
        && this->depDate_ != nullptr && this->depLocation_ != nullptr && this->lineKey_ != nullptr && this->middleDate_ != nullptr && this->middleStation_ != nullptr
        && this->orderId_ != nullptr && this->trainNo_ != nullptr; };
    // arrLocation Field Functions 
    bool hasArrLocation() const { return this->arrLocation_ != nullptr;};
    void deleteArrLocation() { this->arrLocation_ = nullptr;};
    inline string arrLocation() const { DARABONBA_PTR_GET_DEFAULT(arrLocation_, "") };
    inline TrainNoInfoSearchRequest& setArrLocation(string arrLocation) { DARABONBA_PTR_SET_VALUE(arrLocation_, arrLocation) };


    // depDate Field Functions 
    bool hasDepDate() const { return this->depDate_ != nullptr;};
    void deleteDepDate() { this->depDate_ = nullptr;};
    inline string depDate() const { DARABONBA_PTR_GET_DEFAULT(depDate_, "") };
    inline TrainNoInfoSearchRequest& setDepDate(string depDate) { DARABONBA_PTR_SET_VALUE(depDate_, depDate) };


    // depLocation Field Functions 
    bool hasDepLocation() const { return this->depLocation_ != nullptr;};
    void deleteDepLocation() { this->depLocation_ = nullptr;};
    inline string depLocation() const { DARABONBA_PTR_GET_DEFAULT(depLocation_, "") };
    inline TrainNoInfoSearchRequest& setDepLocation(string depLocation) { DARABONBA_PTR_SET_VALUE(depLocation_, depLocation) };


    // lineKey Field Functions 
    bool hasLineKey() const { return this->lineKey_ != nullptr;};
    void deleteLineKey() { this->lineKey_ = nullptr;};
    inline string lineKey() const { DARABONBA_PTR_GET_DEFAULT(lineKey_, "") };
    inline TrainNoInfoSearchRequest& setLineKey(string lineKey) { DARABONBA_PTR_SET_VALUE(lineKey_, lineKey) };


    // middleDate Field Functions 
    bool hasMiddleDate() const { return this->middleDate_ != nullptr;};
    void deleteMiddleDate() { this->middleDate_ = nullptr;};
    inline string middleDate() const { DARABONBA_PTR_GET_DEFAULT(middleDate_, "") };
    inline TrainNoInfoSearchRequest& setMiddleDate(string middleDate) { DARABONBA_PTR_SET_VALUE(middleDate_, middleDate) };


    // middleStation Field Functions 
    bool hasMiddleStation() const { return this->middleStation_ != nullptr;};
    void deleteMiddleStation() { this->middleStation_ = nullptr;};
    inline string middleStation() const { DARABONBA_PTR_GET_DEFAULT(middleStation_, "") };
    inline TrainNoInfoSearchRequest& setMiddleStation(string middleStation) { DARABONBA_PTR_SET_VALUE(middleStation_, middleStation) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline TrainNoInfoSearchRequest& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // trainNo Field Functions 
    bool hasTrainNo() const { return this->trainNo_ != nullptr;};
    void deleteTrainNo() { this->trainNo_ = nullptr;};
    inline string trainNo() const { DARABONBA_PTR_GET_DEFAULT(trainNo_, "") };
    inline TrainNoInfoSearchRequest& setTrainNo(string trainNo) { DARABONBA_PTR_SET_VALUE(trainNo_, trainNo) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> arrLocation_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> depDate_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> depLocation_ = nullptr;
    std::shared_ptr<string> lineKey_ = nullptr;
    std::shared_ptr<string> middleDate_ = nullptr;
    std::shared_ptr<string> middleStation_ = nullptr;
    std::shared_ptr<string> orderId_ = nullptr;
    std::shared_ptr<string> trainNo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
