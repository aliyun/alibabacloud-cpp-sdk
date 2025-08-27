// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRAINORDERDETAILQUERYRESPONSEBODYMODULEREFUNDINFOS_HPP_
#define ALIBABACLOUD_MODELS_TRAINORDERDETAILQUERYRESPONSEBODYMODULEREFUNDINFOS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/TrainOrderDetailQueryResponseBodyModuleRefundInfosRefundTrainInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class TrainOrderDetailQueryResponseBodyModuleRefundInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TrainOrderDetailQueryResponseBodyModuleRefundInfos& obj) { 
      DARABONBA_PTR_TO_JSON(fail_code, failCode_);
      DARABONBA_PTR_TO_JSON(fail_msg, failMsg_);
      DARABONBA_PTR_TO_JSON(out_refund_id, outRefundId_);
      DARABONBA_PTR_TO_JSON(refund_id, refundId_);
      DARABONBA_PTR_TO_JSON(refund_train_info, refundTrainInfo_);
      DARABONBA_PTR_TO_JSON(status, status_);
    };
    friend void from_json(const Darabonba::Json& j, TrainOrderDetailQueryResponseBodyModuleRefundInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(fail_code, failCode_);
      DARABONBA_PTR_FROM_JSON(fail_msg, failMsg_);
      DARABONBA_PTR_FROM_JSON(out_refund_id, outRefundId_);
      DARABONBA_PTR_FROM_JSON(refund_id, refundId_);
      DARABONBA_PTR_FROM_JSON(refund_train_info, refundTrainInfo_);
      DARABONBA_PTR_FROM_JSON(status, status_);
    };
    TrainOrderDetailQueryResponseBodyModuleRefundInfos() = default ;
    TrainOrderDetailQueryResponseBodyModuleRefundInfos(const TrainOrderDetailQueryResponseBodyModuleRefundInfos &) = default ;
    TrainOrderDetailQueryResponseBodyModuleRefundInfos(TrainOrderDetailQueryResponseBodyModuleRefundInfos &&) = default ;
    TrainOrderDetailQueryResponseBodyModuleRefundInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TrainOrderDetailQueryResponseBodyModuleRefundInfos() = default ;
    TrainOrderDetailQueryResponseBodyModuleRefundInfos& operator=(const TrainOrderDetailQueryResponseBodyModuleRefundInfos &) = default ;
    TrainOrderDetailQueryResponseBodyModuleRefundInfos& operator=(TrainOrderDetailQueryResponseBodyModuleRefundInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->failCode_ != nullptr
        && this->failMsg_ != nullptr && this->outRefundId_ != nullptr && this->refundId_ != nullptr && this->refundTrainInfo_ != nullptr && this->status_ != nullptr; };
    // failCode Field Functions 
    bool hasFailCode() const { return this->failCode_ != nullptr;};
    void deleteFailCode() { this->failCode_ = nullptr;};
    inline string failCode() const { DARABONBA_PTR_GET_DEFAULT(failCode_, "") };
    inline TrainOrderDetailQueryResponseBodyModuleRefundInfos& setFailCode(string failCode) { DARABONBA_PTR_SET_VALUE(failCode_, failCode) };


    // failMsg Field Functions 
    bool hasFailMsg() const { return this->failMsg_ != nullptr;};
    void deleteFailMsg() { this->failMsg_ = nullptr;};
    inline string failMsg() const { DARABONBA_PTR_GET_DEFAULT(failMsg_, "") };
    inline TrainOrderDetailQueryResponseBodyModuleRefundInfos& setFailMsg(string failMsg) { DARABONBA_PTR_SET_VALUE(failMsg_, failMsg) };


    // outRefundId Field Functions 
    bool hasOutRefundId() const { return this->outRefundId_ != nullptr;};
    void deleteOutRefundId() { this->outRefundId_ = nullptr;};
    inline string outRefundId() const { DARABONBA_PTR_GET_DEFAULT(outRefundId_, "") };
    inline TrainOrderDetailQueryResponseBodyModuleRefundInfos& setOutRefundId(string outRefundId) { DARABONBA_PTR_SET_VALUE(outRefundId_, outRefundId) };


    // refundId Field Functions 
    bool hasRefundId() const { return this->refundId_ != nullptr;};
    void deleteRefundId() { this->refundId_ = nullptr;};
    inline string refundId() const { DARABONBA_PTR_GET_DEFAULT(refundId_, "") };
    inline TrainOrderDetailQueryResponseBodyModuleRefundInfos& setRefundId(string refundId) { DARABONBA_PTR_SET_VALUE(refundId_, refundId) };


    // refundTrainInfo Field Functions 
    bool hasRefundTrainInfo() const { return this->refundTrainInfo_ != nullptr;};
    void deleteRefundTrainInfo() { this->refundTrainInfo_ = nullptr;};
    inline const vector<Models::TrainOrderDetailQueryResponseBodyModuleRefundInfosRefundTrainInfo> & refundTrainInfo() const { DARABONBA_PTR_GET_CONST(refundTrainInfo_, vector<Models::TrainOrderDetailQueryResponseBodyModuleRefundInfosRefundTrainInfo>) };
    inline vector<Models::TrainOrderDetailQueryResponseBodyModuleRefundInfosRefundTrainInfo> refundTrainInfo() { DARABONBA_PTR_GET(refundTrainInfo_, vector<Models::TrainOrderDetailQueryResponseBodyModuleRefundInfosRefundTrainInfo>) };
    inline TrainOrderDetailQueryResponseBodyModuleRefundInfos& setRefundTrainInfo(const vector<Models::TrainOrderDetailQueryResponseBodyModuleRefundInfosRefundTrainInfo> & refundTrainInfo) { DARABONBA_PTR_SET_VALUE(refundTrainInfo_, refundTrainInfo) };
    inline TrainOrderDetailQueryResponseBodyModuleRefundInfos& setRefundTrainInfo(vector<Models::TrainOrderDetailQueryResponseBodyModuleRefundInfosRefundTrainInfo> && refundTrainInfo) { DARABONBA_PTR_SET_RVALUE(refundTrainInfo_, refundTrainInfo) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline TrainOrderDetailQueryResponseBodyModuleRefundInfos& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<string> failCode_ = nullptr;
    std::shared_ptr<string> failMsg_ = nullptr;
    std::shared_ptr<string> outRefundId_ = nullptr;
    // String
    std::shared_ptr<string> refundId_ = nullptr;
    std::shared_ptr<vector<Models::TrainOrderDetailQueryResponseBodyModuleRefundInfosRefundTrainInfo>> refundTrainInfo_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
