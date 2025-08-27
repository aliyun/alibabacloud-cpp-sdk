// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRAINORDERDETAILQUERYRESPONSEBODYMODULEREFUNDINFOSREFUNDTRAININFO_HPP_
#define ALIBABACLOUD_MODELS_TRAINORDERDETAILQUERYRESPONSEBODYMODULEREFUNDINFOSREFUNDTRAININFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/TrainOrderDetailQueryResponseBodyModuleRefundInfosRefundTrainInfoRefundTicketInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class TrainOrderDetailQueryResponseBodyModuleRefundInfosRefundTrainInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TrainOrderDetailQueryResponseBodyModuleRefundInfosRefundTrainInfo& obj) { 
      DARABONBA_PTR_TO_JSON(arr_station_name, arrStationName_);
      DARABONBA_PTR_TO_JSON(arr_time, arrTime_);
      DARABONBA_PTR_TO_JSON(dep_station_code, depStationCode_);
      DARABONBA_PTR_TO_JSON(dep_station_name, depStationName_);
      DARABONBA_PTR_TO_JSON(dep_time, depTime_);
      DARABONBA_PTR_TO_JSON(refund_ticket_infos, refundTicketInfos_);
      DARABONBA_PTR_TO_JSON(train_no, trainNo_);
    };
    friend void from_json(const Darabonba::Json& j, TrainOrderDetailQueryResponseBodyModuleRefundInfosRefundTrainInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(arr_station_name, arrStationName_);
      DARABONBA_PTR_FROM_JSON(arr_time, arrTime_);
      DARABONBA_PTR_FROM_JSON(dep_station_code, depStationCode_);
      DARABONBA_PTR_FROM_JSON(dep_station_name, depStationName_);
      DARABONBA_PTR_FROM_JSON(dep_time, depTime_);
      DARABONBA_PTR_FROM_JSON(refund_ticket_infos, refundTicketInfos_);
      DARABONBA_PTR_FROM_JSON(train_no, trainNo_);
    };
    TrainOrderDetailQueryResponseBodyModuleRefundInfosRefundTrainInfo() = default ;
    TrainOrderDetailQueryResponseBodyModuleRefundInfosRefundTrainInfo(const TrainOrderDetailQueryResponseBodyModuleRefundInfosRefundTrainInfo &) = default ;
    TrainOrderDetailQueryResponseBodyModuleRefundInfosRefundTrainInfo(TrainOrderDetailQueryResponseBodyModuleRefundInfosRefundTrainInfo &&) = default ;
    TrainOrderDetailQueryResponseBodyModuleRefundInfosRefundTrainInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TrainOrderDetailQueryResponseBodyModuleRefundInfosRefundTrainInfo() = default ;
    TrainOrderDetailQueryResponseBodyModuleRefundInfosRefundTrainInfo& operator=(const TrainOrderDetailQueryResponseBodyModuleRefundInfosRefundTrainInfo &) = default ;
    TrainOrderDetailQueryResponseBodyModuleRefundInfosRefundTrainInfo& operator=(TrainOrderDetailQueryResponseBodyModuleRefundInfosRefundTrainInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->arrStationName_ != nullptr
        && this->arrTime_ != nullptr && this->depStationCode_ != nullptr && this->depStationName_ != nullptr && this->depTime_ != nullptr && this->refundTicketInfos_ != nullptr
        && this->trainNo_ != nullptr; };
    // arrStationName Field Functions 
    bool hasArrStationName() const { return this->arrStationName_ != nullptr;};
    void deleteArrStationName() { this->arrStationName_ = nullptr;};
    inline string arrStationName() const { DARABONBA_PTR_GET_DEFAULT(arrStationName_, "") };
    inline TrainOrderDetailQueryResponseBodyModuleRefundInfosRefundTrainInfo& setArrStationName(string arrStationName) { DARABONBA_PTR_SET_VALUE(arrStationName_, arrStationName) };


    // arrTime Field Functions 
    bool hasArrTime() const { return this->arrTime_ != nullptr;};
    void deleteArrTime() { this->arrTime_ = nullptr;};
    inline string arrTime() const { DARABONBA_PTR_GET_DEFAULT(arrTime_, "") };
    inline TrainOrderDetailQueryResponseBodyModuleRefundInfosRefundTrainInfo& setArrTime(string arrTime) { DARABONBA_PTR_SET_VALUE(arrTime_, arrTime) };


    // depStationCode Field Functions 
    bool hasDepStationCode() const { return this->depStationCode_ != nullptr;};
    void deleteDepStationCode() { this->depStationCode_ = nullptr;};
    inline string depStationCode() const { DARABONBA_PTR_GET_DEFAULT(depStationCode_, "") };
    inline TrainOrderDetailQueryResponseBodyModuleRefundInfosRefundTrainInfo& setDepStationCode(string depStationCode) { DARABONBA_PTR_SET_VALUE(depStationCode_, depStationCode) };


    // depStationName Field Functions 
    bool hasDepStationName() const { return this->depStationName_ != nullptr;};
    void deleteDepStationName() { this->depStationName_ = nullptr;};
    inline string depStationName() const { DARABONBA_PTR_GET_DEFAULT(depStationName_, "") };
    inline TrainOrderDetailQueryResponseBodyModuleRefundInfosRefundTrainInfo& setDepStationName(string depStationName) { DARABONBA_PTR_SET_VALUE(depStationName_, depStationName) };


    // depTime Field Functions 
    bool hasDepTime() const { return this->depTime_ != nullptr;};
    void deleteDepTime() { this->depTime_ = nullptr;};
    inline string depTime() const { DARABONBA_PTR_GET_DEFAULT(depTime_, "") };
    inline TrainOrderDetailQueryResponseBodyModuleRefundInfosRefundTrainInfo& setDepTime(string depTime) { DARABONBA_PTR_SET_VALUE(depTime_, depTime) };


    // refundTicketInfos Field Functions 
    bool hasRefundTicketInfos() const { return this->refundTicketInfos_ != nullptr;};
    void deleteRefundTicketInfos() { this->refundTicketInfos_ = nullptr;};
    inline const vector<Models::TrainOrderDetailQueryResponseBodyModuleRefundInfosRefundTrainInfoRefundTicketInfos> & refundTicketInfos() const { DARABONBA_PTR_GET_CONST(refundTicketInfos_, vector<Models::TrainOrderDetailQueryResponseBodyModuleRefundInfosRefundTrainInfoRefundTicketInfos>) };
    inline vector<Models::TrainOrderDetailQueryResponseBodyModuleRefundInfosRefundTrainInfoRefundTicketInfos> refundTicketInfos() { DARABONBA_PTR_GET(refundTicketInfos_, vector<Models::TrainOrderDetailQueryResponseBodyModuleRefundInfosRefundTrainInfoRefundTicketInfos>) };
    inline TrainOrderDetailQueryResponseBodyModuleRefundInfosRefundTrainInfo& setRefundTicketInfos(const vector<Models::TrainOrderDetailQueryResponseBodyModuleRefundInfosRefundTrainInfoRefundTicketInfos> & refundTicketInfos) { DARABONBA_PTR_SET_VALUE(refundTicketInfos_, refundTicketInfos) };
    inline TrainOrderDetailQueryResponseBodyModuleRefundInfosRefundTrainInfo& setRefundTicketInfos(vector<Models::TrainOrderDetailQueryResponseBodyModuleRefundInfosRefundTrainInfoRefundTicketInfos> && refundTicketInfos) { DARABONBA_PTR_SET_RVALUE(refundTicketInfos_, refundTicketInfos) };


    // trainNo Field Functions 
    bool hasTrainNo() const { return this->trainNo_ != nullptr;};
    void deleteTrainNo() { this->trainNo_ = nullptr;};
    inline string trainNo() const { DARABONBA_PTR_GET_DEFAULT(trainNo_, "") };
    inline TrainOrderDetailQueryResponseBodyModuleRefundInfosRefundTrainInfo& setTrainNo(string trainNo) { DARABONBA_PTR_SET_VALUE(trainNo_, trainNo) };


  protected:
    std::shared_ptr<string> arrStationName_ = nullptr;
    std::shared_ptr<string> arrTime_ = nullptr;
    std::shared_ptr<string> depStationCode_ = nullptr;
    std::shared_ptr<string> depStationName_ = nullptr;
    std::shared_ptr<string> depTime_ = nullptr;
    std::shared_ptr<vector<Models::TrainOrderDetailQueryResponseBodyModuleRefundInfosRefundTrainInfoRefundTicketInfos>> refundTicketInfos_ = nullptr;
    std::shared_ptr<string> trainNo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
