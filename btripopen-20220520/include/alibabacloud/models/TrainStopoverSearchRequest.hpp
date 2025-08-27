// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRAINSTOPOVERSEARCHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_TRAINSTOPOVERSEARCHREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class TrainStopoverSearchRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TrainStopoverSearchRequest& obj) { 
      DARABONBA_PTR_TO_JSON(arr_station, arrStation_);
      DARABONBA_PTR_TO_JSON(dep_station, depStation_);
      DARABONBA_PTR_TO_JSON(train_date, trainDate_);
      DARABONBA_PTR_TO_JSON(train_no, trainNo_);
    };
    friend void from_json(const Darabonba::Json& j, TrainStopoverSearchRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(arr_station, arrStation_);
      DARABONBA_PTR_FROM_JSON(dep_station, depStation_);
      DARABONBA_PTR_FROM_JSON(train_date, trainDate_);
      DARABONBA_PTR_FROM_JSON(train_no, trainNo_);
    };
    TrainStopoverSearchRequest() = default ;
    TrainStopoverSearchRequest(const TrainStopoverSearchRequest &) = default ;
    TrainStopoverSearchRequest(TrainStopoverSearchRequest &&) = default ;
    TrainStopoverSearchRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TrainStopoverSearchRequest() = default ;
    TrainStopoverSearchRequest& operator=(const TrainStopoverSearchRequest &) = default ;
    TrainStopoverSearchRequest& operator=(TrainStopoverSearchRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->arrStation_ != nullptr
        && this->depStation_ != nullptr && this->trainDate_ != nullptr && this->trainNo_ != nullptr; };
    // arrStation Field Functions 
    bool hasArrStation() const { return this->arrStation_ != nullptr;};
    void deleteArrStation() { this->arrStation_ = nullptr;};
    inline string arrStation() const { DARABONBA_PTR_GET_DEFAULT(arrStation_, "") };
    inline TrainStopoverSearchRequest& setArrStation(string arrStation) { DARABONBA_PTR_SET_VALUE(arrStation_, arrStation) };


    // depStation Field Functions 
    bool hasDepStation() const { return this->depStation_ != nullptr;};
    void deleteDepStation() { this->depStation_ = nullptr;};
    inline string depStation() const { DARABONBA_PTR_GET_DEFAULT(depStation_, "") };
    inline TrainStopoverSearchRequest& setDepStation(string depStation) { DARABONBA_PTR_SET_VALUE(depStation_, depStation) };


    // trainDate Field Functions 
    bool hasTrainDate() const { return this->trainDate_ != nullptr;};
    void deleteTrainDate() { this->trainDate_ = nullptr;};
    inline string trainDate() const { DARABONBA_PTR_GET_DEFAULT(trainDate_, "") };
    inline TrainStopoverSearchRequest& setTrainDate(string trainDate) { DARABONBA_PTR_SET_VALUE(trainDate_, trainDate) };


    // trainNo Field Functions 
    bool hasTrainNo() const { return this->trainNo_ != nullptr;};
    void deleteTrainNo() { this->trainNo_ = nullptr;};
    inline string trainNo() const { DARABONBA_PTR_GET_DEFAULT(trainNo_, "") };
    inline TrainStopoverSearchRequest& setTrainNo(string trainNo) { DARABONBA_PTR_SET_VALUE(trainNo_, trainNo) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> arrStation_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> depStation_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> trainDate_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> trainNo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
