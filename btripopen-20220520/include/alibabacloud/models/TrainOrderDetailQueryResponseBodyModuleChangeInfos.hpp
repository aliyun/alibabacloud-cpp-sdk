// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRAINORDERDETAILQUERYRESPONSEBODYMODULECHANGEINFOS_HPP_
#define ALIBABACLOUD_MODELS_TRAINORDERDETAILQUERYRESPONSEBODYMODULECHANGEINFOS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/TrainOrderDetailQueryResponseBodyModuleChangeInfosChangeTrainInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class TrainOrderDetailQueryResponseBodyModuleChangeInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TrainOrderDetailQueryResponseBodyModuleChangeInfos& obj) { 
      DARABONBA_PTR_TO_JSON(change_apply_id, changeApplyId_);
      DARABONBA_PTR_TO_JSON(change_train_infos, changeTrainInfos_);
      DARABONBA_PTR_TO_JSON(limit_pay_time, limitPayTime_);
      DARABONBA_PTR_TO_JSON(out_change_apply_id, outChangeApplyId_);
      DARABONBA_PTR_TO_JSON(status, status_);
    };
    friend void from_json(const Darabonba::Json& j, TrainOrderDetailQueryResponseBodyModuleChangeInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(change_apply_id, changeApplyId_);
      DARABONBA_PTR_FROM_JSON(change_train_infos, changeTrainInfos_);
      DARABONBA_PTR_FROM_JSON(limit_pay_time, limitPayTime_);
      DARABONBA_PTR_FROM_JSON(out_change_apply_id, outChangeApplyId_);
      DARABONBA_PTR_FROM_JSON(status, status_);
    };
    TrainOrderDetailQueryResponseBodyModuleChangeInfos() = default ;
    TrainOrderDetailQueryResponseBodyModuleChangeInfos(const TrainOrderDetailQueryResponseBodyModuleChangeInfos &) = default ;
    TrainOrderDetailQueryResponseBodyModuleChangeInfos(TrainOrderDetailQueryResponseBodyModuleChangeInfos &&) = default ;
    TrainOrderDetailQueryResponseBodyModuleChangeInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TrainOrderDetailQueryResponseBodyModuleChangeInfos() = default ;
    TrainOrderDetailQueryResponseBodyModuleChangeInfos& operator=(const TrainOrderDetailQueryResponseBodyModuleChangeInfos &) = default ;
    TrainOrderDetailQueryResponseBodyModuleChangeInfos& operator=(TrainOrderDetailQueryResponseBodyModuleChangeInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->changeApplyId_ != nullptr
        && this->changeTrainInfos_ != nullptr && this->limitPayTime_ != nullptr && this->outChangeApplyId_ != nullptr && this->status_ != nullptr; };
    // changeApplyId Field Functions 
    bool hasChangeApplyId() const { return this->changeApplyId_ != nullptr;};
    void deleteChangeApplyId() { this->changeApplyId_ = nullptr;};
    inline string changeApplyId() const { DARABONBA_PTR_GET_DEFAULT(changeApplyId_, "") };
    inline TrainOrderDetailQueryResponseBodyModuleChangeInfos& setChangeApplyId(string changeApplyId) { DARABONBA_PTR_SET_VALUE(changeApplyId_, changeApplyId) };


    // changeTrainInfos Field Functions 
    bool hasChangeTrainInfos() const { return this->changeTrainInfos_ != nullptr;};
    void deleteChangeTrainInfos() { this->changeTrainInfos_ = nullptr;};
    inline const vector<Models::TrainOrderDetailQueryResponseBodyModuleChangeInfosChangeTrainInfos> & changeTrainInfos() const { DARABONBA_PTR_GET_CONST(changeTrainInfos_, vector<Models::TrainOrderDetailQueryResponseBodyModuleChangeInfosChangeTrainInfos>) };
    inline vector<Models::TrainOrderDetailQueryResponseBodyModuleChangeInfosChangeTrainInfos> changeTrainInfos() { DARABONBA_PTR_GET(changeTrainInfos_, vector<Models::TrainOrderDetailQueryResponseBodyModuleChangeInfosChangeTrainInfos>) };
    inline TrainOrderDetailQueryResponseBodyModuleChangeInfos& setChangeTrainInfos(const vector<Models::TrainOrderDetailQueryResponseBodyModuleChangeInfosChangeTrainInfos> & changeTrainInfos) { DARABONBA_PTR_SET_VALUE(changeTrainInfos_, changeTrainInfos) };
    inline TrainOrderDetailQueryResponseBodyModuleChangeInfos& setChangeTrainInfos(vector<Models::TrainOrderDetailQueryResponseBodyModuleChangeInfosChangeTrainInfos> && changeTrainInfos) { DARABONBA_PTR_SET_RVALUE(changeTrainInfos_, changeTrainInfos) };


    // limitPayTime Field Functions 
    bool hasLimitPayTime() const { return this->limitPayTime_ != nullptr;};
    void deleteLimitPayTime() { this->limitPayTime_ = nullptr;};
    inline string limitPayTime() const { DARABONBA_PTR_GET_DEFAULT(limitPayTime_, "") };
    inline TrainOrderDetailQueryResponseBodyModuleChangeInfos& setLimitPayTime(string limitPayTime) { DARABONBA_PTR_SET_VALUE(limitPayTime_, limitPayTime) };


    // outChangeApplyId Field Functions 
    bool hasOutChangeApplyId() const { return this->outChangeApplyId_ != nullptr;};
    void deleteOutChangeApplyId() { this->outChangeApplyId_ = nullptr;};
    inline string outChangeApplyId() const { DARABONBA_PTR_GET_DEFAULT(outChangeApplyId_, "") };
    inline TrainOrderDetailQueryResponseBodyModuleChangeInfos& setOutChangeApplyId(string outChangeApplyId) { DARABONBA_PTR_SET_VALUE(outChangeApplyId_, outChangeApplyId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline TrainOrderDetailQueryResponseBodyModuleChangeInfos& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<string> changeApplyId_ = nullptr;
    std::shared_ptr<vector<Models::TrainOrderDetailQueryResponseBodyModuleChangeInfosChangeTrainInfos>> changeTrainInfos_ = nullptr;
    std::shared_ptr<string> limitPayTime_ = nullptr;
    std::shared_ptr<string> outChangeApplyId_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
